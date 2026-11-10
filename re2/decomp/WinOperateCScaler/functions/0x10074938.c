// rea decompile_all
// name: GetTabLabel
// address: 0x10074938
// body: available
// range: 0x10074938-0x10074979 inclusive
// non_contiguous: false
// provider: Ghidra 12.1.2 (ghidra)
// analysis_profile: b075844f08879296d957518397cd0ddda73db81dce53d00d3f0e702766fc2af6
// limitations: The session serves operations only after Ghidra reports default auto-analysis complete; incomplete analysis does not expose partial results.; The imported Program and temporary project are ephemeral and deleted on close. Annotation operations edit session database metadata; original executable bytes are never written.; Cancelling an active Ghidra request terminates its ephemeral database and discards session annotations. The selected target remains open; the next provider query imports the original artifact again.; Default-space addresses use lowercase 0x-prefixed hexadecimal; other address spaces use <percent-encoded-space>:0x<hex>.; The Ghidra Program references PDB WinOperateCScaler.pdb (GUID a6737962-efea-4805-8ae6-1fc1ef126554, age (hex) 1, signature unknown, version RSDS); Ghidra reports load state unknown. Original names and types may be missing; an empty name search does not prove a procedure is absent. Use list_procedures and address-based analysis to inspect recovered functions. REA does not admit a caller-selected PDB companion.; This session uses Ghidra 12.1.2. The bridge is verified against 12.1.4; other 12.1.x builds are accepted and the observed version is reported.; Pseudocode is Ghidra decompiler output, not original source and not text-equivalent to Hopper output.; External functions and functions without an analyzable body return null; other decompiler failures remain explicit.
// pseudocode: provider-specific; not original source


/* Library Function - Multiple Matches With Same Base Name
    public: virtual int __thiscall CMFCBaseTabCtrl::GetTabLabel(int,class ATL::CStringT<char,class
   StrTraitMFC<char,class ATL::ChTraitsCRT<char> > > &)const 
    public: virtual int __thiscall CMFCBaseTabCtrl::GetTabLabel(int,class
   ATL::CStringT<wchar_t,class StrTraitMFC<wchar_t,class ATL::ChTraitsCRT<wchar_t> > > &)const 
   
   Library: Visual Studio 2015 Release */

undefined4 GetTabLabel(int param_1,CSimpleStringT<wchar_t,0> *param_2)

{
  int iVar1;
  wchar_t *pwVar2;
  undefined4 uVar3;
  int in_ECX;
  
  if ((param_1 < 0) || (*(int *)(in_ECX + 0xbc) <= param_1)) {
    uVar3 = 0;
  }
  else {
    iVar1 = FUN_10038441(param_1);
    if (*(int *)(iVar1 + 0x3c) == 0) {
      pwVar2 = *(wchar_t **)(iVar1 + 4);
    }
    else {
      pwVar2 = L"";
    }
    ATL::CSimpleStringT<wchar_t,0>::Append(param_2,pwVar2);
    uVar3 = 1;
  }
  return uVar3;
}

