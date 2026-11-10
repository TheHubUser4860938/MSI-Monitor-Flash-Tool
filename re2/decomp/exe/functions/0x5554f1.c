// rea decompile_all
// name: CMFCStandardColorsPropertyPage::OnHexColor
// address: 0x5554f1
// body: available
// range: 0x5554f1-0x55556d inclusive
// non_contiguous: false
// provider: Ghidra 12.1.2 (ghidra)
// analysis_profile: ac6d50be2cdf54f7005df47d1ed7e7ef55dee595681eb1b7c2e0b00d70cd697d
// limitations: The session serves operations only after Ghidra reports default auto-analysis complete; incomplete analysis does not expose partial results.; The imported Program and temporary project are ephemeral and deleted on close. Annotation operations edit session database metadata; original executable bytes are never written.; Cancelling an active Ghidra request terminates its ephemeral database and discards session annotations. The selected target remains open; the next provider query imports the original artifact again.; Default-space addresses use lowercase 0x-prefixed hexadecimal; other address spaces use <percent-encoded-space>:0x<hex>.; The Ghidra Program references PDB ISPToolForMsi.pdb (GUID b8f2ac8f-1d6f-438d-800f-ed4a14426ac6, age (hex) 1, signature unknown, version RSDS); Ghidra reports load state unknown. Original names and types may be missing; an empty name search does not prove a procedure is absent. Use list_procedures and address-based analysis to inspect recovered functions. REA does not admit a caller-selected PDB companion.; This session uses Ghidra 12.1.2. The bridge is verified against 12.1.4; other 12.1.x builds are accepted and the observed version is reported.; Pseudocode is Ghidra decompiler output, not original source and not text-equivalent to Hopper output.; External functions and functions without an analyzable body return null; other decompiler failures remain explicit.
// pseudocode: provider-specific; not original source


/* Library Function - Single Match
    protected: void __thiscall CMFCStandardColorsPropertyPage::OnHexColor(void)
   
   Library: Visual Studio 2015 Release */

void __thiscall CMFCStandardColorsPropertyPage::OnHexColor(CMFCStandardColorsPropertyPage *this)

{
  undefined4 uVar1;
  double local_24;
  double local_1c;
  double local_14;
  undefined1 local_c;
  undefined3 uStack_b;
  undefined1 local_8;
  undefined3 uStack_7;
  
  uVar1 = *(undefined4 *)(this + 0x168);
  _local_c = CONCAT31(uStack_b,(char)((uint)uVar1 >> 8));
  _local_8 = CONCAT31(uStack_7,(char)((uint)uVar1 >> 0x10));
  CMFCColorPickerCtrl::GetHLS((CMFCColorPickerCtrl *)(this + 200),&local_24,&local_1c,&local_14);
  FUN_0051f520(uVar1);
  CMFCColorDialog::SetPageTwo
            (*(CMFCColorDialog **)(this + 0xc0),(uchar)uVar1,(uchar)_local_c,(uchar)_local_8);
  CMFCColorPickerCtrl::SelectCellHexagon
            ((CMFCColorPickerCtrl *)(this + 0x198),(uchar)uVar1,(uchar)_local_c,(uchar)_local_8);
  InvalidateRect(*(HWND *)(this + 0x1b8),(RECT *)0x0,1);
  return;
}

