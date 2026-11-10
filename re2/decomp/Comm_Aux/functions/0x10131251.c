// rea decompile_all
// name: CMDIClientAreaWnd::SaveState
// address: 0x10131251
// body: available
// range: 0x10131251-0x101313a3 inclusive
// non_contiguous: false
// provider: Ghidra 12.1.2 (ghidra)
// analysis_profile: b075844f08879296d957518397cd0ddda73db81dce53d00d3f0e702766fc2af6
// limitations: The session serves operations only after Ghidra reports default auto-analysis complete; incomplete analysis does not expose partial results.; The imported Program and temporary project are ephemeral and deleted on close. Annotation operations edit session database metadata; original executable bytes are never written.; Cancelling an active Ghidra request terminates its ephemeral database and discards session annotations. The selected target remains open; the next provider query imports the original artifact again.; Default-space addresses use lowercase 0x-prefixed hexadecimal; other address spaces use <percent-encoded-space>:0x<hex>.; The Ghidra Program references PDB Comm_Aux.pdb (GUID ba7920cc-daa3-4461-a102-1f8f66c67a2a, age (hex) 1, signature unknown, version RSDS); Ghidra reports load state unknown. Original names and types may be missing; an empty name search does not prove a procedure is absent. Use list_procedures and address-based analysis to inspect recovered functions. REA does not admit a caller-selected PDB companion.; This session uses Ghidra 12.1.2. The bridge is verified against 12.1.4; other 12.1.x builds are accepted and the observed version is reported.; Pseudocode is Ghidra decompiler output, not original source and not text-equivalent to Hopper output.; External functions and functions without an analyzable body return null; other decompiler failures remain explicit.
// pseudocode: provider-specific; not original source


/* WARNING: Function: __EH_prolog3_catch replaced with injection: EH_prolog3 */
/* WARNING: Function: __EH_epilog3 replaced with injection: EH_epilog3 */
/* Library Function - Single Match
    public: int __thiscall CMDIClientAreaWnd::SaveState(wchar_t const *,unsigned int)
   
   Library: Visual Studio 2015 Release */

int __thiscall CMDIClientAreaWnd::SaveState(CMDIClientAreaWnd *this,wchar_t *param_1,uint param_2)

{
  code *pcVar1;
  undefined4 uVar2;
  uchar *_Memory;
  CSettingsStore *pCVar3;
  int iVar4;
  CStringT<wchar_t,StrTraitMFC<wchar_t,ATL::ChTraitsCRT<wchar_t>_>_> *this_00;
  undefined8 uVar5;
  CArchive local_a8 [72];
  CMemFile local_60 [52];
  undefined4 local_2c;
  undefined4 local_28;
  undefined4 local_24;
  int local_20;
  undefined4 local_1c;
  undefined4 local_18 [4];
  undefined4 local_8;
  undefined4 uStack_4;
  
  uStack_4 = 0x98;
  local_8 = 0x10131260;
  local_20 = 0;
  AFXGetRegPath((wchar_t *)&local_1c,L"MDIClientArea");
  local_8 = 0;
  uVar2 = FUN_10048e90();
  FUN_10034c30(uVar2);
  local_8._0_1_ = 1;
  ATL::CStringT<wchar_t,StrTraitMFC<wchar_t,ATL::ChTraitsCRT<wchar_t>_>_>::Format
            (this_00,(wchar_t *)local_18,L"%TsMDIClientArea-%d",local_1c,param_2);
  local_8._0_1_ = 2;
  CMemFile::CMemFile(local_60,0x400);
  local_8._0_1_ = 3;
  CArchive::CArchive(local_a8,(CFile *)local_60,0,0x1000,(void *)0x0);
  local_8._0_1_ = 4;
  pcVar1 = *(code **)(*(int *)this + 8);
  guard_check_icall(local_a8);
  (*pcVar1)();
  CArchive::Flush(local_a8);
  local_8._0_1_ = 3;
  CArchive::~CArchive(local_a8);
  uVar5 = FUN_1011b609();
  local_24 = (undefined4)((ulonglong)uVar5 >> 0x20);
  local_2c = (undefined4)uVar5;
  _Memory = CMemFile::Detach(local_60);
  if (_Memory != (uchar *)0x0) {
    local_28 = 0;
    local_24 = 0;
    local_8._0_1_ = 5;
    pCVar3 = CSettingsStoreSP::Create((CSettingsStoreSP *)&local_28,0,0);
    pcVar1 = *(code **)(*(int *)pCVar3 + 0xc);
    guard_check_icall(local_18[0]);
    iVar4 = (*pcVar1)();
    if (iVar4 != 0) {
      pcVar1 = *(code **)(*(int *)pCVar3 + 0x28);
      guard_check_icall(L"MDITabsState",_Memory,local_2c);
      local_20 = (*pcVar1)();
    }
    FID_conflict__free(_Memory);
    CSettingsStoreSP::~CSettingsStoreSP((CSettingsStoreSP *)&local_28);
  }
  CMemFile::~CMemFile(local_60);
  FUN_10034f00();
  FUN_10034f00();
  return local_20;
}

