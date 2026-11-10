// rea decompile_all
// name: CMFCToolBarButtonCustomizeDialog::EnableControls
// address: 0x1012044a
// body: available
// range: 0x1012044a-0x101205a1 inclusive
// non_contiguous: false
// provider: Ghidra 12.1.2 (ghidra)
// analysis_profile: b075844f08879296d957518397cd0ddda73db81dce53d00d3f0e702766fc2af6
// limitations: The session serves operations only after Ghidra reports default auto-analysis complete; incomplete analysis does not expose partial results.; The imported Program and temporary project are ephemeral and deleted on close. Annotation operations edit session database metadata; original executable bytes are never written.; Cancelling an active Ghidra request terminates its ephemeral database and discards session annotations. The selected target remains open; the next provider query imports the original artifact again.; Default-space addresses use lowercase 0x-prefixed hexadecimal; other address spaces use <percent-encoded-space>:0x<hex>.; The Ghidra Program references PDB WinIspPlugIn.pdb (GUID d9f398c7-6c98-49a8-af25-a0659d5ad2f3, age (hex) 1, signature unknown, version RSDS); Ghidra reports load state unknown. Original names and types may be missing; an empty name search does not prove a procedure is absent. Use list_procedures and address-based analysis to inspect recovered functions. REA does not admit a caller-selected PDB companion.; This session uses Ghidra 12.1.2. The bridge is verified against 12.1.4; other 12.1.x builds are accepted and the observed version is reported.; Pseudocode is Ghidra decompiler output, not original source and not text-equivalent to Hopper output.; External functions and functions without an analyzable body return null; other decompiler failures remain explicit.
// pseudocode: provider-specific; not original source


/* Library Function - Single Match
    protected: void __thiscall CMFCToolBarButtonCustomizeDialog::EnableControls(void)
   
   Library: Visual Studio 2015 Release */

void __thiscall
CMFCToolBarButtonCustomizeDialog::EnableControls(CMFCToolBarButtonCustomizeDialog *this)

{
  int iVar1;
  int iVar2;
  int iVar3;
  
  iVar3 = 0;
  iVar1 = *(int *)(*(int *)(this + 0x4f0) + 0x3c);
  if ((*(int *)(this + 0x504) == 0) ||
     (((*(int *)(this + 0x508) != 0 && (*(int *)(this + 0x540) != 0)) || (DAT_10245c70 != 0)))) {
    iVar2 = 0;
  }
  else {
    iVar2 = 1;
  }
  CWnd::EnableWindow((CWnd *)(this + 0x228),iVar2);
  if (((*(int *)(this + 0x500) == 0) || (*(int *)(this + 0x4f4) == 0)) ||
     ((*(int *)(this + 0x50c) == 0 || (iVar1 != 0)))) {
    iVar2 = 0;
  }
  else {
    iVar2 = 1;
  }
  CWnd::EnableWindow((CWnd *)(this + 0x328),iVar2);
  if (((*(int *)(this + 0x500) == 0) || (*(int *)(this + 0x4f4) == 0)) ||
     ((*(int *)(this + 0x50c) == 0 ||
      ((*(int *)(*(int *)(this + 0x4f4) + 0x24) != 0 || (iVar1 != 0)))))) {
    iVar2 = 0;
  }
  else {
    iVar2 = 1;
  }
  CWnd::EnableWindow((CWnd *)(this + 0x2a8),iVar2);
  if (((((*(int *)(this + 0x500) == 0) || (*(int *)(this + 0x4f4) == 0)) ||
       (*(int *)(this + 0x4fc) < 0)) ||
      ((*(int *)(this + 0x50c) == 0 || (*(int *)(*(int *)(this + 0x4f4) + 0x24) != 0)))) ||
     (iVar1 != 0)) {
    iVar2 = 0;
  }
  else {
    iVar2 = 1;
  }
  CWnd::EnableWindow((CWnd *)(this + 0x468),iVar2);
  if (((*(int *)(this + 0x500) == 0) || (*(int *)(this + 0x4f4) == 0)) || (iVar1 != 0)) {
    iVar2 = 0;
  }
  else {
    iVar2 = 1;
  }
  CWnd::EnableWindow((CWnd *)(this + 0x128),iVar2);
  if (*(int *)(this + 0x540) == 0) {
    if (*(int *)(this + 0x500) == 0) goto LAB_10120580;
    iVar2 = CMFCToolBar::GetDefaultImage(*(uint *)(*(int *)(this + 0x4f0) + 0x20));
    if ((iVar2 < 0) || (iVar1 != 0)) goto LAB_10120580;
  }
  iVar3 = 1;
LAB_10120580:
  CWnd::EnableWindow((CWnd *)(this + 0xa8),iVar3);
  InvalidateRect(*(HWND *)(this + 0x20),(RECT *)(this + 0x52c),1);
  return;
}

