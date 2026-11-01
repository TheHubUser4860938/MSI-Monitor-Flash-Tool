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

def flash_path_enter(bus, flash_slaves=(0x4A, 0x20, 0x22),
                     verbose: bool = False) -> str:
    """Enter ISP mode (idempotent) and report whether a flash-path slave
    answers.  BOTH lanes are probed because the vendor uses both: the
    0x20 ReadFlashData burst engine (Comm fn 0x7e50, re/f_readflash.txt),
    the 0x22 register-file page lane (Facts.ISP_PIPELINE), and the vendor's
    own first candidate 0x4A (Facts.ISP_SLAVE_TRIPLES, 16c - the triple
    0x94/0x96/0x6A that Comm.dll probes at register 0x23).  Returns "" on success,
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


# ---- the vendor's own slave detection (session 16c) ----------------------
@dataclass
class IspSlave:
    """Result of the vendor's AutoDetectSlaveAddr walk. index -1 / slave7
    None = every candidate stayed silent."""
    index: int = -1
    slave7: int | None = None
    continuous7: int | None = None
    mailbox7: int | None = None
    reply: bytes = b""

    @property
    def found(self) -> bool:
        """The vendor's verdict: an ACK on the 0x23 read."""
        return self.slave7 is not None

    @property
    def distinct(self) -> bool:
        """OUR gate (16c, measured): candidate 0 = 7-bit 0x4A answers with
        ZEROS at every register tried (0x23/0x22/0x20/0x00, 1-16 bytes),
        which is the DP branch device, not the ISP register file. So an ACK
        is necessary and not sufficient - a lane that answers with content
        is the one a flash read can be built on."""
        return bool(self.reply) and any(b for b in self.reply)


def autodetect_isp_slave(bus, verbose: bool = False) -> IspSlave:
    """Re-run Comm.dll's AutoDetectSlaveAddr on our transport: for each of
    the six triples, pose register 0x23 and read one byte; the first answer
    wins (Comm stores it as the ISP slave and never probes again).

    An empty reply is NOT an answer - the 15k phantom-ACK rule. Every probe
    is a read; nothing here can change the scaler's state."""
    from . import Facts
    sb = bus if isinstance(bus, ScalerBus) else ScalerBus(bus)
    for i, (w8, c8, x8) in enumerate(Facts.ISP_SLAVE_TRIPLES):
        tgt = I2CTarget(f"vendor cand{i}", w8 >> 1)
        try:
            got = sb.word_read(tgt, Facts.ISP_SLAVE_PROBE_REG, 1)
        except Exception as e:                 # NACK / EIO: next candidate
            if verbose:
                print(f"  cand{i} {w8>>1:#04x}: {e}")
            continue
        if got:
            if verbose:
                print(f"  cand{i} {w8>>1:#04x} replies {got.hex(' ')}")
            return IspSlave(i, w8 >> 1, c8 >> 1, x8 >> 1, bytes(got))
    return IspSlave()


# ---- mailbox ladder replay (session 16e) --------------------------------
LADDER_COMMANDS = [
    (0x06, "WRITE ENABLE", 1),
    (0x90, "DEVICE ID (vendor gate 70 16 15)", 4),
    (0x3B, "FAST READ", 16),
]


@dataclass
class LadderStep:
    """One command on the mailbox lane: what we sent, what came back."""
    opcode: int
    what: str
    sent: bytes = b""
    reply: bytes | None = None
    error: str | None = None

    @property
    def answered(self) -> bool:
        return bool(self.reply)


