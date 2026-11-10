// rea decompile_all
// name: __crt_stdio_input::format_string_parser<wchar_t>::scan_conversion_specifier
// address: 0x5842df
// body: available
// range: 0x5842df-0x58442a inclusive
// non_contiguous: false
// provider: Ghidra 12.1.2 (ghidra)
// analysis_profile: ac6d50be2cdf54f7005df47d1ed7e7ef55dee595681eb1b7c2e0b00d70cd697d
// limitations: The session serves operations only after Ghidra reports default auto-analysis complete; incomplete analysis does not expose partial results.; The imported Program and temporary project are ephemeral and deleted on close. Annotation operations edit session database metadata; original executable bytes are never written.; Cancelling an active Ghidra request terminates its ephemeral database and discards session annotations. The selected target remains open; the next provider query imports the original artifact again.; Default-space addresses use lowercase 0x-prefixed hexadecimal; other address spaces use <percent-encoded-space>:0x<hex>.; Ghidra Listing reports a terminal call at 0x58438e to 0x5847c6 __crt_stdio_input::format_string_parser<wchar_t>::scan_scanset_range (external=false, thunk=false, hasNoReturn=false); fallthrough is excluded by Ghidra's flow model. The reason for the terminal flow is not established by this observation.; The Ghidra Program references PDB ISPToolForMsi.pdb (GUID b8f2ac8f-1d6f-438d-800f-ed4a14426ac6, age (hex) 1, signature unknown, version RSDS); Ghidra reports load state unknown. Original names and types may be missing; an empty name search does not prove a procedure is absent. Use list_procedures and address-based analysis to inspect recovered functions. REA does not admit a caller-selected PDB companion.; This session uses Ghidra 12.1.2. The bridge is verified against 12.1.4; other 12.1.x builds are accepted and the observed version is reported.; Pseudocode is Ghidra decompiler output, not original source and not text-equivalent to Hopper output.; External functions and functions without an analyzable body return null; other decompiler failures remain explicit.
// pseudocode: provider-specific; not original source


/* Library Function - Single Match
    private: bool __thiscall
   __crt_stdio_input::format_string_parser<wchar_t>::scan_conversion_specifier(void)
   
   Libraries: Visual Studio 2015 Debug, Visual Studio 2015 Release */

bool __thiscall
__crt_stdio_input::format_string_parser<wchar_t>::scan_conversion_specifier
          (format_string_parser<wchar_t> *this)

{
  ushort uVar1;
  bool bVar2;
  
  uVar1 = **(ushort **)(this + 8);
  if (uVar1 < 0x65) {
    if (uVar1 == 100) {
      *(undefined4 *)(this + 0x30) = 3;
      goto LAB_0058439a;
    }
    if (uVar1 < 0x54) {
      if (uVar1 == 0x53) goto LAB_00584415;
      if (uVar1 != 0x41) {
        if (uVar1 == 0x43) goto LAB_00584357;
        if (uVar1 < 0x45) {
LAB_005843ff:
          reset_token_state_for_error(this,0x16);
          return false;
        }
        if (0x47 < uVar1) {
          if (uVar1 != 0x49) goto LAB_005843ff;
          goto LAB_0058432d;
        }
      }
    }
    else {
      if (uVar1 == 0x58) goto LAB_005843e6;
      if (uVar1 == 0x5b) {
        set_wide_for_c_s_or_scanset(this);
        *(int *)(this + 8) = *(int *)(this + 8) + 2;
        *(undefined4 *)(this + 0x30) = 8;
        bVar2 = scan_scanset_range(this);
        return bVar2;
      }
      if (uVar1 != 0x61) {
        if (uVar1 != 99) goto LAB_005843ff;
LAB_00584357:
        if (*(int *)(this + 0x20) == 0 && *(int *)(this + 0x24) == 0) {
          *(undefined4 *)(this + 0x24) = 0;
          *(undefined4 *)(this + 0x20) = 1;
        }
        set_wide_for_c_s_or_scanset(this);
        *(undefined4 *)(this + 0x30) = 0;
        goto LAB_00584423;
      }
    }
LAB_005843d6:
    *(undefined4 *)(this + 0x30) = 7;
  }
  else {
    if (uVar1 < 0x71) {
      if (uVar1 != 0x70) {
        if (0x67 < uVar1) {
          if (uVar1 != 0x69) {
            if (uVar1 == 0x6e) {
              *(undefined4 *)(this + 0x30) = 9;
            }
            else {
              if (uVar1 != 0x6f) goto LAB_005843ff;
              *(undefined4 *)(this + 0x30) = 4;
            }
            goto LAB_0058439a;
          }
LAB_0058432d:
          *(undefined4 *)(this + 0x30) = 2;
          goto LAB_0058439a;
        }
        goto LAB_005843d6;
      }
      *(undefined4 *)(this + 0x28) = 9;
    }
    else {
      if (uVar1 == 0x73) {
LAB_00584415:
        set_wide_for_c_s_or_scanset(this);
        *(undefined4 *)(this + 0x30) = 1;
LAB_00584423:
        *(int *)(this + 8) = *(int *)(this + 8) + 2;
        return true;
      }
      if (uVar1 == 0x75) {
        *(undefined4 *)(this + 0x30) = 5;
        goto LAB_0058439a;
      }
      if (uVar1 != 0x78) goto LAB_005843ff;
    }
LAB_005843e6:
    *(undefined4 *)(this + 0x30) = 6;
  }
LAB_0058439a:
  *(ushort **)(this + 8) = *(ushort **)(this + 8) + 1;
  return true;
}

