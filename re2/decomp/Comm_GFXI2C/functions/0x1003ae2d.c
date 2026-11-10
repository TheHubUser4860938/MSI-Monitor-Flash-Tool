// rea decompile_all
// name: CWinApp::ExitInstance
// address: 0x1003ae2d
// body: available
// range: 0x1003ae2d-0x1003ae8f inclusive
// non_contiguous: false
// provider: Ghidra 12.1.2 (ghidra)
// analysis_profile: b075844f08879296d957518397cd0ddda73db81dce53d00d3f0e702766fc2af6
// limitations: The session serves operations only after Ghidra reports default auto-analysis complete; incomplete analysis does not expose partial results.; The imported Program and temporary project are ephemeral and deleted on close. Annotation operations edit session database metadata; original executable bytes are never written.; Cancelling an active Ghidra request terminates its ephemeral database and discards session annotations. The selected target remains open; the next provider query imports the original artifact again.; Default-space addresses use lowercase 0x-prefixed hexadecimal; other address spaces use <percent-encoded-space>:0x<hex>.; The Ghidra Program references PDB Comm_GFXI2C.pdb (GUID d304cc6d-b3ee-4851-b468-0ab5e385ca92, age (hex) 1, signature unknown, version RSDS); Ghidra reports load state unknown. Original names and types may be missing; an empty name search does not prove a procedure is absent. Use list_procedures and address-based analysis to inspect recovered functions. REA does not admit a caller-selected PDB companion.; This session uses Ghidra 12.1.2. The bridge is verified against 12.1.4; other 12.1.x builds are accepted and the observed version is reported.; Pseudocode is Ghidra decompiler output, not original source and not text-equivalent to Hopper output.; External functions and functions without an analyzable body return null; other decompiler failures remain explicit.
// pseudocode: provider-specific; not original source


/* Library Function - Single Match
    public: virtual int __thiscall CWinApp::ExitInstance(void)
   
   Library: Visual Studio 2008 Release */

int __thiscall CWinApp::ExitInstance(CWinApp *this)

{
  AFX_MODULE_STATE *pAVar1;
  _AFX_THREAD_STATE *p_Var2;
  int iVar3;
  
  if ((*(int *)(this + 0x8c) == 0) ||
     ((iVar3 = *(int *)(*(int *)(this + 0x8c) + 0x14), iVar3 != 6 && (iVar3 != 5)))) {
    pAVar1 = AfxGetModuleState();
    if (pAVar1[0x14] == (AFX_MODULE_STATE)0x0) {
      SaveStdProfileSettings(this);
    }
  }
  if (*(code **)(this + 0x9c) != (code *)0x0) {
    (**(code **)(this + 0x9c))();
  }
  if (*(HMODULE *)(this + 0x7c) != (HMODULE)0x0) {
    FreeLibrary(*(HMODULE *)(this + 0x7c));
    *(undefined4 *)(this + 0x7c) = 0;
  }
  iVar3 = 0;
  p_Var2 = FUN_1003c9a4();
  if (p_Var2 != (_AFX_THREAD_STATE *)0x0) {
    p_Var2 = FUN_1003c9a4();
    iVar3 = *(int *)(p_Var2 + 8);
  }
  return iVar3;
}

