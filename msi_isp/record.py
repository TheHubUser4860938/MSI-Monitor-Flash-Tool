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


def parse_bin_record_at(data: bytes, card=None) -> Record:
    """The vendor's own method: read the fields where the card says they are.

    `parse_bin_record` (16i) anchors on a "MAG " run, which works on the two
    images we hold and nowhere else - an MPG image starts "MPG ". The INI
    method needs no mark: `BinVersionAddress` / `BinVersionLength` /
    `ulModelNamePosInBin` are the coordinates, and a ModelCard carries them, so
    any model with a card can be read. Fields are 0xff-separated (16i's
    layout, and what FW.012 shows at 0xF800: '012\\xff\\x03\\xff').
    """
    from . import models
    card = card or models.X28
    lo, hi = card.version_addr, card.version_addr + card.version_len
    ver = data[lo:hi]
    block = data[card.model_pos:card.model_pos + 96]
    fields = [f.decode("ascii", "replace").strip()
              for f in block.split(b"\xff") if f.strip(b"\x00")]
    model = fields[0] if fields else None
    panel = fields[1] if len(fields) > 1 else None
    # the INI names no scaler field, so the card supplies it (16i's mark walk
    # reads the scaler from the block; the offsets do not reach it)
    scaler = card.scaler or None
    code = None
    if model:
        v = ver.split(b"\xff")[0].decode("ascii", "replace")
        code = f"e{v}" if v.isdigit() else v or None
    return Record(model=model or None, panel=panel or None,
                  scaler=scaler or None,
                  version=f"FW.{ver.split(b'\xff')[0].decode('ascii','replace')}"
                  if ver.strip(b"\xff") else None,
                  code=code)


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


#: the record block, byte by byte, measured at the same page offset in both
#: bins we hold (16ac). FW.012 keeps it at 0xF800, FW.009 at 0x2F800 - both are
#: `block * 0x10000 + 0xF800`, so the record sits 2 KiB below the end of a
#: 64 KiB block. The INI's BinVersionAddress (0xF800) is the block-0 instance.
RECORD_PAGE_OFFSET = 0xF800
RECORD_BLOCK = 0x10000


@dataclass(frozen=True)
class RecordBlock:
    """One record block, decoded by field - the plugin's own field names.

    Offsets are relative to the version field, which is what the INI calls
    BinVersionAddress:

        -1   0x65 'e'      the code prefix; the code is 'e' + version (16i)
         0   3 bytes       FWVersion - the version digits ("012")
         3   0xff
         4   1 byte        a flag: 0x03 in both bins
         5   0xff
         6   N, 0xff       the model name (the gate's field)
             +, 0xff       the panel name
             +, 0xff 0xaf  a one-byte field, always 0xaf here (16i)
             +, 0xff       the scaler ("RTD2711")
             +  4 x 0xff   padding, then the checksum blob

    The plugin's `RecordFWVersion` (FUN_10038850) speaks five named fields -
    ReadVersion, ProjectID, FWVersion, CurrentBank, SubVersion - and writes
    them out to `ISPVersion.txt`. Three of the five are not in this block:
    ProjectID, SubVersion and CurrentBank are the plugin's version record, and
    `CurrentBank` is its notion of which bank is active - the software twin of
    the ROM flag the chain writes (16y's FUN_10021040).
    """
    offset: int                        # absolute, at the version field
    block: int                         # which 64 KiB block it lives in
    version: str
    code: str
    flag: int
    model: str
    panel: str
    marker: int                        # the 0xaf byte
    scaler: str

    @property
    def page_offset(self) -> int:
        return self.offset % RECORD_BLOCK


def _field_text(field: bytes) -> str:
    """One 0xff-separated record field as text, trimmed at the first
    separator and at any NUL padding (16ac; distinct from `_text`, which
    strips control bytes from a field that carries no separators)."""
    return field.split(b"\xff")[0].split(b"\x00")[0].decode("ascii", "replace")


