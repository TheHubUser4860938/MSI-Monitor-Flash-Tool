// rea decompile_all
// name: CFrameImpl::ProcessMouseWheel
// address: 0x494a9e
// body: available
// range: 0x494a9e-0x494b62 inclusive
// non_contiguous: false
// provider: Ghidra 12.1.2 (ghidra)
// analysis_profile: ac6d50be2cdf54f7005df47d1ed7e7ef55dee595681eb1b7c2e0b00d70cd697d
// limitations: The session serves operations only after Ghidra reports default auto-analysis complete; incomplete analysis does not expose partial results.; The imported Program and temporary project are ephemeral and deleted on close. Annotation operations edit session database metadata; original executable bytes are never written.; Cancelling an active Ghidra request terminates its ephemeral database and discards session annotations. The selected target remains open; the next provider query imports the original artifact again.; Default-space addresses use lowercase 0x-prefixed hexadecimal; other address spaces use <percent-encoded-space>:0x<hex>.; The Ghidra Program references PDB ISPToolForMsi.pdb (GUID b8f2ac8f-1d6f-438d-800f-ed4a14426ac6, age (hex) 1, signature unknown, version RSDS); Ghidra reports load state unknown. Original names and types may be missing; an empty name search does not prove a procedure is absent. Use list_procedures and address-based analysis to inspect recovered functions. REA does not admit a caller-selected PDB companion.; This session uses Ghidra 12.1.2. The bridge is verified against 12.1.4; other 12.1.x builds are accepted and the observed version is reported.; Pseudocode is Ghidra decompiler output, not original source and not text-equivalent to Hopper output.; External functions and functions without an analyzable body return null; other decompiler failures remain explicit.
// pseudocode: provider-specific; not original source


/* Library Function - Single Match
    protected: int __thiscall CFrameImpl::ProcessMouseWheel(unsigned int,long)
   
   Library: Visual Studio 2015 Release */

int __thiscall CFrameImpl::ProcessMouseWheel(CFrameImpl *this,uint param_1,long param_2)

{
  code *pcVar1;
  CMFCPopupMenu *pCVar2;
  int iVar3;
  HWND pHVar4;
  CWnd *pCVar5;
  BOOL BVar6;
  LRESULT LVar7;
  
  pCVar2 = CMFCPopupMenu::GetSafeActivePopupMenu();
  if (pCVar2 != (CMFCPopupMenu *)0x0) {
    if (*(int *)(pCVar2 + 0xf7c) != 0) {
      SendMessageW(*(HWND *)(pCVar2 + 0x20),0x20a,param_1,param_2);
    }
    pcVar1 = *(code **)(*(int *)pCVar2 + 0x208);
    guard_check_icall();
    iVar3 = (*pcVar1)();
    if (iVar3 != 0) {
      pHVar4 = GetFocus();
      pCVar5 = CWnd::FromHandle(pHVar4);
      if (((pCVar5 == (CWnd *)0x0) || (*(int *)(pCVar5 + 0x20) == 0)) ||
         ((BVar6 = IsChild(*(HWND *)(pCVar2 + 0x20),*(HWND *)(pCVar5 + 0x20)), BVar6 == 0 &&
          (*(int *)(pCVar5 + 0x20) != *(int *)(pCVar2 + 0x20))))) {
        SendMessageW(*(HWND *)(pCVar2 + 0x20),0x10,0,0);
      }
    }
    return 1;
  }
  if ((*(int *)(this + 0xfc) != 0) &&
     (BVar6 = IsWindowVisible(*(HWND *)(*(int *)(this + 0xfc) + 0x20)), BVar6 != 0)) {
    LVar7 = SendMessageW(*(HWND *)(*(int *)(this + 0xfc) + 0x20),0x20a,param_1,param_2);
    return LVar7;
  }
  return 0;
}

