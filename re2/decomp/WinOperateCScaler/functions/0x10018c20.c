// rea decompile_all
// name: FUN_10018c20
// address: 0x10018c20
// body: available
// range: 0x10018c20-0x10018cbb inclusive
// non_contiguous: false
// provider: Ghidra 12.1.2 (ghidra)
// analysis_profile: b075844f08879296d957518397cd0ddda73db81dce53d00d3f0e702766fc2af6
// limitations: The session serves operations only after Ghidra reports default auto-analysis complete; incomplete analysis does not expose partial results.; The imported Program and temporary project are ephemeral and deleted on close. Annotation operations edit session database metadata; original executable bytes are never written.; Cancelling an active Ghidra request terminates its ephemeral database and discards session annotations. The selected target remains open; the next provider query imports the original artifact again.; Default-space addresses use lowercase 0x-prefixed hexadecimal; other address spaces use <percent-encoded-space>:0x<hex>.; Ghidra Listing reports a terminal call at 0x10018cb7 to 0x10018780 FUN_10018780 (external=false, thunk=false, hasNoReturn=true); fallthrough is excluded by Ghidra's flow model. This records Ghidra's FunctionManager flag, not an independent verification that the callee cannot return.; The Ghidra Program references PDB WinOperateCScaler.pdb (GUID a6737962-efea-4805-8ae6-1fc1ef126554, age (hex) 1, signature unknown, version RSDS); Ghidra reports load state unknown. Original names and types may be missing; an empty name search does not prove a procedure is absent. Use list_procedures and address-based analysis to inspect recovered functions. REA does not admit a caller-selected PDB companion.; This session uses Ghidra 12.1.2. The bridge is verified against 12.1.4; other 12.1.x builds are accepted and the observed version is reported.; Pseudocode is Ghidra decompiler output, not original source and not text-equivalent to Hopper output.; External functions and functions without an analyzable body return null; other decompiler failures remain explicit.
// pseudocode: provider-specific; not original source


undefined4 FUN_10018c20(HMODULE param_1,uint param_2)

{
  HRSRC pHVar1;
  ushort *puVar2;
  errno_t eVar3;
  int *in_ECX;
  uint _N1;
  
  pHVar1 = FindResourceW(param_1,(LPCWSTR)((param_2 >> 4) + 1 & 0xffff),(LPCWSTR)0x6);
  if (pHVar1 != (HRSRC)0x0) {
    puVar2 = (ushort *)FUN_100190f0(param_1,pHVar1,param_2);
    if (puVar2 != (ushort *)0x0) {
      _N1 = (uint)*puVar2;
      if ((int)(1U - *(int *)(*in_ECX + -4) | *(int *)(*in_ECX + -8) - _N1) < 0) {
        FUN_10018d80(_N1);
      }
      eVar3 = _wmemcpy_s((wchar_t *)*in_ECX,_N1,(wchar_t *)(puVar2 + 1),(uint)*puVar2);
      FUN_100186f0(eVar3);
      if ((int)_N1 <= *(int *)(*in_ECX + -8)) {
        *(uint *)(*in_ECX + -0xc) = _N1;
        *(undefined2 *)(*in_ECX + _N1 * 2) = 0;
        return 1;
      }
                    /* WARNING: Subroutine does not return */
      FUN_10018780(0x80070057);
    }
  }
  return 0;
}

