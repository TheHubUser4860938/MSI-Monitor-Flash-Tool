// rea decompile_all
// name: FUN_0052f19a
// address: 0x52f19a
// body: available
// range: 0x52f19a-0x52f43e inclusive
// non_contiguous: false
// provider: Ghidra 12.1.2 (ghidra)
// analysis_profile: ac6d50be2cdf54f7005df47d1ed7e7ef55dee595681eb1b7c2e0b00d70cd697d
// limitations: The session serves operations only after Ghidra reports default auto-analysis complete; incomplete analysis does not expose partial results.; The imported Program and temporary project are ephemeral and deleted on close. Annotation operations edit session database metadata; original executable bytes are never written.; Cancelling an active Ghidra request terminates its ephemeral database and discards session annotations. The selected target remains open; the next provider query imports the original artifact again.; Default-space addresses use lowercase 0x-prefixed hexadecimal; other address spaces use <percent-encoded-space>:0x<hex>.; Ghidra Listing reports a terminal call at 0x52f43e with no resolved callee; its no-return basis is unknown.; The Ghidra Program references PDB ISPToolForMsi.pdb (GUID b8f2ac8f-1d6f-438d-800f-ed4a14426ac6, age (hex) 1, signature unknown, version RSDS); Ghidra reports load state unknown. Original names and types may be missing; an empty name search does not prove a procedure is absent. Use list_procedures and address-based analysis to inspect recovered functions. REA does not admit a caller-selected PDB companion.; This session uses Ghidra 12.1.2. The bridge is verified against 12.1.4; other 12.1.x builds are accepted and the observed version is reported.; Pseudocode is Ghidra decompiler output, not original source and not text-equivalent to Hopper output.; External functions and functions without an analyzable body return null; other decompiler failures remain explicit.
// pseudocode: provider-specific; not original source


/* WARNING: Function: __EH_prolog3_GS replaced with injection: EH_prolog3 */

void FUN_0052f19a(void)

{
  int *piVar1;
  code *pcVar2;
  int iVar3;
  CMFCRibbonBaseElement *pCVar4;
  AFX_MODULE_STATE *pAVar5;
  size_t sVar6;
  undefined4 uVar7;
  int iVar8;
  CMFCRibbonButton *this;
  undefined4 *puVar9;
  CMFCRibbonButtonsGroup *in_ECX;
  CStringT<wchar_t,StrTraitMFC<wchar_t,ATL::ChTraitsCRT<wchar_t>_>_> *this_00;
  int local_230;
  int local_22c;
  undefined4 local_228;
  CMFCRibbonBaseElement *local_224;
  undefined4 local_220;
  WCHAR local_21c [266];
  undefined4 local_8;
  undefined4 uStack_4;
  
  uStack_4 = 0x22c;
  local_8 = 0x52f1a9;
  CMFCRibbonButtonsGroup::RemoveAll(in_ECX);
  iVar3 = FUN_00416408(0x1c4);
  local_8 = 0;
  if (iVar3 == 0) {
    pCVar4 = (CMFCRibbonBaseElement *)0x0;
  }
  else {
    pCVar4 = (CMFCRibbonBaseElement *)CMFCRibbonLabel(*(undefined4 *)(in_ECX + 0x60),0);
  }
  local_8 = 0xffffffff;
  CMFCRibbonButtonsGroup::AddButton(in_ECX,pCVar4);
  pAVar5 = AfxGetModuleState();
  piVar1 = *(int **)(*(int *)(pAVar5 + 4) + 0x8c);
  GetCurrentDirectoryW(0x104,local_21c);
  sVar6 = _wcslen(local_21c);
  local_21c[sVar6] = L'\\';
  iVar3 = sVar6 + 1;
  if ((uint)(iVar3 * 2) < 0x208) {
    local_21c[iVar3] = L'\0';
    local_230 = 0;
    if (piVar1 != (int *)0x0) {
      local_22c = 0;
      if (0 < piVar1[1]) {
        do {
          uVar7 = FUN_004295fe();
          FUN_0040eb30(uVar7);
          iVar8 = *piVar1;
          local_8 = 1;
          guard_check_icall(&local_220,local_22c,local_21c,iVar3,1);
          iVar8 = (**(code **)(iVar8 + 0xc))();
          if (iVar8 != 0) {
            ATL::CStringT<wchar_t,StrTraitMFC<wchar_t,ATL::ChTraitsCRT<wchar_t>_>_>::Replace
                      ((CStringT<wchar_t,StrTraitMFC<wchar_t,ATL::ChTraitsCRT<wchar_t>_>_> *)
                       &local_220,L"&&",L"\x01\x01");
            ATL::CStringT<wchar_t,StrTraitMFC<wchar_t,ATL::ChTraitsCRT<wchar_t>_>_>::Replace
                      ((CStringT<wchar_t,StrTraitMFC<wchar_t,ATL::ChTraitsCRT<wchar_t>_>_> *)
                       &local_220,L"&",L"&&");
            ATL::CStringT<wchar_t,StrTraitMFC<wchar_t,ATL::ChTraitsCRT<wchar_t>_>_>::Replace
                      ((CStringT<wchar_t,StrTraitMFC<wchar_t,ATL::ChTraitsCRT<wchar_t>_>_> *)
                       &local_220,L"\x01\x01",L"&&");
            uVar7 = FUN_004295fe();
            FUN_0040eb30(uVar7);
            local_8 = CONCAT31(local_8._1_3_,2);
            if (local_230 == 9) {
              ATL::CStringT<wchar_t,StrTraitMFC<wchar_t,ATL::ChTraitsCRT<wchar_t>_>_>::Format
                        (this_00,(wchar_t *)&local_228,L"1&0 %Ts",local_220);
            }
            else if (local_230 < 9) {
              ATL::CStringT<wchar_t,StrTraitMFC<wchar_t,ATL::ChTraitsCRT<wchar_t>_>_>::Format
                        (this_00,(wchar_t *)&local_228,L"&%d %Ts",local_230 + 1,local_220);
            }
            else {
              FUN_00415f50(&local_220);
            }
            this = (CMFCRibbonButton *)FUN_00416408(0x1c4);
            local_8._0_1_ = 3;
            if (this == (CMFCRibbonButton *)0x0) {
              local_224 = (CMFCRibbonBaseElement *)0x0;
            }
            else {
              local_224 = (CMFCRibbonBaseElement *)CMFCRibbonButton::CMFCRibbonButton(this);
            }
            local_8 = CONCAT31(local_8._1_3_,2);
            pcVar2 = *(code **)(*(int *)local_224 + 0xb4);
            guard_check_icall(local_228);
            (*pcVar2)();
            pcVar2 = *(code **)(*(int *)local_224 + 0xb0);
            guard_check_icall(local_22c + 0xe110);
            (*pcVar2)();
            puVar9 = (undefined4 *)FUN_0042c7cb(local_22c);
            pcVar2 = *(code **)(*(int *)local_224 + 200);
            guard_check_icall(*puVar9);
            (*pcVar2)();
            CMFCRibbonButtonsGroup::AddButton(in_ECX,local_224);
            local_230 = local_230 + 1;
            FUN_0040efa0();
          }
          local_8 = 0xffffffff;
          FUN_0040efa0();
          local_22c = local_22c + 1;
        } while (local_22c < piVar1[1]);
      }
    }
    FUN_0055bae6();
    return;
  }
  ___report_rangecheckfailure();
  pcVar2 = (code *)swi(3);
  (*pcVar2)();
  return;
}