class Ladder(list):
    """The replay result. `varies` is the whole point: a mailbox that answers
    every command with the same bytes is an info lane (15j's verdict for the
    DDC/CI 0xA0 opcode); a mailbox whose reply depends on the command has a
    register file behind it, and the backup becomes a software read."""

    @property
    def varies(self) -> bool:
        """Compare replies at the SHORTEST width, content first.

        Measured 2026-11-01 on 0x37: the ladder looked like it varied (1 byte
        for 0x06, 4 for 0x90, 16 for 0x3B) because the DDC/CI reply register
        is ONE frame - `8a 02 00 fe 00 46 57 2e 30 30 39 4e` = "FW.009N" -
        read at increasing widths. A window register has to change the bytes,
        not the read length, so every reply is truncated to the shortest
        answer before trailing zeros are trimmed."""
        got = [s.reply for s in self if s.answered]
        if not got:
            return False
        m = min(len(r) for r in got)
        seen = {r[:m].rstrip(b"\x00") for r in got}
        seen.discard(b"")
        return len(seen) > 1

    @property
    def alive(self) -> bool:
        return any(s.answered for s in self)


def mailbox_ladder(bus, slave7: int | None = None, token: int | None = None,
                   verbose: bool = False) -> Ladder:
    """Send Flash.dat's commands through the vendor's mailbox frame
    [token, opcode] and read each reply. Read-only on the monitor: writes to
    a mailbox register cannot damage the flash, and the commands chosen are
    the ID/read class the vendor itself uses to identify the chip."""
    from . import Facts
    sl = slave7 if slave7 is not None else Facts.ISP_MAILBOX_SLAVE7
    tk = token if token is not None else Facts.ISP_MAILBOX_TOKEN
    out = Ladder()
    for opcode, what, n in LADDER_COMMANDS:
        sent = bytes([tk, opcode])
        step = LadderStep(opcode, what, sent)
        try:
            bus.write(sl, sent, warmup=True)
            step.reply = bus.read(sl, n, warmup=False)
        except Exception as e:
            step.error = str(e)
        if verbose:
            print(f"  {opcode:#04x} {what}: "
                  f"{step.reply.hex(' ') if step.reply else (step.error or 'no reply')}")
        out.append(step)
    return out


def flash_read_at(bus, addr: int, n: int, slave7: int = 0x37,
                  mode: int = 1, verbose: bool = False) -> bytes:
    """One flash read through the vendor's ISP port grammar (16d, 16k).

    The ladder is Comm.dll FUN_10003990 verbatim, on the byte-index ports of
    Facts.ISP_BOARD_REGS - 0xF2 address, 0x55 command, 0x57 width, 0x58 bank,
    0x5E data, 0x5D reset. The board's ISP slave is 7-bit 0x37 (the INI's
    0x6F, 16c), so this runs on the lane that answers today.

    Address shape, from the decompile: the HIGH byte is read out of 0xF2 and
    written back with bit 7 cleared (the vendor does not set it - it inherits
    the page the port holds); the 16-bit offset goes to the DATA port as the
    low byte, then the high byte, then the low byte | 1 - the last write is
    the read arm (read_flag = bit 0). Then 0x55 gets 0xC1 (the read command)
    and 0xBF (the trigger), and the bytes come back off the data port.

    Read-only: every write here addresses or arms a read; the flash content
    changes only under a program command.
    """
    from . import Facts
    regs = Facts.ISP_BOARD_REGS

    def w(port: int, val: int) -> None:
        if verbose:
            print(f"  TX  {port:#04x} <- {val & 0xFF:#04x}")
        bus.write(slave7, bytes([port & 0xFF, val & 0xFF]), warmup=False)

    def r1(port: int) -> int:
        bus.write(slave7, bytes([port & 0xFF]), warmup=False)
        d = bus.read(slave7, 1, warmup=False)
        return d[0] if d else 0

    addr &= 0xFFFFFF
    hi = r1(regs["addr_port"])
    w(regs["addr_port"], hi & 0x7F)                 # clear bit 7, keep the page
    w(regs["cmd_port"], r1(regs["cmd_port"]) | 0x80)   # set bit 7 of the command port
    time.sleep(0.032)                             # the decompile's 0x20 delay
    width, bank = regs["width_values"][mode]
    w(regs["width_port"], width)
    w(regs["bank_port"], bank)
    w(regs["data_port"], addr & 0xFF)                # offset, low byte
    if mode:
        w(regs["data_port"], (addr >> 8) & 0xFF)     # offset, high byte
    w(regs["data_port"], (addr & 0xFF) | regs["read_flag"])   # arm the read
    w(regs["cmd_port"], 0xC1)
    w(regs["cmd_port"], 0xBF)
    time.sleep(0.002)
    bus.write(slave7, bytes([regs["data_port"]]), warmup=False)
    data = bus.read(slave7, n, warmup=False)
    w(0x5D, 0xF8)                                 # the decompile's reset
    if verbose:
        print(f"  RX  {data.hex(' ') if data else '(no reply)'}")
    return data


