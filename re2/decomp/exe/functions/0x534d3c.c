// rea decompile_all
// name: CMFCMaskedEdit::OnCharBackspace
// address: 0x534d3c
// body: available
// range: 0x534d3c-0x5351a1 inclusive
// non_contiguous: false
// provider: Ghidra 12.1.2 (ghidra)
// analysis_profile: ac6d50be2cdf54f7005df47d1ed7e7ef55dee595681eb1b7c2e0b00d70cd697d
// limitations: The session serves operations only after Ghidra reports default auto-analysis complete; incomplete analysis does not expose partial results.; The imported Program and temporary project are ephemeral and deleted on close. Annotation operations edit session database metadata; original executable bytes are never written.; Cancelling an active Ghidra request terminates its ephemeral database and discards session annotations. The selected target remains open; the next provider query imports the original artifact again.; Default-space addresses use lowercase 0x-prefixed hexadecimal; other address spaces use <percent-encoded-space>:0x<hex>.; The Ghidra Program references PDB ISPToolForMsi.pdb (GUID b8f2ac8f-1d6f-438d-800f-ed4a14426ac6, age (hex) 1, signature unknown, version RSDS); Ghidra reports load state unknown. Original names and types may be missing; an empty name search does not prove a procedure is absent. Use list_procedures and address-based analysis to inspect recovered functions. REA does not admit a caller-selected PDB companion.; This session uses Ghidra 12.1.2. The bridge is verified against 12.1.4; other 12.1.x builds are accepted and the observed version is reported.; Pseudocode is Ghidra decompiler output, not original source and not text-equivalent to Hopper output.; External functions and functions without an analyzable body return null; other decompiler failures remain explicit.
// pseudocode: provider-specific; not original source


/* WARNING: Function: __EH_prolog3 replaced with injection: EH_prolog3 */
/* WARNING: Function: __EH_epilog3 replaced with injection: EH_epilog3 */
/* Library Function - Single Match
    private: void __thiscall CMFCMaskedEdit::OnCharBackspace(unsigned int,unsigned int,unsigned int)
   
   Library: Visual Studio 2015 Release */

void __thiscall
CMFCMaskedEdit::OnCharBackspace(CMFCMaskedEdit *this,uint param_1,uint param_2,uint param_3)

