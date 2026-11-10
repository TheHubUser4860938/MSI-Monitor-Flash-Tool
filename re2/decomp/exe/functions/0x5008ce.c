// rea decompile_all
// name: FUN_005008ce
// address: 0x5008ce
// body: available
// range: 0x5008ce-0x500b92 inclusive
// non_contiguous: false
// provider: Ghidra 12.1.2 (ghidra)
// analysis_profile: ac6d50be2cdf54f7005df47d1ed7e7ef55dee595681eb1b7c2e0b00d70cd697d
// limitations: The session serves operations only after Ghidra reports default auto-analysis complete; incomplete analysis does not expose partial results.; The imported Program and temporary project are ephemeral and deleted on close. Annotation operations edit session database metadata; original executable bytes are never written.; Cancelling an active Ghidra request terminates its ephemeral database and discards session annotations. The selected target remains open; the next provider query imports the original artifact again.; Default-space addresses use lowercase 0x-prefixed hexadecimal; other address spaces use <percent-encoded-space>:0x<hex>.; Ghidra Listing reports a terminal call at 0x500b91 to 0x500ba4 FUN_00500ba4 (external=false, thunk=false, hasNoReturn=false); fallthrough is excluded by Ghidra's flow model. The reason for the terminal flow is not established by this observation.; The Ghidra Program references PDB ISPToolForMsi.pdb (GUID b8f2ac8f-1d6f-438d-800f-ed4a14426ac6, age (hex) 1, signature unknown, version RSDS); Ghidra reports load state unknown. Original names and types may be missing; an empty name search does not prove a procedure is absent. Use list_procedures and address-based analysis to inspect recovered functions. REA does not admit a caller-selected PDB companion.; This session uses Ghidra 12.1.2. The bridge is verified against 12.1.4; other 12.1.x builds are accepted and the observed version is reported.; Pseudocode is Ghidra decompiler output, not original source and not text-equivalent to Hopper output.; External functions and functions without an analyzable body return null; other decompiler failures remain explicit.
// pseudocode: provider-specific; not original source


/* WARNING: Function: __EH_prolog3_catch replaced with injection: EH_prolog3 */
/* WARNING: Function: __EH_epilog3 replaced with injection: EH_epilog3 */
/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

undefined4 FUN_005008ce(undefined4 param_1,int param_2,int param_3)

{
  code *pcVar1;
  CObject *pCVar2;
  undefined4 uVar3;
  int iVar4;
  CWnd *pCVar5;
  CWnd *in_ECX;
  CStringT<wchar_t,StrTraitMFC<wchar_t,ATL::ChTraitsCRT<wchar_t>_>_> *this;
  CMemFile local_c4 [44];
  CArchive local_98 [80];
  uint local_48;
  undefined4 local_44;
  undefined4 local_40;
  undefined4 local_3c;
  int local_38;
  uchar *local_34;
  int *local_30;
  undefined4 local_2c;
  int local_28;
  int local_24;
  undefined4 local_20;
  CWnd *local_1c;
  CObject *local_18;
  undefined4 local_8;
  undefined4 uStack_4;
  
  uStack_4 = 0xb4;
  local_8 = 0x5008dd;
  local_1c = in_ECX;
  LoadState(param_1,param_2,param_3);
  AFXGetRegPath((wchar_t *)&local_2c,L"MFCOutlookBars");
  local_8 = 0;
  if (param_2 == -1) {
    param_2 = CWnd::GetDlgCtrlID(in_ECX);
  }
  uVar3 = FUN_004295fe();
  FUN_0040eb30(uVar3);
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
  guard_check_icall(local_20);
  iVar4 = (*pcVar1)();
  if (iVar4 == 0) {
    CSettingsStoreSP::~CSettingsStoreSP((CSettingsStoreSP *)&local_44);
    FUN_0040efa0();
    FUN_0040efa0();
  }
  else {
    iVar4 = *(int *)local_18;
    guard_check_icall(L"MFCOutlookCustomPages",&local_34,&local_48);
    iVar4 = (**(code **)(iVar4 + 0x44))();
    if (iVar4 != 0) {
      pcVar1 = *(code **)(*(int *)local_1c + 0x3a0);
      guard_check_icall(local_20);
      local_30 = (int *)(*pcVar1)();
      local_8._0_1_ = 3;
      CMemFile::CMemFile(local_c4,local_34,local_48,0);
      local_8._0_1_ = 4;
      CArchive::CArchive(local_98,(CFile *)local_c4,1,0x1000,(void *)0x0);
      local_8 = CONCAT31(local_8._1_3_,5);
      local_38 = 0;
      FUN_00450090(&local_38);
      local_28 = 0;
      while( true ) {
        if (local_38 <= local_28) break;
        local_24 = 0;
        uVar3 = FUN_004295fe();
        FUN_0040eb30(uVar3);
        local_8._0_1_ = 6;
        FUN_00450090(&local_24);
        CArchive::operator>><wchar_t,StrTraitMFC<wchar_t,ATL::ChTraitsCRT<wchar_t>_>_>
                  (local_98,(CStringT<wchar_t,StrTraitMFC<wchar_t,ATL::ChTraitsCRT<wchar_t>_>_> *)
                            &local_3c);
        local_18 = (CObject *)FUN_00416408(0x1de0);
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
        pcVar1 = *(code **)(*local_30 + 0x18c);
        guard_check_icall(local_18,local_3c,0xffffffff,1);
        (*pcVar1)();
        local_8 = CONCAT31(local_8._1_3_,5);
        (&DAT_00617418)[local_24 - _DAT_0060c9e4] = 1;
        FUN_0040efa0();
        local_28 = local_28 + 1;
      }
      local_28 = 0;
      FUN_00450090(&local_28);
      local_30[0x95] = local_28;
      CArchive::~CArchive(local_98);
      CMemFile::~CMemFile(local_c4);
      uVar3 = FUN_00500ba4();
      return uVar3;
    }
    CSettingsStoreSP::~CSettingsStoreSP((CSettingsStoreSP *)&local_44);
    FUN_0040efa0();
    FUN_0040efa0();
  }
  return 0;
}

