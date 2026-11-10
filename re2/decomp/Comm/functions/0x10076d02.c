// rea decompile_all
// name: CTagManager::ParseColor
// address: 0x10076d02
// body: available
// range: 0x10076d02-0x10076f6d inclusive
// non_contiguous: false
// provider: Ghidra 12.1.2 (ghidra)
// analysis_profile: b075844f08879296d957518397cd0ddda73db81dce53d00d3f0e702766fc2af6
// limitations: The session serves operations only after Ghidra reports default auto-analysis complete; incomplete analysis does not expose partial results.; The imported Program and temporary project are ephemeral and deleted on close. Annotation operations edit session database metadata; original executable bytes are never written.; Cancelling an active Ghidra request terminates its ephemeral database and discards session annotations. The selected target remains open; the next provider query imports the original artifact again.; Default-space addresses use lowercase 0x-prefixed hexadecimal; other address spaces use <percent-encoded-space>:0x<hex>.; The Ghidra Program references PDB Comm.pdb (GUID c3062acb-498d-45fa-a233-c8b7e401bb13, age (hex) 1, signature unknown, version RSDS); Ghidra reports load state unknown. Original names and types may be missing; an empty name search does not prove a procedure is absent. Use list_procedures and address-based analysis to inspect recovered functions. REA does not admit a caller-selected PDB companion.; This session uses Ghidra 12.1.2. The bridge is verified against 12.1.4; other 12.1.x builds are accepted and the observed version is reported.; Pseudocode is Ghidra decompiler output, not original source and not text-equivalent to Hopper output.; External functions and functions without an analyzable body return null; other decompiler failures remain explicit.
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
  local_8 = 0x10076d0e;
  CTagManager(local_2c,*(wchar_t **)param_1);
  local_8 = 0;
  CStringArray::CStringArray(local_40);
  local_8._0_1_ = 1;
  uVar1 = FUN_10013071();
  FUN_10003190(uVar1);
  local_8._0_1_ = 2;
  uVar1 = FUN_10013071();
  FUN_10003190(uVar1);
  local_8._0_1_ = 3;
  uVar1 = FUN_10013071();
  FUN_10003190(uVar1);
  local_8._0_1_ = 4;
  uVar1 = FUN_10013071();
  FUN_10003190(uVar1);
  local_8._0_1_ = 5;
  ExcludeTag(local_2c,(wchar_t *)PTR_DAT_101d3700,
             (CStringT<wchar_t,StrTraitMFC<wchar_t,ATL::ChTraitsCRT<wchar_t>_>_> *)&local_20,0);
  FUN_100110b0();
  FUN_10011160();
  ExcludeTag(local_2c,(wchar_t *)PTR_DAT_101d3704,
             (CStringT<wchar_t,StrTraitMFC<wchar_t,ATL::ChTraitsCRT<wchar_t>_>_> *)local_14,0);
  FUN_100110b0();
  FUN_10011160();
  ExcludeTag(local_2c,(wchar_t *)PTR_DAT_101d3708,
             (CStringT<wchar_t,StrTraitMFC<wchar_t,ATL::ChTraitsCRT<wchar_t>_>_> *)&local_1c,0);
  FUN_100110b0();
  FUN_10011160();
  ExcludeTag(local_2c,(wchar_t *)PTR_DAT_101d370c,
             (CStringT<wchar_t,StrTraitMFC<wchar_t,ATL::ChTraitsCRT<wchar_t>_>_> *)&local_18,0);
  FUN_100110b0();
  FUN_10011160();
  if (((*(int *)(local_14[0] + -0xc) == 0) || (*(int *)(local_1c + -0xc) == 0)) ||
     (*(int *)(local_18 + -0xc) == 0)) {
    FUN_100037c0(&DAT_1018b87c);
    local_8._0_1_ = 6;
    iVar6 = ParseString(param_1,local_24,local_40,1,0);
    local_8._0_1_ = 5;
    FUN_10003460();
    if (iVar6 == 0) {
      FUN_10003780(local_28);
      FUN_100110b0();
      FUN_10011160();
      FUN_10100781(local_38,local_14);
    }
  }
  else {
    FUN_10100781(local_38,local_14);
    FUN_10100781(local_38,&local_1c);
    FUN_10100781(local_38,&local_18);
    if (*(int *)(local_20 + -0xc) != 0) {
      FUN_10100781(local_38,&local_20);
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
      goto LAB_10076f28;
    }
    if (local_38 == 1) {
      uVar5 = __wtol((wchar_t *)*local_3c);
      *param_2 = uVar5;
      goto LAB_10076f28;
    }
  }
  iVar6 = 0;
LAB_10076f28:
  FUN_10003460();
  FUN_10003460();
  FUN_10003460();
  FUN_10003460();
  CStringArray::~CStringArray(local_40);
  ~CTagManager(local_2c);
  return iVar6;
}

