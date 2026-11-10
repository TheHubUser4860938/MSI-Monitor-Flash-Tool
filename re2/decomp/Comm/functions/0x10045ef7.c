// rea decompile_all
// name: OnChildNotify
// address: 0x10045ef7
// body: available
// range: 0x10045ef7-0x10045f35 inclusive
// non_contiguous: false
// provider: Ghidra 12.1.2 (ghidra)
// analysis_profile: b075844f08879296d957518397cd0ddda73db81dce53d00d3f0e702766fc2af6
// limitations: The session serves operations only after Ghidra reports default auto-analysis complete; incomplete analysis does not expose partial results.; The imported Program and temporary project are ephemeral and deleted on close. Annotation operations edit session database metadata; original executable bytes are never written.; Cancelling an active Ghidra request terminates its ephemeral database and discards session annotations. The selected target remains open; the next provider query imports the original artifact again.; Default-space addresses use lowercase 0x-prefixed hexadecimal; other address spaces use <percent-encoded-space>:0x<hex>.; The Ghidra Program references PDB Comm.pdb (GUID c3062acb-498d-45fa-a233-c8b7e401bb13, age (hex) 1, signature unknown, version RSDS); Ghidra reports load state unknown. Original names and types may be missing; an empty name search does not prove a procedure is absent. Use list_procedures and address-based analysis to inspect recovered functions. REA does not admit a caller-selected PDB companion.; This session uses Ghidra 12.1.2. The bridge is verified against 12.1.4; other 12.1.x builds are accepted and the observed version is reported.; Pseudocode is Ghidra decompiler output, not original source and not text-equivalent to Hopper output.; External functions and functions without an analyzable body return null; other decompiler failures remain explicit.
// pseudocode: provider-specific; not original source


/* Library Function - Multiple Matches With Same Base Name
    protected: virtual int __thiscall CButton::OnChildNotify(unsigned int,unsigned int,long,long *)
    protected: virtual int __thiscall CHeaderCtrl::OnChildNotify(unsigned int,unsigned int,long,long
   *)
    protected: virtual int __thiscall CListCtrl::OnChildNotify(unsigned int,unsigned int,long,long
   *)
    protected: virtual int __thiscall CListView::OnChildNotify(unsigned int,unsigned int,long,long
   *)
     8 names - too many to list
   
   Library: Visual Studio 2015 Release */

int OnChildNotify(uint param_1,uint param_2,long param_3,long *param_4)

{
  code *pcVar1;
  int iVar2;
  CWnd *in_ECX;
  
  if (param_1 == 0x2b) {
    pcVar1 = *(code **)(*(int *)in_ECX + 0x168);
    guard_check_icall(param_3);
    (*pcVar1)();
    iVar2 = 1;
  }
  else {
    iVar2 = CWnd::OnChildNotify(in_ECX,param_1,param_2,param_3,param_4);
  }
  return iVar2;
}

