// rea decompile_all
// name: _AfxRegisterWithIcon
// address: 0x10057e7d
// body: available
// range: 0x10057e7d-0x10057ebe inclusive
// non_contiguous: false
// provider: Ghidra 12.1.2 (ghidra)
// analysis_profile: b075844f08879296d957518397cd0ddda73db81dce53d00d3f0e702766fc2af6
// limitations: The session serves operations only after Ghidra reports default auto-analysis complete; incomplete analysis does not expose partial results.; The imported Program and temporary project are ephemeral and deleted on close. Annotation operations edit session database metadata; original executable bytes are never written.; Cancelling an active Ghidra request terminates its ephemeral database and discards session annotations. The selected target remains open; the next provider query imports the original artifact again.; Default-space addresses use lowercase 0x-prefixed hexadecimal; other address spaces use <percent-encoded-space>:0x<hex>.; The Ghidra Program references PDB WinIspPlugIn.pdb (GUID d9f398c7-6c98-49a8-af25-a0659d5ad2f3, age (hex) 1, signature unknown, version RSDS); Ghidra reports load state unknown. Original names and types may be missing; an empty name search does not prove a procedure is absent. Use list_procedures and address-based analysis to inspect recovered functions. REA does not admit a caller-selected PDB companion.; This session uses Ghidra 12.1.2. The bridge is verified against 12.1.4; other 12.1.x builds are accepted and the observed version is reported.; Pseudocode is Ghidra decompiler output, not original source and not text-equivalent to Hopper output.; External functions and functions without an analyzable body return null; other decompiler failures remain explicit.
// pseudocode: provider-specific; not original source


/* Library Function - Single Match
    int __stdcall _AfxRegisterWithIcon(struct tagWNDCLASSA *,char const *,unsigned int)
   
   Library: Visual Studio 2015 Release */

int _AfxRegisterWithIcon(tagWNDCLASSA *param_1,char *param_2,uint param_3)

{
  AFX_MODULE_STATE *pAVar1;
  HICON pHVar2;
  int iVar3;
  
  *(char **)(param_1 + 0x24) = param_2;
  pAVar1 = AfxGetModuleState();
  pHVar2 = LoadIconW(*(HINSTANCE *)(pAVar1 + 0xc),(LPCWSTR)(param_3 & 0xffff));
  *(HICON *)(param_1 + 0x14) = pHVar2;
  if (pHVar2 == (HICON)0x0) {
    pHVar2 = LoadIconW((HINSTANCE)0x0,(LPCWSTR)0x7f00);
    *(HICON *)(param_1 + 0x14) = pHVar2;
  }
  iVar3 = AfxRegisterClass(param_1);
  return iVar3;
}

