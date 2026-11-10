// rea decompile_all
// name: AfxInternalPumpMessage
// address: 0x42c29f
// body: available
// range: 0x42c29f-0x42c2a3 inclusive
// non_contiguous: false
// provider: Ghidra 12.1.2 (ghidra)
// analysis_profile: ac6d50be2cdf54f7005df47d1ed7e7ef55dee595681eb1b7c2e0b00d70cd697d
// limitations: The session serves operations only after Ghidra reports default auto-analysis complete; incomplete analysis does not expose partial results.; The imported Program and temporary project are ephemeral and deleted on close. Annotation operations edit session database metadata; original executable bytes are never written.; Cancelling an active Ghidra request terminates its ephemeral database and discards session annotations. The selected target remains open; the next provider query imports the original artifact again.; Default-space addresses use lowercase 0x-prefixed hexadecimal; other address spaces use <percent-encoded-space>:0x<hex>.; The Ghidra Program references PDB ISPToolForMsi.pdb (GUID b8f2ac8f-1d6f-438d-800f-ed4a14426ac6, age (hex) 1, signature unknown, version RSDS); Ghidra reports load state unknown. Original names and types may be missing; an empty name search does not prove a procedure is absent. Use list_procedures and address-based analysis to inspect recovered functions. REA does not admit a caller-selected PDB companion.; This session uses Ghidra 12.1.2. The bridge is verified against 12.1.4; other 12.1.x builds are accepted and the observed version is reported.; Pseudocode is Ghidra decompiler output, not original source and not text-equivalent to Hopper output.; External functions and functions without an analyzable body return null; other decompiler failures remain explicit.
// pseudocode: provider-specific; not original source


int AfxInternalPumpMessage(void)

{
  LPMSG lpMsg;
  _AFX_THREAD_STATE *p_Var1;
  BOOL BVar2;
  int iVar3;
  
  p_Var1 = AfxGetThreadState();
  lpMsg = (LPMSG)(p_Var1 + 0x30);
  BVar2 = GetMessageW(lpMsg,(HWND)0x0,0,0);
  iVar3 = 0;
  if (BVar2 != 0) {
    if (*(int *)(p_Var1 + 0x34) != 0x36a) {
      iVar3 = AfxPreTranslateMessage(lpMsg);
      if (iVar3 == 0) {
        TranslateMessage(lpMsg);
        DispatchMessageW(lpMsg);
      }
    }
    iVar3 = 1;
  }
  return iVar3;
}

