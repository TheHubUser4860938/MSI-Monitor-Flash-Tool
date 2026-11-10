// rea decompile_all
// name: CBasePane::LoadState
// address: 0x1007e92d
// body: available
// range: 0x1007e92d-0x1007ea2f inclusive
// non_contiguous: false
// provider: Ghidra 12.1.2 (ghidra)
// analysis_profile: b075844f08879296d957518397cd0ddda73db81dce53d00d3f0e702766fc2af6
// limitations: The session serves operations only after Ghidra reports default auto-analysis complete; incomplete analysis does not expose partial results.; The imported Program and temporary project are ephemeral and deleted on close. Annotation operations edit session database metadata; original executable bytes are never written.; Cancelling an active Ghidra request terminates its ephemeral database and discards session annotations. The selected target remains open; the next provider query imports the original artifact again.; Default-space addresses use lowercase 0x-prefixed hexadecimal; other address spaces use <percent-encoded-space>:0x<hex>.; The Ghidra Program references PDB Comm_Aux.pdb (GUID ba7920cc-daa3-4461-a102-1f8f66c67a2a, age (hex) 1, signature unknown, version RSDS); Ghidra reports load state unknown. Original names and types may be missing; an empty name search does not prove a procedure is absent. Use list_procedures and address-based analysis to inspect recovered functions. REA does not admit a caller-selected PDB companion.; This session uses Ghidra 12.1.2. The bridge is verified against 12.1.4; other 12.1.x builds are accepted and the observed version is reported.; Pseudocode is Ghidra decompiler output, not original source and not text-equivalent to Hopper output.; External functions and functions without an analyzable body return null; other decompiler failures remain explicit.
// pseudocode: provider-specific; not original source


/* WARNING: Function: __EH_prolog3 replaced with injection: EH_prolog3 */
/* WARNING: Function: __EH_epilog3 replaced with injection: EH_epilog3 */
/* Library Function - Single Match
    public: virtual int __thiscall CBasePane::LoadState(wchar_t const *,int,unsigned int)
   
   Library: Visual Studio 2015 Release */

int __thiscall CBasePane::LoadState(CBasePane *this,wchar_t *param_1,int param_2,uint param_3)

{
  code *pcVar1;
  CBasePane *pCVar2;
  undefined4 uVar3;
  int iVar4;
  CStringT<wchar_t,StrTraitMFC<wchar_t,ATL::ChTraitsCRT<wchar_t>_>_> *this_00;
  undefined4 local_28;
  undefined4 local_24;
  CBasePane *local_20;
  undefined4 local_1c;
  CSettingsStore *local_18;
  undefined4 local_14 [3];
  undefined4 local_8;
  undefined4 uStack_4;
  
  uStack_4 = 0x18;
  local_8 = 0x1007e939;
  local_20 = this;
  AFXGetRegPath((wchar_t *)&local_1c,L"BasePanes");
  local_8 = 0;
  if (param_2 == -1) {
    param_2 = CWnd::GetDlgCtrlID((CWnd *)this);
  }
  uVar3 = FUN_10048e90();
  FUN_10034c30(uVar3);
  local_8 = CONCAT31(local_8._1_3_,1);
  if (param_3 == 0xffffffff) {
    ATL::CStringT<wchar_t,StrTraitMFC<wchar_t,ATL::ChTraitsCRT<wchar_t>_>_>::Format
              (this_00,(wchar_t *)local_14,L"%TsBasePane-%d",local_1c,param_2);
  }
  else {
    ATL::CStringT<wchar_t,StrTraitMFC<wchar_t,ATL::ChTraitsCRT<wchar_t>_>_>::Format
              (this_00,(wchar_t *)local_14,L"%TsBasePane-%d%x",local_1c,param_2,param_3);
  }
  local_28 = 0;
  local_24 = 0;
  local_8 = CONCAT31(local_8._1_3_,2);
  local_18 = CSettingsStoreSP::Create((CSettingsStoreSP *)&local_28,0,1);
  pcVar1 = *(code **)(*(int *)local_18 + 0x10);
  guard_check_icall(local_14[0]);
  iVar4 = (*pcVar1)();
  pCVar2 = local_20;
  if (iVar4 != 0) {
    pcVar1 = *(code **)(*(int *)local_18 + 0x54);
    guard_check_icall(L"IsVisible",local_20 + 0x84);
    (*pcVar1)();
    *(undefined4 *)(pCVar2 + 0x88) = 1;
  }
  CSettingsStoreSP::~CSettingsStoreSP((CSettingsStoreSP *)&local_28);
  FUN_10034f00();
  FUN_10034f00();
  return (uint)(iVar4 != 0);
}

