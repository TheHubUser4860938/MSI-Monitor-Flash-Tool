// rea decompile_all
// name: CDockingManager::LoadState
// address: 0x100ad353
// body: available
// range: 0x100ad353-0x100ad60b inclusive
// non_contiguous: false
// provider: Ghidra 12.1.2 (ghidra)
// analysis_profile: b075844f08879296d957518397cd0ddda73db81dce53d00d3f0e702766fc2af6
// limitations: The session serves operations only after Ghidra reports default auto-analysis complete; incomplete analysis does not expose partial results.; The imported Program and temporary project are ephemeral and deleted on close. Annotation operations edit session database metadata; original executable bytes are never written.; Cancelling an active Ghidra request terminates its ephemeral database and discards session annotations. The selected target remains open; the next provider query imports the original artifact again.; Default-space addresses use lowercase 0x-prefixed hexadecimal; other address spaces use <percent-encoded-space>:0x<hex>.; The Ghidra Program references PDB Comm.pdb (GUID c3062acb-498d-45fa-a233-c8b7e401bb13, age (hex) 1, signature unknown, version RSDS); Ghidra reports load state unknown. Original names and types may be missing; an empty name search does not prove a procedure is absent. Use list_procedures and address-based analysis to inspect recovered functions. REA does not admit a caller-selected PDB companion.; This session uses Ghidra 12.1.2. The bridge is verified against 12.1.4; other 12.1.x builds are accepted and the observed version is reported.; Pseudocode is Ghidra decompiler output, not original source and not text-equivalent to Hopper output.; External functions and functions without an analyzable body return null; other decompiler failures remain explicit.
// pseudocode: provider-specific; not original source


/* WARNING: Function: __EH_prolog3_catch replaced with injection: EH_prolog3 */
/* WARNING: Function: __EH_epilog3 replaced with injection: EH_epilog3 */
/* Library Function - Single Match
    public: virtual int __thiscall CDockingManager::LoadState(wchar_t const *,unsigned int)
   
   Library: Visual Studio 2015 Release */

int __thiscall CDockingManager::LoadState(CDockingManager *this,wchar_t *param_1,uint param_2)

