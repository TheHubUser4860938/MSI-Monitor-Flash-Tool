// rea decompile_all
// name: CTagManager::ExcludeTag
// address: 0x10081e7e
// body: available
// range: 0x10081e7e-0x1008214d inclusive
// non_contiguous: false
// provider: Ghidra 12.1.2 (ghidra)
// analysis_profile: b075844f08879296d957518397cd0ddda73db81dce53d00d3f0e702766fc2af6
// limitations: The session serves operations only after Ghidra reports default auto-analysis complete; incomplete analysis does not expose partial results.; The imported Program and temporary project are ephemeral and deleted on close. Annotation operations edit session database metadata; original executable bytes are never written.; Cancelling an active Ghidra request terminates its ephemeral database and discards session annotations. The selected target remains open; the next provider query imports the original artifact again.; Default-space addresses use lowercase 0x-prefixed hexadecimal; other address spaces use <percent-encoded-space>:0x<hex>.; The Ghidra Program references PDB WinOperateCScaler.pdb (GUID a6737962-efea-4805-8ae6-1fc1ef126554, age (hex) 1, signature unknown, version RSDS); Ghidra reports load state unknown. Original names and types may be missing; an empty name search does not prove a procedure is absent. Use list_procedures and address-based analysis to inspect recovered functions. REA does not admit a caller-selected PDB companion.; This session uses Ghidra 12.1.2. The bridge is verified against 12.1.4; other 12.1.x builds are accepted and the observed version is reported.; Pseudocode is Ghidra decompiler output, not original source and not text-equivalent to Hopper output.; External functions and functions without an analyzable body return null; other decompiler failures remain explicit.
// pseudocode: provider-specific; not original source


/* WARNING: Function: __EH_prolog3 replaced with injection: EH_prolog3 */
/* WARNING: Function: __EH_epilog3 replaced with injection: EH_epilog3 */
/* Library Function - Single Match
    public: int __thiscall CTagManager::ExcludeTag(wchar_t const *,class ATL::CStringT<wchar_t,class
   StrTraitMFC<wchar_t,class ATL::ChTraitsCRT<wchar_t> > > &,int)
   
   Library: Visual Studio 2015 Release */

int __thiscall
CTagManager::ExcludeTag
          (CTagManager *this,wchar_t *param_1,
          CStringT<wchar_t,StrTraitMFC<wchar_t,ATL::ChTraitsCRT<wchar_t>_>_> *param_2,int param_3)

