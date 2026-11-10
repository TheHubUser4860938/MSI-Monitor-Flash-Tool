// rea decompile_all
// name: CMFCToolBar::GetHotTextColor
// address: 0x1006a79a
// body: available
// range: 0x1006a79a-0x1006a7ac inclusive
// non_contiguous: false
// provider: Ghidra 12.1.2 (ghidra)
// analysis_profile: b075844f08879296d957518397cd0ddda73db81dce53d00d3f0e702766fc2af6
// limitations: The session serves operations only after Ghidra reports default auto-analysis complete; incomplete analysis does not expose partial results.; The imported Program and temporary project are ephemeral and deleted on close. Annotation operations edit session database metadata; original executable bytes are never written.; Cancelling an active Ghidra request terminates its ephemeral database and discards session annotations. The selected target remains open; the next provider query imports the original artifact again.; Default-space addresses use lowercase 0x-prefixed hexadecimal; other address spaces use <percent-encoded-space>:0x<hex>.; The Ghidra Program references PDB WinOperateCScaler.pdb (GUID a6737962-efea-4805-8ae6-1fc1ef126554, age (hex) 1, signature unknown, version RSDS); Ghidra reports load state unknown. Original names and types may be missing; an empty name search does not prove a procedure is absent. Use list_procedures and address-based analysis to inspect recovered functions. REA does not admit a caller-selected PDB companion.; This session uses Ghidra 12.1.2. The bridge is verified against 12.1.4; other 12.1.x builds are accepted and the observed version is reported.; Pseudocode is Ghidra decompiler output, not original source and not text-equivalent to Hopper output.; External functions and functions without an analyzable body return null; other decompiler failures remain explicit.
// pseudocode: provider-specific; not original source


/* Library Function - Single Match
    public: static unsigned long __stdcall CMFCToolBar::GetHotTextColor(void)
   
   Library: Visual Studio 2015 Release */

ulong CMFCToolBar::GetHotTextColor(void)

{
  AFX_GLOBAL_DATA *pAVar1;
  ulong uVar2;
  
  uVar2 = DAT_102015b8;
  if (DAT_102015b8 == 0xffffffff) {
    pAVar1 = GetGlobalData();
    uVar2 = *(ulong *)(pAVar1 + 0x28);
  }
  return uVar2;
}

