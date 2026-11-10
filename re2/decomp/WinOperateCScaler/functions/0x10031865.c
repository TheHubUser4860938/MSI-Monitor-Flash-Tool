// rea decompile_all
// name: CDataRecoveryHandler::ReadOpenDocumentList
// address: 0x10031865
// body: available
// range: 0x10031865-0x10031a4d inclusive
// non_contiguous: false
// provider: Ghidra 12.1.2 (ghidra)
// analysis_profile: b075844f08879296d957518397cd0ddda73db81dce53d00d3f0e702766fc2af6
// limitations: The session serves operations only after Ghidra reports default auto-analysis complete; incomplete analysis does not expose partial results.; The imported Program and temporary project are ephemeral and deleted on close. Annotation operations edit session database metadata; original executable bytes are never written.; Cancelling an active Ghidra request terminates its ephemeral database and discards session annotations. The selected target remains open; the next provider query imports the original artifact again.; Default-space addresses use lowercase 0x-prefixed hexadecimal; other address spaces use <percent-encoded-space>:0x<hex>.; The Ghidra Program references PDB WinOperateCScaler.pdb (GUID a6737962-efea-4805-8ae6-1fc1ef126554, age (hex) 1, signature unknown, version RSDS); Ghidra reports load state unknown. Original names and types may be missing; an empty name search does not prove a procedure is absent. Use list_procedures and address-based analysis to inspect recovered functions. REA does not admit a caller-selected PDB companion.; This session uses Ghidra 12.1.2. The bridge is verified against 12.1.4; other 12.1.x builds are accepted and the observed version is reported.; Pseudocode is Ghidra decompiler output, not original source and not text-equivalent to Hopper output.; External functions and functions without an analyzable body return null; other decompiler failures remain explicit.
// pseudocode: provider-specific; not original source


/* WARNING: Function: __EH_prolog3_GS replaced with injection: EH_prolog3 */
/* Library Function - Single Match
    public: virtual int __thiscall CDataRecoveryHandler::ReadOpenDocumentList(void)
   
   Library: Visual Studio 2015 Release */

int __thiscall CDataRecoveryHandler::ReadOpenDocumentList(CDataRecoveryHandler *this)

{
  code *pcVar1;
  CDataRecoveryHandler *pCVar2;
  AFX_MODULE_STATE *pAVar3;
  HKEY__ *pHVar4;
  undefined4 *puVar5;
  long lVar6;
  int iVar7;
  CSimpleStringT<wchar_t,0> *this_00;
  DWORD dwIndex;
  HKEY__ *local_44c;
  undefined4 local_448;
  undefined4 local_444;
  int local_440;
  HKEY local_43c;
  undefined4 local_438;
  undefined4 local_434;
  undefined4 local_430;
  CDataRecoveryHandler *local_42c;
  DWORD local_428;
  wchar_t local_424 [260];
  WCHAR local_21c [266];
  undefined4 local_8;
  undefined4 uStack_4;
  
  uStack_4 = 0x43c;
  local_8 = 0x10031874;
  local_430 = 0;
  local_42c = this;
  pAVar3 = AfxGetModuleState();
  pHVar4 = CWinApp::GetAppRegistryKey(*(CWinApp **)(pAVar3 + 4),(CAtlTransactionManager *)0x0);
  local_448 = 0;
  local_444 = 0;
  local_43c = (HKEY)0x0;
  local_438 = 0;
  local_434 = 0;
  local_8 = 1;
  pcVar1 = *(code **)(*(int *)this + 0x20);
  local_44c = pHVar4;
  guard_check_icall(&local_428);
  puVar5 = (undefined4 *)(*pcVar1)();
  lVar6 = ATL::CRegKey::Open((CRegKey *)&local_43c,pHVar4,(wchar_t *)*puVar5,0x2001f);
  ATL::CStringData::Release((CStringData *)(local_428 - 0x10));
  if (lVar6 == 0) {
    dwIndex = 0;
    _memset(local_21c,0,0x208);
    local_428 = 0x104;
    iVar7 = RegEnumValueW(local_43c,0,local_21c,&local_428,(LPDWORD)0x0,(LPDWORD)0x0,(LPBYTE)0x0,
                          (LPDWORD)0x0);
    pCVar2 = local_42c;
    while (iVar7 == 0) {
      local_428 = 0x104;
      dwIndex = dwIndex + 1;
      _memset(local_424,0,0x208);
      local_42c = (CDataRecoveryHandler *)0x104;
      lVar6 = ATL::CRegKey::QueryStringValue
                        ((CRegKey *)&local_43c,local_21c,local_424,(ulong *)&local_42c);
      if (lVar6 == 0) {
        this_00 = (CSimpleStringT<wchar_t,0> *)FUN_10030502(local_21c);
        ATL::CSimpleStringT<wchar_t,0>::Append(this_00,local_424);
        local_430 = 1;
      }
      iVar7 = RegEnumValueW(local_43c,dwIndex,local_21c,&local_428,(LPDWORD)0x0,(LPDWORD)0x0,
                            (LPBYTE)0x0,(LPDWORD)0x0);
    }
    ATL::CRegKey::Close((CRegKey *)&local_43c);
    pcVar1 = *(code **)(*(int *)pCVar2 + 0x20);
    guard_check_icall(&local_440);
    puVar5 = (undefined4 *)(*pcVar1)();
    ATL::CRegKey::DeleteSubKey((CRegKey *)&local_44c,(wchar_t *)*puVar5);
    ATL::CStringData::Release((CStringData *)(local_440 + -0x10));
  }
  ATL::CRegKey::Close((CRegKey *)&local_43c);
  ATL::CRegKey::Close((CRegKey *)&local_44c);
  iVar7 = FUN_10154478();
  return iVar7;
}

