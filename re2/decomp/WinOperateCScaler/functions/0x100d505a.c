// rea decompile_all
// name: CMFCRibbonBaseElement::SetACCData
// address: 0x100d505a
// body: available
// range: 0x100d505a-0x100d52cb inclusive
// non_contiguous: false
// provider: Ghidra 12.1.2 (ghidra)
// analysis_profile: b075844f08879296d957518397cd0ddda73db81dce53d00d3f0e702766fc2af6
// limitations: The session serves operations only after Ghidra reports default auto-analysis complete; incomplete analysis does not expose partial results.; The imported Program and temporary project are ephemeral and deleted on close. Annotation operations edit session database metadata; original executable bytes are never written.; Cancelling an active Ghidra request terminates its ephemeral database and discards session annotations. The selected target remains open; the next provider query imports the original artifact again.; Default-space addresses use lowercase 0x-prefixed hexadecimal; other address spaces use <percent-encoded-space>:0x<hex>.; The Ghidra Program references PDB WinOperateCScaler.pdb (GUID a6737962-efea-4805-8ae6-1fc1ef126554, age (hex) 1, signature unknown, version RSDS); Ghidra reports load state unknown. Original names and types may be missing; an empty name search does not prove a procedure is absent. Use list_procedures and address-based analysis to inspect recovered functions. REA does not admit a caller-selected PDB companion.; This session uses Ghidra 12.1.2. The bridge is verified against 12.1.4; other 12.1.x builds are accepted and the observed version is reported.; Pseudocode is Ghidra decompiler output, not original source and not text-equivalent to Hopper output.; External functions and functions without an analyzable body return null; other decompiler failures remain explicit.
// pseudocode: provider-specific; not original source


/* WARNING: Function: __EH_prolog3 replaced with injection: EH_prolog3 */
/* WARNING: Function: __EH_epilog3 replaced with injection: EH_epilog3 */
/* Library Function - Single Match
    public: virtual int __thiscall CMFCRibbonBaseElement::SetACCData(class CWnd *,class
   CAccessibilityData &)
   
   Library: Visual Studio 2015 Release */

int __thiscall
CMFCRibbonBaseElement::SetACCData
          (CMFCRibbonBaseElement *this,CWnd *param_1,CAccessibilityData *param_2)

