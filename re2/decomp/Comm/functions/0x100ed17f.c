// rea decompile_all
// name: FUN_100ed17f
// address: 0x100ed17f
// body: available
// range: 0x100ed17f-0x100ed27b inclusive
// non_contiguous: false
// provider: Ghidra 12.1.2 (ghidra)
// analysis_profile: b075844f08879296d957518397cd0ddda73db81dce53d00d3f0e702766fc2af6
// limitations: The session serves operations only after Ghidra reports default auto-analysis complete; incomplete analysis does not expose partial results.; The imported Program and temporary project are ephemeral and deleted on close. Annotation operations edit session database metadata; original executable bytes are never written.; Cancelling an active Ghidra request terminates its ephemeral database and discards session annotations. The selected target remains open; the next provider query imports the original artifact again.; Default-space addresses use lowercase 0x-prefixed hexadecimal; other address spaces use <percent-encoded-space>:0x<hex>.; Ghidra Listing reports a terminal call at 0x100ed21f to 0x10012a3f FUN_10012a3f (external=false, thunk=false, hasNoReturn=true); fallthrough is excluded by Ghidra's flow model. This records Ghidra's FunctionManager flag, not an independent verification that the callee cannot return.; The Ghidra Program references PDB Comm.pdb (GUID c3062acb-498d-45fa-a233-c8b7e401bb13, age (hex) 1, signature unknown, version RSDS); Ghidra reports load state unknown. Original names and types may be missing; an empty name search does not prove a procedure is absent. Use list_procedures and address-based analysis to inspect recovered functions. REA does not admit a caller-selected PDB companion.; This session uses Ghidra 12.1.2. The bridge is verified against 12.1.4; other 12.1.x builds are accepted and the observed version is reported.; Pseudocode is Ghidra decompiler output, not original source and not text-equivalent to Hopper output.; External functions and functions without an analyzable body return null; other decompiler failures remain explicit.
// pseudocode: provider-specific; not original source


/* WARNING: Function: __EH_prolog3 replaced with injection: EH_prolog3 */
/* WARNING: Function: __EH_epilog3 replaced with injection: EH_epilog3 */
/* WARNING: Unable to track spacebase fully for stack */

undefined1 * FUN_100ed17f(int param_1)

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
  puVar1 = &LAB_101770d9;
  local_8 = 0x100ed18b;
  puVar4 = (undefined4 *)auStack_20;
  if (DAT_101d3770 != 0) {
    if (DAT_101d3ac8 == -2) {
      if (param_1 != -1) {
        if (*(int *)(*(int *)((int)ThreadLocalStoragePointer + _tls_index * 4) + 4) < DAT_101dd010)
        {
          puStack_24 = &DAT_101dd010;
          puVar2 = &uStack_28;
          uStack_28 = 0x100ed1db;
          FUN_10148cb4();
          puVar4 = puVar2 + 1;
          if (DAT_101dd010 == -1) {
            local_8 = 0;
            *puVar2 = 0x100ed1f1;
            CCriticalSection::CCriticalSection((CCriticalSection *)&DAT_101dcff0);
            *puVar2 = &LAB_1017af5a;
            puVar2[-1] = 0x100ed1fb;
            _atexit((_func_4879 *)*puVar2);
            local_8 = 0xffffffff;
            *puVar2 = &DAT_101dd010;
            puVar3 = puVar2 + -1;
            puVar2[-1] = 0x100ed20a;
            FUN_10148c75();
            puVar4 = (undefined4 *)((int)puVar3 + 4);
          }
        }
        *(undefined **)((int)puVar4 + -4) = &DAT_101dcff8;
        puVar1 = (undefined1 *)((int)puVar4 + -8);
        *(undefined4 *)((int)puVar4 + -8) = 0x100ed216;
        EnterCriticalSection(*(LPCRITICAL_SECTION *)((int)puVar4 + -4));
        if (DAT_101dcfc8 != 0) {
                    /* WARNING: Subroutine does not return */
          *(undefined4 *)(puVar1 + -4) = 0x100ed224;
          FUN_10012a3f();
        }
        *(undefined4 *)(puVar1 + -4) = 0;
        *(undefined4 *)(puVar1 + -8) = 0;
        *(undefined1 **)(puVar1 + -0xc) = &LAB_100ed27c;
        *(undefined4 *)(puVar1 + -0x10) = 0x100ed230;
        DAT_101dcfc8 = __beginthread(*(_StartAddress **)(puVar1 + -0xc),*(uint *)(puVar1 + -8),
                                     *(void **)(puVar1 + -4));
        if ((DAT_101dcfc8 == 0) || (DAT_101dcfc8 == 0xffffffff)) {
          DAT_101dcfc8 = 0;
        }
        else {
          *(undefined4 *)(puVar1 + -4) = 0xffffffff;
          *(uint *)(puVar1 + -8) = DAT_101dcfc8;
          puVar5 = puVar1 + -0xc;
          *(undefined4 *)(puVar1 + -0xc) = 0x100ed248;
          SetThreadPriority(*(HANDLE *)(puVar1 + -8),*(int *)(puVar1 + -4));
          DAT_101d3ac8 = param_1;
          puVar1 = puVar5;
        }
        *(undefined **)(puVar1 + -4) = &DAT_101dcff8;
        puVar4 = (undefined4 *)(puVar1 + -8);
        *(undefined4 *)(puVar1 + -8) = 0x100ed261;
        LeaveCriticalSection(*(LPCRITICAL_SECTION *)(puVar1 + -4));
        puVar1 = extraout_EAX;
      }
    }
    else {
      DAT_101d3ac8 = param_1;
      puVar1 = (undefined1 *)-(uint)(param_1 != -1);
      DAT_101dcfc8 = DAT_101dcfc8 & (uint)puVar1;
    }
  }
  *(undefined4 *)((int)puVar4 + -4) = 0x100ed27b;
  return puVar1;
}

