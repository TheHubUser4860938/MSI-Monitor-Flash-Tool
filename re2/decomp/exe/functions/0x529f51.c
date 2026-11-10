// rea decompile_all
// name: CTagManager::ParseColor
// address: 0x529f51
// body: available
// range: 0x529f51-0x52a1bc inclusive
// non_contiguous: false
// provider: Ghidra 12.1.2 (ghidra)
// analysis_profile: ac6d50be2cdf54f7005df47d1ed7e7ef55dee595681eb1b7c2e0b00d70cd697d
// limitations: The session serves operations only after Ghidra reports default auto-analysis complete; incomplete analysis does not expose partial results.; The imported Program and temporary project are ephemeral and deleted on close. Annotation operations edit session database metadata; original executable bytes are never written.; Cancelling an active Ghidra request terminates its ephemeral database and discards session annotations. The selected target remains open; the next provider query imports the original artifact again.; Default-space addresses use lowercase 0x-prefixed hexadecimal; other address spaces use <percent-encoded-space>:0x<hex>.; The Ghidra Program references PDB ISPToolForMsi.pdb (GUID b8f2ac8f-1d6f-438d-800f-ed4a14426ac6, age (hex) 1, signature unknown, version RSDS); Ghidra reports load state unknown. Original names and types may be missing; an empty name search does not prove a procedure is absent. Use list_procedures and address-based analysis to inspect recovered functions. REA does not admit a caller-selected PDB companion.; This session uses Ghidra 12.1.2. The bridge is verified against 12.1.4; other 12.1.x builds are accepted and the observed version is reported.; Pseudocode is Ghidra decompiler output, not original source and not text-equivalent to Hopper output.; External functions and functions without an analyzable body return null; other decompiler failures remain explicit.
// pseudocode: provider-specific; not original source


/* WARNING: Function: __EH_prolog3 replaced with injection: EH_prolog3 */
/* WARNING: Function: __EH_epilog3 replaced with injection: EH_epilog3 */
/* Library Function - Single Match
    public: static int __stdcall CTagManager::ParseColor(class ATL::CStringT<wchar_t,class
   StrTraitMFC<wchar_t,class ATL::ChTraitsCRT<wchar_t> > > const &,unsigned long &)
   
   Library: Visual Studio 2015 Release */

int CTagManager::ParseColor
              (CStringT<wchar_t,StrTraitMFC<wchar_t,ATL::ChTraitsCRT<wchar_t>_>_> *param_1,
              ulong *param_2)

{
  wchar_t *_Str;
  wchar_t *_Str_00;
  undefined4 uVar1;
  uint uVar2;
  uint uVar3;
  uint uVar4;
  ulong uVar5;
  int iVar6;
  CStringArray local_40 [4];
  undefined4 *local_3c;
  int local_38;
  CTagManager local_2c [4];
  undefined4 local_28;
  CStringT<wchar_t,StrTraitMFC<wchar_t,ATL::ChTraitsCRT<wchar_t>_>_> local_24 [4];
  int local_20;
  int local_1c;
  int local_18;
  int local_14 [3];
  undefined4 local_8;
  undefined4 uStack_4;
  
  uStack_4 = 0x30;
  local_8 = 0x529f5d;
  CTagManager(local_2c,*(wchar_t **)param_1);
  local_8 = 0;
  CStringArray::CStringArray(local_40);
  local_8._0_1_ = 1;
  uVar1 = FUN_004295fe();
  FUN_0040eb30(uVar1);
  local_8._0_1_ = 2;
  uVar1 = FUN_004295fe();
  FUN_0040eb30(uVar1);
  local_8._0_1_ = 3;
  uVar1 = FUN_004295fe();
  FUN_0040eb30(uVar1);
  local_8._0_1_ = 4;
  uVar1 = FUN_004295fe();
  FUN_0040eb30(uVar1);
  local_8._0_1_ = 5;
  ExcludeTag(local_2c,(wchar_t *)PTR_DAT_0060cbc0,
             (CStringT<wchar_t,StrTraitMFC<wchar_t,ATL::ChTraitsCRT<wchar_t>_>_> *)&local_20,0);
  FUN_00414ce0();
  FUN_00414d90();
  ExcludeTag(local_2c,(wchar_t *)PTR_DAT_0060cbc4,
             (CStringT<wchar_t,StrTraitMFC<wchar_t,ATL::ChTraitsCRT<wchar_t>_>_> *)local_14,0);
  FUN_00414ce0();
  FUN_00414d90();
  ExcludeTag(local_2c,(wchar_t *)PTR_DAT_0060cbc8,
             (CStringT<wchar_t,StrTraitMFC<wchar_t,ATL::ChTraitsCRT<wchar_t>_>_> *)&local_1c,0);
  FUN_00414ce0();
  FUN_00414d90();
  ExcludeTag(local_2c,(wchar_t *)PTR_DAT_0060cbcc,
             (CStringT<wchar_t,StrTraitMFC<wchar_t,ATL::ChTraitsCRT<wchar_t>_>_> *)&local_18,0);
  FUN_00414ce0();
  FUN_00414d90();
  if (((*(int *)(local_14[0] + -0xc) == 0) || (*(int *)(local_1c + -0xc) == 0)) ||
     (*(int *)(local_18 + -0xc) == 0)) {
    FUN_00415a10(&DAT_005cfcd8);
    local_8._0_1_ = 6;
    iVar6 = ParseString(param_1,local_24,local_40,1,0);
    local_8._0_1_ = 5;
    FUN_0040efa0();
    if (iVar6 == 0) {
      FUN_00415ad0(local_28);
      FUN_00414ce0();
      FUN_00414d90();
      FUN_0051574f(local_38,local_14);
    }
  }
  else {
    FUN_0051574f(local_38,local_14);
    FUN_0051574f(local_38,&local_1c);
    FUN_0051574f(local_38,&local_18);
    if (*(int *)(local_20 + -0xc) != 0) {
      FUN_0051574f(local_38,&local_20);
    }
  }
  iVar6 = 1;
  if (0 < local_38) {
    if (local_38 == 3) {
      _Str = (wchar_t *)*local_3c;
      _Str_00 = (wchar_t *)local_3c[1];
      uVar2 = __wtol((wchar_t *)local_3c[2]);
      uVar3 = __wtol(_Str_00);
      uVar4 = __wtol(_Str);
      iVar6 = 1;
      *param_2 = uVar4 & 0xff | (uVar3 & 0xff | (uVar2 & 0xff) << 8) << 8;
      goto LAB_0052a177;
    }
    if (local_38 == 1) {
      uVar5 = __wtol((wchar_t *)*local_3c);
      *param_2 = uVar5;
      goto LAB_0052a177;
    }
  }
  iVar6 = 0;
LAB_0052a177:
  FUN_0040efa0();
  FUN_0040efa0();
  FUN_0040efa0();
  FUN_0040efa0();
  CStringArray::~CStringArray(local_40);
  ~CTagManager(local_2c);
  return iVar6;
}