def isp_write_packet(bus, reg: int, payload: bytes, slave7: int = 0x37,
                     bank: int = 0, mode: int = 1, page: int | None = None,
                     settle_ms: int = 0, verbose: bool = False) -> None:
    """Write a packet through the ISP data window (16p).

    The write ladder is Comm.dll FUN_10003c80, the twin of the read ladder
    16k shipped as flash_read_at. Its shape:

        0xF2 <- (rd(0xF2) & 0x7f)          clear bit 7, keep the page
        0x55 <- (rd(0x55) | 0x80)          command port, bit 7
        delay 0x20
        0x57 <- (rd(0x57) & 0xfc)          width port, low two bits clear
        0x58 <- 0xE7                       bank, mode-0 value
        delay 0x20
        0x5E <- reg                        THE WINDOW: the register number
        0x55 <- 0xC1                       write command
        0x5E <- payload[0..n-1]            up to 16 bytes per transaction
        0x55 <- (2*n - 0x40) & 0xff        the trigger, LENGTH-ENCODED

    So the data port is a window, not a register: the first byte written to it
    names the register and the rest is that register's payload. The trigger
    byte is arithmetic in the byte count, which is why a 16-byte transaction
    commits with 0xE0 (2*16-0x40) and a 4-byte packet header with 0x88.
    """
    from . import Facts
    regs = Facts.ISP_BOARD_REGS
    payload = bytes(payload)
    if not payload:
        raise IspError("an ISP packet needs at least the register byte")
    n = len(payload)
    if n > 16:
        raise IspError(f"the ISP write window takes 16 bytes, got {n}")

    def w(port: int, val: int) -> None:
        if verbose:
            print(f"  TX  {port:#04x} <- {val & 0xFF:#04x}")
        bus.write(slave7, bytes([port & 0xFF, val & 0xFF]), warmup=False)

    def r1(port: int) -> int:
        bus.write(slave7, bytes([port & 0xFF]), warmup=False)
        d = bus.read(slave7, 1, warmup=False)
        return d[0] if d else 0

    if page is None:
        w(regs["addr_port"], r1(regs["addr_port"]) & 0x7F)
    else:
        # 16w, found by the emulator: the packet header carries only
        # (addr>>16, addr&0xff), so bits 8-15 ride the PAGE port - 7 bits at
        # 64 KiB each, 8 MiB of reach. The read ladder has always done this
        # (16k); the write path did not.
        w(regs["addr_port"], page & 0x7F)
    w(regs["cmd_port"], r1(regs["cmd_port"]) | 0x80)
    time.sleep(0.032)
    w(regs["width_port"], r1(regs["width_port"]) & 0xFC)
    # The bank port IS the bank select: width_values' pair differs in one bit
    # (0xe7 vs 0xef, bank_bit 0x08) - 16a's board record, 16r's reading.
    w(regs["bank_port"], 0xE7 if bank == 0 else 0xEF)
    time.sleep(0.032)
    w(regs["data_port"], reg)                       # the window names its register
    w(regs["cmd_port"], 0xC1)                        # write command
    for b in payload:
        w(regs["data_port"], b)
    # The trigger is length- AND mode-encoded: FUN_10003c80's cVar10 is
    # chunk-1 (mode 0), chunk (mode 1), chunk+1 (mode 2) - 16t, Grok item 4.
    w(regs["cmd_port"], (2 * (n + mode - 1) - 0x40) & 0xFF)
    if settle_ms:
        # 16z: the INI's ulTimeAfterCommand = 200 ms. Measured mute on the
        # panel (0 vs 200 ms gives the same transaction block), kept because
        # the vendor's contract names it and the clip run should match it.
        time.sleep(settle_ms / 1000.0)


