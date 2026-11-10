// rea decompile_all
// name: __crt_stdio_input::format_string_parser<wchar_t>::scan_optional_length_modifier
// address: 0x58466b
// body: available
// range: 0x58466b-0x58479b inclusive
// non_contiguous: false
// provider: Ghidra 12.1.2 (ghidra)
// analysis_profile: ac6d50be2cdf54f7005df47d1ed7e7ef55dee595681eb1b7c2e0b00d70cd697d
// limitations: The session serves operations only after Ghidra reports default auto-analysis complete; incomplete analysis does not expose partial results.; The imported Program and temporary project are ephemeral and deleted on close. Annotation operations edit session database metadata; original executable bytes are never written.; Cancelling an active Ghidra request terminates its ephemeral database and discards session annotations. The selected target remains open; the next provider query imports the original artifact again.; Default-space addresses use lowercase 0x-prefixed hexadecimal; other address spaces use <percent-encoded-space>:0x<hex>.; The Ghidra Program references PDB ISPToolForMsi.pdb (GUID b8f2ac8f-1d6f-438d-800f-ed4a14426ac6, age (hex) 1, signature unknown, version RSDS); Ghidra reports load state unknown. Original names and types may be missing; an empty name search does not prove a procedure is absent. Use list_procedures and address-based analysis to inspect recovered functions. REA does not admit a caller-selected PDB companion.; This session uses Ghidra 12.1.2. The bridge is verified against 12.1.4; other 12.1.x builds are accepted and the observed version is reported.; Pseudocode is Ghidra decompiler output, not original source and not text-equivalent to Hopper output.; External functions and functions without an analyzable body return null; other decompiler failures remain explicit.
// pseudocode: provider-specific; not original source


/* Library Function - Single Match
    private: void __thiscall
   __crt_stdio_input::format_string_parser<wchar_t>::scan_optional_length_modifier(void)
   
   Libraries: Visual Studio 2015 Debug, Visual Studio 2015 Release */

void __thiscall
__crt_stdio_input::format_string_parser<wchar_t>::scan_optional_length_modifier
          (format_string_parser<wchar_t> *this)

{
  ushort uVar1;
  ushort *puVar2;
  
  puVar2 = *(ushort **)(this + 8);
  uVar1 = *puVar2;
  if (uVar1 < 0x6b) {
    if (uVar1 == 0x6a) {
      *(undefined4 *)(this + 0x28) = 5;
      *(ushort **)(this + 8) = puVar2 + 1;
      return;
    }
    if (uVar1 == 0x49) {
      uVar1 = puVar2[1];
      if ((uVar1 == 0x33) && (puVar2[2] == 0x32)) {
        *(ushort **)(this + 8) = puVar2 + 3;
      }
      else {
        if ((uVar1 == 0x36) && (puVar2[2] == 0x34)) {
          *(undefined4 *)(this + 0x28) = 10;
          *(ushort **)(this + 8) = puVar2 + 3;
          return;
        }
        if ((((uVar1 != 100) && (uVar1 != 0x69)) && (uVar1 != 0x6f)) &&
           (((uVar1 != 0x75 && (uVar1 != 0x78)) && (uVar1 != 0x58)))) {
          return;
        }
        *(ushort **)(this + 8) = puVar2 + 1;
      }
      *(undefined4 *)(this + 0x28) = 9;
      return;
    }
    if (uVar1 == 0x4c) {
      *(undefined4 *)(this + 0x28) = 8;
      *(ushort **)(this + 8) = puVar2 + 1;
      return;
    }
    if (uVar1 == 0x54) {
      *(undefined4 *)(this + 0x28) = 0xb;
      *(ushort **)(this + 8) = puVar2 + 1;
      return;
    }
    if (uVar1 != 0x68) {
      return;
    }
    if (puVar2[1] == 0x68) {
      *(undefined4 *)(this + 0x28) = 1;
      *(ushort **)(this + 8) = puVar2 + 2;
      return;
    }
    *(undefined4 *)(this + 0x28) = 2;
  }
  else {
    if (uVar1 != 0x6c) {
      if (uVar1 == 0x74) {
        *(undefined4 *)(this + 0x28) = 7;
        *(ushort **)(this + 8) = puVar2 + 1;
        return;
      }
      if (uVar1 != 0x7a) {
        return;
      }
      *(undefined4 *)(this + 0x28) = 6;
      *(ushort **)(this + 8) = puVar2 + 1;
      return;
    }
    if (puVar2[1] == 0x6c) {
      *(undefined4 *)(this + 0x28) = 4;
      *(ushort **)(this + 8) = puVar2 + 2;
      return;
    }
    *(undefined4 *)(this + 0x28) = 3;
  }
  *(ushort **)(this + 8) = puVar2 + 1;
  return;
}

