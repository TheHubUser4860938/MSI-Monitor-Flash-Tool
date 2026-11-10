// rea decompile_all
// name: AfxWinInit
// address: 0x100441b9
// body: available
// range: 0x100441b9-0x1004423f inclusive
// non_contiguous: false
// provider: Ghidra 12.1.2 (ghidra)
// analysis_profile: b075844f08879296d957518397cd0ddda73db81dce53d00d3f0e702766fc2af6
// limitations: The session serves operations only after Ghidra reports default auto-analysis complete; incomplete analysis does not expose partial results.; The imported Program and temporary project are ephemeral and deleted on close. Annotation operations edit session database metadata; original executable bytes are never written.; Cancelling an active Ghidra request terminates its ephemeral database and discards session annotations. The selected target remains open; the next provider query imports the original artifact again.; Default-space addresses use lowercase 0x-prefixed hexadecimal; other address spaces use <percent-encoded-space>:0x<hex>.; The Ghidra Program references PDB Comm_GFXI2C.pdb (GUID d304cc6d-b3ee-4851-b468-0ab5e385ca92, age (hex) 1, signature unknown, version RSDS); Ghidra reports load state unknown. Original names and types may be missing; an empty name search does not prove a procedure is absent. Use list_procedures and address-based analysis to inspect recovered functions. REA does not admit a caller-selected PDB companion.; This session uses Ghidra 12.1.2. The bridge is verified against 12.1.4; other 12.1.x builds are accepted and the observed version is reported.; Pseudocode is Ghidra decompiler output, not original source and not text-equivalent to Hopper output.; External functions and functions without an analyzable body return null; other decompiler failures remain explicit.
// pseudocode: provider-specific; not original source


/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
/* Library Function - Single Match
    int __stdcall AfxWinInit(struct HINSTANCE__ *,struct HINSTANCE__ *,wchar_t *,int)
   
   Library: Visual Studio 2008 Release */

int AfxWinInit(HINSTANCE__ *param_1,HINSTANCE__ *param_2,wchar_t *param_3,int param_4)

{
  CWinApp *this;
  UINT UVar1;
  AFX_MODULE_STATE *pAVar2;
  HMODULE hModule;
  
  UVar1 = SetErrorMode(0);
  SetErrorMode(UVar1 | 0x8001);
  pAVar2 = AfxGetModuleState();
  *(HINSTANCE__ **)(pAVar2 + 8) = param_1;
  *(HINSTANCE__ **)(pAVar2 + 0xc) = param_1;
  AFX_MODULE_STATE::CreateActivationContext(pAVar2);
  pAVar2 = AfxGetModuleState();
  this = *(CWinApp **)(pAVar2 + 4);
  if (this != (CWinApp *)0x0) {
    *(wchar_t **)(this + 0x48) = param_3;
    *(int *)(this + 0x4c) = param_4;
    *(HINSTANCE__ **)(this + 0x44) = param_1;
    CWinApp::SetCurrentHandles(this);
  }
  pAVar2 = AfxGetModuleState();
  if (pAVar2[0x14] == (AFX_MODULE_STATE)0x0) {
    AfxInitThread();
  }
  hModule = GetModuleHandleW(L"user32.dll");
  if (hModule != (HMODULE)0x0) {
    _DAT_100685a4 = GetProcAddress(hModule,"NotifyWinEvent");
  }
  return 1;
}

