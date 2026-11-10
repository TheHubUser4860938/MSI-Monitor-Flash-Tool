// rea decompile_all
// name: FUN_1006b564
// address: 0x1006b564
// body: available
// range: 0x1006b564-0x1006b6d2 inclusive
// non_contiguous: false
// provider: Ghidra 12.1.2 (ghidra)
// analysis_profile: b075844f08879296d957518397cd0ddda73db81dce53d00d3f0e702766fc2af6
// limitations: The session serves operations only after Ghidra reports default auto-analysis complete; incomplete analysis does not expose partial results.; The imported Program and temporary project are ephemeral and deleted on close. Annotation operations edit session database metadata; original executable bytes are never written.; Cancelling an active Ghidra request terminates its ephemeral database and discards session annotations. The selected target remains open; the next provider query imports the original artifact again.; Default-space addresses use lowercase 0x-prefixed hexadecimal; other address spaces use <percent-encoded-space>:0x<hex>.; Ghidra Listing reports a terminal call at 0x1006b6d1 to 0x1006b6ee FUN_1006b6ee (external=false, thunk=false, hasNoReturn=false); fallthrough is excluded by Ghidra's flow model. The reason for the terminal flow is not established by this observation.; The Ghidra Program references PDB WinOperateCScaler.pdb (GUID a6737962-efea-4805-8ae6-1fc1ef126554, age (hex) 1, signature unknown, version RSDS); Ghidra reports load state unknown. Original names and types may be missing; an empty name search does not prove a procedure is absent. Use list_procedures and address-based analysis to inspect recovered functions. REA does not admit a caller-selected PDB companion.; This session uses Ghidra 12.1.2. The bridge is verified against 12.1.4; other 12.1.x builds are accepted and the observed version is reported.; Pseudocode is Ghidra decompiler output, not original source and not text-equivalent to Hopper output.; External functions and functions without an analyzable body return null; other decompiler failures remain explicit.
// pseudocode: provider-specific; not original source


/* WARNING: Function: __EH_prolog3_catch replaced with injection: EH_prolog3 */
/* WARNING: Function: __EH_epilog3 replaced with injection: EH_epilog3 */

undefined4 FUN_1006b564(undefined4 param_1,int param_2,int param_3)

{
  code *pcVar1;
  undefined4 uVar2;
  int iVar3;
  CWnd *in_ECX;
  CStringT<wchar_t,StrTraitMFC<wchar_t,ATL::ChTraitsCRT<wchar_t>_>_> *this;
  int iVar4;
  CArchive local_b8 [72];
  CMemFile local_70 [52];
  uint local_3c;
  undefined4 local_38;
  undefined4 local_34;
  CSettingsStore *local_2c;
  int local_28;
  uchar *local_24 [2];
  int local_1c [5];
  undefined4 local_8;
  undefined4 uStack_4;
  
  uStack_4 = 0xa8;
  local_8 = 0x1006b573;
  AFXGetRegPath((wchar_t *)&local_28,L"MFCToolBars");
  local_8 = 0;
  if (param_2 == -1) {
    param_2 = CWnd::GetDlgCtrlID(in_ECX);
  }
  uVar2 = FUN_1001e20a();
  FUN_1001d224(uVar2);
  local_8 = CONCAT31(local_8._1_3_,1);
  if (param_3 == -1) {
    ATL::CStringT<wchar_t,StrTraitMFC<wchar_t,ATL::ChTraitsCRT<wchar_t>_>_>::Format
              (this,(wchar_t *)local_1c,L"%TsMFCToolBar-%d",local_28,param_2);
  }
  else {
    ATL::CStringT<wchar_t,StrTraitMFC<wchar_t,ATL::ChTraitsCRT<wchar_t>_>_>::Format
              (this,(wchar_t *)local_1c,L"%TsMFCToolBar-%d%x",local_28,param_2,param_3);
  }
  local_24[0] = (uchar *)0x0;
  local_38 = 0;
  local_34 = 0;
  local_8._0_1_ = 2;
  local_2c = CSettingsStoreSP::Create((CSettingsStoreSP *)&local_38,0,1);
  pcVar1 = *(code **)(*(int *)local_2c + 0x10);
  iVar4 = local_1c[0];
  guard_check_icall(local_1c[0]);
  iVar3 = (*pcVar1)();
  if (iVar3 == 0) {
    CSettingsStoreSP::~CSettingsStoreSP((CSettingsStoreSP *)&local_38);
    ATL::CStringData::Release((CStringData *)(local_1c[0] + -0x10));
    ATL::CStringData::Release((CStringData *)(local_28 + -0x10));
  }
  else {
    iVar3 = *(int *)local_2c;
    guard_check_icall(L"Buttons",local_24,&local_3c);
    iVar3 = (**(code **)(iVar3 + 0x44))();
    if (iVar3 != 0) {
      local_8._0_1_ = 3;
      CMemFile::CMemFile(local_70,local_24[0],local_3c,0);
      local_8._0_1_ = 4;
      CArchive::CArchive(local_b8,(CFile *)local_70,1,0x1000,(void *)0x0);
      local_8 = CONCAT31(local_8._1_3_,5);
      pcVar1 = *(code **)(*(int *)in_ECX + 8);
      guard_check_icall(local_b8);
      (*pcVar1)();
      local_1c[1] = 1;
      CArchive::~CArchive(local_b8);
      CMemFile::~CMemFile(local_70);
      uVar2 = FUN_1006b6ee(iVar4);
      return uVar2;
    }
    CSettingsStoreSP::~CSettingsStoreSP((CSettingsStoreSP *)&local_38);
    ATL::CStringData::Release((CStringData *)(local_1c[0] + -0x10));
    ATL::CStringData::Release((CStringData *)(local_28 + -0x10));
  }
  return 0;
}

