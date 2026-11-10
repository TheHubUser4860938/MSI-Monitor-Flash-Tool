// rea decompile_all
// name: CMFCMaskedEdit::OnCharDelete
// address: 0x1007069d
// body: available
// range: 0x1007069d-0x10070ac4 inclusive
// non_contiguous: false
// provider: Ghidra 12.1.2 (ghidra)
// analysis_profile: b075844f08879296d957518397cd0ddda73db81dce53d00d3f0e702766fc2af6
// limitations: The session serves operations only after Ghidra reports default auto-analysis complete; incomplete analysis does not expose partial results.; The imported Program and temporary project are ephemeral and deleted on close. Annotation operations edit session database metadata; original executable bytes are never written.; Cancelling an active Ghidra request terminates its ephemeral database and discards session annotations. The selected target remains open; the next provider query imports the original artifact again.; Default-space addresses use lowercase 0x-prefixed hexadecimal; other address spaces use <percent-encoded-space>:0x<hex>.; The Ghidra Program references PDB Comm_Aux.pdb (GUID ba7920cc-daa3-4461-a102-1f8f66c67a2a, age (hex) 1, signature unknown, version RSDS); Ghidra reports load state unknown. Original names and types may be missing; an empty name search does not prove a procedure is absent. Use list_procedures and address-based analysis to inspect recovered functions. REA does not admit a caller-selected PDB companion.; This session uses Ghidra 12.1.2. The bridge is verified against 12.1.4; other 12.1.x builds are accepted and the observed version is reported.; Pseudocode is Ghidra decompiler output, not original source and not text-equivalent to Hopper output.; External functions and functions without an analyzable body return null; other decompiler failures remain explicit.
// pseudocode: provider-specific; not original source


/* WARNING: Function: __EH_prolog3 replaced with injection: EH_prolog3 */
/* WARNING: Function: __EH_epilog3 replaced with injection: EH_epilog3 */
/* Library Function - Single Match
    private: void __thiscall CMFCMaskedEdit::OnCharDelete(unsigned int,unsigned int,unsigned int)
   
   Library: Visual Studio 2015 Release */

void __thiscall
CMFCMaskedEdit::OnCharDelete(CMFCMaskedEdit *this,uint param_1,uint param_2,uint param_3)

