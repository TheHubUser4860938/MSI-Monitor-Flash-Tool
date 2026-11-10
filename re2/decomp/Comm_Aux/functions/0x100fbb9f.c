// rea decompile_all
// name: CMFCDragFrameImpl::RemoveTabPreDocking
// address: 0x100fbb9f
// body: available
// range: 0x100fbb9f-0x100fbce4 inclusive
// non_contiguous: false
// provider: Ghidra 12.1.2 (ghidra)
// analysis_profile: b075844f08879296d957518397cd0ddda73db81dce53d00d3f0e702766fc2af6
// limitations: The session serves operations only after Ghidra reports default auto-analysis complete; incomplete analysis does not expose partial results.; The imported Program and temporary project are ephemeral and deleted on close. Annotation operations edit session database metadata; original executable bytes are never written.; Cancelling an active Ghidra request terminates its ephemeral database and discards session annotations. The selected target remains open; the next provider query imports the original artifact again.; Default-space addresses use lowercase 0x-prefixed hexadecimal; other address spaces use <percent-encoded-space>:0x<hex>.; The Ghidra Program references PDB Comm_Aux.pdb (GUID ba7920cc-daa3-4461-a102-1f8f66c67a2a, age (hex) 1, signature unknown, version RSDS); Ghidra reports load state unknown. Original names and types may be missing; an empty name search does not prove a procedure is absent. Use list_procedures and address-based analysis to inspect recovered functions. REA does not admit a caller-selected PDB companion.; This session uses Ghidra 12.1.2. The bridge is verified against 12.1.4; other 12.1.x builds are accepted and the observed version is reported.; Pseudocode is Ghidra decompiler output, not original source and not text-equivalent to Hopper output.; External functions and functions without an analyzable body return null; other decompiler failures remain explicit.
// pseudocode: provider-specific; not original source


/* Library Function - Single Match
    public: void __thiscall CMFCDragFrameImpl::RemoveTabPreDocking(class CDockablePane *)
   
   Library: Visual Studio 2015 Release */

void __thiscall
CMFCDragFrameImpl::RemoveTabPreDocking(CMFCDragFrameImpl *this,CDockablePane *param_1)

{
  CWnd *this_00;
  code *pcVar1;
  bool bVar2;
  CObject *pCVar3;
  int *piVar4;
  int iVar5;
  bool bVar6;
  
  if (((param_1 != (CDockablePane *)0x0) ||
      (param_1 = *(CDockablePane **)(this + 0x3c), param_1 != (CDockablePane *)0x0)) &&
     (*(int *)(this + 0x34) != -1)) {
    pCVar3 = AfxDynamicDownCast((CRuntimeClass *)&PTR_s_CBaseTabbedPane_101c7908,(CObject *)param_1)
    ;
    if (((pCVar3 == (CObject *)0x0) || (*(int *)(this + 0x54) != 0)) ||
       ((this_00 = *(CWnd **)(this + 0x50), this_00 == (CWnd *)0x0 ||
        (*(int *)(this_00 + 0x20) == 0)))) {
      DrawFrameTab(this,param_1,1);
    }
    else {
      bVar6 = false;
      bVar2 = false;
      if (((*(int *)(this + 0x48) != 0) &&
          (iVar5 = *(int *)(*(int *)(this + 0x48) + 0x1b8), iVar5 != 0)) &&
         ((*(int *)(iVar5 + 8) != 0 && (*(int *)(iVar5 + 4) != 0)))) {
        bVar6 = true;
        bVar2 = true;
      }
      CWnd::ShowWindow(this_00,0);
      if (!bVar6) {
        CDockingManager::LockUpdate(*(CDockingManager **)(this + 0x48),0);
      }
      pcVar1 = *(code **)(*(int *)pCVar3 + 0x3a0);
      guard_check_icall();
      piVar4 = (int *)(*pcVar1)();
      pcVar1 = *(code **)(*piVar4 + 0x1b0);
      guard_check_icall(*(undefined4 *)(this + 0x34));
      iVar5 = (*pcVar1)();
      if (iVar5 == *(int *)(this + 0x50)) {
        pcVar1 = *(code **)(*(int *)pCVar3 + 0x3a0);
        guard_check_icall();
        piVar4 = (int *)(*pcVar1)();
        pcVar1 = *(code **)(*piVar4 + 0x198);
        guard_check_icall(*(undefined4 *)(this + 0x34),1);
        (*pcVar1)();
      }
      if (!bVar2) {
        CDockingManager::LockUpdate(*(CDockingManager **)(this + 0x48),1);
      }
    }
    iVar5 = *(int *)(*(int *)(this + 0x48) + 0x1b8);
    if (((iVar5 != 0) && (*(int *)(iVar5 + 8) != 0)) && (*(int *)(iVar5 + 4) != 0)) {
      CWnd::ShowWindow(*(CWnd **)(this + 0x44),5);
    }
  }
  *(undefined4 *)(this + 0x34) = 0xffffffff;
  *(undefined4 *)(this + 0x3c) = 0;
  return;
}

