// rea decompile_all
// name: ATL::CStringT<wchar_t,StrTraitMFC<wchar_t,ATL::ChTraitsCRT<wchar_t>_>_>::Tokenize
// address: 0x10043e1a
// body: available
// range: 0x10043e1a-0x10043ece inclusive
// non_contiguous: false
// provider: Ghidra 12.1.2 (ghidra)
// analysis_profile: b075844f08879296d957518397cd0ddda73db81dce53d00d3f0e702766fc2af6
// limitations: The session serves operations only after Ghidra reports default auto-analysis complete; incomplete analysis does not expose partial results.; The imported Program and temporary project are ephemeral and deleted on close. Annotation operations edit session database metadata; original executable bytes are never written.; Cancelling an active Ghidra request terminates its ephemeral database and discards session annotations. The selected target remains open; the next provider query imports the original artifact again.; Default-space addresses use lowercase 0x-prefixed hexadecimal; other address spaces use <percent-encoded-space>:0x<hex>.; Ghidra Listing reports a terminal call at 0x10043e37 to 0x10002610 FUN_10002610 (external=false, thunk=false, hasNoReturn=true); fallthrough is excluded by Ghidra's flow model. This records Ghidra's FunctionManager flag, not an independent verification that the callee cannot return.; The Ghidra Program references PDB Comm_GFXI2C.pdb (GUID d304cc6d-b3ee-4851-b468-0ab5e385ca92, age (hex) 1, signature unknown, version RSDS); Ghidra reports load state unknown. Original names and types may be missing; an empty name search does not prove a procedure is absent. Use list_procedures and address-based analysis to inspect recovered functions. REA does not admit a caller-selected PDB companion.; This session uses Ghidra 12.1.2. The bridge is verified against 12.1.4; other 12.1.x builds are accepted and the observed version is reported.; Pseudocode is Ghidra decompiler output, not original source and not text-equivalent to Hopper output.; External functions and functions without an analyzable body return null; other decompiler failures remain explicit.
// pseudocode: provider-specific; not original source


/* Library Function - Single Match
    public: class ATL::CStringT<wchar_t,class StrTraitMFC<wchar_t,class ATL::ChTraitsCRT<wchar_t> >
   > __thiscall ATL::CStringT<wchar_t,class StrTraitMFC<wchar_t,class ATL::ChTraitsCRT<wchar_t> >
   >::Tokenize(wchar_t const *,int &)const 
   
   Library: Visual Studio 2008 Release */

wchar_t * __thiscall
ATL::CStringT<wchar_t,StrTraitMFC<wchar_t,ATL::ChTraitsCRT<wchar_t>_>_>::Tokenize
          (CStringT<wchar_t,StrTraitMFC<wchar_t,ATL::ChTraitsCRT<wchar_t>_>_> *this,wchar_t *param_1
          ,int *param_2)

{
  wchar_t *_Str;
  wchar_t *pwVar1;
  int iVar2;
  int iVar3;
  size_t sVar4;
  size_t sVar5;
  IAtlStringMgr *pIVar6;
  int *in_stack_0000000c;
  
  iVar2 = *in_stack_0000000c;
  if (iVar2 < 0) {
                    /* WARNING: Subroutine does not return */
    FUN_10002610((undefined4 *)0x80070057);
  }
  if ((param_2 == (int *)0x0) || ((short)*param_2 == 0)) {
    iVar3 = *(int *)this;
    if (iVar2 < *(int *)(iVar3 + -0xc)) {
      pIVar6 = CStringT<wchar_t,StrTraitMFC<wchar_t,ATL::ChTraitsOS<wchar_t>_>_>::GetManager
                         ((CStringT<wchar_t,StrTraitMFC<wchar_t,ATL::ChTraitsOS<wchar_t>_>_> *)this)
      ;
      CStringT<wchar_t,StrTraitMFC<wchar_t,ATL::ChTraitsCRT<wchar_t>_>_>
                ((CStringT<wchar_t,StrTraitMFC<wchar_t,ATL::ChTraitsCRT<wchar_t>_>_> *)param_1,
                 (wchar_t *)(iVar3 + *in_stack_0000000c * 2),pIVar6);
      return param_1;
    }
  }
  else {
    iVar3 = *(int *)this;
    _Str = (wchar_t *)(iVar3 + iVar2 * 2);
    pwVar1 = (wchar_t *)(iVar3 + *(int *)(iVar3 + -0xc) * 2);
    if (_Str < pwVar1) {
      sVar4 = _wcsspn(_Str,(wchar_t *)param_2);
      if (_Str + sVar4 < pwVar1) {
        sVar5 = _wcscspn(_Str + sVar4,(wchar_t *)param_2);
        iVar2 = *in_stack_0000000c;
        *in_stack_0000000c = iVar2 + sVar4 + 1 + sVar5;
        CStringT<wchar_t,StrTraitMFC<wchar_t,ATL::ChTraitsOS<wchar_t>_>_>::Mid
                  ((CStringT<wchar_t,StrTraitMFC<wchar_t,ATL::ChTraitsOS<wchar_t>_>_> *)this,
                   (int)param_1,iVar2 + sVar4);
        return param_1;
      }
    }
  }
  *in_stack_0000000c = -1;
  pIVar6 = CStringT<wchar_t,StrTraitMFC<wchar_t,ATL::ChTraitsOS<wchar_t>_>_>::GetManager
                     ((CStringT<wchar_t,StrTraitMFC<wchar_t,ATL::ChTraitsOS<wchar_t>_>_> *)this);
  FUN_10002400(param_1,(int *)pIVar6);
  return param_1;
}

