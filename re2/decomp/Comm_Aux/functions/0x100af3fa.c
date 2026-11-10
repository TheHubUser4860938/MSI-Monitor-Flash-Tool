// rea decompile_all
// name: CToolTipCtrl::GetToolInfo
// address: 0x100af3fa
// body: available
// range: 0x100af3fa-0x100af42c inclusive
// non_contiguous: false
// provider: Ghidra 12.1.2 (ghidra)
// analysis_profile: b075844f08879296d957518397cd0ddda73db81dce53d00d3f0e702766fc2af6
// limitations: The session serves operations only after Ghidra reports default auto-analysis complete; incomplete analysis does not expose partial results.; The imported Program and temporary project are ephemeral and deleted on close. Annotation operations edit session database metadata; original executable bytes are never written.; Cancelling an active Ghidra request terminates its ephemeral database and discards session annotations. The selected target remains open; the next provider query imports the original artifact again.; Default-space addresses use lowercase 0x-prefixed hexadecimal; other address spaces use <percent-encoded-space>:0x<hex>.; The Ghidra Program references PDB Comm_Aux.pdb (GUID ba7920cc-daa3-4461-a102-1f8f66c67a2a, age (hex) 1, signature unknown, version RSDS); Ghidra reports load state unknown. Original names and types may be missing; an empty name search does not prove a procedure is absent. Use list_procedures and address-based analysis to inspect recovered functions. REA does not admit a caller-selected PDB companion.; This session uses Ghidra 12.1.2. The bridge is verified against 12.1.4; other 12.1.x builds are accepted and the observed version is reported.; Pseudocode is Ghidra decompiler output, not original source and not text-equivalent to Hopper output.; External functions and functions without an analyzable body return null; other decompiler failures remain explicit.
// pseudocode: provider-specific; not original source


/* Library Function - Single Match
    public: int __thiscall CToolTipCtrl::GetToolInfo(class CToolInfo &,class CWnd *,unsigned
   int)const 
   
   Library: Visual Studio 2015 Release */

int __thiscall
CToolTipCtrl::GetToolInfo(CToolTipCtrl *this,CToolInfo *param_1,CWnd *param_2,uint param_3)

{
  LRESULT LVar1;
  
  FillInToolInfo(param_1,param_2,param_3);
  *(CToolInfo **)(param_1 + 0x24) = param_1 + 0x30;
  LVar1 = SendMessageW(*(HWND *)(this + 0x20),0x435,0,(LPARAM)param_1);
  return LVar1;
}

