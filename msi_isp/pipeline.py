"""The vendor's flash pipeline, expressed as data (session 16g).

The point of this module is to be the native port's spine: the sequence MSI's
WinISPTool + WinIspPlugIn + Comm_Aux run on Windows, in the order the
decompiler proved, on the lanes our transports speak. Each step carries its
evidence, and the steps whose WIRE form is not yet known are marked
`pending` - the honest gaps, listed in one place instead of spread over
prose. Nothing here touches the monitor beyond reads.

Order, with the address that proved it (re/ghidra_isp_engine.md):
  1 enter ISP mode         WinIspPlugIn Isp_EnterISPMode 0x1001bbd0, magic
                           list Facts.AUTOENTER_CANDIDATES on 0x37 (14p)
  2 settle 200 ms          slot +0x94(200) at 0x1001bbd0; INI
                           ulTimeAfterCommand=200 (16g)
  3 background write time  slot +0x21c(0x45, 0xc, DAT_1024a3b4, 0, 0) - the
                           device-type-8 branch of the enter path (16a).
                           WIRE FORM PENDING: the slot is a core C++ vtable
                           entry (16g falsified the export-ordinal theory),
                           so the bytes it sends are not yet known.
  4 enter ISP (type 8)     slot +0x124(1), its failure logs "Enter ISP mode
                           fail! Error code:0x%X." (16a). WIRE FORM PENDING.
  5 get flash type         Flash_GetType 0x1001d560 (== Facts.ISP_PIPELINE's
                           get_flash_type 0x1d560 - two decodes agreeing)
  6 chip identity          Flash_GetInfo 0x1000da90: name at +4, capacity at
                           +0x18 in 64 KiB units - the vendor's own version of
                           our JEDEC 0x9F gate (16a)
  7 read the flash         Flash_Read 0x1003eda0(bank, addr16, len, buf):
                           the address is a BANK byte plus a 16-bit offset
                           (16a), page 32 = INI AUX_I2CPageLen (16b), reads
                           capped at 24 on the Comm I2CRead path (16d)
  8 leave ISP              0x24, shared with flashrom's mstarddc_spi (14p)
"""
from __future__ import annotations

from dataclasses import dataclass, field

from . import Facts
from .isp import I2CTarget, ScalerBus, packet_bytes


@dataclass(frozen=True)
class Step:
    name: str
    op: str                       # write | read | enter | exit | sleep
    slave7: int | None = None
    payload: bytes = b""
    count: int = 0                # bytes to read
    ms: int = 0                   # delay after the step
    why: str = ""
    pending: bool = False         # wire form not yet decoded

    @property
    def label(self) -> str:
        return f"{self.name}{'  (wire form pending)' if self.pending else ''}"


DDCI = 0x37                        # the type-8 lane: INI slave 0x6F
BG = 0x1D                          # 8-bit 0x3A: the background VCP slave (16ab)
MB = 0x35                          # 8-bit 0x6A: the ISP mailbox, status side
FLASH = 0x20                       # the ReadFlashData burst engine
MCU = 0x22                         # the register file behind it

