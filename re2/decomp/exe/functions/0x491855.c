// rea decompile_all
// name: CMFCAutoHideButton::GetTextSize
// address: 0x491855
// body: available
// range: 0x491855-0x49196e inclusive
// non_contiguous: false
// provider: Ghidra 12.1.2 (ghidra)
// analysis_profile: ac6d50be2cdf54f7005df47d1ed7e7ef55dee595681eb1b7c2e0b00d70cd697d
// limitations: The session serves operations only after Ghidra reports default auto-analysis complete; incomplete analysis does not expose partial results.; The imported Program and temporary project are ephemeral and deleted on close. Annotation operations edit session database metadata; original executable bytes are never written.; Cancelling an active Ghidra request terminates its ephemeral database and discards session annotations. The selected target remains open; the next provider query imports the original artifact again.; Default-space addresses use lowercase 0x-prefixed hexadecimal; other address spaces use <percent-encoded-space>:0x<hex>.; Ghidra Listing reports a terminal call at 0x4918e5 to 0x429127 FUN_00429127 (external=false, thunk=false, hasNoReturn=true); fallthrough is excluded by Ghidra's flow model. This records Ghidra's FunctionManager flag, not an independent verification that the callee cannot return.; The Ghidra Program references PDB ISPToolForMsi.pdb (GUID b8f2ac8f-1d6f-438d-800f-ed4a14426ac6, age (hex) 1, signature unknown, version RSDS); Ghidra reports load state unknown. Original names and types may be missing; an empty name search does not prove a procedure is absent. Use list_procedures and address-based analysis to inspect recovered functions. REA does not admit a caller-selected PDB companion.; This session uses Ghidra 12.1.2. The bridge is verified against 12.1.4; other 12.1.x builds are accepted and the observed version is reported.; Pseudocode is Ghidra decompiler output, not original source and not text-equivalent to Hopper output.; External functions and functions without an analyzable body return null; other decompiler failures remain explicit.
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
  local_8 = 0x491861;
  *in_stack_00000004 = 0;
  in_stack_00000004[1] = 0;
  if ((*(int *)(this + 0x2c) != 0) && (*(int *)(this + 0x28) != 0)) {
    uVar2 = FUN_004295fe();
    FUN_0040eb30(uVar2);
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
        FUN_00429127();
      }
      piVar5 = (int *)CDC::GetTextExtent((CDC *)local_30,local_1c);
      *in_stack_00000004 = *piVar5;
      in_stack_00000004[1] = piVar5[1];
      iVar1 = DAT_0060c6f0;
      *in_stack_00000004 = *in_stack_00000004 + DAT_0060c6f0;
      in_stack_00000004[1] = in_stack_00000004[1] + iVar1;
      CDC::SelectObject((CDC *)local_30,pCVar4);
      if ((*(uint *)(this + 0x10) & 0xa000) == 0) {
        iVar1 = in_stack_00000004[1];
        in_stack_00000004[1] = *in_stack_00000004;
        *in_stack_00000004 = iVar1;
      }
      CWindowDC::~CWindowDC(local_30);
    }
    if ((*(int *)(*(int *)(this + 0x28) + 0x11c) == 0) && (DAT_0060c6fc != 0)) {
      if ((*(uint *)(this + 0x10) & 0xa000) == 0) {
        in_stack_00000004[1] = 0;
      }
      else {
        *in_stack_00000004 = 0;
      }
    }
    FUN_0040efa0();
  }
  return in_stack_00000004;
}

