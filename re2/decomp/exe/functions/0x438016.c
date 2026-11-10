// rea decompile_all
// name: FUN_00438016
// address: 0x438016
// body: available
// range: 0x438016-0x438090 inclusive
// non_contiguous: false
// provider: Ghidra 12.1.2 (ghidra)
// analysis_profile: ac6d50be2cdf54f7005df47d1ed7e7ef55dee595681eb1b7c2e0b00d70cd697d
// limitations: The session serves operations only after Ghidra reports default auto-analysis complete; incomplete analysis does not expose partial results.; The imported Program and temporary project are ephemeral and deleted on close. Annotation operations edit session database metadata; original executable bytes are never written.; Cancelling an active Ghidra request terminates its ephemeral database and discards session annotations. The selected target remains open; the next provider query imports the original artifact again.; Default-space addresses use lowercase 0x-prefixed hexadecimal; other address spaces use <percent-encoded-space>:0x<hex>.; Ghidra Listing reports a terminal call at 0x438073 to 0x429127 FUN_00429127 (external=false, thunk=false, hasNoReturn=true); fallthrough is excluded by Ghidra's flow model. This records Ghidra's FunctionManager flag, not an independent verification that the callee cannot return.; Ghidra Listing reports a terminal call at 0x43808c to 0x4d36dd FUN_004d36dd (external=false, thunk=false, hasNoReturn=true); fallthrough is excluded by Ghidra's flow model. This records Ghidra's FunctionManager flag, not an independent verification that the callee cannot return.; The Ghidra Program references PDB ISPToolForMsi.pdb (GUID b8f2ac8f-1d6f-438d-800f-ed4a14426ac6, age (hex) 1, signature unknown, version RSDS); Ghidra reports load state unknown. Original names and types may be missing; an empty name search does not prove a procedure is absent. Use list_procedures and address-based analysis to inspect recovered functions. REA does not admit a caller-selected PDB companion.; This session uses Ghidra 12.1.2. The bridge is verified against 12.1.4; other 12.1.x builds are accepted and the observed version is reported.; Pseudocode is Ghidra decompiler output, not original source and not text-equivalent to Hopper output.; External functions and functions without an analyzable body return null; other decompiler failures remain explicit.
// pseudocode: provider-specific; not original source


size_t FUN_00438016(void *param_1,size_t param_2)

{
  size_t sVar1;
  int iVar2;
  ulong *puVar3;
  undefined4 uVar4;
  int in_ECX;
  
  if (param_2 == 0) {
    return 0;
  }
  if (param_1 != (void *)0x0) {
    sVar1 = _fread(param_1,1,param_2,*(FILE **)(in_ECX + 0x14));
    if ((sVar1 != 0) || (iVar2 = _feof(*(FILE **)(in_ECX + 0x14)), iVar2 != 0)) {
      iVar2 = _ferror(*(FILE **)(in_ECX + 0x14));
      if (iVar2 == 0) {
        return sVar1;
      }
      Afx_clearerr_s(*(_iobuf **)(in_ECX + 0x14));
    }
    puVar3 = ___doserrno();
    uVar4 = FUN_0040ee70();
                    /* WARNING: Subroutine does not return */
    FUN_004d36dd(1,*puVar3,uVar4);
  }
                    /* WARNING: Subroutine does not return */
  FUN_00429127();
}

