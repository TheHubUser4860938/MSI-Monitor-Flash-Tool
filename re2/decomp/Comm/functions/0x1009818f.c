// rea decompile_all
// name: OnDrawRibbonKeyTip
// address: 0x1009818f
// body: available
// range: 0x1009818f-0x100982b3 inclusive
// non_contiguous: false
// provider: Ghidra 12.1.2 (ghidra)
// analysis_profile: b075844f08879296d957518397cd0ddda73db81dce53d00d3f0e702766fc2af6
// limitations: The session serves operations only after Ghidra reports default auto-analysis complete; incomplete analysis does not expose partial results.; The imported Program and temporary project are ephemeral and deleted on close. Annotation operations edit session database metadata; original executable bytes are never written.; Cancelling an active Ghidra request terminates its ephemeral database and discards session annotations. The selected target remains open; the next provider query imports the original artifact again.; Default-space addresses use lowercase 0x-prefixed hexadecimal; other address spaces use <percent-encoded-space>:0x<hex>.; The Ghidra Program references PDB Comm.pdb (GUID c3062acb-498d-45fa-a233-c8b7e401bb13, age (hex) 1, signature unknown, version RSDS); Ghidra reports load state unknown. Original names and types may be missing; an empty name search does not prove a procedure is absent. Use list_procedures and address-based analysis to inspect recovered functions. REA does not admit a caller-selected PDB companion.; This session uses Ghidra 12.1.2. The bridge is verified against 12.1.4; other 12.1.x builds are accepted and the observed version is reported.; Pseudocode is Ghidra decompiler output, not original source and not text-equivalent to Hopper output.; External functions and functions without an analyzable body return null; other decompiler failures remain explicit.
// pseudocode: provider-specific; not original source


/* WARNING: Function: __EH_prolog3 replaced with injection: EH_prolog3 */
/* WARNING: Function: __EH_epilog3 replaced with injection: EH_epilog3 */
/* Library Function - Multiple Matches With Same Base Name
    public: virtual void __thiscall CMFCVisualManagerOffice2007::OnDrawRibbonKeyTip(class CDC
   *,class CMFCRibbonBaseElement *,class CRect,class ATL::CStringT<char,class StrTraitMFC<char,class
   ATL::ChTraitsCRT<char> > >)
    public: virtual void __thiscall CMFCVisualManagerOffice2007::OnDrawRibbonKeyTip(class CDC
   *,class CMFCRibbonBaseElement *,class CRect,class ATL::CStringT<wchar_t,class
   StrTraitMFC<wchar_t,class ATL::ChTraitsCRT<wchar_t> > >)
   
   Library: Visual Studio 2015 Release */

void OnDrawRibbonKeyTip(int *param_1,int *param_2,undefined4 param_3,undefined4 param_4,
                       undefined4 param_5,undefined4 param_6,int param_7)

{
  code *pcVar1;
  CMFCVisualManagerOffice2007 *pCVar2;
  int *piVar3;
  int iVar4;
  undefined4 uVar5;
  CMFCVisualManagerOffice2007 *in_ECX;
  int local_30 [5];
  int *local_1c;
  CMFCVisualManagerOffice2007 *local_18;
  int *local_14;
  undefined4 local_8;
  undefined4 uStack_4;
  
  uStack_4 = 0xc;
  local_14 = param_1;
  local_1c = param_2;
  local_8 = 0;
  local_30[0] = 0x100981b5;
  local_18 = in_ECX;
  iVar4 = CMFCVisualManagerOffice2007::CanDrawImage(in_ECX);
  if ((iVar4 == 0) || (*(int *)(in_ECX + 0x8844) == 0)) {
    local_18 = (CMFCVisualManagerOffice2007 *)local_30;
    local_30[0] = FUN_10003060(param_7 + -0x10);
    local_30[0] = local_30[0] + 0x10;
    OnDrawRibbonKeyTip(local_14,local_1c,param_3,param_4,param_5,param_6);
  }
  else {
    pcVar1 = *(code **)(*param_2 + 0xdc);
    local_30[0] = 0x100981d9;
    guard_check_icall();
    local_30[0] = 0x100981dd;
    local_1c = (int *)(*pcVar1)();
    iVar4 = *(int *)(in_ECX + 0x87b0);
    local_30[0] = 0xff;
    guard_check_icall(local_14,param_3,param_4,param_5,param_6,0);
    pCVar2 = local_18;
    (**(code **)(iVar4 + 0x10))();
    ATL::CStringT<wchar_t,StrTraitMFC<wchar_t,ATL::ChTraitsCRT<wchar_t>_>_>::MakeUpper
              ((CStringT<wchar_t,StrTraitMFC<wchar_t,ATL::ChTraitsCRT<wchar_t>_>_> *)&param_7);
    piVar3 = local_14;
    if (local_1c == (int *)0x0) {
      uVar5 = *(undefined4 *)(pCVar2 + 0x90a0);
    }
    else {
      uVar5 = *(undefined4 *)(pCVar2 + 0x90a4);
    }
    pcVar1 = *(code **)(*local_14 + 0x30);
    guard_check_icall(uVar5);
    uVar5 = (*pcVar1)();
    iVar4 = *piVar3;
    guard_check_icall(param_7,*(undefined4 *)(param_7 + -0xc),&param_3,0x25);
    (**(code **)(iVar4 + 0x68))();
    pcVar1 = *(code **)(*piVar3 + 0x30);
    guard_check_icall(uVar5);
    (*pcVar1)();
  }
  local_30[0] = 0x100982ac;
  FUN_10003460();
  return;
}

