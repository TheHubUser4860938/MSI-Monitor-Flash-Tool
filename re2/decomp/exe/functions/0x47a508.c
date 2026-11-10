// rea decompile_all
// name: CMFCRibbonPanel::ScrollPalette
// address: 0x47a508
// body: available
// range: 0x47a508-0x47a5ac inclusive
// non_contiguous: false
// provider: Ghidra 12.1.2 (ghidra)
// analysis_profile: ac6d50be2cdf54f7005df47d1ed7e7ef55dee595681eb1b7c2e0b00d70cd697d
// limitations: The session serves operations only after Ghidra reports default auto-analysis complete; incomplete analysis does not expose partial results.; The imported Program and temporary project are ephemeral and deleted on close. Annotation operations edit session database metadata; original executable bytes are never written.; Cancelling an active Ghidra request terminates its ephemeral database and discards session annotations. The selected target remains open; the next provider query imports the original artifact again.; Default-space addresses use lowercase 0x-prefixed hexadecimal; other address spaces use <percent-encoded-space>:0x<hex>.; The Ghidra Program references PDB ISPToolForMsi.pdb (GUID b8f2ac8f-1d6f-438d-800f-ed4a14426ac6, age (hex) 1, signature unknown, version RSDS); Ghidra reports load state unknown. Original names and types may be missing; an empty name search does not prove a procedure is absent. Use list_procedures and address-based analysis to inspect recovered functions. REA does not admit a caller-selected PDB companion.; This session uses Ghidra 12.1.2. The bridge is verified against 12.1.4; other 12.1.x builds are accepted and the observed version is reported.; Pseudocode is Ghidra decompiler output, not original source and not text-equivalent to Hopper output.; External functions and functions without an analyzable body return null; other decompiler failures remain explicit.
// pseudocode: provider-specific; not original source


/* Library Function - Single Match
    protected: void __thiscall CMFCRibbonPanel::ScrollPalette(int,int)
   
   Library: Visual Studio 2015 Release */

void __thiscall CMFCRibbonPanel::ScrollPalette(CMFCRibbonPanel *this,int param_1,int param_2)

{
  int iVar1;
  int *piVar2;
  int iVar3;
  int iVar4;
  int dy;
  int local_c;
  
  dy = param_1;
  if (param_2 == 0) {
    dy = *(int *)(this + 0xb8) - param_1;
  }
  if (dy != 0) {
    if (param_2 != 0) {
      param_1 = *(int *)(this + 0xb8) - dy;
    }
    *(int *)(this + 0xb8) = param_1;
    local_c = 0;
    if (0 < *(int *)(this + 0x4e4)) {
      do {
        piVar2 = (int *)FUN_004ab4cd(local_c);
        iVar1 = *piVar2;
        iVar3 = FUN_0043970d(&PTR_s_CMFCRibbonLabel_005ca074);
        iVar4 = FUN_0043970d(&PTR_s_CMFCRibbonGalleryIcon_005c9d90);
        if ((iVar3 != 0) || (iVar4 != 0)) {
          OffsetRect((LPRECT)(iVar1 + 0x74),0,dy);
        }
        local_c = local_c + 1;
      } while (local_c < *(int *)(this + 0x4e4));
    }
  }
  return;
}

