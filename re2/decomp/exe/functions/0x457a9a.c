// rea decompile_all
// name: CMFCToolBar::OnToolbarAppearance
// address: 0x457a9a
// body: available
// range: 0x457a9a-0x457b65 inclusive
// non_contiguous: false
// provider: Ghidra 12.1.2 (ghidra)
// analysis_profile: ac6d50be2cdf54f7005df47d1ed7e7ef55dee595681eb1b7c2e0b00d70cd697d
// limitations: The session serves operations only after Ghidra reports default auto-analysis complete; incomplete analysis does not expose partial results.; The imported Program and temporary project are ephemeral and deleted on close. Annotation operations edit session database metadata; original executable bytes are never written.; Cancelling an active Ghidra request terminates its ephemeral database and discards session annotations. The selected target remains open; the next provider query imports the original artifact again.; Default-space addresses use lowercase 0x-prefixed hexadecimal; other address spaces use <percent-encoded-space>:0x<hex>.; The Ghidra Program references PDB ISPToolForMsi.pdb (GUID b8f2ac8f-1d6f-438d-800f-ed4a14426ac6, age (hex) 1, signature unknown, version RSDS); Ghidra reports load state unknown. Original names and types may be missing; an empty name search does not prove a procedure is absent. Use list_procedures and address-based analysis to inspect recovered functions. REA does not admit a caller-selected PDB companion.; This session uses Ghidra 12.1.2. The bridge is verified against 12.1.4; other 12.1.x builds are accepted and the observed version is reported.; Pseudocode is Ghidra decompiler output, not original source and not text-equivalent to Hopper output.; External functions and functions without an analyzable body return null; other decompiler failures remain explicit.
// pseudocode: provider-specific; not original source


/* WARNING: Function: __EH_prolog3_GS replaced with injection: EH_prolog3 */
/* Library Function - Single Match
    protected: void __thiscall CMFCToolBar::OnToolbarAppearance(void)
   
   Library: Visual Studio 2015 Release */

void __thiscall CMFCToolBar::OnToolbarAppearance(CMFCToolBar *this)

{
  code *pcVar1;
  CMFCToolBarButton *pCVar2;
  int iVar3;
  CMFCToolBarButtonCustomizeDialog local_55c [1364];
  undefined4 local_8;
  undefined4 uStack_4;
  
  uStack_4 = 0x54c;
  local_8 = 0x457aa9;
  pCVar2 = (CMFCToolBarButton *)FUN_00452f94(*(undefined4 *)(this + 0xbf4));
  if (pCVar2 != (CMFCToolBarButton *)0x0) {
    if (*(int *)(*(int *)(pCVar2 + 0x2c) + -0xc) == 0) {
      pcVar1 = *(code **)(*(int *)this + 0x3a0);
      guard_check_icall(pCVar2);
      (*pcVar1)();
    }
    pcVar1 = *(code **)(*(int *)this + 0x40c);
    guard_check_icall(pCVar2);
    iVar3 = (*pcVar1)();
    CMFCToolBarButtonCustomizeDialog::CMFCToolBarButtonCustomizeDialog
              (local_55c,pCVar2,DAT_00614ec8,(CWnd *)this,0,iVar3);
    local_8 = 0;
    iVar3 = FUN_00424d62();
    if (iVar3 == 1) {
      pcVar1 = *(code **)(*(int *)this + 0x20c);
      guard_check_icall();
      (*pcVar1)();
      pcVar1 = *(code **)(*(int *)this + 0x2d4);
      guard_check_icall(1);
      (*pcVar1)();
      RedrawWindow(*(HWND *)(this + 0x20),(RECT *)0x0,(HRGN)0x0,0x505);
    }
    CMFCToolBarButtonCustomizeDialog::~CMFCToolBarButtonCustomizeDialog(local_55c);
  }
  FUN_0055bae6();
  return;
}

