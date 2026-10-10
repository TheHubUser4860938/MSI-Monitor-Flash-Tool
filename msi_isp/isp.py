"""Low-level Realtek scaler ISP primitives over plain i2c-dev.

Everything here speaks raw I2C word transactions to the scaler's register
space -- the same thing Comm.dll's I2CWordWrite/I2CWrite do on Windows, only
without NVAPI/ADL in the way.  Nothing in this module can damage a monitor:
the callers decide which registers to poke.

On DisplayPort these addresses are reached through the source's I2C-over-AUX
tunnel; whether the kernel routes non-EDID/DDC slave addresses is the open
question the `probe` command answers.
"""
from __future__ import annotations

import time
from dataclasses import dataclass

from .ddc import RTBus


class IspError(RuntimeError):
    pass


@dataclass
class I2CTarget:
    """One 7-bit slave on the DDC bus."""
    name: str
    addr7: int

    @property
    def w(self) -> int:          # 8-bit write address, as the tool logs it
        return (self.addr7 << 1) & 0xFF

    @property
    def r(self) -> int:          # 8-bit read address
        return ((self.addr7 << 1) | 1) & 0xFF


@dataclass
class ScalerBus:
    bus: RTBus
    verbose: bool = False
    delay_ms: float = 0.0
    _last: int = -1

    # ---- raw word (register-addressed) access -------------------------
    def word_write(self, tgt: I2CTarget, reg: int, payload: bytes | int) -> None:
        if isinstance(payload, int):
            payload = bytes([payload & 0xFF])
        buf = bytes([reg & 0xFF, (reg >> 8) & 0xFF]) + bytes(payload)
        if self.verbose:
            print(f"  TX w{tgt.w:#04x} [{buf.hex(' ')}]")
        self.bus.write(tgt.addr7, buf, warmup=self._retarget(tgt.addr7))
        if self.delay_ms:
            time.sleep(self.delay_ms / 1000.0)

    def word_read(self, tgt: I2CTarget, reg: int, n: int) -> bytes:
        reg16 = bytes([reg & 0xFF, (reg >> 8) & 0xFF])
        if self.verbose:
            print(f"  TX w{tgt.w:#04x} [{reg16.hex(' ')}] -> RX {n} from r{tgt.r:#04x}")
        self.bus.write(tgt.addr7, reg16, warmup=self._retarget(tgt.addr7))
        if self.delay_ms:
            time.sleep(self.delay_ms / 1000.0)
        data = self.bus.read(tgt.addr7, n, warmup=False)
        if self.verbose:
            print(f"  RX r{tgt.r:#04x} [{data.hex(' ')}]")
        return data

    def _retarget(self, addr7: int) -> bool:
        """i2c-dev keeps one slave per fd; only warm up when switching."""
        change = self._last != addr7
        self._last = addr7
        return change

    # ---- burst flash read (ReadFlashData shape) -----------------------
    def read_burst(self, tgt: I2CTarget, addr: int, n: int, page: int = 32,
                   progress=None) -> bytes:
        """Read n bytes as ReadFlashData does: 16-bit address, then page reads.

        progress(done, total): optional callback invoked after every ISP page
        (smallest possible granularity) so the UI can render a live bar.
        """
        out = bytearray()
        while len(out) < n:
            chunk = min(page, n - len(out))
            at = addr + len(out)
            hdr = bytes([(at >> 16) & 0xFF, at & 0xFF])
            self.bus.write(tgt.addr7, hdr, warmup=self._retarget(tgt.addr7))
            out += self.bus.read(tgt.addr7, chunk, warmup=False)
            if progress:
                progress(len(out), n)
        return bytes(out[:n])


