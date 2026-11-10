// rea decompile_all
// name: CMFCToolTipCtrl::OnDrawLabel
// address: 0x10102667
// body: available
// range: 0x10102667-0x101027ea inclusive
// non_contiguous: false
// provider: Ghidra 12.1.2 (ghidra)
// analysis_profile: b075844f08879296d957518397cd0ddda73db81dce53d00d3f0e702766fc2af6
// limitations: The session serves operations only after Ghidra reports default auto-analysis complete; incomplete analysis does not expose partial results.; The imported Program and temporary project are ephemeral and deleted on close. Annotation operations edit session database metadata; original executable bytes are never written.; Cancelling an active Ghidra request terminates its ephemeral database and discards session annotations. The selected target remains open; the next provider query imports the original artifact again.; Default-space addresses use lowercase 0x-prefixed hexadecimal; other address spaces use <percent-encoded-space>:0x<hex>.; The Ghidra Program references PDB Comm.pdb (GUID c3062acb-498d-45fa-a233-c8b7e401bb13, age (hex) 1, signature unknown, version RSDS); Ghidra reports load state unknown. Original names and types may be missing; an empty name search does not prove a procedure is absent. Use list_procedures and address-based analysis to inspect recovered functions. REA does not admit a caller-selected PDB companion.; This session uses Ghidra 12.1.2. The bridge is verified against 12.1.4; other 12.1.x builds are accepted and the observed version is reported.; Pseudocode is Ghidra decompiler output, not original source and not text-equivalent to Hopper output.; External functions and functions without an analyzable body return null; other decompiler failures remain explicit.
// pseudocode: provider-specific; not original source


/* WARNING: Function: __EH_prolog3 replaced with injection: EH_prolog3 */
/* WARNING: Function: __EH_epilog3 replaced with injection: EH_epilog3 */
/* Library Function - Single Match
    public: virtual class CSize __thiscall CMFCToolTipCtrl::OnDrawLabel(class CDC *,class CRect,int)
   
   Library: Visual Studio 2015 Release */

int * __thiscall
CMFCToolTipCtrl::OnDrawLabel
          (CMFCToolTipCtrl *this,int *param_1,CDC *param_3,int param_4,undefined4 param_5,
          int param_6,undefined4 param_7,int param_8)

{
  code *pcVar1;
  bool bVar2;
  CDC *pCVar3;
  undefined4 uVar4;
  AFX_GLOBAL_DATA *pAVar5;
  int iVar6;
  int *piVar7;
  uint uVar8;
  CStringT<wchar_t,StrTraitMFC<wchar_t,ATL::ChTraitsCRT<wchar_t>_>_> local_20 [4];
  int local_1c;
  CDC *local_18;
  int local_14 [3];
  undefined4 local_8;
  undefined4 uStack_4;
  
  uStack_4 = 0x14;
  local_8 = 0x10102673;
  local_18 = param_3;
  *param_1 = 0;
  param_1[1] = 0;
  uVar4 = FUN_10013071();
  FUN_10003190(uVar4);
  local_8 = 0;
  CWnd::GetWindowTextW
            ((CWnd *)this,
             (CStringT<wchar_t,StrTraitMFC<wchar_t,ATL::ChTraitsCRT<wchar_t>_>_> *)local_14);
  ATL::CStringT<wchar_t,StrTraitMFC<wchar_t,ATL::ChTraitsCRT<wchar_t>_>_>::Replace
            ((CStringT<wchar_t,StrTraitMFC<wchar_t,ATL::ChTraitsCRT<wchar_t>_>_> *)local_14,L"\t",
             L"    ");
  if ((*(int *)(this + 0xb8) == 0) || (*(int *)(*(int *)(this + 0xe8) + -0xc) == 0)) {
    bVar2 = false;
    local_1c = 0;
  }
  else {
    bVar2 = true;
    local_1c = 1;
  }
  if ((*(int *)(this + 0xc0) == 0) || (!bVar2)) {
    pAVar5 = GetGlobalData();
    pAVar5 = pAVar5 + 0x124;
  }
  else {
    pAVar5 = GetGlobalData();
    pAVar5 = pAVar5 + 300;
  }
  pcVar1 = *(code **)(*(int *)param_3 + 0x28);
  guard_check_icall(pAVar5);
  uVar4 = (*pcVar1)();
  iVar6 = FUN_10010f20(10,0);
  pCVar3 = local_18;
  if (iVar6 < 0) {
    if (param_8 != 0) {
      piVar7 = (int *)CDC::GetTextExtent(local_18,local_20);
      *param_1 = *piVar7;
      param_1[1] = piVar7[1];
      goto LAB_101027c3;
    }
    uVar8 = (uint)(local_1c == 0) * 4 + 0x120;
    if (*(int *)(this + 0xac) != 0) {
      uVar8 = uVar8 | 0x800;
    }
    iVar6 = *(int *)local_18;
    guard_check_icall(local_14[0],*(undefined4 *)(local_14[0] + -0xc),&param_4,uVar8);
    iVar6 = (**(code **)(iVar6 + 0x68))();
    param_1[1] = iVar6;
  }
  else {
    iVar6 = *(int *)local_18;
    guard_check_icall(local_14[0],*(undefined4 *)(local_14[0] + -0xc),&param_4,
                      (-(uint)(param_8 != 0) & 0x400) + 0x800);
    iVar6 = (**(code **)(iVar6 + 0x68))();
    param_1[1] = iVar6;
  }
  *param_1 = param_6 - param_4;
LAB_101027c3:
  pcVar1 = *(code **)(*(int *)pCVar3 + 0x28);
  guard_check_icall(uVar4);
  (*pcVar1)();
  FUN_10003460();
  return param_1;
}

