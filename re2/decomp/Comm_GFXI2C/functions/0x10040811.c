// rea decompile_all
// name: _AfxInitCommonControls
// address: 0x10040811
// body: available
// range: 0x10040811-0x10040869 inclusive
// non_contiguous: false
// provider: Ghidra 12.1.2 (ghidra)
// analysis_profile: b075844f08879296d957518397cd0ddda73db81dce53d00d3f0e702766fc2af6
// limitations: The session serves operations only after Ghidra reports default auto-analysis complete; incomplete analysis does not expose partial results.; The imported Program and temporary project are ephemeral and deleted on close. Annotation operations edit session database metadata; original executable bytes are never written.; Cancelling an active Ghidra request terminates its ephemeral database and discards session annotations. The selected target remains open; the next provider query imports the original artifact again.; Default-space addresses use lowercase 0x-prefixed hexadecimal; other address spaces use <percent-encoded-space>:0x<hex>.; The Ghidra Program references PDB Comm_GFXI2C.pdb (GUID d304cc6d-b3ee-4851-b468-0ab5e385ca92, age (hex) 1, signature unknown, version RSDS); Ghidra reports load state unknown. Original names and types may be missing; an empty name search does not prove a procedure is absent. Use list_procedures and address-based analysis to inspect recovered functions. REA does not admit a caller-selected PDB companion.; This session uses Ghidra 12.1.2. The bridge is verified against 12.1.4; other 12.1.x builds are accepted and the observed version is reported.; Pseudocode is Ghidra decompiler output, not original source and not text-equivalent to Hopper output.; External functions and functions without an analyzable body return null; other decompiler failures remain explicit.
// pseudocode: provider-specific; not original source


/* Library Function - Single Match
    long __stdcall _AfxInitCommonControls(struct tagINITCOMMONCONTROLSEX *,long)
   
   Library: Visual Studio 2008 Release */

long _AfxInitCommonControls(tagINITCOMMONCONTROLSEX *param_1,long param_2)

{
  AFX_MODULE_STATE *pAVar1;
  int *piVar2;
  int iVar3;
  long lVar4;
  
  lVar4 = 0;
  pAVar1 = AfxGetModuleState();
  piVar2 = (int *)CComCtlWrapper::GetProcAddress_InitCommonControlsEx
                            ((CComCtlWrapper *)**(undefined4 **)(pAVar1 + 0x78));
  if (*piVar2 == 0) {
    if ((param_2 & 0x3fc0U) == param_2) {
      pAVar1 = AfxGetModuleState();
      CComCtlWrapper::_InitCommonControls((CComCtlWrapper *)**(undefined4 **)(pAVar1 + 0x78));
      lVar4 = 0x3fc0;
    }
  }
  else {
    iVar3 = AfxInitCommonControlsEx(param_1);
    if (iVar3 != 0) {
      lVar4 = param_2;
    }
  }
  return lVar4;
}

