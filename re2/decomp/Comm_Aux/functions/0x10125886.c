// rea decompile_all
// name: CMFCMenuBar::SaveState
// address: 0x10125886
// body: available
// range: 0x10125886-0x10125a6e inclusive
// non_contiguous: false
// provider: Ghidra 12.1.2 (ghidra)
// analysis_profile: b075844f08879296d957518397cd0ddda73db81dce53d00d3f0e702766fc2af6
// limitations: The session serves operations only after Ghidra reports default auto-analysis complete; incomplete analysis does not expose partial results.; The imported Program and temporary project are ephemeral and deleted on close. Annotation operations edit session database metadata; original executable bytes are never written.; Cancelling an active Ghidra request terminates its ephemeral database and discards session annotations. The selected target remains open; the next provider query imports the original artifact again.; Default-space addresses use lowercase 0x-prefixed hexadecimal; other address spaces use <percent-encoded-space>:0x<hex>.; Ghidra Listing reports a terminal call at 0x1012589d to 0x1004886a FUN_1004886a (external=false, thunk=false, hasNoReturn=true); fallthrough is excluded by Ghidra's flow model. This records Ghidra's FunctionManager flag, not an independent verification that the callee cannot return.; The Ghidra Program references PDB Comm_Aux.pdb (GUID ba7920cc-daa3-4461-a102-1f8f66c67a2a, age (hex) 1, signature unknown, version RSDS); Ghidra reports load state unknown. Original names and types may be missing; an empty name search does not prove a procedure is absent. Use list_procedures and address-based analysis to inspect recovered functions. REA does not admit a caller-selected PDB companion.; This session uses Ghidra 12.1.2. The bridge is verified against 12.1.4; other 12.1.x builds are accepted and the observed version is reported.; Pseudocode is Ghidra decompiler output, not original source and not text-equivalent to Hopper output.; External functions and functions without an analyzable body return null; other decompiler failures remain explicit.
// pseudocode: provider-specific; not original source


/* WARNING: Function: __EH_prolog3 replaced with injection: EH_prolog3 */
/* WARNING: Function: __EH_epilog3 replaced with injection: EH_epilog3 */
/* Library Function - Single Match
    public: virtual int __thiscall CMFCMenuBar::SaveState(wchar_t const *,int,unsigned int)
   
   Library: Visual Studio 2015 Release */

int __thiscall CMFCMenuBar::SaveState(CMFCMenuBar *this,wchar_t *param_1,int param_2,uint param_3)

{
  int iVar1;
  int *piVar2;
  code *pcVar3;
  AFX_MODULE_STATE *pAVar4;
  int iVar5;
  int iVar6;
  CFrameWnd *pCVar7;
  uint uVar8;
  undefined4 uVar9;
  int local_18;
  undefined4 local_14 [3];
  undefined4 local_8;
  undefined4 uStack_4;
  
  uStack_4 = 0x10;
  local_8 = 0x10125892;
  if (*(int *)(this + 0xd50) == 0) {
                    /* WARNING: Subroutine does not return */
    FUN_1004886a();
  }
  AFXGetRegPath((wchar_t *)local_14,L"MenuBar");
  local_8 = 0;
  FUN_100c79a2(*(undefined4 *)(this + 0xd4c),this);
  iVar1 = *(int *)(this + 0xd70);
  SetMaximizeMode(this,0,(CWnd *)0x0,0);
  pAVar4 = AfxGetModuleState();
  piVar2 = *(int **)(*(int *)(pAVar4 + 4) + 0x5c);
  if ((*(int *)(this + 0xd40) != 0) && (piVar2 != (int *)0x0)) {
    pcVar3 = *(code **)(*piVar2 + 0x10);
    guard_check_icall();
    local_18 = (*pcVar3)();
    while (local_18 != 0) {
      pcVar3 = *(code **)(*piVar2 + 0x14);
      guard_check_icall(&local_18);
      iVar5 = (*pcVar3)();
      iVar6 = FUN_1004e58b(&PTR_s_CMultiDocTemplate_101d10fc);
      if ((iVar6 != 0) && (*(HMENU__ **)(iVar5 + 0x88) != (HMENU__ *)0x0)) {
        uVar9 = *(undefined4 *)(iVar5 + 0x54);
        iVar5 = CMenuHash::LoadMenuBar
                          ((CMenuHash *)&DAT_1020fb98,*(HMENU__ **)(iVar5 + 0x88),
                           (CMFCToolBar *)this);
        if (iVar5 != 0) {
          pcVar3 = *(code **)(*(int *)this + 0x438);
          guard_check_icall(uVar9);
          (*pcVar3)();
          FUN_1009a50f(local_14[0],param_2,uVar9);
        }
      }
    }
  }
  iVar5 = CMenuHash::LoadMenuBar
                    ((CMenuHash *)&DAT_1020fb98,*(HMENU__ **)(this + 0xd50),(CMFCToolBar *)this);
  if (iVar5 != 0) {
    pcVar3 = *(code **)(*(int *)this + 0x438);
    guard_check_icall(*(undefined4 *)(this + 0xd5c));
    (*pcVar3)();
    FUN_1009a50f(local_14[0],param_2,0);
  }
  if ((*(HMENU__ **)(this + 0xd4c) == (HMENU__ *)0x0) ||
     (iVar5 = CMenuHash::LoadMenuBar
                        ((CMenuHash *)&DAT_1020fb98,*(HMENU__ **)(this + 0xd4c),(CMFCToolBar *)this)
     , iVar5 == 0)) {
    uVar8 = 0;
  }
  else {
    uVar8 = 1;
  }
  if (iVar1 != 0) {
    RestoreMaximizeMode(this,uVar8 ^ 1);
  }
  uVar9 = 1;
  pcVar3 = *(code **)(*(int *)this + 0x2d4);
  guard_check_icall(1);
  (*pcVar3)();
  if (uVar8 != 0) {
    pCVar7 = CWnd::GetParentFrame((CWnd *)this);
    pcVar3 = *(code **)(*(int *)pCVar7 + 0x178);
    guard_check_icall(1);
    (*pcVar3)();
    InvalidateRect(*(HWND *)(this + 0x20),(RECT *)0x0,1);
    UpdateWindow(*(HWND *)(this + 0x20));
  }
  pcVar3 = *(code **)(*(int *)this + 0x20c);
  guard_check_icall(uVar9);
  (*pcVar3)();
  FUN_10034f00();
  return 1;
}

