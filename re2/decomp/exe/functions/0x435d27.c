// rea decompile_all
// name: FID_conflict:GetMenuStringA
// address: 0x435d27
// body: available
// range: 0x435d27-0x435d7e inclusive
// non_contiguous: false
// provider: Ghidra 12.1.2 (ghidra)
// analysis_profile: ac6d50be2cdf54f7005df47d1ed7e7ef55dee595681eb1b7c2e0b00d70cd697d
// limitations: The session serves operations only after Ghidra reports default auto-analysis complete; incomplete analysis does not expose partial results.; The imported Program and temporary project are ephemeral and deleted on close. Annotation operations edit session database metadata; original executable bytes are never written.; Cancelling an active Ghidra request terminates its ephemeral database and discards session annotations. The selected target remains open; the next provider query imports the original artifact again.; Default-space addresses use lowercase 0x-prefixed hexadecimal; other address spaces use <percent-encoded-space>:0x<hex>.; The Ghidra Program references PDB ISPToolForMsi.pdb (GUID b8f2ac8f-1d6f-438d-800f-ed4a14426ac6, age (hex) 1, signature unknown, version RSDS); Ghidra reports load state unknown. Original names and types may be missing; an empty name search does not prove a procedure is absent. Use list_procedures and address-based analysis to inspect recovered functions. REA does not admit a caller-selected PDB companion.; This session uses Ghidra 12.1.2. The bridge is verified against 12.1.4; other 12.1.x builds are accepted and the observed version is reported.; Pseudocode is Ghidra decompiler output, not original source and not text-equivalent to Hopper output.; External functions and functions without an analyzable body return null; other decompiler failures remain explicit.
// pseudocode: provider-specific; not original source


/* Library Function - Multiple Matches With Different Base Names
    public: int __thiscall CMenu::GetMenuStringA(unsigned int,class ATL::CStringT<char,class
   StrTraitMFC<char,class ATL::ChTraitsCRT<char> > > &,unsigned int)const 
    public: int __thiscall CMenu::GetMenuStringW(unsigned int,class ATL::CStringT<wchar_t,class
   StrTraitMFC<wchar_t,class ATL::ChTraitsCRT<wchar_t> > > &,unsigned int)const 
   
   Library: Visual Studio 2015 Release */

int FID_conflict_GetMenuStringA(HMENU hMenu,UINT uIDItem,LPSTR lpString,int cchMax,UINT flags)

{
  int iVar1;
  wchar_t *lpString_00;
  int in_ECX;
  
  iVar1 = GetMenuStringW(*(HMENU *)(in_ECX + 4),(UINT)hMenu,(LPWSTR)0x0,0,(UINT)lpString);
  if (iVar1 < 1) {
    FUN_00415d60();
  }
  else {
    lpString_00 = ATL::CSimpleStringT<wchar_t,0>::GetBufferSetLength
                            ((CSimpleStringT<wchar_t,0> *)uIDItem,iVar1 + 1);
    GetMenuStringW(*(HMENU *)(in_ECX + 4),(UINT)hMenu,lpString_00,iVar1 + 1,(UINT)lpString);
    ATL::CSimpleStringT<wchar_t,0>::ReleaseBuffer((CSimpleStringT<wchar_t,0> *)uIDItem,-1);
  }
  return iVar1;
}

