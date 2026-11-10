// rea decompile_all
// name: CMFCToolBarImages::MapFromSysColor
// address: 0x1005ce39
// body: available
// range: 0x1005ce39-0x1005ceb7 inclusive
// non_contiguous: false
// provider: Ghidra 12.1.2 (ghidra)
// analysis_profile: b075844f08879296d957518397cd0ddda73db81dce53d00d3f0e702766fc2af6
// limitations: The session serves operations only after Ghidra reports default auto-analysis complete; incomplete analysis does not expose partial results.; The imported Program and temporary project are ephemeral and deleted on close. Annotation operations edit session database metadata; original executable bytes are never written.; Cancelling an active Ghidra request terminates its ephemeral database and discards session annotations. The selected target remains open; the next provider query imports the original artifact again.; Default-space addresses use lowercase 0x-prefixed hexadecimal; other address spaces use <percent-encoded-space>:0x<hex>.; The Ghidra Program references PDB WinOperateCScaler.pdb (GUID a6737962-efea-4805-8ae6-1fc1ef126554, age (hex) 1, signature unknown, version RSDS); Ghidra reports load state unknown. Original names and types may be missing; an empty name search does not prove a procedure is absent. Use list_procedures and address-based analysis to inspect recovered functions. REA does not admit a caller-selected PDB companion.; This session uses Ghidra 12.1.2. The bridge is verified against 12.1.4; other 12.1.x builds are accepted and the observed version is reported.; Pseudocode is Ghidra decompiler output, not original source and not text-equivalent to Hopper output.; External functions and functions without an analyzable body return null; other decompiler failures remain explicit.
// pseudocode: provider-specific; not original source


/* Library Function - Single Match
    public: static unsigned long __stdcall CMFCToolBarImages::MapFromSysColor(unsigned long,int)
   
   Library: Visual Studio 2015 Release */

ulong CMFCToolBarImages::MapFromSysColor(ulong param_1,int param_2)

{
  AFX_GLOBAL_DATA *this;
  ulong uVar1;
  int iVar2;
  int iVar3;
  
  iVar2 = 0;
  do {
    iVar3 = (&DAT_101b2e08)[iVar2 * 2];
    this = GetGlobalData();
    uVar1 = AFX_GLOBAL_DATA::GetColor(this,iVar3);
    if (param_2 == 0) {
      if (param_1 == uVar1) {
        return (&DAT_101b2e04)[iVar2 * 2];
      }
    }
    else if (param_1 == ((uVar1 >> 8 & 0xff | (uVar1 & 0xff) << 8) << 8 | uVar1 >> 0x10 & 0xff)) {
      return (uint)CONCAT21(CONCAT11(*(undefined1 *)(&DAT_101b2e04 + iVar2 * 2),
                                     *(undefined1 *)((int)&DAT_101b2e04 + iVar2 * 8 + 1)),
                            *(undefined1 *)((int)&DAT_101b2e04 + iVar2 * 8 + 2));
    }
    iVar2 = iVar2 + 1;
  } while (iVar2 < 4);
  return param_1;
}

