// rea decompile_all
// name: FUN_1001430c
// address: 0x1001430c
// body: available
// range: 0x1001430c-0x100143c1 inclusive
// non_contiguous: false
// provider: Ghidra 12.1.2 (ghidra)
// analysis_profile: b075844f08879296d957518397cd0ddda73db81dce53d00d3f0e702766fc2af6
// limitations: The session serves operations only after Ghidra reports default auto-analysis complete; incomplete analysis does not expose partial results.; The imported Program and temporary project are ephemeral and deleted on close. Annotation operations edit session database metadata; original executable bytes are never written.; Cancelling an active Ghidra request terminates its ephemeral database and discards session annotations. The selected target remains open; the next provider query imports the original artifact again.; Default-space addresses use lowercase 0x-prefixed hexadecimal; other address spaces use <percent-encoded-space>:0x<hex>.; Ghidra Listing reports a terminal call at 0x100143bd to 0x10012a3f FUN_10012a3f (external=false, thunk=false, hasNoReturn=true); fallthrough is excluded by Ghidra's flow model. This records Ghidra's FunctionManager flag, not an independent verification that the callee cannot return.; The Ghidra Program references PDB Comm.pdb (GUID c3062acb-498d-45fa-a233-c8b7e401bb13, age (hex) 1, signature unknown, version RSDS); Ghidra reports load state unknown. Original names and types may be missing; an empty name search does not prove a procedure is absent. Use list_procedures and address-based analysis to inspect recovered functions. REA does not admit a caller-selected PDB companion.; This session uses Ghidra 12.1.2. The bridge is verified against 12.1.4; other 12.1.x builds are accepted and the observed version is reported.; Pseudocode is Ghidra decompiler output, not original source and not text-equivalent to Hopper output.; External functions and functions without an analyzable body return null; other decompiler failures remain explicit.
// pseudocode: provider-specific; not original source


undefined4 FUN_1001430c(int param_1,undefined4 param_2,int *param_3,undefined4 *param_4)

{
  code *pcVar1;
  int iVar2;
  undefined4 uVar3;
  undefined4 local_10;
  LPVOID local_c [2];
  
  FUN_10018f0d(*(undefined4 *)(param_1 + -0x4c0));
  local_c[0] = (LPVOID)0x0;
  if (param_3 != (int *)0x0) {
    iVar2 = *param_3;
    guard_check_icall(param_3,0x80058000,local_c);
    iVar2 = (**(code **)(iVar2 + 0x14))();
    if (-1 < iVar2) {
      FUN_100037c0(local_c[0]);
      CoTaskMemFree(local_c[0]);
      pcVar1 = *(code **)(*(int *)(param_1 + -0x4dc) + 400);
      guard_check_icall(local_10);
      iVar2 = (*pcVar1)();
      if (param_4 != (undefined4 *)0x0) {
        if (iVar2 == 0) {
          *param_4 = 0;
        }
        else {
          uVar3 = 1;
          if (iVar2 != 1) {
            uVar3 = 2;
            if (iVar2 != 2) goto LAB_100143a2;
          }
          *param_4 = uVar3;
        }
LAB_100143a2:
        FUN_10003460();
        guard_check_icall();
        return 0;
      }
    }
  }
                    /* WARNING: Subroutine does not return */
  FUN_10012a3f();
}

