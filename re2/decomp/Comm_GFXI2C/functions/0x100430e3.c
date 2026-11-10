// rea decompile_all
// name: CComboBox::OnChildNotify
// address: 0x100430e3
// body: available
// range: 0x100430e3-0x1004313e inclusive
// non_contiguous: false
// provider: Ghidra 12.1.2 (ghidra)
// analysis_profile: b075844f08879296d957518397cd0ddda73db81dce53d00d3f0e702766fc2af6
// limitations: The session serves operations only after Ghidra reports default auto-analysis complete; incomplete analysis does not expose partial results.; The imported Program and temporary project are ephemeral and deleted on close. Annotation operations edit session database metadata; original executable bytes are never written.; Cancelling an active Ghidra request terminates its ephemeral database and discards session annotations. The selected target remains open; the next provider query imports the original artifact again.; Default-space addresses use lowercase 0x-prefixed hexadecimal; other address spaces use <percent-encoded-space>:0x<hex>.; Ghidra Listing reports a terminal call at 0x100430fc to 0x10042ac1 CWnd::OnChildNotify (external=false, thunk=false, hasNoReturn=false); fallthrough is excluded by Ghidra's flow model. The reason for the terminal flow is not established by this observation.; The Ghidra Program references PDB Comm_GFXI2C.pdb (GUID d304cc6d-b3ee-4851-b468-0ab5e385ca92, age (hex) 1, signature unknown, version RSDS); Ghidra reports load state unknown. Original names and types may be missing; an empty name search does not prove a procedure is absent. Use list_procedures and address-based analysis to inspect recovered functions. REA does not admit a caller-selected PDB companion.; This session uses Ghidra 12.1.2. The bridge is verified against 12.1.4; other 12.1.x builds are accepted and the observed version is reported.; Pseudocode is Ghidra decompiler output, not original source and not text-equivalent to Hopper output.; External functions and functions without an analyzable body return null; other decompiler failures remain explicit.
// pseudocode: provider-specific; not original source


/* Library Function - Single Match
    protected: virtual int __thiscall CComboBox::OnChildNotify(unsigned int,unsigned int,long,long
   *)
   
   Library: Visual Studio 2008 Release */

int __thiscall
CComboBox::OnChildNotify(CComboBox *this,uint param_1,uint param_2,long param_3,long *param_4)

{
  int iVar1;
  long lVar2;
  
  if (param_1 == 0x2b) {
    (**(code **)(*(int *)this + 0x140))(param_3);
  }
  else if (param_1 == 0x2c) {
    (**(code **)(*(int *)this + 0x144))(param_3);
  }
  else if (param_1 == 0x2d) {
    (**(code **)(*(int *)this + 0x14c))(param_3);
  }
  else {
    if (param_1 != 0x39) {
      iVar1 = CWnd::OnChildNotify((CWnd *)this,param_1,param_2,param_3,param_4);
      return iVar1;
    }
    lVar2 = (**(code **)(*(int *)this + 0x148))(param_3);
    *param_4 = lVar2;
  }
  return 1;
}

