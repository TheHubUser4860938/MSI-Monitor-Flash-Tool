// rea decompile_all
// name: CMFCCustomColorsPropertyPage::OnInitDialog
// address: 0x555b1a
// body: available
// range: 0x555b1a-0x555be1 inclusive
// non_contiguous: false
// provider: Ghidra 12.1.2 (ghidra)
// analysis_profile: ac6d50be2cdf54f7005df47d1ed7e7ef55dee595681eb1b7c2e0b00d70cd697d
// limitations: The session serves operations only after Ghidra reports default auto-analysis complete; incomplete analysis does not expose partial results.; The imported Program and temporary project are ephemeral and deleted on close. Annotation operations edit session database metadata; original executable bytes are never written.; Cancelling an active Ghidra request terminates its ephemeral database and discards session annotations. The selected target remains open; the next provider query imports the original artifact again.; Default-space addresses use lowercase 0x-prefixed hexadecimal; other address spaces use <percent-encoded-space>:0x<hex>.; The Ghidra Program references PDB ISPToolForMsi.pdb (GUID b8f2ac8f-1d6f-438d-800f-ed4a14426ac6, age (hex) 1, signature unknown, version RSDS); Ghidra reports load state unknown. Original names and types may be missing; an empty name search does not prove a procedure is absent. Use list_procedures and address-based analysis to inspect recovered functions. REA does not admit a caller-selected PDB companion.; This session uses Ghidra 12.1.2. The bridge is verified against 12.1.4; other 12.1.x builds are accepted and the observed version is reported.; Pseudocode is Ghidra decompiler output, not original source and not text-equivalent to Hopper output.; External functions and functions without an analyzable body return null; other decompiler failures remain explicit.
// pseudocode: provider-specific; not original source


/* Library Function - Single Match
    protected: virtual int __thiscall CMFCCustomColorsPropertyPage::OnInitDialog(void)
   
   Library: Visual Studio 2015 Release */

int __thiscall CMFCCustomColorsPropertyPage::OnInitDialog(CMFCCustomColorsPropertyPage *this)

{
  CMFCColorPickerCtrl *pCVar1;
  CWnd *this_00;
  uint uVar2;
  double local_1c;
  double local_14;
  double local_c;
  
  CDialog::OnInitDialog((CDialog *)this);
  pCVar1 = (CMFCColorPickerCtrl *)(this + 0x198);
  CMFCColorPickerCtrl::SetPalette(pCVar1,*(CPalette **)(*(int *)(this + 0xc0) + 0xdc));
  CMFCColorPickerCtrl::SetType(pCVar1,2);
  CMFCColorPickerCtrl::GetHLS(pCVar1,&local_1c,&local_14,&local_c);
  pCVar1 = (CMFCColorPickerCtrl *)(this + 200);
  CMFCColorPickerCtrl::SetPalette(pCVar1,*(CPalette **)(*(int *)(this + 0xc0) + 0xdc));
  CMFCColorPickerCtrl::SetType(pCVar1,1);
  FUN_0055512f(local_1c,local_14,local_c,1);
  CMFCColorPickerCtrl::SetLuminanceBarWidth(pCVar1,0xe);
  uVar2 = 0x4250;
  do {
    this_00 = CWnd::GetDlgItem((CWnd *)this,uVar2);
    if (this_00 == (CWnd *)0x0) break;
    CSpinButtonCtrl::SetRange((CSpinButtonCtrl *)this_00,0,0xff);
    uVar2 = uVar2 + 1;
  } while (uVar2 < 0x4256);
  *(undefined4 *)(this + 0x280) = 1;
  return 1;
}

