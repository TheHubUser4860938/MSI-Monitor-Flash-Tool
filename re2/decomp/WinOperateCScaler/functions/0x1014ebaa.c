// rea decompile_all
// name: FUN_1014ebaa
// address: 0x1014ebaa
// body: available
// range: 0x1014ebaa-0x1014eca4 inclusive
// non_contiguous: false
// provider: Ghidra 12.1.2 (ghidra)
// analysis_profile: b075844f08879296d957518397cd0ddda73db81dce53d00d3f0e702766fc2af6
// limitations: The session serves operations only after Ghidra reports default auto-analysis complete; incomplete analysis does not expose partial results.; The imported Program and temporary project are ephemeral and deleted on close. Annotation operations edit session database metadata; original executable bytes are never written.; Cancelling an active Ghidra request terminates its ephemeral database and discards session annotations. The selected target remains open; the next provider query imports the original artifact again.; Default-space addresses use lowercase 0x-prefixed hexadecimal; other address spaces use <percent-encoded-space>:0x<hex>.; Ghidra Listing reports a terminal call at 0x1014eca0 to 0x1001d023 FUN_1001d023 (external=false, thunk=false, hasNoReturn=true); fallthrough is excluded by Ghidra's flow model. This records Ghidra's FunctionManager flag, not an independent verification that the callee cannot return.; The Ghidra Program references PDB WinOperateCScaler.pdb (GUID a6737962-efea-4805-8ae6-1fc1ef126554, age (hex) 1, signature unknown, version RSDS); Ghidra reports load state unknown. Original names and types may be missing; an empty name search does not prove a procedure is absent. Use list_procedures and address-based analysis to inspect recovered functions. REA does not admit a caller-selected PDB companion.; This session uses Ghidra 12.1.2. The bridge is verified against 12.1.4; other 12.1.x builds are accepted and the observed version is reported.; Pseudocode is Ghidra decompiler output, not original source and not text-equivalent to Hopper output.; External functions and functions without an analyzable body return null; other decompiler failures remain explicit.
// pseudocode: provider-specific; not original source


undefined4 FUN_1014ebaa(undefined4 param_1,int *param_2,undefined4 param_3)

{
  int iVar1;
  int iVar2;
  int in_ECX;
  undefined4 uVar3;
  
  if ((*(int *)(*(int *)((int)ThreadLocalStoragePointer + _tls_index * 4) + 4) < DAT_1020c9dc) &&
     (FUN_10153ede(&DAT_1020c9dc), DAT_1020c9dc == -1)) {
    uVar3 = FUN_1001e20a();
    FUN_1001d224(uVar3);
    _atexit((_func_4879 *)&LAB_101a479d);
    FUN_10153e9f(&DAT_1020c9dc);
  }
  if (param_2 != (int *)0x0) {
    iVar2 = *(int *)(in_ECX + 0x34c);
    if ((iVar2 != 0) && (*(int *)(iVar2 + 0x20) != 0)) {
      iVar1 = 0;
      if (iVar2 != 0) {
        iVar1 = *(int *)(iVar2 + 0x20);
      }
      if (*param_2 == iVar1) {
        if (param_2[1] == 4) {
          uVar3 = 0x427c;
        }
        else if (param_2[1] == 5) {
          uVar3 = 0x427d;
        }
        else {
          if (param_2[1] != 6) {
            uVar3 = FUN_101019c2(param_1,param_2,param_3);
            return uVar3;
          }
          uVar3 = 0x4280;
        }
        iVar2 = FUN_1001de45(uVar3);
        if ((iVar2 != 0) && (iVar2 = FUN_10018c20(iVar2,uVar3), iVar2 != 0)) {
          param_2[3] = DAT_1020c9d8;
          return 1;
        }
        goto LAB_1014eca0;
      }
    }
    return 0;
  }
LAB_1014eca0:
                    /* WARNING: Subroutine does not return */
  FUN_1001d023();
}

