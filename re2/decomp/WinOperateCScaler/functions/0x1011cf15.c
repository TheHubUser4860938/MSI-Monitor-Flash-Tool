// rea decompile_all
// name: CMFCVisualManagerOffice2003::GetSmartDockingBaseGuideColors
// address: 0x1011cf15
// body: available
// range: 0x1011cf15-0x1011cf67 inclusive
// non_contiguous: false
// provider: Ghidra 12.1.2 (ghidra)
// analysis_profile: b075844f08879296d957518397cd0ddda73db81dce53d00d3f0e702766fc2af6
// limitations: The session serves operations only after Ghidra reports default auto-analysis complete; incomplete analysis does not expose partial results.; The imported Program and temporary project are ephemeral and deleted on close. Annotation operations edit session database metadata; original executable bytes are never written.; Cancelling an active Ghidra request terminates its ephemeral database and discards session annotations. The selected target remains open; the next provider query imports the original artifact again.; Default-space addresses use lowercase 0x-prefixed hexadecimal; other address spaces use <percent-encoded-space>:0x<hex>.; The Ghidra Program references PDB WinOperateCScaler.pdb (GUID a6737962-efea-4805-8ae6-1fc1ef126554, age (hex) 1, signature unknown, version RSDS); Ghidra reports load state unknown. Original names and types may be missing; an empty name search does not prove a procedure is absent. Use list_procedures and address-based analysis to inspect recovered functions. REA does not admit a caller-selected PDB companion.; This session uses Ghidra 12.1.2. The bridge is verified against 12.1.4; other 12.1.x builds are accepted and the observed version is reported.; Pseudocode is Ghidra decompiler output, not original source and not text-equivalent to Hopper output.; External functions and functions without an analyzable body return null; other decompiler failures remain explicit.
// pseudocode: provider-specific; not original source


/* Library Function - Single Match
    public: virtual void __thiscall
   CMFCVisualManagerOffice2003::GetSmartDockingBaseGuideColors(unsigned long &,unsigned long &)
   
   Libraries: Visual Studio 2012 Release, Visual Studio 2015 Release */

void __thiscall
CMFCVisualManagerOffice2003::GetSmartDockingBaseGuideColors
          (CMFCVisualManagerOffice2003 *this,ulong *param_1,ulong *param_2)

{
  AFX_GLOBAL_DATA *pAVar1;
  int iVar2;
  
  pAVar1 = GetGlobalData();
  if (8 < *(int *)(pAVar1 + 0x1ac)) {
    pAVar1 = GetGlobalData();
    iVar2 = AFX_GLOBAL_DATA::IsHighContrastMode(pAVar1);
    if (iVar2 == 0) {
      *param_1 = 0xe4e4e4;
      *param_2 = 0xb5b5b5;
      return;
    }
  }
  pAVar1 = GetGlobalData();
  *param_1 = *(ulong *)(pAVar1 + 0x54);
  pAVar1 = GetGlobalData();
  *param_2 = *(ulong *)(pAVar1 + 0x58);
  return;
}

