// rea decompile_all
// name: CPane::SaveState
// address: 0x1004cfc6
// body: available
// range: 0x1004cfc6-0x1004d230 inclusive
// non_contiguous: false
// provider: Ghidra 12.1.2 (ghidra)
// analysis_profile: b075844f08879296d957518397cd0ddda73db81dce53d00d3f0e702766fc2af6
// limitations: The session serves operations only after Ghidra reports default auto-analysis complete; incomplete analysis does not expose partial results.; The imported Program and temporary project are ephemeral and deleted on close. Annotation operations edit session database metadata; original executable bytes are never written.; Cancelling an active Ghidra request terminates its ephemeral database and discards session annotations. The selected target remains open; the next provider query imports the original artifact again.; Default-space addresses use lowercase 0x-prefixed hexadecimal; other address spaces use <percent-encoded-space>:0x<hex>.; The Ghidra Program references PDB Comm.pdb (GUID c3062acb-498d-45fa-a233-c8b7e401bb13, age (hex) 1, signature unknown, version RSDS); Ghidra reports load state unknown. Original names and types may be missing; an empty name search does not prove a procedure is absent. Use list_procedures and address-based analysis to inspect recovered functions. REA does not admit a caller-selected PDB companion.; This session uses Ghidra 12.1.2. The bridge is verified against 12.1.4; other 12.1.x builds are accepted and the observed version is reported.; Pseudocode is Ghidra decompiler output, not original source and not text-equivalent to Hopper output.; External functions and functions without an analyzable body return null; other decompiler failures remain explicit.
// pseudocode: provider-specific; not original source


/* WARNING: Function: __EH_prolog3 replaced with injection: EH_prolog3 */
/* WARNING: Function: __EH_epilog3 replaced with injection: EH_epilog3 */
/* Library Function - Single Match
    public: virtual int __thiscall CPane::SaveState(wchar_t const *,int,unsigned int)
   
   Library: Visual Studio 2015 Release */

int __thiscall CPane::SaveState(CPane *this,wchar_t *param_1,int param_2,uint param_3)

{
  code *pcVar1;
  undefined4 uVar2;
  int iVar3;
  CStringT<wchar_t,StrTraitMFC<wchar_t,ATL::ChTraitsCRT<wchar_t>_>_> *this_00;
  undefined4 local_2c;
  undefined4 local_28;
  int local_24;
  int *local_20;
  undefined4 local_1c;
  undefined4 local_18;
  CSettingsStore *local_14;
  undefined4 local_8;
  undefined4 uStack_4;
  
  uStack_4 = 0x1c;
  local_8 = 0x1004cfd2;
  AFXGetRegPath((wchar_t *)&local_1c,L"Panes");
  local_8 = 0;
  if (param_2 == -1) {
    param_2 = CWnd::GetDlgCtrlID((CWnd *)this);
  }
  uVar2 = FUN_10013071();
  FUN_10003190(uVar2);
  local_8 = CONCAT31(local_8._1_3_,1);
  if (param_3 == 0xffffffff) {
    ATL::CStringT<wchar_t,StrTraitMFC<wchar_t,ATL::ChTraitsCRT<wchar_t>_>_>::Format
              (this_00,(wchar_t *)&local_18,L"%TsPane-%d",local_1c,param_2);
  }
  else {
    ATL::CStringT<wchar_t,StrTraitMFC<wchar_t,ATL::ChTraitsCRT<wchar_t>_>_>::Format
              (this_00,(wchar_t *)&local_18,L"%TsPane-%d%x",local_1c,param_2,param_3);
  }
  local_2c = 0;
  local_28 = 0;
  local_8 = CONCAT31(local_8._1_3_,2);
  local_14 = CSettingsStoreSP::Create((CSettingsStoreSP *)&local_2c,0,0);
  pcVar1 = *(code **)(*(int *)local_14 + 0xc);
  guard_check_icall(local_18);
  iVar3 = (*pcVar1)();
  if (iVar3 != 0) {
    pcVar1 = *(code **)(*(int *)this + 0x170);
    guard_check_icall(local_18);
    local_24 = (*pcVar1)();
    if (local_24 == 0) {
      CalcRecentDockedRect(this);
      local_20 = *(int **)(this + 0xb8);
      if (local_20 != (int *)0x0) {
        pcVar1 = *(code **)(*local_20 + 0x194);
        guard_check_icall();
        uVar2 = (*pcVar1)();
        *(undefined4 *)(this + 0x1f8) = uVar2;
        iVar3 = CDockSite::FindRowIndex
                          (*(CDockSite **)(this + 0xb8),*(CDockingPanesRow **)(this + 0xbc));
        *(int *)(this + 0x200) = iVar3;
      }
    }
    else {
      pcVar1 = *(code **)(*(int *)this + 0x228);
      guard_check_icall(0);
      iVar3 = (*pcVar1)();
      if (iVar3 != 0) {
        GetWindowRect(*(HWND *)(iVar3 + 0x20),(LPRECT)(this + 0x1e8));
      }
    }
    pcVar1 = *(code **)(*(int *)local_14 + 0x38);
    guard_check_icall(&DAT_10187db0,*(undefined4 *)(this + 0x180));
    (*pcVar1)();
    pcVar1 = *(code **)(*(int *)local_14 + 0x2c);
    guard_check_icall(L"RectRecentFloat",this + 0x1e8);
    (*pcVar1)();
    pcVar1 = *(code **)(*(int *)local_14 + 0x2c);
    guard_check_icall(L"RectRecentDocked",this + 0x218);
    (*pcVar1)();
    pcVar1 = *(code **)(*(int *)local_14 + 0x34);
    guard_check_icall(L"RecentFrameAlignment",*(undefined4 *)(this + 0x1f8));
    (*pcVar1)();
    pcVar1 = *(code **)(*(int *)local_14 + 0x38);
    guard_check_icall(L"RecentRowIndex",*(undefined4 *)(this + 0x200));
    (*pcVar1)();
    pcVar1 = *(code **)(*(int *)local_14 + 0x38);
    guard_check_icall(L"IsFloating",local_24);
    (*pcVar1)();
    pcVar1 = *(code **)(*(int *)local_14 + 0x38);
    guard_check_icall(L"MRUWidth",*(undefined4 *)(this + 0x13c));
    (*pcVar1)();
    pcVar1 = *(code **)(*(int *)local_14 + 0x38);
    guard_check_icall(L"PinState",*(undefined4 *)(this + 0x17c));
    (*pcVar1)();
  }
  iVar3 = CBasePane::SaveState((CBasePane *)this,param_1,param_2,param_3);
  CSettingsStoreSP::~CSettingsStoreSP((CSettingsStoreSP *)&local_2c);
  FUN_10003460();
  FUN_10003460();
  return iVar3;
}

