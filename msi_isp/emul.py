"""An emulated monitor: DDC/CI + the ISP bridge + an SPI flash, in Python.

Why this exists: every number the tool sends has been measured on one panel
through one NVIDIA branch, and the flash cells themselves are still unproven
(16v). An emulator gives the pipeline a device that answers the way the
measurements say the real one answers, so a full flash cycle - enter ISP,
erase, program, verify, switch bank, reset, read the new version - can run in
a test, with no hardware and no risk.

What it proves: that our protocol model is self-consistent and that the
pipeline drives it correctly. What it does NOT prove: that the panel agrees.
Each layer below says which session measured it, so a green test is never
mistaken for a wire capture.

Three layers, behind the same `write(addr7, buf)` / `read(addr7, n)` surface
the real transports (i2c-dev, the relay, RM, bulk) expose:

    slave 0x37  DDC/CI + the ISP ladder's ports. A bare read answers the
                handshake status (measured 0x8a, 16e/16q); a one-byte write
                points at a register; a two-byte write is the ladder's
                port<-value. A packet committed through door 0x9C is the
                PWM2SPI packet [control, arg1, arg2, SUM] + data (16o/16p).
    slave 0x22  the register file 16t/16u mapped: ONE byte-addressable window
                - reading at index N returns the stream at offset N. The head
                block and the 0x0100 transaction block are the measured bytes.
    slave 0x20  the burst engine read_burst speaks: a 3-byte [hi, mid, lo]
                header seeks, the next read returns flash bytes (16n).

Behind the bridge sits `SpiFlash`: 4 MiB in two 2 MiB banks (16r), 256-byte
pages, 4 KiB sectors, a status register with a busy bit, and the command set
Flash.dat's own scripts use (0x06 WREN, 0x40 program, 0x42 sector erase,
0xA0/0xA1 chip erase, 0x9F RDID - 16m/16n/16w).

The clock is virtual: `tick_ms` advances on every bus operation, so the busy
bit clears deterministically and the vendor's timing contract (ulTimeAfterCommand
= 200 ms, ulCommandRetryCount = 10, INI_TIMING_16W) can be exercised without
wall-clock sleeps.
"""
from __future__ import annotations

from dataclasses import dataclass, field

from . import Facts
from .isp import IspError

__all__ = ["EmulatedMonitor", "IspBridge", "MonitorError", "SpiFlash"]

#: the ports the vendor's ladder drives (Facts.ISP_BOARD_REGS, Comm 0x3990/0x3c80)
ADDR_PORT = 0xF2
CMD_PORT = 0x55
WIDTH_PORT = 0x57
BANK_PORT = 0x58
DATA_PORT = 0x5E
RESET_PORT = 0x5D
PACKET_DOOR = 0x9C                 # the window byte that opens a packet
STATUS_PORT = 0x9D                 # read back after a commit (16t's leaf ack)

#: control byte -> what the bridge does with it. All four are read out of the
#: vendor's own leaves (16m erase 0xC7/0xA0, 16n program 0x40 @0x7cf0, sector
#: erase 0x42 @0xc470, RDID via the ladder); the control byte IS the SPI opcode
#: on the PWM2SPI wire.
CMD_WREN = 0x06
CMD_PP = 0x40                      # page program: [0x40, addr_hi, addr_lo, sum] + data
CMD_SE = 0x42                      # sector erase: [0x42, sector_lo, sector_bank, sum]
CMD_CE = 0xA0                      # chip erase
CMD_RDID = 0x9F
CMD_CONTROL = 0x45                 # control plane: enter ISP, background write time
FLASH_COMMANDS = {CMD_WREN, CMD_PP, CMD_SE, CMD_CE, CMD_RDID}


class MonitorError(IspError):
    """The emulator was asked to do something the model has no answer for."""


