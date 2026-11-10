// rea decompile_all
// name: FUN_10078164
// address: 0x10078164
// body: available
// range: 0x10078164-0x10078428 inclusive
// non_contiguous: false
// provider: Ghidra 12.1.2 (ghidra)
// analysis_profile: b075844f08879296d957518397cd0ddda73db81dce53d00d3f0e702766fc2af6
// limitations: The session serves operations only after Ghidra reports default auto-analysis complete; incomplete analysis does not expose partial results.; The imported Program and temporary project are ephemeral and deleted on close. Annotation operations edit session database metadata; original executable bytes are never written.; Cancelling an active Ghidra request terminates its ephemeral database and discards session annotations. The selected target remains open; the next provider query imports the original artifact again.; Default-space addresses use lowercase 0x-prefixed hexadecimal; other address spaces use <percent-encoded-space>:0x<hex>.; Ghidra Listing reports a terminal call at 0x10078427 to 0x1007843a FUN_1007843a (external=false, thunk=false, hasNoReturn=false); fallthrough is excluded by Ghidra's flow model. The reason for the terminal flow is not established by this observation.; The Ghidra Program references PDB WinOperateCScaler.pdb (GUID a6737962-efea-4805-8ae6-1fc1ef126554, age (hex) 1, signature unknown, version RSDS); Ghidra reports load state unknown. Original names and types may be missing; an empty name search does not prove a procedure is absent. Use list_procedures and address-based analysis to inspect recovered functions. REA does not admit a caller-selected PDB companion.; This session uses Ghidra 12.1.2. The bridge is verified against 12.1.4; other 12.1.x builds are accepted and the observed version is reported.; Pseudocode is Ghidra decompiler output, not original source and not text-equivalent to Hopper output.; External functions and functions without an analyzable body return null; other decompiler failures remain explicit.
// pseudocode: provider-specific; not original source


/* WARNING: Function: __EH_prolog3_catch replaced with injection: EH_prolog3 */
/* WARNING: Function: __EH_epilog3 replaced with injection: EH_epilog3 */
/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

undefined4 FUN_10078164(undefined4 param_1,int param_2,int param_3)

