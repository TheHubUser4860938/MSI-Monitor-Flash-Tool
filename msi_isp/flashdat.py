"""`Flash.dat` - the vendor's per-chip flash script library, parsed.

`vendor/PlugIn/Flash.dat` (44,211 bytes) is the table the ISP engine consults
to drive a specific SPI flash part. The plugin opens it by the UTF-16 literal
`PlugIn/Flash.dat` (VA 0x1020e4cc), referenced from nine inlined sites in
0x10001219..0x10002889 - one per entry point (IspFlash, DumpFlash,
BankEraseFlash, ChipEraseFlash, GetKeyFromFlash, RecordFWVersion, ...). Those
sites are why the file's format is worth knowing: every flash verb in the tool
runs a script out of it.

The format is NOT a flat CSV, which is what an early read of `strings`
suggested (16w, correcting 16m):

    file header   12 bytes: 09 05 02 07 02 00 96 00 00 00 00 00
    records       143 of them, VARIABLE length, back to back

Each record:

    +0x00  u8   manufacturer ID - the first byte RDID (0x9F) returns
                 c2 Macronix, ef Winbond, 1c ESMT, c8 GigaDevice, 9d ISSI,
                 85 Puya/PY, 5e Zbit, 20 Numonyx/XM, 01 Spansion, 0b XTX,
                 b3 Unitron, d5 Micron, 1f Atmel, 68 Bytech, 8c Feature,
                 a1 Fujio, 37 A25 (Adean), 7f PM (extended ID), c4 GT
    +0x01  u8   device class nibble (pairs with the capacity code below)
    +0x02  u8   capacity code, high   } a (n+1, n) pair: 16 15 for 32 Mbit,
    +0x03  u8   capacity code, low    } 13 12 for 4 Mbit, 14 13 for 8 Mbit
    +0x04  char name[] NUL-terminated, the marketing part number
    +n+1   u16  capacity in 64 KiB units   (0x40 -> 4 MiB, 0x100 -> 16 MiB)
    +n+3   u8   mode byte A                 (1..4: the read-mode family)
    +n+4   u8   mode byte B                 (0..2: the wire mode)
    +n+12  u8   ID opcode for this part: 9f RDID, bf/ff/a0/bc/fc/9c/7f
                 per-vendor ID reads - the command the tool issues to
                 recognise the chip
    +n+13  ...  expected ID bytes, then zero padding
    tail   char script[]  an ASCII comma-separated statement list

The script grammar (16w, from the statement lists themselves):

    06,<reg>,<val>      an INDEX/DATA write: reg 0x60 selects a bridge
                        register, reg 0x61 writes it. So `06,60,20` selects
                        register 0x20 and `06,61,06` puts 0x06 in it - the
                        WRITE ENABLE command. `06,60,21` then selects 0x21,
                        the strobe.
    0d,<reg>,<n>,<mask>,<val>,<tries>,<d1>,<d2>
                        a POLL: read <reg>, mask it, compare to <val>, retry
                        <tries> times with the two settle delays. This is the
                        vendor's "wait for the part to finish", the same shape
                        16m saw as "poll until not 0xDE". Seven arguments, not
                        six - the 16m note's "18 statements / 3 phases" is the
                        check that pins it.
    06,64/65/66,<b>     the 24-bit ADDRESS, low, mid, high
    06,38,<cmd>/06,39   the command-with-address port and its strobe

Registers 0x20/0x21 (command-only) and 0x38/0x39 (command+address) are the two
transaction shapes; 0x60/0x61 are the indirect index/data pair. Read on the
native lane these numbers land in the same byte-addressable window 16t mapped,
so the script's register file and the window we can already touch are one
space - measured 2026-11-01: window offset 0x20 answers 07, 0x60 answers
05 21 00 04, 0x64 answers 2b 04 09 00.

The 4 MiB parts (the panel's class: two 2 MiB banks) are A25L032M, AT25SF321,
BY25Q32CS, EN25QE32A, EN25QH32A, GD25Q32C, GT25Q32A, MX25L3206E, MX25L32XX,
MX25R3235F, P25Q32H, W25Q32, W25Q32JVSIM, W25Q32JVSSIQ, XM25QH32C. Only a few
records carry a script at all - most chips run on the defaults.
"""
from __future__ import annotations

import re
from dataclasses import dataclass

__all__ = ["CAPACITY_CODE", "DEFAULT_PATH", "MANUFACTURERS", "ChipRecord",
           "Statement", "candidates", "chip_names", "find", "find_by_id",
           "match_id", "parse"]

