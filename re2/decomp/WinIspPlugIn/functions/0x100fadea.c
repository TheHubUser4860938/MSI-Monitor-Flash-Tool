// rea decompile_all
// name: CBaseTabbedPane::SetAutoHideMode
// address: 0x100fadea
// body: available
// range: 0x100fadea-0x100fb201 inclusive
// non_contiguous: false
// provider: Ghidra 12.1.2 (ghidra)
// analysis_profile: b075844f08879296d957518397cd0ddda73db81dce53d00d3f0e702766fc2af6
// limitations: The session serves operations only after Ghidra reports default auto-analysis complete; incomplete analysis does not expose partial results.; The imported Program and temporary project are ephemeral and deleted on close. Annotation operations edit session database metadata; original executable bytes are never written.; Cancelling an active Ghidra request terminates its ephemeral database and discards session annotations. The selected target remains open; the next provider query imports the original artifact again.; Default-space addresses use lowercase 0x-prefixed hexadecimal; other address spaces use <percent-encoded-space>:0x<hex>.; Ghidra Listing reports a terminal call at 0x100fb15d to 0x1004a383 FUN_1004a383 (external=false, thunk=false, hasNoReturn=true); fallthrough is excluded by Ghidra's flow model. This records Ghidra's FunctionManager flag, not an independent verification that the callee cannot return.; The Ghidra Program references PDB WinIspPlugIn.pdb (GUID d9f398c7-6c98-49a8-af25-a0659d5ad2f3, age (hex) 1, signature unknown, version RSDS); Ghidra reports load state unknown. Original names and types may be missing; an empty name search does not prove a procedure is absent. Use list_procedures and address-based analysis to inspect recovered functions. REA does not admit a caller-selected PDB companion.; This session uses Ghidra 12.1.2. The bridge is verified against 12.1.4; other 12.1.x builds are accepted and the observed version is reported.; Pseudocode is Ghidra decompiler output, not original source and not text-equivalent to Hopper output.; External functions and functions without an analyzable body return null; other decompiler failures remain explicit.
// pseudocode: provider-specific; not original source


/* WARNING: Function: __EH_prolog3_GS replaced with injection: EH_prolog3 */
/* Library Function - Single Match
    public: virtual class CMFCAutoHideBar * __thiscall CBaseTabbedPane::SetAutoHideMode(int,unsigned
   long,class CMFCAutoHideBar *,int)
   
   Library: Visual Studio 2015 Release */

CMFCAutoHideBar * __thiscall
CBaseTabbedPane::SetAutoHideMode
          (CBaseTabbedPane *this,int param_1,ulong param_2,CMFCAutoHideBar *param_3,int param_4)

