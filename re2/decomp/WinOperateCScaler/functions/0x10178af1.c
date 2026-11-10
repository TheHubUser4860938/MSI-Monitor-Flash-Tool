// rea decompile_all
// name: __crt_stdio_input::format_string_parser<wchar_t>::advance
// address: 0x10178af1
// body: available
// range: 0x10178af1-0x10178bf2 inclusive
// non_contiguous: false
// provider: Ghidra 12.1.2 (ghidra)
// analysis_profile: b075844f08879296d957518397cd0ddda73db81dce53d00d3f0e702766fc2af6
// limitations: The session serves operations only after Ghidra reports default auto-analysis complete; incomplete analysis does not expose partial results.; The imported Program and temporary project are ephemeral and deleted on close. Annotation operations edit session database metadata; original executable bytes are never written.; Cancelling an active Ghidra request terminates its ephemeral database and discards session annotations. The selected target remains open; the next provider query imports the original artifact again.; Default-space addresses use lowercase 0x-prefixed hexadecimal; other address spaces use <percent-encoded-space>:0x<hex>.; The Ghidra Program references PDB WinOperateCScaler.pdb (GUID a6737962-efea-4805-8ae6-1fc1ef126554, age (hex) 1, signature unknown, version RSDS); Ghidra reports load state unknown. Original names and types may be missing; an empty name search does not prove a procedure is absent. Use list_procedures and address-based analysis to inspect recovered functions. REA does not admit a caller-selected PDB companion.; This session uses Ghidra 12.1.2. The bridge is verified against 12.1.4; other 12.1.x builds are accepted and the observed version is reported.; Pseudocode is Ghidra decompiler output, not original source and not text-equivalent to Hopper output.; External functions and functions without an analyzable body return null; other decompiler failures remain explicit.
// pseudocode: provider-specific; not original source


/* Library Function - Single Match
    public: bool __thiscall __crt_stdio_input::format_string_parser<wchar_t>::advance(void)
   
   Library: Visual Studio 2015 Release */

bool __thiscall
__crt_stdio_input::format_string_parser<wchar_t>::advance(format_string_parser<wchar_t> *this)

{
  short *psVar1;
  bool bVar2;
  int iVar3;
  
  if (*(int *)(this + 0xc) == 0) {
    *(undefined4 *)(this + 0x10) = 0;
    *(undefined4 *)(this + 0x14) = 0;
    this[0x18] = (format_string_parser<wchar_t>)0x0;
    *(undefined4 *)(this + 0x20) = 0;
    *(undefined4 *)(this + 0x24) = 0;
    *(undefined4 *)(this + 0x28) = 0;
    this[0x2c] = (format_string_parser<wchar_t>)0x0;
    *(undefined4 *)(this + 0x30) = 0;
    if (**(wint_t **)(this + 8) != 0) {
      iVar3 = _iswctype(**(wint_t **)(this + 8),8);
      if (iVar3 == 0) {
        psVar1 = *(short **)(this + 8);
        if ((*psVar1 == 0x25) && (psVar1[1] != 0x25)) {
          *(undefined4 *)(this + 0x10) = 4;
          *(short **)(this + 8) = psVar1 + 1;
          scan_optional_assignment_suppressor(this);
          bVar2 = scan_optional_field_width(this);
          if (!bVar2) {
            return false;
          }
          scan_optional_length_modifier(this);
          scan_optional_wide_modifier(this);
          bVar2 = scan_conversion_specifier(this);
          if (!bVar2) {
            return false;
          }
          if ((&DAT_101d88d0)[*(int *)(this + 0x28) + *(int *)(this + 0x30) * 0xc] == '\0') {
            reset_token_state_for_error(this,0x16);
            return false;
          }
          return true;
        }
        *(undefined4 *)(this + 0x10) = 3;
        *(short *)(this + 0x14) = *psVar1;
        *(short **)(this + 8) = psVar1 + (*psVar1 == 0x25) + 1;
      }
      else {
        *(undefined4 *)(this + 0x10) = 2;
        while (iVar3 = _iswctype(**(wint_t **)(this + 8),8), iVar3 != 0) {
          *(int *)(this + 8) = *(int *)(this + 8) + 2;
        }
      }
      return true;
    }
    *(undefined4 *)(this + 0x10) = 1;
  }
  return false;
}

