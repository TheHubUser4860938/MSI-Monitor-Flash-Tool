// rea decompile_all
// name: CDockablePane::DockPaneContainer
// address: 0x1012a2bb
// body: available
// range: 0x1012a2bb-0x1012a3c1 inclusive
// non_contiguous: false
// provider: Ghidra 12.1.2 (ghidra)
// analysis_profile: b075844f08879296d957518397cd0ddda73db81dce53d00d3f0e702766fc2af6
// limitations: The session serves operations only after Ghidra reports default auto-analysis complete; incomplete analysis does not expose partial results.; The imported Program and temporary project are ephemeral and deleted on close. Annotation operations edit session database metadata; original executable bytes are never written.; Cancelling an active Ghidra request terminates its ephemeral database and discards session annotations. The selected target remains open; the next provider query imports the original artifact again.; Default-space addresses use lowercase 0x-prefixed hexadecimal; other address spaces use <percent-encoded-space>:0x<hex>.; Ghidra Listing reports a terminal call at 0x1012a3ab to 0x1004886a FUN_1004886a (external=false, thunk=false, hasNoReturn=true); fallthrough is excluded by Ghidra's flow model. This records Ghidra's FunctionManager flag, not an independent verification that the callee cannot return.; The Ghidra Program references PDB Comm_Aux.pdb (GUID ba7920cc-daa3-4461-a102-1f8f66c67a2a, age (hex) 1, signature unknown, version RSDS); Ghidra reports load state unknown. Original names and types may be missing; an empty name search does not prove a procedure is absent. Use list_procedures and address-based analysis to inspect recovered functions. REA does not admit a caller-selected PDB companion.; This session uses Ghidra 12.1.2. The bridge is verified against 12.1.4; other 12.1.x builds are accepted and the observed version is reported.; Pseudocode is Ghidra decompiler output, not original source and not text-equivalent to Hopper output.; External functions and functions without an analyzable body return null; other decompiler failures remain explicit.
// pseudocode: provider-specific; not original source


/* WARNING: Function: __EH_prolog3 replaced with injection: EH_prolog3 */
/* WARNING: Function: __EH_epilog3 replaced with injection: EH_epilog3 */
/* Library Function - Single Match
    public: virtual int __thiscall CDockablePane::DockPaneContainer(class CPaneContainerManager
   &,unsigned long,enum AFX_DOCK_METHOD)
   
   Library: Visual Studio 2015 Release */

int __thiscall
CDockablePane::DockPaneContainer
          (CDockablePane *this,CPaneContainerManager *param_1,ulong param_2,AFX_DOCK_METHOD param_3)

{
  code *pcVar1;
  BOOL BVar2;
  CObject *this_00;
  undefined4 uVar3;
  CPaneDivider *pCVar4;
  int iVar5;
  CObList local_34 [4];
  undefined4 *local_30;
  undefined4 *local_18;
  CDockablePane *local_14;
  undefined4 local_8;
  undefined4 uStack_4;
  
  uStack_4 = 0x24;
  local_8 = 0x1012a2c7;
  if ((*(HWND *)(this + 0x350) != (HWND)0x0) &&
     (local_14 = this, BVar2 = IsWindow(*(HWND *)(this + 0x350)), BVar2 != 0)) {
    CObList::CObList(local_34,10);
    local_8 = 0;
    CPaneContainerManager::AddPanesToList(param_1,local_34,(CObList *)0x0);
    while (local_30 != (undefined4 *)0x0) {
      if (local_30 == (undefined4 *)0x0) {
                    /* WARNING: Subroutine does not return */
        FUN_1004886a();
      }
      local_18 = (undefined4 *)*local_30;
      this_00 = AfxDynamicDownCast((CRuntimeClass *)&PTR_s_CDockablePane_1020600c,
                                   (CObject *)local_30[2]);
      CBasePane::InsertPane((CBasePane *)this,(CBasePane *)this_00,(CBasePane *)this,1);
      SetDefaultPaneDivider((CDockablePane *)this_00,*(HWND__ **)(this + 0x350));
      iVar5 = *(int *)this_00;
      pcVar1 = *(code **)(*(int *)this + 0x194);
      guard_check_icall();
      uVar3 = (*pcVar1)();
      guard_check_icall(uVar3);
      (**(code **)(iVar5 + 0x1e0))();
      local_30 = local_18;
      this = local_14;
    }
    pCVar4 = GetDefaultPaneDivider(this);
    if (pCVar4 != (CPaneDivider *)0x0) {
      pcVar1 = *(code **)(*(int *)pCVar4 + 0x288);
      guard_check_icall(this,param_1,param_2);
      iVar5 = (*pcVar1)();
      CObList::~CObList(local_34);
      return iVar5;
    }
    CObList::~CObList(local_34);
  }
  return 0;
}

