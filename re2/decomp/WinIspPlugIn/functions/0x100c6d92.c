// rea decompile_all
// name: CMFCHeaderCtrl::SelectFont
// address: 0x100c6d92
// body: available
// range: 0x100c6d92-0x100c6df1 inclusive
// non_contiguous: false
// provider: Ghidra 12.1.2 (ghidra)
// analysis_profile: b075844f08879296d957518397cd0ddda73db81dce53d00d3f0e702766fc2af6
// limitations: The session serves operations only after Ghidra reports default auto-analysis complete; incomplete analysis does not expose partial results.; The imported Program and temporary project are ephemeral and deleted on close. Annotation operations edit session database metadata; original executable bytes are never written.; Cancelling an active Ghidra request terminates its ephemeral database and discards session annotations. The selected target remains open; the next provider query imports the original artifact again.; Default-space addresses use lowercase 0x-prefixed hexadecimal; other address spaces use <percent-encoded-space>:0x<hex>.; The Ghidra Program references PDB WinIspPlugIn.pdb (GUID d9f398c7-6c98-49a8-af25-a0659d5ad2f3, age (hex) 1, signature unknown, version RSDS); Ghidra reports load state unknown. Original names and types may be missing; an empty name search does not prove a procedure is absent. Use list_procedures and address-based analysis to inspect recovered functions. REA does not admit a caller-selected PDB companion.; This session uses Ghidra 12.1.2. The bridge is verified against 12.1.4; other 12.1.x builds are accepted and the observed version is reported.; Pseudocode is Ghidra decompiler output, not original source and not text-equivalent to Hopper output.; External functions and functions without an analyzable body return null; other decompiler failures remain explicit.
// pseudocode: provider-specific; not original source


/* Library Function - Single Match
    protected: class CFont * __thiscall CMFCHeaderCtrl::SelectFont(class CDC *)
   
   Library: Visual Studio 2015 Release */

CFont * __thiscall CMFCHeaderCtrl::SelectFont(CMFCHeaderCtrl *this,CDC *param_1)

{
  int iVar1;
  CGdiObject *pCVar2;
  CFont *pCVar3;
  AFX_GLOBAL_DATA *pAVar4;
  code *pcVar5;
  
  if (*(void **)(this + 0xb4) == (void *)0x0) {
    if (*(int *)(this + 0xac) == 0) {
      iVar1 = *(int *)param_1;
      pAVar4 = GetGlobalData();
      guard_check_icall(pAVar4 + 0x11c);
      pCVar3 = (CFont *)(**(code **)(iVar1 + 0x28))();
      return pCVar3;
    }
    pCVar2 = (CGdiObject *)0x11;
    pcVar5 = *(code **)(*(int *)param_1 + 0x24);
  }
  else {
    pCVar2 = CGdiObject::FromHandle(*(void **)(this + 0xb4));
    pcVar5 = *(code **)(*(int *)param_1 + 0x28);
  }
  guard_check_icall(pCVar2);
  pCVar3 = (CFont *)(*pcVar5)();
  return pCVar3;
}

