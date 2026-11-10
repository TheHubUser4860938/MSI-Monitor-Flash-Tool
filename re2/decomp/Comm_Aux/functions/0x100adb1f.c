// rea decompile_all
// name: FID_conflict:ParsePoint
// address: 0x100adb1f
// body: available
// range: 0x100adb1f-0x100adc9e inclusive
// non_contiguous: false
// provider: Ghidra 12.1.2 (ghidra)
// analysis_profile: b075844f08879296d957518397cd0ddda73db81dce53d00d3f0e702766fc2af6
// limitations: The session serves operations only after Ghidra reports default auto-analysis complete; incomplete analysis does not expose partial results.; The imported Program and temporary project are ephemeral and deleted on close. Annotation operations edit session database metadata; original executable bytes are never written.; Cancelling an active Ghidra request terminates its ephemeral database and discards session annotations. The selected target remains open; the next provider query imports the original artifact again.; Default-space addresses use lowercase 0x-prefixed hexadecimal; other address spaces use <percent-encoded-space>:0x<hex>.; Ghidra Listing reports a terminal call at 0x100adc58 to 0x1004886a FUN_1004886a (external=false, thunk=false, hasNoReturn=true); fallthrough is excluded by Ghidra's flow model. This records Ghidra's FunctionManager flag, not an independent verification that the callee cannot return.; The Ghidra Program references PDB Comm_Aux.pdb (GUID ba7920cc-daa3-4461-a102-1f8f66c67a2a, age (hex) 1, signature unknown, version RSDS); Ghidra reports load state unknown. Original names and types may be missing; an empty name search does not prove a procedure is absent. Use list_procedures and address-based analysis to inspect recovered functions. REA does not admit a caller-selected PDB companion.; This session uses Ghidra 12.1.2. The bridge is verified against 12.1.4; other 12.1.x builds are accepted and the observed version is reported.; Pseudocode is Ghidra decompiler output, not original source and not text-equivalent to Hopper output.; External functions and functions without an analyzable body return null; other decompiler failures remain explicit.
// pseudocode: provider-specific; not original source


/* WARNING: Function: __EH_prolog3 replaced with injection: EH_prolog3 */
/* WARNING: Function: __EH_epilog3 replaced with injection: EH_epilog3 */
/* Library Function - Multiple Matches With Different Base Names
    public: static int __stdcall CTagManager::ParsePoint(class ATL::CStringT<wchar_t,class
   StrTraitMFC<wchar_t,class ATL::ChTraitsCRT<wchar_t> > > const &,class CPoint &)
    public: static int __stdcall CTagManager::ParseSize(class ATL::CStringT<wchar_t,class
   StrTraitMFC<wchar_t,class ATL::ChTraitsCRT<wchar_t> > > const &,class CSize &)
   
   Library: Visual Studio 2015 Release */

undefined4 FID_conflict_ParsePoint(undefined4 *param_1,long *param_2)

{
  undefined4 uVar1;
  int iVar2;
  long lVar3;
  undefined4 uVar4;
  CStringArray local_3c [4];
  undefined4 *local_38;
  int local_34;
  CTagManager local_28 [4];
  undefined4 local_24;
  CStringT<wchar_t,StrTraitMFC<wchar_t,ATL::ChTraitsCRT<wchar_t>_>_> local_20 [4];
  CStringT<wchar_t,StrTraitMFC<wchar_t,ATL::ChTraitsCRT<wchar_t>_>_> local_1c [4];
  int local_18;
  int local_14 [3];
  undefined4 local_8;
  undefined4 uStack_4;
  
  uStack_4 = 0x2c;
  local_8 = 0x100adb2b;
  CTagManager::CTagManager(local_28,(wchar_t *)*param_1);
  uVar4 = 0;
  local_8 = 0;
  CStringArray::CStringArray(local_3c);
  local_8._0_1_ = 1;
  uVar1 = FUN_10048e90();
  FUN_10034c30(uVar1);
  local_8._0_1_ = 2;
  uVar1 = FUN_10048e90();
  FUN_10034c30(uVar1);
  local_8._0_1_ = 3;
  CTagManager::ExcludeTag
            (local_28,(wchar_t *)PTR_DAT_10205b40,
             (CStringT<wchar_t,StrTraitMFC<wchar_t,ATL::ChTraitsCRT<wchar_t>_>_> *)&local_18,0);
  FUN_100342c0();
  FUN_10034370();
  CTagManager::ExcludeTag
            (local_28,(wchar_t *)PTR_DAT_10205b44,
             (CStringT<wchar_t,StrTraitMFC<wchar_t,ATL::ChTraitsCRT<wchar_t>_>_> *)local_14,0);
  FUN_100342c0();
  FUN_10034370();
  if ((*(int *)(local_18 + -0xc) == 0) || (*(int *)(local_14[0] + -0xc) == 0)) {
    FUN_100352e0(&DAT_101be9f4);
    local_8._0_1_ = 4;
    FUN_100352e0(local_24);
    local_8._0_1_ = 5;
    iVar2 = CTagManager::ParseString(local_1c,local_20,local_3c,1,0);
    FUN_10034f00();
    local_8._0_1_ = 3;
    FUN_10034f00();
    if (iVar2 == 0) goto LAB_100adc6f;
  }
  else {
    FUN_101368f9(local_34,&local_18);
    FUN_101368f9(local_34,local_14);
  }
  if (local_34 == 2) {
    lVar3 = __wtol((wchar_t *)*local_38);
    *param_2 = lVar3;
    if (local_34 < 2) {
                    /* WARNING: Subroutine does not return */
      FUN_1004886a();
    }
    lVar3 = __wtol((wchar_t *)local_38[1]);
    param_2[1] = lVar3;
    uVar4 = 1;
  }
LAB_100adc6f:
  FUN_10034f00();
  FUN_10034f00();
  CStringArray::~CStringArray(local_3c);
  CTagManager::~CTagManager(local_28);
  return uVar4;
}

