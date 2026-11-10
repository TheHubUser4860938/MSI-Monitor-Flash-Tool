// rea decompile_all
// name: FUN_004c92e9
// address: 0x4c92e9
// body: available
// range: 0x4c92e9-0x4c93a8 inclusive
// non_contiguous: false
// provider: Ghidra 12.1.2 (ghidra)
// analysis_profile: ac6d50be2cdf54f7005df47d1ed7e7ef55dee595681eb1b7c2e0b00d70cd697d
// limitations: The session serves operations only after Ghidra reports default auto-analysis complete; incomplete analysis does not expose partial results.; The imported Program and temporary project are ephemeral and deleted on close. Annotation operations edit session database metadata; original executable bytes are never written.; Cancelling an active Ghidra request terminates its ephemeral database and discards session annotations. The selected target remains open; the next provider query imports the original artifact again.; Default-space addresses use lowercase 0x-prefixed hexadecimal; other address spaces use <percent-encoded-space>:0x<hex>.; Ghidra Listing reports a terminal call at 0x4c93a4 to 0x429127 FUN_00429127 (external=false, thunk=false, hasNoReturn=true); fallthrough is excluded by Ghidra's flow model. This records Ghidra's FunctionManager flag, not an independent verification that the callee cannot return.; The Ghidra Program references PDB ISPToolForMsi.pdb (GUID b8f2ac8f-1d6f-438d-800f-ed4a14426ac6, age (hex) 1, signature unknown, version RSDS); Ghidra reports load state unknown. Original names and types may be missing; an empty name search does not prove a procedure is absent. Use list_procedures and address-based analysis to inspect recovered functions. REA does not admit a caller-selected PDB companion.; This session uses Ghidra 12.1.2. The bridge is verified against 12.1.4; other 12.1.x builds are accepted and the observed version is reported.; Pseudocode is Ghidra decompiler output, not original source and not text-equivalent to Hopper output.; External functions and functions without an analyzable body return null; other decompiler failures remain explicit.
// pseudocode: provider-specific; not original source


undefined4 FUN_004c92e9(CObject *param_1)

{
  code *pcVar1;
  int *piVar2;
  undefined4 *puVar3;
  __POSITION *p_Var4;
  int iVar5;
  undefined4 uVar6;
  int in_ECX;
  
  p_Var4 = CObList::Find((CObList *)(in_ECX + 4),param_1,(__POSITION *)0x0);
  uVar6 = 0;
  if (p_Var4 != (__POSITION *)0x0) {
    FUN_004d2617(p_Var4);
    uVar6 = *(undefined4 *)(param_1 + 0x10);
    pcVar1 = *(code **)(*(int *)param_1 + 4);
    guard_check_icall(1);
    (*pcVar1)();
    puVar3 = DAT_00614f3c;
    while (puVar3 != (undefined4 *)0x0) {
      if (puVar3 == (undefined4 *)0x0) {
LAB_004c93a4:
                    /* WARNING: Subroutine does not return */
        FUN_00429127();
      }
      piVar2 = (int *)puVar3[2];
      puVar3 = (undefined4 *)*puVar3;
      if (piVar2 == (int *)0x0) goto LAB_004c93a4;
      iVar5 = FUN_00451789(uVar6,0);
      if (-1 < iVar5) {
        do {
          pcVar1 = *(code **)(*piVar2 + 0x34c);
          guard_check_icall(iVar5);
          (*pcVar1)();
          iVar5 = FUN_00451789(uVar6,0);
        } while (-1 < iVar5);
        pcVar1 = *(code **)(*piVar2 + 0x20c);
        guard_check_icall();
        (*pcVar1)();
      }
    }
    uVar6 = 1;
  }
  return uVar6;
}

