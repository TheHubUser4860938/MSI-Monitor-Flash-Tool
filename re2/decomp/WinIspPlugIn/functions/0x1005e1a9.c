// rea decompile_all
// name: CDataRecoveryHandler::SaveOpenDocumentList
// address: 0x1005e1a9
// body: available
// range: 0x1005e1a9-0x1005e2b9 inclusive
// non_contiguous: false
// provider: Ghidra 12.1.2 (ghidra)
// analysis_profile: b075844f08879296d957518397cd0ddda73db81dce53d00d3f0e702766fc2af6
// limitations: The session serves operations only after Ghidra reports default auto-analysis complete; incomplete analysis does not expose partial results.; The imported Program and temporary project are ephemeral and deleted on close. Annotation operations edit session database metadata; original executable bytes are never written.; Cancelling an active Ghidra request terminates its ephemeral database and discards session annotations. The selected target remains open; the next provider query imports the original artifact again.; Default-space addresses use lowercase 0x-prefixed hexadecimal; other address spaces use <percent-encoded-space>:0x<hex>.; The Ghidra Program references PDB WinIspPlugIn.pdb (GUID d9f398c7-6c98-49a8-af25-a0659d5ad2f3, age (hex) 1, signature unknown, version RSDS); Ghidra reports load state unknown. Original names and types may be missing; an empty name search does not prove a procedure is absent. Use list_procedures and address-based analysis to inspect recovered functions. REA does not admit a caller-selected PDB companion.; This session uses Ghidra 12.1.2. The bridge is verified against 12.1.4; other 12.1.x builds are accepted and the observed version is reported.; Pseudocode is Ghidra decompiler output, not original source and not text-equivalent to Hopper output.; External functions and functions without an analyzable body return null; other decompiler failures remain explicit.
// pseudocode: provider-specific; not original source


/* WARNING: Function: __EH_prolog3 replaced with injection: EH_prolog3 */
/* WARNING: Function: __EH_epilog3 replaced with injection: EH_epilog3 */
/* Library Function - Single Match
    public: virtual int __thiscall CDataRecoveryHandler::SaveOpenDocumentList(void)
   
   Library: Visual Studio 2015 Release */

int __thiscall CDataRecoveryHandler::SaveOpenDocumentList(CDataRecoveryHandler *this)

{
  code *pcVar1;
  undefined4 *puVar2;
  AFX_MODULE_STATE *pAVar3;
  HKEY__ *pHVar4;
  int iVar5;
  undefined4 uVar6;
  undefined4 uVar7;
  undefined4 uVar8;
  undefined4 uVar9;
  undefined4 uVar10;
  undefined4 uVar11;
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
    puVar2 = (undefined4 *)(*pcVar1)();
    uVar6 = *puVar2;
    local_8._0_1_ = 1;
    pAVar3 = AfxGetModuleState();
    uVar11 = 0;
    uVar10 = 0;
    uVar9 = 0x2001f;
    uVar8 = 0;
    uVar7 = 0;
    pHVar4 = CWinApp::GetAppRegistryKey(*(CWinApp **)(pAVar3 + 4),(CAtlTransactionManager *)0x0);
    iVar5 = ::Create(pHVar4,uVar6,uVar7,uVar8,uVar9,uVar10,uVar11);
    local_8 = (uint)local_8._1_3_ << 8;
    FUN_100476d0();
    if (iVar5 == 0) {
      do {
        uVar6 = FUN_10049868();
        FUN_100476a0(uVar6);
        local_8._0_1_ = 2;
        uVar6 = FUN_10049868();
        FUN_100476a0(uVar6);
        local_8._0_1_ = 3;
        FUN_1005ce12(&local_20,&local_1c,&local_18);
        ATL::CRegKey::SetStringValue((CRegKey *)&local_2c,local_1c,local_18,1);
        FUN_100476d0();
        local_8 = CONCAT31(local_8._1_3_,(char)local_14);
        FUN_100476d0();
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

