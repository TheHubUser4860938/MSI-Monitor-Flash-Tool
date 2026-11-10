// rea decompile_all
// name: CMFCToolBarButtonCustomizeDialog::RebuildImageList
// address: 0x4e96bf
// body: available
// range: 0x4e96bf-0x4e97ab inclusive
// non_contiguous: false
// provider: Ghidra 12.1.2 (ghidra)
// analysis_profile: ac6d50be2cdf54f7005df47d1ed7e7ef55dee595681eb1b7c2e0b00d70cd697d
// limitations: The session serves operations only after Ghidra reports default auto-analysis complete; incomplete analysis does not expose partial results.; The imported Program and temporary project are ephemeral and deleted on close. Annotation operations edit session database metadata; original executable bytes are never written.; Cancelling an active Ghidra request terminates its ephemeral database and discards session annotations. The selected target remains open; the next provider query imports the original artifact again.; Default-space addresses use lowercase 0x-prefixed hexadecimal; other address spaces use <percent-encoded-space>:0x<hex>.; The Ghidra Program references PDB ISPToolForMsi.pdb (GUID b8f2ac8f-1d6f-438d-800f-ed4a14426ac6, age (hex) 1, signature unknown, version RSDS); Ghidra reports load state unknown. Original names and types may be missing; an empty name search does not prove a procedure is absent. Use list_procedures and address-based analysis to inspect recovered functions. REA does not admit a caller-selected PDB companion.; This session uses Ghidra 12.1.2. The bridge is verified against 12.1.4; other 12.1.x builds are accepted and the observed version is reported.; Pseudocode is Ghidra decompiler output, not original source and not text-equivalent to Hopper output.; External functions and functions without an analyzable body return null; other decompiler failures remain explicit.
// pseudocode: provider-specific; not original source


/* WARNING: Function: __EH_prolog3 replaced with injection: EH_prolog3 */
/* WARNING: Function: __EH_epilog3 replaced with injection: EH_epilog3 */
/* Library Function - Single Match
    protected: void __thiscall CMFCToolBarButtonCustomizeDialog::RebuildImageList(void)
   
   Library: Visual Studio 2015 Release */

void __thiscall
CMFCToolBarButtonCustomizeDialog::RebuildImageList(CMFCToolBarButtonCustomizeDialog *this)

{
  code *pcVar1;
  int *piVar2;
  CMFCToolBarButton *this_00;
  CObject *pCVar3;
  int iVar4;
  int iVar5;
  
  CMFCToolBarButtonsListButton::RemoveButtons((CMFCToolBarButtonsListButton *)(this + 0x328));
  iVar5 = *(int *)(this + 0x51c);
  while (iVar5 != 0) {
    piVar2 = (int *)FUN_004d265a();
    if (piVar2 != (int *)0x0) {
      pcVar1 = *(code **)(*piVar2 + 4);
      guard_check_icall(1);
      (*pcVar1)();
    }
    iVar5 = *(int *)(this + 0x51c);
  }
  iVar5 = *(int *)(this + 0x4f8);
  iVar4 = *(int *)(*(int *)(this + 0x4f4) + 4) + -1;
  if (iVar5 <= iVar4) {
    do {
      this_00 = (CMFCToolBarButton *)FUN_00416408(0x70);
      if (this_00 == (CMFCToolBarButton *)0x0) {
        pCVar3 = (CObject *)0x0;
      }
      else {
        pCVar3 = (CObject *)CMFCToolBarButton::CMFCToolBarButton(this_00);
      }
      pcVar1 = *(code **)(*(int *)pCVar3 + 0xc0);
      guard_check_icall(iVar5);
      (*pcVar1)();
      FUN_00542e99(pCVar3);
      CObList::AddTail((CObList *)(this + 0x510),pCVar3);
      iVar5 = iVar5 + 1;
    } while (iVar5 <= iVar4);
  }
  InvalidateRect(*(HWND *)(this + 0x348),(RECT *)0x0,1);
  return;
}

