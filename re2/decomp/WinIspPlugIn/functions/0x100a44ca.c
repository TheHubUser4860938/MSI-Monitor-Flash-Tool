// rea decompile_all
// name: CMFCOutlookBar::SaveState
// address: 0x100a44ca
// body: available
// range: 0x100a44ca-0x100a476c inclusive
// non_contiguous: false
// provider: Ghidra 12.1.2 (ghidra)
// analysis_profile: b075844f08879296d957518397cd0ddda73db81dce53d00d3f0e702766fc2af6
// limitations: The session serves operations only after Ghidra reports default auto-analysis complete; incomplete analysis does not expose partial results.; The imported Program and temporary project are ephemeral and deleted on close. Annotation operations edit session database metadata; original executable bytes are never written.; Cancelling an active Ghidra request terminates its ephemeral database and discards session annotations. The selected target remains open; the next provider query imports the original artifact again.; Default-space addresses use lowercase 0x-prefixed hexadecimal; other address spaces use <percent-encoded-space>:0x<hex>.; The Ghidra Program references PDB WinIspPlugIn.pdb (GUID d9f398c7-6c98-49a8-af25-a0659d5ad2f3, age (hex) 1, signature unknown, version RSDS); Ghidra reports load state unknown. Original names and types may be missing; an empty name search does not prove a procedure is absent. Use list_procedures and address-based analysis to inspect recovered functions. REA does not admit a caller-selected PDB companion.; This session uses Ghidra 12.1.2. The bridge is verified against 12.1.4; other 12.1.x builds are accepted and the observed version is reported.; Pseudocode is Ghidra decompiler output, not original source and not text-equivalent to Hopper output.; External functions and functions without an analyzable body return null; other decompiler failures remain explicit.
// pseudocode: provider-specific; not original source


/* WARNING: Function: __EH_prolog3_catch replaced with injection: EH_prolog3 */
/* WARNING: Function: __EH_epilog3 replaced with injection: EH_epilog3 */
/* Library Function - Single Match
    public: virtual int __thiscall CMFCOutlookBar::SaveState(wchar_t const *,int,unsigned int)
   
   Library: Visual Studio 2015 Release */

int __thiscall
CMFCOutlookBar::SaveState(CMFCOutlookBar *this,wchar_t *param_1,int param_2,uint param_3)

