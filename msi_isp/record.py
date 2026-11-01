"""The vendor's first gate: the UserDefinedInfo record (session 16i).

Before the flash pipeline runs at all, MSI's GUI compares two strings and
refuses to continue when they differ - the "Compare bin and flash model name
fail fail, error code: 0x45" line, at 12% of the progress bar. 16i proved the
gate is a string compare (exe FUN_004119f0), that the number in the message is
the SCALER TYPE (plugin FUN_10016b00: comm slot +0xc0 reads ID registers 0x00
and 0x0F, FUN_10016c20 maps the pair; this panel is (0x14, 0x30) -> 0x45), and
that the record has a file form - `IspUserDefined.txt`, section
`[UserDefinedInfo]` - carrying ModelName / PanelName / CapabilityInfo /
Version / SIName plus one `Ignore*` switch per field.

Both sides of the compare are readable from Linux with no ISP mode and no
Wine, so this module mirrors the gate:

  bin side    the .bin carries the record in plaintext mid-file, as fields
              separated by 0xff: version code, model, panel, 0xaf, scaler
              (measured: FW.009 @194566, FW.012 @63494, both "MAG 341CQ X28")
  panel side  model name = MCCS VCP 0x02; version = VCP 0x6E with the payload
              the INI names (strVersionDdcciCmd=0x6E,0x51,0x84,0x01,0xFE,0xE1,
              0xE6, reply taken at byte 6, 20 bytes) - the same ladder 16e
              measured on the wire

Nothing here writes to the monitor.
"""
from __future__ import annotations

import re
from dataclasses import dataclass, field

from . import Facts

SEP = 0xFF                     # the record's field separator, measured
MODEL_MARK = b"MAG "           # the model field is the first ASCII run that starts so
VERSION_VCP = 0x01             # the INI's strVersionDdcciCmd opcode
MODEL_VCP = 0x02               # MCCS "Model Name"
# The INI's ucVersionStartIndex=6 counts the RAW reply buffer, which carries a
# two-byte lead (the 0x6E address byte and the length byte) that ddc_parse_reply
# strips, so the payload index is 6 - 2 = 4. Measured live 2026-11-01:
#   6e 8a | 02 00 fe 00 | "FW.009N" 00 ...
#      lead   payload ->  string at payload index 4, raw index 6.
# The vendor VCP 0x01 reply carries a 4-byte header (reply, flag, 0xfe, 0x00),
# not the 8-byte GetVCP header — hence the separate constant.
VERSION_START, VERSION_LEN = 4, 20
MCCS_DATA = 8                        # GetVCP payload header, measured
INI_VERSION_START = 6                # the INI's own number, for the receipt
DDCI = 0x37                          # the DDC/CI slave, 7-bit (INI 0x6F, 16c)


@dataclass(frozen=True)
class Record:
    """One side of the compare. Missing fields are None, not ''.

    `code` is the bin's version code ("e012"), `version` the MCCS string
    ("FW.012"); the panel answers the second, the bin carries both.
    """
    model: str | None = None
    panel: str | None = None
    scaler: str | None = None
    version: str | None = None
    code: str | None = None

    def field(self, name: str) -> str | None:
        return getattr(self, name, None)


def _text(field: bytes) -> str:
    """A record field as text: the printable run, control bytes trimmed.

    The bins pad fields with control bytes (the FW.009 code field is
    b'\\x17\\x00e009'), so trimming both ends is the field's value, not a
    guess about it.
    """
    return "".join(chr(b) for b in field if 32 <= b < 127).strip()


CODE_RE = re.compile(r"[A-Za-z]?\d{3,4}$")


def _code(field: str) -> str | None:
    """The version code at the END of a field: 'e012', or '\x17\\x00e009'.

    FW.009's block opens with a 0xff before the code, FW.012's does not (the
    packed header runs straight into it), so the code is taken as the field's
    trailing code-shaped run rather than by a fixed offset. Measured on both.
    """
    m = CODE_RE.search(field.strip())
    return m.group(0) if m else None


def _fields(data: bytes, lo: int, hi: int) -> list[bytes]:
    return data[lo:hi].split(bytes([SEP]))


def parse_bin_record(data: bytes) -> Record:
    """Pull the record block out of a firmware image.

    The block is a run of 0xff-separated fields; the model field is the anchor
    (the first `MAG ` run in the file), the version code sits two fields
    before it and the panel and scaler after it, with a one-byte 0xaf field
    between panel and scaler. Measured on both bins we hold (16i).
    """
    i = data.find(MODEL_MARK)
    if i < 0:
        raise ValueError("no model field in this image (no 'MAG ' run)")
    # Walk back to the separator that opens the block: the model is preceded by
    # a one-byte field, which is preceded by the version code ("e009"/"e012"),
    # which is preceded by the block's opening 0xff. Measured on both bins.
    lo = i
    for _ in range(3):
        prev = data.rfind(bytes([SEP]), 0, lo)
        if prev < 0:
            break
        lo = prev
    hi = data.find(bytes([SEP]), i + 4, i + 128)  # end of the scaler run
    hi = data.find(bytes([SEP]), hi + 1, hi + 64) if hi > 0 else i + 96
    for _ in range(6):                            # grow until the scaler fits
        tail = data[i:hi + 1] if hi > 0 else data[i:i + 128]
        if b"RTD" in tail:
            break
        nxt = data.find(bytes([SEP]), hi + 1, hi + 64)
        if nxt < 0:
            break
        hi = nxt
    parts = _fields(data, lo + 1 if lo >= 0 else 0, hi + 1 if hi > 0 else len(data))
    txt = [_text(p) for p in parts]
    model = next((t for t in txt if t.startswith("MAG")), None)
    idx = txt.index(model) if model in txt else 0
    code = _code(txt[idx - 2]) if idx >= 2 else None
    panel = next((t for t in txt[idx + 1:] if len(t) > 4), None)
    scaler = next((t for t in txt[idx + 1:] if t.startswith("RTD")), None)
    ver = next((t for t in txt if t.startswith("FW.")), None)
    if model is None:
        raise ValueError("model field is empty in this image")
    return Record(model=model, panel=panel, scaler=scaler, version=ver, code=code)


