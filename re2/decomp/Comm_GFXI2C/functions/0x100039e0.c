// rea decompile_all
// name: ATL::CStringT<wchar_t,StrTraitMFC<wchar_t,ATL::ChTraitsOS<wchar_t>_>_>::Mid
// address: 0x100039e0
// body: available
// range: 0x100039e0-0x10003a8e inclusive
// non_contiguous: false
// provider: Ghidra 12.1.2 (ghidra)
// analysis_profile: b075844f08879296d957518397cd0ddda73db81dce53d00d3f0e702766fc2af6
// limitations: The session serves operations only after Ghidra reports default auto-analysis complete; incomplete analysis does not expose partial results.; The imported Program and temporary project are ephemeral and deleted on close. Annotation operations edit session database metadata; original executable bytes are never written.; Cancelling an active Ghidra request terminates its ephemeral database and discards session annotations. The selected target remains open; the next provider query imports the original artifact again.; Default-space addresses use lowercase 0x-prefixed hexadecimal; other address spaces use <percent-encoded-space>:0x<hex>.; Ghidra Listing reports a terminal call at 0x10003a4e to 0x10002610 FUN_10002610 (external=false, thunk=false, hasNoReturn=true); fallthrough is excluded by Ghidra's flow model. This records Ghidra's FunctionManager flag, not an independent verification that the callee cannot return.; The Ghidra Program references PDB Comm_GFXI2C.pdb (GUID d304cc6d-b3ee-4851-b468-0ab5e385ca92, age (hex) 1, signature unknown, version RSDS); Ghidra reports load state unknown. Original names and types may be missing; an empty name search does not prove a procedure is absent. Use list_procedures and address-based analysis to inspect recovered functions. REA does not admit a caller-selected PDB companion.; This session uses Ghidra 12.1.2. The bridge is verified against 12.1.4; other 12.1.x builds are accepted and the observed version is reported.; Pseudocode is Ghidra decompiler output, not original source and not text-equivalent to Hopper output.; External functions and functions without an analyzable body return null; other decompiler failures remain explicit.
// pseudocode: provider-specific; not original source


/* Library Function - Single Match
    public: class ATL::CStringT<wchar_t,class StrTraitMFC<wchar_t,class ATL::ChTraitsOS<wchar_t> > >
   __thiscall ATL::CStringT<wchar_t,class StrTraitMFC<wchar_t,class ATL::ChTraitsOS<wchar_t> >
   >::Mid(int,int)const 
   
   Library: Visual Studio 2008 Release */

int __thiscall
ATL::CStringT<wchar_t,StrTraitMFC<wchar_t,ATL::ChTraitsOS<wchar_t>_>_>::Mid
          (CStringT<wchar_t,StrTraitMFC<wchar_t,ATL::ChTraitsOS<wchar_t>_>_> *this,int param_1,
          int param_2)

{
  int iVar1;
  int iVar2;
  CStringData *pCVar3;
  IAtlStringMgr *pIVar4;
  int *piVar5;
  int in_stack_0000000c;
  
  if (param_2 < 0) {
    param_2 = 0;
  }
  if (in_stack_0000000c < 0) {
    in_stack_0000000c = 0;
  }
  if (0x7fffffff - param_2 < in_stack_0000000c) {
                    /* WARNING: Subroutine does not return */
    FUN_10002610((undefined4 *)0x80070057);
  }
  iVar1 = *(int *)this;
  iVar2 = *(int *)(iVar1 + -0xc);
  if (iVar2 < param_2 + in_stack_0000000c) {
    in_stack_0000000c = iVar2 - param_2;
  }
  if (iVar2 < param_2) {
    in_stack_0000000c = 0;
  }
  if ((param_2 == 0) && (in_stack_0000000c == iVar2)) {
    pCVar3 = CSimpleStringT<wchar_t,0>::CloneData((CStringData *)(iVar1 + -0x10));
    *(CStringData **)param_1 = pCVar3 + 0x10;
    return param_1;
  }
  if (*(int **)(iVar1 + -0x10) != (int *)0x0) {
    pIVar4 = (IAtlStringMgr *)(**(code **)(**(int **)(iVar1 + -0x10) + 0x10))();
    if (pIVar4 != (IAtlStringMgr *)0x0) goto LAB_10003a73;
  }
  piVar5 = (int *)FUN_10038f10();
  pIVar4 = (IAtlStringMgr *)(**(code **)(*piVar5 + 0x10))();
LAB_10003a73:
  CSimpleStringT<wchar_t,0>::CSimpleStringT<wchar_t,0>
            ((CSimpleStringT<wchar_t,0> *)param_1,(wchar_t *)(*(int *)this + param_2 * 2),
             in_stack_0000000c,pIVar4);
  return param_1;
}

