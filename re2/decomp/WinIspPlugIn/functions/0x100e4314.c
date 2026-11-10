// rea decompile_all
// name: CDockingManager::HideForPrintPreview
// address: 0x100e4314
// body: available
// range: 0x100e4314-0x100e44a0 inclusive
// non_contiguous: false
// provider: Ghidra 12.1.2 (ghidra)
// analysis_profile: b075844f08879296d957518397cd0ddda73db81dce53d00d3f0e702766fc2af6
// limitations: The session serves operations only after Ghidra reports default auto-analysis complete; incomplete analysis does not expose partial results.; The imported Program and temporary project are ephemeral and deleted on close. Annotation operations edit session database metadata; original executable bytes are never written.; Cancelling an active Ghidra request terminates its ephemeral database and discards session annotations. The selected target remains open; the next provider query imports the original artifact again.; Default-space addresses use lowercase 0x-prefixed hexadecimal; other address spaces use <percent-encoded-space>:0x<hex>.; The Ghidra Program references PDB WinIspPlugIn.pdb (GUID d9f398c7-6c98-49a8-af25-a0659d5ad2f3, age (hex) 1, signature unknown, version RSDS); Ghidra reports load state unknown. Original names and types may be missing; an empty name search does not prove a procedure is absent. Use list_procedures and address-based analysis to inspect recovered functions. REA does not admit a caller-selected PDB companion.; This session uses Ghidra 12.1.2. The bridge is verified against 12.1.4; other 12.1.x builds are accepted and the observed version is reported.; Pseudocode is Ghidra decompiler output, not original source and not text-equivalent to Hopper output.; External functions and functions without an analyzable body return null; other decompiler failures remain explicit.
// pseudocode: provider-specific; not original source


/* Library Function - Single Match
    protected: void __thiscall CDockingManager::HideForPrintPreview(class CObList const &)
   
   Library: Visual Studio 2015 Release */

void __thiscall CDockingManager::HideForPrintPreview(CDockingManager *this,CObList *param_1)

{
  code *pcVar1;
  CWnd *this_00;
  CDockingManager *pCVar2;
  CObject *pCVar3;
  int iVar4;
  undefined4 *puVar5;
  BOOL BVar6;
  int local_c;
  CDockingManager *local_8;
  
  local_c = *(int *)(param_1 + 4);
  pCVar2 = this;
  while (local_8 = pCVar2, local_c != 0) {
    pCVar3 = (CObject *)FUN_10096856(&local_c);
    if ((DAT_1023d908 == 0) && (iVar4 = IsOLEContainerMode(this), iVar4 != 0)) {
      pcVar1 = *(code **)(*(int *)pCVar3 + 0x17c);
      guard_check_icall();
      iVar4 = (*pcVar1)();
      pCVar2 = local_8;
      if (iVar4 != 0) {
        pcVar1 = *(code **)(*(int *)pCVar3 + 0x24c);
        guard_check_icall();
        iVar4 = (*pcVar1)();
        pCVar2 = local_8;
        if ((((iVar4 != 0) &&
             (iVar4 = FUN_10051e53(&PTR_s_CDockablePane_1023db9c), pCVar2 = local_8, iVar4 == 0)) &&
            (iVar4 = FUN_10051e53(&PTR_s_CAutoHideDockSite_101f8a30), pCVar2 = local_8, iVar4 == 0))
           && (iVar4 = FUN_10051e53(&PTR_s_CPaneDivider_101f8380), pCVar2 = local_8, iVar4 == 0)) {
          pcVar1 = *(code **)(*(int *)pCVar3 + 0x224);
          guard_check_icall(0,1,0);
          (*pcVar1)();
          CObList::AddTail((CObList *)(this + 0x134),pCVar3);
          pCVar2 = local_8;
        }
      }
    }
    else {
      pcVar1 = *(code **)(*(int *)pCVar3 + 0x17c);
      guard_check_icall();
      iVar4 = (*pcVar1)();
      if (iVar4 != 0) {
        pcVar1 = *(code **)(*(int *)pCVar3 + 0x24c);
        guard_check_icall();
        iVar4 = (*pcVar1)();
        if (iVar4 != 0) {
          pcVar1 = *(code **)(*(int *)pCVar3 + 0x224);
          guard_check_icall(0,1,0);
          (*pcVar1)();
          CObList::AddTail((CObList *)(this + 0x134),pCVar3);
        }
      }
      local_8 = *(CDockingManager **)(this + 0xcc);
      while (pCVar2 = (CDockingManager *)0x0, local_8 != (CDockingManager *)0x0) {
        puVar5 = (undefined4 *)FUN_100c321b(&local_8);
        this_00 = (CWnd *)*puVar5;
        BVar6 = IsWindowVisible(*(HWND *)(this_00 + 0x20));
        if (BVar6 != 0) {
          CWnd::ShowWindow(this_00,0);
          CObList::AddTail((CObList *)(this + 0x134),(CObject *)this_00);
        }
      }
    }
  }
  return;
}