# ---------------------------------------------------------------- the flash
@dataclass
class SpiFlash:
    """A SPI NOR part: `capacity` bytes in `banks` x (capacity/banks) banks.

    The panel's class is 4 MiB as two 2 MiB banks (16r); the 4 MiB parts in
    Flash.dat are A25L032M, EN25Q32*, MX25L32*, W25Q32, GD25Q32C, P25Q32H,
    XM25QH32C and friends (16w). The identity bytes come from the Flash.dat
    record, so `EmulatedMonitor(chip="MX25L32XX")` is a chip the vendor ships
    a template for, not a made-up one.
    """
    capacity: int = 4 * 1024 * 1024
    banks: int = 2
    page: int = 256                # the chip's page, not the 32-byte transport page
    sector: int = 4096
    jedec: bytes = b"\xc2\x20\x16"  # MX25L32XX: mfr c2, class 20, capacity code 16
    busy_pp_ms: float = 0.7
    busy_se_ms: float = 30.0
    busy_ce_ms: float = 100.0

    data: bytearray = field(default_factory=bytearray)
    clock_ms: float = 0.0
    busy_until: float = 0.0
    write_enabled: bool = False
    log: list = field(default_factory=list)

    def __post_init__(self):
        if not self.data:
            self.data = bytearray(b"\xff" * self.capacity)

    @property
    def bank_size(self) -> int:
        return self.capacity // self.banks

    @property
    def busy(self) -> bool:
        return self.clock_ms < self.busy_until

    @property
    def status(self) -> int:
        """The RDSR byte: bit 0 busy, bit 1 write-enable (the standard shape,
        and the bit the Flash.dat poll masks on - 0d,reg,n,MASK,val,...)."""
        return (1 if self.busy else 0) | (2 if self.write_enabled else 0)

    def tick(self, ms: float) -> None:
        self.clock_ms += ms

    def erase_sector(self, addr: int) -> None:
        base = (addr // self.sector) * self.sector
        self.data[base:base + self.sector] = b"\xff" * self.sector
        self.write_enabled = False
        self.busy_until = self.clock_ms + self.busy_se_ms
        self.log.append(("SE", base))

    def erase_chip(self) -> None:
        self.data = bytearray(b"\xff" * self.capacity)
        self.write_enabled = False
        self.busy_until = self.clock_ms + self.busy_ce_ms
        self.log.append(("CE", 0))

    def program(self, addr: int, payload: bytes) -> None:
        """A page program: NOR cells go 1->0 only, so programming over existing
        data ANDs the bytes - the property that makes a missed erase visible."""
        for i, b in enumerate(payload):
            at = (addr + i) % self.capacity
            self.data[at] &= b
        self.write_enabled = False
        self.busy_until = self.clock_ms + self.busy_pp_ms
        self.log.append(("PP", addr, len(payload)))

    def read(self, addr: int, n: int) -> bytes:
        addr %= self.capacity
        return bytes(self.data[addr:addr + n])


# ---------------------------------------------------------------- the bridge
@dataclass
class IspBridge:
    """The register file + packet window the ladder drives (16k read, 16p write).

    Ladder semantics, verbatim from isp.py:

        write(DATA_PORT, x)   first byte opens a transaction and names the
                              door; later bytes are that transaction's payload
        write(CMD_PORT, 0xC1) the write command (starts the packet)
        write(CMD_PORT, 0xBF) the read arm
        write(CMD_PORT, 2*(n+mode-1)-0x40)   the trigger: commits the packet
        write(BANK_PORT, v)   bit 3 selects the chip's 2 MiB bank (16r)
        write(addr, v) / write(width, v)     page and width ports
    """
    flash: SpiFlash
    bank: int = 0
    pointer: int = 0               # the read ladder's last address write
    txn: bytearray = field(default_factory=bytearray)
    door: int | None = None
    open_pp: int | None = None     # the address a page program continues at
    regs: dict = field(default_factory=dict)
    isp_mode: bool = False
    boot_flag: int = 0
    handshake: bool = True         # a bare read answers the status byte (16e)
    reply: bytearray = field(default_factory=bytearray)
    log: list = field(default_factory=list)

    def __post_init__(self):
        # Measured port values (16u/16v): the page port holds a page, the
        # command port reads back with bit 7 usable, the width port's low two
        # bits are the width, the bank port is 0xE7 / 0xEF.
        self.regs.setdefault(ADDR_PORT, 0x00)
        self.regs.setdefault(CMD_PORT, 0x00)
        self.regs.setdefault(WIDTH_PORT, 0xFF)
        self.regs.setdefault(BANK_PORT, 0xE7)
        self.regs.setdefault(DATA_PORT, 0x00)
        self.regs.setdefault(RESET_PORT, 0xF8)
        self.regs.setdefault(STATUS_PORT, 0x00)

    @property
    def bank_base(self) -> int:
        return self.bank * self.flash.bank_size

    def write_port(self, port: int, val: int) -> None:
        val &= 0xFF
        self.regs[port] = val
        if port == BANK_PORT:
            self.bank = 1 if (val & Facts.ISP_BOARD_REGS["bank_bit"]) else 0
        if port == DATA_PORT:
            if self.door is None:
                self.door = val            # the window's first byte names the door
                self.txn = bytearray()
            else:
                self.txn.append(val)
        elif port == CMD_PORT:
            if val == 0xC1:
                self.log.append(("cmd", "write"))
            elif val == 0xBF:
                self.log.append(("cmd", "read-arm"))
            elif self.txn and self.door is not None:
                # The trigger commits whatever the window holds: a headed
                # packet (door 0x9C) or a header-less continuation chunk.
                self.commit()

    def point_at(self, port: int) -> None:
        """A one-byte write: the next read comes from this port (and, for the
        data port, from the address the read ladder just armed)."""
        self.pointer = port

    def commit(self) -> None:
        """The trigger fired: the bytes in the window are a PWM2SPI packet."""
        pkt = bytes(self.txn)
        door, self.door = self.door, None
        self.txn = bytearray()
        if self.open_pp is not None and (door != PACKET_DOOR
                                         or pkt[0] not in FLASH_COMMANDS):
            # The continuation of an open page program: a window transaction
            # whose bytes are not a new SPI opcode. The 36-byte program is
            # three 16-byte windows (16o's 12-data-byte transactions over a
            # 24-byte stride), each re-naming the door, only the first headed.
            self.flash.program(self.open_pp, pkt)
            self.open_pp += len(pkt)
            self.log.append(("cont", door, len(pkt)))
            return
        self.open_pp = None
        if len(pkt) < 4:
            self.log.append(("packet", "short", pkt))
            return
        control, arg1, arg2, checksum = pkt[0], pkt[1], pkt[2], pkt[3]
        body = pkt[4:]
        if checksum != (control + arg1 + arg2) & 0xFF:
            self.log.append(("packet", "bad-sum", pkt))
            self.regs[STATUS_PORT] = 0x15      # the leaf's checksum error (16t)
            return
        self.regs[STATUS_PORT] = 0x9C          # the leaf's ack byte (16t)
        self.log.append(("packet", control, arg1, arg2, len(body)))
        page = (self.regs.get(ADDR_PORT, 0) & 0x7F) << 16   # 16w: bits 22-16
        if control == CMD_WREN:
            self.flash.write_enabled = True
        elif control == CMD_PP:
            addr = page | ((arg1 << 8) | arg2) & 0xFFFF
            self.flash.program(self.bank_base + addr, body)
            self.open_pp = self.bank_base + addr + len(body)
        elif control == CMD_SE:
            sector = ((arg2 << 8) | arg1) & 0xFFFF    # 16n's (addr&0xff, bank) pair
            self.flash.erase_sector(sector * self.flash.sector)
        elif control in (CMD_CE, 0xC7):
            self.flash.erase_chip()
        elif control == CMD_RDID:
            self.reply = bytearray(self.flash.jedec)
        elif control == CMD_CONTROL:
            self.isp_mode = True                      # enter ISP / bg write time
        else:
            self.log.append(("packet", "unmodelled", control))

    def read(self, n: int) -> bytes:
        if self.pointer == DATA_PORT:
            return self.flash.read(self.bank_base + self.read_addr, n)
        if self.pointer == STATUS_PORT:
            return bytes([self.regs[STATUS_PORT]])
        # An unmodelled port reads 0, as an unprogrammed register does. The
        # ladder points at ports we have no measurement for (the companion
        # write of the entry handshake, for one), and a real device answers.
        v = self.regs.get(self.pointer, 0)
        return bytes([v] * n) if n > 1 else bytes([v])

    @property
    def read_addr(self) -> int:
        """The address the read ladder armed. 16k: the HIGH byte comes from the
        page port 0xF2 (read, bit 7 cleared, written back), and the 16-bit
        offset goes to the data port as low, high, low|1. So the model's
        address is (page << 16) | offset16 - which is exactly why a page of 0
        aliases every 64 KiB, the address-independence 16k measured and 16t
        re-measured across modes 0, 1 and 2."""
        page = self.regs.get(ADDR_PORT, 0) & 0x7F
        # The first data-port byte opens the window, so it IS the address's low
        # byte. Mode 0 then arms with low|1 (one byte in the window = an 8-bit
        # offset); modes 1 and 2 write the high byte first and arm with low|1
        # (two bytes = a 16-bit offset). 16k's ladder, both branches.
        if self.door is not None and self.txn:
            if len(self.txn) == 1:
                off = self.door & 0xFFFE
            else:
                off = ((self.txn[0] & 0xFF) << 8) | (self.door & 0xFF)
        else:
            off = self.regs.get(DATA_PORT, 0) & 0xFFFE
        return (page << 16) | off


# ---------------------------------------------------------------- the monitor
@dataclass
class EmulatedMonitor:
    """The device a test talks to. Speaks the RTBus surface: write/read/close.

    `image` is the firmware now in the ACTIVE bank (FW.009 as shipped, 16i);
    `chip` names a Flash.dat record, which supplies the capacity and the
    identity bytes (16w) - so the emulator's chip is one the vendor ships.
    """
    flash: SpiFlash
    bridge: IspBridge
    mcu: bytearray = field(default_factory=bytearray)
    slave: int = 0x37
    tick_ms: float = 1.0
    ops: int = 0

    def __init__(self, image: bytes | None = None, chip: str = "MX25L32XX",
                 tick_ms: float = 1.0):
        from . import flashdat
        self.tick_ms = tick_ms
        import contextlib
        rec = None
        with contextlib.suppress(KeyError):
            rec = flashdat.find(chip)
        cap = rec.capacity_bytes if rec else 4 * 1024 * 1024
        self.flash = SpiFlash(capacity=cap, banks=2,
                              jedec=bytes([rec.mfr_id, rec.class_id,
                                           rec.capacity_code]) if rec
                                  else b"\xc2\x20\x16")
        self.bridge = IspBridge(self.flash)
        self.slave = Facts.ISP_HANDSHAKE_SLAVE7
        # The 0x22 window: one byte-addressable stream, seeded with the blocks
        # 16t/16u measured. 0x0000 is a capability block (survives a power
        # cycle); 0x0100 is transaction state (0x0107 latched 0x90).
        self.mcu = bytearray(b"\x00" * 0x0200)
        # 16t's sweep: reading at index N returns the stream at offset N, so
        # these are stream bytes - 0x0000..0x000d is the head block and the
        # 0x82 that showed at 0x0007's read lives at stream offset 0x000e.
        self.mcu[0x0000:0x000e] = bytes.fromhex("1214c483010001c0020006000000")
        self.mcu[0x000e] = 0x82
        self.mcu[0x0100:0x010a] = bytes.fromhex("00840002020202000100")
        self.mcu[0x0019:0x0021] = bytes.fromhex("0000000000000007")
        self.mcu[0x0059:0x0061] = bytes.fromhex("0000000000000005")
        self.mcu[0x0020] = 0x07                  # 16w: offset 0x20 answers 07
        if image:
            self.flash.data[:len(image)] = image

    # -- the RTBus surface ------------------------------------------------
    def write(self, addr7: int, buf, warmup: bool = False) -> None:
        buf = bytes(buf)
        self.ops += 1
        self.flash.tick(self.tick_ms)
        if addr7 == self.slave:
            if len(buf) == 1:
                b = buf[0]
                if b == Facts.EXIT_ISP_CMD:
                    self.bridge.isp_mode = False
                    self.bridge.handshake = True
                elif b in (c[0] for c in Facts.AUTOENTER_CANDIDATES):
                    self.bridge.isp_mode = True
                    self.bridge.handshake = True
                else:
                    self.bridge.point_at(b)
                    self.bridge.handshake = False
            elif len(buf) == 2:
                self.bridge.write_port(buf[0], buf[1])
            else:
                raise MonitorError(f"slave {addr7:#04x}: {len(buf)}-byte write")
        elif addr7 == 0x22:
            reg = int.from_bytes(buf[:2], "little")
            self.mcu[reg:reg + len(buf) - 2] = buf[2:]
            self._bridge_mcu(reg, buf[2:])
            self._mcu_ptr = reg
        elif addr7 == 0x20:
            if len(buf) == 3:                    # read_burst's [hi, mid, lo]
                self._burst_addr = int.from_bytes(buf, "big")
            else:
                raise MonitorError(f"flash burst: {len(buf)}-byte header")
        else:
            raise MonitorError(f"the emulator has no slave {addr7:#04x}")

    def read(self, addr7: int, n: int, warmup: bool = False) -> bytes:
        self.ops += 1
        self.flash.tick(self.tick_ms)
        if addr7 == self.slave:
            if self.bridge.handshake and n == 1:
                # The handshake status: 0x8a measured on this panel (16e/16q),
                # in normal mode and in ISP mode alike - which is why
                # enter_isp's idempotent probe succeeds with zero writes.
                return bytes([0x8a])
            if self.bridge.reply:
                out = bytes(self.bridge.reply[:n])
                self.bridge.reply = self.bridge.reply[n:]
                return out
            return self.bridge.read(n)
        if addr7 == 0x22:
            reg = getattr(self, "_mcu_ptr", 0x23)
            return bytes(self.mcu[reg:reg + n])
        if addr7 == 0x20:
            at = getattr(self, "_burst_addr", 0)
            return self.flash.read(at, n)
        raise MonitorError(f"the emulator has no slave {addr7:#04x}")

    def close(self) -> None:
        pass

    # -- the model's own state, what a test asserts ----------------------
    def _bridge_mcu(self, reg: int, payload: bytes) -> None:
        """The MCU window and the bridge share the bank bit: writing 0x58's
        value through the 0x22 window selects the bank (16r's reading)."""
        if reg == BANK_PORT and payload:
            self.bridge.bank = (1 if (payload[0] & 0x08) else 0)

    @property
    def active_bank(self) -> int:
        return self.bridge.boot_flag

    @property
    def version(self) -> str:
        """The version the panel reports: read from the ACTIVE bank's record
        block. FW.012 keeps it at 0xF800 (BIN_RECORD_16W); FW.009's record is
        at 0x2F7AA (16i), so both layouts are tried, INI order first."""
        base = self.active_bank * self.flash.bank_size
        for off in (0xF800, 0x2F7AA):
            raw = self.flash.read(base + off, 6)
            txt = raw.split(b"\xff")[0].decode("ascii", "replace")
            if txt.strip():
                return txt
        return ""

    def reset(self) -> None:
        """The vendor's post-flash reset: bSwitchFLag=1 swaps the boot bank,
        ulTimeAfterReset=10000 ms passes, the panel comes back on the other
        half (16r, INI_TIMING_16W)."""
        self.flash.tick(10_000)
        if self.bridge.bank:
            self.bridge.boot_flag = 1
        self.bridge.bank = 0
        self.mcu[0x0107] = 0x90                  # 16u: the latch returns to idle

    def flash_bank(self, bank: int, addr: int, n: int) -> bytes:
        return self.flash.read(bank * self.flash.bank_size + addr, n)