{
  code *pcVar1;
  CDockingManager *pCVar2;
  undefined4 uVar3;
  int *piVar4;
  int iVar5;
  undefined4 *puVar6;
  CObject *pCVar7;
  CBasePane *pCVar8;
  int iVar9;
  CStringT<wchar_t,StrTraitMFC<wchar_t,ATL::ChTraitsCRT<wchar_t>_>_> *this_00;
  CArchive local_b8 [72];
  CMemFile local_70 [52];
  uint local_3c;
  undefined4 local_38;
  undefined4 local_34;
  int local_30;
  undefined4 local_2c;
  undefined4 local_28;
  uchar *local_24;
  CDockingManager *local_20;
  CBasePane *local_1c;
  CSettingsStore *local_18 [4];
  undefined4 local_8;
  undefined4 uStack_4;
  
  uStack_4 = 0xa8;
  local_8 = 0x100ad362;
  local_20 = this;
  AFXGetRegPath((wchar_t *)&local_2c,L"DockingManagers");
  local_8 = 0;
  local_30 = 0;
  uVar3 = FUN_10013071();
  FUN_10003190(uVar3);
  local_8 = CONCAT31(local_8._1_3_,1);
  ATL::CStringT<wchar_t,StrTraitMFC<wchar_t,ATL::ChTraitsCRT<wchar_t>_>_>::Format
            (this_00,(wchar_t *)&local_28,L"%TsDockingManager-%d",local_2c,param_2);
  local_18[0] = *(CSettingsStore **)(this + 0x24);
  while (local_18[0] != (CSettingsStore *)0x0) {
    piVar4 = (int *)FUN_1002466e(local_18);
    pCVar8 = (CBasePane *)*piVar4;
    local_1c = pCVar8;
    iVar5 = FUN_10019d4f(&PTR_s_CDockablePane_101d3b9c);
    if ((iVar5 != 0) ||
       ((iVar5 = FUN_10019d4f(&PTR_s_CPane_101878f4), this = local_20, iVar5 != 0 &&
        (iVar5 = FUN_10019d4f(&PTR_s_CMFCToolBar_101d3640), this = local_20, iVar5 == 0)))) {
      pcVar1 = *(code **)(*(int *)pCVar8 + 0x22c);
      guard_check_icall(param_1,0xffffffff,0xffffffff);
      (*pcVar1)();
      this = local_20;
    }
  }
  local_18[0] = *(CSettingsStore **)(this + 0x40);
  if (local_18[0] != (CSettingsStore *)0x0) {
    local_1c = (CBasePane *)(this + 0x3c);
    do {
      puVar6 = (undefined4 *)FUN_1002466e(local_18);
      pCVar7 = (CObject *)*puVar6;
      iVar5 = FUN_10019d4f(&PTR_s_CPaneDivider_101a1290);
      if (iVar5 != 0) {
        pCVar7 = AfxDynamicDownCast((CRuntimeClass *)&PTR_s_CPaneDivider_101a1290,pCVar7);
        pCVar8 = CPaneDivider::GetFirstPane((CPaneDivider *)pCVar7);
        local_1c = pCVar8;
        if ((pCVar8 != (CBasePane *)0x0) &&
           (iVar5 = FUN_10019d4f(&PTR_s_CDockablePane_101d3b9c), iVar5 != 0)) {
          pcVar1 = *(code **)(*(int *)pCVar8 + 0x22c);
          guard_check_icall(param_1,0xffffffff,0xffffffff);
          (*pcVar1)();
        }
      }
      this = local_20;
    } while (local_18[0] != (CSettingsStore *)0x0);
  }
  local_18[0] = *(CSettingsStore **)(this + 0xcc);
  while (local_18[0] != (CSettingsStore *)0x0) {
    puVar6 = (undefined4 *)FUN_1002466e(local_18);
    pCVar7 = AfxDynamicDownCast((CRuntimeClass *)&PTR_s_CPaneFrameWnd_101d38dc,(CObject *)*puVar6);
    pcVar1 = *(code **)(*(int *)pCVar7 + 0x1d8);
    guard_check_icall(param_1,0xffffffff);
    (*pcVar1)();
  }
  local_24 = (uchar *)0x0;
  local_38 = 0;
  local_34 = 0;
  local_8._1_3_ = (undefined3)((uint)local_8 >> 8);
  local_8._0_1_ = 2;
  local_18[0] = CSettingsStoreSP::Create((CSettingsStoreSP *)&local_38,0,1);
  pcVar1 = *(code **)(*(int *)local_18[0] + 0x10);
  guard_check_icall(local_28);
  iVar5 = (*pcVar1)();
  if (iVar5 == 0) {
    CSettingsStoreSP::~CSettingsStoreSP((CSettingsStoreSP *)&local_38);
    FUN_10003460();
    FUN_10003460();
    iVar5 = 0;
  }
  else {
    iVar5 = *(int *)local_18[0];
    guard_check_icall(L"DockingPaneAndPaneDividers",&local_24,&local_3c);
    iVar9 = (**(code **)(iVar5 + 0x44))();
    iVar5 = 0;
    if (iVar9 != 0) {
      local_8._0_1_ = 3;
      CMemFile::CMemFile(local_70,local_24,local_3c,0);
      local_8._0_1_ = 4;
      CArchive::CArchive(local_b8,(CFile *)local_70,1,0x1000,(void *)0x0);
      pCVar2 = local_20;
      local_8._0_1_ = 5;
      pcVar1 = *(code **)(*(int *)local_20 + 8);
      guard_check_icall(local_b8);
      (*pcVar1)();
      local_30 = 1;
      *(int *)(pCVar2 + 0x15c) = 0;
      CArchive::~CArchive(local_b8);
      CMemFile::~CMemFile(local_70);
      iVar5 = local_30;
      if (local_24 != (uchar *)0x0) {
        FID_conflict__free(local_24);
        iVar5 = local_30;
      }
    }
    CSettingsStoreSP::~CSettingsStoreSP((CSettingsStoreSP *)&local_38);
    FUN_10003460();
    FUN_10003460();
  }
  return iVar5;
}

