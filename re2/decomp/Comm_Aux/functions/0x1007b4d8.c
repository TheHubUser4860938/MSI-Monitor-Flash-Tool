// rea decompile_all
// name: CListCtrl::SetItemState
// address: 0x1007b4d8
// body: available
// range: 0x1007b4d8-0x1007b504 inclusive
// non_contiguous: false
// provider: Ghidra 12.1.2 (ghidra)
// analysis_profile: b075844f08879296d957518397cd0ddda73db81dce53d00d3f0e702766fc2af6
// limitations: The session serves operations only after Ghidra reports default auto-analysis complete; incomplete analysis does not expose partial results.; The imported Program and temporary project are ephemeral and deleted on close. Annotation operations edit session database metadata; original executable bytes are never written.; Cancelling an active Ghidra request terminates its ephemeral database and discards session annotations. The selected target remains open; the next provider query imports the original artifact again.; Default-space addresses use lowercase 0x-prefixed hexadecimal; other address spaces use <percent-encoded-space>:0x<hex>.; The Ghidra Program references PDB Comm_Aux.pdb (GUID ba7920cc-daa3-4461-a102-1f8f66c67a2a, age (hex) 1, signature unknown, version RSDS); Ghidra reports load state unknown. Original names and types may be missing; an empty name search does not prove a procedure is absent. Use list_procedures and address-based analysis to inspect recovered functions. REA does not admit a caller-selected PDB companion.; This session uses Ghidra 12.1.2. The bridge is verified against 12.1.4; other 12.1.x builds are accepted and the observed version is reported.; Pseudocode is Ghidra decompiler output, not original source and not text-equivalent to Hopper output.; External functions and functions without an analyzable body return null; other decompiler failures remain explicit.
// pseudocode: provider-specific; not original source


/* Library Function - Single Match
    public: int __thiscall CListCtrl::SetItemState(int,unsigned int,unsigned int)
   
   Library: Visual Studio 2015 Release */

int __thiscall CListCtrl::SetItemState(CListCtrl *this,int param_1,uint param_2,uint param_3)

{
  LRESULT LVar1;
  undefined1 local_40 [12];
  uint local_34;
  uint local_30;
  
  local_30 = param_3;
  local_34 = param_2;
  LVar1 = SendMessageW(*(HWND *)(this + 0x20),0x102b,param_1,(LPARAM)local_40);
  return LVar1;
}

