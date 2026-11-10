// rea decompile_all
// name: CBasePane::SelectDefaultFont
// address: 0x45900c
// body: available
// range: 0x45900c-0x459050 inclusive
// non_contiguous: false
// provider: Ghidra 12.1.2 (ghidra)
// analysis_profile: ac6d50be2cdf54f7005df47d1ed7e7ef55dee595681eb1b7c2e0b00d70cd697d
// limitations: The session serves operations only after Ghidra reports default auto-analysis complete; incomplete analysis does not expose partial results.; The imported Program and temporary project are ephemeral and deleted on close. Annotation operations edit session database metadata; original executable bytes are never written.; Cancelling an active Ghidra request terminates its ephemeral database and discards session annotations. The selected target remains open; the next provider query imports the original artifact again.; Default-space addresses use lowercase 0x-prefixed hexadecimal; other address spaces use <percent-encoded-space>:0x<hex>.; The Ghidra Program references PDB ISPToolForMsi.pdb (GUID b8f2ac8f-1d6f-438d-800f-ed4a14426ac6, age (hex) 1, signature unknown, version RSDS); Ghidra reports load state unknown. Original names and types may be missing; an empty name search does not prove a procedure is absent. Use list_procedures and address-based analysis to inspect recovered functions. REA does not admit a caller-selected PDB companion.; This session uses Ghidra 12.1.2. The bridge is verified against 12.1.4; other 12.1.x builds are accepted and the observed version is reported.; Pseudocode is Ghidra decompiler output, not original source and not text-equivalent to Hopper output.; External functions and functions without an analyzable body return null; other decompiler failures remain explicit.
// pseudocode: provider-specific; not original source


/* Library Function - Single Match
    public: class CFont * __thiscall CBasePane::SelectDefaultFont(class CDC *)
   
   Library: Visual Studio 2015 Release */

CFont * __thiscall CBasePane::SelectDefaultFont(CBasePane *this,CDC *param_1)

{
  code *pcVar1;
  int iVar2;
  CFont *pCVar3;
  AFX_GLOBAL_DATA *pAVar4;
  
  if (*(int *)(this + 0x8c) == 0) {
    iVar2 = *(int *)param_1;
    pAVar4 = GetGlobalData();
    guard_check_icall(pAVar4 + 0x11c);
    pCVar3 = (CFont *)(**(code **)(iVar2 + 0x28))();
  }
  else {
    pcVar1 = *(code **)(*(int *)param_1 + 0x24);
    guard_check_icall(0x11);
    pCVar3 = (CFont *)(*pcVar1)();
  }
  return pCVar3;
}