# ---- ISP mode entry/exit (decoded from Comm.dll AutoEnterIspMode/EnterIspMode)
#
# The Windows tool does not use DDC/CI framing for ISP entry.  It writes a
# single magic byte to slave 0x37 (the DDC/CI device, raw I2C), sleeps ~1 ms,
# then reads one byte back from 0x37 and tests bit 0x80 as an "ISP alive"
# handshake.  Six candidate magic bytes are tried in order; the table lives
# verbatim in Facts.AUTOENTER_CANDIDATES.  Before each poll it also performs
# a config-driven companion write (byte 0x81 in the default build).  This is
# the same design family as flashrom's mstarddc_spi driver ("MSTAR"-magic on
# DDC slave, verb-prefixed IO, 0x24 exit), corroborating the decode.
#
# Safety: the magic-byte write can put the scaler into ISP bootloader mode,
# which the Windows tool does routinely before any flash work; the 0x24 exit
# command restores normal operation, and comm!EnterIspMode first *probes*
# with a 1-byte read (0x5390) and only proceeds when status bit 0x80 is set,
# so entry is idempotent: if the scaler is already in ISP mode, the probe
# succeeds with zero writes.

def isp_alive(bus, verbose: bool = False) -> int | None:
    """Non-invasive probe: one I2C read of one byte from 0x37.

    Returns the status byte when bit 0x80 is set (scaler in ISP mode),
    else None.  A pure read -- cannot change monitor state."""
    from . import Facts
    try:
        b = bus.read(Facts.ISP_HANDSHAKE_SLAVE7, 1, warmup=True)
    except Exception:
        return None
    if not b:
        return None
    if verbose:
        print(f"  ISP probe: status {b[0]:#04x}")
    return b[0] if b[0] & Facts.STATUS_READY_BIT else None


def enter_isp(bus, verbose: bool = False,
              only_candidate: int | None = None,
              retries: int | None = None):
    """Bring the scaler into ISP mode, exactly as comm!AutoEnterIspMode does.

    Returns (index_of_winning_candidate, status_byte) on success;
    raises IspError when no magic byte produced the 0x80 handshake.
    """
    from . import Facts
    time_ = Facts.TIMING
    n = 1 if only_candidate is not None else len(Facts.AUTOENTER_CANDIDATES)
    loop0 = only_candidate or 0
    slack = time_.get("after_command_ms", 200) / 1000.0

    # 1. idempotent probe first (EnterIspMode's 0x5390 read path)
    st = isp_alive(bus, verbose)
    if st is not None:
        return (loop0, st)

    # 2. candidate loop: magic byte -> 1ms -> companion write -> poll
    rts = retries or time_.get("retries", 10)
    for attempt in range(rts):
        for i in range(n):
            idx = loop0 + i                       # restricted: the exact cand;
            cand = Facts.AUTOENTER_CANDIDATES[    # full pass: i itself
                idx % len(Facts.AUTOENTER_CANDIDATES)]
            try:
                bus.write(Facts.ISP_HANDSHAKE_SLAVE7, bytes([cand[0]]),
                          warmup=True)
                time.sleep(0.001)
                # companion write seen in the disasm (config byte 0x81);
                # kept per-candidate to mirror EnterIspMode exactly
                bus.write(Facts.ISP_HANDSHAKE_SLAVE7, bytes([cand[1]]),
                          warmup=False)
                time.sleep(0.001)
                st = isp_alive(bus, verbose)
                if st is not None:
                    return (idx, st)
                time.sleep(slack)
            except Exception as e:            # NACK/timeout: try next
                if verbose:
                    print(f"  cand{cand[0]:#04x} attempt{attempt}: {e}")
    raise IspError("no ISP handshake (status bit 0x80) from any candidate "
                   "magic byte on slave 0x37")


def exit_isp(bus, verbose: bool = False) -> bool:
    """Send the 0x24 ISP-exit command (same one flashrom's mstarddc_spi uses
    to leave ISP mode).  Best-effort; False if the scaler did not ACK."""
    from . import Facts
    try:
        bus.write(Facts.ISP_HANDSHAKE_SLAVE7,
                  bytes([Facts.EXIT_ISP_CMD]), warmup=True)
        time.sleep(0.05)
        return isp_alive(bus, verbose) is None
    except Exception:
        return False


