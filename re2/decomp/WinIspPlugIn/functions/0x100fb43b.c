// rea decompile_all
// name: CDockablePaneAdapter::LoadState
// address: 0x100fb43b
// body: available
// range: 0x100fb43b-0x100fb571 inclusive
// non_contiguous: false
// provider: Ghidra 12.1.2 (ghidra)
// analysis_profile: b075844f08879296d957518397cd0ddda73db81dce53d00d3f0e702766fc2af6
// limitations: The session serves operations only after Ghidra reports default auto-analysis complete; incomplete analysis does not expose partial results.; The imported Program and temporary project are ephemeral and deleted on close. Annotation operations edit session database metadata; original executable bytes are never written.; Cancelling an active Ghidra request terminates its ephemeral database and discards session annotations. The selected target remains open; the next provider query imports the original artifact again.; Default-space addresses use lowercase 0x-prefixed hexadecimal; other address spaces use <percent-encoded-space>:0x<hex>.; The Ghidra Program references PDB WinIspPlugIn.pdb (GUID d9f398c7-6c98-49a8-af25-a0659d5ad2f3, age (hex) 1, signature unknown, version RSDS); Ghidra reports load state unknown. Original names and types may be missing; an empty name search does not prove a procedure is absent. Use list_procedures and address-based analysis to inspect recovered functions. REA does not admit a caller-selected PDB companion.; This session uses Ghidra 12.1.2. The bridge is verified against 12.1.4; other 12.1.x builds are accepted and the observed version is reported.; Pseudocode is Ghidra decompiler output, not original source and not text-equivalent to Hopper output.; External functions and functions without an analyzable body return null; other decompiler failures remain explicit.
// pseudocode: provider-specific; not original source


/* WARNING: Function: __EH_prolog3 replaced with injection: EH_prolog3 */
/* WARNING: Function: __EH_epilog3 replaced with injection: EH_epilog3 */
/* Library Function - Single Match
    public: virtual int __thiscall CDockablePaneAdapter::LoadState(wchar_t const *,int,unsigned int)
   
   Library: Visual Studio 2015 Release */

int __thiscall
CDockablePaneAdapter::LoadState
          (CDockablePaneAdapter *this,wchar_t *param_1,int param_2,uint param_3)

{
  code *pcVar1;
  undefined4 uVar2;
  int iVar3;
  CStringT<wchar_t,StrTraitMFC<wchar_t,ATL::ChTraitsCRT<wchar_t>_>_> *this_00;
  undefined4 local_2c;
  undefined4 local_28;
  CDockablePaneAdapter *local_24;
  undefined4 local_20;
  int local_1c;
  CSettingsStore *local_18;
  undefined4 local_14 [3];
  undefined4 local_8;
  undefined4 uStack_4;
  
  uStack_4 = 0x1c;
  local_8 = 0x100fb447;
  local_24 = this;
  AFXGetRegPath((wchar_t *)&local_20,L"Panes");
  local_8 = 0;
  if (param_2 == -1) {
    param_2 = CWnd::GetDlgCtrlID((CWnd *)this);
  }
  uVar2 = FUN_10049868();
  FUN_100476a0(uVar2);
  local_8 = CONCAT31(local_8._1_3_,1);
  if (param_3 == 0xffffffff) {
    ATL::CStringT<wchar_t,StrTraitMFC<wchar_t,ATL::ChTraitsCRT<wchar_t>_>_>::Format
              (this_00,(wchar_t *)local_14,L"%TsDockablePaneAdapter-%d",local_20,param_2);
  }
  else {
    ATL::CStringT<wchar_t,StrTraitMFC<wchar_t,ATL::ChTraitsCRT<wchar_t>_>_>::Format
              (this_00,(wchar_t *)local_14,L"%TsDockablePaneAdapter-%d%x",local_20,param_2,param_3);
  }
  local_2c = 0;
  local_28 = 0;
  local_8._0_1_ = 2;
  local_18 = CSettingsStoreSP::Create((CSettingsStoreSP *)&local_2c,0,0);
  pcVar1 = *(code **)(*(int *)local_18 + 0x10);
  guard_check_icall(local_14[0]);
  iVar3 = (*pcVar1)();
  if (iVar3 == 0) {
    iVar3 = 0;
  }
  else {
    uVar2 = FUN_10049868();
    FUN_100476a0(uVar2);
    local_8._0_1_ = 3;
    pcVar1 = *(code **)(*(int *)local_18 + 0x4c);
    guard_check_icall(L"BarName",&local_1c);
    (*pcVar1)();
    if (*(int *)(local_1c + -0xc) != 0) {
      FUN_1005979b(local_1c);
    }
    iVar3 = FUN_1012c078(param_1,param_2,param_3);
    FUN_100476d0();
  }
  CSettingsStoreSP::~CSettingsStoreSP((CSettingsStoreSP *)&local_2c);
  FUN_100476d0();
  FUN_100476d0();
  return iVar3;
}

