// rea decompile_all
// name: AfxExtractSubString
// address: 0x10048a49
// body: available
// range: 0x10048a49-0x10048acd inclusive
// non_contiguous: false
// provider: Ghidra 12.1.2 (ghidra)
// analysis_profile: b075844f08879296d957518397cd0ddda73db81dce53d00d3f0e702766fc2af6
// limitations: The session serves operations only after Ghidra reports default auto-analysis complete; incomplete analysis does not expose partial results.; The imported Program and temporary project are ephemeral and deleted on close. Annotation operations edit session database metadata; original executable bytes are never written.; Cancelling an active Ghidra request terminates its ephemeral database and discards session annotations. The selected target remains open; the next provider query imports the original artifact again.; Default-space addresses use lowercase 0x-prefixed hexadecimal; other address spaces use <percent-encoded-space>:0x<hex>.; The Ghidra Program references PDB Comm_Aux.pdb (GUID ba7920cc-daa3-4461-a102-1f8f66c67a2a, age (hex) 1, signature unknown, version RSDS); Ghidra reports load state unknown. Original names and types may be missing; an empty name search does not prove a procedure is absent. Use list_procedures and address-based analysis to inspect recovered functions. REA does not admit a caller-selected PDB companion.; This session uses Ghidra 12.1.2. The bridge is verified against 12.1.4; other 12.1.x builds are accepted and the observed version is reported.; Pseudocode is Ghidra decompiler output, not original source and not text-equivalent to Hopper output.; External functions and functions without an analyzable body return null; other decompiler failures remain explicit.
// pseudocode: provider-specific; not original source


/* Library Function - Single Match
    int __stdcall AfxExtractSubString(class ATL::CStringT<wchar_t,class StrTraitMFC<wchar_t,class
   ATL::ChTraitsCRT<wchar_t> > > &,wchar_t const *,int,wchar_t)
   
   Library: Visual Studio 2015 Release */

int AfxExtractSubString(CStringT<wchar_t,StrTraitMFC<wchar_t,ATL::ChTraitsCRT<wchar_t>_>_> *param_1,
                       wchar_t *param_2,int param_3,wchar_t param_4)

{
  int iVar1;
  size_t sVar2;
  wchar_t *pwVar3;
  undefined2 in_stack_00000012;
  int iVar4;
  
  if (param_2 == (wchar_t *)0x0) {
    iVar1 = 0;
  }
  else {
    while (param_3 != 0) {
      param_3 = param_3 + -1;
      iVar1 = FUN_101806e5(param_2,_param_4);
      if (iVar1 == 0) {
        FUN_10034ea0();
        return 0;
      }
      param_2 = (wchar_t *)(iVar1 + 2);
    }
    iVar1 = FUN_101806e5(param_2,_param_4);
    if (iVar1 == 0) {
      sVar2 = _wcslen(param_2);
    }
    else {
      sVar2 = iVar1 - (int)param_2 >> 1;
    }
    iVar1 = sVar2 * 2;
    iVar4 = iVar1;
    pwVar3 = ATL::CSimpleStringT<wchar_t,0>::GetBufferSetLength
                       ((CSimpleStringT<wchar_t,0> *)param_1,sVar2);
    FUN_100345e0(pwVar3,iVar1,param_2,iVar4);
    ATL::CSimpleStringT<wchar_t,0>::ReleaseBuffer((CSimpleStringT<wchar_t,0> *)param_1,-1);
    iVar1 = 1;
  }
  return iVar1;
}