# ---- flash-path orchestration (session 14p) -----------------------------
# The vendor pipeline ALWAYS enters ISP mode before touching flash slaves
# (ISP_PIPELINE step order), and the safety policy demands leaving the way
# we found it: exit_isp + EDID re-verify at 0x50. flash_path_enter/exit
# wrap that so CLI and console share one honest implementation.

def flash_path_enter(bus, flash_slave7: int = 0x20,
                     verbose: bool = False) -> str:
    """Enter ISP mode (idempotent) and report whether the flash slave
    answers.  Returns "" on success, else a refusal reason.  ALWAYS safe
    to pair with flash_path_exit: on refusal we exit again ourselves, so
    callers never leave the scaler mid-ISP."""
    try:
        enter_isp(bus, verbose=verbose)
    except IspError as e:
        return f"ISP entry failed: {e}"
    try:
        alive = bus.probe(flash_slave7)
    except Exception as e:
        flash_path_exit(bus, verbose=verbose)
        return f"probe of {flash_slave7:#04x} errored: {e}"
    if not alive:
        flash_path_exit(bus, verbose=verbose)
        return (f"ISP mode entered, but flash slave {flash_slave7:#04x} "
                f"stays silent (measured NVIDIA gap, dead-end #11)")
    return ""


def flash_path_exit(bus, verbose: bool = False) -> tuple[bool, bool]:
    """Leave ISP and re-verify the monitor answers at 0x50 with the bytes
    we expect.  Returns (exited, edid_alive)."""
    exited = exit_isp(bus, verbose=verbose)
    try:
        edid_alive = bus.warmup(0x50) or bus.probe(0x50)
    except Exception:
        edid_alive = False
    return exited, edid_alive


def jedec_id(sb: ScalerBus, tgt: I2CTarget,
             verbose: bool = False) -> bytes | None:
    """The 0x9F-reads-manufacturer gate -- OUR addition (the vendor keys on
    the Flash.dat capacity code instead, session 14f; the gate is sound
    engineering, not vendor parity, STATUS open-question #3).

    Register-window sequence per Facts.ISP_WINDOW (latch/GO inference of
    14i) with the older Flash.dat index/data grammar as a second attempt
    (index 0x60 <- opcode, strobe 0x20->0x21, read data 0x64): both
    grammars poke the same 0x22 slave, and which one RTD2711 traffic
    actually honours is settled by the first live wire.  Returns the 3
    ID bytes when the response smells like JEDEC (0x1F/0xC8/0x20...
    vendor-prefix sane), else None -- never raises."""
    opcodes = (0x9F,)
    for opcode in opcodes:
        for grammar in ("window", "index"):
            try:
                if grammar == "window":
                    sb.word_write(tgt, 0x842, opcode)        # OPCODE
                    sb.word_write(tgt, 0x841, 0xB8)          # latch
                    sb.word_write(tgt, 0x841, 0xB9)          # GO
                    got = sb.word_read(tgt, 0x845, 3)
                else:
                    sb.word_write(tgt, 0x60, opcode)         # index reg
                    sb.word_write(tgt, 0x20, 0x00)           # strobe pair
                    sb.word_write(tgt, 0x21, 0x00)
                    got = sb.word_read(tgt, 0x64, 3)
            except Exception as e:
                if verbose:
                    print(f"  JEDEC {grammar} grammar errored: {e}")
                continue
            if verbose:
                print(f"  JEDEC {grammar}: {got.hex(' ')}")
            if got and got[0] in (0x01, 0x08, 0x1F, 0x20, 0x4C, 0xC2,
                                  0xC8, 0xD8, 0xEF):          # known vendor prefixes
                return got
    return None
