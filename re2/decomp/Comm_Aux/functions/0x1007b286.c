// rea decompile_all
// name: CListCtrl::InsertColumn
// address: 0x1007b286
// body: available
// range: 0x1007b286-0x1007b2da inclusive
// non_contiguous: false
// provider: Ghidra 12.1.2 (ghidra)
// analysis_profile: b075844f08879296d957518397cd0ddda73db81dce53d00d3f0e702766fc2af6
// limitations: The session serves operations only after Ghidra reports default auto-analysis complete; incomplete analysis does not expose partial results.; The imported Program and temporary project are ephemeral and deleted on close. Annotation operations edit session database metadata; original executable bytes are never written.; Cancelling an active Ghidra request terminates its ephemeral database and discards session annotations. The selected target remains open; the next provider query imports the original artifact again.; Default-space addresses use lowercase 0x-prefixed hexadecimal; other address spaces use <percent-encoded-space>:0x<hex>.; The Ghidra Program references PDB Comm_Aux.pdb (GUID ba7920cc-daa3-4461-a102-1f8f66c67a2a, age (hex) 1, signature unknown, version RSDS); Ghidra reports load state unknown. Original names and types may be missing; an empty name search does not prove a procedure is absent. Use list_procedures and address-based analysis to inspect recovered functions. REA does not admit a caller-selected PDB companion.; This session uses Ghidra 12.1.2. The bridge is verified against 12.1.4; other 12.1.x builds are accepted and the observed version is reported.; Pseudocode is Ghidra decompiler output, not original source and not text-equivalent to Hopper output.; External functions and functions without an analyzable body return null; other decompiler failures remain explicit.
// pseudocode: provider-specific; not original source


/* Library Function - Single Match
    public: int __thiscall CListCtrl::InsertColumn(int,wchar_t const *,int,int,int)
   
   Library: Visual Studio 2015 Release */

int __thiscall
CListCtrl::InsertColumn
          (CListCtrl *this,int param_1,wchar_t *param_2,int param_3,int param_4,int param_5)

{
  LRESULT LVar1;
  uint uVar2;
  uint local_30;
  int local_2c;
  int local_28;
  wchar_t *local_24;
  int local_1c;
  
  local_24 = param_2;
  local_2c = param_3;
  uVar2 = 5;
  local_30 = 5;
  if (param_4 != -1) {
    uVar2 = 7;
    local_30 = 7;
    local_28 = param_4;
  }
  if (param_5 != -1) {
    local_30 = uVar2 | 8;
    local_1c = param_5;
  }
  LVar1 = SendMessageW(*(HWND *)(this + 0x20),0x1061,param_1,(LPARAM)&local_30);
  return LVar1;
}

