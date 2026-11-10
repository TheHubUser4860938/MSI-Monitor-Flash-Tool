// rea decompile_all
// name: CMFCDragFrameImpl::PlaceTabPreDocking
// address: 0x100fc779
// body: available
// range: 0x100fc779-0x100fc93a inclusive
// non_contiguous: false
// provider: Ghidra 12.1.2 (ghidra)
// analysis_profile: b075844f08879296d957518397cd0ddda73db81dce53d00d3f0e702766fc2af6
// limitations: The session serves operations only after Ghidra reports default auto-analysis complete; incomplete analysis does not expose partial results.; The imported Program and temporary project are ephemeral and deleted on close. Annotation operations edit session database metadata; original executable bytes are never written.; Cancelling an active Ghidra request terminates its ephemeral database and discards session annotations. The selected target remains open; the next provider query imports the original artifact again.; Default-space addresses use lowercase 0x-prefixed hexadecimal; other address spaces use <percent-encoded-space>:0x<hex>.; The Ghidra Program references PDB WinIspPlugIn.pdb (GUID d9f398c7-6c98-49a8-af25-a0659d5ad2f3, age (hex) 1, signature unknown, version RSDS); Ghidra reports load state unknown. Original names and types may be missing; an empty name search does not prove a procedure is absent. Use list_procedures and address-based analysis to inspect recovered functions. REA does not admit a caller-selected PDB companion.; This session uses Ghidra 12.1.2. The bridge is verified against 12.1.4; other 12.1.x builds are accepted and the observed version is reported.; Pseudocode is Ghidra decompiler output, not original source and not text-equivalent to Hopper output.; External functions and functions without an analyzable body return null; other decompiler failures remain explicit.
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
  undefined4 uVar8;
  undefined4 uVar9;
  undefined4 local_2c;
  CBaseTabbedPane *local_28;
  undefined4 local_24;
  undefined4 local_20;
  undefined4 local_1c;
  undefined4 local_18;
  int local_8;
  undefined4 uStack_4;
  
  uStack_4 = 0x24;
  local_8 = 0x100fc785;
  local_28 = param_1;
  if (*(int *)(this + 0x34) != -1) goto LAB_100fc933;
  uVar7 = 0;
  if (param_2 == 0) {
    FUN_100fc13d(0);
  }
  uVar2 = FUN_10049868();
  FUN_100476a0(uVar2);
  local_8 = 0;
  iVar3 = FUN_10051e53(&PTR_s_CMultiPaneFrameWnd_1023d950);
  if (iVar3 == 0) {
    this_00 = *(CWnd **)(this + 0x44);
LAB_100fc803:
    CWnd::GetWindowTextW
              (this_00,(CStringT<wchar_t,StrTraitMFC<wchar_t,ATL::ChTraitsCRT<wchar_t>_>_> *)
                       &local_2c);
  }
  else {
    pCVar4 = AfxDynamicDownCast((CRuntimeClass *)&PTR_s_CMultiPaneFrameWnd_1023d950,
                                *(CObject **)(this + 0x44));
    if (pCVar4 != (CObject *)0x0) {
      pcVar1 = *(code **)(*(int *)pCVar4 + 0x1ac);
      guard_check_icall();
      this_00 = (CWnd *)(*pcVar1)();
      if (this_00 != (CWnd *)0x0) goto LAB_100fc803;
    }
  }
  if (*(int *)(this + 0x50) == 0) {
    this_01 = (CDockablePane *)FUN_100491ae(0x368);
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
    pCVar5 = DAT_102471dc;
    if (DAT_102471dc == (CFrameWnd *)0x0) {
      pCVar5 = CWnd::GetTopLevelFrame(*(CWnd **)(this + 0x44));
    }
    pcVar1 = *(code **)(**(int **)(this + 0x50) + 0x328);
    guard_check_icall(0,&PTR_1020e6b0,pCVar5,&local_24,0,DAT_1023d988,0x40000000,0x20,0xf,0);
    (*pcVar1)();
  }
  pcVar1 = *(code **)(*(int *)local_28 + 0x3a0);
  guard_check_icall();
  piVar6 = (int *)(*pcVar1)();
  uVar9 = 1;
  uVar8 = 0xffffffff;
  uVar2 = *(undefined4 *)(this + 0x50);
  pcVar1 = *(code **)(*piVar6 + 0x18c);
  guard_check_icall(uVar2,local_2c,0xffffffff,1);
  (*pcVar1)();
  iVar3 = *(int *)(*(int *)(this + 0x48) + 0x1b8);
  if (((iVar3 != 0) && (*(int *)(iVar3 + 8) != 0)) && (*(int *)(iVar3 + 4) != 0)) {
    CWnd::ShowWindow(*(CWnd **)(this + 0x44),0);
  }
  pcVar1 = *(code **)(*(int *)local_28 + 0x3a0);
  guard_check_icall(uVar2,local_2c,uVar8,uVar9);
  piVar6 = (int *)(*pcVar1)();
  if (*(int *)(this + 0x50) != 0) {
    uVar7 = *(undefined4 *)(*(int *)(this + 0x50) + 0x20);
  }
  pcVar1 = *(code **)(*piVar6 + 0x21c);
  guard_check_icall(uVar7);
  uVar7 = (*pcVar1)();
  *(undefined4 *)(this + 0x34) = uVar7;
  *(CBaseTabbedPane **)(this + 0x3c) = local_28;
  FUN_100476d0();
LAB_100fc933:
  FUN_1018015d();
  return;
}

