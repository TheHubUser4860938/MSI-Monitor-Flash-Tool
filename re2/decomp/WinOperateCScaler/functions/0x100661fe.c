// rea decompile_all
// name: CMFCVisualManager::OnFillHeaderCtrlBackground
// address: 0x100661fe
// body: available
// range: 0x100661fe-0x10066243 inclusive
// non_contiguous: false
// provider: Ghidra 12.1.2 (ghidra)
// analysis_profile: b075844f08879296d957518397cd0ddda73db81dce53d00d3f0e702766fc2af6
// limitations: The session serves operations only after Ghidra reports default auto-analysis complete; incomplete analysis does not expose partial results.; The imported Program and temporary project are ephemeral and deleted on close. Annotation operations edit session database metadata; original executable bytes are never written.; Cancelling an active Ghidra request terminates its ephemeral database and discards session annotations. The selected target remains open; the next provider query imports the original artifact again.; Default-space addresses use lowercase 0x-prefixed hexadecimal; other address spaces use <percent-encoded-space>:0x<hex>.; The Ghidra Program references PDB WinOperateCScaler.pdb (GUID a6737962-efea-4805-8ae6-1fc1ef126554, age (hex) 1, signature unknown, version RSDS); Ghidra reports load state unknown. Original names and types may be missing; an empty name search does not prove a procedure is absent. Use list_procedures and address-based analysis to inspect recovered functions. REA does not admit a caller-selected PDB companion.; This session uses Ghidra 12.1.2. The bridge is verified against 12.1.4; other 12.1.x builds are accepted and the observed version is reported.; Pseudocode is Ghidra decompiler output, not original source and not text-equivalent to Hopper output.; External functions and functions without an analyzable body return null; other decompiler failures remain explicit.
// pseudocode: provider-specific; not original source


/* Library Function - Single Match
    public: virtual void __thiscall CMFCVisualManager::OnFillHeaderCtrlBackground(class
   CMFCHeaderCtrl *,class CDC *,class CRect)
   
   Library: Visual Studio 2015 Release */

void __thiscall
CMFCVisualManager::OnFillHeaderCtrlBackground(undefined4 param_1_00,int param_1,int param_2)

{
  AFX_GLOBAL_DATA *pAVar1;
  HBRUSH hbr;
  
  hbr = (HBRUSH)0x0;
  if (*(int *)(param_1 + 0xac) == 0) {
    pAVar1 = GetGlobalData();
    pAVar1 = pAVar1 + 0xd0;
  }
  else {
    pAVar1 = GetGlobalData();
    pAVar1 = pAVar1 + 0x98;
  }
  if (pAVar1 != (AFX_GLOBAL_DATA *)0x0) {
    hbr = *(HBRUSH *)(pAVar1 + 4);
  }
  FillRect(*(HDC *)(param_2 + 4),(RECT *)&stack0x0000000c,hbr);
  return;
}

