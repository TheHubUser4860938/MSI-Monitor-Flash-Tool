// rea decompile_all
// name: CMFCVisualManager::OnDrawTasksGroupAreaBorder
// address: 0x1008fc4a
// body: available
// range: 0x1008fc4a-0x1008fce3 inclusive
// non_contiguous: false
// provider: Ghidra 12.1.2 (ghidra)
// analysis_profile: b075844f08879296d957518397cd0ddda73db81dce53d00d3f0e702766fc2af6
// limitations: The session serves operations only after Ghidra reports default auto-analysis complete; incomplete analysis does not expose partial results.; The imported Program and temporary project are ephemeral and deleted on close. Annotation operations edit session database metadata; original executable bytes are never written.; Cancelling an active Ghidra request terminates its ephemeral database and discards session annotations. The selected target remains open; the next provider query imports the original artifact again.; Default-space addresses use lowercase 0x-prefixed hexadecimal; other address spaces use <percent-encoded-space>:0x<hex>.; The Ghidra Program references PDB Comm_Aux.pdb (GUID ba7920cc-daa3-4461-a102-1f8f66c67a2a, age (hex) 1, signature unknown, version RSDS); Ghidra reports load state unknown. Original names and types may be missing; an empty name search does not prove a procedure is absent. Use list_procedures and address-based analysis to inspect recovered functions. REA does not admit a caller-selected PDB companion.; This session uses Ghidra 12.1.2. The bridge is verified against 12.1.4; other 12.1.x builds are accepted and the observed version is reported.; Pseudocode is Ghidra decompiler output, not original source and not text-equivalent to Hopper output.; External functions and functions without an analyzable body return null; other decompiler failures remain explicit.
// pseudocode: provider-specific; not original source


/* Library Function - Single Match
    public: virtual void __thiscall CMFCVisualManager::OnDrawTasksGroupAreaBorder(class CDC *,class
   CRect,int,int)
   
   Library: Visual Studio 2015 Release */

void __thiscall
CMFCVisualManager::OnDrawTasksGroupAreaBorder
          (undefined4 param_1_00,CDC *param_1,int param_3,int param_4,int param_5,int param_6,
          int param_7,int param_8)

{
  AFX_GLOBAL_DATA *pAVar1;
  CPen *pCVar2;
  undefined1 local_c [8];
  
  pAVar1 = GetGlobalData();
  if (param_7 == 0) {
    pCVar2 = (CPen *)(pAVar1 + 0xe0);
  }
  else {
    pCVar2 = (CPen *)(pAVar1 + 0xd8);
  }
  pCVar2 = CDC::SelectObject(param_1,pCVar2);
  CDC::MoveTo(param_1,(int)local_c,param_3);
  CDC::LineTo(param_1,param_3,param_6 + -1);
  CDC::LineTo(param_1,param_5 + -1,param_6 + -1);
  CDC::LineTo(param_1,param_5 + -1,param_4);
  if (param_8 == 0) {
    param_4 = param_4 + -1;
    param_3 = param_5 + -1;
  }
  CDC::LineTo(param_1,param_3,param_4);
  CDC::SelectObject(param_1,pCVar2);
  return;
}

