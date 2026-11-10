// rea decompile_all
// name: CMFCVisualManager::GetRibbonSliderColors
// address: 0x1008a21d
// body: available
// range: 0x1008a21d-0x1008a26e inclusive
// non_contiguous: false
// provider: Ghidra 12.1.2 (ghidra)
// analysis_profile: b075844f08879296d957518397cd0ddda73db81dce53d00d3f0e702766fc2af6
// limitations: The session serves operations only after Ghidra reports default auto-analysis complete; incomplete analysis does not expose partial results.; The imported Program and temporary project are ephemeral and deleted on close. Annotation operations edit session database metadata; original executable bytes are never written.; Cancelling an active Ghidra request terminates its ephemeral database and discards session annotations. The selected target remains open; the next provider query imports the original artifact again.; Default-space addresses use lowercase 0x-prefixed hexadecimal; other address spaces use <percent-encoded-space>:0x<hex>.; The Ghidra Program references PDB Comm_Aux.pdb (GUID ba7920cc-daa3-4461-a102-1f8f66c67a2a, age (hex) 1, signature unknown, version RSDS); Ghidra reports load state unknown. Original names and types may be missing; an empty name search does not prove a procedure is absent. Use list_procedures and address-based analysis to inspect recovered functions. REA does not admit a caller-selected PDB companion.; This session uses Ghidra 12.1.2. The bridge is verified against 12.1.4; other 12.1.x builds are accepted and the observed version is reported.; Pseudocode is Ghidra decompiler output, not original source and not text-equivalent to Hopper output.; External functions and functions without an analyzable body return null; other decompiler failures remain explicit.
// pseudocode: provider-specific; not original source


/* Library Function - Single Match
    public: virtual void __thiscall CMFCVisualManager::GetRibbonSliderColors(class CMFCRibbonSlider
   *,int,int,int,unsigned long &,unsigned long &)
   
   Libraries: Visual Studio 2012 Release, Visual Studio 2015 Release */

void __thiscall
CMFCVisualManager::GetRibbonSliderColors
          (CMFCVisualManager *this,CMFCRibbonSlider *param_1,int param_2,int param_3,int param_4,
          ulong *param_5,ulong *param_6)

{
  AFX_GLOBAL_DATA *pAVar1;
  ulong uVar2;
  
  pAVar1 = GetGlobalData();
  if (param_4 == 0) {
    uVar2 = *(ulong *)(pAVar1 + 0x60);
  }
  else {
    uVar2 = *(ulong *)(pAVar1 + 0x58);
  }
  *param_5 = uVar2;
  if (param_3 == 0) {
    if (param_2 != 0) {
      pAVar1 = GetGlobalData();
      uVar2 = *(ulong *)(pAVar1 + 0x5c);
      goto LAB_1008a266;
    }
  }
  else if (param_2 != 0) {
    pAVar1 = GetGlobalData();
    uVar2 = *(ulong *)(pAVar1 + 0x58);
    goto LAB_1008a266;
  }
  pAVar1 = GetGlobalData();
  uVar2 = *(ulong *)(pAVar1 + 0x54);
LAB_1008a266:
  *param_6 = uVar2;
  return;
}

