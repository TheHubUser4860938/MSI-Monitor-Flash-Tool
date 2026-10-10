// SPDX-License-Identifier: MIT
/*
 * msi_auxch — kernel-context RM DP-AUX relay prototype (workflow Phase 8).
 *
 * Kill-switch analysis (STATUS session 14d) proved the static GO case:
 *   nvidia_get_rm_ops()  (EXPORT_SYMBOL_GPL, kernel-open/nvidia/
 *     nv-modeset-interface.c:146)
 *   -> ops.op = rm_kernel_rmapi_op (src/nvidia/arch/nvalloc/unix/src/
 *      osapi.c:5218)
 *   -> NV04_ALLOC / NV04_CONTROL enter RM with bUserModeArgs=FALSE
 *      (entry_points.c:127)  =>  privLevel = RS_PRIV_LEVEL_KERNEL
 *      (deprecated_context.c:184)  =>  the osIsGpuAccessible fd-table gate
 *      (device.c:140, only enforced for privLevel < KERNEL) and the
 *      userspace NV_ESC_CHECK_VERSION string gate (615.78 strictness) are
 *      both skipped.  NV0073 control 0x731341 dispatches with
 *      accessRight=0x0 and executes in GSP-RM, which never sees process
 *      origin (every host call is kernel-originated anyway).
 *
 * This module rebuilds the EXACT proven userspace tree (msi_isp/nvrm.py +
 * nvbus.py: root client -> device -> NV0073 -> displayId discovery ->
 * DPCD0 + EDID oracles) from kernel context at insmod, then exposes
 * /dev/msi-auxch relaying raw AUXCH transactions via ioctl for
 * UNPRIVILEGED userspace. Writes aimed at the ISP register-file slaves
 * (7-bit 0x18..0x22) additionally require the timed MSI_AUXCH_UNLOCK
 * ioctl; see the gate defines below for the security posture.
 *
 * Build: needs headers from an open-gpu-kernel-modules checkout at the
 * SAME version as the loaded driver (see Makefile OGKM=). nvidia.ko must
 * already be loaded. Uses GPL-only symbols -> "Dual MIT/GPL".
 */
#include <linux/module.h>
#include <linux/kernel.h>
#include <linux/init.h>
#include <linux/fs.h>
#include <linux/cdev.h>
#include <linux/device.h>
#include <linux/uaccess.h>
#include <linux/mutex.h>
#include <linux/ioctl.h>
#include <linux/ktime.h>
#include <linux/slab.h>

#include "nv-modeset-interface.h"      /* nvidia_get_rm_ops + ops struct   */
#include "nv-kernel-rmapi-ops.h"       /* nvidia_kernel_rmapi_ops_t        */
#include "nvos.h"                      /* NVOS64/NVOS54/NVOS00 + op codes  */
#include "class/cl0000.h"              /* NV01_ROOT                        */
#include "class/cl0080.h"              /* NV01_DEVICE_0 + alloc params     */
#include "ctrl/ctrl0073/ctrl0073dp.h"  /* NV0073_CTRL_CMD_DP_AUXCH_CTRL    */

#define DRV        "msi_auxch"
#define CL_DISPLAY_COMMON  0x73u       /* NV04_DISPLAY_COMMON (cl0073)     */
/* replyType encoding live-proven (nvrm.REPLY: 0 ACK, 1 NACK, 2 DEFER,
 * 3 TIMEOUT, 4 I2CNACK, 8 I2CDEFER): */
#define AUX_REPLY_ACK      0u
/* cmd composition, live-verified (nvbus.py, sessions 12-13):
 * bit3: 0=I2C mode 1=native AUX; bit2: MOT (message-open); bit1:0 req
 * 0=write 1=read; addr field = plain 7-bit slave in I2C mode. */
#define AUX_MODE_AUX       (1u << 3)
#define AUX_MOT            (1u << 2)
#define AUX_REQ_WRITE      0u
#define AUX_REQ_READ       1u

