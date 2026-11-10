// rea decompile_all
// name: CPreviewViewEx::OnDisplayPageNumber
// address: 0x1012adfb
// body: available
// range: 0x1012adfb-0x1012aef7 inclusive
// non_contiguous: false
// provider: Ghidra 12.1.2 (ghidra)
// analysis_profile: b075844f08879296d957518397cd0ddda73db81dce53d00d3f0e702766fc2af6
// limitations: The session serves operations only after Ghidra reports default auto-analysis complete; incomplete analysis does not expose partial results.; The imported Program and temporary project are ephemeral and deleted on close. Annotation operations edit session database metadata; original executable bytes are never written.; Cancelling an active Ghidra request terminates its ephemeral database and discards session annotations. The selected target remains open; the next provider query imports the original artifact again.; Default-space addresses use lowercase 0x-prefixed hexadecimal; other address spaces use <percent-encoded-space>:0x<hex>.; Ghidra Listing reports a terminal call at 0x1012ae12 to 0x10012a3f FUN_10012a3f (external=false, thunk=false, hasNoReturn=true); fallthrough is excluded by Ghidra's flow model. This records Ghidra's FunctionManager flag, not an independent verification that the callee cannot return.; The Ghidra Program references PDB Comm.pdb (GUID c3062acb-498d-45fa-a233-c8b7e401bb13, age (hex) 1, signature unknown, version RSDS); Ghidra reports load state unknown. Original names and types may be missing; an empty name search does not prove a procedure is absent. Use list_procedures and address-based analysis to inspect recovered functions. REA does not admit a caller-selected PDB companion.; This session uses Ghidra 12.1.2. The bridge is verified against 12.1.4; other 12.1.x builds are accepted and the observed version is reported.; Pseudocode is Ghidra decompiler output, not original source and not text-equivalent to Hopper output.; External functions and functions without an analyzable body return null; other decompiler failures remain explicit.
// pseudocode: provider-specific; not original source


/* WARNING: Function: __EH_prolog3 replaced with injection: EH_prolog3 */
/* WARNING: Function: __EH_epilog3 replaced with injection: EH_epilog3 */
/* Library Function - Single Match
    protected: virtual void __thiscall CPreviewViewEx::OnDisplayPageNumber(unsigned int,unsigned
   int)
   
   Library: Visual Studio 2015 Release */

void __thiscall CPreviewViewEx::OnDisplayPageNumber(CPreviewViewEx *this,uint param_1,uint param_2)

{
  code *pcVar1;
  CFrameWnd *pCVar2;
  undefined4 uVar3;
  int iVar4;
  CStringT<wchar_t,StrTraitMFC<wchar_t,ATL::ChTraitsCRT<wchar_t>_>_> *this_00;
  undefined4 local_18;
  LPARAM local_14 [3];
  undefined4 local_8;
  undefined4 uStack_4;
  
  uStack_4 = 0xc;
  local_8 = 0x1012ae07;
  if (*(int *)(this + 0x164) == 0) {
                    /* WARNING: Subroutine does not return */
    FUN_10012a3f();
  }
  pCVar2 = AFXGetParentFrame((CWnd *)this);
  uVar3 = FUN_10013071();
  FUN_10003190(uVar3);
  local_8 = 0;
  iVar4 = AfxExtractSubString((CStringT<wchar_t,StrTraitMFC<wchar_t,ATL::ChTraitsCRT<wchar_t>_>_> *)
                              &local_18,*(wchar_t **)(*(int *)(this + 0x164) + 0x1c),
                              (uint)(param_2 != 1),L'\n');
  if (iVar4 != 0) {
    uVar3 = FUN_10013071();
    FUN_10003190(uVar3);
    local_8 = CONCAT31(local_8._1_3_,1);
    if (param_2 == 1) {
      ATL::CStringT<wchar_t,StrTraitMFC<wchar_t,ATL::ChTraitsCRT<wchar_t>_>_>::Format
                (this_00,(wchar_t *)local_14,local_18,param_1);
    }
    else {
      ATL::CStringT<wchar_t,StrTraitMFC<wchar_t,ATL::ChTraitsCRT<wchar_t>_>_>::Format
                ((CStringT<wchar_t,StrTraitMFC<wchar_t,ATL::ChTraitsCRT<wchar_t>_>_> *)param_1,
                 (wchar_t *)local_14,local_18,param_1,(param_2 - 1) + param_1);
    }
    if (*(int **)(this + 0xea8) == (int *)0x0) {
      SendMessageW(*(HWND *)(pCVar2 + 0x20),0x362,0,local_14[0]);
    }
    else {
      pcVar1 = *(code **)(**(int **)(this + 0xea8) + 800);
      guard_check_icall(0xff,local_14[0],1);
      (*pcVar1)();
    }
    FUN_10003460();
  }
  FUN_10003460();
  return;
}

