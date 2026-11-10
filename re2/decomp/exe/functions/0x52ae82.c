// rea decompile_all
// name: CTagManager::ParseString
// address: 0x52ae82
// body: available
// range: 0x52ae82-0x52aff8 inclusive
// non_contiguous: false
// provider: Ghidra 12.1.2 (ghidra)
// analysis_profile: ac6d50be2cdf54f7005df47d1ed7e7ef55dee595681eb1b7c2e0b00d70cd697d
// limitations: The session serves operations only after Ghidra reports default auto-analysis complete; incomplete analysis does not expose partial results.; The imported Program and temporary project are ephemeral and deleted on close. Annotation operations edit session database metadata; original executable bytes are never written.; Cancelling an active Ghidra request terminates its ephemeral database and discards session annotations. The selected target remains open; the next provider query imports the original artifact again.; Default-space addresses use lowercase 0x-prefixed hexadecimal; other address spaces use <percent-encoded-space>:0x<hex>.; The Ghidra Program references PDB ISPToolForMsi.pdb (GUID b8f2ac8f-1d6f-438d-800f-ed4a14426ac6, age (hex) 1, signature unknown, version RSDS); Ghidra reports load state unknown. Original names and types may be missing; an empty name search does not prove a procedure is absent. Use list_procedures and address-based analysis to inspect recovered functions. REA does not admit a caller-selected PDB companion.; This session uses Ghidra 12.1.2. The bridge is verified against 12.1.4; other 12.1.x builds are accepted and the observed version is reported.; Pseudocode is Ghidra decompiler output, not original source and not text-equivalent to Hopper output.; External functions and functions without an analyzable body return null; other decompiler failures remain explicit.
// pseudocode: provider-specific; not original source


/* WARNING: Function: __EH_prolog3 replaced with injection: EH_prolog3 */
/* WARNING: Function: __EH_epilog3 replaced with injection: EH_epilog3 */
/* Library Function - Single Match
    public: static int __stdcall CTagManager::ParseString(class ATL::CStringT<wchar_t,class
   StrTraitMFC<wchar_t,class ATL::ChTraitsCRT<wchar_t> > > const &,class ATL::CStringT<wchar_t,class
   StrTraitMFC<wchar_t,class ATL::ChTraitsCRT<wchar_t> > > const &,class CStringArray &,int,int)
   
   Library: Visual Studio 2015 Release */

int CTagManager::ParseString
              (CStringT<wchar_t,StrTraitMFC<wchar_t,ATL::ChTraitsCRT<wchar_t>_>_> *param_1,
              CStringT<wchar_t,StrTraitMFC<wchar_t,ATL::ChTraitsCRT<wchar_t>_>_> *param_2,
              CStringArray *param_3,int param_4,int param_5)

{
  uint uVar1;
  int iVar2;
  undefined4 uVar3;
  undefined1 local_1c [4];
  int local_18;
  int local_14 [3];
  uint local_8;
  undefined4 uStack_4;
  
  uStack_4 = 0xc;
  local_8 = 0x52ae8e;
  FUN_005157d8(0,0xffffffff);
  if (*(int *)(*(int *)param_1 + -0xc) == 0) {
    uVar1 = 0;
  }
  else {
    local_14[0] = FUN_00415ee0(*(int *)param_1 + -0x10);
    local_14[0] = local_14[0] + 0x10;
    local_8 = 0;
    if (param_4 != 0) {
      FUN_00414ce0();
      FUN_00414d90();
    }
    if ((*(int *)(local_14[0] + -0xc) == 0) || (*(int *)(*(wchar_t **)param_2 + -6) == 0)) {
      uVar1 = 0;
    }
    else {
      iVar2 = ATL::CStringT<wchar_t,StrTraitMFC<wchar_t,ATL::ChTraitsCRT<wchar_t>_>_>::Find
                        ((CStringT<wchar_t,StrTraitMFC<wchar_t,ATL::ChTraitsCRT<wchar_t>_>_> *)
                         local_14,*(wchar_t **)param_2,0);
      while (iVar2 != -1) {
        FUN_004147d0(&local_18,iVar2);
        local_8._0_1_ = 1;
        uVar3 = FUN_00414840(local_1c,(*(int *)(local_14[0] + -0xc) -
                                      *(int *)(*(int *)param_2 + -0xc)) - iVar2);
        local_8._0_1_ = 2;
        FUN_00415f50(uVar3);
        local_8 = CONCAT31(local_8._1_3_,1);
        FUN_0040efa0();
        if (param_4 != 0) {
          FUN_00414ce0();
          FUN_00414d90();
          FUN_00414ce0();
        }
        if ((*(int *)(local_18 + -0xc) != 0) || (param_5 != 0)) {
          FUN_0051574f(*(undefined4 *)(param_3 + 8),&local_18);
        }
        iVar2 = ATL::CStringT<wchar_t,StrTraitMFC<wchar_t,ATL::ChTraitsCRT<wchar_t>_>_>::Find
                          ((CStringT<wchar_t,StrTraitMFC<wchar_t,ATL::ChTraitsCRT<wchar_t>_>_> *)
                           local_14,*(wchar_t **)param_2,0);
        if ((iVar2 == -1) && ((*(int *)(local_14[0] + -0xc) != 0 || (param_5 != 0)))) {
          FUN_0051574f(*(undefined4 *)(param_3 + 8),local_14);
        }
        local_8 = local_8 & 0xffffff00;
        FUN_0040efa0();
      }
      uVar1 = (uint)(0 < *(int *)(param_3 + 8));
    }
    FUN_0040efa0();
  }
  return uVar1;
}

