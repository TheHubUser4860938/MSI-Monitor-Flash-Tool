// rea decompile_all
// name: CMFCColorButton::RebuildPalette
// address: 0x532393
// body: available
// range: 0x532393-0x532481 inclusive
// non_contiguous: false
// provider: Ghidra 12.1.2 (ghidra)
// analysis_profile: ac6d50be2cdf54f7005df47d1ed7e7ef55dee595681eb1b7c2e0b00d70cd697d
// limitations: The session serves operations only after Ghidra reports default auto-analysis complete; incomplete analysis does not expose partial results.; The imported Program and temporary project are ephemeral and deleted on close. Annotation operations edit session database metadata; original executable bytes are never written.; Cancelling an active Ghidra request terminates its ephemeral database and discards session annotations. The selected target remains open; the next provider query imports the original artifact again.; Default-space addresses use lowercase 0x-prefixed hexadecimal; other address spaces use <percent-encoded-space>:0x<hex>.; The Ghidra Program references PDB ISPToolForMsi.pdb (GUID b8f2ac8f-1d6f-438d-800f-ed4a14426ac6, age (hex) 1, signature unknown, version RSDS); Ghidra reports load state unknown. Original names and types may be missing; an empty name search does not prove a procedure is absent. Use list_procedures and address-based analysis to inspect recovered functions. REA does not admit a caller-selected PDB companion.; This session uses Ghidra 12.1.2. The bridge is verified against 12.1.4; other 12.1.x builds are accepted and the observed version is reported.; Pseudocode is Ghidra decompiler output, not original source and not text-equivalent to Hopper output.; External functions and functions without an analyzable body return null; other decompiler failures remain explicit.
// pseudocode: provider-specific; not original source


/* WARNING: Function: __EH_prolog3 replaced with injection: EH_prolog3 */
/* WARNING: Function: __EH_epilog3 replaced with injection: EH_epilog3 */
/* Library Function - Single Match
    protected: void __thiscall CMFCColorButton::RebuildPalette(class CPalette *)
   
   Library: Visual Studio 2015 Release */

void __thiscall CMFCColorButton::RebuildPalette(CMFCColorButton *this,CPalette *param_1)

{
  code *pcVar1;
  CMenu *this_00;
  undefined4 *puVar2;
  LOGPALETTE *plpal;
  UINT cEntries;
  HPALETTE pHVar3;
  CClientDC local_28 [4];
  HDC local_24;
  undefined4 *local_14;
  undefined4 local_8;
  undefined4 uStack_4;
  
  uStack_4 = 0x18;
  local_8 = 0x53239f;
  if (*(int **)(this + 0x800) != (int *)0x0) {
    pcVar1 = *(code **)(**(int **)(this + 0x800) + 4);
    guard_check_icall(1);
    (*pcVar1)();
  }
  local_14 = (undefined4 *)FUN_00416408(8);
  if (local_14 == (undefined4 *)0x0) {
    puVar2 = (undefined4 *)0x0;
  }
  else {
    local_14[1] = 0;
    *local_14 = CPalette::vftable;
    puVar2 = local_14;
  }
  *(undefined4 **)(this + 0x800) = puVar2;
  CClientDC::CClientDC(local_28,(CWnd *)this);
  local_8 = 0;
  if (param_1 == (CPalette *)0x0) {
    plpal = (LOGPALETTE *)FUN_00416444(0x408);
    GetSystemPaletteEntries(local_24,0,0x100,plpal->palPalEntry);
    plpal->palVersion = 0x300;
    plpal->palNumEntries = 0x100;
  }
  else {
    cEntries = CPalette::GetEntryCount(param_1);
    plpal = (LOGPALETTE *)FUN_00416444(cEntries * 4 + 8);
    GetPaletteEntries(*(HPALETTE *)(param_1 + 4),0,cEntries,plpal->palPalEntry);
    plpal->palNumEntries = (WORD)cEntries;
    plpal->palVersion = 0x300;
  }
  this_00 = *(CMenu **)(this + 0x800);
  pHVar3 = CreatePalette(plpal);
  CMenu::Attach(this_00,(HMENU__ *)pHVar3);
  FID_conflict__free(plpal);
  CClientDC::~CClientDC(local_28);
  return;
}

