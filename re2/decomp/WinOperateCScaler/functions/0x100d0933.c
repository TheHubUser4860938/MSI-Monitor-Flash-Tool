// rea decompile_all
// name: CMFCDragFrameImpl::PlaceTabPreDocking
// address: 0x100d0933
// body: available
// range: 0x100d0933-0x100d0af4 inclusive
// non_contiguous: false
// provider: Ghidra 12.1.2 (ghidra)
// analysis_profile: b075844f08879296d957518397cd0ddda73db81dce53d00d3f0e702766fc2af6
// limitations: The session serves operations only after Ghidra reports default auto-analysis complete; incomplete analysis does not expose partial results.; The imported Program and temporary project are ephemeral and deleted on close. Annotation operations edit session database metadata; original executable bytes are never written.; Cancelling an active Ghidra request terminates its ephemeral database and discards session annotations. The selected target remains open; the next provider query imports the original artifact again.; Default-space addresses use lowercase 0x-prefixed hexadecimal; other address spaces use <percent-encoded-space>:0x<hex>.; The Ghidra Program references PDB WinOperateCScaler.pdb (GUID a6737962-efea-4805-8ae6-1fc1ef126554, age (hex) 1, signature unknown, version RSDS); Ghidra reports load state unknown. Original names and types may be missing; an empty name search does not prove a procedure is absent. Use list_procedures and address-based analysis to inspect recovered functions. REA does not admit a caller-selected PDB companion.; This session uses Ghidra 12.1.2. The bridge is verified against 12.1.4; other 12.1.x builds are accepted and the observed version is reported.; Pseudocode is Ghidra decompiler output, not original source and not text-equivalent to Hopper output.; External functions and functions without an analyzable body return null; other decompiler failures remain explicit.
// pseudocode: provider-specific; not original source


/* WARNING: Function: __EH_prolog3_GS replaced with injection: EH_prolog3 */
/* Library Function - Single Match
    public: void __thiscall CMFCDragFrameImpl::PlaceTabPreDocking(class CBaseTabbedPane *,int)
   
   Library: Visual Studio 2015 Release */

void __thiscall
CMFCDragFrameImpl::PlaceTabPreDocking(CMFCDragFrameImpl *this,CBaseTabbedPane *param_1,int param_2)

{
  code *pcVar1;
  undefined4 uVar2;
  int iVar3;
  CObject *pCVar4;
  CWnd *this_00;
  CDockablePane *this_01;
  CFrameWnd *pCVar5;
  int *piVar6;
  undefined4 uVar7;
  int iVar8;
  undefined4 uVar9;
  undefined4 uVar10;
  int local_2c;
  CBaseTabbedPane *local_28;
  undefined4 local_24;
  undefined4 local_20;
  undefined4 local_1c;
  undefined4 local_18;
  int local_8;
  undefined4 uStack_4;
  
  uStack_4 = 0x24;
  local_8 = 0x100d093f;
  local_28 = param_1;
  if (*(int *)(this + 0x34) != -1) goto LAB_100d0aed;
  uVar7 = 0;
  if (param_2 == 0) {
    FUN_100d02f7(0);
  }
  uVar2 = FUN_1001e20a();
  FUN_1001d224(uVar2);
  local_8 = 0;
  iVar3 = FUN_100250d6(&PTR_s_CMultiPaneFrameWnd_10201958);
  if (iVar3 == 0) {
    this_00 = *(CWnd **)(this + 0x44);
LAB_100d09bd:
    CWnd::GetWindowTextW
              (this_00,(CStringT<wchar_t,StrTraitMFC<wchar_t,ATL::ChTraitsCRT<wchar_t>_>_> *)
                       &local_2c);
  }
  else {
    pCVar4 = AfxDynamicDownCast((CRuntimeClass *)&PTR_s_CMultiPaneFrameWnd_10201958,
                                *(CObject **)(this + 0x44));
    if (pCVar4 != (CObject *)0x0) {
      pcVar1 = *(code **)(*(int *)pCVar4 + 0x1ac);
      guard_check_icall();
      this_00 = (CWnd *)(*pcVar1)();
      if (this_00 != (CWnd *)0x0) goto LAB_100d09bd;
    }
  }
  if (*(int *)(this + 0x50) == 0) {
    this_01 = (CDockablePane *)FUN_1001cfa0(0x368);
    local_8._0_1_ = 1;
    if (this_01 == (CDockablePane *)0x0) {
      this_01 = (CDockablePane *)0x0;
    }
    else {
      CDockablePane::CDockablePane(this_01);
      *(undefined ***)this_01 = CDummyDockablePane::vftable;
    }
    *(CDockablePane **)(this + 0x50) = this_01;
    local_8 = (uint)local_8._1_3_ << 8;
    local_24 = 0;
    local_20 = 0;
    local_1c = 0;
    local_18 = 0;
    pCVar5 = DAT_1020b224;
    if (DAT_1020b224 == (CFrameWnd *)0x0) {
      pCVar5 = CWnd::GetTopLevelFrame(*(CWnd **)(this + 0x44));
    }
    pcVar1 = *(code **)(**(int **)(this + 0x50) + 0x328);
    guard_check_icall(0,&DAT_101a63a8,pCVar5,&local_24,0,DAT_10201990,0x40000000,0x20,0xf,0);
    (*pcVar1)();
  }
  pcVar1 = *(code **)(*(int *)local_28 + 0x3a0);
  guard_check_icall();
  piVar6 = (int *)(*pcVar1)();
  uVar10 = 1;
  uVar9 = 0xffffffff;
  uVar2 = *(undefined4 *)(this + 0x50);
  pcVar1 = *(code **)(*piVar6 + 0x18c);
  iVar8 = local_2c;
  guard_check_icall(uVar2,local_2c,0xffffffff,1);
  (*pcVar1)();
  iVar3 = *(int *)(*(int *)(this + 0x48) + 0x1b8);
  if (((iVar3 != 0) && (*(int *)(iVar3 + 8) != 0)) && (*(int *)(iVar3 + 4) != 0)) {
    CWnd::ShowWindow(*(CWnd **)(this + 0x44),0);
  }
  pcVar1 = *(code **)(*(int *)local_28 + 0x3a0);
  guard_check_icall(uVar2,iVar8,uVar9,uVar10);
  piVar6 = (int *)(*pcVar1)();
  if (*(int *)(this + 0x50) != 0) {
    uVar7 = *(undefined4 *)(*(int *)(this + 0x50) + 0x20);
  }
  pcVar1 = *(code **)(*piVar6 + 0x21c);
  guard_check_icall(uVar7);
  uVar7 = (*pcVar1)();
  *(undefined4 *)(this + 0x34) = uVar7;
  *(CBaseTabbedPane **)(this + 0x3c) = local_28;
  ATL::CStringData::Release((CStringData *)(local_2c + -0x10));
LAB_100d0aed:
  FUN_10154478();
  return;
}

