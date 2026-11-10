// rea decompile_all
// name: AfxGetModuleState
// address: 0x438e8d
// body: available
// range: 0x438e8d-0x438e91 inclusive
// non_contiguous: false
// provider: Ghidra 12.1.2 (ghidra)
// analysis_profile: ac6d50be2cdf54f7005df47d1ed7e7ef55dee595681eb1b7c2e0b00d70cd697d
// limitations: The session serves operations only after Ghidra reports default auto-analysis complete; incomplete analysis does not expose partial results.; The imported Program and temporary project are ephemeral and deleted on close. Annotation operations edit session database metadata; original executable bytes are never written.; Cancelling an active Ghidra request terminates its ephemeral database and discards session annotations. The selected target remains open; the next provider query imports the original artifact again.; Default-space addresses use lowercase 0x-prefixed hexadecimal; other address spaces use <percent-encoded-space>:0x<hex>.; The Ghidra Program references PDB ISPToolForMsi.pdb (GUID b8f2ac8f-1d6f-438d-800f-ed4a14426ac6, age (hex) 1, signature unknown, version RSDS); Ghidra reports load state unknown. Original names and types may be missing; an empty name search does not prove a procedure is absent. Use list_procedures and address-based analysis to inspect recovered functions. REA does not admit a caller-selected PDB companion.; This session uses Ghidra 12.1.2. The bridge is verified against 12.1.4; other 12.1.x builds are accepted and the observed version is reported.; Pseudocode is Ghidra decompiler output, not original source and not text-equivalent to Hopper output.; External functions and functions without an analyzable body return null; other decompiler failures remain explicit.
// pseudocode: provider-specific; not original source


AFX_MODULE_STATE * AfxGetModuleState(void)

{
  CNoTrackObject *pCVar1;
  AFX_MODULE_STATE *pAVar2;
  
  pCVar1 = CThreadLocalObject::GetData
                     ((CThreadLocalObject *)&DAT_00614cc4,(_func_CNoTrackObject_ptr *)&LAB_00429175)
  ;
  if (pCVar1 == (CNoTrackObject *)0x0) {
LAB_00434e38:
                    /* WARNING: Subroutine does not return */
    FUN_00429127();
  }
  pAVar2 = *(AFX_MODULE_STATE **)(pCVar1 + 4);
  if (pAVar2 == (AFX_MODULE_STATE *)0x0) {
    pAVar2 = (AFX_MODULE_STATE *)
             CProcessLocalObject::GetData
                       ((CProcessLocalObject *)&DAT_00614cc8,
                        (_func_CNoTrackObject_ptr *)&LAB_00434e91);
    if (pAVar2 == (AFX_MODULE_STATE *)0x0) goto LAB_00434e38;
  }
  return pAVar2;
}

