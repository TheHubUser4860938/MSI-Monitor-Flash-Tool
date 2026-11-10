// rea decompile_all
// name: CMFCMaskedEdit::SetValue
// address: 0x100472e8
// body: available
// range: 0x100472e8-0x10047589 inclusive
// non_contiguous: false
// provider: Ghidra 12.1.2 (ghidra)
// analysis_profile: b075844f08879296d957518397cd0ddda73db81dce53d00d3f0e702766fc2af6
// limitations: The session serves operations only after Ghidra reports default auto-analysis complete; incomplete analysis does not expose partial results.; The imported Program and temporary project are ephemeral and deleted on close. Annotation operations edit session database metadata; original executable bytes are never written.; Cancelling an active Ghidra request terminates its ephemeral database and discards session annotations. The selected target remains open; the next provider query imports the original artifact again.; Default-space addresses use lowercase 0x-prefixed hexadecimal; other address spaces use <percent-encoded-space>:0x<hex>.; Ghidra Listing reports a terminal call at 0x100472ff to 0x1001d023 FUN_1001d023 (external=false, thunk=false, hasNoReturn=true); fallthrough is excluded by Ghidra's flow model. This records Ghidra's FunctionManager flag, not an independent verification that the callee cannot return.; The Ghidra Program references PDB WinOperateCScaler.pdb (GUID a6737962-efea-4805-8ae6-1fc1ef126554, age (hex) 1, signature unknown, version RSDS); Ghidra reports load state unknown. Original names and types may be missing; an empty name search does not prove a procedure is absent. Use list_procedures and address-based analysis to inspect recovered functions. REA does not admit a caller-selected PDB companion.; This session uses Ghidra 12.1.2. The bridge is verified against 12.1.4; other 12.1.x builds are accepted and the observed version is reported.; Pseudocode is Ghidra decompiler output, not original source and not text-equivalent to Hopper output.; External functions and functions without an analyzable body return null; other decompiler failures remain explicit.
// pseudocode: provider-specific; not original source


/* WARNING: Function: __EH_prolog3 replaced with injection: EH_prolog3 */
/* WARNING: Function: __EH_epilog3 replaced with injection: EH_epilog3 */
/* Library Function - Single Match
    protected: int __thiscall CMFCMaskedEdit::SetValue(wchar_t const *,int)
   
   Library: Visual Studio 2015 Release */

int __thiscall CMFCMaskedEdit::SetValue(CMFCMaskedEdit *this,wchar_t *param_1,int param_2)