DEFAULT_PATH = "vendor/PlugIn/Flash.dat"

#: byte 0 of the record -> the vendor RDID returns it
MANUFACTURERS = {
    0x01: "Spansion/Cypress", 0x0b: "XTX", 0x1c: "ESMT", 0x1f: "Atmel",
    0x20: "Numonyx/ST (XM)", 0x37: "Adean (A25)", 0x5e: "Zbit", 0x68: "Bytech",
    0x7f: "PM (extended ID)", 0x85: "Puya", 0x8c: "Feature", 0x9d: "ISSI",
    0xa1: "Fujio", 0xb3: "Unitron", 0xc2: "Macronix", 0xc4: "GT (GigaDevice 2)",
    0xc8: "GigaDevice", 0xd5: "Micron", 0xef: "Winbond",
}

#: records 4 bytes of (n+1, n) where n indexes the capacity
CAPACITY_CODE = {0x10: 512 * 1024, 0x11: 1024 * 1024, 0x12: 2 * 1024 * 1024,
                 0x13: 4 * 1024 * 1024, 0x14: 8 * 1024 * 1024,
                 0x15: 16 * 1024 * 1024, 0x16: 32 * 1024 * 1024,
                 0x17: 64 * 1024 * 1024, 0x18: 128 * 1024 * 1024,
                 0x19: 256 * 1024 * 1024}

_NAME = re.compile(rb"([ -~]{3,16})\x00")


@dataclass(frozen=True)
class Statement:
    """One script statement: an opcode with its arguments, as decimal bytes."""
    op: int
    args: tuple[int, ...]

    @property
    def kind(self) -> str:
        if self.op == 0x06:
            if len(self.args) == 2:
                reg = self.args[0]
                if reg == 0x60:
                    return "select"          # 0x60 <- register number
                if reg == 0x61:
                    return "command"         # the selected register's value
                return "write"
            return "write-multi"
        if self.op == 0x0d:
            return "poll"
        return f"op{self.op:#04x}"

    def __str__(self) -> str:
        body = ",".join(f"{a:#04x}" for a in self.args)
        return f"{self.kind:<8} {body}"


