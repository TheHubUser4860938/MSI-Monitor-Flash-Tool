// rea decompile_all
// name: CMultiPaneFrameWnd::OnSetFocus
// address: 0x100cc89a
// body: available
// range: 0x100cc89a-0x100cc995 inclusive
// non_contiguous: false
// provider: Ghidra 12.1.2 (ghidra)
// analysis_profile: b075844f08879296d957518397cd0ddda73db81dce53d00d3f0e702766fc2af6
// limitations: The session serves operations only after Ghidra reports default auto-analysis complete; incomplete analysis does not expose partial results.; The imported Program and temporary project are ephemeral and deleted on close. Annotation operations edit session database metadata; original executable bytes are never written.; Cancelling an active Ghidra request terminates its ephemeral database and discards session annotations. The selected target remains open; the next provider query imports the original artifact again.; Default-space addresses use lowercase 0x-prefixed hexadecimal; other address spaces use <percent-encoded-space>:0x<hex>.; The Ghidra Program references PDB WinOperateCScaler.pdb (GUID a6737962-efea-4805-8ae6-1fc1ef126554, age (hex) 1, signature unknown, version RSDS); Ghidra reports load state unknown. Original names and types may be missing; an empty name search does not prove a procedure is absent. Use list_procedures and address-based analysis to inspect recovered functions. REA does not admit a caller-selected PDB companion.; This session uses Ghidra 12.1.2. The bridge is verified against 12.1.4; other 12.1.x builds are accepted and the observed version is reported.; Pseudocode is Ghidra decompiler output, not original source and not text-equivalent to Hopper output.; External functions and functions without an analyzable body return null; other decompiler failures remain explicit.
// pseudocode: provider-specific; not original source


/* Library Function - Single Match
    protected: void __thiscall CMultiPaneFrameWnd::OnSetFocus(class CWnd *)
   
   Library: Visual Studio 2015 Release */

void __thiscall CMultiPaneFrameWnd::OnSetFocus(CMultiPaneFrameWnd *this,CWnd *param_1)

{
  code *pcVar1;
  CObject *pCVar2;
  BOOL BVar3;
  int iVar4;
  CFrameWnd *pCVar5;
  CObject *this_00;
  CWnd *pCVar6;
  int iVar7;
  int iVar8;
  int iVar9;
  uint uVar10;
  undefined1 local_10 [8];
  CObject *local_8;
  
  pcVar1 = *(code **)(*(int *)this + 0x1ac);
  guard_check_icall();
  pCVar2 = (CObject *)(*pcVar1)();
  pCVar2 = AfxDynamicDownCast((CRuntimeClass *)&PTR_s_CBasePane_101b236c,pCVar2);
  if (*(HWND__ **)(this + 0x1e0) == (HWND__ *)0x0) {
    if ((pCVar2 == (CObject *)0x0) || (BVar3 = IsWindow(*(HWND *)(pCVar2 + 0x20)), BVar3 == 0))
    goto LAB_100cc965;
    pcVar1 = *(code **)(*(int *)pCVar2 + 0x1d8);
    guard_check_icall();
    iVar4 = (*pcVar1)();
LAB_100cc95a:
    this_00 = pCVar2;
    if (iVar4 == 0) goto LAB_100cc965;
  }
  else {
    pCVar6 = CWnd::FromHandlePermanent(*(HWND__ **)(this + 0x1e0));
    local_8 = AfxDynamicDownCast((CRuntimeClass *)&PTR_s_CDockablePane_10201ba4,(CObject *)pCVar6);
    if (local_8 == (CObject *)0x0) {
LAB_100cc94d:
      if (pCVar2 == (CObject *)0x0) goto LAB_100cc965;
      iVar4 = IsWindow(*(HWND *)(pCVar2 + 0x20));
      goto LAB_100cc95a;
    }
    pcVar1 = *(code **)(*(int *)(this + 400) + 0x8c);
    guard_check_icall(local_8,local_10);
    iVar4 = (*pcVar1)();
    this_00 = local_8;
    if ((iVar4 == 0) || (BVar3 = IsWindow(*(HWND *)(local_8 + 0x20)), BVar3 == 0))
    goto LAB_100cc94d;
  }
  CWnd::SetFocus((CWnd *)this_00);
LAB_100cc965:
  pCVar5 = CWnd::GetParentFrame((CWnd *)this);
  if (pCVar5 != (CFrameWnd *)0x0) {
    uVar10 = 0x13;
    iVar9 = 0;
    iVar8 = 0;
    iVar7 = 0;
    iVar4 = 0;
    pCVar6 = (CWnd *)&DAT_10209088;
    pCVar5 = CWnd::GetParentFrame((CWnd *)this);
    CWnd::SetWindowPos((CWnd *)pCVar5,pCVar6,iVar4,iVar7,iVar8,iVar9,uVar10);
  }
  return;
}