PIPELINE: tuple[Step, ...] = (
    Step("enter ISP", "enter", DDCI,
         why="magic byte on 0x37, status bit 0x80 (14p; lane-dependent, 16f)"),
    Step("settle", "sleep", ms=Facts.VENDOR_INI["dual_bank"]
         ["time_after_command_ms"],
         why="slot +0x94(200) and INI ulTimeAfterCommand (16a, 16g)"),
    Step("set background flash write time", "packet", DDCI,
         payload=packet_bytes(0x45, 0x0C, 0x00),
         why="slot +0x21c(0x45, 0xc, DAT_1024a3b4, 0, 0) on the type-8 "
             "branch (16a); 16m's arithmetic names that slot WritePWM2SPIDev "
             "and 16o/16p give the shape: the packet [control, arg1, arg2, "
             "sum] to door 0x9C. The third byte is the time value the plugin "
             "loads from its config - 0x00 is the shipped default we send"),
    Step("enter ISP mode (type 8)", "packet", DDCI,
         payload=packet_bytes(0x45, 0x01, 0x00),
         why="slot +0x124(1) (16a), which 16m's arithmetic maps to the "
             "PWM2SPI write primitive: the packet [0x45, 0x01, 0, sum] to "
             "door 0x9C, no data phase (16o/16p). The pairing of control 0x45 "
             "with the enter-mode call is 16m's arithmetic (2 of 2 spot "
             "checks), not a wire capture"),
    Step("get flash type", "read", MCU, count=1,
         why="Flash_GetType 0x1001d560 (16a, matches ISP_PIPELINE 0x1d560)"),
    Step("chip identity", "read", MCU, count=3,
         why="Flash_GetInfo 0x1000da90 gives name + capacity in 64 KiB "
             "units; our mirror gate is JEDEC 0x9F -> 0x1Fxxxx (14f)"),
    Step("read flash page", "read", FLASH, count=32,
         why="Flash_Read(bank, addr16, len, buf) at page 32 (16a, 16b); the "
             "Comm I2CRead path caps a transfer at 24 (16d)"),
    Step("leave ISP", "exit", DDCI, payload=bytes([Facts.EXIT_ISP_CMD]),
         why="0x24, the same exit flashrom's mstarddc_spi uses (14p)"),
)


