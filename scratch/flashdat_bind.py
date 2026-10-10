#!/usr/bin/env python3
"""Flash.dat record->script binding (session 15i, Phase A).

Parses vendor/PlugIn/Flash.dat (gitignored vendor file -- this module is
pure so tests feed fixture bytes). Structure, read off the bytes:

  header 12B, then 150 records:
    [0:4]  chip key: raw JEDEC-style (AT25DF041 = 1f 44 01 ff) or ASCII
           '7' '0' + 2 family-ID bytes for the AMIC A25L family (0x90-
           Device-ID flavor: A25L032M = 37 30 16 15)
    [4:8]  00 00 00 00
    name   NUL-terminated ASCII
    params 24-28B (size varies by table version; [0:2] = capacity in
           64-KiB units LE is solid, remaining fields inventory-hex only)
    then optional INLINE CSV script text(s), NUL, zero-pad to next key.

  Script grammar (14i window protocol, confirmed token-boundary-perfect
  on all 31 bodies): 06,<reg>,<val> = byte-window register write
  (0x60 select / 0x61 data / 0x64-66 params), 0d,<reg>,<len>,+5 fields =
  8-token read/compare with wait+timeout (tail fields unresolved).

Binding rule: records WITHOUT inline scripts inherit the nearest
preceding defined script set. For A25L032M the preceding carrier is its
own family lead A25L020, so "nearest preceding" and "family default"
agree -- the bind is rule-agnostic (loader code itself lives in the
missing WinISPTool.exe; rule is inferred from layout, flagged in Facts).
"""
import re

SCRIPT_STMT_06 = 3  # 06,reg,val
SCRIPT_STMT_0D = 8  # 0d,reg,len,+5 (field semantics beyond reg/len unresolved)

_HDR = 12
_NAME_RE = re.compile(rb"([A-Za-z0-9_/.\- ]{4,16})\x00")
_CSV_RE = re.compile(rb"(?:[0-9a-fA-F]{2},){2,}[0-9a-fA-F]{2}")


def parse(data: bytes) -> list[dict]:
    """Return records in file order; each: off, key, name, cap_kib,
    params(hex), scripts(list of decoded stmt lists), inherited(name|None)."""
    recs = []
    for m in _NAME_RE.finditer(data):
        s = m.start()
        if s < _HDR + 8:
            continue
        key = data[s - 8 : s]
        if key[4:8] != b"\x00\x00\x00\x00" or not m.group(1):
            continue
        if not (65 <= m.group(1)[0] <= 90 or 97 <= m.group(1)[0] <= 122
                or 48 <= m.group(1)[0] <= 57):
            continue
        recs.append({"off": s - 8, "key": key[:4].hex(" "),
                     "name": m.group(1).decode(), "scripts": [],
                     "inherited": None})
    recs.sort(key=lambda r: r["off"])
    for i, r in enumerate(recs):
        end = recs[i + 1]["off"] if i + 1 < len(recs) else len(data)
        p = r["off"] + 8 + len(r["name"]) + 1  # params start
        params = data[p:p + 28]
        r["cap_kib"] = int.from_bytes(params[0:2], "little") * 64
        r["params"] = params.hex(" ")
        # CSV bodies are ASCII digit-pair runs; raw param bytes are not,
        # so scanning from params start cannot false-match.
        for sm in _CSV_RE.finditer(data, p, end):
            r["scripts"].append(decode_script(sm.group().decode()))
    last = None
    for r in recs:
        if r["scripts"]:
            last = r["name"]
        elif last:
            r["inherited"] = last
    return recs


def decode_script(text: str) -> list[tuple]:
    """Split a CSV body into (op, reg, payload...) statements; a malformed
    stream yields one ('?', remainder) entry instead of raising."""
    toks = text.strip().rstrip(",").split(",")
    stmts, k = [], 0
    while k < len(toks):
        if toks[k] == "06" and k + SCRIPT_STMT_06 <= len(toks):
            stmts.append(("w", toks[k + 1], toks[k + 2]))
            k += SCRIPT_STMT_06
        elif toks[k] == "0d" and k + SCRIPT_STMT_0D <= len(toks):
            stmts.append(("rd", toks[k + 1], toks[k + 2:k + 8]))
            k += SCRIPT_STMT_0D
        else:
            stmts.append(("?", " ".join(toks[k:]), ""))
            break
    return stmts


def summarize(recs: list[dict]) -> str:
    n_scr = sum(1 for r in recs if r["scripts"])
    lines = [f"records={len(recs)} with-inline-scripts={n_scr} "
             f"inheriting={len(recs) - n_scr}"]
    for r in recs:
        if r["scripts"] or r["name"] == "A25L032M":
            tag = f"{len(r['scripts'])} inline" if r["scripts"] \
                else f"inherits {r['inherited']}"
            lines.append(f"  {r['off']:#06x} [{r['key']}] {r['name']:<16} "
                         f"{r['cap_kib']:>5} KiB  {tag}")
            for j, s in enumerate(r["scripts"]):
                bad = [q for q in s if q[0] == "?"]
                lines.append(f"      S{j}: {len(s)} stmts"
                             + (f" MALFORMED {bad[0][1][:40]}" if bad else ""))
    return "\n".join(lines)


if __name__ == "__main__":
    import sys
    data = open(sys.argv[1] if len(sys.argv) > 1
                else "vendor/PlugIn/Flash.dat", "rb").read()
    recs = parse(data)
    print(summarize(recs))
    ours = next(r for r in recs if r["name"] == "A25L032M")
    carrier = next(r for r in recs if r["name"] == ours["inherited"])
    print("\n-- inherited script set (carrier %s, key %s) --"
          % (carrier["name"], carrier["key"]))
    for j, s in enumerate(carrier["scripts"]):
        print(f"S{j}:")
        for op, reg, pay in s:
            if op == "?":
                print(f"   MALFORMED from: {reg[:60]}")
            elif op == "w":
                print(f"   write reg 0x{reg} <- 0x{pay}")
            else:
                print(f"   read/poll reg 0x{reg} len 0x{pay[0]} "
                      f"tail {pay[1:]}")