/* Security gate: I2C-mode WRITES to the scaler's ISP register-file slaves
 * (7-bit 0x18..0x22) are refused with EPERM until userspace explicitly
 * unlocks.  The unlock is timed (5 s) and logged: "unlocked to run flash"
 * is a decision, "still unlocked an hour later" is an accident.  Reads and
 * pointer writes to 0x50/0x37 (ordinary DDC behavior) stay free.
 * Group policy: node is 0660; ship kernel/99-msi-auxch.rules (root:video)
 * to open it to the group that already owns the DDC bus. */
#define ISP_SLAVE_MIN      0x18u
#define ISP_SLAVE_MAX      0x22u
#define UNLOCK_MS          5000u

static nvidia_modeset_rm_ops_t rm_ops;
static nvidia_modeset_stack_ptr sp;
static DEFINE_MUTEX(rm_lock);

static NvU32 hClient, hDevice, hDisp;
static NvU32 gpu_id, disp_id, sub_inst;
static bool tree_ok;
static ktime_t unlock_deadline;            /* ISP writes allowed only before */

static dev_t devt;
static struct cdev vcdev;
static struct class *vclass;
static struct device *vdevice;

/* userspace relay request: raw AUXCH transaction; kernel overrides
 * subDeviceInstance/displayId from the discovered tree. */
struct auxch_xfer {
    NvU32 cmd;
    NvU32 addr;
    NvU32 bAddrOnly;
    NvU32 size;                                  /* 0-based [IN], bytes-1 */
    NvU8  data[NV0073_CTRL_DP_AUXCH_MAX_DATA_SIZE];
    NvU32 retryTimeMs;
    NvU32 replyType;                             /* [OUT] */
    NvU32 sizeDone;                              /* [OUT] bytes completed */
    NvU32 rmStatus;                              /* [OUT] control status  */
};
#define MSI_AUXCH_XFER _IOWR('M', 0x41, struct auxch_xfer)
/* arming write access to ISP slaves for UNLOCK_MS; logged, timed, and
 * deliberately cheap: the gate is intention, not inconvenience. */
#define MSI_AUXCH_UNLOCK _IO('M', 0x42)

/* Bulk I2C-over-AUX relay (0x73137C): 256 B/transaction, GSP-RM splits and
 * ACK-retries internally. From userland this control answers 0x23
 * (INVALID_CLIENT: the fd-table gate); from kernel context that gate is
 * skipped -- that is the whole kill-switch thesis being tested. addr is
 * passed through VERBATIM (SDK: DP spec 2.4, "first 20 bits valid"),
 * unlike XFER's plain-7-bit field: whether that means 8-bit DDC form or
 * something else is what the live experiment decides.
 * No replyType field exists here: NV_OK means the message completed. */
#define BULK_MAX_DATA 256
struct auxch_bulk {
    __u32 addr;
    __u32 bWrite;
    __u32 size;                                /* IN: requested, OUT: done */
    __u8  data[BULK_MAX_DATA];
    __u32 rmStatus;                            /* [OUT] */
};
#define MSI_AUXCH_BULK _IOWR('M', 0x43, struct auxch_bulk)

static bool isp_write_gated(u32 cmd, u32 addr7, bool addr_only)
{
    if (addr_only)                          /* bare address phase: zero data
                                             * bytes, cannot alter state —
                                             * same shape nvbus proved safe
                                             * against the ISP slaves */
        return false;
    if (cmd & AUX_MODE_AUX)                 /* native AUX: DPCD space, free */
        return false;
    if ((cmd & 3u) != AUX_REQ_WRITE)
        return false;
    if (addr7 < ISP_SLAVE_MIN || addr7 > ISP_SLAVE_MAX)
        return false;
    /* unlocked only *before* the deadline: deadline=0 at module load, so
     * ISP writes start locked and a forgotten unlock expires by itself */
    return ktime_after(ktime_get(), unlock_deadline);
}

