// rea decompile_all
// name: CPropertySheet::PreTranslateMessage
// address: 0x10064d44
// body: available
// range: 0x10064d44-0x10064e22 inclusive
// non_contiguous: false
// provider: Ghidra 12.1.2 (ghidra)
// analysis_profile: b075844f08879296d957518397cd0ddda73db81dce53d00d3f0e702766fc2af6
// limitations: The session serves operations only after Ghidra reports default auto-analysis complete; incomplete analysis does not expose partial results.; The imported Program and temporary project are ephemeral and deleted on close. Annotation operations edit session database metadata; original executable bytes are never written.; Cancelling an active Ghidra request terminates its ephemeral database and discards session annotations. The selected target remains open; the next provider query imports the original artifact again.; Default-space addresses use lowercase 0x-prefixed hexadecimal; other address spaces use <percent-encoded-space>:0x<hex>.; The Ghidra Program references PDB WinIspPlugIn.pdb (GUID d9f398c7-6c98-49a8-af25-a0659d5ad2f3, age (hex) 1, signature unknown, version RSDS); Ghidra reports load state unknown. Original names and types may be missing; an empty name search does not prove a procedure is absent. Use list_procedures and address-based analysis to inspect recovered functions. REA does not admit a caller-selected PDB companion.; This session uses Ghidra 12.1.2. The bridge is verified against 12.1.4; other 12.1.x builds are accepted and the observed version is reported.; Pseudocode is Ghidra decompiler output, not original source and not text-equivalent to Hopper output.; External functions and functions without an analyzable body return null; other decompiler failures remain explicit.
// pseudocode: provider-specific; not original source


/* Library Function - Single Match
    public: virtual int __thiscall CPropertySheet::PreTranslateMessage(struct tagMSG *)
   
   Library: Visual Studio 2015 Release */

int __thiscall CPropertySheet::PreTranslateMessage(CPropertySheet *this,tagMSG *param_1)

{
  code *pcVar1;
  SHORT SVar2;
  int iVar3;
  HANDLE pvVar4;
  int *piVar5;
  LRESULT LVar6;
  
  iVar3 = CWnd::PreTranslateMessage((CWnd *)this,param_1);
  if (iVar3 != 0) {
    return 1;
  }
  pvVar4 = GetPropW(*(HWND *)(this + 0x20),(LPCWSTR)PTR_u_AfxClosePending_1023d4ac);
  piVar5 = GlobalLock(pvVar4);
  if (piVar5 != (int *)0x0) {
    if ((*piVar5 == 1) && (LVar6 = SendMessageW(*(HWND *)(this + 0x20),0x476,0,0), LVar6 == 0)) {
      GlobalUnlock(pvVar4);
      pvVar4 = RemovePropW(*(HWND *)(this + 0x20),(LPCWSTR)PTR_u_AfxClosePending_1023d4ac);
      if (pvVar4 != (HANDLE)0x0) {
        GlobalFree(pvVar4);
      }
      pcVar1 = *(code **)(*(int *)this + 0x60);
      guard_check_icall();
      (*pcVar1)();
      return 1;
    }
    GlobalUnlock(pvVar4);
  }
  if ((((param_1->message == 0x100) && (SVar2 = GetAsyncKeyState(0x11), SVar2 < 0)) &&
      ((param_1->wParam == 9 || ((param_1->wParam == 0x21 || (param_1->wParam == 0x22)))))) &&
     (LVar6 = SendMessageW(*(HWND *)(this + 0x20),0x475,0,(LPARAM)param_1), LVar6 != 0)) {
    return 1;
  }
  iVar3 = CWnd::PreTranslateInput((CWnd *)this,param_1);
  return iVar3;
}

