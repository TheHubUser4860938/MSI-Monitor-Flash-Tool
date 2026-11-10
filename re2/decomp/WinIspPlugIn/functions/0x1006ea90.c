// rea decompile_all
// name: CMFCColorButton::OnShowColorPopup
// address: 0x1006ea90
// body: available
// range: 0x1006ea90-0x1006ec47 inclusive
// non_contiguous: false
// provider: Ghidra 12.1.2 (ghidra)
// analysis_profile: b075844f08879296d957518397cd0ddda73db81dce53d00d3f0e702766fc2af6
// limitations: The session serves operations only after Ghidra reports default auto-analysis complete; incomplete analysis does not expose partial results.; The imported Program and temporary project are ephemeral and deleted on close. Annotation operations edit session database metadata; original executable bytes are never written.; Cancelling an active Ghidra request terminates its ephemeral database and discards session annotations. The selected target remains open; the next provider query imports the original artifact again.; Default-space addresses use lowercase 0x-prefixed hexadecimal; other address spaces use <percent-encoded-space>:0x<hex>.; The Ghidra Program references PDB WinIspPlugIn.pdb (GUID d9f398c7-6c98-49a8-af25-a0659d5ad2f3, age (hex) 1, signature unknown, version RSDS); Ghidra reports load state unknown. Original names and types may be missing; an empty name search does not prove a procedure is absent. Use list_procedures and address-based analysis to inspect recovered functions. REA does not admit a caller-selected PDB companion.; This session uses Ghidra 12.1.2. The bridge is verified against 12.1.4; other 12.1.x builds are accepted and the observed version is reported.; Pseudocode is Ghidra decompiler output, not original source and not text-equivalent to Hopper output.; External functions and functions without an analyzable body return null; other decompiler failures remain explicit.
// pseudocode: provider-specific; not original source


/* WARNING: Function: __EH_prolog3_GS replaced with injection: EH_prolog3 */
/* Library Function - Single Match
    protected: virtual void __thiscall CMFCColorButton::OnShowColorPopup(void)
   
   Library: Visual Studio 2015 Release */

void __thiscall CMFCColorButton::OnShowColorPopup(CMFCColorButton *this)

{
  code *pcVar1;
  int iVar2;
  CObject *pCVar3;
  CWnd *this_00;
  tagRECT local_34;
  tagRECT local_24;
  undefined4 local_8;
  undefined4 uStack_4;
  
  uStack_4 = 0x28;
  local_8 = 0x1006ea9c;
  if (*(int *)(this + 0x7ec) == 0) {
    if (*(int *)(this + 0x7c0) == 0) {
      CMFCColorBar::InitColors
                ((CPalette *)0x0,(CArray<unsigned_long,unsigned_long> *)(this + 0x7b8));
    }
    iVar2 = FUN_100491ae(0x1fe8);
    local_8 = 0;
    if (iVar2 == 0) {
      iVar2 = 0;
    }
    else {
      iVar2 = CMFCColorPopupMenu(this,this + 0x7b8,*(undefined4 *)(this + 0x7b0),
                                 *(undefined4 *)(this + 0x7f8),*(undefined4 *)(this + 0x7f0),
                                 *(undefined4 *)(this + 0x7f4),this + 0x7cc,
                                 *(undefined4 *)(this + 0x7e8),*(undefined4 *)(this + 0x7b4));
    }
    local_8 = 0xffffffff;
    *(int *)(this + 0x7ec) = iVar2;
    *(undefined4 *)(iVar2 + 0x1fe0) = *(undefined4 *)(this + 0x7a8);
    local_24.left = 0;
    local_24.top = 0;
    local_24.right = 0;
    local_24.bottom = 0;
    GetWindowRect(*(HWND *)(this + 0x20),&local_24);
    pcVar1 = *(code **)(**(int **)(this + 0x7ec) + 0x210);
    guard_check_icall(this,local_24.left,local_24.bottom,0,*(undefined4 *)(this + 0x7a8),0);
    iVar2 = (*pcVar1)();
    if (iVar2 == 0) {
      *(undefined4 *)(this + 0x7ec) = 0;
    }
    else {
      if (*(int *)(this + 0x7a8) != 0) {
        pcVar1 = *(code **)(**(int **)(this + 0x7ec) + 0x1c8);
        guard_check_icall();
        pCVar3 = (CObject *)(*pcVar1)();
        pCVar3 = AfxDynamicDownCast((CRuntimeClass *)&PTR_s_CMFCColorBar_1023d7a8,pCVar3);
        if (pCVar3 != (CObject *)0x0) {
          *(undefined4 *)(pCVar3 + 0xe00) = 1;
        }
      }
      local_34.left = 0;
      local_34.top = 0;
      local_34.right = 0;
      local_34.bottom = 0;
      GetWindowRect(*(HWND *)(*(int *)(this + 0x7ec) + 0x20),&local_34);
      CMFCPopupMenu::UpdateShadow(*(CMFCPopupMenu **)(this + 0x7ec),&local_34);
      if (*(int *)(this + 0x7ac) != 0) {
        pcVar1 = *(code **)(**(int **)(this + 0x7ec) + 0x1c8);
        guard_check_icall();
        this_00 = (CWnd *)(*pcVar1)();
        CWnd::SetFocus(this_00);
      }
    }
    if (*(int *)(this + 0xb8) != 0) {
      ReleaseCapture();
      *(undefined4 *)(this + 0xb8) = 0;
    }
  }
  else {
    SendMessageW(*(HWND *)(*(int *)(this + 0x7ec) + 0x20),0x10,0,0);
    *(undefined4 *)(this + 0x7ec) = 0;
  }
  FUN_1018015d();
  return;
}

