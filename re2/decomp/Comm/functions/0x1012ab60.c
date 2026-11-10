// rea decompile_all
// name: OnCreate
// address: 0x1012ab60
// body: available
// range: 0x1012ab60-0x1012adcb inclusive
// non_contiguous: false
// provider: Ghidra 12.1.2 (ghidra)
// analysis_profile: b075844f08879296d957518397cd0ddda73db81dce53d00d3f0e702766fc2af6
// limitations: The session serves operations only after Ghidra reports default auto-analysis complete; incomplete analysis does not expose partial results.; The imported Program and temporary project are ephemeral and deleted on close. Annotation operations edit session database metadata; original executable bytes are never written.; Cancelling an active Ghidra request terminates its ephemeral database and discards session annotations. The selected target remains open; the next provider query imports the original artifact again.; Default-space addresses use lowercase 0x-prefixed hexadecimal; other address spaces use <percent-encoded-space>:0x<hex>.; The Ghidra Program references PDB Comm.pdb (GUID c3062acb-498d-45fa-a233-c8b7e401bb13, age (hex) 1, signature unknown, version RSDS); Ghidra reports load state unknown. Original names and types may be missing; an empty name search does not prove a procedure is absent. Use list_procedures and address-based analysis to inspect recovered functions. REA does not admit a caller-selected PDB companion.; This session uses Ghidra 12.1.2. The bridge is verified against 12.1.4; other 12.1.x builds are accepted and the observed version is reported.; Pseudocode is Ghidra decompiler output, not original source and not text-equivalent to Hopper output.; External functions and functions without an analyzable body return null; other decompiler failures remain explicit.
// pseudocode: provider-specific; not original source


/* Library Function - Multiple Matches With Same Base Name
    protected: int __thiscall CPreviewViewEx::OnCreate(struct tagCREATESTRUCTA *)
    protected: int __thiscall CPreviewViewEx::OnCreate(struct tagCREATESTRUCTW *)
   
   Library: Visual Studio 2015 Release */

undefined4 OnCreate(undefined4 param_1)

{
  CBasePane *pCVar1;
  code *pcVar2;
  int iVar3;
  CFrameWnd *this;
  CFrameWnd *this_00;
  CWnd *pCVar4;
  CObject *pCVar5;
  AFX_GLOBAL_DATA *this_01;
  int iVar6;
  undefined4 uVar7;
  CDockingManager *this_02;
  CPreviewViewEx *in_ECX;
  undefined4 uVar8;
  undefined4 uVar9;
  undefined4 uVar10;
  
  iVar3 = OnCreate(param_1);
  if (iVar3 == -1) {
    return 0xffffffff;
  }
  DAT_101dd7a8 = DAT_101dd7a8 + 1;
  this = AFXGetParentFrame((CWnd *)in_ECX);
  iVar3 = FUN_10019d4f(&PTR_s_CMDIChildWndEx_10193444);
  this_00 = this;
  if (iVar3 != 0) {
    this_00 = CWnd::GetTopLevelFrame((CWnd *)this);
  }
  pCVar4 = CWnd::GetDlgItem((CWnd *)this_00,0xe806);
  pCVar5 = AfxDynamicDownCast((CRuntimeClass *)&PTR_s_CMFCRibbonBar_1019ff44,(CObject *)pCVar4);
  *(CObject **)(in_ECX + 0xeac) = pCVar5;
  if (pCVar5 == (CObject *)0x0) {
    this_01 = GetGlobalData();
    iVar3 = AFX_GLOBAL_DATA::Is32BitIcons(this_01);
    pCVar1 = (CBasePane *)(in_ECX + 0x168);
    pcVar2 = *(code **)(*(int *)pCVar1 + 800);
    guard_check_icall(*(undefined4 *)(in_ECX + 0xdc),0x50402808,0xe800);
    iVar6 = (*pcVar2)();
    if (iVar6 == 0) {
      return 0;
    }
    pcVar2 = *(code **)(*(int *)pCVar1 + 0x330);
    guard_check_icall(0x4240,0,0,1,0,0,-(uint)(iVar3 != 0) & 0x423d);
    iVar3 = (*pcVar2)();
    if (iVar3 == 0) {
      return 0;
    }
    *(undefined4 *)(in_ECX + 0x1c4) = *(undefined4 *)(in_ECX + 0x20);
    uVar7 = FUN_1005d844(0xe301,0);
    *(undefined4 *)(in_ECX + 0xebc) = uVar7;
    iVar3 = FUN_1005f070(uVar7);
    if (*(int *)(iVar3 + 4) == 0) {
      uVar7 = *(undefined4 *)(iVar3 + 0x34);
    }
    else {
      uVar7 = *(undefined4 *)(iVar3 + 0x38);
    }
    *(undefined4 *)(in_ECX + 0xeb4) = uVar7;
    uVar7 = FUN_1005d844(0x423f,0);
    iVar3 = FUN_1005f070(uVar7);
    if (*(int *)(iVar3 + 4) == 0) {
      uVar8 = *(undefined4 *)(iVar3 + 0x34);
    }
    else {
      uVar8 = *(undefined4 *)(iVar3 + 0x38);
    }
    *(undefined4 *)(in_ECX + 0xeb8) = uVar8;
    pcVar2 = *(code **)(*(int *)pCVar1 + 0x34c);
    guard_check_icall(uVar7);
    (*pcVar2)();
    uVar10 = 1;
    uVar9 = 1;
    uVar8 = 0;
    uVar7 = FUN_1005d844(0xe304,0);
    SetToolBarBtnText(uVar7,uVar8,uVar9,uVar10);
    uVar10 = 0;
    uVar9 = 1;
    uVar8 = 0;
    uVar7 = FUN_1005d844(0xe300,0);
    SetToolBarBtnText(uVar7,uVar8,uVar9,uVar10);
    this_02 = CGlobalUtils::GetDockingManager((CGlobalUtils *)&PTR_vftable_101d3944,(CWnd *)this);
    CDockingManager::AddPane(this_02,pCVar1,0,0,0);
    if ((DAT_101d3d14 == 0) && (DAT_101daf98 != 0)) {
      *(undefined4 *)(in_ECX + 0xd88) = *(undefined4 *)(in_ECX + 0xd78);
      *(undefined4 *)(in_ECX + 0xd8c) = *(undefined4 *)(in_ECX + 0xd7c);
      *(undefined4 *)(in_ECX + 0xd90) = *(undefined4 *)(in_ECX + 0xd80);
      *(undefined4 *)(in_ECX + 0xd94) = *(undefined4 *)(in_ECX + 0xd84);
    }
    CPreviewViewEx::SetToolbarSize(in_ECX);
  }
  else if (DAT_101dd7a8 == 1) {
    CMFCRibbonBar::SetPrintPreviewMode((CMFCRibbonBar *)pCVar5,1);
  }
  pCVar4 = CWnd::GetDlgItem((CWnd *)this_00,0xe801);
  pCVar5 = AfxDynamicDownCast((CRuntimeClass *)&PTR_s_CMFCStatusBar_1019f6b0,(CObject *)pCVar4);
  *(CObject **)(in_ECX + 0xea8) = pCVar5;
  if ((pCVar5 != (CObject *)0x0) && (DAT_101dd7a8 == 1)) {
    pcVar2 = *(code **)(*(int *)pCVar5 + 800);
    guard_check_icall(0xff,0,1);
    (*pcVar2)();
  }
  return 0;
}