def packet_bytes(control: int, arg1: int, arg2: int,
                 data: bytes = b"") -> bytes:
    """The PWM2SPI packet: [control, arg1, arg2, SUM] + data (16o).

    The checksum is the 8-bit SUM of the three header bytes, read out of the
    leaf's CONCAT13(sum, header) - arithmetic, not a mask.
    """
    head = bytes([control & 0xFF, arg1 & 0xFF, arg2 & 0xFF])
    return head + bytes([sum(head) & 0xFF]) + bytes(data)


def program_page_at(bus, addr: int, data: bytes, slave7: int = 0x37,
                    page: int = 32, bank: int = 0, mode: int = 1,
                    trailer: bool = False, settle_ms: int = 0,
                    verbose: bool = False) -> int:
    """Program one page the way WriteFlashData does (16n, 16p).

    Packet [0x40, addr>>16, addr, sum] to the write door 0x9C, then the page
    bytes, in 16-byte window transactions. `page` defaults to the INI's
    AUX_I2CPageLen = 32, which is what GetI2CPageLength() returns for this
    board.
    """
    if len(data) > page:
        raise IspError(f"a page is {page} bytes, got {len(data)}")
    addr &= 0xFFFFFF
    # 24-bit address, three places: the page port takes bits 22-16, the packet
    # header bits 15-8 and 7-0 (16w - the vendor's WriteFlashData pushes
    # (addr>>16) AND the address dword; the header alone loses bits 8-15).
    head = packet_bytes(0x40, (addr >> 8) & 0xFF, addr & 0xFF)
    body = head + bytes(data)
    if trailer:
        # 16t, Grok's item 2: the PWM2SPI leaves accumulate over 32-byte
        # padded blocks (the vectorized sum-of-buffer pattern), which is a
        # checksum over the DATA, not just the 3-byte header. The trailer is
        # the 8-bit sum of the whole packet, appended once at the end - the
        # leaf's own transaction cap is 12 data bytes, the window's is 16.
        body = body + bytes([sum(body) & 0xFF])
    sent = 0
    for chunk in _chunks(body, 16):
        isp_write_packet(bus, 0x9C, chunk, slave7=slave7, bank=bank,
                         mode=mode, page=(addr >> 16) & 0x7F,
                         settle_ms=settle_ms, verbose=verbose)
        sent += len(chunk)
    return sent


def read_status(bus, slave7: int = 0x37, bank: int = 0, mode: int = 1,
                page: int = 0, verbose: bool = False) -> int:
    """Read the flash status register: packet [0x05, 0, 0, sum], then 1 byte.

    Bit 0 is busy, bit 1 the write-enable latch - the shape the Flash.dat poll
    masks on (`0d,reg,n,MASK,val,...`, 16w), and the only per-transaction
    acknowledgement the flash side can give.

    16w's verb table gives the vendor's own name for this - `readsr` (index
    12), with `writesr` (13) and `srstatus` (10) beside it. The status byte is
    where the busy bit lives, so this is the only per-transaction
    acknowledgement the flash side can give; 16v found no ack on the DP side.
    """
    from . import Facts
    isp_write_packet(bus, 0x9C, packet_bytes(0x05, 0x00, 0x00), slave7=slave7,
                     bank=bank, mode=mode, page=page, verbose=verbose)
    # RDSR is a one-byte transaction: commit, point at the data port, take the
    # byte. The full read ladder is for addressing flash, not the status byte.
    bus.write(slave7, bytes([Facts.ISP_BOARD_REGS["data_port"]]))
    d = bus.read(slave7, 1)
    return d[0] if d else 0


