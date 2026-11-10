// rea decompile_all
// name: CMFCToolBarFontComboBox::RebuildFonts
// address: 0x100999c3
// body: available
// range: 0x100999c3-0x10099a8c inclusive
// non_contiguous: false
// provider: Ghidra 12.1.2 (ghidra)
// analysis_profile: b075844f08879296d957518397cd0ddda73db81dce53d00d3f0e702766fc2af6
// limitations: The session serves operations only after Ghidra reports default auto-analysis complete; incomplete analysis does not expose partial results.; The imported Program and temporary project are ephemeral and deleted on close. Annotation operations edit session database metadata; original executable bytes are never written.; Cancelling an active Ghidra request terminates its ephemeral database and discards session annotations. The selected target remains open; the next provider query imports the original artifact again.; Default-space addresses use lowercase 0x-prefixed hexadecimal; other address spaces use <percent-encoded-space>:0x<hex>.; Ghidra Listing reports a terminal call at 0x10099a4c to 0x1001d023 FUN_1001d023 (external=false, thunk=false, hasNoReturn=true); fallthrough is excluded by Ghidra's flow model. This records Ghidra's FunctionManager flag, not an independent verification that the callee cannot return.; The Ghidra Program references PDB WinOperateCScaler.pdb (GUID a6737962-efea-4805-8ae6-1fc1ef126554, age (hex) 1, signature unknown, version RSDS); Ghidra reports load state unknown. Original names and types may be missing; an empty name search does not prove a procedure is absent. Use list_procedures and address-based analysis to inspect recovered functions. REA does not admit a caller-selected PDB companion.; This session uses Ghidra 12.1.2. The bridge is verified against 12.1.4; other 12.1.x builds are accepted and the observed version is reported.; Pseudocode is Ghidra decompiler output, not original source and not text-equivalent to Hopper output.; External functions and functions without an analyzable body return null; other decompiler failures remain explicit.
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
  local_8 = 0x100999d2;
  CWindowDC::CWindowDC(local_84,(CWnd *)0x0);
  local_8 = 0;
  _memset(&local_70,0,0x5c);
  local_70.lfCharSet = *(BYTE *)(this + 0xf8);
  EnumFontFamiliesExW(local_80,&local_70,(FONTENUMPROCW)&LAB_10099895,(LPARAM)this,0);
  CPrintDialog::CPrintDialog((CPrintDialog *)local_174,0,0x14000c,(CWnd *)0x0);
  local_8 = CONCAT31(local_8._1_3_,1);
  AfxGetModuleState();
  iVar1 = FUN_10114e19(local_cc);
  if (iVar1 != 0) {
    hdc = CPrintDialog::CreatePrinterDC((CPrintDialog *)local_174);
    if (hdc == (HDC__ *)0x0) {
                    /* WARNING: Subroutine does not return */
      FUN_1001d023();
    }
    EnumFontFamiliesExW(hdc,&local_70,(FONTENUMPROCW)&LAB_10099826,(LPARAM)this,0);
    DeleteObject(hdc);
  }
  local_174[0] = CCommonDialog::vftable;
  CDialog::~CDialog((CDialog *)local_174);
  CWindowDC::~CWindowDC(local_84);
  FUN_10154478();
  return;
}