{
  code *pcVar1;
  short sVar2;
  int iVar3;
  wchar_t *pwVar4;
  undefined4 uVar5;
  int *piVar6;
  CMFCRibbonBaseElement *pCVar7;
  CMFCRibbonBaseElement *pCVar8;
  CMFCRibbonBaseElement *local_18;
  CMFCRibbonBaseElement *local_14;
  int local_8;
  undefined4 uStack_4;
  
  uStack_4 = 8;
  local_8 = 0x100d5066;
  local_14 = this;
  CAccessibilityData::Clear(param_2);
  local_18 = this + 0x60;
  pCVar7 = local_18;
  if (*(int *)(*(int *)local_18 + -0xc) == 0) {
    pCVar7 = this + 0x6c;
  }
  FUN_10018680(pCVar7);
  ATL::CStringT<wchar_t,StrTraitMFC<wchar_t,ATL::ChTraitsCRT<wchar_t>_>_>::Remove
            ((CStringT<wchar_t,StrTraitMFC<wchar_t,ATL::ChTraitsCRT<wchar_t>_>_> *)param_2,L'&');
  FUN_10019070();
  FUN_10018fc0();
  iVar3 = IsMenuMode(this);
  *(uint *)(param_2 + 0x18) = (-(uint)(iVar3 != 0) & 0xffffffe1) + 0x2b;
  FUN_10018680(this + 0x70);
  *(undefined4 *)(param_2 + 0x20) = 1;
  iVar3 = IsMenuMode(this);
  pwVar4 = L"Execute";
  if (iVar3 == 0) {
    pwVar4 = L"Press";
  }
  ATL::CSimpleStringT<wchar_t,0>::Append((CSimpleStringT<wchar_t,0> *)(param_2 + 0x14),pwVar4);
  *(undefined4 *)(param_2 + 0x1c) = 0x100000;
  pcVar1 = *(code **)(*(int *)this + 0xe0);
  guard_check_icall();
  iVar3 = (*pcVar1)();
  if (iVar3 != 0) {
    *(uint *)(param_2 + 0x1c) = *(uint *)(param_2 + 0x1c) | 0x10;
  }
  pcVar1 = *(code **)(*(int *)this + 0xdc);
  guard_check_icall();
  iVar3 = (*pcVar1)();
  if (iVar3 != 0) {
    *(uint *)(param_2 + 0x1c) = *(uint *)(param_2 + 0x1c) | 1;
  }
  pcVar1 = *(code **)(*(int *)this + 0xd8);
  guard_check_icall();
  iVar3 = (*pcVar1)();
  if (iVar3 == 0) {
    iVar3 = IsMenuMode(this);
    if (iVar3 == 0) goto LAB_100d5166;
    pcVar1 = *(code **)(*(int *)this + 0xd0);
    guard_check_icall();
    iVar3 = (*pcVar1)();
    if (iVar3 == 0) goto LAB_100d5166;
  }
  *(uint *)(param_2 + 0x1c) = *(uint *)(param_2 + 0x1c) | 4;
LAB_100d5166:
  ((tagRECT *)(param_2 + 0x24))->left = *(LONG *)(this + 0x74);
  *(undefined4 *)(param_2 + 0x28) = *(undefined4 *)(this + 0x78);
  *(undefined4 *)(param_2 + 0x2c) = *(undefined4 *)(this + 0x7c);
  *(undefined4 *)(param_2 + 0x30) = *(undefined4 *)(this + 0x80);
  CWnd::ClientToScreen(param_1,(tagRECT *)(param_2 + 0x24));
  pCVar7 = local_14;
  pcVar1 = *(code **)(*(int *)local_14 + 0x118);
  guard_check_icall();
  iVar3 = (*pcVar1)();
  if (iVar3 == 0) {
    iVar3 = FUN_100187a0(*(int *)(pCVar7 + 100) + -0x10);
    pCVar8 = (CMFCRibbonBaseElement *)(iVar3 + 0x10);
    local_8 = 0;
    local_14 = pCVar8;
    if (((*(int *)(pCVar7 + 0xc4) == 0) && (*(int *)(pCVar7 + 0x94) != 0)) &&
       (*(int *)(iVar3 + 4) < 2)) {
      iVar3 = ATL::CStringT<wchar_t,StrTraitMFC<wchar_t,ATL::ChTraitsCRT<wchar_t>_>_>::Find
                        ((CStringT<wchar_t,StrTraitMFC<wchar_t,ATL::ChTraitsCRT<wchar_t>_>_> *)
                         (pCVar7 + 0x60),L'&',0);
      if ((-1 < iVar3) && (iVar3 < *(int *)(*(int *)(pCVar7 + 0x60) + -0xc) + -1)) {
        local_18 = (CMFCRibbonBaseElement *)(iVar3 + 1);
        sVar2 = FUN_1001ea46(local_18);
        if (sVar2 != 0x26) {
          uVar5 = FUN_10018cc0(&local_18,local_18,1);
          local_8._0_1_ = 1;
          FUN_10018680(uVar5);
          local_8 = (uint)local_8._1_3_ << 8;
          ATL::CStringData::Release((CStringData *)(local_18 + -0x10));
          pCVar8 = local_14;
        }
      }
    }
    if (*(int *)((int)pCVar8 + -0xc) != 0) {
      ATL::CSimpleStringT<wchar_t,0>::Append((CSimpleStringT<wchar_t,0> *)(param_2 + 0xc),L"Alt, ");
      if (*(int *)(pCVar7 + 0x88) != 0) {
        piVar6 = (int *)ATL::operator+((CStringT<wchar_t,class_StrTraitMFC<wchar_t,class_ATL::ChTraitsCRT<wchar_t>_>_>
                                        *)&local_18,(wchar_t *)(*(int *)(pCVar7 + 0x88) + 0xf4));
        local_8._0_1_ = 2;
        FUN_1001d630(*piVar6,*(undefined4 *)(*piVar6 + -0xc));
        local_8 = (uint)local_8._1_3_ << 8;
        ATL::CStringData::Release((CStringData *)(local_18 + -0x10));
      }
      FUN_1001d630(pCVar8,*(undefined4 *)((int)pCVar8 + -0xc));
    }
    ATL::CStringData::Release((CStringData *)((int)pCVar8 + -0x10));
  }
  else {
    pwVar4 = *(wchar_t **)local_18;
    if (*(int *)(pwVar4 + -6) == 0) {
      pwVar4 = L"Separator";
    }
    ATL::CSimpleStringT<wchar_t,0>::Append((CSimpleStringT<wchar_t,0> *)param_2,pwVar4);
    *(undefined4 *)(param_2 + 0x1c) = 0;
    *(undefined4 *)(param_2 + 0x18) = 0x15;
    FUN_10018940();
  }
  return 1;
}

