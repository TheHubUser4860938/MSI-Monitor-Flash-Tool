// rea decompile_all
// name: CMFCCustomColorsPropertyPage::OnColour
// address: 0x555838
// body: available
// range: 0x555838-0x555949 inclusive
// non_contiguous: false
// provider: Ghidra 12.1.2 (ghidra)
// analysis_profile: ac6d50be2cdf54f7005df47d1ed7e7ef55dee595681eb1b7c2e0b00d70cd697d
// limitations: The session serves operations only after Ghidra reports default auto-analysis complete; incomplete analysis does not expose partial results.; The imported Program and temporary project are ephemeral and deleted on close. Annotation operations edit session database metadata; original executable bytes are never written.; Cancelling an active Ghidra request terminates its ephemeral database and discards session annotations. The selected target remains open; the next provider query imports the original artifact again.; Default-space addresses use lowercase 0x-prefixed hexadecimal; other address spaces use <percent-encoded-space>:0x<hex>.; The Ghidra Program references PDB ISPToolForMsi.pdb (GUID b8f2ac8f-1d6f-438d-800f-ed4a14426ac6, age (hex) 1, signature unknown, version RSDS); Ghidra reports load state unknown. Original names and types may be missing; an empty name search does not prove a procedure is absent. Use list_procedures and address-based analysis to inspect recovered functions. REA does not admit a caller-selected PDB companion.; This session uses Ghidra 12.1.2. The bridge is verified against 12.1.4; other 12.1.x builds are accepted and the observed version is reported.; Pseudocode is Ghidra decompiler output, not original source and not text-equivalent to Hopper output.; External functions and functions without an analyzable body return null; other decompiler failures remain explicit.
// pseudocode: provider-specific; not original source


/* Library Function - Single Match
    protected: void __thiscall CMFCCustomColorsPropertyPage::OnColour(void)
   
   Library: Visual Studio 2015 Release */

void __thiscall CMFCCustomColorsPropertyPage::OnColour(CMFCCustomColorsPropertyPage *this)

{
  uint uVar1;
  double local_1c;
  double local_14;
  double local_c;
  
  uVar1 = *(uint *)(this + 0x238);
  *(uint *)(this + 0x268) = uVar1 & 0xff;
  *(undefined8 *)(this + 0x160) = *(undefined8 *)(this + 0x230);
  *(uint *)(this + 0x270) = uVar1 >> 8 & 0xff;
  *(undefined8 *)(this + 0x158) = *(undefined8 *)(this + 0x228);
  *(undefined4 *)(this + 0x284) = 1;
  *(uint *)(this + 0x26c) = uVar1 >> 0x10 & 0xff;
  InvalidateRect(*(HWND *)(this + 0xe8),(RECT *)0x0,1);
  CMFCColorPickerCtrl::GetHLS((CMFCColorPickerCtrl *)(this + 0x198),&local_1c,&local_14,&local_c);
  uVar1 = HLS2Int(local_1c);
  *(uint *)(this + 0x278) = uVar1;
  uVar1 = HLS2Int(local_14);
  *(uint *)(this + 0x274) = uVar1;
  uVar1 = HLS2Int(local_c);
  *(uint *)(this + 0x27c) = uVar1;
  FUN_004649d1(local_1c,local_14,local_c);
  FUN_0051f520();
  CMFCColorDialog::SetPageOne
            (*(CMFCColorDialog **)(this + 0xc0),(uchar)this[0x268],(uchar)this[0x270],
             (uchar)this[0x26c]);
  FUN_00432070();
  *(undefined4 *)(this + 0x284) = 0;
  return;
}

