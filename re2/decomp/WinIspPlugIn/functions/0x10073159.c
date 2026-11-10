// rea decompile_all
// name: CMFCMaskedEdit::SetValue
// address: 0x10073159
// body: available
// range: 0x10073159-0x100733fa inclusive
// non_contiguous: false
// provider: Ghidra 12.1.2 (ghidra)
// analysis_profile: b075844f08879296d957518397cd0ddda73db81dce53d00d3f0e702766fc2af6
// limitations: The session serves operations only after Ghidra reports default auto-analysis complete; incomplete analysis does not expose partial results.; The imported Program and temporary project are ephemeral and deleted on close. Annotation operations edit session database metadata; original executable bytes are never written.; Cancelling an active Ghidra request terminates its ephemeral database and discards session annotations. The selected target remains open; the next provider query imports the original artifact again.; Default-space addresses use lowercase 0x-prefixed hexadecimal; other address spaces use <percent-encoded-space>:0x<hex>.; Ghidra Listing reports a terminal call at 0x10073170 to 0x1004a383 FUN_1004a383 (external=false, thunk=false, hasNoReturn=true); fallthrough is excluded by Ghidra's flow model. This records Ghidra's FunctionManager flag, not an independent verification that the callee cannot return.; The Ghidra Program references PDB WinIspPlugIn.pdb (GUID d9f398c7-6c98-49a8-af25-a0659d5ad2f3, age (hex) 1, signature unknown, version RSDS); Ghidra reports load state unknown. Original names and types may be missing; an empty name search does not prove a procedure is absent. Use list_procedures and address-based analysis to inspect recovered functions. REA does not admit a caller-selected PDB companion.; This session uses Ghidra 12.1.2. The bridge is verified against 12.1.4; other 12.1.x builds are accepted and the observed version is reported.; Pseudocode is Ghidra decompiler output, not original source and not text-equivalent to Hopper output.; External functions and functions without an analyzable body return null; other decompiler failures remain explicit.
// pseudocode: provider-specific; not original source


/* WARNING: Function: __EH_prolog3 replaced with injection: EH_prolog3 */
/* WARNING: Function: __EH_epilog3 replaced with injection: EH_epilog3 */
/* Library Function - Single Match
    protected: int __thiscall CMFCMaskedEdit::SetValue(wchar_t const *,int)
   
   Library: Visual Studio 2015 Release */

int __thiscall CMFCMaskedEdit::SetValue(CMFCMaskedEdit *this,wchar_t *param_1,int param_2)

{
  short sVar1;
  undefined2 uVar2;
  short sVar3;
  int iVar4;
  int iVar5;
  int iVar6;
  CMFCMaskedEdit *pCVar7;
  bool bVar8;
  undefined4 uVar9;
  int local_1c;
  CMFCMaskedEdit *local_18;
  int local_14 [3];
  undefined4 local_8;
  undefined4 uStack_4;
  
  uStack_4 = 0x10;
  local_8 = 0x10073165;
  local_18 = this;
  if (param_1 == (wchar_t *)0x0) {
                    /* WARNING: Subroutine does not return */
    FUN_1004a383();
  }
  FUN_10047180(param_1);
  local_8 = 0;
  iVar4 = *(int *)(*(int *)(this + 0x84) + -0xc);
  if (iVar4 == 0) {
LAB_100731f2:
    iVar4 = 0;
    if (*(int *)(*(int *)(this + 0x90) + -0xc) != 0) {
      iVar6 = 0;
      bVar8 = true;
      do {
        if (*(int *)(local_14[0] + -0xc) <= iVar6) break;
        if (((*(int *)(*(int *)(this + 0x88) + -0xc) == 0) ||
            (sVar1 = FUN_10046cb0(iVar6), sVar1 == 0x5f)) &&
           ((*(int *)(*(int *)(this + 0x88) + -0xc) == 0 ||
            (sVar1 = FUN_10046cb0(iVar6), sVar1 != *(short *)(this + 0x8c))))) {
          uVar9 = 0;
          uVar2 = FUN_10046cb0(iVar6);
          iVar5 = FUN_10046b20(uVar2,uVar9);
          bVar8 = iVar5 != -1;
        }
        iVar6 = iVar6 + 1;
      } while (bVar8);
      if (!bVar8) goto LAB_100731a2;
    }
    if (*(int *)(*(int *)(this + 0x84) + -0xc) == 0) {
      FUN_100475f0(local_14);
    }
    else {
      iVar6 = FUN_10047580(*(int *)(this + 0x88) + -0x10);
      pCVar7 = (CMFCMaskedEdit *)(iVar6 + 0x10);
      local_8 = CONCAT31(local_8._1_3_,1);
      local_18 = pCVar7;
      if (0 < *(int *)(iVar6 + 4)) {
        do {
          sVar1 = FUN_10046cb0(iVar4);
          if (sVar1 == 0x5f) {
            FUN_10046c50(iVar4,*(undefined2 *)(this + 0x8c));
            pCVar7 = local_18;
          }
          iVar4 = iVar4 + 1;
        } while (iVar4 < *(int *)(pCVar7 + -0xc));
      }
      iVar4 = 0;
      local_1c = 0;
      if (0 < *(int *)(local_14[0] + -0xc)) {
        do {
          if (*(int *)(*(int *)(this + 0x88) + -0xc) <= local_1c) break;
          sVar1 = FUN_10046cb0(local_1c);
          if (sVar1 == 0x5f) {
            sVar1 = FUN_10046cb0(iVar4);
            if (sVar1 != *(short *)(this + 0x8c)) {
              iVar6 = *(int *)this;
              uVar2 = FUN_10046cb0(local_1c);
              guard_check_icall(sVar1,uVar2);
              iVar6 = (**(code **)(iVar6 + 0x164))();
              if (iVar6 == 0) {
LAB_100733c0:
                FUN_100476d0();
                goto LAB_100731a2;
              }
            }
            FUN_10046c50(local_1c,sVar1);
LAB_10073390:
            iVar4 = iVar4 + 1;
          }
          else if (param_2 != 0) {
            sVar1 = FUN_10046cb0(local_1c);
            sVar3 = FUN_10046cb0(iVar4);
            if (sVar1 != sVar3) goto LAB_100733c0;
            goto LAB_10073390;
          }
          local_1c = local_1c + 1;
        } while (iVar4 < *(int *)(local_14[0] + -0xc));
      }
      FUN_100475f0(&local_18);
      FUN_100476d0();
    }
    FUN_100476d0();
    iVar4 = 1;
  }
  else {
    if (param_2 == 0) {
      pCVar7 = this + 0x88;
      iVar4 = 0;
      iVar5 = 0;
      iVar6 = 0;
      if (0 < *(int *)(*(int *)(this + 0x88) + -0xc)) {
        do {
          iVar4 = iVar6;
          sVar1 = FUN_10046cb0(iVar5);
          if (sVar1 == 0x5f) {
            iVar4 = iVar4 + 1;
          }
          iVar5 = iVar5 + 1;
          this = local_18;
          iVar6 = iVar4;
        } while (iVar5 < *(int *)(*(int *)pCVar7 + -0xc));
      }
    }
    if (*(int *)(local_14[0] + -0xc) <= iVar4) goto LAB_100731f2;
LAB_100731a2:
    FUN_100476d0();
    iVar4 = 0;
  }
  return iVar4;
}

