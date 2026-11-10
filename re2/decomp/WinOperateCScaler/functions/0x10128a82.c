// rea decompile_all
// name: CMFCRibbonRecentFilesList::FillList
// address: 0x10128a82
// body: available
// range: 0x10128a82-0x10128d26 inclusive
// non_contiguous: false
// provider: Ghidra 12.1.2 (ghidra)
// analysis_profile: b075844f08879296d957518397cd0ddda73db81dce53d00d3f0e702766fc2af6
// limitations: The session serves operations only after Ghidra reports default auto-analysis complete; incomplete analysis does not expose partial results.; The imported Program and temporary project are ephemeral and deleted on close. Annotation operations edit session database metadata; original executable bytes are never written.; Cancelling an active Ghidra request terminates its ephemeral database and discards session annotations. The selected target remains open; the next provider query imports the original artifact again.; Default-space addresses use lowercase 0x-prefixed hexadecimal; other address spaces use <percent-encoded-space>:0x<hex>.; Ghidra Listing reports a terminal call at 0x10128d26 with no resolved callee; its no-return basis is unknown.; The Ghidra Program references PDB WinOperateCScaler.pdb (GUID a6737962-efea-4805-8ae6-1fc1ef126554, age (hex) 1, signature unknown, version RSDS); Ghidra reports load state unknown. Original names and types may be missing; an empty name search does not prove a procedure is absent. Use list_procedures and address-based analysis to inspect recovered functions. REA does not admit a caller-selected PDB companion.; This session uses Ghidra 12.1.2. The bridge is verified against 12.1.4; other 12.1.x builds are accepted and the observed version is reported.; Pseudocode is Ghidra decompiler output, not original source and not text-equivalent to Hopper output.; External functions and functions without an analyzable body return null; other decompiler failures remain explicit.
// pseudocode: provider-specific; not original source


/* WARNING: Function: __EH_prolog3_GS replaced with injection: EH_prolog3 */
/* Library Function - Single Match
    public: void __thiscall CMFCRibbonRecentFilesList::FillList(void)
   
   Library: Visual Studio 2015 Release */

void __thiscall CMFCRibbonRecentFilesList::FillList(CMFCRibbonRecentFilesList *this)

{
  int *piVar1;
  code *pcVar2;
  CMFCRibbonLabel *this_00;
  CMFCRibbonBaseElement *pCVar3;
  AFX_MODULE_STATE *pAVar4;
  size_t sVar5;
  int iVar6;
  undefined4 uVar7;
  int iVar8;
  CMFCRibbonButton *this_01;
  undefined4 *puVar9;
  CStringT<wchar_t,StrTraitMFC<wchar_t,ATL::ChTraitsCRT<wchar_t>_>_> *this_02;
  int local_230;
  int local_22c;
  int local_228;
  CMFCRibbonBaseElement *local_224;
  int local_220;
  WCHAR local_21c [266];
  undefined4 local_8;
  undefined4 uStack_4;
  
  uStack_4 = 0x22c;
  local_8 = 0x10128a91;
  CMFCRibbonButtonsGroup::RemoveAll((CMFCRibbonButtonsGroup *)this);
  this_00 = (CMFCRibbonLabel *)FUN_1001cfa0(0x1c4);
  local_8 = 0;
  if (this_00 == (CMFCRibbonLabel *)0x0) {
    pCVar3 = (CMFCRibbonBaseElement *)0x0;
  }
  else {
    pCVar3 = (CMFCRibbonBaseElement *)
             CMFCRibbonLabel::CMFCRibbonLabel(this_00,*(wchar_t **)(this + 0x60),0);
  }
  local_8 = 0xffffffff;
  CMFCRibbonButtonsGroup::AddButton((CMFCRibbonButtonsGroup *)this,pCVar3);
  pAVar4 = AfxGetModuleState();
  piVar1 = *(int **)(*(int *)(pAVar4 + 4) + 0x8c);
  GetCurrentDirectoryW(0x104,local_21c);
  sVar5 = _wcslen(local_21c);
  local_21c[sVar5] = L'\\';
  iVar6 = sVar5 + 1;
  if ((uint)(iVar6 * 2) < 0x208) {
    local_21c[iVar6] = L'\0';
    local_230 = 0;
    if (piVar1 != (int *)0x0) {
      local_22c = 0;
      if (0 < piVar1[1]) {
        do {
          uVar7 = FUN_1001e20a();
          FUN_1001d224(uVar7);
          iVar8 = *piVar1;
          local_8 = 1;
          guard_check_icall(&local_220,local_22c,local_21c,iVar6,1);
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
            uVar7 = FUN_1001e20a();
            FUN_1001d224(uVar7);
            local_8 = CONCAT31(local_8._1_3_,2);
            if (local_230 == 9) {
              ATL::CStringT<wchar_t,StrTraitMFC<wchar_t,ATL::ChTraitsCRT<wchar_t>_>_>::Format
                        (this_02,(wchar_t *)&local_228,L"1&0 %Ts",local_220);
            }
            else if (local_230 < 9) {
              ATL::CStringT<wchar_t,StrTraitMFC<wchar_t,ATL::ChTraitsCRT<wchar_t>_>_>::Format
                        (this_02,(wchar_t *)&local_228,L"&%d %Ts",local_230 + 1,local_220);
            }
            else {
              FUN_10018680(&local_220);
            }
            this_01 = (CMFCRibbonButton *)FUN_1001cfa0(0x1c4);
            local_8._0_1_ = 3;
            if (this_01 == (CMFCRibbonButton *)0x0) {
              local_224 = (CMFCRibbonBaseElement *)0x0;
            }
            else {
              local_224 = (CMFCRibbonBaseElement *)CMFCRibbonButton::CMFCRibbonButton(this_01);
            }
            iVar8 = local_228;
            local_8 = CONCAT31(local_8._1_3_,2);
            pcVar2 = *(code **)(*(int *)local_224 + 0xb4);
            guard_check_icall(local_228);
            (*pcVar2)();
            pcVar2 = *(code **)(*(int *)local_224 + 0xb0);
            guard_check_icall(local_22c + 0xe110);
            (*pcVar2)();
            puVar9 = (undefined4 *)FUN_10023712(local_22c);
            pcVar2 = *(code **)(*(int *)local_224 + 200);
            guard_check_icall(*puVar9);
            (*pcVar2)();
            CMFCRibbonButtonsGroup::AddButton((CMFCRibbonButtonsGroup *)this,local_224);
            local_230 = local_230 + 1;
            ATL::CStringData::Release((CStringData *)(iVar8 + -0x10));
          }
          local_8 = 0xffffffff;
          ATL::CStringData::Release((CStringData *)(local_220 + -0x10));
          local_22c = local_22c + 1;
        } while (local_22c < piVar1[1]);
      }
    }
    FUN_10154478();
    return;
  }
  ___report_rangecheckfailure();
  pcVar2 = (code *)swi(3);
  (*pcVar2)();
  return;
}

