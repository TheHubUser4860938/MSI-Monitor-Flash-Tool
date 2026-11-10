// rea decompile_all
// name: CBaseTabbedPane::Dock
// address: 0x100f90ac
// body: available
// range: 0x100f90ac-0x100f93f2 inclusive
// non_contiguous: false
// provider: Ghidra 12.1.2 (ghidra)
// analysis_profile: b075844f08879296d957518397cd0ddda73db81dce53d00d3f0e702766fc2af6
// limitations: The session serves operations only after Ghidra reports default auto-analysis complete; incomplete analysis does not expose partial results.; The imported Program and temporary project are ephemeral and deleted on close. Annotation operations edit session database metadata; original executable bytes are never written.; Cancelling an active Ghidra request terminates its ephemeral database and discards session annotations. The selected target remains open; the next provider query imports the original artifact again.; Default-space addresses use lowercase 0x-prefixed hexadecimal; other address spaces use <percent-encoded-space>:0x<hex>.; The Ghidra Program references PDB Comm_Aux.pdb (GUID ba7920cc-daa3-4461-a102-1f8f66c67a2a, age (hex) 1, signature unknown, version RSDS); Ghidra reports load state unknown. Original names and types may be missing; an empty name search does not prove a procedure is absent. Use list_procedures and address-based analysis to inspect recovered functions. REA does not admit a caller-selected PDB companion.; This session uses Ghidra 12.1.2. The bridge is verified against 12.1.4; other 12.1.x builds are accepted and the observed version is reported.; Pseudocode is Ghidra decompiler output, not original source and not text-equivalent to Hopper output.; External functions and functions without an analyzable body return null; other decompiler failures remain explicit.
// pseudocode: provider-specific; not original source


/* Library Function - Single Match
    protected: virtual int __thiscall CBaseTabbedPane::Dock(class CBasePane *,struct tagRECT const
   *,enum AFX_DOCK_METHOD)
   
   Library: Visual Studio 2015 Release */

int __thiscall
CBaseTabbedPane::Dock
          (CBaseTabbedPane *this,CBasePane *param_1,tagRECT *param_2,AFX_DOCK_METHOD param_3)

