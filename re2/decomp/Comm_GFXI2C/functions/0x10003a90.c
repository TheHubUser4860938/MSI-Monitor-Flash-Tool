// rea decompile_all
// name: ATL::CStringT<wchar_t,StrTraitMFC<wchar_t,ATL::ChTraitsOS<wchar_t>_>_>::Left
// address: 0x10003a90
// body: available
// range: 0x10003a90-0x10003b02 inclusive
// non_contiguous: false
// provider: Ghidra 12.1.2 (ghidra)
// analysis_profile: b075844f08879296d957518397cd0ddda73db81dce53d00d3f0e702766fc2af6
// limitations: The session serves operations only after Ghidra reports default auto-analysis complete; incomplete analysis does not expose partial results.; The imported Program and temporary project are ephemeral and deleted on close. Annotation operations edit session database metadata; original executable bytes are never written.; Cancelling an active Ghidra request terminates its ephemeral database and discards session annotations. The selected target remains open; the next provider query imports the original artifact again.; Default-space addresses use lowercase 0x-prefixed hexadecimal; other address spaces use <percent-encoded-space>:0x<hex>.; The Ghidra Program references PDB Comm_GFXI2C.pdb (GUID d304cc6d-b3ee-4851-b468-0ab5e385ca92, age (hex) 1, signature unknown, version RSDS); Ghidra reports load state unknown. Original names and types may be missing; an empty name search does not prove a procedure is absent. Use list_procedures and address-based analysis to inspect recovered functions. REA does not admit a caller-selected PDB companion.; This session uses Ghidra 12.1.2. The bridge is verified against 12.1.4; other 12.1.x builds are accepted and the observed version is reported.; Pseudocode is Ghidra decompiler output, not original source and not text-equivalent to Hopper output.; External functions and functions without an analyzable body return null; other decompiler failures remain explicit.
// pseudocode: provider-specific; not original source


/* Library Function - Single Match
    public: class ATL::CStringT<wchar_t,class StrTraitMFC<wchar_t,class ATL::ChTraitsOS<wchar_t> > >
   __thiscall ATL::CStringT<wchar_t,class StrTraitMFC<wchar_t,class ATL::ChTraitsOS<wchar_t> >
   >::Left(int)const 
   
   Library: Visual Studio 2008 Release */

int __thiscall
ATL::CStringT<wchar_t,StrTraitMFC<wchar_t,ATL::ChTraitsOS<wchar_t>_>_>::Left
          (CStringT<wchar_t,StrTraitMFC<wchar_t,ATL::ChTraitsOS<wchar_t>_>_> *this,int param_1)

{
  int iVar1;
  CStringData *pCVar2;
  IAtlStringMgr *pIVar3;
  int *piVar4;
  int in_stack_00000008;
  
  if (in_stack_00000008 < 0) {
    in_stack_00000008 = 0;
  }
  iVar1 = *(int *)this;
  if (*(int *)(iVar1 + -0xc) <= in_stack_00000008) {
    pCVar2 = CSimpleStringT<wchar_t,0>::CloneData((CStringData *)(iVar1 + -0x10));
    *(CStringData **)param_1 = pCVar2 + 0x10;
    return param_1;
  }
  if (*(int **)(iVar1 + -0x10) != (int *)0x0) {
    pIVar3 = (IAtlStringMgr *)(**(code **)(**(int **)(iVar1 + -0x10) + 0x10))();
    if (pIVar3 != (IAtlStringMgr *)0x0) goto LAB_10003aeb;
  }
  piVar4 = (int *)FUN_10038f10();
  pIVar3 = (IAtlStringMgr *)(**(code **)(*piVar4 + 0x10))();
LAB_10003aeb:
  CSimpleStringT<wchar_t,0>::CSimpleStringT<wchar_t,0>
            ((CSimpleStringT<wchar_t,0> *)param_1,*(wchar_t **)this,in_stack_00000008,pIVar3);
  return param_1;
}

