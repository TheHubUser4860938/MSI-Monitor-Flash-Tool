// rea decompile_all
// name: CTagManager::ParseRect
// address: 0x52a92d
// body: available
// range: 0x52a92d-0x52ad01 inclusive
// non_contiguous: false
// provider: Ghidra 12.1.2 (ghidra)
// analysis_profile: ac6d50be2cdf54f7005df47d1ed7e7ef55dee595681eb1b7c2e0b00d70cd697d
// limitations: The session serves operations only after Ghidra reports default auto-analysis complete; incomplete analysis does not expose partial results.; The imported Program and temporary project are ephemeral and deleted on close. Annotation operations edit session database metadata; original executable bytes are never written.; Cancelling an active Ghidra request terminates its ephemeral database and discards session annotations. The selected target remains open; the next provider query imports the original artifact again.; Default-space addresses use lowercase 0x-prefixed hexadecimal; other address spaces use <percent-encoded-space>:0x<hex>.; Ghidra Listing reports a terminal call at 0x52ac64 to 0x429127 FUN_00429127 (external=false, thunk=false, hasNoReturn=true); fallthrough is excluded by Ghidra's flow model. This records Ghidra's FunctionManager flag, not an independent verification that the callee cannot return.; The Ghidra Program references PDB ISPToolForMsi.pdb (GUID b8f2ac8f-1d6f-438d-800f-ed4a14426ac6, age (hex) 1, signature unknown, version RSDS); Ghidra reports load state unknown. Original names and types may be missing; an empty name search does not prove a procedure is absent. Use list_procedures and address-based analysis to inspect recovered functions. REA does not admit a caller-selected PDB companion.; This session uses Ghidra 12.1.2. The bridge is verified against 12.1.4; other 12.1.x builds are accepted and the observed version is reported.; Pseudocode is Ghidra decompiler output, not original source and not text-equivalent to Hopper output.; External functions and functions without an analyzable body return null; other decompiler failures remain explicit.
// pseudocode: provider-specific; not original source


/* WARNING: Function: __EH_prolog3 replaced with injection: EH_prolog3 */
/* WARNING: Function: __EH_epilog3 replaced with injection: EH_epilog3 */
/* Library Function - Single Match
    public: static int __stdcall CTagManager::ParseRect(class ATL::CStringT<wchar_t,class
   StrTraitMFC<wchar_t,class ATL::ChTraitsCRT<wchar_t> > > const &,class CRect &)
   
   Library: Visual Studio 2015 Release */

int CTagManager::ParseRect
              (CStringT<wchar_t,StrTraitMFC<wchar_t,ATL::ChTraitsCRT<wchar_t>_>_> *param_1,
              CRect *param_2)