{
  CStringT<wchar_t,StrTraitMFC<wchar_t,ATL::ChTraitsCRT<wchar_t>_>_> *this_00;
  short sVar1;
  undefined4 *puVar2;
  undefined4 uVar3;
  int iVar4;
  uint uVar5;
  size_t sVar6;
  int iVar7;
  int local_48;
  int local_44;
  int local_40;
  int local_3c;
  size_t local_38;
  int local_34;
  int local_30;
  CStringT<wchar_t,StrTraitMFC<wchar_t,ATL::ChTraitsCRT<wchar_t>_>_> *local_2c;
  int local_28;
  size_t local_24;
  wchar_t *local_20;
  wchar_t *local_1c;
  uint local_18;
  char local_11;
  undefined4 local_8;
  undefined4 uStack_4;
  
  uStack_4 = 0x38;
  local_8 = 0x10081e8a;
  this_00 = (CStringT<wchar_t,StrTraitMFC<wchar_t,ATL::ChTraitsCRT<wchar_t>_>_> *)(this + 4);
  iVar4 = 0;
  uVar5 = 0;
  local_18 = 0;
  local_30 = *(int *)(*(int *)this_00 + -0xc);
  local_2c = this_00;
  FUN_100185a0(&DAT_101b22d4);
  local_8._0_1_ = 0;
  local_8._1_3_ = 0;
  ATL::CSimpleStringT<wchar_t,0>::Append((CSimpleStringT<wchar_t,0> *)&local_20,param_1);
  ATL::CSimpleStringT<wchar_t,0>::AppendChar((CSimpleStringT<wchar_t,0> *)&local_20,L'>');
  local_24 = *(size_t *)(local_20 + -6);
  local_48 = ATL::CStringT<wchar_t,StrTraitMFC<wchar_t,ATL::ChTraitsCRT<wchar_t>_>_>::Find
                       (this_00,local_20,0);
  if (-1 < local_48) {
    iVar7 = local_24 + local_48;
    local_34 = iVar7;
    FUN_100185a0(&DAT_101b22dc);
    local_8._0_1_ = 1;
    ATL::CSimpleStringT<wchar_t,0>::Append((CSimpleStringT<wchar_t,0> *)&local_1c,param_1);
    ATL::CSimpleStringT<wchar_t,0>::AppendChar((CSimpleStringT<wchar_t,0> *)&local_1c,L'>');
    local_28 = 1;
    local_38 = *(size_t *)(local_1c + -6);
    local_44 = (local_30 - local_38) + 1;
    if (iVar7 < local_44) {
      do {
        sVar1 = FUN_1001ea46(iVar7);
        if (sVar1 == 0x3c) {
          sVar6 = local_24;
          if (iVar7 < (int)(local_30 - local_24)) {
            puVar2 = (undefined4 *)
                     ATL::CStringT<wchar_t,StrTraitMFC<wchar_t,ATL::ChTraitsCRT<wchar_t>_>_>::Mid
                               (local_2c,(int)&local_3c);
            sVar6 = local_24;
            local_18 = uVar5 | 1;
            iVar4 = _wcsncmp((wchar_t *)*puVar2,local_20,local_24);
            if (iVar4 != 0) goto LAB_10081f80;
            local_11 = '\x01';
          }
          else {
LAB_10081f80:
            local_11 = '\0';
          }
          if ((local_18 & 1) != 0) {
            local_18 = local_18 & 0xfffffffe;
            ATL::CStringData::Release((CStringData *)(local_3c + -0x10));
          }
          if (local_11 == '\0') {
            puVar2 = (undefined4 *)
                     ATL::CStringT<wchar_t,StrTraitMFC<wchar_t,ATL::ChTraitsCRT<wchar_t>_>_>::Mid
                               (local_2c,(int)&local_40);
            sVar6 = local_38;
            iVar4 = _wcsncmp((wchar_t *)*puVar2,local_1c,local_38);
            ATL::CStringData::Release((CStringData *)(local_40 + -0x10));
            uVar5 = local_18;
            if (iVar4 == 0) {
              local_28 = local_28 + -1;
              if (local_28 == 0) {
                if ((iVar7 == -1) || (iVar7 < local_34)) {
                  iVar4 = 0;
                }
                else {
                  uVar3 = FUN_10018cc0(&local_44,local_34,iVar7 - local_34);
                  local_8._0_1_ = 2;
                  FUN_10018680(uVar3);
                  local_8._0_1_ = 1;
                  ATL::CStringData::Release((CStringData *)(local_44 + -0x10));
                  FUN_10018fc0();
                  FUN_10019070();
                  FUN_10018880(local_48,(iVar7 - local_48) + local_38);
                  if (param_3 != 0) {
                    if ((1 < *(int *)(*(int *)param_2 + -0xc)) &&
                       (sVar1 = FUN_1001ea46(0), sVar1 == 0x22)) {
                      uVar3 = FUN_10018cc0(&local_48,1,*(int *)(*(int *)param_2 + -0xc) + -2);
                      local_8._0_1_ = 3;
                      FUN_10018680(uVar3);
                      local_8._0_1_ = 1;
                      ATL::CStringData::Release((CStringData *)(local_48 + -0x10));
                    }
                    ATL::CStringT<wchar_t,StrTraitMFC<wchar_t,ATL::ChTraitsCRT<wchar_t>_>_>::Replace
                              (param_2,L"\\t",L"\t");
                    ATL::CStringT<wchar_t,StrTraitMFC<wchar_t,ATL::ChTraitsCRT<wchar_t>_>_>::Replace
                              (param_2,L"\\n",L"\n");
                    ATL::CStringT<wchar_t,StrTraitMFC<wchar_t,ATL::ChTraitsCRT<wchar_t>_>_>::Replace
                              (param_2,L"\\r",L"\r");
                    ATL::CStringT<wchar_t,StrTraitMFC<wchar_t,ATL::ChTraitsCRT<wchar_t>_>_>::Replace
                              (param_2,L"\\b",L"\b");
                    ATL::CStringT<wchar_t,StrTraitMFC<wchar_t,ATL::ChTraitsCRT<wchar_t>_>_>::Replace
                              (param_2,L"LT",L"<");
                    ATL::CStringT<wchar_t,StrTraitMFC<wchar_t,ATL::ChTraitsCRT<wchar_t>_>_>::Replace
                              (param_2,L"GT",L">");
                    ATL::CStringT<wchar_t,StrTraitMFC<wchar_t,ATL::ChTraitsCRT<wchar_t>_>_>::Replace
                              (param_2,L"AMP",L"&");
                  }
                  iVar4 = 1;
                }
                break;
              }
              iVar7 = iVar7 + (sVar6 - 1);
            }
          }
          else {
            iVar7 = iVar7 + (sVar6 - 1);
            local_28 = local_28 + 1;
            uVar5 = local_18;
          }
        }
        iVar4 = 0;
        iVar7 = iVar7 + 1;
      } while (iVar7 < local_44);
    }
    ATL::CStringData::Release((CStringData *)(local_1c + -8));
  }
  ATL::CStringData::Release((CStringData *)(local_20 + -8));
  return iVar4;
}

