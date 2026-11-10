// rea decompile_all
// name: CMFCStandardColorsPropertyPage::OnInitDialog
// address: 0x10149e7d
// body: available
// range: 0x10149e7d-0x10149f1e inclusive
// non_contiguous: false
// provider: Ghidra 12.1.2 (ghidra)
// analysis_profile: b075844f08879296d957518397cd0ddda73db81dce53d00d3f0e702766fc2af6
// limitations: The session serves operations only after Ghidra reports default auto-analysis complete; incomplete analysis does not expose partial results.; The imported Program and temporary project are ephemeral and deleted on close. Annotation operations edit session database metadata; original executable bytes are never written.; Cancelling an active Ghidra request terminates its ephemeral database and discards session annotations. The selected target remains open; the next provider query imports the original artifact again.; Default-space addresses use lowercase 0x-prefixed hexadecimal; other address spaces use <percent-encoded-space>:0x<hex>.; The Ghidra Program references PDB WinOperateCScaler.pdb (GUID a6737962-efea-4805-8ae6-1fc1ef126554, age (hex) 1, signature unknown, version RSDS); Ghidra reports load state unknown. Original names and types may be missing; an empty name search does not prove a procedure is absent. Use list_procedures and address-based analysis to inspect recovered functions. REA does not admit a caller-selected PDB companion.; This session uses Ghidra 12.1.2. The bridge is verified against 12.1.4; other 12.1.x builds are accepted and the observed version is reported.; Pseudocode is Ghidra decompiler output, not original source and not text-equivalent to Hopper output.; External functions and functions without an analyzable body return null; other decompiler failures remain explicit.
// pseudocode: provider-specific; not original source


/* Library Function - Single Match
    protected: virtual int __thiscall CMFCStandardColorsPropertyPage::OnInitDialog(void)
   
   Library: Visual Studio 2015 Release */

int __thiscall CMFCStandardColorsPropertyPage::OnInitDialog(CMFCStandardColorsPropertyPage *this)

{
  int iVar1;
  tagRECT local_18;
  uint local_8;
  
  local_8 = DAT_10201fec ^ (uint)&stack0xfffffffc;
  CDialog::OnInitDialog((CDialog *)this);
  CMFCColorPickerCtrl::SetPalette
            ((CMFCColorPickerCtrl *)(this + 200),*(CPalette **)(*(int *)(this + 0xc0) + 0xdc));
  CMFCColorPickerCtrl::SetType((CMFCColorPickerCtrl *)(this + 200),3);
  CMFCColorPickerCtrl::SetPalette
            ((CMFCColorPickerCtrl *)(this + 0x198),*(CPalette **)(*(int *)(this + 0xc0) + 0xdc));
  CMFCColorPickerCtrl::SetType((CMFCColorPickerCtrl *)(this + 0x198),4);
  local_18.left = 0;
  local_18.top = 0;
  local_18.right = 0;
  local_18.bottom = 0;
  GetWindowRect(*(HWND *)(this + 0xe8),&local_18);
  CWnd::ScreenToClient((CWnd *)this,&local_18);
  *(LONG *)(this + 0x268) = local_18.left;
  iVar1 = __security_check_cookie(local_8 ^ (uint)&stack0xfffffffc);
  return iVar1;
}

