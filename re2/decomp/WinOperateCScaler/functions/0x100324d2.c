// rea decompile_all
// name: CDataRecoveryHandler::SaveOpenDocumentList
// address: 0x100324d2
// body: available
// range: 0x100324d2-0x100325e2 inclusive
// non_contiguous: false
// provider: Ghidra 12.1.2 (ghidra)
// analysis_profile: b075844f08879296d957518397cd0ddda73db81dce53d00d3f0e702766fc2af6
// limitations: The session serves operations only after Ghidra reports default auto-analysis complete; incomplete analysis does not expose partial results.; The imported Program and temporary project are ephemeral and deleted on close. Annotation operations edit session database metadata; original executable bytes are never written.; Cancelling an active Ghidra request terminates its ephemeral database and discards session annotations. The selected target remains open; the next provider query imports the original artifact again.; Default-space addresses use lowercase 0x-prefixed hexadecimal; other address spaces use <percent-encoded-space>:0x<hex>.; The Ghidra Program references PDB WinOperateCScaler.pdb (GUID a6737962-efea-4805-8ae6-1fc1ef126554, age (hex) 1, signature unknown, version RSDS); Ghidra reports load state unknown. Original names and types may be missing; an empty name search does not prove a procedure is absent. Use list_procedures and address-based analysis to inspect recovered functions. REA does not admit a caller-selected PDB companion.; This session uses Ghidra 12.1.2. The bridge is verified against 12.1.4; other 12.1.x builds are accepted and the observed version is reported.; Pseudocode is Ghidra decompiler output, not original source and not text-equivalent to Hopper output.; External functions and functions without an analyzable body return null; other decompiler failures remain explicit.
// pseudocode: provider-specific; not original source


/* WARNING: Function: __EH_prolog3 replaced with injection: EH_prolog3 */
/* WARNING: Function: __EH_epilog3 replaced with injection: EH_epilog3 */
/* Library Function - Single Match
    public: virtual int __thiscall CDataRecoveryHandler::SaveOpenDocumentList(void)
   
   Library: Visual Studio 2015 Release */

int __thiscall CDataRecoveryHandler::SaveOpenDocumentList(CDataRecoveryHandler *this)

{
  code *pcVar1;
  wchar_t *pwVar2;
  wchar_t *pwVar3;
  undefined4 *puVar4;
  AFX_MODULE_STATE *pAVar5;
  HKEY__ *pHVar6;
  int iVar7;
  undefined4 uVar8;
  undefined4 uVar9;
  undefined4 uVar10;
  undefined4 uVar11;
  undefined4 uVar12;
  undefined4 uVar13;
  undefined4 local_2c;
  undefined4 local_28;
  undefined4 local_24;
  int local_20;
  wchar_t *local_1c;
  wchar_t *local_18;
  int local_14;
  int local_8;
  undefined4 uStack_4;
  
  uStack_4 = 0x1c;
  local_14 = 1;
  local_20 = -(uint)(*(int *)(this + 0x10) != 0);
  if (local_20 != 0) {
    local_14 = 0;
    local_2c = 0;
    local_28 = 0;
    local_24 = 0;
    local_8 = 0;
    pcVar1 = *(code **)(*(int *)this + 0x20);
    guard_check_icall(&local_1c);
    puVar4 = (undefined4 *)(*pcVar1)();
    uVar8 = *puVar4;
    local_8._0_1_ = 1;
    pAVar5 = AfxGetModuleState();
    uVar13 = 0;
    uVar12 = 0;
    uVar11 = 0x2001f;
    uVar10 = 0;
    uVar9 = 0;
    pHVar6 = CWinApp::GetAppRegistryKey(*(CWinApp **)(pAVar5 + 4),(CAtlTransactionManager *)0x0);
    iVar7 = ::Create(pHVar6,uVar8,uVar9,uVar10,uVar11,uVar12,uVar13);
    local_8 = (uint)local_8._1_3_ << 8;
    ATL::CStringData::Release((CStringData *)(local_1c + -8));
    if (iVar7 == 0) {
      do {
        uVar8 = FUN_1001e20a();
        FUN_1001d224(uVar8);
        local_8._0_1_ = 2;
        uVar8 = FUN_1001e20a();
        FUN_1001d224(uVar8);
        local_8._0_1_ = 3;
        FUN_100310e7(&local_20,&local_1c,&local_18);
        pwVar3 = local_18;
        pwVar2 = local_1c;
        ATL::CRegKey::SetStringValue((CRegKey *)&local_2c,local_1c,local_18,1);
        ATL::CStringData::Release((CStringData *)(pwVar3 + -8));
        local_8 = CONCAT31(local_8._1_3_,(char)local_14);
        ATL::CStringData::Release((CStringData *)(pwVar2 + -8));
      } while (local_20 != 0);
      ATL::CRegKey::Close((CRegKey *)&local_2c);
      local_14 = 1;
    }
    else {
      ATL::CRegKey::Close((CRegKey *)&local_2c);
    }
  }
  return local_14;
}