def write_status(bus, value: int, slave7: int = 0x37, bank: int = 0,
                 mode: int = 1, page: int = 0, verbose: bool = False) -> None:
    """Write the flash status register: packet [0x01, 0, 0, sum] + the byte."""
    isp_write_packet(bus, 0x9C, packet_bytes(0x01, 0x00, 0x00,
                                             bytes([value & 0xFF])),
                     slave7=slave7, bank=bank, mode=mode, page=page,
                     verbose=verbose)


def sector_erase_at(bus, addr: int, slave7: int = 0x37, bank_select: int = 0,
                    sector: int = 0xD8, verbose: bool = False) -> None:
    """Erase one sector: packet [0x42, addr_mid, addr_lo, sum], no data.

    16y: the plugin's program call is `FUN_1003e2a0(record[4] << 0x10, len)` -
    the address is a 64 KiB BLOCK INDEX shifted 16, so the top bits ride the
    page port and the packet pair carries the middle and low bytes. 16n read
    arg2 as a "sector bank byte"; that reading is superseded by the shift, and
    `bank` is kept as the argument name for the wire byte it sends.
    `sector` is the chip's sector-erase opcode - the Flash.dat record's own
    value (0xD8 for the 32 Mbit parts, 0x20 for the 16-bit-addressed ones) -
    carried for the day the record is selected by RDID; the packet today names
    the address, not the opcode. `bank_select` picks the chip's 2 MiB half
    through the bank port (16r).
    """
    isp_write_packet(bus, 0x9C,
                     packet_bytes(0x42, (addr >> 8) & 0xFF, addr & 0xFF),
                     slave7=slave7, bank=bank_select,
                     page=(addr >> 16) & 0x7F, verbose=verbose)


def _chunks(buf: bytes, size: int):
    for i in range(0, len(buf), size):
        yield buf[i:i + size]


def flash_read_script(bus, addr: int, n: int, slave7: int = 0x37,
                      opcode: int = 0x3B, mode: int = 0x28,
                      verbose: bool = False) -> bytes:
    """One flash read in the Flash.dat SCRIPT grammar (16m), not the port grammar.

    The A25L020 template - the script the A25L032M on this board inherits - is
    three phases on the byte-index registers:

        06,60,38   arm            CTRL   = 0x38
        06,61,3b   command        OPCODE = 0x3B (fast read, quad out)
        06,64,lo   address        ADDR
        06,65,28   io class       MODE   = 0x28
        06,66,40   length         LEN    = 0x40 (64 bytes)
        06,60,39   trigger        CTRL   = 0x39

    This is the grammar the vendor's own Windows path uses, and it is a
    different surface from the 0xF2/0x55/0x5E port ladder of 16k: on this panel
    BOTH answer on 0x37 and BOTH are address-independent (16k, 16s), so the
    grammar is not the lever - the slave is. Kept because on a box where the
    branch maps more addresses, the script grammar is the one the vendor is
    proven against.
    """
    length = min(n, 0x40)
    def w(reg: int, val: int) -> None:
        if verbose:
            print(f"  TX  {reg:#04x} <- {val & 0xFF:#04x}")
        bus.write(slave7, bytes([reg & 0xFF, val & 0xFF]), warmup=False)

    w(0x60, 0x38)                       # arm
    w(0x61, opcode)                     # the flash command
    w(0x64, addr & 0xFF)                # ADDR (the script's one-byte address phase)
    w(0x65, mode)                       # MODE
    w(0x66, length)                     # LEN
    w(0x60, 0x39)                       # trigger
    time.sleep(0.02)
    return bus.read(slave7, n, warmup=False)
