// rea decompile_all
// name: ParseToolBarImages
// address: 0x100af237
// body: available
// range: 0x100af237-0x100af3ab inclusive
// non_contiguous: false
// provider: Ghidra 12.1.2 (ghidra)
// analysis_profile: b075844f08879296d957518397cd0ddda73db81dce53d00d3f0e702766fc2af6
// limitations: The session serves operations only after Ghidra reports default auto-analysis complete; incomplete analysis does not expose partial results.; The imported Program and temporary project are ephemeral and deleted on close. Annotation operations edit session database metadata; original executable bytes are never written.; Cancelling an active Ghidra request terminates its ephemeral database and discards session annotations. The selected target remains open; the next provider query imports the original artifact again.; Default-space addresses use lowercase 0x-prefixed hexadecimal; other address spaces use <percent-encoded-space>:0x<hex>.; The Ghidra Program references PDB WinIspPlugIn.pdb (GUID d9f398c7-6c98-49a8-af25-a0659d5ad2f3, age (hex) 1, signature unknown, version RSDS); Ghidra reports load state unknown. Original names and types may be missing; an empty name search does not prove a procedure is absent. Use list_procedures and address-based analysis to inspect recovered functions. REA does not admit a caller-selected PDB companion.; This session uses Ghidra 12.1.2. The bridge is verified against 12.1.4; other 12.1.x builds are accepted and the observed version is reported.; Pseudocode is Ghidra decompiler output, not original source and not text-equivalent to Hopper output.; External functions and functions without an analyzable body return null; other decompiler failures remain explicit.
// pseudocode: provider-specific; not original source


/* WARNING: Function: __EH_prolog3 replaced with injection: EH_prolog3 */
/* WARNING: Function: __EH_epilog3 replaced with injection: EH_epilog3 */
/* Library Function - Multiple Matches With Same Base Name
    public: static int __stdcall CTagManager::ParseToolBarImages(class ATL::CStringT<char,class
   StrTraitMFC<char,class ATL::ChTraitsCRT<char> > > const &,class CMFCToolBarImages &,char const *)
    public: static int __stdcall CTagManager::ParseToolBarImages(class ATL::CStringT<wchar_t,class
   StrTraitMFC<wchar_t,class ATL::ChTraitsCRT<wchar_t> > > const &,class CMFCToolBarImages &,wchar_t
   const *)
   
   Library: Visual Studio 2015 Release */

undefined4 ParseToolBarImages(undefined4 *param_1,CMFCToolBarImages *param_2,char *param_3)

{
  int iVar1;
  int iVar2;
  undefined4 uVar3;
  undefined1 local_44 [18];
  short local_32;
  CTagManager local_2c [8];
  int local_24;
  int local_20;
  int local_1c;
  CStringT<wchar_t,StrTraitMFC<wchar_t,ATL::ChTraitsCRT<wchar_t>_>_> local_18 [4];
  ulong local_14 [3];
  undefined4 local_8;
  undefined4 uStack_4;
  
  uStack_4 = 0x34;
  local_8 = 0x100af243;
  CTagManager::CTagManager(local_2c,(wchar_t *)*param_1);
  local_8 = 0;
  FUN_1008601e();
  CMFCToolBarImages::SetTransparentColor(param_2,0xffffffff);
  local_24 = 0;
  local_20 = 0;
  FUN_10047180(PTR_u_SIZE_1023d6c4);
  local_8._0_1_ = 1;
  iVar1 = CTagManager::ReadSize
                    (local_2c,(CStringT<wchar_t,StrTraitMFC<wchar_t,ATL::ChTraitsCRT<wchar_t>_>_> *)
                              local_14,(CSize *)&local_24);
  local_8._0_1_ = 0;
  FUN_100476d0();
  iVar2 = local_20;
  if ((iVar1 == 0) || ((local_24 == 0 && (local_20 == 0)))) {
    uVar3 = 0;
  }
  else {
    uVar3 = 1;
    local_1c = 1;
    FUN_10047180(PTR_u_PREMLTCHECK_1023d738);
    local_8._0_1_ = 2;
    CTagManager::ReadBool(local_2c,local_18,&local_1c);
    local_8._0_1_ = 0;
    FUN_100476d0();
    *(int *)(param_2 + 0x3c) = local_1c;
    *(int *)(param_2 + 0x54) = local_24;
    *(int *)(param_2 + 0x58) = iVar2;
    CMFCToolBarImages::LoadStr(param_2,param_3,(HINSTANCE__ *)0x0,0);
    local_14[0] = 0xff000000;
    FUN_10047180(PTR_u_TRANSPARENT_1023d734);
    local_8._0_1_ = 3;
    iVar2 = CTagManager::ReadColor
                      (local_2c,(CStringT<wchar_t,StrTraitMFC<wchar_t,ATL::ChTraitsCRT<wchar_t>_>_>
                                 *)&local_1c,local_14);
    local_8._0_1_ = 0;
    FUN_100476d0();
    if (iVar2 != 0) {
      CMFCToolBarImages::SetTransparentColor(param_2,local_14[0]);
    }
    if (((DAT_10245be4 != 0) && (*(HANDLE *)(param_2 + 0x8c) != (HANDLE)0x0)) &&
       (local_14[0] == 0xff000000)) {
      iVar2 = GetObjectW(*(HANDLE *)(param_2 + 0x8c),0x18,local_44);
      if ((iVar2 != 0) && (local_32 == 0x20)) {
        CMFCToolBarImages::Mirror(param_2);
      }
    }
  }
  CTagManager::~CTagManager(local_2c);
  return uVar3;
}

