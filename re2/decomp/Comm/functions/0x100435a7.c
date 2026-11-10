// rea decompile_all
// name: AddItem
// address: 0x100435a7
// body: available
// range: 0x100435a7-0x10043631 inclusive
// non_contiguous: false
// provider: Ghidra 12.1.2 (ghidra)
// analysis_profile: b075844f08879296d957518397cd0ddda73db81dce53d00d3f0e702766fc2af6
// limitations: The session serves operations only after Ghidra reports default auto-analysis complete; incomplete analysis does not expose partial results.; The imported Program and temporary project are ephemeral and deleted on close. Annotation operations edit session database metadata; original executable bytes are never written.; Cancelling an active Ghidra request terminates its ephemeral database and discards session annotations. The selected target remains open; the next provider query imports the original artifact again.; Default-space addresses use lowercase 0x-prefixed hexadecimal; other address spaces use <percent-encoded-space>:0x<hex>.; The Ghidra Program references PDB Comm.pdb (GUID c3062acb-498d-45fa-a233-c8b7e401bb13, age (hex) 1, signature unknown, version RSDS); Ghidra reports load state unknown. Original names and types may be missing; an empty name search does not prove a procedure is absent. Use list_procedures and address-based analysis to inspect recovered functions. REA does not admit a caller-selected PDB companion.; This session uses Ghidra 12.1.2. The bridge is verified against 12.1.4; other 12.1.x builds are accepted and the observed version is reported.; Pseudocode is Ghidra decompiler output, not original source and not text-equivalent to Hopper output.; External functions and functions without an analyzable body return null; other decompiler failures remain explicit.
// pseudocode: provider-specific; not original source


/* Library Function - Multiple Matches With Same Base Name
    public: virtual int __thiscall CVSListBox::AddItem(class ATL::CStringT<char,class
   StrTraitMFC<char,class ATL::ChTraitsCRT<char> > > const &,unsigned long,int)
    public: virtual int __thiscall CVSListBox::AddItem(class ATL::CStringT<wchar_t,class
   StrTraitMFC<wchar_t,class ATL::ChTraitsCRT<wchar_t> > > const &,unsigned long,int)
   
   Library: Visual Studio 2015 Release */

int AddItem(undefined4 *param_1,undefined4 param_2,int param_3)

{
  code *pcVar1;
  int iVar2;
  int *in_ECX;
  
  if (((in_ECX == (int *)0x0) || (in_ECX[8] == 0)) || (in_ECX[0x44] == 0)) {
    iVar2 = -1;
  }
  else {
    if (param_3 < 0) {
      param_3 = SendMessageW(*(HWND *)(in_ECX[0x44] + 0x20),0x1004,0,0);
    }
    iVar2 = CListCtrl::InsertItem((CListCtrl *)in_ECX[0x44],3,param_3,(wchar_t *)*param_1,0,0,-1,0);
    SetItem(iVar2,0,4,0,0,0,0,param_2);
    if (iVar2 == 0) {
      pcVar1 = *(code **)(*in_ECX + 0x17c);
      guard_check_icall(0);
      (*pcVar1)();
    }
  }
  return iVar2;
}

