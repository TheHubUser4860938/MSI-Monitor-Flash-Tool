// rea decompile_all
// name: CListCtrl::SetItem
// address: 0x100456d5
// body: available
// range: 0x100456d5-0x1004572a inclusive
// non_contiguous: false
// provider: Ghidra 12.1.2 (ghidra)
// analysis_profile: b075844f08879296d957518397cd0ddda73db81dce53d00d3f0e702766fc2af6
// limitations: The session serves operations only after Ghidra reports default auto-analysis complete; incomplete analysis does not expose partial results.; The imported Program and temporary project are ephemeral and deleted on close. Annotation operations edit session database metadata; original executable bytes are never written.; Cancelling an active Ghidra request terminates its ephemeral database and discards session annotations. The selected target remains open; the next provider query imports the original artifact again.; Default-space addresses use lowercase 0x-prefixed hexadecimal; other address spaces use <percent-encoded-space>:0x<hex>.; The Ghidra Program references PDB Comm.pdb (GUID c3062acb-498d-45fa-a233-c8b7e401bb13, age (hex) 1, signature unknown, version RSDS); Ghidra reports load state unknown. Original names and types may be missing; an empty name search does not prove a procedure is absent. Use list_procedures and address-based analysis to inspect recovered functions. REA does not admit a caller-selected PDB companion.; This session uses Ghidra 12.1.2. The bridge is verified against 12.1.4; other 12.1.x builds are accepted and the observed version is reported.; Pseudocode is Ghidra decompiler output, not original source and not text-equivalent to Hopper output.; External functions and functions without an analyzable body return null; other decompiler failures remain explicit.
// pseudocode: provider-specific; not original source


/* Library Function - Single Match
    public: int __thiscall CListCtrl::SetItem(int,int,unsigned int,wchar_t const *,int,unsigned
   int,unsigned int,long,int)
   
   Library: Visual Studio 2015 Release */

int __thiscall
CListCtrl::SetItem(CListCtrl *this,int param_1,int param_2,uint param_3,wchar_t *param_4,int param_5
                  ,uint param_6,uint param_7,long param_8,int param_9)

{
  LRESULT LVar1;
  uint local_40;
  int local_3c;
  int local_38;
  uint local_34;
  uint local_30;
  wchar_t *local_2c;
  int local_24;
  long local_20;
  int local_1c;
  
  local_40 = param_3;
  local_3c = param_1;
  local_38 = param_2;
  local_30 = param_7;
  local_34 = param_6;
  local_2c = param_4;
  local_24 = param_5;
  local_20 = param_8;
  local_1c = param_9;
  LVar1 = SendMessageW(*(HWND *)(this + 0x20),0x104c,0,(LPARAM)&local_40);
  return LVar1;
}