{
  CMFCMaskedEdit *this_00;
  short sVar1;
  undefined2 uVar2;
  uint uVar3;
  int iVar4;
  undefined4 uVar5;
  int *piVar6;
  int iVar7;
  CMFCMaskedEdit *pCVar8;
  CMFCMaskedEdit *pCVar9;
  CMFCMaskedEdit *local_38;
  CMFCMaskedEdit *local_34;
  CMFCMaskedEdit *local_30;
  CMFCMaskedEdit *local_2c;
  CMFCMaskedEdit *local_28;
  CMFCMaskedEdit *local_24;
  CMFCMaskedEdit *local_20;
  CMFCMaskedEdit *local_1c;
  CMFCMaskedEdit *local_18;
  CMFCMaskedEdit *local_14 [3];
  int local_8;
  undefined4 uStack_4;
  
  uStack_4 = 0x28;
  local_8 = 0x534d48;
  local_30 = this;
  SendMessageW(*(HWND *)(this + 0x20),0xb0,(WPARAM)&local_24,(LPARAM)&local_20);
  GetGroupBounds(this,(int *)&local_1c,(int *)local_14,(int)local_24,1);
  pCVar8 = local_1c;
  pCVar9 = local_24;
  local_28 = local_24;
  if ((((((int)local_24 < 0) && (*(int *)(*(int *)(this + 0x80) + -0xc) < (int)local_20)) ||
       ((int)local_24 < (int)local_1c)) ||
      (((int)local_14[0] < (int)local_24 || ((int)local_20 < (int)local_1c)))) ||
     ((int)local_14[0] < (int)local_20)) {
    MessageBeep(0xffffffff);
  }
  else if (local_24 == local_20) {
    local_18 = this + 0x84;
    if (*(int *)(*(int *)local_18 + -0xc) == 0) {
      SendMessageW(*(HWND *)(this + 0x20),0xb0,(WPARAM)&local_30,(LPARAM)&local_34);
      FUN_0042ec70();
      local_2c = local_30;
LAB_00534fce:
      DoUpdate(this,1,(int)local_2c,(int)local_34);
      return;
    }
    if (local_20 != local_1c) {
      local_1c = local_24 + -1;
      pCVar9 = (CMFCMaskedEdit *)0x1;
      uVar3 = FUN_00414b20(local_1c);
      pCVar8 = local_14[0];
      local_34 = (CMFCMaskedEdit *)(uVar3 & 0xffff);
      local_2c = (CMFCMaskedEdit *)0x1;
      iVar7 = 0;
      local_28 = local_24;
      do {
        if ((int)pCVar8 <= (int)local_28) break;
        sVar1 = FUN_00414b20(local_28);
        if (sVar1 == (short)local_34) {
          pCVar9 = pCVar9 + 1;
          local_28 = local_28 + 1;
        }
        else {
          local_2c = (CMFCMaskedEdit *)0x0;
        }
      } while (local_2c != (CMFCMaskedEdit *)0x0);
      this_00 = local_30;
      local_18 = local_1c;
      local_2c = local_1c + (int)pCVar9;
      local_28 = pCVar9;
      if ((int)local_2c < (int)pCVar8) {
        do {
          sVar1 = FUN_00414b20(local_18);
          if (sVar1 != *(short *)(this_00 + 0x8c)) {
            iVar4 = *(int *)this_00;
            uVar3 = FUN_00414b20(local_18);
            uVar3 = uVar3 & 0xffff;
            uVar2 = FUN_00414b20(local_18);
            guard_check_icall(uVar2,uVar3);
            iVar4 = (**(code **)(iVar4 + 0x164))();
            pCVar8 = local_14[0];
            if (iVar4 == 0) goto LAB_00534e0d;
          }
          local_18 = local_18 + 1;
        } while ((int)(local_28 + (int)local_18) < (int)pCVar8);
      }
      pCVar8 = local_28;
      local_30 = this_00 + 0x80;
      FUN_00415920(&local_18,local_1c,local_28);
      local_8 = 0;
      if (0 < (int)pCVar8) {
        uVar5 = FUN_00414840(&local_34,pCVar8 + -1);
        local_8._0_1_ = 1;
        FUN_00415f50(uVar5);
        local_8 = (uint)local_8._1_3_ << 8;
        FUN_0040efa0();
        FUN_004153a0(*(undefined2 *)(this_00 + 0x8c));
      }
      CEdit::SetSel((CEdit *)this_00,(int)local_1c,(int)local_2c,0);
      pCVar8 = local_18;
      SendMessageW(*(HWND *)(this_00 + 0x20),0xc2,1,(LPARAM)local_18);
      CEdit::SetSel((CEdit *)this_00,(int)local_1c,(int)local_1c,0);
      if (0 < *(int *)(pCVar8 + -0xc)) {
        do {
          uVar2 = FUN_00414b20(iVar7);
          FUN_00414ac0(local_1c + iVar7,uVar2);
          iVar7 = iVar7 + 1;
        } while (iVar7 < *(int *)(pCVar8 + -0xc));
      }
LAB_00535150:
      FUN_0040efa0();
      return;
    }
    if (1 < (int)local_20) {
      GetGroupBounds(this,(int *)&local_1c,(int *)local_14,(int)(local_20 + -1),0);
    }
    if ((local_1c == (CMFCMaskedEdit *)0xffffffff) ||
       (pCVar8 = local_14[0], (int)local_20 <= (int)local_14[0])) {
LAB_00534e0d:
      MessageBeep(0xffffffff);
      return;
    }
  }
  else {
    if (*(int *)(*(int *)(this + 0x88) + -0xc) == 0) {
      SendMessageW(*(HWND *)(this + 0x20),0xb0,(WPARAM)&local_2c,(LPARAM)&local_38);
      FUN_0042ec70();
      local_34 = local_38;
      goto LAB_00534fce;
    }
    local_18 = (CMFCMaskedEdit *)0x1;
    local_34 = this + 0x84;
    uVar3 = FUN_00414b20(local_24);
    local_38 = (CMFCMaskedEdit *)(uVar3 & 0xffff);
    iVar7 = 0;
    local_1c = pCVar9 + 1;
    local_2c = (CMFCMaskedEdit *)0x1;
    pCVar9 = local_18;
    do {
      if ((int)local_14[0] <= (int)local_1c) break;
      sVar1 = FUN_00414b20(local_1c);
      if (sVar1 == (short)local_38) {
        pCVar9 = pCVar9 + 1;
        local_1c = local_1c + 1;
      }
      else {
        local_2c = (CMFCMaskedEdit *)0x0;
      }
    } while (local_2c != (CMFCMaskedEdit *)0x0);
    pCVar8 = local_28;
    this = local_30;
    local_18 = pCVar9;
    if ((int)local_20 - (int)local_24 <= (int)pCVar9) {
      local_34 = local_30 + 0x80;
      FUN_00415920(&local_1c,local_28,pCVar9);
      local_8 = 2;
      if (0 < (int)local_18) {
        uVar5 = FUN_00414840(&local_38,(int)local_18 - ((int)local_20 - (int)local_24));
        local_8._0_1_ = 3;
        FUN_00415f50(uVar5);
        local_8._0_1_ = 2;
        FUN_0040efa0();
        piVar6 = (int *)ATL::CStringT<wchar_t,StrTraitMFC<wchar_t,ATL::ChTraitsCRT<wchar_t>_>_>::
                        CStringT<wchar_t,StrTraitMFC<wchar_t,ATL::ChTraitsCRT<wchar_t>_>_>
                                  ((CStringT<wchar_t,StrTraitMFC<wchar_t,ATL::ChTraitsCRT<wchar_t>_>_>
                                    *)&local_38,*(wchar_t *)(this + 0x8c),
                                   (int)local_20 - (int)local_24);
        local_8._0_1_ = 4;
        FUN_004157a0(*piVar6,*(undefined4 *)(*piVar6 + -0xc));
        local_8 = CONCAT31(local_8._1_3_,2);
        FUN_0040efa0();
        pCVar8 = local_28;
      }
      CEdit::SetSel((CEdit *)this,(int)pCVar8,(int)(local_18 + (int)pCVar8),0);
      pCVar9 = local_1c;
      SendMessageW(*(HWND *)(this + 0x20),0xc2,1,(LPARAM)local_1c);
      CEdit::SetSel((CEdit *)this,(int)local_28,(int)local_28,0);
      pCVar8 = local_28;
      if (0 < *(int *)(pCVar9 + -0xc)) {
        do {
          uVar2 = FUN_00414b20(iVar7);
          FUN_00414ac0(pCVar8 + iVar7,uVar2);
          iVar7 = iVar7 + 1;
        } while (iVar7 < *(int *)(pCVar9 + -0xc));
      }
      goto LAB_00535150;
    }
    MessageBeep(0xffffffff);
    local_14[0] = local_18 + (int)pCVar8;
  }
  CEdit::SetSel((CEdit *)this,(int)pCVar8,(int)local_14[0],0);
  return;
}

