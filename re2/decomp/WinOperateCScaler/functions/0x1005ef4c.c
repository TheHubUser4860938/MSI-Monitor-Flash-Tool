// rea decompile_all
// name: CMFCVisualManager::CMFCVisualManager
// address: 0x1005ef4c
// body: available
// range: 0x1005ef4c-0x1005f058 inclusive
// non_contiguous: false
// provider: Ghidra 12.1.2 (ghidra)
// analysis_profile: b075844f08879296d957518397cd0ddda73db81dce53d00d3f0e702766fc2af6
// limitations: The session serves operations only after Ghidra reports default auto-analysis complete; incomplete analysis does not expose partial results.; The imported Program and temporary project are ephemeral and deleted on close. Annotation operations edit session database metadata; original executable bytes are never written.; Cancelling an active Ghidra request terminates its ephemeral database and discards session annotations. The selected target remains open; the next provider query imports the original artifact again.; Default-space addresses use lowercase 0x-prefixed hexadecimal; other address spaces use <percent-encoded-space>:0x<hex>.; The Ghidra Program references PDB WinOperateCScaler.pdb (GUID a6737962-efea-4805-8ae6-1fc1ef126554, age (hex) 1, signature unknown, version RSDS); Ghidra reports load state unknown. Original names and types may be missing; an empty name search does not prove a procedure is absent. Use list_procedures and address-based analysis to inspect recovered functions. REA does not admit a caller-selected PDB companion.; This session uses Ghidra 12.1.2. The bridge is verified against 12.1.4; other 12.1.x builds are accepted and the observed version is reported.; Pseudocode is Ghidra decompiler output, not original source and not text-equivalent to Hopper output.; External functions and functions without an analyzable body return null; other decompiler failures remain explicit.
// pseudocode: provider-specific; not original source


/* WARNING: Function: __EH_prolog3 replaced with injection: EH_prolog3 */
/* WARNING: Function: __EH_epilog3 replaced with injection: EH_epilog3 */
/* Library Function - Single Match
    public: __thiscall CMFCVisualManager::CMFCVisualManager(int)
   
   Library: Visual Studio 2015 Release */

CMFCVisualManager * __thiscall
CMFCVisualManager::CMFCVisualManager(CMFCVisualManager *this,int param_1)

{
  AFX_GLOBAL_DATA *this_00;
  
  CMFCBaseVisualManager::CMFCBaseVisualManager((CMFCBaseVisualManager *)this);
  *(undefined ***)this = vftable;
  *(undefined4 *)(this + 0xac) = 0;
  *(undefined4 *)(this + 0xb0) = 0;
  *(undefined4 *)(this + 0xb4) = 0;
  *(int *)(this + 0x68) = param_1;
  if ((param_1 == 0) && (DAT_10209c98 == (CMFCVisualManager *)0x0)) {
    DAT_10209c98 = this;
  }
  *(undefined4 *)(this + 0xa8) = 0xffffffff;
  *(undefined4 *)(this + 0x50) = 0;
  *(undefined4 *)(this + 0x7c) = 6;
  *(undefined4 *)(this + 0x54) = 0;
  *(undefined4 *)(this + 0x58) = 1;
  *(undefined4 *)(this + 0x5c) = 0;
  *(undefined4 *)(this + 0x60) = 1;
  *(undefined4 *)(this + 0x88) = 0xf;
  *(undefined4 *)(this + 0x8c) = 0x19;
  *(undefined4 *)(this + 0x90) = 0xd;
  *(undefined4 *)(this + 0x94) = 7;
  *(undefined4 *)(this + 0x9c) = 5;
  *(undefined4 *)(this + 0xa0) = 4;
  *(undefined4 *)(this + 0x6c) = 1;
  *(undefined4 *)(this + 0x70) = 0;
  *(undefined4 *)(this + 0xa4) = 2;
  *(undefined4 *)(this + 0x78) = 1;
  *(undefined4 *)(this + 0x74) = 0;
  *(undefined4 *)(this + 100) = 0;
  *(undefined4 *)(this + 0xac) = 0;
  *(undefined4 *)(this + 0xb0) = 0;
  *(undefined4 *)(this + 0x80) = 0xc;
  *(undefined4 *)(this + 0x84) = 0xc;
  *(undefined4 *)(this + 0x98) = 0xc;
  if (param_1 == 0) {
    DAT_1020b52c = 1;
    DAT_1020b530 = 0;
    DAT_10201a30 = 1;
    this_00 = GetGlobalData();
    AFX_GLOBAL_DATA::UpdateSysColors(this_00);
  }
  return this;
}

