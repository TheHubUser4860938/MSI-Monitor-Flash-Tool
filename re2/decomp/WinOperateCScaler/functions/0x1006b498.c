// rea decompile_all
// name: FUN_1006b498
// address: 0x1006b498
// body: available
// range: 0x1006b498-0x1006b562 inclusive
// non_contiguous: false
// provider: Ghidra 12.1.2 (ghidra)
// analysis_profile: b075844f08879296d957518397cd0ddda73db81dce53d00d3f0e702766fc2af6
// limitations: The session serves operations only after Ghidra reports default auto-analysis complete; incomplete analysis does not expose partial results.; The imported Program and temporary project are ephemeral and deleted on close. Annotation operations edit session database metadata; original executable bytes are never written.; Cancelling an active Ghidra request terminates its ephemeral database and discards session annotations. The selected target remains open; the next provider query imports the original artifact again.; Default-space addresses use lowercase 0x-prefixed hexadecimal; other address spaces use <percent-encoded-space>:0x<hex>.; Ghidra Listing reports a terminal call at 0x1006b55e to 0x1001d023 FUN_1001d023 (external=false, thunk=false, hasNoReturn=true); fallthrough is excluded by Ghidra's flow model. This records Ghidra's FunctionManager flag, not an independent verification that the callee cannot return.; The Ghidra Program references PDB WinOperateCScaler.pdb (GUID a6737962-efea-4805-8ae6-1fc1ef126554, age (hex) 1, signature unknown, version RSDS); Ghidra reports load state unknown. Original names and types may be missing; an empty name search does not prove a procedure is absent. Use list_procedures and address-based analysis to inspect recovered functions. REA does not admit a caller-selected PDB companion.; This session uses Ghidra 12.1.2. The bridge is verified against 12.1.4; other 12.1.x builds are accepted and the observed version is reported.; Pseudocode is Ghidra decompiler output, not original source and not text-equivalent to Hopper output.; External functions and functions without an analyzable body return null; other decompiler failures remain explicit.
// pseudocode: provider-specific; not original source


/* WARNING: Function: __EH_prolog3 replaced with injection: EH_prolog3 */
/* WARNING: Function: __EH_epilog3 replaced with injection: EH_epilog3 */

undefined4 FUN_1006b498(int *param_1)

{
  code *pcVar1;
  CObject *pCVar2;
  int iVar3;
  int *piVar4;
  int in_ECX;
  undefined4 *puVar5;
  CObList local_2c [4];
  undefined4 *local_28;
  int local_20;
  undefined4 local_8;
  undefined4 uStack_4;
  
  uStack_4 = 0x1c;
  local_8 = 0x1006b4a4;
  CObList::CObList(local_2c,10);
  local_8 = 0;
  pcVar1 = *(code **)(*param_1 + 0x40);
  guard_check_icall(L"OrigResetItems",local_2c);
  iVar3 = (*pcVar1)();
  if ((iVar3 != 0) && (0 < local_20)) {
    iVar3 = *(int *)(in_ECX + 0xc80);
    puVar5 = local_28;
    while (iVar3 != 0) {
      local_28 = puVar5;
      piVar4 = (int *)FUN_100350dd();
      if (piVar4 != (int *)0x0) {
        pcVar1 = *(code **)(*piVar4 + 4);
        guard_check_icall(1);
        (*pcVar1)();
      }
      puVar5 = local_28;
      iVar3 = *(int *)(in_ECX + 0xc80);
    }
    while (puVar5 != (undefined4 *)0x0) {
      if (puVar5 == (undefined4 *)0x0) {
                    /* WARNING: Subroutine does not return */
        FUN_1001d023();
      }
      pCVar2 = (CObject *)puVar5[2];
      puVar5 = (undefined4 *)*puVar5;
      if ((pCVar2 != (CObject *)0x0) &&
         (iVar3 = FUN_100250d6(&PTR_s_CMFCToolBarButton_10201a94), iVar3 != 0)) {
        CObList::AddTail((CObList *)(in_ECX + 0xc74),pCVar2);
      }
    }
  }
  CObList::~CObList(local_2c);
  return 1;
}

