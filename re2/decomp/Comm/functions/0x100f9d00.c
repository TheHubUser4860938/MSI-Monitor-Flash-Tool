// rea decompile_all
// name: FUN_100f9d00
// address: 0x100f9d00
// body: available
// range: 0x100f9d00-0x100f9e34 inclusive
// non_contiguous: false
// provider: Ghidra 12.1.2 (ghidra)
// analysis_profile: b075844f08879296d957518397cd0ddda73db81dce53d00d3f0e702766fc2af6
// limitations: The session serves operations only after Ghidra reports default auto-analysis complete; incomplete analysis does not expose partial results.; The imported Program and temporary project are ephemeral and deleted on close. Annotation operations edit session database metadata; original executable bytes are never written.; Cancelling an active Ghidra request terminates its ephemeral database and discards session annotations. The selected target remains open; the next provider query imports the original artifact again.; Default-space addresses use lowercase 0x-prefixed hexadecimal; other address spaces use <percent-encoded-space>:0x<hex>.; Ghidra Listing reports a terminal call at 0x100f9e33 to 0x100f9e4a FUN_100f9e4a (external=false, thunk=false, hasNoReturn=false); fallthrough is excluded by Ghidra's flow model. The reason for the terminal flow is not established by this observation.; The Ghidra Program references PDB Comm.pdb (GUID c3062acb-498d-45fa-a233-c8b7e401bb13, age (hex) 1, signature unknown, version RSDS); Ghidra reports load state unknown. Original names and types may be missing; an empty name search does not prove a procedure is absent. Use list_procedures and address-based analysis to inspect recovered functions. REA does not admit a caller-selected PDB companion.; This session uses Ghidra 12.1.2. The bridge is verified against 12.1.4; other 12.1.x builds are accepted and the observed version is reported.; Pseudocode is Ghidra decompiler output, not original source and not text-equivalent to Hopper output.; External functions and functions without an analyzable body return null; other decompiler failures remain explicit.
// pseudocode: provider-specific; not original source


/* WARNING: Function: __EH_prolog3_catch replaced with injection: EH_prolog3 */
/* WARNING: Function: __EH_epilog3 replaced with injection: EH_epilog3 */

undefined4 FUN_100f9d00(undefined4 param_1,undefined4 param_2)

{
  code *pcVar1;
  undefined4 uVar2;
  int iVar3;
  CStringT<wchar_t,StrTraitMFC<wchar_t,ATL::ChTraitsCRT<wchar_t>_>_> *this;
  CArchive local_b4 [72];
  CMemFile local_6c [52];
  uint local_38;
  undefined4 local_34;
  undefined4 local_30;
  CSettingsStore *local_2c;
  undefined4 local_28;
  undefined4 local_24 [2];
  uchar *local_1c;
  int *local_18;
  undefined4 local_8;
  undefined4 uStack_4;
  
  uStack_4 = 0xa4;
  local_8 = 0x100f9d0f;
  AFXGetRegPath((wchar_t *)&local_28,L"MDIClientArea");
  local_8 = 0;
  uVar2 = FUN_10013071();
  FUN_10003190(uVar2);
  local_8._0_1_ = 1;
  ATL::CStringT<wchar_t,StrTraitMFC<wchar_t,ATL::ChTraitsCRT<wchar_t>_>_>::Format
            (this,(wchar_t *)local_24,L"%TsMDIClientArea-%d",local_28,param_2);
  local_1c = (uchar *)0x0;
  local_34 = 0;
  local_30 = 0;
  local_8._0_1_ = 2;
  local_2c = CSettingsStoreSP::Create((CSettingsStoreSP *)&local_34,0,1);
  pcVar1 = *(code **)(*(int *)local_2c + 0x10);
  guard_check_icall(local_24[0]);
  iVar3 = (*pcVar1)();
  if (iVar3 == 0) {
    CSettingsStoreSP::~CSettingsStoreSP((CSettingsStoreSP *)&local_34);
    FUN_10003460();
    FUN_10003460();
  }
  else {
    iVar3 = *(int *)local_2c;
    guard_check_icall(L"MDITabsState",&local_1c,&local_38);
    iVar3 = (**(code **)(iVar3 + 0x44))();
    if (iVar3 != 0) {
      local_8._0_1_ = 3;
      CMemFile::CMemFile(local_6c,local_1c,local_38,0);
      local_8._0_1_ = 4;
      CArchive::CArchive(local_b4,(CFile *)local_6c,1,0x1000,(void *)0x0);
      local_8 = CONCAT31(local_8._1_3_,5);
      pcVar1 = *(code **)(*local_18 + 8);
      guard_check_icall(local_b4);
      (*pcVar1)();
      CArchive::~CArchive(local_b4);
      CMemFile::~CMemFile(local_6c);
      uVar2 = FUN_100f9e4a(local_24[0]);
      return uVar2;
    }
    CSettingsStoreSP::~CSettingsStoreSP((CSettingsStoreSP *)&local_34);
    FUN_10003460();
    FUN_10003460();
  }
  return 0;
}