{
  code *pcVar1;
  undefined4 *puVar2;
  int iVar3;
  undefined4 uVar4;
  HWND pHVar5;
  CWnd *pCVar6;
  uchar *_Memory;
  CSettingsStore *pCVar7;
  CStringT<wchar_t,StrTraitMFC<wchar_t,ATL::ChTraitsCRT<wchar_t>_>_> *this_00;
  undefined8 uVar8;
  CArchive local_a4 [72];
  CMemFile local_5c [52];
  undefined4 local_28;
  undefined4 local_24;
  CWnd *local_20;
  int local_1c;
  int local_18 [4];
  undefined4 local_8;
  undefined4 uStack_4;
  
  uStack_4 = 0x94;
  local_8 = 0x100a44d9;
  local_20 = (CWnd *)this;
  ::SaveState(param_1,param_2,param_3);
  local_18[0] = *(int *)(this + 0x38c);
  while (local_18[0] != 0) {
    puVar2 = (undefined4 *)FUN_100c321b(local_18);
    pCVar6 = (CWnd *)*puVar2;
    iVar3 = CWnd::GetDlgCtrlID(pCVar6);
    pcVar1 = *(code **)(*(int *)pCVar6 + 0x230);
    guard_check_icall(param_1,iVar3,iVar3);
    (*pcVar1)();
    this = (CMFCOutlookBar *)local_20;
  }
  AFXGetRegPath((wchar_t *)&local_28,L"MFCOutlookBars");
  local_8 = 0;
  if (param_2 == -1) {
    param_2 = CWnd::GetDlgCtrlID((CWnd *)this);
  }
  uVar4 = FUN_10049868();
  FUN_100476a0(uVar4);
  local_8 = CONCAT31(local_8._1_3_,1);
  if (param_3 == 0xffffffff) {
    ATL::CStringT<wchar_t,StrTraitMFC<wchar_t,ATL::ChTraitsCRT<wchar_t>_>_>::Format
              (this_00,(wchar_t *)local_18,L"%TsMFCOutlookBar-%d",local_28,param_2);
  }
  else {
    ATL::CStringT<wchar_t,StrTraitMFC<wchar_t,ATL::ChTraitsCRT<wchar_t>_>_>::Format
              (this_00,(wchar_t *)local_18,L"%TsMFCOutlookBar-%d%x",local_28,param_2,param_3);
  }
  local_8._0_1_ = 2;
  CMemFile::CMemFile(local_5c,0x400);
  local_8._0_1_ = 3;
  CArchive::CArchive(local_a4,(CFile *)local_5c,0,0x1000,(void *)0x0);
  local_8 = CONCAT31(local_8._1_3_,4);
  FUN_10051228(*(undefined4 *)(this + 0x394));
  local_1c = *(int *)(this + 0x38c);
  while (local_1c != 0) {
    puVar2 = (undefined4 *)FUN_100c321b(&local_1c);
    pCVar6 = (CWnd *)*puVar2;
    iVar3 = CWnd::GetDlgCtrlID(pCVar6);
    FUN_10051228(iVar3);
    uVar4 = FUN_10049868();
    FUN_100476a0(uVar4);
    local_8 = CONCAT31(local_8._1_3_,5);
    pcVar1 = *(code **)(*(int *)pCVar6 + 0x16c);
    guard_check_icall();
    iVar3 = (*pcVar1)();
    if (iVar3 == 0) {
      pHVar5 = GetParent(*(HWND *)(pCVar6 + 0x20));
      pCVar6 = CWnd::FromHandle(pHVar5);
    }
    CWnd::GetWindowTextW
              (pCVar6,(CStringT<wchar_t,StrTraitMFC<wchar_t,ATL::ChTraitsCRT<wchar_t>_>_> *)
                      &local_20);
    CArchive::operator<<<wchar_t,StrTraitMFC<wchar_t,ATL::ChTraitsCRT<wchar_t>_>_>
              (local_a4,(CStringT<wchar_t,StrTraitMFC<wchar_t,ATL::ChTraitsCRT<wchar_t>_>_> *)
                        &local_20);
    local_8 = CONCAT31(local_8._1_3_,4);
    FUN_100476d0();
  }
  pcVar1 = *(code **)(*(int *)this + 0x3a0);
  guard_check_icall();
  iVar3 = (*pcVar1)();
  if (iVar3 == 0) {
    uVar4 = 0xffffffff;
  }
  else {
    uVar4 = *(undefined4 *)(iVar3 + 0x254);
  }
  FUN_10051228(uVar4);
  CArchive::Flush(local_a4);
  local_8._0_1_ = 3;
  CArchive::~CArchive(local_a4);
  uVar8 = FUN_1011c468();
  local_20 = (CWnd *)((ulonglong)uVar8 >> 0x20);
  local_1c = (int)uVar8;
  _Memory = CMemFile::Detach(local_5c);
  if (_Memory != (uchar *)0x0) {
    local_24 = 0;
    local_20 = (CWnd *)0x0;
    local_8._0_1_ = 6;
    pCVar7 = CSettingsStoreSP::Create((CSettingsStoreSP *)&local_24,0,0);
    pcVar1 = *(code **)(*(int *)pCVar7 + 0xc);
    guard_check_icall(local_18[0]);
    iVar3 = (*pcVar1)();
    if (iVar3 != 0) {
      pcVar1 = *(code **)(*(int *)pCVar7 + 0x28);
      guard_check_icall(L"MFCOutlookCustomPages",_Memory,local_1c);
      (*pcVar1)();
    }
    FID_conflict__free(_Memory);
    CSettingsStoreSP::~CSettingsStoreSP((CSettingsStoreSP *)&local_24);
  }
  CMemFile::~CMemFile(local_5c);
  FUN_100476d0();
  FUN_100476d0();
  return 1;
}

