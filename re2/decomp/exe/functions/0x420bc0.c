// rea decompile_all
// name: CMFCVisualManager::RibbonCategoryColorToRGB
// address: 0x420bc0
// body: available
// range: 0x420bc0-0x420c98 inclusive
// non_contiguous: false
// provider: Ghidra 12.1.2 (ghidra)
// analysis_profile: ac6d50be2cdf54f7005df47d1ed7e7ef55dee595681eb1b7c2e0b00d70cd697d
// limitations: The session serves operations only after Ghidra reports default auto-analysis complete; incomplete analysis does not expose partial results.; The imported Program and temporary project are ephemeral and deleted on close. Annotation operations edit session database metadata; original executable bytes are never written.; Cancelling an active Ghidra request terminates its ephemeral database and discards session annotations. The selected target remains open; the next provider query imports the original artifact again.; Default-space addresses use lowercase 0x-prefixed hexadecimal; other address spaces use <percent-encoded-space>:0x<hex>.; The Ghidra Program references PDB ISPToolForMsi.pdb (GUID b8f2ac8f-1d6f-438d-800f-ed4a14426ac6, age (hex) 1, signature unknown, version RSDS); Ghidra reports load state unknown. Original names and types may be missing; an empty name search does not prove a procedure is absent. Use list_procedures and address-based analysis to inspect recovered functions. REA does not admit a caller-selected PDB companion.; This session uses Ghidra 12.1.2. The bridge is verified against 12.1.4; other 12.1.x builds are accepted and the observed version is reported.; Pseudocode is Ghidra decompiler output, not original source and not text-equivalent to Hopper output.; External functions and functions without an analyzable body return null; other decompiler failures remain explicit.
// pseudocode: provider-specific; not original source


/* Library Function - Single Match
    public: virtual unsigned long __thiscall CMFCVisualManager::RibbonCategoryColorToRGB(enum
   AFX_RibbonCategoryColor)
   
   Library: Visual Studio 2015 Release */

ulong __thiscall
CMFCVisualManager::RibbonCategoryColorToRGB(CMFCVisualManager *this,AFX_RibbonCategoryColor param_1)

{
  AFX_GLOBAL_DATA *pAVar1;
  int iVar2;
  
  pAVar1 = GetGlobalData();
  if (8 < *(int *)(pAVar1 + 0x1ac)) {
    pAVar1 = GetGlobalData();
    iVar2 = AFX_GLOBAL_DATA::IsHighContrastMode(pAVar1);
    if (iVar2 == 0) {
      if (param_1 == 1) {
        return 0xa0a0ff;
      }
      if (param_1 == 2) {
        return 0x37bdef;
      }
      if (param_1 == 3) {
        return 0x1be5fd;
      }
      if (param_1 != 4) {
        if (param_1 == 5) {
          return 0xc4b580;
        }
        if (param_1 != 6) {
          if (param_1 != 7) {
            return 0xffffffff;
          }
          return 0xd1b2d6;
        }
        return 0xe0a372;
      }
      return 0x59be71;
    }
  }
  if (param_1 == 1) {
    return 0xff;
  }
  if (param_1 == 2) {
    return 0x80ff;
  }
  if (param_1 == 3) {
    return 0xffff;
  }
  if (param_1 != 4) {
    if (param_1 == 5) {
      return 0xff0000;
    }
    if (param_1 != 6) {
      if (param_1 != 7) {
        return 0xffffffff;
      }
      return 0xff00ff;
    }
    return 0x800000;
  }
  return 0xff00;
}

