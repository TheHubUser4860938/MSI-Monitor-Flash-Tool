// rea decompile_all
// name: CMFCToolBar::LoadLargeIconsState
// address: 0x453eed
// body: available
// range: 0x453eed-0x453fac inclusive
// non_contiguous: false
// provider: Ghidra 12.1.2 (ghidra)
// analysis_profile: ac6d50be2cdf54f7005df47d1ed7e7ef55dee595681eb1b7c2e0b00d70cd697d
// limitations: The session serves operations only after Ghidra reports default auto-analysis complete; incomplete analysis does not expose partial results.; The imported Program and temporary project are ephemeral and deleted on close. Annotation operations edit session database metadata; original executable bytes are never written.; Cancelling an active Ghidra request terminates its ephemeral database and discards session annotations. The selected target remains open; the next provider query imports the original artifact again.; Default-space addresses use lowercase 0x-prefixed hexadecimal; other address spaces use <percent-encoded-space>:0x<hex>.; The Ghidra Program references PDB ISPToolForMsi.pdb (GUID b8f2ac8f-1d6f-438d-800f-ed4a14426ac6, age (hex) 1, signature unknown, version RSDS); Ghidra reports load state unknown. Original names and types may be missing; an empty name search does not prove a procedure is absent. Use list_procedures and address-based analysis to inspect recovered functions. REA does not admit a caller-selected PDB companion.; This session uses Ghidra 12.1.2. The bridge is verified against 12.1.4; other 12.1.x builds are accepted and the observed version is reported.; Pseudocode is Ghidra decompiler output, not original source and not text-equivalent to Hopper output.; External functions and functions without an analyzable body return null; other decompiler failures remain explicit.
// pseudocode: provider-specific; not original source


/* WARNING: Function: __EH_prolog3 replaced with injection: EH_prolog3 */
/* WARNING: Function: __EH_epilog3 replaced with injection: EH_epilog3 */
/* Library Function - Single Match
    public: static int __stdcall CMFCToolBar::LoadLargeIconsState(wchar_t const *)
   
   Library: Visual Studio 2015 Release */

int CMFCToolBar::LoadLargeIconsState(wchar_t *param_1)

{
  code *pcVar1;
  undefined4 uVar2;
  int iVar3;
  CStringT<wchar_t,StrTraitMFC<wchar_t,ATL::ChTraitsCRT<wchar_t>_>_> *this;
  int iVar4;
  undefined4 local_24;
  undefined4 local_20;
  undefined4 local_1c;
  CSettingsStore *local_18;
  undefined4 local_14 [3];
  undefined4 local_8;
  undefined4 uStack_4;
  
  uStack_4 = 0x14;
  local_8 = 0x453ef9;
  AFXGetRegPath((wchar_t *)&local_1c,L"MFCToolBars");
  iVar4 = 0;
  local_8 = 0;
  uVar2 = FUN_004295fe();
  FUN_0040eb30(uVar2);
  local_8._0_1_ = 1;
  ATL::CStringT<wchar_t,StrTraitMFC<wchar_t,ATL::ChTraitsCRT<wchar_t>_>_>::Format
            (this,(wchar_t *)local_14,L"%TsMFCToolBarParameters",local_1c);
  local_24 = 0;
  local_20 = 0;
  local_8 = CONCAT31(local_8._1_3_,2);
  local_18 = CSettingsStoreSP::Create((CSettingsStoreSP *)&local_24,0,1);
  pcVar1 = *(code **)(*(int *)local_18 + 0x10);
  guard_check_icall(local_14[0]);
  iVar3 = (*pcVar1)();
  if (iVar3 != 0) {
    pcVar1 = *(code **)(*(int *)local_18 + 0x54);
    guard_check_icall(L"LargeIcons",&DAT_00614ee0);
    iVar4 = (*pcVar1)();
  }
  CSettingsStoreSP::~CSettingsStoreSP((CSettingsStoreSP *)&local_24);
  FUN_0040efa0();
  FUN_0040efa0();
  return iVar4;
}

