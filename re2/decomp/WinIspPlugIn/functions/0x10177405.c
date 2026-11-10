// rea decompile_all
// name: OnUpdateToolTip
// address: 0x10177405
// body: available
// range: 0x10177405-0x10177484 inclusive
// non_contiguous: false
// provider: Ghidra 12.1.2 (ghidra)
// analysis_profile: b075844f08879296d957518397cd0ddda73db81dce53d00d3f0e702766fc2af6
// limitations: The session serves operations only after Ghidra reports default auto-analysis complete; incomplete analysis does not expose partial results.; The imported Program and temporary project are ephemeral and deleted on close. Annotation operations edit session database metadata; original executable bytes are never written.; Cancelling an active Ghidra request terminates its ephemeral database and discards session annotations. The selected target remains open; the next provider query imports the original artifact again.; Default-space addresses use lowercase 0x-prefixed hexadecimal; other address spaces use <percent-encoded-space>:0x<hex>.; The Ghidra Program references PDB WinIspPlugIn.pdb (GUID d9f398c7-6c98-49a8-af25-a0659d5ad2f3, age (hex) 1, signature unknown, version RSDS); Ghidra reports load state unknown. Original names and types may be missing; an empty name search does not prove a procedure is absent. Use list_procedures and address-based analysis to inspect recovered functions. REA does not admit a caller-selected PDB companion.; This session uses Ghidra 12.1.2. The bridge is verified against 12.1.4; other 12.1.x builds are accepted and the observed version is reported.; Pseudocode is Ghidra decompiler output, not original source and not text-equivalent to Hopper output.; External functions and functions without an analyzable body return null; other decompiler failures remain explicit.
// pseudocode: provider-specific; not original source


/* WARNING: Function: __EH_prolog3 replaced with injection: EH_prolog3 */
/* WARNING: Function: __EH_epilog3 replaced with injection: EH_epilog3 */
/* Library Function - Multiple Matches With Same Base Name
    public: virtual int __thiscall CMFCToolBarEditBoxButton::OnUpdateToolTip(class CWnd *,int,class
   CToolTipCtrl &,class ATL::CStringT<char,class StrTraitMFC<char,class ATL::ChTraitsCRT<char> > >
   &)
    public: virtual int __thiscall CMFCToolBarEditBoxButton::OnUpdateToolTip(class CWnd *,int,class
   CToolTipCtrl &,class ATL::CStringT<wchar_t,class StrTraitMFC<wchar_t,class
   ATL::ChTraitsCRT<wchar_t> > > &)
   
   Library: Visual Studio 2015 Release */

undefined4
OnUpdateToolTip(undefined4 param_1,undefined4 param_2,CToolTipCtrl *param_3,undefined4 *param_4)

{
  CWnd *pCVar1;
  code *pcVar2;
  BOOL BVar3;
  undefined4 uVar4;
  int iVar5;
  int *in_ECX;
  wchar_t *local_14 [3];
  undefined4 local_8;
  undefined4 uStack_4;
  
  uStack_4 = 4;
  local_8 = 0x10177411;
  pCVar1 = (CWnd *)in_ECX[0x1e];
  if ((pCVar1 == (CWnd *)0x0) || (BVar3 = IsWindow(*(HWND *)(pCVar1 + 0x20)), BVar3 == 0)) {
    uVar4 = 0;
  }
  else {
    uVar4 = FUN_10049868();
    FUN_100476a0(uVar4);
    local_8 = 0;
    pcVar2 = *(code **)(*in_ECX + 0xa8);
    guard_check_icall(local_14);
    iVar5 = (*pcVar2)();
    if (iVar5 == 0) {
      local_14[0] = (wchar_t *)*param_4;
    }
    CToolTipCtrl::AddTool(param_3,pCVar1,local_14[0],(tagRECT *)0x0,0);
    FUN_100476d0();
    uVar4 = 1;
  }
  return uVar4;
}

