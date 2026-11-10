// rea decompile_all
// name: FUN_100f84b9
// address: 0x100f84b9
// body: available
// range: 0x100f84b9-0x100f85b5 inclusive
// non_contiguous: false
// provider: Ghidra 12.1.2 (ghidra)
// analysis_profile: b075844f08879296d957518397cd0ddda73db81dce53d00d3f0e702766fc2af6
// limitations: The session serves operations only after Ghidra reports default auto-analysis complete; incomplete analysis does not expose partial results.; The imported Program and temporary project are ephemeral and deleted on close. Annotation operations edit session database metadata; original executable bytes are never written.; Cancelling an active Ghidra request terminates its ephemeral database and discards session annotations. The selected target remains open; the next provider query imports the original artifact again.; Default-space addresses use lowercase 0x-prefixed hexadecimal; other address spaces use <percent-encoded-space>:0x<hex>.; Ghidra Listing reports a terminal call at 0x100f8559 to 0x1001d023 FUN_1001d023 (external=false, thunk=false, hasNoReturn=true); fallthrough is excluded by Ghidra's flow model. This records Ghidra's FunctionManager flag, not an independent verification that the callee cannot return.; The Ghidra Program references PDB WinOperateCScaler.pdb (GUID a6737962-efea-4805-8ae6-1fc1ef126554, age (hex) 1, signature unknown, version RSDS); Ghidra reports load state unknown. Original names and types may be missing; an empty name search does not prove a procedure is absent. Use list_procedures and address-based analysis to inspect recovered functions. REA does not admit a caller-selected PDB companion.; This session uses Ghidra 12.1.2. The bridge is verified against 12.1.4; other 12.1.x builds are accepted and the observed version is reported.; Pseudocode is Ghidra decompiler output, not original source and not text-equivalent to Hopper output.; External functions and functions without an analyzable body return null; other decompiler failures remain explicit.
// pseudocode: provider-specific; not original source


/* WARNING: Function: __EH_prolog3 replaced with injection: EH_prolog3 */
/* WARNING: Function: __EH_epilog3 replaced with injection: EH_epilog3 */
/* WARNING: Unable to track spacebase fully for stack */

undefined1 * FUN_100f84b9(int param_1)

{
  undefined1 *puVar1;
  undefined1 *extraout_EAX;
  undefined4 *puVar2;
  undefined4 *puVar3;
  undefined4 *puVar4;
  undefined1 *puVar5;
  undefined4 uStack_28;
  undefined4 *puStack_24;
  undefined1 auStack_20 [24];
  undefined4 local_8;
  undefined4 uStack_4;
  
  uStack_4 = 0;
  puVar1 = &LAB_1019f694;
  local_8 = 0x100f84c5;
  puVar4 = (undefined4 *)auStack_20;
  if (DAT_10201778 != 0) {
    if (DAT_10201ad0 == -2) {
      if (param_1 != -1) {
        if (*(int *)(*(int *)((int)ThreadLocalStoragePointer + _tls_index * 4) + 4) < DAT_1020bd70)
        {
          puStack_24 = &DAT_1020bd70;
          puVar2 = &uStack_28;
          uStack_28 = 0x100f8515;
          FUN_10153ede();
          puVar4 = puVar2 + 1;
          if (DAT_1020bd70 == -1) {
            local_8 = 0;
            *puVar2 = 0x100f852b;
            CCriticalSection::CCriticalSection((CCriticalSection *)&DAT_1020bd50);
            *puVar2 = &LAB_101a464a;
            puVar2[-1] = 0x100f8535;
            _atexit((_func_4879 *)*puVar2);
            local_8 = 0xffffffff;
            *puVar2 = &DAT_1020bd70;
            puVar3 = puVar2 + -1;
            puVar2[-1] = 0x100f8544;
            FUN_10153e9f();
            puVar4 = (undefined4 *)((int)puVar3 + 4);
          }
        }
        *(undefined **)((int)puVar4 + -4) = &DAT_1020bd58;
        puVar1 = (undefined1 *)((int)puVar4 + -8);
        *(undefined4 *)((int)puVar4 + -8) = 0x100f8550;
        EnterCriticalSection(*(LPCRITICAL_SECTION *)((int)puVar4 + -4));
        if (DAT_1020bd28 != 0) {
                    /* WARNING: Subroutine does not return */
          *(undefined4 *)(puVar1 + -4) = 0x100f855e;
          FUN_1001d023();
        }
        *(undefined4 *)(puVar1 + -4) = 0;
        *(undefined4 *)(puVar1 + -8) = 0;
        *(undefined1 **)(puVar1 + -0xc) = &LAB_100f85b6;
        *(undefined4 *)(puVar1 + -0x10) = 0x100f856a;
        DAT_1020bd28 = __beginthread(*(_StartAddress **)(puVar1 + -0xc),*(uint *)(puVar1 + -8),
                                     *(void **)(puVar1 + -4));
        if ((DAT_1020bd28 == 0) || (DAT_1020bd28 == 0xffffffff)) {
          DAT_1020bd28 = 0;
        }
        else {
          *(undefined4 *)(puVar1 + -4) = 0xffffffff;
          *(uint *)(puVar1 + -8) = DAT_1020bd28;
          puVar5 = puVar1 + -0xc;
          *(undefined4 *)(puVar1 + -0xc) = 0x100f8582;
          SetThreadPriority(*(HANDLE *)(puVar1 + -8),*(int *)(puVar1 + -4));
          DAT_10201ad0 = param_1;
          puVar1 = puVar5;
        }
        *(undefined **)(puVar1 + -4) = &DAT_1020bd58;
        puVar4 = (undefined4 *)(puVar1 + -8);
        *(undefined4 *)(puVar1 + -8) = 0x100f859b;
        LeaveCriticalSection(*(LPCRITICAL_SECTION *)(puVar1 + -4));
        puVar1 = extraout_EAX;
      }
    }
    else {
      DAT_10201ad0 = param_1;
      puVar1 = (undefined1 *)-(uint)(param_1 != -1);
      DAT_1020bd28 = DAT_1020bd28 & (uint)puVar1;
    }
  }
  *(undefined4 *)((int)puVar4 + -4) = 0x100f85b5;
  return puVar1;
}

