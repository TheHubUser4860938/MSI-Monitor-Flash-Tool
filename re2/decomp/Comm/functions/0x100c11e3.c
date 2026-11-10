// rea decompile_all
// name: CMultiPaneFrameWnd::OnDockToRecentPos
// address: 0x100c11e3
// body: available
// range: 0x100c11e3-0x100c12de inclusive
// non_contiguous: false
// provider: Ghidra 12.1.2 (ghidra)
// analysis_profile: b075844f08879296d957518397cd0ddda73db81dce53d00d3f0e702766fc2af6
// limitations: The session serves operations only after Ghidra reports default auto-analysis complete; incomplete analysis does not expose partial results.; The imported Program and temporary project are ephemeral and deleted on close. Annotation operations edit session database metadata; original executable bytes are never written.; Cancelling an active Ghidra request terminates its ephemeral database and discards session annotations. The selected target remains open; the next provider query imports the original artifact again.; Default-space addresses use lowercase 0x-prefixed hexadecimal; other address spaces use <percent-encoded-space>:0x<hex>.; Ghidra Listing reports a terminal call at 0x100c126a to 0x10012a3f FUN_10012a3f (external=false, thunk=false, hasNoReturn=true); fallthrough is excluded by Ghidra's flow model. This records Ghidra's FunctionManager flag, not an independent verification that the callee cannot return.; The Ghidra Program references PDB Comm.pdb (GUID c3062acb-498d-45fa-a233-c8b7e401bb13, age (hex) 1, signature unknown, version RSDS); Ghidra reports load state unknown. Original names and types may be missing; an empty name search does not prove a procedure is absent. Use list_procedures and address-based analysis to inspect recovered functions. REA does not admit a caller-selected PDB companion.; This session uses Ghidra 12.1.2. The bridge is verified against 12.1.4; other 12.1.x builds are accepted and the observed version is reported.; Pseudocode is Ghidra decompiler output, not original source and not text-equivalent to Hopper output.; External functions and functions without an analyzable body return null; other decompiler failures remain explicit.
// pseudocode: provider-specific; not original source


/* WARNING: Function: __EH_prolog3 replaced with injection: EH_prolog3 */
/* WARNING: Function: __EH_epilog3 replaced with injection: EH_epilog3 */
/* Library Function - Single Match
    public: virtual void __thiscall CMultiPaneFrameWnd::OnDockToRecentPos(void)
   
   Library: Visual Studio 2015 Release */

void __thiscall CMultiPaneFrameWnd::OnDockToRecentPos(CMultiPaneFrameWnd *this)

{
  int *piVar1;
  code *pcVar2;
  CObject *pCVar3;
  int *piVar4;
  CObList local_34 [4];
  int *local_30;
  CMultiPaneFrameWnd *local_18;
  CDockingManager *local_14;
  undefined4 local_8;
  undefined4 uStack_4;
  
  uStack_4 = 0x24;
  local_8 = 0x100c11ef;
  local_14 = *(CDockingManager **)(this + 0x184);
  local_18 = this;
  if (local_14 == (CDockingManager *)0x0) {
    local_14 = CGlobalUtils::GetDockingManager((CGlobalUtils *)&PTR_vftable_101d3944,(CWnd *)this);
  }
  CObList::CObList(local_34,10);
  local_8 = 0;
  CPaneContainerManager::AddPanesToList
            ((CPaneContainerManager *)(this + 400),local_34,(CObList *)0x0);
  piVar4 = local_30;
  if (local_30 != (int *)0x0) {
    do {
      if (piVar4 == (int *)0x0) goto LAB_100c126a;
      piVar1 = piVar4 + 2;
      piVar4 = (int *)*piVar4;
      pCVar3 = AfxDynamicDownCast((CRuntimeClass *)&PTR_s_CDockablePane_101d3b9c,(CObject *)*piVar1)
      ;
      pcVar2 = *(code **)(*(int *)pCVar3 + 0x31c);
      guard_check_icall();
      (*pcVar2)();
    } while (piVar4 != (int *)0x0);
    while (local_30 != (int *)0x0) {
      if (local_30 == (int *)0x0) {
LAB_100c126a:
                    /* WARNING: Subroutine does not return */
        FUN_10012a3f();
      }
      piVar4 = (int *)*local_30;
      pCVar3 = AfxDynamicDownCast((CRuntimeClass *)&PTR_s_CDockablePane_101d3b9c,
                                  (CObject *)local_30[2]);
      CPaneFrameWnd::AddRemovePaneFromGlobalList((CBasePane *)pCVar3,0);
      pcVar2 = *(code **)(*(int *)pCVar3 + 0x1f8);
      guard_check_icall(pCVar3,0,2);
      (*pcVar2)();
      local_30 = piVar4;
    }
  }
  CGlobalUtils::ForceAdjustLayout((CGlobalUtils *)&PTR_vftable_101d3944,local_14,0,0);
  SendMessageW(*(HWND *)(local_18 + 0x20),DAT_101dc798,0,0);
  CObList::~CObList(local_34);
  return;
}

