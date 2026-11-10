// rea decompile_all
// name: CMFCStandardColorsPropertyPage::OnGreyscale
// address: 0x55545c
// body: available
// range: 0x55545c-0x5554f0 inclusive
// non_contiguous: false
// provider: Ghidra 12.1.2 (ghidra)
// analysis_profile: ac6d50be2cdf54f7005df47d1ed7e7ef55dee595681eb1b7c2e0b00d70cd697d
// limitations: The session serves operations only after Ghidra reports default auto-analysis complete; incomplete analysis does not expose partial results.; The imported Program and temporary project are ephemeral and deleted on close. Annotation operations edit session database metadata; original executable bytes are never written.; Cancelling an active Ghidra request terminates its ephemeral database and discards session annotations. The selected target remains open; the next provider query imports the original artifact again.; Default-space addresses use lowercase 0x-prefixed hexadecimal; other address spaces use <percent-encoded-space>:0x<hex>.; The Ghidra Program references PDB ISPToolForMsi.pdb (GUID b8f2ac8f-1d6f-438d-800f-ed4a14426ac6, age (hex) 1, signature unknown, version RSDS); Ghidra reports load state unknown. Original names and types may be missing; an empty name search does not prove a procedure is absent. Use list_procedures and address-based analysis to inspect recovered functions. REA does not admit a caller-selected PDB companion.; This session uses Ghidra 12.1.2. The bridge is verified against 12.1.4; other 12.1.x builds are accepted and the observed version is reported.; Pseudocode is Ghidra decompiler output, not original source and not text-equivalent to Hopper output.; External functions and functions without an analyzable body return null; other decompiler failures remain explicit.
// pseudocode: provider-specific; not original source


/* Library Function - Single Match
    protected: void __thiscall CMFCStandardColorsPropertyPage::OnGreyscale(void)
   
   Library: Visual Studio 2015 Release */

void __thiscall CMFCStandardColorsPropertyPage::OnGreyscale(CMFCStandardColorsPropertyPage *this)

{
  undefined4 uVar1;
  uchar uVar2;
  uchar uVar3;
  double local_24;
  double local_1c;
  double local_14;
  uchar local_c;
  undefined3 uStack_b;
  uchar local_8;
  undefined3 uStack_7;
  
  CMFCColorPickerCtrl::GetHLS((CMFCColorPickerCtrl *)(this + 0x198),&local_24,&local_1c,&local_14);
  uVar1 = FUN_00464ade(local_24,local_1c,local_14);
  FUN_0051f520();
  uVar2 = (uchar)((uint)uVar1 >> 8);
  _local_c = CONCAT31(uStack_b,uVar2);
  uVar3 = (uchar)((uint)uVar1 >> 0x10);
  _local_8 = CONCAT31(uStack_7,uVar3);
  CMFCColorDialog::SetPageTwo(*(CMFCColorDialog **)(this + 0xc0),(uchar)uVar1,uVar2,uVar3);
  CMFCColorPickerCtrl::SelectCellHexagon
            ((CMFCColorPickerCtrl *)(this + 200),(uchar)uVar1,(uchar)_local_c,(uchar)_local_8);
  InvalidateRect(*(HWND *)(this + 0xe8),(RECT *)0x0,1);
  return;
}

