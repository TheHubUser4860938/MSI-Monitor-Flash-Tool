// rea decompile_all
// name: FUN_101232d7
// address: 0x101232d7
// body: available
// range: 0x101232d7-0x101233d3 inclusive
// non_contiguous: false
// provider: Ghidra 12.1.2 (ghidra)
// analysis_profile: b075844f08879296d957518397cd0ddda73db81dce53d00d3f0e702766fc2af6
// limitations: The session serves operations only after Ghidra reports default auto-analysis complete; incomplete analysis does not expose partial results.; The imported Program and temporary project are ephemeral and deleted on close. Annotation operations edit session database metadata; original executable bytes are never written.; Cancelling an active Ghidra request terminates its ephemeral database and discards session annotations. The selected target remains open; the next provider query imports the original artifact again.; Default-space addresses use lowercase 0x-prefixed hexadecimal; other address spaces use <percent-encoded-space>:0x<hex>.; Ghidra Listing reports a terminal call at 0x10123377 to 0x1004886a FUN_1004886a (external=false, thunk=false, hasNoReturn=true); fallthrough is excluded by Ghidra's flow model. This records Ghidra's FunctionManager flag, not an independent verification that the callee cannot return.; The Ghidra Program references PDB Comm_Aux.pdb (GUID ba7920cc-daa3-4461-a102-1f8f66c67a2a, age (hex) 1, signature unknown, version RSDS); Ghidra reports load state unknown. Original names and types may be missing; an empty name search does not prove a procedure is absent. Use list_procedures and address-based analysis to inspect recovered functions. REA does not admit a caller-selected PDB companion.; This session uses Ghidra 12.1.2. The bridge is verified against 12.1.4; other 12.1.x builds are accepted and the observed version is reported.; Pseudocode is Ghidra decompiler output, not original source and not text-equivalent to Hopper output.; External functions and functions without an analyzable body return null; other decompiler failures remain explicit.
// pseudocode: provider-specific; not original source


/* WARNING: Function: __EH_prolog3 replaced with injection: EH_prolog3 */
/* WARNING: Function: __EH_epilog3 replaced with injection: EH_epilog3 */
/* WARNING: Unable to track spacebase fully for stack */

undefined1 * FUN_101232d7(int param_1)

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
  puVar1 = &LAB_101aadc7;
  local_8 = 0x101232e3;
  puVar4 = (undefined4 *)auStack_20;
  if (DAT_10205be0 != 0) {
    if (DAT_10205f38 == -2) {
      if (param_1 != -1) {
        if (*(int *)(*(int *)((int)ThreadLocalStoragePointer + _tls_index * 4) + 4) < DAT_10210580)
        {
          puStack_24 = &DAT_10210580;
          puVar2 = &uStack_28;
          uStack_28 = 0x10123333;
          FUN_1017f1aa();
          puVar4 = puVar2 + 1;
          if (DAT_10210580 == -1) {
            local_8 = 0;
            *puVar2 = 0x10123349;
            CCriticalSection::CCriticalSection((CCriticalSection *)&DAT_10210560);
            *puVar2 = &LAB_101aeddc;
            puVar2[-1] = 0x10123353;
            _atexit((_func_4879 *)*puVar2);
            local_8 = 0xffffffff;
            *puVar2 = &DAT_10210580;
            puVar3 = puVar2 + -1;
            puVar2[-1] = 0x10123362;
            FUN_1017f16b();
            puVar4 = (undefined4 *)((int)puVar3 + 4);
          }
        }
        *(undefined **)((int)puVar4 + -4) = &DAT_10210568;
        puVar1 = (undefined1 *)((int)puVar4 + -8);
        *(undefined4 *)((int)puVar4 + -8) = 0x1012336e;
        EnterCriticalSection(*(LPCRITICAL_SECTION *)((int)puVar4 + -4));
        if (DAT_10210538 != 0) {
                    /* WARNING: Subroutine does not return */
          *(undefined4 *)(puVar1 + -4) = 0x1012337c;
          FUN_1004886a();
        }
        *(undefined4 *)(puVar1 + -4) = 0;
        *(undefined4 *)(puVar1 + -8) = 0;
        *(undefined1 **)(puVar1 + -0xc) = &LAB_101233d4;
        *(undefined4 *)(puVar1 + -0x10) = 0x10123388;
        DAT_10210538 = __beginthread(*(_StartAddress **)(puVar1 + -0xc),*(uint *)(puVar1 + -8),
                                     *(void **)(puVar1 + -4));
        if ((DAT_10210538 == 0) || (DAT_10210538 == 0xffffffff)) {
          DAT_10210538 = 0;
        }
        else {
          *(undefined4 *)(puVar1 + -4) = 0xffffffff;
          *(uint *)(puVar1 + -8) = DAT_10210538;
          puVar5 = puVar1 + -0xc;
          *(undefined4 *)(puVar1 + -0xc) = 0x101233a0;
          SetThreadPriority(*(HANDLE *)(puVar1 + -8),*(int *)(puVar1 + -4));
          DAT_10205f38 = param_1;
          puVar1 = puVar5;
        }
        *(undefined **)(puVar1 + -4) = &DAT_10210568;
        puVar4 = (undefined4 *)(puVar1 + -8);
        *(undefined4 *)(puVar1 + -8) = 0x101233b9;
        LeaveCriticalSection(*(LPCRITICAL_SECTION *)(puVar1 + -4));
        puVar1 = extraout_EAX;
      }
    }
    else {
      DAT_10205f38 = param_1;
      puVar1 = (undefined1 *)-(uint)(param_1 != -1);
      DAT_10210538 = DAT_10210538 & (uint)puVar1;
    }
  }
  *(undefined4 *)((int)puVar4 + -4) = 0x101233d3;
  return puVar1;
}