/* ---- rm_kernel_rmapi_op wrappers (kernel-memory params, KERNEL priv) -- */
static NvU32 rm_alloc(NvU32 hParent, NvU32 hClass, void *params,
                      NvU32 psize, NvU32 *hOut)
{
    nvidia_kernel_rmapi_ops_t op;

    memset(&op, 0, sizeof(op));
    op.op = NV04_ALLOC;
    op.params.alloc.hRoot            = hClient;  /* ignored at root alloc */
    op.params.alloc.hObjectParent    = hParent;
    op.params.alloc.hObjectNew       = 0;        /* let RM assign */
    op.params.alloc.hClass           = hClass;
    op.params.alloc.pAllocParms      = (NvP64)(uintptr_t)params;
    op.params.alloc.pRightsRequested = 0;
    op.params.alloc.paramsSize       = psize;
    rm_ops.op(sp, &op);
    *hOut = op.params.alloc.hObjectNew;
    return op.params.alloc.status;
}

static NvU32 rm_control(NvU32 hObj, NvU32 cmd, void *params, NvU32 psize)
{
    nvidia_kernel_rmapi_ops_t op;

    memset(&op, 0, sizeof(op));
    op.op = NV04_CONTROL;
    op.params.control.hClient    = hClient;
    op.params.control.hObject    = hObj;
    op.params.control.cmd        = cmd;
    op.params.control.flags      = NVOS54_FLAGS_NONE;
    op.params.control.params     = (NvP64)(uintptr_t)params;
    op.params.control.paramsSize = psize;
    rm_ops.op(sp, &op);
    return op.params.control.status;
}

static NvU32 rm_free(NvU32 hParent, NvU32 hObj)
{
    nvidia_kernel_rmapi_ops_t op;

    memset(&op, 0, sizeof(op));
    op.op = NV01_FREE;
    op.params.free.hRoot         = hClient;
    op.params.free.hObjectParent = hParent;
    op.params.free.hObjectOld    = hObj;
    rm_ops.op(sp, &op);
    return op.params.free.status;
}

/* one AUXCH transaction on the discovered display */
static NvU32 auxch(NV0073_CTRL_DP_AUXCH_CTRL_PARAMS *a)
{
    a->subDeviceInstance = sub_inst;
    a->displayId = disp_id;
    return rm_control(hDisp, NV0073_CTRL_CMD_DP_AUXCH_CTRL, a, sizeof(*a));
}

/* one BULK I2C transfer (0x73137C) — kernel-privilege path under test */
static NvU32 bulk_i2c(NV0073_CTRL_DP_AUXCH_I2C_TRANSFER_CTRL_PARAMS *p)
{
    p->subDeviceInstance = sub_inst;
    p->displayId = disp_id;
    return rm_control(hDisp, NV0073_CTRL_CMD_DP_AUXCH_I2C_TRANSFER_CTRL,
                      p, sizeof(*p));
}

/* addr arrives verbatim, so its encoding (7-bit vs 8-bit DDC) is undecided
 * until the experiment speaks; gate BOTH readings of the ISP set:
 * 7-bit 0x18..0x22 and 8-bit 0x30..0x45.  EDID/branch/DDC-CI (8-bit) forms
 * stay free; a 7-bit 0x37 DDC-CI bulk write pays one unlock — deliberate. */
static bool bulk_write_gated(u32 addr, u32 bwrite, u32 size)
{
    if (!bwrite || size == 0)               /* read / address-only: free */
        return false;
    if (addr >= ISP_SLAVE_MIN && addr <= ISP_SLAVE_MAX)
        return ktime_after(ktime_get(), unlock_deadline);
    if (addr >= (ISP_SLAVE_MIN << 1) && addr <= ((ISP_SLAVE_MAX << 1) | 1))
        return ktime_after(ktime_get(), unlock_deadline);
    return false;
}

