// rea decompile_all
// name: FUN_1009a50f
// address: 0x1009a50f
// body: available
// range: 0x1009a50f-0x1009a722 inclusive
// non_contiguous: false
// provider: Ghidra 12.1.2 (ghidra)
// analysis_profile: b075844f08879296d957518397cd0ddda73db81dce53d00d3f0e702766fc2af6
// limitations: The session serves operations only after Ghidra reports default auto-analysis complete; incomplete analysis does not expose partial results.; The imported Program and temporary project are ephemeral and deleted on close. Annotation operations edit session database metadata; original executable bytes are never written.; Cancelling an active Ghidra request terminates its ephemeral database and discards session annotations. The selected target remains open; the next provider query imports the original artifact again.; Default-space addresses use lowercase 0x-prefixed hexadecimal; other address spaces use <percent-encoded-space>:0x<hex>.; Ghidra Listing reports a terminal call at 0x1009a721 to 0x1009a737 FUN_1009a737 (external=false, thunk=false, hasNoReturn=false); fallthrough is excluded by Ghidra's flow model. The reason for the terminal flow is not established by this observation.; The Ghidra Program references PDB Comm_Aux.pdb (GUID ba7920cc-daa3-4461-a102-1f8f66c67a2a, age (hex) 1, signature unknown, version RSDS); Ghidra reports load state unknown. Original names and types may be missing; an empty name search does not prove a procedure is absent. Use list_procedures and address-based analysis to inspect recovered functions. REA does not admit a caller-selected PDB companion.; This session uses Ghidra 12.1.2. The bridge is verified against 12.1.4; other 12.1.x builds are accepted and the observed version is reported.; Pseudocode is Ghidra decompiler output, not original source and not text-equivalent to Hopper output.; External functions and functions without an analyzable body return null; other decompiler failures remain explicit.
// pseudocode: provider-specific; not original source


/* WARNING: Function: __EH_prolog3_catch replaced with injection: EH_prolog3 */

void FUN_1009a50f(undefined4 param_1,int param_2,int param_3)

{
  code *pcVar1;
  undefined4 uVar2;
  int iVar3;
  BOOL BVar4;
  AFX_MODULE_STATE *pAVar5;
  CObject *pCVar6;
  CWnd *in_ECX;
  CStringT<wchar_t,StrTraitMFC<wchar_t,ATL::ChTraitsCRT<wchar_t>_>_> *this;
  undefined8 uVar7;
  CArchive local_b0 [72];
  CMemFile local_68 [52];
  undefined4 local_34;
  undefined4 local_30;
  undefined4 local_2c;
  uchar *local_28;
  undefined4 local_24;
  undefined4 local_20;
  undefined4 local_1c;
  CSettingsStore *local_18;
  undefined4 local_8;
  undefined4 uStack_4;
  
  uStack_4 = 0xa0;
  local_8 = 0x1009a51e;
  AFXGetRegPath((wchar_t *)&local_24,L"MFCToolBars");
  local_8 = 0;
  if (param_2 == -1) {
    param_2 = CWnd::GetDlgCtrlID(in_ECX);
  }
  uVar2 = FUN_10048e90();
  FUN_10034c30(uVar2);
  local_8 = CONCAT31(local_8._1_3_,1);
  if (param_3 == -1) {
    ATL::CStringT<wchar_t,StrTraitMFC<wchar_t,ATL::ChTraitsCRT<wchar_t>_>_>::Format
              (this,(wchar_t *)&local_1c,L"%TsMFCToolBar-%d",local_24,param_2);
  }
  else {
    ATL::CStringT<wchar_t,StrTraitMFC<wchar_t,ATL::ChTraitsCRT<wchar_t>_>_>::Format
              (this,(wchar_t *)&local_1c,L"%TsMFCToolBar-%d%x",local_24,param_2,param_3);
  }
  local_8._0_1_ = 2;
  CMemFile::CMemFile(local_68,0x400);
  local_8._0_1_ = 3;
  CArchive::CArchive(local_b0,(CFile *)local_68,0,0x1000,(void *)0x0);
  local_8._0_1_ = 4;
  pcVar1 = *(code **)(*(int *)in_ECX + 8);
  guard_check_icall(local_b0);
  (*pcVar1)();
  CArchive::Flush(local_b0);
  local_8._0_1_ = 3;
  CArchive::~CArchive(local_b0);
  uVar7 = FUN_1011b609();
  local_2c = (undefined4)((ulonglong)uVar7 >> 0x20);
  local_34 = (undefined4)uVar7;
  local_28 = CMemFile::Detach(local_68);
  if (local_28 != (uchar *)0x0) {
    local_30 = 0;
    local_2c = 0;
    local_8._0_1_ = 5;
    local_18 = CSettingsStoreSP::Create((CSettingsStoreSP *)&local_30,0,0);
    pcVar1 = *(code **)(*(int *)local_18 + 0xc);
    guard_check_icall(local_1c);
    iVar3 = (*pcVar1)();
    if (iVar3 != 0) {
      BVar4 = IsWindow(*(HWND *)(in_ECX + 0x20));
      if (BVar4 != 0) {
        uVar2 = FUN_10048e90();
        FUN_10034c30(uVar2);
        local_8._0_1_ = 6;
        CWnd::GetWindowTextW
                  (in_ECX,(CStringT<wchar_t,StrTraitMFC<wchar_t,ATL::ChTraitsCRT<wchar_t>_>_> *)
                          &local_20);
        pcVar1 = *(code **)(*(int *)local_18 + 0x30);
        guard_check_icall(L"Name",local_20);
        (*pcVar1)();
        local_8._0_1_ = 5;
        FUN_10034f00();
      }
      pcVar1 = *(code **)(*(int *)local_18 + 0x28);
      guard_check_icall(L"Buttons",local_28,local_34);
      iVar3 = (*pcVar1)();
      pAVar5 = AfxGetModuleState();
      pCVar6 = AfxDynamicDownCast((CRuntimeClass *)&PTR_s_CWinAppEx_101c1080,
                                  *(CObject **)(pAVar5 + 4));
      if (((iVar3 != 0) && (pCVar6 != (CObject *)0x0)) && (*(int *)(pCVar6 + 0x10c) != 0)) {
        pcVar1 = *(code **)(*(int *)in_ECX + 0x428);
        guard_check_icall(local_18);
        (*pcVar1)();
      }
      FUN_1009a4dc(local_18);
    }
    FID_conflict__free(local_28);
    CSettingsStoreSP::~CSettingsStoreSP((CSettingsStoreSP *)&local_30);
  }
  CMemFile::~CMemFile(local_68);
  FUN_1009a737();
  return;
}

