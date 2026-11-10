// rea decompile_all
// name: CWinApp::ExitInstance
// address: 0x1004cc78
// body: available
// range: 0x1004cc78-0x1004ccea inclusive
// non_contiguous: false
// provider: Ghidra 12.1.2 (ghidra)
// analysis_profile: b075844f08879296d957518397cd0ddda73db81dce53d00d3f0e702766fc2af6
// limitations: The session serves operations only after Ghidra reports default auto-analysis complete; incomplete analysis does not expose partial results.; The imported Program and temporary project are ephemeral and deleted on close. Annotation operations edit session database metadata; original executable bytes are never written.; Cancelling an active Ghidra request terminates its ephemeral database and discards session annotations. The selected target remains open; the next provider query imports the original artifact again.; Default-space addresses use lowercase 0x-prefixed hexadecimal; other address spaces use <percent-encoded-space>:0x<hex>.; The Ghidra Program references PDB WinIspPlugIn.pdb (GUID d9f398c7-6c98-49a8-af25-a0659d5ad2f3, age (hex) 1, signature unknown, version RSDS); Ghidra reports load state unknown. Original names and types may be missing; an empty name search does not prove a procedure is absent. Use list_procedures and address-based analysis to inspect recovered functions. REA does not admit a caller-selected PDB companion.; This session uses Ghidra 12.1.2. The bridge is verified against 12.1.4; other 12.1.x builds are accepted and the observed version is reported.; Pseudocode is Ghidra decompiler output, not original source and not text-equivalent to Hopper output.; External functions and functions without an analyzable body return null; other decompiler failures remain explicit.
// pseudocode: provider-specific; not original source


/* Library Function - Single Match
    public: virtual int __thiscall CWinApp::ExitInstance(void)
   
   Library: Visual Studio 2015 Release */

int __thiscall CWinApp::ExitInstance(CWinApp *this)

{
  code *pcVar1;
  AFX_MODULE_STATE *pAVar2;
  int iVar3;
  int iVar4;
  
  iVar4 = *(int *)(this + 0x94);
  if ((iVar4 == 0) || ((*(int *)(iVar4 + 0x14) != 7 && (*(int *)(iVar4 + 0x14) != 6)))) {
    pAVar2 = AfxGetModuleState();
    if (pAVar2[0x14] == (AFX_MODULE_STATE)0x0) {
      SaveStdProfileSettings(this);
    }
  }
  AfxReleaseD2DRefs();
  pcVar1 = *(code **)(this + 0xa4);
  if (pcVar1 != (code *)0x0) {
    guard_check_icall();
    (*pcVar1)();
  }
  iVar4 = 0;
  if (*(HMODULE *)(this + 0x80) != (HMODULE)0x0) {
    FreeLibrary(*(HMODULE *)(this + 0x80));
    *(undefined4 *)(this + 0x80) = 0;
  }
  iVar3 = FUN_1004e04c();
  if (iVar3 != 0) {
    iVar4 = FUN_1004e04c();
    iVar4 = *(int *)(iVar4 + 8);
  }
  return iVar4;
}