/* ---- relay chardev (unprivileged acceptance surface) ------------------ */
static long msi_ioctl(struct file *f, unsigned int ioc, unsigned long arg)
{
    NV0073_CTRL_DP_AUXCH_CTRL_PARAMS a;
    struct auxch_xfer u;

    if (ioc == MSI_AUXCH_UNLOCK) {
        mutex_lock(&rm_lock);
        unlock_deadline = ktime_add(ktime_get(),
                                    ktime_set(UNLOCK_MS / 1000,
                                              (UNLOCK_MS % 1000) * 1000000ULL));
        pr_info(DRV ": ISP slave writes unlocked for %u ms (pid %d)\n",
                UNLOCK_MS, current->pid);
        mutex_unlock(&rm_lock);
        return 0;
    }
    if (ioc == MSI_AUXCH_BULK) {
        NV0073_CTRL_DP_AUXCH_I2C_TRANSFER_CTRL_PARAMS p;
        struct auxch_bulk bu;

        if (copy_from_user(&bu, (void __user *)arg, sizeof(bu)))
            return -EFAULT;
        if (bu.size > BULK_MAX_DATA)
            return -EINVAL;
        memset(&p, 0, sizeof(p));
        p.addr = bu.addr;
        p.bWrite = bu.bWrite ? NV_TRUE : NV_FALSE;
        p.size = bu.size;
        memcpy(p.data, bu.data, BULK_MAX_DATA);

        mutex_lock(&rm_lock);
        if (!tree_ok) {
            mutex_unlock(&rm_lock);
            return -ENODEV;
        }
        if (bulk_write_gated(bu.addr, bu.bWrite, bu.size)) {
            mutex_unlock(&rm_lock);
            return -EPERM;                   /* MSI_AUXCH_UNLOCK arms this */
        }
        bu.rmStatus = bulk_i2c(&p);
        mutex_unlock(&rm_lock);

        bu.size = p.size;                    /* OUT: bytes completed */
        memcpy(bu.data, p.data, BULK_MAX_DATA);
        if (copy_to_user((void __user *)arg, &bu, sizeof(bu)))
            return -EFAULT;
        return 0;
    }
    if (ioc != MSI_AUXCH_XFER)
        return -ENOTTY;
    if (copy_from_user(&u, (void __user *)arg, sizeof(u)))
        return -EFAULT;

    memset(&a, 0, sizeof(a));
    a.cmd = u.cmd;
    a.addr = u.addr;
    a.bAddrOnly = u.bAddrOnly;
    a.size = u.size;
    a.retryTimeMs = u.retryTimeMs;
    memcpy(a.data, u.data, sizeof(a.data));

    mutex_lock(&rm_lock);
    if (!tree_ok) {
        mutex_unlock(&rm_lock);
        return -ENODEV;
    }
    if (isp_write_gated(u.cmd, u.addr, u.bAddrOnly != 0)) {
        mutex_unlock(&rm_lock);
        return -EPERM;                       /* MSI_AUXCH_UNLOCK arms this */
    }
    u.rmStatus = auxch(&a);
    mutex_unlock(&rm_lock);

    u.replyType = a.replyType;
    u.sizeDone = a.size;                 /* OUT: bytes completed */
    memcpy(u.data, a.data, sizeof(u.data));
    if (copy_to_user((void __user *)arg, &u, sizeof(u)))
        return -EFAULT;
    return 0;
}

static const struct file_operations msi_fops = {
    .owner          = THIS_MODULE,
    .unlocked_ioctl = msi_ioctl,
    .compat_ioctl   = msi_ioctl,
};

static char *msi_devnode(const struct device *dev, umode_t *mode)
{
    if (mode)
        *mode = 0660;                    /* group opens it via the shipped
                                            udev rule (root:video); without
                                            the rule the node stays
                                            root-only — safe default */
    return kstrdup(dev_name(dev), GFP_KERNEL);
}

static void tree_down(void)
{
    if (hDisp)
        pr_info(DRV ": free NV0073: %#x\n", rm_free(hDevice, hDisp));
    if (hDevice)
        pr_info(DRV ": free device: %#x\n", rm_free(hClient, hDevice));
    if (hClient)
        pr_info(DRV ": free client: %#x\n", rm_free(0, hClient));
    hDisp = hDevice = hClient = 0;
    if (gpu_id) {
        rm_ops.close_gpu(gpu_id, sp, NV_FALSE);
        gpu_id = 0;
    }
}