{
  code *pcVar1;
  CObject *pCVar2;
  HWND pHVar3;
  CWnd *pCVar4;
  int *piVar5;
  int iVar6;
  CMFCAutoHideBar *pCVar7;
  undefined4 uVar8;
  undefined4 uVar9;
  undefined4 uVar10;
  undefined4 uVar11;
  CObList local_6c [4];
  CWnd *local_68;
  int local_64;
  uint local_50;
  int local_4c;
  ulong local_48;
  int local_44;
  CObject *local_40;
  CMFCAutoHideBar *local_3c;
  int local_38;
  CObject *local_34;
  CWnd *local_30;
  CObject *local_2c;
  CObject *local_28;
  undefined4 local_24;
  undefined4 local_20;
  undefined4 local_1c;
  undefined4 local_18;
  undefined4 local_8;
  undefined4 uStack_4;
  
  uStack_4 = 0x5c;
  local_8 = 0x100fadf6;
  local_4c = param_1;
  local_48 = param_2;
  local_3c = param_3;
  local_44 = param_4;
  local_50 = DAT_10245b68;
  local_34 = (CObject *)0x0;
  DAT_10245b68 = ~-(uint)(DAT_10245b68 != 0) & DAT_10245b68;
  pcVar1 = *(code **)(**(int **)(this + 0x370) + 0x20c);
  guard_check_icall();
  local_40 = (CObject *)(*pcVar1)();
  pcVar1 = *(code **)(**(int **)(this + 0x370) + 0x1ac);
  guard_check_icall();
  pCVar2 = (CObject *)(*pcVar1)();
  CObList::CObList(local_6c,10);
  uVar11 = 0;
  uVar10 = 1;
  local_8 = 0;
  pcVar1 = *(code **)(*(int *)this + 0x224);
  uVar9 = 0;
  guard_check_icall(0,1,0);
  (*pcVar1)();
  local_38 = 0;
  local_28 = pCVar2;
  while (local_28 = local_28 + -1, -1 < (int)local_28) {
    pcVar1 = *(code **)(**(int **)(this + 0x370) + 0x1b0);
    guard_check_icall(local_28);
    pCVar2 = (CObject *)(*pcVar1)();
    local_2c = AfxDynamicDownCast((CRuntimeClass *)&PTR_s_CDockablePane_1023db9c,pCVar2);
    pcVar1 = *(code **)(**(int **)(this + 0x370) + 0x27c);
    guard_check_icall(local_28);
    local_30 = (CWnd *)(*pcVar1)();
    pcVar1 = *(code **)(**(int **)(this + 0x370) + 0x1f0);
    guard_check_icall(local_28);
    iVar6 = (*pcVar1)();
    if (((local_2c == (CObject *)0x0) || (local_30 == (CWnd *)0x0)) || (iVar6 == 0)) {
      local_38 = local_38 + 1;
    }
    else {
      pcVar1 = *(code **)(**(int **)(this + 0x370) + 0x198);
      guard_check_icall(local_28,0);
      (*pcVar1)();
      pCVar2 = local_2c;
      pcVar1 = *(code **)(*(int *)local_2c + 0x1f0);
      guard_check_icall(1);
      (*pcVar1)();
      pcVar1 = *(code **)(*(int *)pCVar2 + 0x378);
      guard_check_icall();
      (*pcVar1)();
      pHVar3 = GetParent(*(HWND *)(pCVar2 + 0x20));
      local_30 = CWnd::FromHandle(pHVar3);
      pcVar1 = *(code **)(*(int *)pCVar2 + 0x21c);
      guard_check_icall(*(undefined4 *)(this + 0xa4),0);
      (*pcVar1)();
      CWnd::SetParent((CWnd *)pCVar2,*(CWnd **)(this + 0xa4));
      if (*(int *)(this + 0xa4) == 0) {
        uVar8 = 0;
      }
      else {
        uVar8 = *(undefined4 *)(*(int *)(this + 0xa4) + 0x20);
      }
      *(undefined4 *)(pCVar2 + 0x5c) = uVar8;
      pcVar1 = *(code **)(*(int *)pCVar2 + 0x220);
      guard_check_icall(local_30);
      (*pcVar1)();
      CObList::AddHead(local_6c,pCVar2);
      if (local_28 == local_40) {
        local_34 = pCVar2;
      }
    }
  }
  local_28 = (CObject *)0x0;
  pCVar4 = local_68;
  if (local_68 != (CWnd *)0x0) {
    do {
      if (pCVar4 == (CWnd *)0x0) {
LAB_100fb15d:
                    /* WARNING: Subroutine does not return */
        FUN_1004a383();
      }
      local_30 = *(CWnd **)pCVar4;
      local_40 = AfxDynamicDownCast((CRuntimeClass *)&PTR_s_CDockablePane_1023db9c,
                                    *(CObject **)(pCVar4 + 8));
      if (local_40 == (CObject *)0x0) goto LAB_100fb15d;
      if ((local_40 == local_34) && (local_44 != 0)) {
        uVar8 = 1;
      }
      else {
        uVar8 = 0;
      }
      pcVar1 = *(code **)(*(int *)local_40 + 0x368);
      guard_check_icall(1,local_48,0,uVar8);
      piVar5 = (int *)(*pcVar1)();
      if (piVar5 != (int *)0x0) {
        piVar5[0x45] = (uint)(*(CObject **)(local_68 + 8) == local_40);
        piVar5[0x46] = (uint)(*(CObject **)(local_64 + 8) == local_40);
        piVar5[0x47] = (uint)(local_40 == local_34);
        if ((local_28 == (CObject *)0x0) && ((local_40 == local_34) != 0)) {
          local_28 = (CObject *)0x1;
        }
      }
      pCVar4 = local_30;
    } while (local_30 != (CWnd *)0x0);
    if (piVar5 != (int *)0x0) {
      if (local_28 == (CObject *)0x0) {
        piVar5[0x47] = 1;
      }
      local_24 = 0;
      local_20 = 0;
      local_1c = 0;
      local_18 = 0;
      pcVar1 = *(code **)(*piVar5 + 0x1a0);
      guard_check_icall();
      piVar5 = (int *)(*pcVar1)();
      pcVar1 = *(code **)(*piVar5 + 0x298);
      guard_check_icall(&local_24);
      (*pcVar1)();
    }
  }
  pCVar7 = local_3c;
  if (0 < local_38) {
    pcVar1 = *(code **)(**(int **)(this + 0x370) + 0x1a4);
    guard_check_icall(uVar9,uVar10,uVar11);
    iVar6 = (*pcVar1)();
    if (iVar6 == 0) {
      pcVar1 = *(code **)(*(int *)this + 0x224);
      guard_check_icall(0,1,0);
      (*pcVar1)();
      pCVar7 = local_3c;
    }
    else {
      pcVar1 = *(code **)(**(int **)(this + 0x370) + 0x20c);
      guard_check_icall();
      iVar6 = (*pcVar1)();
      if (iVar6 == -1) {
        local_2c = (CObject *)0xffffffff;
        pcVar1 = *(code **)(*(int *)this + 0x3d0);
        guard_check_icall(&local_2c);
        (*pcVar1)();
        pcVar1 = *(code **)(**(int **)(this + 0x370) + 0x214);
        guard_check_icall(local_2c);
        (*pcVar1)();
      }
      pcVar1 = *(code **)(**(int **)(this + 0x370) + 0x184);
      guard_check_icall();
      (*pcVar1)();
      pcVar1 = *(code **)(*(int *)this + 0x224);
      guard_check_icall(1,1,0);
      (*pcVar1)();
      pCVar7 = (CMFCAutoHideBar *)FUN_1012e394(local_4c,local_48,local_3c,local_44);
    }
  }
  if (pCVar7 != (CMFCAutoHideBar *)0x0) {
    FUN_10159156();
  }
  DAT_10245b68 = local_50;
  CObList::~CObList(local_6c);
  pCVar7 = (CMFCAutoHideBar *)FUN_1018015d();
  return pCVar7;
}

