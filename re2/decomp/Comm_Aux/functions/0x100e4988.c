// rea decompile_all
// name: FUN_100e4988
// address: 0x100e4988
// body: available
// range: 0x100e4988-0x100e4c1c inclusive
// non_contiguous: false
// provider: Ghidra 12.1.2 (ghidra)
// analysis_profile: b075844f08879296d957518397cd0ddda73db81dce53d00d3f0e702766fc2af6
// limitations: The session serves operations only after Ghidra reports default auto-analysis complete; incomplete analysis does not expose partial results.; The imported Program and temporary project are ephemeral and deleted on close. Annotation operations edit session database metadata; original executable bytes are never written.; Cancelling an active Ghidra request terminates its ephemeral database and discards session annotations. The selected target remains open; the next provider query imports the original artifact again.; Default-space addresses use lowercase 0x-prefixed hexadecimal; other address spaces use <percent-encoded-space>:0x<hex>.; Ghidra Listing reports a terminal call at 0x100e4c1b to 0x100e4c2f FUN_100e4c2f (external=false, thunk=false, hasNoReturn=false); fallthrough is excluded by Ghidra's flow model. The reason for the terminal flow is not established by this observation.; The Ghidra Program references PDB Comm_Aux.pdb (GUID ba7920cc-daa3-4461-a102-1f8f66c67a2a, age (hex) 1, signature unknown, version RSDS); Ghidra reports load state unknown. Original names and types may be missing; an empty name search does not prove a procedure is absent. Use list_procedures and address-based analysis to inspect recovered functions. REA does not admit a caller-selected PDB companion.; This session uses Ghidra 12.1.2. The bridge is verified against 12.1.4; other 12.1.x builds are accepted and the observed version is reported.; Pseudocode is Ghidra decompiler output, not original source and not text-equivalent to Hopper output.; External functions and functions without an analyzable body return null; other decompiler failures remain explicit.
// pseudocode: provider-specific; not original source


/* WARNING: Function: __EH_prolog3_catch replaced with injection: EH_prolog3 */
/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_100e4988(undefined4 param_1,undefined4 param_2)

