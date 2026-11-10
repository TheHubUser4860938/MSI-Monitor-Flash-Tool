// rea decompile_all
// name: CUserTool::LoadDefaultIcon
// address: 0x100f1a7a
// body: available
// range: 0x100f1a7a-0x100f1ad3 inclusive
// non_contiguous: false
// provider: Ghidra 12.1.2 (ghidra)
// analysis_profile: b075844f08879296d957518397cd0ddda73db81dce53d00d3f0e702766fc2af6
// limitations: The session serves operations only after Ghidra reports default auto-analysis complete; incomplete analysis does not expose partial results.; The imported Program and temporary project are ephemeral and deleted on close. Annotation operations edit session database metadata; original executable bytes are never written.; Cancelling an active Ghidra request terminates its ephemeral database and discards session annotations. The selected target remains open; the next provider query imports the original artifact again.; Default-space addresses use lowercase 0x-prefixed hexadecimal; other address spaces use <percent-encoded-space>:0x<hex>.; The Ghidra Program references PDB WinOperateCScaler.pdb (GUID a6737962-efea-4805-8ae6-1fc1ef126554, age (hex) 1, signature unknown, version RSDS); Ghidra reports load state unknown. Original names and types may be missing; an empty name search does not prove a procedure is absent. Use list_procedures and address-based analysis to inspect recovered functions. REA does not admit a caller-selected PDB companion.; This session uses Ghidra 12.1.2. The bridge is verified against 12.1.4; other 12.1.x builds are accepted and the observed version is reported.; Pseudocode is Ghidra decompiler output, not original source and not text-equivalent to Hopper output.; External functions and functions without an analyzable body return null; other decompiler failures remain explicit.
// pseudocode: provider-specific; not original source


/* Library Function - Single Match
    protected: virtual struct HICON__ * __thiscall CUserTool::LoadDefaultIcon(void)
   
   Library: Visual Studio 2015 Release */

HICON__ * __thiscall CUserTool::LoadDefaultIcon(CUserTool *this)

{
  HINSTANCE hInst;
  AFX_GLOBAL_DATA *pAVar1;
  AFX_MODULE_STATE *pAVar2;
  HANDLE pvVar3;
  int cy;
  UINT fuLoad;
  
  pAVar1 = GetGlobalData();
  if (*(int *)(pAVar1 + 0x108) == 0) {
    pAVar2 = AfxGetModuleState();
    fuLoad = 0x8000;
    hInst = *(HINSTANCE *)(pAVar2 + 0xc);
    pAVar1 = GetGlobalData();
    cy = *(int *)(pAVar1 + 0x118);
    pAVar1 = GetGlobalData();
    pvVar3 = LoadImageW(hInst,(LPCWSTR)0x4223,1,*(int *)(pAVar1 + 0x114),cy,fuLoad);
    pAVar1 = GetGlobalData();
    *(HANDLE *)(pAVar1 + 0x108) = pvVar3;
  }
  pAVar1 = GetGlobalData();
  return *(HICON__ **)(pAVar1 + 0x108);
}

