// rea decompile_all
// name: CMFCToolBarFontComboBox::RebuildFonts
// address: 0x558e62
// body: available
// range: 0x558e62-0x558f2b inclusive
// non_contiguous: false
// provider: Ghidra 12.1.2 (ghidra)
// analysis_profile: ac6d50be2cdf54f7005df47d1ed7e7ef55dee595681eb1b7c2e0b00d70cd697d
// limitations: The session serves operations only after Ghidra reports default auto-analysis complete; incomplete analysis does not expose partial results.; The imported Program and temporary project are ephemeral and deleted on close. Annotation operations edit session database metadata; original executable bytes are never written.; Cancelling an active Ghidra request terminates its ephemeral database and discards session annotations. The selected target remains open; the next provider query imports the original artifact again.; Default-space addresses use lowercase 0x-prefixed hexadecimal; other address spaces use <percent-encoded-space>:0x<hex>.; Ghidra Listing reports a terminal call at 0x558eeb to 0x429127 FUN_00429127 (external=false, thunk=false, hasNoReturn=true); fallthrough is excluded by Ghidra's flow model. This records Ghidra's FunctionManager flag, not an independent verification that the callee cannot return.; The Ghidra Program references PDB ISPToolForMsi.pdb (GUID b8f2ac8f-1d6f-438d-800f-ed4a14426ac6, age (hex) 1, signature unknown, version RSDS); Ghidra reports load state unknown. Original names and types may be missing; an empty name search does not prove a procedure is absent. Use list_procedures and address-based analysis to inspect recovered functions. REA does not admit a caller-selected PDB companion.; This session uses Ghidra 12.1.2. The bridge is verified against 12.1.4; other 12.1.x builds are accepted and the observed version is reported.; Pseudocode is Ghidra decompiler output, not original source and not text-equivalent to Hopper output.; External functions and functions without an analyzable body return null; other decompiler failures remain explicit.
// pseudocode: provider-specific; not original source


/* WARNING: Function: __EH_prolog3_GS replaced with injection: EH_prolog3 */
/* Library Function - Single Match
    protected: void __thiscall CMFCToolBarFontComboBox::RebuildFonts(void)
   
   Library: Visual Studio 2015 Release */

void __thiscall CMFCToolBarFontComboBox::RebuildFonts(CMFCToolBarFontComboBox *this)

{
  int iVar1;
  HDC__ *hdc;
  undefined **local_174 [42];
  undefined4 local_cc;
  CWindowDC local_84 [4];
  HDC local_80;
  tagLOGFONTW local_70;
  undefined4 local_8;
  undefined4 uStack_4;
  
  uStack_4 = 0x164;
  local_8 = 0x558e71;
  CWindowDC::CWindowDC(local_84,(CWnd *)0x0);
  local_8 = 0;
  _memset(&local_70,0,0x5c);
  local_70.lfCharSet = *(BYTE *)(this + 0xf8);
  EnumFontFamiliesExW(local_80,&local_70,(FONTENUMPROCW)&LAB_00558d34,(LPARAM)this,0);
  CPrintDialog::CPrintDialog((CPrintDialog *)local_174,0,0x14000c,(CWnd *)0x0);
  local_8 = CONCAT31(local_8._1_3_,1);
  AfxGetModuleState();
  iVar1 = FUN_0055ab14(local_cc);
  if (iVar1 != 0) {
    hdc = CPrintDialog::CreatePrinterDC((CPrintDialog *)local_174);
    if (hdc == (HDC__ *)0x0) {
                    /* WARNING: Subroutine does not return */
      FUN_00429127();
    }
    EnumFontFamiliesExW(hdc,&local_70,(FONTENUMPROCW)&LAB_00558cc5,(LPARAM)this,0);
    DeleteObject(hdc);
  }
  local_174[0] = CCommonDialog::vftable;
  CDialog::~CDialog((CDialog *)local_174);
  CWindowDC::~CWindowDC(local_84);
  FUN_0055bae6();
  return;
}

