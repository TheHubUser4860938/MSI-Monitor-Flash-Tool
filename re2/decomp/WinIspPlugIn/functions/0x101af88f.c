// rea decompile_all
// name: FUN_101af88f
// address: 0x101af88f
// body: available
// range: 0x101af88f-0x101af911 inclusive
// non_contiguous: false
// provider: Ghidra 12.1.2 (ghidra)
// analysis_profile: b075844f08879296d957518397cd0ddda73db81dce53d00d3f0e702766fc2af6
// limitations: The session serves operations only after Ghidra reports default auto-analysis complete; incomplete analysis does not expose partial results.; The imported Program and temporary project are ephemeral and deleted on close. Annotation operations edit session database metadata; original executable bytes are never written.; Cancelling an active Ghidra request terminates its ephemeral database and discards session annotations. The selected target remains open; the next provider query imports the original artifact again.; Default-space addresses use lowercase 0x-prefixed hexadecimal; other address spaces use <percent-encoded-space>:0x<hex>.; Ghidra Listing reports a terminal call at 0x101af90d to 0x101ad6a9 _abort (external=false, thunk=false, hasNoReturn=true); fallthrough is excluded by Ghidra's flow model. This records Ghidra's FunctionManager flag, not an independent verification that the callee cannot return.; The Ghidra Program references PDB WinIspPlugIn.pdb (GUID d9f398c7-6c98-49a8-af25-a0659d5ad2f3, age (hex) 1, signature unknown, version RSDS); Ghidra reports load state unknown. Original names and types may be missing; an empty name search does not prove a procedure is absent. Use list_procedures and address-based analysis to inspect recovered functions. REA does not admit a caller-selected PDB companion.; This session uses Ghidra 12.1.2. The bridge is verified against 12.1.4; other 12.1.x builds are accepted and the observed version is reported.; Pseudocode is Ghidra decompiler output, not original source and not text-equivalent to Hopper output.; External functions and functions without an analyzable body return null; other decompiler failures remain explicit.
// pseudocode: provider-specific; not original source


__acrt_ptd * FUN_101af88f(void)

{
  DWORD dwErrCode;
  __acrt_ptd *_Memory;
  int iVar1;
  
  dwErrCode = GetLastError();
  if ((DAT_1023e1b4 != -1) &&
     (_Memory = (__acrt_ptd *)___acrt_FlsGetValue_4(DAT_1023e1b4), _Memory != (__acrt_ptd *)0x0)) {
LAB_101af8fa:
    SetLastError(dwErrCode);
    return _Memory;
  }
  _Memory = (__acrt_ptd *)__calloc_base(1,0x364);
  if ((_Memory == (__acrt_ptd *)0x0) ||
     (iVar1 = ___acrt_FlsSetValue_8(DAT_1023e1b4,_Memory), iVar1 == 0)) {
    FID_conflict__free(_Memory);
  }
  else {
    construct_ptd(_Memory,(__crt_locale_data **)&DAT_10249bb8);
    FID_conflict__free((void *)0x0);
    if (_Memory != (__acrt_ptd *)0x0) goto LAB_101af8fa;
  }
  SetLastError(dwErrCode);
                    /* WARNING: Subroutine does not return */
  _abort();
}

