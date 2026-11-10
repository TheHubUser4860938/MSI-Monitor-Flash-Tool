// rea decompile_all
// name: FUN_004f6d42
// address: 0x4f6d42
// body: available
// range: 0x4f6d42-0x4f6e33 inclusive
// non_contiguous: false
// provider: Ghidra 12.1.2 (ghidra)
// analysis_profile: ac6d50be2cdf54f7005df47d1ed7e7ef55dee595681eb1b7c2e0b00d70cd697d
// limitations: The session serves operations only after Ghidra reports default auto-analysis complete; incomplete analysis does not expose partial results.; The imported Program and temporary project are ephemeral and deleted on close. Annotation operations edit session database metadata; original executable bytes are never written.; Cancelling an active Ghidra request terminates its ephemeral database and discards session annotations. The selected target remains open; the next provider query imports the original artifact again.; Default-space addresses use lowercase 0x-prefixed hexadecimal; other address spaces use <percent-encoded-space>:0x<hex>.; The Ghidra Program references PDB ISPToolForMsi.pdb (GUID b8f2ac8f-1d6f-438d-800f-ed4a14426ac6, age (hex) 1, signature unknown, version RSDS); Ghidra reports load state unknown. Original names and types may be missing; an empty name search does not prove a procedure is absent. Use list_procedures and address-based analysis to inspect recovered functions. REA does not admit a caller-selected PDB companion.; This session uses Ghidra 12.1.2. The bridge is verified against 12.1.4; other 12.1.x builds are accepted and the observed version is reported.; Pseudocode is Ghidra decompiler output, not original source and not text-equivalent to Hopper output.; External functions and functions without an analyzable body return null; other decompiler failures remain explicit.
// pseudocode: provider-specific; not original source


undefined4 FUN_004f6d42(CWnd *param_1,int param_2)

{
  int iVar1;
  code *pcVar2;
  UINT_PTR UVar3;
  CObject *this;
  CObject *pCVar4;
  CMFCDropDownToolbarButton *in_ECX;
  CMFCToolBarButton *pCVar5;
  
  iVar1 = *(int *)(in_ECX + 0x6c);
  if (*(int *)(in_ECX + 0x7c) == 0) {
    if (iVar1 == 0) {
      DAT_00617244 = in_ECX;
      return 0;
    }
    UVar3 = SetTimer(*(HWND *)(iVar1 + 0x20),0xec11,DAT_0060c974,TimerProc);
    *(UINT_PTR *)(in_ECX + 0x7c) = UVar3;
    DAT_00617244 = in_ECX;
    return 0;
  }
  if (iVar1 != 0) {
    KillTimer(*(HWND *)(iVar1 + 0x20),*(UINT_PTR *)(in_ECX + 0x7c));
  }
  *(undefined4 *)(in_ECX + 0x7c) = 0;
  DAT_00617244 = (CMFCDropDownToolbarButton *)0x0;
  this = AfxDynamicDownCast((CRuntimeClass *)&PTR_s_CMFCMenuBar_0060c730,
                            *(CObject **)(in_ECX + 0x6c));
  if (*(int *)(in_ECX + 0x78) == 0) {
    pCVar4 = AfxDynamicDownCast((CRuntimeClass *)&PTR_s_CMFCPopupMenuBar_0060c6b4,
                                *(CObject **)(in_ECX + 0x6c));
    if (((param_2 == 0) || (pCVar4 == (CObject *)0x0)) || (DAT_00614ed8 != 0)) {
      CMFCDropDownToolbarButton::DropDownToolbar(in_ECX,param_1);
    }
    pCVar5 = (CMFCToolBarButton *)in_ECX;
    if (this == (CObject *)0x0) goto LAB_004f6e13;
  }
  else {
    *(undefined4 *)(*(int *)(in_ECX + 0x78) + 0x130) = 0;
    pcVar2 = *(code **)(**(int **)(in_ECX + 0x78) + 0x60);
    guard_check_icall();
    (*pcVar2)();
    *(undefined4 *)(in_ECX + 0x78) = 0;
    if (this == (CObject *)0x0) goto LAB_004f6e13;
    pCVar5 = (CMFCToolBarButton *)0x0;
  }
  CMFCToolBar::SetHot((CMFCToolBar *)this,pCVar5);
LAB_004f6e13:
  if (*(int *)(in_ECX + 0x6c) != 0) {
    InvalidateRect(*(HWND *)(*(int *)(in_ECX + 0x6c) + 0x20),(RECT *)(in_ECX + 0x54),1);
  }
  return 0;
}