def parse_record_at(data: bytes, at: int) -> RecordBlock | None:
    """Decode one record block at an absolute version offset, if it has shape."""
    if at < 1 or at + 8 > len(data):
        return None
    if data[at - 1:at] != b"e":
        return None
    ver = _field_text(data[at:at + 8])
    if not ver.isdigit():
        return None
    flag = data[at + 4] if at + 5 <= len(data) else 0
    rest = data[at + 6:]
    fields = [_field_text(f) for f in rest.split(b"\xff") if f.strip(b"\x00")]
    if not fields:
        return None
    model = fields[0]
    panel = fields[1] if len(fields) > 1 else ""
    marker = 0xAF
    scaler = ""
    for f in fields[2:]:
        if f.strip() == "\xaf":
            continue
        if f.startswith(("RTD", "MST", "GN")):
            scaler = f
            break
    return RecordBlock(offset=at, block=at // RECORD_BLOCK, version=ver,
                       code="e" + ver, flag=flag, model=model, panel=panel,
                       marker=marker, scaler=scaler)


def find_records(data: bytes) -> list[RecordBlock]:
    """Every record block in an image: each 64 KiB block, at page offset 0xF800.

    16ac: this is how the tool finds a record on a model nobody has dumped -
    FW.012 keeps it in block 0 (0xF800), FW.009 in block 2 (0x2F800), and the
    INI names only the block-0 address. Scanning the blocks is the general
    form of reading the INI.
    """
    out = []
    for blk in range((len(data) + RECORD_BLOCK - 1) // RECORD_BLOCK):
        at = blk * RECORD_BLOCK + RECORD_PAGE_OFFSET
        rec = parse_record_at(data, at)
        if rec:
            out.append(rec)
    return out


def encode_record(rec: RecordBlock) -> bytes:
    """The block, byte for byte - what a record write puts on the chip."""
    body = (b"e" + rec.version.encode("ascii", "replace") + b"\xff"
            + bytes([rec.flag]) + b"\xff"
            + rec.model.encode("ascii", "replace") + b"\xff"
            + rec.panel.encode("ascii", "replace") + b"\xff"
            + bytes([rec.marker]) + b"\xff"
            + rec.scaler.encode("ascii", "replace") + b"\xff")
    return body


# ---- 16ac: the record's address, and reading/writing it on the chip -------
# The vendor packs a flash address into ONE dword: (block << 16) | offset.
# FUN_1001f640 is the general read helper, and it spells the arithmetic out:
#     Flash_Read(param_3 >> 0x10 & 0xff, param_3 & 0xffff, param_4, param_1)
# i.e. bank/block = the high half, offset = the low half, then length, then the
# destination. `RecordFWVersion`'s mode-2 arm reads the version the same way,
# from DAT_1024bed8, 30 bytes, and ends the string at the first 0xff - which is
# exactly the shape of the record block at (block << 16) + 0xF800 (16ac).
RECORD_READ_LEN = 0x1E           # mode 2 asks for 30 bytes, then stops at 0xff


def pack_addr(block: int, page: int = RECORD_PAGE_OFFSET) -> int:
    """The vendor's packed flash address: (block << 16) | page offset."""
    return ((block & 0xFF) << 16) | (page & 0xFFFF)


def split_addr(packed: int) -> tuple[int, int]:
    """Undo it: (block, page offset). The inverse of `pack_addr`."""
    return ((packed >> 16) & 0xFF, packed & 0xFFFF)


def split_flash_addr(addr: int, bank_size: int = 2 * 1024 * 1024) -> tuple:
    """A flash address as the ladder sees it: (bank, page, offset).

    Three axes, three ports: the bank bit on 0x58 (0xE7 / 0xEF), the 64 KiB
    page on 0xF2 (7 bits, so 8 MiB of reach), and the 16-bit offset through the
    data window (16k, 16w, 16ac). `bank_size` comes from the model card - the
    X28's 4 MiB part is two 2 MiB banks (16r).
    """
    bank, rem = divmod(addr, bank_size)
    page, off = divmod(rem, RECORD_BLOCK)
    return bank, page, off


def read_chip_record(bus, block: int = 0, page: int = RECORD_PAGE_OFFSET,
                     slave7: int = 0x37, length: int = 0x60,
                     bank_size: int = 2 * 1024 * 1024,
                     verbose: bool = False) -> RecordBlock | None:
    """Read one record block off the chip - the plugin's mode-2 version read.

    The wire form is FUN_100383f0 verbatim: enter ISP mode, `Flash_Read(bank,
    addr, 0x1e, buf)`, then end the string at the first 0xff. Our `Flash_Read`
    is 16k's read ladder, and the block index rides the page port 0xF2 (16ac:
    `flash_read_at(page=)`), which is the same 64 KiB paging the write ladder
    uses for 0x200000 (`0xF2 <- 0x20`, 16w).

    One byte of over-read on purpose: the version field starts with the 'e' one
    byte BELOW the INI's address (16i: the code is 'e' + digits), so the read
    starts at page-1 and decodes from the 'e'. The `offset` that comes back is
    the version field, the same convention `parse_record_at` uses.
    """
    from . import isp
    addr = pack_addr(block, page)
    bank, pg, off = split_flash_addr(addr - 1, bank_size)
    data = isp.flash_read_at(bus, off, length + 1, slave7=slave7, mode=1,
                             page=pg, bank=bank, verbose=verbose)
    if not data:
        return None
    return decode_record(data, at=addr)


def decode_record(data: bytes, at: int = 0,
                  sep: int = 0xFF) -> RecordBlock | None:
    """Decode an already-read record block - the chip's answer, not a file.

    `parse_record_at` reads from an image; this reads the buffer the ISP ladder
    returned. `sep` is the field separator, which is also the terminator the
    vendor's mode-2 read stops at - and it ends the VERSION field, not the
    block, so the fields after it stay readable. (16ac: the mode-2 read asks
    for 30 bytes because the version is all that path wants.)
    """
    if not data.startswith(b"e"):
        return None
    parts = data.split(bytes([sep]))
    ver = _field_text(parts[0][1:])          # 'e012' -> '012'
    if not ver.isdigit():
        return None
    # parts[1] is the one-byte flag (0x03 in both bins); the fields the gate
    # reads start at parts[2] (16i's layout, 16ac's byte-level confirmation)
    flag = parts[1][0] if len(parts) > 1 and parts[1] else 0x03
    rest = [_field_text(f) for f in parts[2:] if f.strip(b"\x00")]
    model = rest[0] if rest else ""
    panel = rest[1] if len(rest) > 1 else ""
    scaler = next((f for f in rest[2:] if f.startswith(("RTD", "MST", "GN"))),
                  "")
    block, _ = split_addr(at)
    return RecordBlock(offset=at, block=block, version=ver, code="e" + ver,
                       flag=flag, model=model, panel=panel, marker=0xAF,
                       scaler=scaler)


def patch_image(data: bytes, rec: RecordBlock) -> bytes:
    """Write a record block into an image, at (block << 16) + page offset.

    This is the record WRITE, offline: the chain programs whole 64 KiB blocks
    (16y), so changing a version means splicing the record into the image and
    programming the block that carries it. FW.012's record is in block 0,
    FW.009's in block 2 - so a version bump is a write to one block, not to the
    whole bank.
    """
    body = encode_record(rec)
    at = rec.offset if rec.offset % RECORD_BLOCK == RECORD_PAGE_OFFSET else \
        pack_addr(rec.block, RECORD_PAGE_OFFSET)
    # `offset` is the VERSION field; the block's leading 'e' sits one byte
    # below it (16i), which is why encode_record starts with 'e' and lands at
    # offset - 1.
    at -= 1
    out = bytearray(data)
    if len(out) < at + len(body):
        out.extend(b"\xff" * (at + len(body) - len(out)))
    out[at:at + len(body)] = body
    return bytes(out)


def with_version(rec: RecordBlock, version: str,
                 flag: int | None = None) -> RecordBlock:
    """A copy of a record with a new version - the write side of the gate.

    `version` is the digits the block carries ("012"), not the MCCS string
    ("FW.012"); the 'e' prefix is the block's, not the caller's.
    `flag` defaults to the plugin's own arithmetic: `value | 6`, and `value | 2`
    when the sibling field is non-zero (FUN_10038850).
    """
    v = version.lstrip("FW.").lstrip("fw.").strip()
    if flag is None:
        flag = rec.flag
    return RecordBlock(offset=rec.offset, block=rec.block, version=v,
                       code="e" + v, flag=flag, model=rec.model,
                       panel=rec.panel, marker=rec.marker, scaler=rec.scaler)