{
  short sVar1;
  wchar_t wVar2;
  undefined2 uVar3;
  short sVar4;
  int iVar5;
  int iVar6;
  CMFCMaskedEdit *pCVar7;
  bool bVar8;
  int iVar9;
  int local_1c;
  CMFCMaskedEdit *local_18;
  int local_14 [3];
  undefined4 local_8;
  undefined4 uStack_4;
  
  uStack_4 = 0x10;
  local_8 = 0x100472f4;
  local_18 = this;
  if (param_1 == (wchar_t *)0x0) {
                    /* WARNING: Subroutine does not return */
    FUN_1001d023();
  }
  FUN_100185a0(param_1);
  local_8 = 0;
  iVar5 = *(int *)(*(int *)(this + 0x84) + -0xc);
  if (iVar5 == 0) {
LAB_10047381:
    iVar5 = 0;
    if (*(int *)(*(int *)(this + 0x90) + -0xc) != 0) {
      iVar6 = 0;
      bVar8 = true;
      do {
        if (*(int *)(local_14[0] + -0xc) <= iVar6) break;
        if (((*(int *)(*(int *)(this + 0x88) + -0xc) == 0) ||
            (sVar1 = FUN_1001ea46(iVar6), sVar1 == 0x5f)) &&
           ((*(int *)(*(int *)(this + 0x88) + -0xc) == 0 ||
            (sVar1 = FUN_1001ea46(iVar6), sVar1 != *(short *)(this + 0x8c))))) {
          iVar9 = 0;
          wVar2 = FUN_1001ea46(iVar6);
          iVar9 = ATL::CStringT<wchar_t,StrTraitMFC<wchar_t,ATL::ChTraitsCRT<wchar_t>_>_>::Find
                            ((CStringT<wchar_t,StrTraitMFC<wchar_t,ATL::ChTraitsCRT<wchar_t>_>_> *)
                             (this + 0x90),wVar2,iVar9);
          bVar8 = iVar9 != -1;
        }
        iVar6 = iVar6 + 1;
      } while (bVar8);
      if (!bVar8) goto LAB_10047331;
    }
    if (*(int *)(*(int *)(this + 0x84) + -0xc) == 0) {
      FUN_10018680(local_14);
    }
    else {
      iVar6 = FUN_100187a0(*(int *)(this + 0x88) + -0x10);
      pCVar7 = (CMFCMaskedEdit *)(iVar6 + 0x10);
      local_8 = CONCAT31(local_8._1_3_,1);
      local_18 = pCVar7;
      if (0 < *(int *)(iVar6 + 4)) {
        do {
          sVar1 = FUN_1001ea46(iVar5);
          if (sVar1 == 0x5f) {
            FUN_10018ea0(iVar5,*(undefined2 *)(this + 0x8c));
            pCVar7 = local_18;
          }
          iVar5 = iVar5 + 1;
        } while (iVar5 < *(int *)(pCVar7 + -0xc));
      }
      iVar5 = 0;
      local_1c = 0;
      if (0 < *(int *)(local_14[0] + -0xc)) {
        do {
          pCVar7 = local_18;
          if (*(int *)(*(int *)(this + 0x88) + -0xc) <= local_1c) break;
          sVar1 = FUN_1001ea46(local_1c);
          if (sVar1 == 0x5f) {
            sVar1 = FUN_1001ea46(iVar5);
            if (sVar1 != *(short *)(this + 0x8c)) {
              iVar6 = *(int *)this;
              uVar3 = FUN_1001ea46(local_1c);
              guard_check_icall(sVar1,uVar3);
              iVar6 = (**(code **)(iVar6 + 0x164))();
              if (iVar6 == 0) {
LAB_1004754f:
                ATL::CStringData::Release((CStringData *)(local_18 + -0x10));
                goto LAB_10047331;
              }
            }
            FUN_10018ea0(local_1c,sVar1);
LAB_1004751f:
            iVar5 = iVar5 + 1;
          }
          else if (param_2 != 0) {
            sVar1 = FUN_1001ea46(local_1c);
            sVar4 = FUN_1001ea46(iVar5);
            if (sVar1 != sVar4) goto LAB_1004754f;
            goto LAB_1004751f;
          }
          local_1c = local_1c + 1;
          pCVar7 = local_18;
        } while (iVar5 < *(int *)(local_14[0] + -0xc));
      }
      FUN_10018680(&local_18);
      ATL::CStringData::Release((CStringData *)(pCVar7 + -0x10));
    }
    ATL::CStringData::Release((CStringData *)(local_14[0] + -0x10));
    iVar5 = 1;
  }
  else {
    if (param_2 == 0) {
      pCVar7 = this + 0x88;
      iVar5 = 0;
      iVar9 = 0;
      iVar6 = 0;
      if (0 < *(int *)(*(int *)(this + 0x88) + -0xc)) {
        do {
          iVar5 = iVar6;
          sVar1 = FUN_1001ea46(iVar9);
          if (sVar1 == 0x5f) {
            iVar5 = iVar5 + 1;
          }
          iVar9 = iVar9 + 1;
          this = local_18;
          iVar6 = iVar5;
        } while (iVar9 < *(int *)(*(int *)pCVar7 + -0xc));
      }
    }
    if (*(int *)(local_14[0] + -0xc) <= iVar5) goto LAB_10047381;
LAB_10047331:
    ATL::CStringData::Release((CStringData *)(local_14[0] + -0x10));
    iVar5 = 0;
  }
  return iVar5;
}