{
  CBasePane *pCVar1;
  code *pcVar2;
  undefined4 uVar3;
  int *piVar4;
  int iVar5;
  undefined4 *puVar6;
  CObject *pCVar7;
  uchar *_Memory;
  CSettingsStore *in_ECX;
  CStringT<wchar_t,StrTraitMFC<wchar_t,ATL::ChTraitsCRT<wchar_t>_>_> *this;
  undefined8 uVar8;
  CArchive local_ac [72];
  CMemFile local_64 [16];
  CObList local_54 [36];
  undefined4 local_30;
  undefined4 local_2c [2];
  CSettingsStore *local_24;
  undefined4 local_20;
  int local_1c;
  CBasePane *local_18;
  undefined4 local_8;
  undefined4 uStack_4;
  
  uStack_4 = 0x9c;
  local_8 = 0x100e4997;
  _DAT_1020fd2c = 1;
  local_24 = in_ECX;
  AFXGetRegPath((wchar_t *)&local_30,L"DockingManagers");
  local_8 = 0;
  uVar3 = FUN_10048e90();
  FUN_10034c30(uVar3);
  local_8 = CONCAT31(local_8._1_3_,1);
  ATL::CStringT<wchar_t,StrTraitMFC<wchar_t,ATL::ChTraitsCRT<wchar_t>_>_>::Format
            (this,(wchar_t *)local_2c,L"%TsDockingManager-%d",local_30,param_2);
  local_1c = *(int *)((int)in_ECX + 0x24);
  while (local_1c != 0) {
    piVar4 = (int *)FUN_10034920(&local_1c);
    pCVar1 = (CBasePane *)*piVar4;
    local_18 = pCVar1;
    iVar5 = FUN_1004e58b(&PTR_s_CDockablePane_1020600c);
    if ((iVar5 != 0) ||
       ((iVar5 = FUN_1004e58b(&PTR_s_CPane_101ba9ec), in_ECX = local_24, iVar5 != 0 &&
        (iVar5 = FUN_1004e58b(&PTR_s_CMFCToolBar_10205ab0), in_ECX = local_24, iVar5 == 0)))) {
      pcVar2 = *(code **)(*(int *)pCVar1 + 0x230);
      guard_check_icall(param_1,0xffffffff,0xffffffff);
      (*pcVar2)();
      in_ECX = local_24;
    }
  }
  local_1c = *(int *)((int)in_ECX + 0x40);
  if (local_1c != 0) {
    local_18 = (CBasePane *)((int)in_ECX + 0x20);
    do {
      puVar6 = (undefined4 *)FUN_10034920(&local_1c);
      pCVar7 = AfxDynamicDownCast((CRuntimeClass *)&PTR_s_CPaneDivider_101d4408,(CObject *)*puVar6);
      if ((pCVar7 != (CObject *)0x0) && (*(int *)(pCVar7 + 300) != 0)) {
        CObList::CObList(local_54,10);
        local_8 = CONCAT31(local_8._1_3_,2);
        local_18 = CPaneDivider::GetFirstPane((CPaneDivider *)pCVar7);
        if (local_18 != (CBasePane *)0x0) {
          pcVar2 = *(code **)(*(int *)local_18 + 0x230);
          guard_check_icall(param_1,0xffffffff,0xffffffff);
          (*pcVar2)();
        }
        local_8 = CONCAT31(local_8._1_3_,1);
        CObList::~CObList(local_54);
      }
      in_ECX = local_24;
    } while (local_1c != 0);
  }
  local_1c = *(int *)((int)in_ECX + 0xcc);
  while (local_1c != 0) {
    puVar6 = (undefined4 *)FUN_10034920(&local_1c);
    pCVar7 = AfxDynamicDownCast((CRuntimeClass *)&PTR_s_CPaneFrameWnd_10205d4c,(CObject *)*puVar6);
    pcVar2 = *(code **)(*(int *)pCVar7 + 0x1d4);
    guard_check_icall(param_1,0xffffffff);
    (*pcVar2)();
    in_ECX = local_24;
  }
  local_8._1_3_ = (undefined3)((uint)local_8 >> 8);
  local_8._0_1_ = 3;
  CMemFile::CMemFile(local_64,0x400);
  local_8._0_1_ = 4;
  CArchive::CArchive(local_ac,(CFile *)local_64,0,0x1000,(void *)0x0);
  local_8._0_1_ = 5;
  pcVar2 = *(code **)(*(int *)in_ECX + 8);
  guard_check_icall(local_ac);
  (*pcVar2)();
  CArchive::Flush(local_ac);
  local_8._0_1_ = 4;
  CArchive::~CArchive(local_ac);
  uVar8 = FUN_1011b609();
  local_24 = (CSettingsStore *)((ulonglong)uVar8 >> 0x20);
  local_18 = (CBasePane *)uVar8;
  _Memory = CMemFile::Detach(local_64);
  if (_Memory != (uchar *)0x0) {
    local_20 = 0;
    local_1c = 0;
    local_8._0_1_ = 6;
    local_24 = CSettingsStoreSP::Create((CSettingsStoreSP *)&local_20,0,0);
    pcVar2 = *(code **)(*(int *)local_24 + 0xc);
    guard_check_icall(local_2c[0]);
    iVar5 = (*pcVar2)();
    if (iVar5 != 0) {
      pcVar2 = *(code **)(*(int *)local_24 + 0x28);
      guard_check_icall(L"DockingPaneAndPaneDividers",_Memory,local_18);
      (*pcVar2)();
    }
    FID_conflict__free(_Memory);
    CSettingsStoreSP::~CSettingsStoreSP((CSettingsStoreSP *)&local_20);
  }
  CMemFile::~CMemFile(local_64);
  FUN_100e4c2f();
  return;
}

