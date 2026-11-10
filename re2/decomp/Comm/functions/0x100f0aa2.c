// rea decompile_all
// name: FUN_100f0aa2
// address: 0x100f0aa2
// body: available
// range: 0x100f0aa2-0x100f0b93 inclusive
// non_contiguous: false
// provider: Ghidra 12.1.2 (ghidra)
// analysis_profile: b075844f08879296d957518397cd0ddda73db81dce53d00d3f0e702766fc2af6
// limitations: The session serves operations only after Ghidra reports default auto-analysis complete; incomplete analysis does not expose partial results.; The imported Program and temporary project are ephemeral and deleted on close. Annotation operations edit session database metadata; original executable bytes are never written.; Cancelling an active Ghidra request terminates its ephemeral database and discards session annotations. The selected target remains open; the next provider query imports the original artifact again.; Default-space addresses use lowercase 0x-prefixed hexadecimal; other address spaces use <percent-encoded-space>:0x<hex>.; The Ghidra Program references PDB Comm.pdb (GUID c3062acb-498d-45fa-a233-c8b7e401bb13, age (hex) 1, signature unknown, version RSDS); Ghidra reports load state unknown. Original names and types may be missing; an empty name search does not prove a procedure is absent. Use list_procedures and address-based analysis to inspect recovered functions. REA does not admit a caller-selected PDB companion.; This session uses Ghidra 12.1.2. The bridge is verified against 12.1.4; other 12.1.x builds are accepted and the observed version is reported.; Pseudocode is Ghidra decompiler output, not original source and not text-equivalent to Hopper output.; External functions and functions without an analyzable body return null; other decompiler failures remain explicit.
// pseudocode: provider-specific; not original source


undefined4 FUN_100f0aa2(CWnd *param_1,int param_2)

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
      DAT_101dd0c0 = in_ECX;
      return 0;
    }
    UVar3 = SetTimer(*(HWND *)(iVar1 + 0x20),0xec11,DAT_101d3b2c,TimerProc);
    *(UINT_PTR *)(in_ECX + 0x7c) = UVar3;
    DAT_101dd0c0 = in_ECX;
    return 0;
  }
  if (iVar1 != 0) {
    KillTimer(*(HWND *)(iVar1 + 0x20),*(UINT_PTR *)(in_ECX + 0x7c));
  }
  *(undefined4 *)(in_ECX + 0x7c) = 0;
  DAT_101dd0c0 = (CMFCDropDownToolbarButton *)0x0;
  this = AfxDynamicDownCast((CRuntimeClass *)&PTR_s_CMFCMenuBar_101d3ad8,
                            *(CObject **)(in_ECX + 0x6c));
  if (*(int *)(in_ECX + 0x78) == 0) {
    pCVar4 = AfxDynamicDownCast((CRuntimeClass *)&PTR_s_CMFCPopupMenuBar_101d3928,
                                *(CObject **)(in_ECX + 0x6c));
    if (((param_2 == 0) || (pCVar4 == (CObject *)0x0)) || (DAT_101daf90 != 0)) {
      CMFCDropDownToolbarButton::DropDownToolbar(in_ECX,param_1);
    }
    pCVar5 = (CMFCToolBarButton *)in_ECX;
    if (this == (CObject *)0x0) goto LAB_100f0b73;
  }
  else {
    *(undefined4 *)(*(int *)(in_ECX + 0x78) + 0x130) = 0;
    pcVar2 = *(code **)(**(int **)(in_ECX + 0x78) + 0x60);
    guard_check_icall();
    (*pcVar2)();
    *(undefined4 *)(in_ECX + 0x78) = 0;
    if (this == (CObject *)0x0) goto LAB_100f0b73;
    pCVar5 = (CMFCToolBarButton *)0x0;
  }
  CMFCToolBar::SetHot((CMFCToolBar *)this,pCVar5);
LAB_100f0b73:
  if (*(int *)(in_ECX + 0x6c) != 0) {
    InvalidateRect(*(HWND *)(*(int *)(in_ECX + 0x6c) + 0x20),(RECT *)(in_ECX + 0x54),1);
  }
  return 0;
}