{
  undefined4 uVar1;
  int iVar2;
  long lVar3;
  int iVar4;
  CStringArray local_64 [4];
  undefined4 *local_60;
  int local_5c;
  int local_50;
  int local_4c;
  int local_48;
  int local_44;
  CTagManager local_40 [4];
  undefined4 local_3c;
  int local_38;
  int local_34;
  int local_30;
  int local_2c;
  int local_28;
  int local_24;
  int local_20;
  int local_1c;
  CStringT<wchar_t,StrTraitMFC<wchar_t,ATL::ChTraitsCRT<wchar_t>_>_> local_18 [4];
  CStringT<wchar_t,StrTraitMFC<wchar_t,ATL::ChTraitsCRT<wchar_t>_>_> local_14 [12];
  undefined4 local_8;
  undefined4 uStack_4;
  
  uStack_4 = 0x54;
  local_8 = 0x52a939;
  CTagManager(local_40,*(wchar_t **)param_1);
  local_8 = 0;
  uVar1 = FUN_004295fe();
  FUN_0040eb30(uVar1);
  iVar4 = 1;
  local_8._0_1_ = 1;
  uVar1 = FUN_004295fe();
  FUN_0040eb30(uVar1);
  local_8._0_1_ = 2;
  ExcludeTag(local_40,(wchar_t *)PTR_u_OFFSET_0060cb8c,local_18,0);
  FUN_00414ce0();
  FUN_00414d90();
  ExcludeTag(local_40,(wchar_t *)PTR_u_SIZE_0060cb84,local_14,0);
  FUN_00414ce0();
  FUN_00414d90();
  local_38 = 0;
  local_34 = 0;
  local_30 = 0;
  local_2c = 0;
  iVar2 = FID_conflict_ParsePoint(local_18,&local_38);
  if ((iVar2 == 0) || (iVar2 = FID_conflict_ParsePoint(local_14,&local_30), iVar2 == 0)) {
    SetBuffer(*(undefined4 *)param_1);
    ExcludeTag(local_40,(wchar_t *)PTR_u_LEFTTOP_0060cbb0,local_18,0);
    FUN_00414ce0();
    FUN_00414d90();
    ExcludeTag(local_40,(wchar_t *)PTR_u_RIGHTBOTTOM_0060cbbc,local_14,0);
    FUN_00414ce0();
    FUN_00414d90();
    local_30 = 0;
    local_2c = 0;
    iVar2 = FID_conflict_ParsePoint(local_18,&local_38);
    if ((iVar2 == 0) || (iVar2 = FID_conflict_ParsePoint(local_14,&local_30), iVar2 == 0)) {
      CStringArray::CStringArray(local_64);
      local_8._0_1_ = 3;
      uVar1 = FUN_004295fe();
      FUN_0040eb30(uVar1);
      local_8._0_1_ = 4;
      uVar1 = FUN_004295fe();
      FUN_0040eb30(uVar1);
      local_8._0_1_ = 5;
      uVar1 = FUN_004295fe();
      FUN_0040eb30(uVar1);
      local_8._0_1_ = 6;
      uVar1 = FUN_004295fe();
      FUN_0040eb30(uVar1);
      local_8._0_1_ = 7;
      SetBuffer(*(undefined4 *)param_1);
      ExcludeTag(local_40,(wchar_t *)PTR_u_LEFT_0060cba0,
                 (CStringT<wchar_t,StrTraitMFC<wchar_t,ATL::ChTraitsCRT<wchar_t>_>_> *)&local_28,0);
      FUN_00414ce0();
      FUN_00414d90();
      ExcludeTag(local_40,(wchar_t *)PTR_DAT_0060cba8,
                 (CStringT<wchar_t,StrTraitMFC<wchar_t,ATL::ChTraitsCRT<wchar_t>_>_> *)&local_24,0);
      FUN_00414ce0();
      FUN_00414d90();
      ExcludeTag(local_40,(wchar_t *)PTR_u_RIGHT_0060cba4,
                 (CStringT<wchar_t,StrTraitMFC<wchar_t,ATL::ChTraitsCRT<wchar_t>_>_> *)&local_20,0);
      FUN_00414ce0();
      FUN_00414d90();
      ExcludeTag(local_40,(wchar_t *)PTR_u_BOTTOM_0060cbac,
                 (CStringT<wchar_t,StrTraitMFC<wchar_t,ATL::ChTraitsCRT<wchar_t>_>_> *)&local_1c,0);
      FUN_00414ce0();
      FUN_00414d90();
      if ((((*(int *)(local_28 + -0xc) == 0) || (*(int *)(local_24 + -0xc) == 0)) ||
          (*(int *)(local_20 + -0xc) == 0)) || (*(int *)(local_1c + -0xc) == 0)) {
        FUN_00415a10(&DAT_005cfcd8);
        local_8._0_1_ = 8;
        FUN_00415a10(local_3c);
        local_8._0_1_ = 9;
        iVar2 = ParseString((CStringT<wchar_t,StrTraitMFC<wchar_t,ATL::ChTraitsCRT<wchar_t>_>_> *)
                            &local_2c,
                            (CStringT<wchar_t,StrTraitMFC<wchar_t,ATL::ChTraitsCRT<wchar_t>_>_> *)
                            &local_34,local_64,1,0);
        FUN_0040efa0();
        local_8._0_1_ = 7;
        FUN_0040efa0();
        if (iVar2 != 0) goto LAB_0052ac49;
LAB_0052aca4:
        iVar4 = 0;
      }
      else {
        FUN_0051574f(local_5c,&local_28);
        FUN_0051574f(local_5c,&local_24);
        FUN_0051574f(local_5c,&local_20);
        FUN_0051574f(local_5c,&local_1c);
LAB_0052ac49:
        iVar4 = 1;
        if (local_5c != 4) goto LAB_0052aca4;
        lVar3 = __wtol((wchar_t *)*local_60);
        *(long *)param_2 = lVar3;
        if (local_5c < 2) {
LAB_0052ac64:
                    /* WARNING: Subroutine does not return */
          FUN_00429127();
        }
        lVar3 = __wtol((wchar_t *)local_60[1]);
        *(long *)(param_2 + 4) = lVar3;
        if (local_5c < 3) goto LAB_0052ac64;
        lVar3 = __wtol((wchar_t *)local_60[2]);
        *(long *)(param_2 + 8) = lVar3;
        if (local_5c < 4) goto LAB_0052ac64;
        lVar3 = __wtol((wchar_t *)local_60[3]);
        *(long *)(param_2 + 0xc) = lVar3;
      }
      FUN_0040efa0();
      FUN_0040efa0();
      FUN_0040efa0();
      FUN_0040efa0();
      CStringArray::~CStringArray(local_64);
      goto LAB_0052acda;
    }
    local_48 = local_30;
    local_44 = local_2c;
  }
  else {
    local_48 = local_30 + local_38;
    local_44 = local_2c + local_34;
  }
  *(int *)param_2 = local_38;
  *(int *)(param_2 + 4) = local_34;
  *(int *)(param_2 + 8) = local_48;
  *(int *)(param_2 + 0xc) = local_44;
  local_50 = local_38;
  local_4c = local_34;
LAB_0052acda:
  FUN_0040efa0();
  FUN_0040efa0();
  ~CTagManager(local_40);
  return iVar4;
}

