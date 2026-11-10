// rea decompile_all
// name: CMFCRibbonButton::OnCalcTextSize
// address: 0x472044
// body: available
// range: 0x472044-0x4722b7 inclusive
// non_contiguous: false
// provider: Ghidra 12.1.2 (ghidra)
// analysis_profile: ac6d50be2cdf54f7005df47d1ed7e7ef55dee595681eb1b7c2e0b00d70cd697d
// limitations: The session serves operations only after Ghidra reports default auto-analysis complete; incomplete analysis does not expose partial results.; The imported Program and temporary project are ephemeral and deleted on close. Annotation operations edit session database metadata; original executable bytes are never written.; Cancelling an active Ghidra request terminates its ephemeral database and discards session annotations. The selected target remains open; the next provider query imports the original artifact again.; Default-space addresses use lowercase 0x-prefixed hexadecimal; other address spaces use <percent-encoded-space>:0x<hex>.; Ghidra Listing reports a terminal call at 0x47212c to 0x429127 FUN_00429127 (external=false, thunk=false, hasNoReturn=true); fallthrough is excluded by Ghidra's flow model. This records Ghidra's FunctionManager flag, not an independent verification that the callee cannot return.; The Ghidra Program references PDB ISPToolForMsi.pdb (GUID b8f2ac8f-1d6f-438d-800f-ed4a14426ac6, age (hex) 1, signature unknown, version RSDS); Ghidra reports load state unknown. Original names and types may be missing; an empty name search does not prove a procedure is absent. Use list_procedures and address-based analysis to inspect recovered functions. REA does not admit a caller-selected PDB companion.; This session uses Ghidra 12.1.2. The bridge is verified against 12.1.4; other 12.1.x builds are accepted and the observed version is reported.; Pseudocode is Ghidra decompiler output, not original source and not text-equivalent to Hopper output.; External functions and functions without an analyzable body return null; other decompiler failures remain explicit.
// pseudocode: provider-specific; not original source


/* WARNING: Function: __EH_prolog3_GS replaced with injection: EH_prolog3 */
/* Library Function - Single Match
    public: virtual void __thiscall CMFCRibbonButton::OnCalcTextSize(class CDC *)
   
   Library: Visual Studio 2015 Release */

void __thiscall CMFCRibbonButton::OnCalcTextSize(CMFCRibbonButton *this,CDC *param_1)

