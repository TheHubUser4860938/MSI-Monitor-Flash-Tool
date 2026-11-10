// rea decompile_all
// name: CPane::LoadState
// address: 0x10056e9f
// body: available
// range: 0x10056e9f-0x1005708f inclusive
// non_contiguous: false
// provider: Ghidra 12.1.2 (ghidra)
// analysis_profile: b075844f08879296d957518397cd0ddda73db81dce53d00d3f0e702766fc2af6
// limitations: The session serves operations only after Ghidra reports default auto-analysis complete; incomplete analysis does not expose partial results.; The imported Program and temporary project are ephemeral and deleted on close. Annotation operations edit session database metadata; original executable bytes are never written.; Cancelling an active Ghidra request terminates its ephemeral database and discards session annotations. The selected target remains open; the next provider query imports the original artifact again.; Default-space addresses use lowercase 0x-prefixed hexadecimal; other address spaces use <percent-encoded-space>:0x<hex>.; The Ghidra Program references PDB WinOperateCScaler.pdb (GUID a6737962-efea-4805-8ae6-1fc1ef126554, age (hex) 1, signature unknown, version RSDS); Ghidra reports load state unknown. Original names and types may be missing; an empty name search does not prove a procedure is absent. Use list_procedures and address-based analysis to inspect recovered functions. REA does not admit a caller-selected PDB companion.; This session uses Ghidra 12.1.2. The bridge is verified against 12.1.4; other 12.1.x builds are accepted and the observed version is reported.; Pseudocode is Ghidra decompiler output, not original source and not text-equivalent to Hopper output.; External functions and functions without an analyzable body return null; other decompiler failures remain explicit.
// pseudocode: provider-specific; not original source


/* WARNING: Function: __EH_prolog3 replaced with injection: EH_prolog3 */
/* WARNING: Function: __EH_epilog3 replaced with injection: EH_epilog3 */
/* Library Function - Single Match
    public: virtual int __thiscall CPane::LoadState(wchar_t const *,int,unsigned int)
   
   Library: Visual Studio 2015 Release */

int __thiscall CPane::LoadState(CPane *this,wchar_t *param_1,int param_2,uint param_3)

{
  code *pcVar1;
  CSettingsStore *pCVar2;
  CPane *pCVar3;
  undefined4 uVar4;
  int iVar5;
  CStringT<wchar_t,StrTraitMFC<wchar_t,ATL::ChTraitsCRT<wchar_t>_>_> *this_00;
  CPane *pCVar6;
  int iVar7;
  undefined4 local_28;
  undefined4 local_24;
  int local_20;
  int local_1c;
  CSettingsStore *local_18;
  CPane *local_14;
  undefined4 local_8;
  undefined4 uStack_4;
  
  uStack_4 = 0x18;
  local_8 = 0x10056eab;
  local_14 = this;
  AFXGetRegPath((wchar_t *)&local_20,L"Panes");
  iVar7 = 0;
  local_8 = 0;
  if (param_2 == -1) {
    param_2 = CWnd::GetDlgCtrlID((CWnd *)this);
  }
  uVar4 = FUN_1001e20a();
  FUN_1001d224(uVar4);
  local_8 = CONCAT31(local_8._1_3_,1);
  if (param_3 == 0xffffffff) {
    ATL::CStringT<wchar_t,StrTraitMFC<wchar_t,ATL::ChTraitsCRT<wchar_t>_>_>::Format
              (this_00,(wchar_t *)&local_1c,L"%TsPane-%d",local_20,param_2);
  }
  else {
    ATL::CStringT<wchar_t,StrTraitMFC<wchar_t,ATL::ChTraitsCRT<wchar_t>_>_>::Format
              (this_00,(wchar_t *)&local_1c,L"%TsPane-%d%x",local_20,param_2,param_3);
  }
  local_28 = 0;
  local_24 = 0;
  local_8 = CONCAT31(local_8._1_3_,2);
  local_18 = CSettingsStoreSP::Create((CSettingsStoreSP *)&local_28,0,1);
  pcVar1 = *(code **)(*(int *)local_18 + 0x10);
  guard_check_icall(local_1c);
  iVar5 = (*pcVar1)();
  pCVar2 = local_18;
  if (iVar5 != 0) {
    pcVar1 = *(code **)(*(int *)local_18 + 0x54);
    guard_check_icall(&DAT_101b2c58,local_14 + 0x180);
    (*pcVar1)();
    pcVar1 = *(code **)(*(int *)pCVar2 + 0x48);
    guard_check_icall(L"RectRecentFloat",local_14 + 0x1e8);
    (*pcVar1)();
    pCVar3 = local_14;
    pCVar6 = local_14 + 0x298;
    pcVar1 = *(code **)(*(int *)pCVar2 + 0x48);
    guard_check_icall(L"RectRecentDocked",pCVar6);
    (*pcVar1)();
    pCVar2 = local_18;
    *(undefined4 *)(local_14 + 0x218) = *(undefined4 *)pCVar6;
    *(undefined4 *)(local_14 + 0x21c) = *(undefined4 *)(pCVar3 + 0x29c);
    *(undefined4 *)(local_14 + 0x220) = *(undefined4 *)(pCVar3 + 0x2a0);
    *(undefined4 *)(local_14 + 0x224) = *(undefined4 *)(pCVar3 + 0x2a4);
    pcVar1 = *(code **)(*(int *)local_18 + 0x50);
    guard_check_icall(L"RecentFrameAlignment",local_14 + 0x1f8);
    (*pcVar1)();
    pcVar1 = *(code **)(*(int *)pCVar2 + 0x54);
    guard_check_icall(L"RecentRowIndex",local_14 + 0x200);
    (*pcVar1)();
    pcVar1 = *(code **)(*(int *)pCVar2 + 0x54);
    guard_check_icall(L"IsFloating",local_14 + 0x2a8);
    (*pcVar1)();
    pcVar1 = *(code **)(*(int *)pCVar2 + 0x54);
    guard_check_icall(L"MRUWidth",local_14 + 0x13c);
    (*pcVar1)();
    pcVar1 = *(code **)(*(int *)pCVar2 + 0x54);
    guard_check_icall(L"PinState",local_14 + 0x17c);
    (*pcVar1)();
    iVar7 = CBasePane::LoadState((CBasePane *)local_14,param_1,param_2,param_3);
  }
  CSettingsStoreSP::~CSettingsStoreSP((CSettingsStoreSP *)&local_28);
  ATL::CStringData::Release((CStringData *)(local_1c + -0x10));
  ATL::CStringData::Release((CStringData *)(local_20 + -0x10));
  return iVar7;
}