{
  code *pcVar1;
  int iVar2;
  CObject *pCVar3;
  CPaneContainer *pCVar4;
  undefined4 uVar5;
  undefined4 uVar6;
  undefined4 uVar7;
  CObject *local_14;
  int local_10;
  uint local_c;
  int local_8;
  
  pcVar1 = *(code **)(*(int *)this + 0x228);
  guard_check_icall(0);
  iVar2 = (*pcVar1)();
  local_c = (uint)(iVar2 != 0);
  pcVar1 = *(code **)(**(int **)(this + 0x370) + 0x1ac);
  guard_check_icall();
  local_10 = (*pcVar1)();
  local_14 = (CObject *)0x1;
  pCVar3 = (CObject *)0x1;
  if ((local_c != 0) && (local_8 = 0, pCVar3 = local_14, 0 < local_10)) {
    do {
      pcVar1 = *(code **)(**(int **)(this + 0x370) + 0x1f0);
      guard_check_icall(local_8);
      iVar2 = (*pcVar1)();
      if (iVar2 != 0) {
        pcVar1 = *(code **)(**(int **)(this + 0x370) + 0x1b0);
        guard_check_icall(local_8);
        pCVar3 = (CObject *)(*pcVar1)();
        pCVar3 = AfxDynamicDownCast((CRuntimeClass *)&PTR_s_CDockablePane_1020600c,pCVar3);
        if (pCVar3 != (CObject *)0x0) {
          pCVar4 = CRecentDockSiteInfo::GetRecentPaneContainer
                             ((CRecentDockSiteInfo *)(pCVar3 + 0x1e4),1);
          if ((pCVar4 == (CPaneContainer *)0x0) &&
             (pCVar4 = CRecentDockSiteInfo::GetRecentTabContainer
                                 ((CRecentDockSiteInfo *)(pCVar3 + 0x1e4),1),
             pCVar4 == (CPaneContainer *)0x0)) {
            pCVar3 = (CObject *)0x0;
            break;
          }
        }
      }
      local_8 = local_8 + 1;
      pCVar3 = local_14;
    } while (local_8 < local_10);
  }
  iVar2 = local_10;
  if ((param_3 == 2) && (pCVar3 != (CObject *)0x0)) {
    pCVar4 = CRecentDockSiteInfo::GetRecentPaneContainer
                       ((CRecentDockSiteInfo *)(this + 0x1e4),(uint)(local_c != 0));
    if (pCVar4 == (CPaneContainer *)0x0) {
      uVar7 = 0;
      uVar6 = 1;
      uVar5 = 0;
      pcVar1 = *(code **)(*(int *)this + 0x224);
      guard_check_icall(0,1,0);
      (*pcVar1)();
      local_c = 0;
      local_8 = iVar2 + -1;
      if (local_8 < 0) {
LAB_100f93c6:
        pcVar1 = *(code **)(*(int *)this + 0x60);
        guard_check_icall(uVar5,uVar6,uVar7);
        (*pcVar1)();
        return 0;
      }
      do {
        pcVar1 = *(code **)(**(int **)(this + 0x370) + 0x1b0);
        guard_check_icall(local_8);
        pCVar3 = (CObject *)(*pcVar1)();
        local_14 = AfxDynamicDownCast((CRuntimeClass *)&PTR_s_CDockablePane_1020600c,pCVar3);
        pcVar1 = *(code **)(**(int **)(this + 0x370) + 0x27c);
        guard_check_icall(local_8);
        local_10 = (*pcVar1)();
        pcVar1 = *(code **)(**(int **)(this + 0x370) + 0x1f0);
        guard_check_icall(local_8);
        iVar2 = (*pcVar1)();
        if (((local_14 == (CObject *)0x0) || (local_10 == 0)) || (iVar2 == 0)) {
          local_c = local_c + 1;
        }
        else {
          pcVar1 = *(code **)(**(int **)(this + 0x370) + 0x198);
          guard_check_icall(local_8,0);
          (*pcVar1)();
          pCVar3 = local_14;
          pcVar1 = *(code **)(*(int *)local_14 + 0x1f0);
          guard_check_icall(1);
          (*pcVar1)();
          pcVar1 = *(code **)(*(int *)pCVar3 + 0x378);
          guard_check_icall();
          (*pcVar1)();
          pcVar1 = *(code **)(*(int *)pCVar3 + 0x1f8);
          guard_check_icall(pCVar3,param_2,2);
          (*pcVar1)();
        }
        local_8 = local_8 + -1;
      } while (-1 < local_8);
      if ((int)local_c < 1) goto LAB_100f93c6;
      pcVar1 = *(code **)(**(int **)(this + 0x370) + 0x1a4);
      guard_check_icall();
      iVar2 = (*pcVar1)();
      if (iVar2 == 0) {
        pcVar1 = *(code **)(*(int *)this + 0x224);
        guard_check_icall(0,1,0);
        (*pcVar1)();
        return 1;
      }
      pcVar1 = *(code **)(**(int **)(this + 0x370) + 0x20c);
      guard_check_icall();
      iVar2 = (*pcVar1)();
      if (iVar2 == -1) {
        local_14 = (CObject *)0xffffffff;
        pcVar1 = *(code **)(*(int *)this + 0x3d0);
        guard_check_icall(&local_14);
        (*pcVar1)();
        pcVar1 = *(code **)(**(int **)(this + 0x370) + 0x214);
        guard_check_icall(local_14);
        (*pcVar1)();
      }
      pcVar1 = *(code **)(**(int **)(this + 0x370) + 0x184);
      guard_check_icall();
      (*pcVar1)();
      pcVar1 = *(code **)(*(int *)this + 0x224);
      guard_check_icall(1,1,0);
      (*pcVar1)();
    }
    param_3 = 2;
  }
  iVar2 = CDockablePane::Dock((CDockablePane *)this,param_1,param_2,param_3);
  return iVar2;
}