{
  code *pcVar1;
  CDC *pCVar2;
  int iVar3;
  AFX_GLOBAL_DATA *pAVar4;
  undefined4 *puVar5;
  undefined4 uVar6;
  int iVar7;
  int local_44;
  int local_40;
  CStringT<wchar_t,StrTraitMFC<wchar_t,ATL::ChTraitsCRT<wchar_t>_>_> local_3c [4];
  int local_38;
  CStringT<wchar_t,StrTraitMFC<wchar_t,ATL::ChTraitsCRT<wchar_t>_>_> local_34 [4];
  int local_30;
  CDC *local_2c;
  int local_28;
  int local_24;
  int local_20;
  int local_1c;
  undefined4 local_18;
  undefined4 local_8;
  undefined4 uStack_4;
  
  uStack_4 = 0x34;
  local_8 = 0x472050;
  local_2c = param_1;
  if (*(int *)(*(int *)(this + 0x60) + -0xc) != 0) {
    pcVar1 = *(code **)(*(int *)this + 0x250);
    guard_check_icall();
    iVar3 = (*pcVar1)();
    if (iVar3 == 0) {
      iVar3 = CSize::operator!=((CSize *)(this + 0x10c),(tagSIZE)0x0);
      if ((iVar3 == 0) ||
         (iVar3 = CSize::operator!=((CSize *)(this + 0x114),(tagSIZE)0x0), iVar3 == 0)) {
        local_28 = FUN_00415ee0((short)(*(int *)(this + 0x60) + -0x10));
        local_28 = local_28 + 0x10;
        local_8 = 0;
        ATL::CStringT<wchar_t,StrTraitMFC<wchar_t,ATL::ChTraitsCRT<wchar_t>_>_>::Replace
                  ((CStringT<wchar_t,StrTraitMFC<wchar_t,ATL::ChTraitsCRT<wchar_t>_>_> *)&local_28,
                   L"&&",L"\x01\x01");
        ATL::CStringT<wchar_t,StrTraitMFC<wchar_t,ATL::ChTraitsCRT<wchar_t>_>_>::Remove
                  ((CStringT<wchar_t,StrTraitMFC<wchar_t,ATL::ChTraitsCRT<wchar_t>_>_> *)&local_28,
                   L'&');
        ATL::CStringT<wchar_t,StrTraitMFC<wchar_t,ATL::ChTraitsCRT<wchar_t>_>_>::Replace
                  ((CStringT<wchar_t,StrTraitMFC<wchar_t,ATL::ChTraitsCRT<wchar_t>_>_> *)&local_28,
                   L"\x01\x01",L"&");
        if ((*(int *)(this + 0x18c) == 0) || (*(int *)(*(int *)(this + 0x70) + -0xc) == 0)) {
          puVar5 = (undefined4 *)CDC::GetTextExtent(local_2c,local_34);
          *(undefined4 *)(this + 0x10c) = *puVar5;
          *(undefined4 *)(this + 0x110) = puVar5[1];
        }
        else {
          iVar3 = *(int *)local_2c;
          pAVar4 = GetGlobalData();
          guard_check_icall((short)(pAVar4 + 300));
          local_30 = (**(code **)(iVar3 + 0x28))();
          pCVar2 = local_2c;
          if (local_30 == 0) {
                    /* WARNING: Subroutine does not return */
            FUN_00429127();
          }
          puVar5 = (undefined4 *)CDC::GetTextExtent(local_2c,local_3c);
          *(undefined4 *)(this + 0x10c) = *puVar5;
          *(undefined4 *)(this + 0x110) = puVar5[1];
          pcVar1 = *(code **)(*(int *)pCVar2 + 0x28);
          guard_check_icall(local_30);
          (*pcVar1)();
          local_30 = 0;
          FUN_00415f50((short)(this + 0x70));
          iVar3 = local_28;
          local_38 = *(int *)(this + 0x10c);
          if (local_38 < local_38 * 10) {
            do {
              local_24 = 0;
              iVar7 = *(int *)local_2c;
              local_18 = 10000;
              local_20 = local_24;
              local_1c = local_38;
              guard_check_icall(iVar3,*(undefined4 *)(iVar3 + -0xc),&local_24,0x410);
              local_30 = (**(code **)(iVar7 + 0x68))();
              iVar7 = local_1c - local_24;
              if (local_30 <= *(int *)(this + 0x110) * 2) break;
              local_38 = local_38 + 10;
            } while (local_38 < *(int *)(this + 0x10c) * 10);
          }
          else {
            iVar7 = 0;
          }
          iVar3 = *(int *)(this + 0x10c);
          if (iVar3 <= iVar7) {
            iVar3 = iVar7;
          }
          *(int *)(this + 0x10c) = iVar3;
          iVar3 = *(int *)(this + 0x110) * 2;
          if (local_30 <= iVar3) {
            iVar3 = local_30;
          }
          *(int *)(this + 0x110) = *(int *)(this + 0x110) + *(int *)(this + 0x120) * 2 + iVar3;
        }
        pcVar1 = *(code **)(*(int *)this + 0x114);
        guard_check_icall(&local_44,0);
        (*pcVar1)();
        if ((local_44 == 0) && (local_40 == 0)) {
          uVar6 = 0;
          *(undefined4 *)(this + 0x114) = 0;
        }
        else {
          puVar5 = (undefined4 *)FUN_004701c0(local_34,local_2c,1);
          *(undefined4 *)(this + 0x114) = *puVar5;
          uVar6 = puVar5[1];
        }
        *(undefined4 *)(this + 0x118) = uVar6;
        FUN_0040efa0();
      }
      goto LAB_004722b0;
    }
  }
  *(undefined4 *)(this + 0x10c) = 0;
  *(undefined4 *)(this + 0x110) = 0;
  *(undefined4 *)(this + 0x114) = 0;
  *(undefined4 *)(this + 0x118) = 0;
LAB_004722b0:
  FUN_0055bae6();
  return;
}

