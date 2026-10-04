import sys, time
sys.path.insert(0, "/home/eugene/Projects/monitor-fw")
from msi_isp import isp, Facts
from msi_isp.nvbus import NvRMAuxBus
with NvRMAuxBus() as bus:
    for i in range(3):
        try:
            b = bus.read(0x37, 1, warmup=True)
            print(f"raw 0x37 status read {i}: {b.hex(' ') if b else 'empty'}")
        except Exception as e:
            print(f"raw 0x37 status read {i}: EXC {e}")
        time.sleep(0.3)
    # full candidate walk, verbose
    try:
        idx, st = isp.enter_isp(bus, verbose=True, retries=10)
        print(f"ENTER OK: cand {idx} status {st:#04x}")
        print("exit:", isp.exit_isp(bus))
    except Exception as e:
        print(f"enter still failing: {e}")
        # try sending exit anyway in case we're stuck mid-ISP
        try:
            bus.write(0x37, bytes([0x24]), warmup=True)
            print("sent 0x24 exit blindly")
        except Exception as e2:
            print("exit send failed:", e2)