def erase_plan(image_len: int, sector: int = 4096, page: int = 32) -> dict:
    """The plan the plugin logs as "Bank: 0x%x, ProLen: 0x%x, SectorErase:
    0x%x, SectorEraseCount: 0x%x" (FUN_1002b8b0, 16y).

    Counted from the image, not the chip: MSI ships a 1.75-1.88 MiB bin for a
    4 MiB part, and the erase covers the image. A count of 0 is the vendor's
    chip-erase branch (FUN_1003e9c0)."""
    return {
        "image_len": image_len,
        "sector": sector,
        "sector_count": -(-image_len // sector),          # ceil
        "page": page,
        "pro_len": -(-image_len // page),                 # pages of 32
    }


PIPELINE_WRITE: tuple[Step, ...] = (
    Step("enter ISP", "enter", DDCI,
         why="Isp_EnterISPMode in the DoIsp chain at 0x10034120 (16y); the "
             "magic-byte ladder is 14p, the lane is the INI's 0x6F -> 0x37"),
    Step("settle", "sleep", ms=Facts.VENDOR_INI["dual_bank"]
         ["time_after_command_ms"],
         why="the chain calls comm slot +0x94 (16w: AdjustOption) with the INI's "
             "200 ms between the config reads and Flash_GetType (16y)"),
    Step("get flash type", "read", MCU, count=1,
         why="Flash_GetType in the chain (16a, 16y)"),
    Step("chip identity", "read", MCU, count=3,
         why="Flash_GetInfo in the chain: name + capacity in 64 KiB units "
             "(16a, 16y) - the vendor's own chip gate"),
    Step("erase sector", "erase", DDCI, count=1, ms=200,
         why="FUN_1003e610, looped SectorEraseCount times by the plan "
             "(16y); a count of 0 takes FUN_1003e9c0, the chip erase"),
    Step("program page", "program", DDCI, count=32, ms=200,
         why="FUN_1003e2a0(record[4] << 0x10, len) (16y) - the address is a "
             "64 KiB block index, so the top bits ride the page port"),
    Step("verify", "verify", DDCI, count=32,
         why="FUN_10021040's pair: the ROM-flag step follows a read-back. The "
             "engine's own verify is Flash_Read at the programmed address "
             "(16a); on the wire that is the read ladder 16k, which answers on "
             "the lane that took the packet (0x20 NACKs on the native lane)"),
    Step("write ROM flag", "packet", DDCI, payload=packet_bytes(0x45, 0x01, 0x00),
         why="FUN_10021040 logs 'Write Rom Flag Fail!, ErrorCode: 0x%x' and "
             "'Not need isp flag!' (16y) - THIS is the bank switch the INI's "
             "bSwitchFLag=1 arms; 16a's slot +0x124(1) is the same control byte"),
    Step("leave ISP", "exit", DDCI, payload=bytes([Facts.EXIT_ISP_CMD]),
         why="0x24, shared with flashrom's mstarddc_spi (14p); the chain ends "
             "in FUN_1001dfa0 + FUN_1001fa90 (16y)"),
)

#: The background path (16ab) - the OTHER flash protocol in the same tool, used
#: by device type 0x1a. It speaks VCPs on the ISP slaves, not SPI packets, and
#: the INI's ulTimeWaitCopyBank = 8000 ms is its copy-bank wait. Steps whose
#: packet bytes are decoded are marked; the rest are the honest open list.
# VCP 0x31 is the background channel and the FIRST DATA BYTE is a sub-opcode
# (16ac, from the four bodies): 1 start, 2 finish, 4 exit, 5 project-id address,
# 7 packet length. Slot +0x54 is the wrapper's GetVCP (write the code, read n),
# +0x58 its SetVCP (write n), +0x74 the word-shaped write the finish and exit
# use with a 0 flag. Every step opens with the poll FUN_1002aa00.
PIPELINE_BACKGROUND: tuple[Step, ...] = (
    Step("enter background mode", "packet", DDCI,
         payload=packet_bytes(0x71, 0x77, 0x31, b"\x02"),
         why="FUN_1002a480: slot +0x13c writes VCP 0x71 = 'w1' + mode 02 on "
             "slave 0x6E; status is read on VCP 0x31 from 0x6A (16ab)"),
    Step("verify project id", "vcpread", BG, payload=bytes([0x31, 0x05]), count=6,
         why="FUN_1002a600: GetVCP 0x31 sub-opcode 5 ('Get Project ID Addr'), "
             "then SetVCP 0x31 with 6 bytes; the reply's first byte must be 0x11 "
             "and it carries a length byte and a 4-byte project id, which the "
             "image is checked against ('Verify Project ID Addr') - 16ac"),
    Step("background start", "vcp", BG, payload=bytes([0x31, 0x01]),
         why="FUN_1002abd0 step 2: VCP 0x31 sub-opcode 1 on slave 0x3A/0x1D, "
             "then Sleep(param+0xc) - the INI's per-command delay (16ab)"),
    Step("packet length", "vcpread", BG, payload=bytes([0x31, 0x07]), count=3,
         why="FUN_1002acb0: the log says 'Set Packet len' but the call is a READ "
             "- GetVCP 0x31 sub-opcode 7, 3 bytes. The MONITOR answers its packet "
             "length; the config's two bytes at +0x18/+0x19 are the preload. The "
             "step is gated on config +0x14 (16ac)"),
    Step("write data", "program", DDCI, count=32, ms=200,
         why="FUN_1002ade0 step 3: the packet loop, logged 'Write data packet: "
             "%d', polled per packet (16ab). The 32 bytes are the page length; "
             "the real length is the answer to the step above (16ac)"),
    Step("background finish", "vcp", BG, payload=bytes([0x31, 0x02]),
         why="FUN_1002b0c0 step 4: poll, then VCP 0x31 sub-opcode 2; on a poll "
             "failure it writes 4 instead, and the success path ends with "
             "Sleep(param+0xc) (16ac - 16ab guessed 2, correct)"),
    Step("background exit", "vcp", BG, payload=bytes([0x31, 0x04]),
         why="FUN_1002b1f0 step 5: poll, then VCP 0x31 sub-opcode 4 - always 4, "
             "pass or fail (16ac; 16ab guessed 3, corrected)"),
)


#: the reset is its own export, not a step in the chain: ResetMCUExport
#: (RVA 0x8cd0) = InitCommunication -> Isp_HandShakeByBootType ->
#: Isp_EnterISPMode -> FUN_1001b860, and the INI waits 10000 ms.
RESET_STEP = Step("reset MCU", "sleep", ms=Facts.VENDOR_INI["dual_bank"]
                  ["time_after_reset_ms"],
                  why="ResetMCUExport 0x8cd0 + ulTimeAfterReset=10000 (16y)")


@dataclass
class StepResult:
    step: Step
    reply: bytes | None = None
    error: str | None = None

    @property
    def ok(self) -> bool:
        return self.error is None


@dataclass
class PipelineReport:
    results: list[StepResult] = field(default_factory=list)

    @property
    def reached(self) -> str | None:
        """The first step that did not answer - the diagnosis line."""
        for r in self.results:
            if not r.ok:
                return r.step.name
        return None

    @property
    def pending(self) -> list[str]:
        return [r.step.name for r in self.results if r.step.pending]


def run_pipeline(bus, addr=0, size=32, verbose=False, sleep=None,
                 start=0, stop=None, steps=None, image=None) -> PipelineReport:
    """Walk PIPELINE (or PIPELINE_WRITE) on any RTBus-shaped transport.

    `steps` selects the sequence; `image` is the firmware bytes a program step
    writes (the real bin in the simulator, nothing on the panel).

    `start`/`stop` slice the walk so a runbook can take one step at a time;
    `sleep` is injectable so tests do not wait 200 ms."""
    import time
    nap = sleep or time.sleep
    report = PipelineReport()
    sb = ScalerBus(bus, verbose=verbose)
    image = bytes(image) if image else None
    steps = (steps or PIPELINE)[start:stop]
    for st in steps:
        res = StepResult(st)
        try:
            if st.op == "enter":
                from .isp import enter_isp
                idx, status = enter_isp(bus, verbose=verbose)
                res.reply = bytes([status])
                if verbose:
                    print(f"  {st.name}: candidate {idx} status {status:#04x}")
            elif st.op == "exit":
                from .isp import exit_isp
                res.reply = bytes([int(exit_isp(bus))])
            elif st.op == "sleep":
                nap(st.ms / 1000.0)
            elif st.op == "vcp":
                from .isp import vcp_write
                vcp_write(bus, st.payload[0], st.payload[1:], slave7=st.slave7,
                          verbose=verbose)
                res.reply = st.payload
            elif st.op == "vcpread":
                from .isp import vcp_read
                res.reply = vcp_read(bus, st.payload[0], st.count,
                                     slave7=st.slave7, preload=st.payload[1:],
                                     verbose=verbose)
            elif st.op == "packet":
                from .isp import isp_write_packet
                isp_write_packet(bus, 0x9C, st.payload,
                                 slave7=st.slave7, verbose=verbose)
                res.reply = st.payload
            elif st.op == "erase":
                from .isp import sector_erase_at
                sector_erase_at(bus, addr, slave7=st.slave7, verbose=verbose)
                if st.ms:
                    nap(st.ms / 1000.0)          # ulTimeAfterCommand (16z)
                res.reply = b"\x00" * 4
            elif st.op == "verify":
                from .isp import flash_read_at
                res.reply = flash_read_at(bus, addr, st.count, slave7=st.slave7)
            elif st.op == "program":
                from .isp import program_page_at
                data = image[addr:addr + st.count] if image else b""
                if not data:
                    data = b"\x00" * st.count
                program_page_at(bus, addr, data, slave7=st.slave7,
                                verbose=verbose)
                if st.ms:
                    nap(st.ms / 1000.0)          # ulTimeAfterCommand (16z)
                res.reply = data
            elif st.op == "write":
                sb.word_write(I2CTarget(st.name, st.slave7),
                              int.from_bytes(st.payload[:2], "little"),
                              st.payload[2:])
                res.reply = st.payload
            else:                                    # read
                tgt = I2CTarget(st.name, st.slave7)
                if st.slave7 == FLASH:
                    res.reply = sb.read_burst(tgt, addr, min(st.count, size),
                                              page=Facts.SLAVES["isp_page_len"])
                else:
                    res.reply = sb.word_read(tgt, 0x23, st.count)
        except Exception as e:                       # a silent lane is a fact
            res.error = str(e)
        report.results.append(res)
        if verbose and res.error:
            print(f"  {st.label}: {res.error}")
        if res.error:
            break
    return report
