// rea decompile_all
// name: FUN_101557a2
// address: 0x101557a2
// body: available
// range: 0x101557a2-0x10155801 inclusive
// non_contiguous: false
// provider: Ghidra 12.1.2 (ghidra)
// analysis_profile: b075844f08879296d957518397cd0ddda73db81dce53d00d3f0e702766fc2af6
// limitations: The session serves operations only after Ghidra reports default auto-analysis complete; incomplete analysis does not expose partial results.; The imported Program and temporary project are ephemeral and deleted on close. Annotation operations edit session database metadata; original executable bytes are never written.; Cancelling an active Ghidra request terminates its ephemeral database and discards session annotations. The selected target remains open; the next provider query imports the original artifact again.; Default-space addresses use lowercase 0x-prefixed hexadecimal; other address spaces use <percent-encoded-space>:0x<hex>.; Ghidra Listing reports a terminal call at 0x101557fd to 0x1016156c FUN_1016156c (external=false, thunk=false, hasNoReturn=true); fallthrough is excluded by Ghidra's flow model. This records Ghidra's FunctionManager flag, not an independent verification that the callee cannot return.; The Ghidra Program references PDB WinOperateCScaler.pdb (GUID a6737962-efea-4805-8ae6-1fc1ef126554, age (hex) 1, signature unknown, version RSDS); Ghidra reports load state unknown. Original names and types may be missing; an empty name search does not prove a procedure is absent. Use list_procedures and address-based analysis to inspect recovered functions. REA does not admit a caller-selected PDB companion.; This session uses Ghidra 12.1.2. The bridge is verified against 12.1.4; other 12.1.x builds are accepted and the observed version is reported.; Pseudocode is Ghidra decompiler output, not original source and not text-equivalent to Hopper output.; External functions and functions without an analyzable body return null; other decompiler failures remain explicit.
// pseudocode: provider-specific; not original source


bool FUN_101557a2(uint param_1,char param_2)

{
  uint uVar1;
  basic_string<wchar_t,std::char_traits<wchar_t>,std::allocator<wchar_t>_> *in_ECX;
  
  if (param_1 < 0x7fffffff) {
    if (*(uint *)(in_ECX + 0x14) < param_1) {
      FUN_1000e790(param_1,*(undefined4 *)(in_ECX + 0x10));
    }
    else if ((param_2 == '\0') || (7 < param_1)) {
      if (param_1 == 0) {
        *(undefined4 *)(in_ECX + 0x10) = 0;
        if (7 < *(uint *)(in_ECX + 0x14)) {
          in_ECX = *(basic_string<wchar_t,std::char_traits<wchar_t>,std::allocator<wchar_t>_> **)
                    in_ECX;
        }
        *(undefined2 *)in_ECX = 0;
      }
    }
    else {
      uVar1 = *(uint *)(in_ECX + 0x10);
      if (param_1 < *(uint *)(in_ECX + 0x10)) {
        uVar1 = param_1;
      }
      std::basic_string<wchar_t,std::char_traits<wchar_t>,std::allocator<wchar_t>_>::_Tidy
                (in_ECX,true,uVar1);
    }
    return param_1 != 0;
  }
                    /* WARNING: Subroutine does not return */
  FUN_1016156c();
}

