// rea decompile_all
// name: CMFCDynamicLayout::GetHostWndRect
// address: 0x435107
// body: available
// range: 0x435107-0x43520e inclusive
// non_contiguous: false
// provider: Ghidra 12.1.2 (ghidra)
// analysis_profile: ac6d50be2cdf54f7005df47d1ed7e7ef55dee595681eb1b7c2e0b00d70cd697d
// limitations: The session serves operations only after Ghidra reports default auto-analysis complete; incomplete analysis does not expose partial results.; The imported Program and temporary project are ephemeral and deleted on close. Annotation operations edit session database metadata; original executable bytes are never written.; Cancelling an active Ghidra request terminates its ephemeral database and discards session annotations. The selected target remains open; the next provider query imports the original artifact again.; Default-space addresses use lowercase 0x-prefixed hexadecimal; other address spaces use <percent-encoded-space>:0x<hex>.; The Ghidra Program references PDB ISPToolForMsi.pdb (GUID b8f2ac8f-1d6f-438d-800f-ed4a14426ac6, age (hex) 1, signature unknown, version RSDS); Ghidra reports load state unknown. Original names and types may be missing; an empty name search does not prove a procedure is absent. Use list_procedures and address-based analysis to inspect recovered functions. REA does not admit a caller-selected PDB companion.; This session uses Ghidra 12.1.2. The bridge is verified against 12.1.4; other 12.1.x builds are accepted and the observed version is reported.; Pseudocode is Ghidra decompiler output, not original source and not text-equivalent to Hopper output.; External functions and functions without an analyzable body return null; other decompiler failures remain explicit.
// pseudocode: provider-specific; not original source


/* Library Function - Single Match
    public: void __thiscall CMFCDynamicLayout::GetHostWndRect(class CRect &)const 
   
   Library: Visual Studio 2015 Release */

void __thiscall CMFCDynamicLayout::GetHostWndRect(CMFCDynamicLayout *this,CRect *param_1)

{
  CObject *pCVar1;
  HWND pHVar2;
  CWnd *pCVar3;
  int iVar4;
  int iVar5;
  
  SetRectEmpty((LPRECT)param_1);
  iVar5 = *(int *)(this + 4);
  if (iVar5 == 0) {
    return;
  }
  if (*(int *)(iVar5 + 0x20) == 0) {
    return;
  }
  GetClientRect(*(HWND *)(iVar5 + 0x20),(LPRECT)param_1);
  pCVar1 = AfxDynamicDownCast((CRuntimeClass *)&PTR_s_CMFCPropertyPage_005c3208,
                              *(CObject **)(this + 4));
  if (pCVar1 == (CObject *)0x0) {
    pCVar1 = AfxDynamicDownCast((CRuntimeClass *)&PTR_s_CFormView_005c31e0,*(CObject **)(this + 4));
    if (pCVar1 == (CObject *)0x0) goto LAB_004351db;
    iVar4 = CWnd::GetScrollPos(*(CWnd **)(this + 4),1);
    iVar5 = CWnd::GetScrollPos(*(CWnd **)(this + 4),0);
    *(int *)(param_1 + 0xc) = *(int *)(param_1 + 0xc) + iVar4;
    *(int *)(param_1 + 8) = *(int *)(param_1 + 8) + iVar5;
  }
  else {
    pHVar2 = GetParent(*(HWND *)(*(int *)(this + 4) + 0x20));
    pCVar3 = CWnd::FromHandle(pHVar2);
    pCVar1 = AfxDynamicDownCast((CRuntimeClass *)&PTR_s_CMFCPropertySheet_005c31a8,(CObject *)pCVar3
                               );
    if (pCVar1 != (CObject *)0x0) {
      iVar4 = CMFCPropertySheet::GetNavBarWidth((CMFCPropertySheet *)pCVar1);
      iVar5 = *(int *)(pCVar1 + 0x4dc0);
      if ((0 < iVar5) &&
         (*(int *)(param_1 + 4) = *(int *)(param_1 + 4) + iVar5, *(int *)(pCVar1 + 0xe0) != 0)) {
        *(int *)(param_1 + 0xc) = *(int *)(param_1 + 0xc) - iVar5;
      }
      *(int *)param_1 = *(int *)param_1 + iVar4;
    }
    iVar5 = *(int *)param_1;
    iVar4 = *(int *)(param_1 + 4);
  }
  OffsetRect((LPRECT)param_1,-iVar5,-iVar4);
LAB_004351db:
  iVar4 = *(int *)(param_1 + 8) - *(int *)param_1;
  iVar5 = *(int *)(this + 8);
  if (*(int *)(this + 8) <= iVar4) {
    iVar5 = iVar4;
  }
  *(int *)(param_1 + 8) = *(int *)param_1 + iVar5;
  iVar4 = *(int *)(param_1 + 0xc) - *(int *)(param_1 + 4);
  iVar5 = *(int *)(this + 0xc);
  if (*(int *)(this + 0xc) <= iVar4) {
    iVar5 = iVar4;
  }
  *(int *)(param_1 + 0xc) = *(int *)(param_1 + 4) + iVar5;
  return;
}