static int __init msi_auxch_init(void)
{
    static const NvU32 cand[] = { 0x200, 0x100, 0x180, 0x1C0,
                                  0xE0, 0xE1, 0x80, 0x400 };
    nv_gpu_info_t gi[NV_MAX_GPUS];
    NvU32 st, n, i, q[8];
    int ret = 0;

    /* ops handshake: the driver overwrites version_string with its
     * NV_VERSION_STRING on mismatch; retry once with the fresh pointer. */
    memset(&rm_ops, 0, sizeof(rm_ops));
    rm_ops.version_string = "";
    if (nvidia_get_rm_ops(&rm_ops) != 0 &&
        nvidia_get_rm_ops(&rm_ops) != 0) {
        pr_err(DRV ": nvidia_get_rm_ops failed (nvidia.ko loaded?)\n");
        return -ENODEV;
    }
    pr_info(DRV ": linked against NVRM %s\n", rm_ops.version_string);

    if (rm_ops.alloc_stack(&sp) != 0) {
        pr_err(DRV ": alloc_stack failed\n");
        return -ENODEV;
    }

    n = rm_ops.enumerate_gpus(gi);
    if (n == 0) {
        pr_err(DRV ": no GPUs enumerated\n");
        rm_ops.free_stack(sp);
        return -ENODEV;
    }
    gpu_id = gi[0].gpu_id;
    if (rm_ops.open_gpu(gpu_id, sp, NV_FALSE) != 0) {
        pr_err(DRV ": open_gpu(%#x) failed\n", gpu_id);
        gpu_id = 0;
        rm_ops.free_stack(sp);
        return -ENODEV;
    }
    pr_info(DRV ": gpu %#x opened (kernel equivalent of /dev/nvidiaN)\n",
            gpu_id);

    /* ---- the proven tree, from kernel context ---- */
    st = rm_alloc(0, NV01_ROOT, NULL, 0, &hClient);
    pr_info(DRV ": NV01_ROOT       status=%#x handle=%#x\n", st, hClient);
    if (st != 0 || hClient == 0)
        goto out_gpu;

    memset(q, 0, sizeof(q));
    q[0] = gpu_id;
    st = rm_control(hClient, 0x205u, q, 32);  /* GET_ID_INFO_V2, proven on
                                                 hClient (nvrm.py:411-428) */
    if (st == 0) {
        sub_inst = q[3];
        pr_info(DRV ": id_info dev=%u sub=%u\n", q[2], q[3]);
    } else {
        pr_info(DRV ": id_info status=%#x (falling back to 0/0)\n", st);
    }
    {
        NV0080_ALLOC_PARAMETERS p0080;

        memset(&p0080, 0, sizeof(p0080));
        p0080.deviceId = (st == 0) ? q[2] : 0;
        st = rm_alloc(hClient, NV01_DEVICE_0, &p0080, sizeof(p0080),
                      &hDevice);
        pr_info(DRV ": NV01_DEVICE_0 status=%#x handle=%#x\n", st, hDevice);
        if (st != 0 || hDevice == 0)
            goto out_tree;
    }
    st = rm_alloc(hDevice, CL_DISPLAY_COMMON, NULL, 0, &hDisp);
    pr_info(DRV ": NV0073          status=%#x handle=%#x\n", st, hDisp);
    if (st != 0 || hDisp == 0)
        goto out_tree;

    /* displayId discovery: DPCD0 native read must answer (oracle) */
    for (i = 0; i < ARRAY_SIZE(cand); i++) {
        NV0073_CTRL_DP_AUXCH_CTRL_PARAMS a;

        memset(&a, 0, sizeof(a));
        a.displayId = cand[i];
        a.cmd = AUX_MODE_AUX | AUX_REQ_READ;
        a.addr = 0;                        /* DPCD address 0 */
        a.size = 0;                        /* 1 byte (0-based) */
        st = rm_control(hDisp, NV0073_CTRL_CMD_DP_AUXCH_CTRL,
                        &a, sizeof(a));
        pr_info(DRV ": probe displayId %#05x: st=%#x reply=%u b0=%#02x\n",
                cand[i], st, a.replyType, a.data[0]);
        if (st == 0 && a.replyType == AUX_REPLY_ACK && a.data[0] != 0) {
            disp_id = cand[i];
            break;
        }
    }
    if (disp_id == 0) {
        pr_warn(DRV ": no live DP display — tree up, oracle dead\n");
        goto out_tree;
    }

    /* EDID parity oracle (nvbus framing): pointer write, 8 B read with
     * MOT chained, bare-address terminate. */
    {
        NV0073_CTRL_DP_AUXCH_CTRL_PARAMS a;
        NvU8 edid[8];

        memset(&a, 0, sizeof(a));
        a.cmd = AUX_REQ_WRITE | AUX_MOT;
        a.addr = 0x50;
        a.data[0] = 0x00;                  /* EDID pointer byte */
        a.size = 0;
        st = auxch(&a);
        pr_info(DRV ": 0x50 pointer write: st=%#x reply=%u\n",
                st, a.replyType);

        memset(&a, 0, sizeof(a));
        a.cmd = AUX_REQ_READ | AUX_MOT;
        a.addr = 0x50;
        a.size = 7;                        /* 8 bytes */
        st = auxch(&a);
        if (st == 0 && a.replyType == AUX_REPLY_ACK)
            memcpy(edid, a.data, 8);
        else
            memset(edid, 0xEE, sizeof(edid));
        pr_info(DRV ": 0x50 read 8B: st=%#x reply=%u data=%*ph "
                     "(EDID header: 00 ff ff ff ff ff ff 00)\n",
                st, a.replyType, 8, edid);

        memset(&a, 0, sizeof(a));
        a.bAddrOnly = 1;                   /* bare-address close, MOT clear */
        a.cmd = AUX_REQ_WRITE;
        a.addr = 0x50;
        st = auxch(&a);
        pr_info(DRV ": 0x50 terminate: st=%#x reply=%u\n", st, a.replyType);

        tree_ok = (st == 0 && a.replyType == AUX_REPLY_ACK);
    }

    /* ---- unprivileged relay chardev ---- */
    if (alloc_chrdev_region(&devt, 0, 1, DRV) < 0) {
        ret = -ENOMEM;
        goto out_tree;
    }
    vclass = class_create(DRV);
    if (IS_ERR(vclass)) {
        ret = PTR_ERR(vclass);
        vclass = NULL;
        goto out_cdev_region;
    }
    vclass->devnode = msi_devnode;
    cdev_init(&vcdev, &msi_fops);
    vcdev.owner = THIS_MODULE;
    if (cdev_add(&vcdev, devt, 1) < 0)
        goto out_class;
    vdevice = device_create(vclass, NULL, devt, NULL, "msi-auxch");
    if (IS_ERR(vdevice)) {
        ret = PTR_ERR(vdevice);
        vdevice = NULL;
        goto out_cdev;
    }
    pr_info(DRV ": /dev/msi-auxch ready (tree_ok=%d gpu=%#x disp=%#x)\n",
            tree_ok, gpu_id, disp_id);
    return 0;

out_cdev:
    cdev_del(&vcdev);
out_class:
    class_destroy(vclass);
    vclass = NULL;
out_cdev_region:
    unregister_chrdev_region(devt, 1);
out_tree:
    tree_down();
out_gpu:
    if (sp)
        rm_ops.free_stack(sp);
    return tree_ok ? ret : (ret ? ret : -EIO);
}

static void __exit msi_auxch_exit(void)
{
    mutex_lock(&rm_lock);
    tree_ok = false;
    mutex_unlock(&rm_lock);

    if (vdevice) {
        device_destroy(vclass, devt);
        cdev_del(&vcdev);
        unregister_chrdev_region(devt, 1);
        class_destroy(vclass);
    }
    mutex_lock(&rm_lock);
    tree_down();
    if (sp)
        rm_ops.free_stack(sp);
    mutex_unlock(&rm_lock);
    pr_info(DRV ": unloaded\n");
}

module_init(msi_auxch_init);
module_exit(msi_auxch_exit);
MODULE_LICENSE("Dual MIT/GPL");
MODULE_AUTHOR("MSI Monitor Flash Tool project");
MODULE_DESCRIPTION("Kernel-context NVIDIA RM DP-AUX relay for unprivileged ISP tooling (prototype)");
