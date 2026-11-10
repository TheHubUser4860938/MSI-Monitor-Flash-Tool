// rea decompile_all
// name: FUN_1006b6ee
// address: 0x1006b6ee
// body: available
// range: 0x1006b6ee-0x1006b80a inclusive
// non_contiguous: false
// provider: Ghidra 12.1.2 (ghidra)
// analysis_profile: b075844f08879296d957518397cd0ddda73db81dce53d00d3f0e702766fc2af6
// limitations: The session serves operations only after Ghidra reports default auto-analysis complete; incomplete analysis does not expose partial results.; The imported Program and temporary project are ephemeral and deleted on close. Annotation operations edit session database metadata; original executable bytes are never written.; Cancelling an active Ghidra request terminates its ephemeral database and discards session annotations. The selected target remains open; the next provider query imports the original artifact again.; Default-space addresses use lowercase 0x-prefixed hexadecimal; other address spaces use <percent-encoded-space>:0x<hex>.; The Ghidra Program references PDB WinOperateCScaler.pdb (GUID a6737962-efea-4805-8ae6-1fc1ef126554, age (hex) 1, signature unknown, version RSDS); Ghidra reports load state unknown. Original names and types may be missing; an empty name search does not prove a procedure is absent. Use list_procedures and address-based analysis to inspect recovered functions. REA does not admit a caller-selected PDB companion.; This session uses Ghidra 12.1.2. The bridge is verified against 12.1.4; other 12.1.x builds are accepted and the observed version is reported.; Pseudocode is Ghidra decompiler output, not original source and not text-equivalent to Hopper output.; External functions and functions without an analyzable body return null; other decompiler failures remain explicit.
// pseudocode: provider-specific; not original source


/* WARNING: Function: __EH_epilog3 replaced with injection: EH_epilog3 */

undefined4 FUN_1006b6ee(void)

{
  code *pcVar1;
  int *piVar2;
  AFX_MODULE_STATE *pAVar3;
  CObject *pCVar4;
  int iVar5;
  undefined4 uVar6;
  int iVar7;
  CPane *unaff_EBX;
  int unaff_EBP;
  int unaff_ESI;
  int unaff_EDI;
  
  *(undefined4 *)(unaff_EBP + -4) = 2;
  if (*(int *)(unaff_EBP + -0x20) != 0) {
    FID_conflict__free(*(void **)(unaff_EBP + -0x20));
  }
  FUN_1006b498(*(undefined4 *)(unaff_EBP + -0x28));
  pAVar3 = AfxGetModuleState();
  pCVar4 = AfxDynamicDownCast((CRuntimeClass *)&PTR_s_CWinAppEx_101b8db0,*(CObject **)(pAVar3 + 4));
  if (((*(int *)(unaff_EBP + -0x14) != 0) && (pCVar4 != (CObject *)0x0)) &&
     (*(int *)(pCVar4 + 0x10c) != unaff_EDI)) {
    pcVar1 = *(code **)(*(int *)unaff_EBX + 0x42c);
    guard_check_icall(*(undefined4 *)(unaff_EBP + -0x28));
    (*pcVar1)();
  }
  iVar5 = CPane::LoadState(unaff_EBX,*(wchar_t **)(unaff_EBP + 8),*(int *)(unaff_EBP + 0xc),
                           *(uint *)(unaff_EBP + 0x10));
  iVar7 = *(int *)unaff_EBX;
  *(int *)(unaff_EBP + -0x14) = iVar5;
  pcVar1 = *(code **)(iVar7 + 0x20c);
  guard_check_icall();
  (*pcVar1)();
  if ((*(int *)(unaff_EBX + 0xb8) != 0) && (*(int *)(unaff_EBX + 0xbc) != 0)) {
    iVar7 = *(int *)unaff_EBX;
    pcVar1 = *(code **)(iVar7 + 0x164);
    guard_check_icall();
    uVar6 = (*pcVar1)();
    pcVar1 = *(code **)(iVar7 + 0x260);
    guard_check_icall(unaff_EBP + -0x2c,1,uVar6);
    piVar2 = *(int **)(unaff_EBP + -0x1c);
    (*pcVar1)();
    pcVar1 = *(code **)(*piVar2 + 0x164);
    guard_check_icall();
    iVar5 = (*pcVar1)();
    iVar7 = *(int *)(unaff_EBP + -0x28);
    if (iVar5 == 0) {
      iVar7 = *(int *)(unaff_EBP + -0x2c);
    }
    CDockSite::ResizeRow((CDockSite *)piVar2[0x2e],(CDockingPanesRow *)piVar2[0x2f],iVar7,1);
  }
  uVar6 = *(undefined4 *)(unaff_EBP + -0x14);
  CSettingsStoreSP::~CSettingsStoreSP((CSettingsStoreSP *)(unaff_EBP + -0x34));
  ATL::CStringData::Release((CStringData *)(unaff_ESI + -0x10));
  ATL::CStringData::Release((CStringData *)(*(int *)(unaff_EBP + -0x24) + -0x10));
  return uVar6;
}

