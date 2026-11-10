// rea decompile_all
// name: AFXGetRegPath
// address: 0x100beab7
// body: available
// range: 0x100beab7-0x100beb9f inclusive
// non_contiguous: false
// provider: Ghidra 12.1.2 (ghidra)
// analysis_profile: b075844f08879296d957518397cd0ddda73db81dce53d00d3f0e702766fc2af6
// limitations: The session serves operations only after Ghidra reports default auto-analysis complete; incomplete analysis does not expose partial results.; The imported Program and temporary project are ephemeral and deleted on close. Annotation operations edit session database metadata; original executable bytes are never written.; Cancelling an active Ghidra request terminates its ephemeral database and discards session annotations. The selected target remains open; the next provider query imports the original artifact again.; Default-space addresses use lowercase 0x-prefixed hexadecimal; other address spaces use <percent-encoded-space>:0x<hex>.; Ghidra Listing reports a terminal call at 0x100bead0 to 0x10012a3f FUN_10012a3f (external=false, thunk=false, hasNoReturn=true); fallthrough is excluded by Ghidra's flow model. This records Ghidra's FunctionManager flag, not an independent verification that the callee cannot return.; The Ghidra Program references PDB Comm.pdb (GUID c3062acb-498d-45fa-a233-c8b7e401bb13, age (hex) 1, signature unknown, version RSDS); Ghidra reports load state unknown. Original names and types may be missing; an empty name search does not prove a procedure is absent. Use list_procedures and address-based analysis to inspect recovered functions. REA does not admit a caller-selected PDB companion.; This session uses Ghidra 12.1.2. The bridge is verified against 12.1.4; other 12.1.x builds are accepted and the observed version is reported.; Pseudocode is Ghidra decompiler output, not original source and not text-equivalent to Hopper output.; External functions and functions without an analyzable body return null; other decompiler failures remain explicit.
// pseudocode: provider-specific; not original source


/* WARNING: Function: __EH_prolog3 replaced with injection: EH_prolog3 */
/* WARNING: Function: __EH_epilog3 replaced with injection: EH_epilog3 */
/* Library Function - Single Match
    class ATL::CStringT<wchar_t,class StrTraitMFC<wchar_t,class ATL::ChTraitsCRT<wchar_t> > >
   __cdecl AFXGetRegPath(wchar_t const *,wchar_t const *)
   
   Library: Visual Studio 2015 Release */

wchar_t * __cdecl AFXGetRegPath(wchar_t *param_1,wchar_t *param_2)

{
  int iVar1;
  undefined4 uVar2;
  AFX_MODULE_STATE *pAVar3;
  short *in_stack_0000000c;
  int local_14;
  
  if (param_2 != (wchar_t *)0x0) {
    uVar2 = FUN_10013071();
    FUN_10003190(uVar2);
    if ((in_stack_0000000c != (short *)0x0) && (*in_stack_0000000c != 0)) {
      FUN_10003780(in_stack_0000000c);
      return param_1;
    }
    pAVar3 = AfxGetModuleState();
    iVar1 = *(int *)(pAVar3 + 4);
    pAVar3 = AfxGetModuleState();
    if ((*(int *)(*(int *)(pAVar3 + 4) + 0x58) != 0) &&
       (pAVar3 = AfxGetModuleState(), *(int *)(*(int *)(pAVar3 + 4) + 0x6c) != 0)) {
      FUN_10003780(L"SOFTWARE\\");
      FUN_100037c0(*(undefined4 *)(iVar1 + 0x58));
      if (*(int *)(local_14 + -0xc) != 0) {
        FUN_100123a8(local_14,*(undefined4 *)(local_14 + -0xc));
        ATL::CSimpleStringT<wchar_t,0>::Append((CSimpleStringT<wchar_t,0> *)param_1,L"\\");
      }
      ATL::CSimpleStringT<wchar_t,0>::Append
                ((CSimpleStringT<wchar_t,0> *)param_1,*(wchar_t **)(iVar1 + 0x6c));
      ATL::CSimpleStringT<wchar_t,0>::Append((CSimpleStringT<wchar_t,0> *)param_1,L"\\");
      ATL::CSimpleStringT<wchar_t,0>::Append((CSimpleStringT<wchar_t,0> *)param_1,param_2);
      ATL::CSimpleStringT<wchar_t,0>::Append((CSimpleStringT<wchar_t,0> *)param_1,L"\\");
      FUN_10003460();
      return param_1;
    }
  }
                    /* WARNING: Subroutine does not return */
  FUN_10012a3f();
}