{
  code *pcVar1;
  CObject *pCVar2;
  undefined4 uVar3;
  int iVar4;
  CWnd *pCVar5;
  CWnd *in_ECX;
  CStringT<wchar_t,StrTraitMFC<wchar_t,ATL::ChTraitsCRT<wchar_t>_>_> *this;
  int iVar6;
  CMemFile local_c4 [44];
  CArchive local_98 [80];
  uint local_48;
  undefined4 local_44;
  undefined4 local_40;
  int local_3c;
  int local_38;
  uchar *local_34;
  int *local_30;
  int local_2c;
  int local_28;
  int local_24;
  int local_20;
  CWnd *local_1c;
  CObject *local_18;
  undefined4 local_8;
  undefined4 uStack_4;
  
  uStack_4 = 0xb4;
  local_8 = 0x10078173;
  local_1c = in_ECX;
  LoadState(param_1,param_2,param_3);
  AFXGetRegPath((wchar_t *)&local_2c,L"MFCOutlookBars");
  local_8 = 0;
  if (param_2 == -1) {
    param_2 = CWnd::GetDlgCtrlID(in_ECX);
  }
  uVar3 = FUN_1001e20a();
  FUN_1001d224(uVar3);
  local_8 = CONCAT31(local_8._1_3_,1);
  if (param_3 == -1) {
    ATL::CStringT<wchar_t,StrTraitMFC<wchar_t,ATL::ChTraitsCRT<wchar_t>_>_>::Format
              (this,(wchar_t *)&local_20,L"%TsMFCOutlookBar-%d",local_2c,param_2);
  }
  else {
    ATL::CStringT<wchar_t,StrTraitMFC<wchar_t,ATL::ChTraitsCRT<wchar_t>_>_>::Format
              (this,(wchar_t *)&local_20,L"%TsMFCOutlookBar-%d%x",local_2c,param_2,param_3);
  }
  local_34 = (uchar *)0x0;
  local_44 = 0;
  local_40 = 0;
  local_8._0_1_ = 2;
  local_18 = (CObject *)CSettingsStoreSP::Create((CSettingsStoreSP *)&local_44,0,1);
  pcVar1 = *(code **)(*(int *)local_18 + 0x10);
  iVar6 = local_20;
  guard_check_icall(local_20);
  iVar4 = (*pcVar1)();
  if (iVar4 == 0) {
    CSettingsStoreSP::~CSettingsStoreSP((CSettingsStoreSP *)&local_44);
    ATL::CStringData::Release((CStringData *)(local_20 + -0x10));
    ATL::CStringData::Release((CStringData *)(local_2c + -0x10));
  }
  else {
    iVar4 = *(int *)local_18;
    guard_check_icall(L"MFCOutlookCustomPages",&local_34,&local_48);
    iVar4 = (**(code **)(iVar4 + 0x44))();
    if (iVar4 != 0) {
      pcVar1 = *(code **)(*(int *)local_1c + 0x3a0);
      guard_check_icall(iVar6);
      local_30 = (int *)(*pcVar1)();
      local_8._0_1_ = 3;
      CMemFile::CMemFile(local_c4,local_34,local_48,0);
      local_8._0_1_ = 4;
      CArchive::CArchive(local_98,(CFile *)local_c4,1,0x1000,(void *)0x0);
      local_8 = CONCAT31(local_8._1_3_,5);
      local_38 = 0;
      FUN_10026405(&local_38);
      local_28 = 0;
      while( true ) {
        if (local_38 <= local_28) break;
        local_24 = 0;
        uVar3 = FUN_1001e20a();
        FUN_1001d224(uVar3);
        local_8._0_1_ = 6;
        FUN_10026405(&local_24);
        CArchive::operator>><wchar_t,StrTraitMFC<wchar_t,ATL::ChTraitsCRT<wchar_t>_>_>
                  (local_98,(CStringT<wchar_t,StrTraitMFC<wchar_t,ATL::ChTraitsCRT<wchar_t>_>_> *)
                            &local_3c);
        local_18 = (CObject *)FUN_1001cfa0(0x1de0);
        local_8._0_1_ = 7;
        if (local_18 == (CObject *)0x0) {
          local_18 = (CObject *)0x0;
        }
        else {
          local_18 = (CObject *)
                     CMFCOutlookBarPane::CMFCOutlookBarPane((CMFCOutlookBarPane *)local_18);
        }
        pcVar1 = *(code **)(*(int *)local_18 + 0x438);
        local_8._0_1_ = 6;
        guard_check_icall(local_1c,0x50402808,local_24,0);
        (*pcVar1)();
        pCVar5 = CWnd::GetOwner(local_1c);
        pCVar2 = local_18;
        if (pCVar5 == (CWnd *)0x0) {
          uVar3 = 0;
        }
        else {
          uVar3 = *(undefined4 *)(pCVar5 + 0x20);
        }
        *(undefined4 *)(local_18 + 0x5c) = uVar3;
        pcVar1 = *(code **)(*(int *)local_18 + 0x22c);
        guard_check_icall(param_1,local_24,local_24);
        (*pcVar1)();
        CObList::AddTail((CObList *)(local_1c + 0x388),pCVar2);
        iVar6 = local_3c;
        pcVar1 = *(code **)(*local_30 + 0x18c);
        guard_check_icall(local_18,local_3c,0xffffffff,1);
        (*pcVar1)();
        local_8 = CONCAT31(local_8._1_3_,5);
        (&DAT_1020a748)[local_24 - _DAT_1020166c] = 1;
        ATL::CStringData::Release((CStringData *)(iVar6 + -0x10));
        local_28 = local_28 + 1;
      }
      local_28 = 0;
      FUN_10026405(&local_28);
      local_30[0x95] = local_28;
      CArchive::~CArchive(local_98);
      CMemFile::~CMemFile(local_c4);
      uVar3 = FUN_1007843a();
      return uVar3;
    }
    CSettingsStoreSP::~CSettingsStoreSP((CSettingsStoreSP *)&local_44);
    ATL::CStringData::Release((CStringData *)(local_20 + -0x10));
    ATL::CStringData::Release((CStringData *)(local_2c + -0x10));
  }
  return 0;
}

