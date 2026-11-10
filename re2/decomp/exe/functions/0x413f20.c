// rea decompile_all
// name: FUN_00413f20
// address: 0x413f20
// body: available
// range: 0x413f20-0x413fe8 inclusive
// non_contiguous: false
// provider: Ghidra 12.1.2 (ghidra)
// analysis_profile: ac6d50be2cdf54f7005df47d1ed7e7ef55dee595681eb1b7c2e0b00d70cd697d
// limitations: The session serves operations only after Ghidra reports default auto-analysis complete; incomplete analysis does not expose partial results.; The imported Program and temporary project are ephemeral and deleted on close. Annotation operations edit session database metadata; original executable bytes are never written.; Cancelling an active Ghidra request terminates its ephemeral database and discards session annotations. The selected target remains open; the next provider query imports the original artifact again.; Default-space addresses use lowercase 0x-prefixed hexadecimal; other address spaces use <percent-encoded-space>:0x<hex>.; Ghidra Listing reports a terminal call at 0x413fe4 to 0x40ed80 FUN_0040ed80 (external=false, thunk=false, hasNoReturn=true); fallthrough is excluded by Ghidra's flow model. This records Ghidra's FunctionManager flag, not an independent verification that the callee cannot return.; The Ghidra Program references PDB ISPToolForMsi.pdb (GUID b8f2ac8f-1d6f-438d-800f-ed4a14426ac6, age (hex) 1, signature unknown, version RSDS); Ghidra reports load state unknown. Original names and types may be missing; an empty name search does not prove a procedure is absent. Use list_procedures and address-based analysis to inspect recovered functions. REA does not admit a caller-selected PDB companion.; This session uses Ghidra 12.1.2. The bridge is verified against 12.1.4; other 12.1.x builds are accepted and the observed version is reported.; Pseudocode is Ghidra decompiler output, not original source and not text-equivalent to Hopper output.; External functions and functions without an analyzable body return null; other decompiler failures remain explicit.
// pseudocode: provider-specific; not original source


void FUN_00413f20(int *param_1)

{
  int iVar1;
  WCHAR WVar2;
  short sVar3;
  int iVar4;
  DWORD DVar5;
  WCHAR *pWVar6;
  WCHAR local_210;
  undefined1 local_20e [518];
  uint local_8;
  
  local_8 = DAT_0060cff4 ^ (uint)&stack0xfffffffc;
  _memset(&local_210,0,0x208);
  DVar5 = GetTempPathW(0x104,&local_210);
  if (DVar5 != 0) {
    pWVar6 = &local_210;
    do {
      WVar2 = *pWVar6;
      pWVar6 = pWVar6 + 1;
    } while (WVar2 != L'\0');
    FUN_00415e30(&local_210,(int)pWVar6 - (int)local_20e >> 1);
    iVar4 = *(int *)(*param_1 + -0xc);
    if (iVar4 != 0) {
      iVar1 = iVar4 + -1;
      if ((-1 < iVar1) && (iVar1 <= iVar4)) {
        sVar3 = *(short *)(*param_1 + iVar1 * 2);
        if ((sVar3 != 0x5c) && (sVar3 != 0x2f)) {
          FUN_00415400(0x5c);
        }
        __security_check_cookie(local_8 ^ (uint)&stack0xfffffffc);
        return;
      }
                    /* WARNING: Subroutine does not return */
      FUN_0040ed80(0x80070057);
    }
  }
  __security_check_cookie(local_8 ^ (uint)&stack0xfffffffc);
  return;
}