{
  short sVar1;
  undefined2 uVar2;
  uint uVar3;
  int iVar4;
  undefined4 uVar5;
  CMFCMaskedEdit *pCVar6;
  int *piVar7;
  CMFCMaskedEdit *pCVar8;
  CMFCMaskedEdit *pCVar9;
  bool bVar10;
  CMFCMaskedEdit *local_38;
  CMFCMaskedEdit *local_34;
  CMFCMaskedEdit *local_30;
  uint local_2c;
  CMFCMaskedEdit *local_28;
  CMFCMaskedEdit *local_24;
  CMFCMaskedEdit *local_20;
  CMFCMaskedEdit *local_1c;
  CMFCMaskedEdit *local_18;
  CMFCMaskedEdit *local_14 [3];
  int local_8;
  undefined4 uStack_4;
  
  uStack_4 = 0x28;
  local_8 = 0x100706a9;
  local_1c = this;
  SendMessageW(*(HWND *)(this + 0x20),0xb0,(WPARAM)&local_28,(LPARAM)&local_24);
  SendMessageW(*(HWND *)(this + 0x20),0xb0,(WPARAM)&local_20,(LPARAM)local_14);
  GetGroupBounds(this,(int *)&local_20,(int *)local_14,(int)local_20,1);
  pCVar9 = local_28;
  local_38 = local_28;
  if (((((int)local_28 < 0) && (*(int *)(*(int *)(this + 0x80) + -0xc) < (int)local_24)) ||
      ((int)local_28 < (int)local_20)) ||
     ((((int)local_14[0] < (int)local_28 || ((int)local_24 < (int)local_20)) ||
      ((int)local_14[0] < (int)local_24)))) {
    MessageBeep(0xffffffff);
LAB_10070ab6:
    CEdit::SetSel((CEdit *)this,(int)local_20,(int)local_14[0],0);
    return;
  }
  if (local_28 == local_24) {
    if (*(int *)(*(int *)(this + 0x84) + -0xc) == 0) {
      SendMessageW(*(HWND *)(this + 0x20),0xb0,(WPARAM)&local_30,(LPARAM)&local_34);
      FUN_100509af();
LAB_100708ff:
      DoUpdate(this,1,(int)local_30,(int)local_34);
      return;
    }
    if (local_24 == local_14[0]) {
LAB_1007074a:
      MessageBeep(0xffffffff);
      return;
    }
    pCVar9 = (CMFCMaskedEdit *)0x1;
    local_30 = (CMFCMaskedEdit *)0x1;
    uVar3 = FUN_10034290(local_28);
    local_34 = (CMFCMaskedEdit *)(uVar3 & 0xffff);
    local_18 = (CMFCMaskedEdit *)0x0;
    local_1c = local_28 + 1;
    local_2c = 1;
    do {
      if ((int)local_14[0] <= (int)local_1c) break;
      sVar1 = FUN_10034290(local_1c);
      if (sVar1 == (short)local_34) {
        pCVar9 = pCVar9 + 1;
        local_1c = local_1c + 1;
        local_30 = pCVar9;
      }
      else {
        local_2c = 0;
      }
    } while (local_2c != 0);
    iVar4 = (int)(local_28 + (int)pCVar9) - (int)local_14[0];
    bVar10 = SBORROW4((int)(local_28 + (int)pCVar9),(int)local_14[0]);
    local_1c = local_28;
    while (bVar10 != iVar4 < 0) {
      sVar1 = FUN_10034290(local_1c);
      if (sVar1 != *(short *)(this + 0x8c)) {
        iVar4 = *(int *)this;
        uVar3 = FUN_10034290(local_1c);
        uVar3 = uVar3 & 0xffff;
        uVar2 = FUN_10034290(local_1c);
        guard_check_icall(uVar2,uVar3);
        iVar4 = (**(code **)(iVar4 + 0x164))();
        pCVar9 = local_30;
        if (iVar4 == 0) goto LAB_1007074a;
      }
      local_1c = local_1c + 1;
      iVar4 = (int)(local_1c + (int)pCVar9) - (int)local_14[0];
      bVar10 = SBORROW4((int)(local_1c + (int)pCVar9),(int)local_14[0]);
    }
    local_30 = this + 0x80;
    FUN_10033f00(&local_1c,local_28,pCVar9);
    local_8 = 0;
    if (0 < (int)pCVar9) {
      uVar5 = FUN_10033e80(&local_34,pCVar9 + -1);
      local_8._0_1_ = 1;
      FUN_10034940(uVar5);
      local_8 = (uint)local_8._1_3_ << 8;
      FUN_10034f00();
      ATL::CSimpleStringT<wchar_t,0>::AppendChar
                ((CSimpleStringT<wchar_t,0> *)&local_1c,*(wchar_t *)(this + 0x8c));
    }
    CEdit::SetSel((CEdit *)this,(int)local_28,(int)(local_28 + (int)pCVar9),0);
    pCVar9 = local_1c;
    SendMessageW(*(HWND *)(this + 0x20),0xc2,1,(LPARAM)local_1c);
    CEdit::SetSel((CEdit *)this,(int)local_28,(int)local_28,0);
    pCVar6 = (CMFCMaskedEdit *)0x0;
    if (0 < *(int *)(pCVar9 + -0xc)) {
      do {
        uVar2 = FUN_10034290(pCVar6);
        FUN_10034230(local_18 + (int)local_28,uVar2);
        pCVar6 = local_18 + 1;
        local_18 = pCVar6;
      } while ((int)pCVar6 < *(int *)(pCVar9 + -0xc));
    }
  }
  else {
    if (*(int *)(*(int *)(this + 0x88) + -0xc) == 0) {
      SendMessageW(*(HWND *)(this + 0x20),0xb0,(WPARAM)&local_18,(LPARAM)&local_38);
      FUN_100509af();
      local_30 = local_18;
      local_34 = local_38;
      goto LAB_100708ff;
    }
    local_34 = this + 0x84;
    uVar3 = 1;
    local_2c = FUN_10034290(local_28);
    local_2c = local_2c & 0xffff;
    pCVar9 = pCVar9 + 1;
    local_18 = (CMFCMaskedEdit *)0x0;
    local_30 = (CMFCMaskedEdit *)0x1;
    do {
      if ((int)local_14[0] <= (int)pCVar9) break;
      sVar1 = FUN_10034290(pCVar9);
      if (sVar1 == (short)local_2c) {
        uVar3 = uVar3 + 1;
        pCVar9 = pCVar9 + 1;
      }
      else {
        local_30 = (CMFCMaskedEdit *)0x0;
      }
    } while (local_30 != (CMFCMaskedEdit *)0x0);
    this = local_1c;
    pCVar9 = local_38;
    local_2c = uVar3;
    if ((int)uVar3 < (int)local_24 - (int)local_28) {
      MessageBeep(0xffffffff);
      local_14[0] = pCVar9 + uVar3;
      local_20 = pCVar9;
      goto LAB_10070ab6;
    }
    local_34 = local_1c + 0x80;
    FUN_10033f00(&local_1c,local_38,uVar3);
    local_8 = 2;
    if (0 < (int)uVar3) {
      uVar5 = FUN_10033e80(&local_38,local_2c - ((int)local_24 - (int)local_28));
      local_8._0_1_ = 3;
      FUN_10034940(uVar5);
      local_8._0_1_ = 2;
      FUN_10034f00();
      piVar7 = (int *)ATL::CStringT<wchar_t,StrTraitMFC<wchar_t,ATL::ChTraitsCRT<wchar_t>_>_>::
                      CStringT<wchar_t,StrTraitMFC<wchar_t,ATL::ChTraitsCRT<wchar_t>_>_>
                                ((CStringT<wchar_t,StrTraitMFC<wchar_t,ATL::ChTraitsCRT<wchar_t>_>_>
                                  *)&local_38,*(wchar_t *)(this + 0x8c),
                                 (int)local_24 - (int)local_28);
      local_8._0_1_ = 4;
      FUN_10034490(*piVar7,*(undefined4 *)(*piVar7 + -0xc));
      local_8 = CONCAT31(local_8._1_3_,2);
      FUN_10034f00();
      uVar3 = local_2c;
    }
    CEdit::SetSel((CEdit *)this,(int)pCVar9,(int)(pCVar9 + uVar3),0);
    pCVar6 = local_1c;
    SendMessageW(*(HWND *)(this + 0x20),0xc2,1,(LPARAM)local_1c);
    CEdit::SetSel((CEdit *)this,(int)pCVar9,(int)pCVar9,0);
    pCVar8 = (CMFCMaskedEdit *)0x0;
    if (0 < *(int *)(pCVar6 + -0xc)) {
      do {
        uVar2 = FUN_10034290(pCVar8);
        FUN_10034230(local_18 + (int)pCVar9,uVar2);
        pCVar8 = local_18 + 1;
        local_18 = pCVar8;
      } while ((int)pCVar8 < *(int *)(pCVar6 + -0xc));
    }
  }
  FUN_10034f00();
  return;
}

