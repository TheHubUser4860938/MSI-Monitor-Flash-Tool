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
        """Read n bytes as ReadFlashData does: 24-bit address, then page reads.

        Address shape per Comm.dll fn 0x7e50 (re/f_readflash.txt:7ec9-7ed0):
        the vendor call pushes BOTH (addr >> 16) and the full address dword,
        so all 24 bits reach the wire. We emit big-endian [hi, mid, lo]; the
        byte ORDER within the header is inference (any live wire settles it),
        but no sane encoding drops bits 8-15 -- the pre-audit [hi, lo] shape
        aliased every 64 KiB and could not address a 4 MiB chip at all.
        A page read that returns zero bytes raises (silent slave) instead of
        spinning; short-but-live reads self-heal (next header re-seeks).

        progress(done, total): optional callback invoked after every ISP page
        (smallest possible granularity) so the UI can render a live bar.
        """
        out = bytearray()
        while len(out) < n:
            chunk = min(page, n - len(out))
            at = addr + len(out)
            hdr = bytes([(at >> 16) & 0xFF, (at >> 8) & 0xFF, at & 0xFF])
            self.bus.write(tgt.addr7, hdr, warmup=self._retarget(tgt.addr7))
            got = self.bus.read(tgt.addr7, chunk, warmup=False)
            if not got:
                raise IspError(f"burst read at {at:#07x}: slave returned no "
                               f"data (silent) -- aborting, partial data "
                               f"must not be trusted")
            out += got
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

def flash_path_enter(bus, flash_slaves=(0x20, 0x22),
                     verbose: bool = False) -> str:
    """Enter ISP mode (idempotent) and report whether a flash-path slave
    answers.  BOTH lanes are probed because the vendor uses both: the
    0x20 ReadFlashData burst engine (Comm fn 0x7e50, re/f_readflash.txt)
    and the 0x22 register-file page lane (Facts.ISP_PIPELINE: the plugin
    engine's DumpFlash rides slot +0x14 on 0x22).  Returns "" on success,
    else a refusal reason.  ALWAYS safe to pair with flash_path_exit: on
    refusal we exit again ourselves, so callers never leave the scaler
    mid-ISP."""
    try:
        enter_isp(bus, verbose=verbose)
    except IspError as e:
        return f"ISP entry failed: {e}"
    for slave7 in flash_slaves:
        try:
            if bus.probe(slave7):
                return ""
        except Exception as e:
            if verbose:
                print(f"  probe of {slave7:#04x} errored: {e}")
    flash_path_exit(bus, verbose=verbose)
    lane = "/".join(f"{s:#04x}" for s in flash_slaves)
    return (f"ISP mode entered, but flash slaves {lane} stay silent "
            f"(measured NVIDIA gap, dead-end #11)")


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

    Register-window sequence per the 14i B8-latch/B9-GO discovery, with the
    Flash.dat index-data grammar as a second attempt, now aligned to the
    15i-decoded vendor script (Facts.FLASHDAT_MAP, re/g_flashdat_map.txt
    S0): window arm pair, ARM 0x60<-0x38, opcode staged in 0x61,
    addr/mode/len staged in 0x64/0x65/0x66 exactly as the script's ID
    transaction does, TRIGGER 0x60<-0x39, one status poll of 0x60, then
    the reply read from 0x64. Inferences flagged: word framing (the byte
    window may use [reg, value] pairs instead), the len-byte semantics
    (0x65<-0x28 copied verbatim from the script's 0x90 transaction,
    0x66<-0x00 likewise), and above all WHICH register answers -- the
    script polls 0x60 but never reads data back, so 0x64 remains the 14i
    guess. Both grammars poke the 0x22 register file (Facts.ISP_PIPELINE
    comment; two views of one surface).  Returns the 3 ID bytes when the
    response smells like JEDEC (known vendor prefixes), else None --
    never raises. The binding safety gate for THIS monitor (jid[0] ==
    0x1F) lives at the backup call sites, not here: this function is
    deliberately generic."""
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
                    # script-backed arm pair (S0 statements 1-3):
                    sb.word_write(tgt, 0x60, 0x20)
                    sb.word_write(tgt, 0x61, 0x06)
                    sb.word_write(tgt, 0x60, 0x21)
                    # ID transaction, staged like the script's 0x90 run:
                    sb.word_write(tgt, 0x60, 0x38)           # ARM
                    sb.word_write(tgt, 0x61, opcode)         # opcode <- 0x9F
                    sb.word_write(tgt, 0x64, 0x00)           # addr
                    sb.word_write(tgt, 0x65, 0x28)           # mode (script const)
                    sb.word_write(tgt, 0x66, 0x00)           # len (script const here)
                    sb.word_write(tgt, 0x60, 0x39)           # TRIGGER
                    sb.word_read(tgt, 0x60, 1)               # poll (once)
                    got = sb.word_read(tgt, 0x64, 3)         # 14i data-reg guess
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
