// rea decompile_all
// name: PreProcessPageTemplate
// address: 0x100635b9
// body: available
// range: 0x100635b9-0x1006366c inclusive
// non_contiguous: false
// provider: Ghidra 12.1.2 (ghidra)
// analysis_profile: b075844f08879296d957518397cd0ddda73db81dce53d00d3f0e702766fc2af6
// limitations: The session serves operations only after Ghidra reports default auto-analysis complete; incomplete analysis does not expose partial results.; The imported Program and temporary project are ephemeral and deleted on close. Annotation operations edit session database metadata; original executable bytes are never written.; Cancelling an active Ghidra request terminates its ephemeral database and discards session annotations. The selected target remains open; the next provider query imports the original artifact again.; Default-space addresses use lowercase 0x-prefixed hexadecimal; other address spaces use <percent-encoded-space>:0x<hex>.; The Ghidra Program references PDB Comm_Aux.pdb (GUID ba7920cc-daa3-4461-a102-1f8f66c67a2a, age (hex) 1, signature unknown, version RSDS); Ghidra reports load state unknown. Original names and types may be missing; an empty name search does not prove a procedure is absent. Use list_procedures and address-based analysis to inspect recovered functions. REA does not admit a caller-selected PDB companion.; This session uses Ghidra 12.1.2. The bridge is verified against 12.1.4; other 12.1.x builds are accepted and the observed version is reported.; Pseudocode is Ghidra decompiler output, not original source and not text-equivalent to Hopper output.; External functions and functions without an analyzable body return null; other decompiler failures remain explicit.
// pseudocode: provider-specific; not original source


/* Library Function - Multiple Matches With Same Base Name
    protected: void __thiscall CPropertyPage::PreProcessPageTemplate(struct _PROPSHEETPAGEA &,int)
    protected: void __thiscall CPropertyPage::PreProcessPageTemplate(struct _PROPSHEETPAGEW &,int)
   
   Library: Visual Studio 2015 Release */

void PreProcessPageTemplate(int param_1,int param_2)

{
  HRSRC hResInfo;
  HGLOBAL hResData;
  AFX_MODULE_STATE *pAVar1;
  DLGTEMPLATE *pDVar2;
  DLGTEMPLATE *pDVar3;
  CPropertyPage *in_ECX;
  
  if ((*(byte *)(param_1 + 4) & 1) == 0) {
    hResInfo = FindResourceW(*(HMODULE *)(param_1 + 8),*(LPCWSTR *)(param_1 + 0xc),
                             (LPCWSTR)&DAT_00000005);
    if (hResInfo == (HRSRC)0x0) {
      FUN_1005e887();
    }
    hResData = LoadResource(*(HMODULE *)(param_1 + 8),hResInfo);
    if (hResData == (HGLOBAL)0x0) {
      FUN_1005e887();
    }
    pDVar2 = LockResource(hResData);
    if (pDVar2 == (DLGTEMPLATE *)0x0) {
      FUN_1005e887();
    }
  }
  else {
    pDVar2 = *(DLGTEMPLATE **)(param_1 + 0xc);
  }
  pAVar1 = AfxGetModuleState();
  if (*(int *)(pAVar1 + 0x3c) != 0) {
    pDVar2 = CPropertyPage::InitDialogInfo(in_ECX,pDVar2);
  }
  pDVar3 = _AfxChangePropPageFont(pDVar2,param_2);
  if (*(HGLOBAL *)(in_ECX + 0x88) != (HGLOBAL)0x0) {
    GlobalFree(*(HGLOBAL *)(in_ECX + 0x88));
    *(undefined4 *)(in_ECX + 0x88) = 0;
  }
  if (pDVar3 != (DLGTEMPLATE *)0x0) {
    *(DLGTEMPLATE **)(in_ECX + 0x88) = pDVar3;
    pDVar2 = pDVar3;
  }
  *(uint *)(param_1 + 4) = *(uint *)(param_1 + 4) | 1;
  *(DLGTEMPLATE **)(param_1 + 0xc) = pDVar2;
  return;
}

