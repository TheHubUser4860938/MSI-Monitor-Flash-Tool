// rea decompile_all
// name: CMFCRibbonBaseElement::SetACCData
// address: 0x100ffff3
// body: available
// range: 0x100ffff3-0x10100264 inclusive
// non_contiguous: false
// provider: Ghidra 12.1.2 (ghidra)
// analysis_profile: b075844f08879296d957518397cd0ddda73db81dce53d00d3f0e702766fc2af6
// limitations: The session serves operations only after Ghidra reports default auto-analysis complete; incomplete analysis does not expose partial results.; The imported Program and temporary project are ephemeral and deleted on close. Annotation operations edit session database metadata; original executable bytes are never written.; Cancelling an active Ghidra request terminates its ephemeral database and discards session annotations. The selected target remains open; the next provider query imports the original artifact again.; Default-space addresses use lowercase 0x-prefixed hexadecimal; other address spaces use <percent-encoded-space>:0x<hex>.; The Ghidra Program references PDB Comm_Aux.pdb (GUID ba7920cc-daa3-4461-a102-1f8f66c67a2a, age (hex) 1, signature unknown, version RSDS); Ghidra reports load state unknown. Original names and types may be missing; an empty name search does not prove a procedure is absent. Use list_procedures and address-based analysis to inspect recovered functions. REA does not admit a caller-selected PDB companion.; This session uses Ghidra 12.1.2. The bridge is verified against 12.1.4; other 12.1.x builds are accepted and the observed version is reported.; Pseudocode is Ghidra decompiler output, not original source and not text-equivalent to Hopper output.; External functions and functions without an analyzable body return null; other decompiler failures remain explicit.
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
  local_8 = 0x100fffff;
  local_14 = this;
  CAccessibilityData::Clear(param_2);
  local_18 = this + 0x60;
  pCVar7 = local_18;
  if (*(int *)(*(int *)local_18 + -0xc) == 0) {
    pCVar7 = this + 0x6c;
  }
  FUN_10034940(pCVar7);
  FUN_10037b90(0x26);
  FUN_10034370();
  FUN_100342c0();
  iVar3 = IsMenuMode(this);
  *(uint *)(param_2 + 0x18) = (-(uint)(iVar3 != 0) & 0xffffffe1) + 0x2b;
  FUN_10034940(this + 0x70);
  *(undefined4 *)(param_2 + 0x20) = 1;
  iVar3 = IsMenuMode(this);
  pwVar4 = L"Execute";
  if (iVar3 == 0) {
    pwVar4 = L"Press";
  }
  FUN_100352a0(pwVar4);
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
    if (iVar3 == 0) goto LAB_101000ff;
    pcVar1 = *(code **)(*(int *)this + 0xd0);
    guard_check_icall();
    iVar3 = (*pcVar1)();
    if (iVar3 == 0) goto LAB_101000ff;
  }
  *(uint *)(param_2 + 0x1c) = *(uint *)(param_2 + 0x1c) | 4;
LAB_101000ff:
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
    iVar3 = FUN_100349e0(*(int *)(pCVar7 + 100) + -0x10);
    pCVar8 = (CMFCRibbonBaseElement *)(iVar3 + 0x10);
    local_8 = 0;
    local_14 = pCVar8;
    if (((*(int *)(pCVar7 + 0xc4) == 0) && (*(int *)(pCVar7 + 0x94) != 0)) &&
       (*(int *)(iVar3 + 4) < 2)) {
      iVar3 = FUN_10034010(0x26,0);
      if ((-1 < iVar3) && (iVar3 < *(int *)(*(int *)(pCVar7 + 0x60) + -0xc) + -1)) {
        local_18 = (CMFCRibbonBaseElement *)(iVar3 + 1);
        sVar2 = FUN_10034290(local_18);
        if (sVar2 != 0x26) {
          uVar5 = FUN_10033f00(&local_18,local_18,1);
          local_8._0_1_ = 1;
          FUN_10034940(uVar5);
          local_8 = (uint)local_8._1_3_ << 8;
          FUN_10034f00();
          pCVar8 = local_14;
        }
      }
    }
    if (*(int *)((int)pCVar8 + -0xc) != 0) {
      FUN_100352a0(L"Alt, ");
      if (*(int *)(pCVar7 + 0x88) != 0) {
        piVar6 = (int *)FUN_10033c90(&local_18,*(int *)(pCVar7 + 0x88) + 0xf4,&DAT_101c9548);
        local_8._0_1_ = 2;
        FUN_10034490(*piVar6,*(undefined4 *)(*piVar6 + -0xc));
        local_8 = (uint)local_8._1_3_ << 8;
        FUN_10034f00();
      }
      FUN_10034490(pCVar8,*(undefined4 *)((int)pCVar8 + -0xc));
    }
    FUN_10034f00();
  }
  else {
    pwVar4 = *(wchar_t **)local_18;
    if (*(int *)(pwVar4 + -6) == 0) {
      pwVar4 = L"Separator";
    }
    FUN_100352a0(pwVar4);
    *(undefined4 *)(param_2 + 0x1c) = 0;
    *(undefined4 *)(param_2 + 0x18) = 0x15;
    FUN_10034ea0();
  }
  return 1;
}

