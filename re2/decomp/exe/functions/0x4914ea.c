// rea decompile_all
// name: CMFCCaptionBar::UpdateTooltips
// address: 0x4914ea
// body: available
// range: 0x4914ea-0x4915c6 inclusive
// non_contiguous: false
// provider: Ghidra 12.1.2 (ghidra)
// analysis_profile: ac6d50be2cdf54f7005df47d1ed7e7ef55dee595681eb1b7c2e0b00d70cd697d
// limitations: The session serves operations only after Ghidra reports default auto-analysis complete; incomplete analysis does not expose partial results.; The imported Program and temporary project are ephemeral and deleted on close. Annotation operations edit session database metadata; original executable bytes are never written.; Cancelling an active Ghidra request terminates its ephemeral database and discards session annotations. The selected target remains open; the next provider query imports the original artifact again.; Default-space addresses use lowercase 0x-prefixed hexadecimal; other address spaces use <percent-encoded-space>:0x<hex>.; The Ghidra Program references PDB ISPToolForMsi.pdb (GUID b8f2ac8f-1d6f-438d-800f-ed4a14426ac6, age (hex) 1, signature unknown, version RSDS); Ghidra reports load state unknown. Original names and types may be missing; an empty name search does not prove a procedure is absent. Use list_procedures and address-based analysis to inspect recovered functions. REA does not admit a caller-selected PDB companion.; This session uses Ghidra 12.1.2. The bridge is verified against 12.1.4; other 12.1.x builds are accepted and the observed version is reported.; Pseudocode is Ghidra decompiler output, not original source and not text-equivalent to Hopper output.; External functions and functions without an analyzable body return null; other decompiler failures remain explicit.
// pseudocode: provider-specific; not original source


/* Library Function - Single Match
    protected: void __thiscall CMFCCaptionBar::UpdateTooltips(void)
   
   Library: Visual Studio 2015 Release */

void __thiscall CMFCCaptionBar::UpdateTooltips(CMFCCaptionBar *this)

{
  CToolTipCtrl *this_00;
  tagRECT *ptVar1;
  tagRECT local_18;
  uint local_8;
  
  local_8 = DAT_0060cff4 ^ (uint)&stack0xfffffffc;
  this_00 = *(CToolTipCtrl **)(this + 0x2c8);
  if ((this_00 != (CToolTipCtrl *)0x0) && (*(int *)(this_00 + 0x20) != 0)) {
    CToolTipCtrl::SetToolRect(this_00,(CWnd *)this,1,(tagRECT *)(this + 0x4ac));
    if (*(int *)(this + 0x448) == 0) {
      local_18.left = 0;
      ptVar1 = &local_18;
      local_18.top = 0;
      local_18.right = 0;
      local_18.bottom = 0;
    }
    else {
      ptVar1 = (tagRECT *)(this + 0x438);
    }
    CToolTipCtrl::SetToolRect(*(CToolTipCtrl **)(this + 0x2c8),(CWnd *)this,2,ptVar1);
    if (*(int *)(*(int *)(this + 0x400) + -0xc) == 0) {
      local_18.left = 0;
      ptVar1 = &local_18;
      local_18.top = 0;
      local_18.right = 0;
      local_18.bottom = 0;
    }
    else {
      ptVar1 = (tagRECT *)(this + 0x3f0);
    }
    CToolTipCtrl::SetToolRect(*(CToolTipCtrl **)(this + 0x2c8),(CWnd *)this,3,ptVar1);
    if (*(int *)(*(int *)(this + 0x450) + -0xc) == 0) {
      local_18.left = 0;
      ptVar1 = &local_18;
      local_18.top = 0;
      local_18.right = 0;
      local_18.bottom = 0;
    }
    else {
      ptVar1 = (tagRECT *)(this + 0x460);
    }
    CToolTipCtrl::SetToolRect(*(CToolTipCtrl **)(this + 0x2c8),(CWnd *)this,4,ptVar1);
  }
  __security_check_cookie(local_8 ^ (uint)&stack0xfffffffc);
  return;
}