@dataclass(frozen=True)
class ChipRecord:
    """One entry of Flash.dat."""
    name: str
    offset: int
    mfr_id: int
    class_id: int
    cap_id: int                    # RDID byte 2 - the capacity ID (hdr[2])
    capacity_code: int
    capacity_bytes: int
    mode_a: int
    mode_b: int
    id_opcode: int
    id_expect: bytes
    script: tuple[Statement, ...] = ()

    @property
    def manufacturer(self) -> str:
        return MANUFACTURERS.get(self.mfr_id, f"id {self.mfr_id:#04x}")

    @property
    def banks(self) -> int:
        """2 MiB banks, per the dual-bank ruling (16r): a 4 MiB part is two."""
        return max(1, self.capacity_bytes // (2 * 1024 * 1024))

    def phases(self) -> list[list[Statement]]:
        """The script split at each poll - a poll ends a transaction, so each
        group is one flash operation (the '3 phases' of the A25L020 template)."""
        out, cur = [], []
        for s in self.script:
            cur.append(s)
            if s.kind == "poll":
                out.append(cur)
                cur = []
        if cur:
            out.append(cur)
        return out


def _script(blob: bytes) -> tuple[Statement, ...]:
    """Decode the tail CSV. Statements are (op, args...) grouped by arity:
    06 takes 2 args, 0d takes 6; the file separates them with commas only."""
    txt = blob.split(b"\0")[0].decode("ascii", "replace")
    if not txt.strip(","):
        return ()
    nums = [int(tok, 16) for tok in txt.split(",") if tok]
    out, i = [], 0
    while i < len(nums):
        op = nums[i]
        arity = {0x06: 2, 0x0d: 7}.get(op, 0)
        args = tuple(nums[i + 1: i + 1 + arity])
        if len(args) != arity:
            break
        out.append(Statement(op, args))
        i += 1 + arity
    return tuple(out)


def parse(path: str = DEFAULT_PATH) -> list[ChipRecord]:
    """Every record in Flash.dat, in file order."""
    with open(path, "rb") as fh:
        data = fh.read()
    recs: list[ChipRecord] = []
    for m in _NAME.finditer(data):
        name = m.group(1).decode("ascii")
        if not re.fullmatch(r"[A-Z0-9][A-Za-z0-9_+./-]{2,15}", name):
            continue
        start = m.start() - 8
        if start < 12:
            continue
        hdr = data[start:start + 4]
        cap_at = m.end()                       # just past the name's NUL
        if cap_at + 4 > len(data):
            continue
        cap = int.from_bytes(data[cap_at:cap_at + 2], "little") * 65536
        mode_a, mode_b = data[cap_at + 2], data[cap_at + 3]
        id_op = data[cap_at + 11] if cap_at + 12 <= len(data) else 0
        id_exp = data[cap_at + 12:cap_at + 18] if cap_at + 18 <= len(data) else b""
        end = len(data)
        nxt = _NAME.search(data, m.end())
        if nxt:
            end = max(end and m.end(), nxt.start() - 8)
        tail = data[m.end():end]
        csv_at = tail.find(b"06,")
        script = _script(tail[csv_at:]) if csv_at >= 0 else ()
        recs.append(ChipRecord(
            name=name, offset=start, mfr_id=hdr[0], class_id=hdr[1],
            cap_id=hdr[2], capacity_code=hdr[3], capacity_bytes=cap,
            mode_a=mode_a,
            mode_b=mode_b, id_opcode=id_op, id_expect=id_exp, script=script))
    return recs


def find_by_id(id_bytes: bytes, path: str = DEFAULT_PATH) -> ChipRecord:
    """The vendor's own lookup: the RDID answer keys the record table.

    FUN_1001caf0 reads three ID bytes (16z) and the record header is
    `manufacturer, class, capacity_code_hi, capacity_code_lo` - so byte 0 is
    the manufacturer and byte 2 is the capacity code, which is exactly the
    pair that identifies a part across vendors (c2 20 16 = Macronix 32 Mbit,
    ef 40 16 = Winbond 32 Mbit, 1c 30 16 = ESMT 32 Mbit).

    Matching is on (manufacturer, capacity code); the class byte is the
    tie-breaker, because several vendors ship the same capacity under
    different class codes.
    """
    recs = parse(path)
    mfr = id_bytes[0]
    cap = id_bytes[2] if len(id_bytes) > 2 else None
    hits = [r for r in recs if r.mfr_id == mfr
            and (cap is None or r.cap_id == cap)]
    if not hits:
        raise KeyError(f"no Flash.dat record for id {id_bytes.hex(' ')}")
    if len(id_bytes) > 1:
        for r in hits:
            if r.class_id == id_bytes[1]:
                return r
    return hits[0]


def candidates(path: str = DEFAULT_PATH) -> list[ChipRecord]:
    """The distinct probes: (manufacturer, capacity ID, ID opcode).

    16z: the 3-byte RDID does NOT key the table. `c2 20 16` is both
    MX25L3206E (id opcode 0xbf) and MX25L32XX (0xbc); `ef 40 16` is W25Q32 and
    W25Q32JVSSIQ, told apart only by the record's expected bytes (0x60). So
    identification is a two-step match - issue the RECORD's opcode, compare the
    bytes it expects - and the probe set is one per (mfr, cap, opcode) triple.
    """
    seen, out = set(), []
    for r in parse(path):
        key = (r.mfr_id, r.cap_id, r.id_opcode)
        if key in seen:
            continue
        seen.add(key)
        out.append(r)
    return out


def match_id(id_bytes: bytes, rec: ChipRecord) -> bool:
    """Does this record's identity agree with the bytes the chip answered?

    The record's `id_expect` field carries the vendor's own mask/value pair
    (e.g. `00 60 00 00 00 60` for W25Q32JVSSIQ): a non-zero byte must match.
    """
    if not rec.mfr_id:                              # the "Default" placeholder
        return False
    if len(id_bytes) < 1 or id_bytes[0] != rec.mfr_id:
        return False
    if len(id_bytes) > 2 and rec.cap_id and id_bytes[2] != rec.cap_id:
        return False
    for i, want in enumerate(rec.id_expect):
        if want and i < len(id_bytes) and id_bytes[i] != want:
            return False
    return True


def find(name: str, path: str = DEFAULT_PATH) -> ChipRecord:
    """One record by part number, case-insensitive."""
    want = name.strip().upper()
    for r in parse(path):
        if r.name.upper() == want:
            return r
    raise KeyError(f"{name!r} is not in Flash.dat")


def chip_names(path: str = DEFAULT_PATH) -> list[str]:
    return [r.name for r in parse(path)]
