// rea decompile_all
// name: CMFCColorDialog::RebuildPalette
// address: 0x1013eb0c
// body: available
// range: 0x1013eb0c-0x1013eb8e inclusive
// non_contiguous: false
// provider: Ghidra 12.1.2 (ghidra)
// analysis_profile: b075844f08879296d957518397cd0ddda73db81dce53d00d3f0e702766fc2af6
// limitations: The session serves operations only after Ghidra reports default auto-analysis complete; incomplete analysis does not expose partial results.; The imported Program and temporary project are ephemeral and deleted on close. Annotation operations edit session database metadata; original executable bytes are never written.; Cancelling an active Ghidra request terminates its ephemeral database and discards session annotations. The selected target remains open; the next provider query imports the original artifact again.; Default-space addresses use lowercase 0x-prefixed hexadecimal; other address spaces use <percent-encoded-space>:0x<hex>.; Ghidra Listing reports a terminal call at 0x1013eb2b to 0x1004a383 FUN_1004a383 (external=false, thunk=false, hasNoReturn=true); fallthrough is excluded by Ghidra's flow model. This records Ghidra's FunctionManager flag, not an independent verification that the callee cannot return.; The Ghidra Program references PDB WinIspPlugIn.pdb (GUID d9f398c7-6c98-49a8-af25-a0659d5ad2f3, age (hex) 1, signature unknown, version RSDS); Ghidra reports load state unknown. Original names and types may be missing; an empty name search does not prove a procedure is absent. Use list_procedures and address-based analysis to inspect recovered functions. REA does not admit a caller-selected PDB companion.; This session uses Ghidra 12.1.2. The bridge is verified against 12.1.4; other 12.1.x builds are accepted and the observed version is reported.; Pseudocode is Ghidra decompiler output, not original source and not text-equivalent to Hopper output.; External functions and functions without an analyzable body return null; other decompiler failures remain explicit.
// pseudocode: provider-specific; not original source


/* WARNING: Function: __EH_prolog3 replaced with injection: EH_prolog3 */
/* WARNING: Function: __EH_epilog3 replaced with injection: EH_epilog3 */
/* Library Function - Single Match
    protected: void __thiscall CMFCColorDialog::RebuildPalette(void)
   
   Library: Visual Studio 2015 Release */

void __thiscall CMFCColorDialog::RebuildPalette(CMFCColorDialog *this)

{
  CMenu *this_00;
  int iVar1;
  LOGPALETTE *plpal;
  HPALETTE pHVar2;
  CClientDC local_24 [4];
  HDC local_20;
  undefined4 local_8;
  undefined4 uStack_4;
  
  uStack_4 = 0x14;
  local_8 = 0x1013eb18;
  iVar1 = 0;
  if (*(int *)(this + 0xdc) != 0) {
    iVar1 = *(int *)(*(int *)(this + 0xdc) + 4);
  }
  if (iVar1 != 0) {
                    /* WARNING: Subroutine does not return */
    FUN_1004a383();
  }
  CClientDC::CClientDC(local_24,(CWnd *)this);
  local_8 = 0;
  plpal = (LOGPALETTE *)FUN_100491e5(0x408);
  plpal->palVersion = 0x300;
  plpal->palNumEntries = 0x100;
  GetSystemPaletteEntries(local_20,0,0x100,plpal->palPalEntry);
  this_00 = *(CMenu **)(this + 0xdc);
  pHVar2 = CreatePalette(plpal);
  CMenu::Attach(this_00,(HMENU__ *)pHVar2);
  FID_conflict__free(plpal);
  CClientDC::~CClientDC(local_24);
  return;
}