@dataclass
class Verdict:
    """The compare's result, field by field, with the switches that skipped."""
    bin_rec: Record
    panel_rec: Record
    ignore: frozenset[str] = frozenset()
    checks: dict = field(default_factory=dict)

    @property
    def ok(self) -> bool:
        return all(c["ok"] for c in self.checks.values())

    @property
    def failed(self) -> list[str]:
        return [k for k, c in self.checks.items() if not c["ok"]]

    @property
    def summary(self) -> str:
        return "pass" if self.ok else "fail: " + ", ".join(self.failed)


def compare(bin_rec: Record, panel_rec: Record,
            ignore=()) -> Verdict:
    """The GUI's compare: model name, then version. `ignore` names fields.

    MSI compares the model name first and only then the version, and each
    field has an Ignore switch (Facts.USER_DEFINED_RECORD["switches"]), so the
    port takes the same set. A field missing on BOTH sides counts as equal:
    an absent thing is never "not enough" (the anti-vacuity law).
    """
    ign = frozenset(ignore)
    v = Verdict(bin_rec, panel_rec, ign)
    for name in ("model", "version"):
        b, p = bin_rec.field(name), panel_rec.field(name)
        if name in ign:
            v.checks[name] = {"ok": True, "bin": b, "panel": p, "ignored": True}
        elif b is None or p is None:
            v.checks[name] = {"ok": b is None and p is None, "bin": b,
                              "panel": p, "ignored": False}
        else:
            v.checks[name] = {"ok": b.strip() == p.strip(), "bin": b,
                              "panel": p, "ignored": False}
    return v


def read_panel_record(bus, verbose: bool = False, model: str | None = None) -> Record:
    """Ask the monitor for its side of the compare.

    `model` is the caller's best string: this panel answers VCP 0x02 with a
    zero-length reply on all ten tries (measured 2026-11-01, i2c-dev lane), so
    the CLI hands in the EDID's 0xFC descriptor name, which is the same
    "MAG 341CQ X28". The version comes from the vendor's own ladder.
    """
    if model is None:
        model = _read_vcp_string(bus, MODEL_VCP, 32, verbose)
    ver = _read_version_ladder(bus, verbose)
    return Record(model=model, version=ver)


def _read_vcp_string(bus, vcp: int, length: int, verbose: bool = False):
    """GetVCP `vcp` and take the MCCS string out of the reply.

    Reply payload = [reply][flag][vcp][type][max_hi][max_lo][sh][sl][type]
    then the text, so the string starts at payload index 8 (verified against
    the three GetVCP replies recorded in ddc.py and live on this panel).
    """
    import time

    from .ddc import SLAVE_DDC, ddc_packet, ddc_parse_reply
    try:
        bus.warmup()
        bus.write(SLAVE_DDC, ddc_packet(vcp, b""))
        time.sleep(0.03)
        parsed = ddc_parse_reply(bus.read(SLAVE_DDC, 11 + length))
    except Exception as exc:                       # a silent lane is a fact
        if verbose:
            print(f"  vcp {vcp:#04x}: {exc}")
        return None
    if not parsed or not parsed["payload"]:
        return None
    return _ascii_tail(parsed["payload"], start=MCCS_DATA)


def _read_version_ladder(bus, verbose: bool = False):
    """The INI's own ladder: write 51 84 01 FE E1 E6, read 0x6E, take [6:26]."""
    import time

    from .ddc import SLAVE_DDC, ddc_packet, ddc_parse_reply
    # The INI line is the RAW wire form: 0x6E (slave) 0x51 0x84 (MCCS header)
    # 0x01 (VCP) then the payload. Drop the slave byte, keep VCP + payload.
    wire = [int(x, 16) for x in
            Facts.USER_DEFINED_RECORD["wire_cmd"].replace("0x", "").split(",")]
    vcp, payload = wire[3], bytes(wire[4:])
    try:
        bus.warmup()
        bus.write(SLAVE_DDC, ddc_packet(vcp, payload))
        time.sleep(Facts.VENDOR_INI["dual_bank"]["time_after_command_ms"] / 1000.0)
        parsed = ddc_parse_reply(bus.read(SLAVE_DDC, 11 + VERSION_LEN))
    except Exception as exc:                       # ditto
        if verbose:
            print(f"  version ladder: {exc}")
        return None
    if not parsed or not parsed["payload"]:
        return None
    return _ascii_tail(parsed["payload"], start=VERSION_START)


def _ascii_tail(raw: bytes, start: int = 0) -> str | None:
    """Trim a MCCS reply to its printable text (the payload starts at `start`)."""
    if not raw:
        return None
    body = raw[start:] if len(raw) > start else raw
    out = bytearray()
    for b in body:
        if 32 <= b < 127:
            out.append(b)
        elif out:
            break
    return out.decode("ascii", "ignore").strip() or None
