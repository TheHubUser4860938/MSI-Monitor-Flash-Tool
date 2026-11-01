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
from .isp import I2CTarget, ScalerBus


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
FLASH = 0x20                       # the ReadFlashData burst engine
MCU = 0x22                         # the register file behind it

PIPELINE: tuple[Step, ...] = (
    Step("enter ISP", "enter", DDCI,
         why="magic byte on 0x37, status bit 0x80 (14p; lane-dependent, 16f)"),
    Step("settle", "sleep", ms=Facts.VENDOR_INI["dual_bank"]
         ["time_after_command_ms"],
         why="slot +0x94(200) and INI ulTimeAfterCommand (16a, 16g)"),
    Step("set background flash write time", "write", DDCI, b"\x45\x0c",
         pending=True,
         why="slot +0x21c(0x45, 0xc, DAT_1024a3b4, 0, 0) on the type-8 "
             "branch (16a); the two bytes are the decoded args, the framing "
             "is the open part"),
    Step("enter ISP mode (type 8)", "write", DDCI, b"\x01", pending=True,
         why="slot +0x124(1) (16a)"),
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
                 start=0, stop=None) -> PipelineReport:
    """Walk PIPELINE on any RTBus-shaped transport (i2c-dev, relay, RM, bulk).

    `start`/`stop` slice the walk so a runbook can take one step at a time;
    `sleep` is injectable so tests do not wait 200 ms."""
    import time
    nap = sleep or time.sleep
    report = PipelineReport()
    sb = ScalerBus(bus, verbose=verbose)
    steps = PIPELINE[start:stop]
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
