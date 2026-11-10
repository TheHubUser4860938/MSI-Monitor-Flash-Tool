// rea decompile_all
// name: CDockingManager::FindPaneByID
// address: 0x468ab7
// body: available
// range: 0x468ab7-0x468c6a inclusive
// non_contiguous: false
// provider: Ghidra 12.1.2 (ghidra)
// analysis_profile: ac6d50be2cdf54f7005df47d1ed7e7ef55dee595681eb1b7c2e0b00d70cd697d
// limitations: The session serves operations only after Ghidra reports default auto-analysis complete; incomplete analysis does not expose partial results.; The imported Program and temporary project are ephemeral and deleted on close. Annotation operations edit session database metadata; original executable bytes are never written.; Cancelling an active Ghidra request terminates its ephemeral database and discards session annotations. The selected target remains open; the next provider query imports the original artifact again.; Default-space addresses use lowercase 0x-prefixed hexadecimal; other address spaces use <percent-encoded-space>:0x<hex>.; The Ghidra Program references PDB ISPToolForMsi.pdb (GUID b8f2ac8f-1d6f-438d-800f-ed4a14426ac6, age (hex) 1, signature unknown, version RSDS); Ghidra reports load state unknown. Original names and types may be missing; an empty name search does not prove a procedure is absent. Use list_procedures and address-based analysis to inspect recovered functions. REA does not admit a caller-selected PDB companion.; This session uses Ghidra 12.1.2. The bridge is verified against 12.1.4; other 12.1.x builds are accepted and the observed version is reported.; Pseudocode is Ghidra decompiler output, not original source and not text-equivalent to Hopper output.; External functions and functions without an analyzable body return null; other decompiler failures remain explicit.
// pseudocode: provider-specific; not original source


/* Library Function - Single Match
    public: virtual class CBasePane * __thiscall CDockingManager::FindPaneByID(unsigned int,int)
   
   Library: Visual Studio 2015 Release */

CBasePane * __thiscall CDockingManager::FindPaneByID(CDockingManager *this,uint param_1,int param_2)

{
  CWnd *this_00;
  code *pcVar1;
  undefined4 *puVar2;
  int iVar3;
  CObject *pCVar4;
  uint uVar5;
  CPane *pCVar6;
  CBasePane *pCVar7;
  int local_8;
  
  local_8 = *(int *)(this + 0x40);
  while (local_8 != 0) {
    puVar2 = (undefined4 *)FUN_004ead48(&local_8);
    pCVar4 = (CObject *)*puVar2;
    iVar3 = FUN_0043970d(&PTR_s_CPaneDivider_005c46c4);
    if (iVar3 != 0) {
      pCVar4 = AfxDynamicDownCast((CRuntimeClass *)&PTR_s_CPaneDivider_005c46c4,pCVar4);
      pCVar4 = (CObject *)CPaneDivider::GetFirstPane((CPaneDivider *)pCVar4);
    }
    if ((pCVar4 != (CObject *)0x0) && (uVar5 = CWnd::GetDlgCtrlID((CWnd *)pCVar4), uVar5 == param_1)
       ) {
      return (CBasePane *)pCVar4;
    }
  }
  local_8 = *(int *)(this + 0x24);
LAB_00468b21:
  do {
    if (local_8 == 0) {
      if (param_2 == 0) {
        return (CBasePane *)0x0;
      }
      local_8 = *(int *)(this + 0xcc);
      do {
        do {
          if (local_8 == 0) {
            pCVar7 = CPaneFrameWnd::FindFloatingPaneByID(param_1);
            return pCVar7;
          }
          puVar2 = (undefined4 *)FUN_004ead48(&local_8);
          pCVar4 = AfxDynamicDownCast((CRuntimeClass *)&PTR_s_CPaneFrameWnd_0060c5e0,
                                      (CObject *)*puVar2);
        } while (pCVar4 == (CObject *)0x0);
        pcVar1 = *(code **)(*(int *)pCVar4 + 0x1a8);
        guard_check_icall();
        pCVar4 = (CObject *)(*pcVar1)();
        pCVar4 = AfxDynamicDownCast((CRuntimeClass *)&PTR_s_CBasePane_005c4284,pCVar4);
      } while ((pCVar4 == (CObject *)0x0) ||
              (uVar5 = CWnd::GetDlgCtrlID((CWnd *)pCVar4), uVar5 != param_1));
      return (CBasePane *)pCVar4;
    }
    puVar2 = (undefined4 *)FUN_004ead48(&local_8);
    this_00 = (CWnd *)*puVar2;
    uVar5 = CWnd::GetDlgCtrlID(this_00);
    if (uVar5 == param_1) {
      return (CBasePane *)this_00;
    }
    iVar3 = FUN_0043970d(&PTR_s_CBaseTabbedPane_005c7aa4);
    if (iVar3 == 0) {
      iVar3 = FUN_0043970d(&PTR_s_CDockSite_005bb9f0);
      if (iVar3 != 0) {
        pCVar6 = CDockSite::FindPaneByID((CDockSite *)this_00,param_1);
        if (pCVar6 != (CPane *)0x0) {
          pCVar4 = AfxDynamicDownCast((CRuntimeClass *)&PTR_s_CBasePane_005c4284,(CObject *)pCVar6);
          return (CBasePane *)pCVar4;
        }
        goto LAB_00468b21;
      }
      iVar3 = FUN_0043970d(&PTR_s_CMFCReBar_005c60fc);
      if (iVar3 == 0) goto LAB_00468b21;
      pCVar4 = (CObject *)CWnd::GetDlgItem(this_00,param_1);
    }
    else {
      pCVar4 = AfxDynamicDownCast((CRuntimeClass *)&PTR_s_CBaseTabbedPane_005c7aa4,
                                  (CObject *)this_00);
      pcVar1 = *(code **)(*(int *)pCVar4 + 0x3c8);
      guard_check_icall(param_1);
      pCVar4 = (CObject *)(*pcVar1)();
    }
    pCVar4 = AfxDynamicDownCast((CRuntimeClass *)&PTR_s_CBasePane_005c4284,pCVar4);
    if (pCVar4 != (CObject *)0x0) {
      return (CBasePane *)pCVar4;
    }
  } while( true );
}

