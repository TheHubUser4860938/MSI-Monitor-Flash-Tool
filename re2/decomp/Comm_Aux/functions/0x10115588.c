// rea decompile_all
// name: CMFCAutoHideButton::GetTextSize
// address: 0x10115588
// body: available
// range: 0x10115588-0x101156a1 inclusive
// non_contiguous: false
// provider: Ghidra 12.1.2 (ghidra)
// analysis_profile: b075844f08879296d957518397cd0ddda73db81dce53d00d3f0e702766fc2af6
// limitations: The session serves operations only after Ghidra reports default auto-analysis complete; incomplete analysis does not expose partial results.; The imported Program and temporary project are ephemeral and deleted on close. Annotation operations edit session database metadata; original executable bytes are never written.; Cancelling an active Ghidra request terminates its ephemeral database and discards session annotations. The selected target remains open; the next provider query imports the original artifact again.; Default-space addresses use lowercase 0x-prefixed hexadecimal; other address spaces use <percent-encoded-space>:0x<hex>.; Ghidra Listing reports a terminal call at 0x10115618 to 0x1004886a FUN_1004886a (external=false, thunk=false, hasNoReturn=true); fallthrough is excluded by Ghidra's flow model. This records Ghidra's FunctionManager flag, not an independent verification that the callee cannot return.; The Ghidra Program references PDB Comm_Aux.pdb (GUID ba7920cc-daa3-4461-a102-1f8f66c67a2a, age (hex) 1, signature unknown, version RSDS); Ghidra reports load state unknown. Original names and types may be missing; an empty name search does not prove a procedure is absent. Use list_procedures and address-based analysis to inspect recovered functions. REA does not admit a caller-selected PDB companion.; This session uses Ghidra 12.1.2. The bridge is verified against 12.1.4; other 12.1.x builds are accepted and the observed version is reported.; Pseudocode is Ghidra decompiler output, not original source and not text-equivalent to Hopper output.; External functions and functions without an analyzable body return null; other decompiler failures remain explicit.
// pseudocode: provider-specific; not original source


/* WARNING: Function: __EH_prolog3 replaced with injection: EH_prolog3 */
/* WARNING: Function: __EH_epilog3 replaced with injection: EH_epilog3 */
/* Library Function - Single Match
    public: virtual class CSize __thiscall CMFCAutoHideButton::GetTextSize(void)const 
   
   Library: Visual Studio 2015 Release */

int * __thiscall CMFCAutoHideButton::GetTextSize(CMFCAutoHideButton *this)

{
  int iVar1;
  undefined4 uVar2;
  AFX_GLOBAL_DATA *pAVar3;
  CPen *pCVar4;
  int *piVar5;
  int *in_stack_00000004;
  CWindowDC local_30 [20];
  CStringT<wchar_t,StrTraitMFC<wchar_t,ATL::ChTraitsCRT<wchar_t>_>_> local_1c [8];
  int local_14 [3];
  undefined4 local_8;
  undefined4 uStack_4;
  
  uStack_4 = 0x20;
  local_8 = 0x10115594;
  *in_stack_00000004 = 0;
  in_stack_00000004[1] = 0;
  if ((*(int *)(this + 0x2c) != 0) && (*(int *)(this + 0x28) != 0)) {
    uVar2 = FUN_10048e90();
    FUN_10034c30(uVar2);
    local_8 = 0;
    CWnd::GetWindowTextW
              (*(CWnd **)(this + 0x2c),
               (CStringT<wchar_t,StrTraitMFC<wchar_t,ATL::ChTraitsCRT<wchar_t>_>_> *)local_14);
    if (*(int *)(local_14[0] + -0xc) != 0) {
      CWindowDC::CWindowDC(local_30,*(CWnd **)(this + 0x28));
      local_8 = CONCAT31(local_8._1_3_,1);
      if ((*(uint *)(this + 0x10) & 0xa000) == 0) {
        pAVar3 = GetGlobalData();
        pCVar4 = (CPen *)(pAVar3 + 0x14c);
      }
      else {
        pAVar3 = GetGlobalData();
        pCVar4 = (CPen *)(pAVar3 + 0x11c);
      }
      pCVar4 = CDC::SelectObject((CDC *)local_30,pCVar4);
      if (pCVar4 == (CPen *)0x0) {
                    /* WARNING: Subroutine does not return */
        FUN_1004886a();
      }
      piVar5 = (int *)CDC::GetTextExtent((CDC *)local_30,local_1c);
      *in_stack_00000004 = *piVar5;
      in_stack_00000004[1] = piVar5[1];
      iVar1 = DAT_10205e8c;
      *in_stack_00000004 = *in_stack_00000004 + DAT_10205e8c;
      in_stack_00000004[1] = in_stack_00000004[1] + iVar1;
      CDC::SelectObject((CDC *)local_30,pCVar4);
      if ((*(uint *)(this + 0x10) & 0xa000) == 0) {
        iVar1 = in_stack_00000004[1];
        in_stack_00000004[1] = *in_stack_00000004;
        *in_stack_00000004 = iVar1;
      }
      CWindowDC::~CWindowDC(local_30);
    }
    if ((*(int *)(*(int *)(this + 0x28) + 0x11c) == 0) && (DAT_10205e98 != 0)) {
      if ((*(uint *)(this + 0x10) & 0xa000) == 0) {
        in_stack_00000004[1] = 0;
      }
      else {
        *in_stack_00000004 = 0;
      }
    }
    FUN_10034f00();
  }
  return in_stack_00000004;
}

