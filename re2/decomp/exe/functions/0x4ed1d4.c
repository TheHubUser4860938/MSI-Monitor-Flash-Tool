// rea decompile_all
// name: FUN_004ed1d4
// address: 0x4ed1d4
// body: available
// range: 0x4ed1d4-0x4ed2d0 inclusive
// non_contiguous: false
// provider: Ghidra 12.1.2 (ghidra)
// analysis_profile: ac6d50be2cdf54f7005df47d1ed7e7ef55dee595681eb1b7c2e0b00d70cd697d
// limitations: The session serves operations only after Ghidra reports default auto-analysis complete; incomplete analysis does not expose partial results.; The imported Program and temporary project are ephemeral and deleted on close. Annotation operations edit session database metadata; original executable bytes are never written.; Cancelling an active Ghidra request terminates its ephemeral database and discards session annotations. The selected target remains open; the next provider query imports the original artifact again.; Default-space addresses use lowercase 0x-prefixed hexadecimal; other address spaces use <percent-encoded-space>:0x<hex>.; Ghidra Listing reports a terminal call at 0x4ed274 to 0x429127 FUN_00429127 (external=false, thunk=false, hasNoReturn=true); fallthrough is excluded by Ghidra's flow model. This records Ghidra's FunctionManager flag, not an independent verification that the callee cannot return.; The Ghidra Program references PDB ISPToolForMsi.pdb (GUID b8f2ac8f-1d6f-438d-800f-ed4a14426ac6, age (hex) 1, signature unknown, version RSDS); Ghidra reports load state unknown. Original names and types may be missing; an empty name search does not prove a procedure is absent. Use list_procedures and address-based analysis to inspect recovered functions. REA does not admit a caller-selected PDB companion.; This session uses Ghidra 12.1.2. The bridge is verified against 12.1.4; other 12.1.x builds are accepted and the observed version is reported.; Pseudocode is Ghidra decompiler output, not original source and not text-equivalent to Hopper output.; External functions and functions without an analyzable body return null; other decompiler failures remain explicit.
// pseudocode: provider-specific; not original source


/* WARNING: Function: __EH_prolog3 replaced with injection: EH_prolog3 */
/* WARNING: Function: __EH_epilog3 replaced with injection: EH_epilog3 */
/* WARNING: Unable to track spacebase fully for stack */

undefined1 * FUN_004ed1d4(int param_1)

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
  puVar1 = &LAB_005a637f;
  local_8 = 0x4ed1e0;
  puVar4 = (undefined4 *)auStack_20;
  if (DAT_0060c7fc != 0) {
    if (DAT_0060c934 == -2) {
      if (param_1 != -1) {
        if (*(int *)(*(int *)((int)ThreadLocalStoragePointer + _tls_index * 4) + 4) < DAT_00617150)
        {
          puStack_24 = &DAT_00617150;
          puVar2 = &uStack_28;
          uStack_28 = 0x4ed230;
          FUN_0055b543();
          puVar4 = puVar2 + 1;
          if (DAT_00617150 == -1) {
            local_8 = 0;
            *puVar2 = 0x4ed246;
            CCriticalSection::CCriticalSection((CCriticalSection *)&DAT_00617130);
            *puVar2 = &LAB_005ac085;
            puVar2[-1] = 0x4ed250;
            _atexit((_func_4879 *)*puVar2);
            local_8 = 0xffffffff;
            *puVar2 = &DAT_00617150;
            puVar3 = puVar2 + -1;
            puVar2[-1] = 0x4ed25f;
            FUN_0055b504();
            puVar4 = (undefined4 *)((int)puVar3 + 4);
          }
        }
        *(undefined **)((int)puVar4 + -4) = &DAT_00617138;
        puVar1 = (undefined1 *)((int)puVar4 + -8);
        *(undefined4 *)((int)puVar4 + -8) = 0x4ed26b;
        EnterCriticalSection(*(LPCRITICAL_SECTION *)((int)puVar4 + -4));
        if (DAT_00617108 != 0) {
                    /* WARNING: Subroutine does not return */
          *(undefined4 *)(puVar1 + -4) = 0x4ed279;
          FUN_00429127();
        }
        *(undefined4 *)(puVar1 + -4) = 0;
        *(undefined4 *)(puVar1 + -8) = 0;
        *(undefined1 **)(puVar1 + -0xc) = &LAB_004ed2d1;
        *(undefined4 *)(puVar1 + -0x10) = 0x4ed285;
        DAT_00617108 = __beginthread(*(_StartAddress **)(puVar1 + -0xc),*(uint *)(puVar1 + -8),
                                     *(void **)(puVar1 + -4));
        if ((DAT_00617108 == 0) || (DAT_00617108 == 0xffffffff)) {
          DAT_00617108 = 0;
        }
        else {
          *(undefined4 *)(puVar1 + -4) = 0xffffffff;
          *(uint *)(puVar1 + -8) = DAT_00617108;
          puVar5 = puVar1 + -0xc;
          *(undefined4 *)(puVar1 + -0xc) = 0x4ed29d;
          SetThreadPriority(*(HANDLE *)(puVar1 + -8),*(int *)(puVar1 + -4));
          DAT_0060c934 = param_1;
          puVar1 = puVar5;
        }
        *(undefined **)(puVar1 + -4) = &DAT_00617138;
        puVar4 = (undefined4 *)(puVar1 + -8);
        *(undefined4 *)(puVar1 + -8) = 0x4ed2b6;
        LeaveCriticalSection(*(LPCRITICAL_SECTION *)(puVar1 + -4));
        puVar1 = extraout_EAX;
      }
    }
    else {
      DAT_0060c934 = param_1;
      puVar1 = (undefined1 *)-(uint)(param_1 != -1);
      DAT_00617108 = DAT_00617108 & (uint)puVar1;
    }
  }
  *(undefined4 *)((int)puVar4 + -4) = 0x4ed2d0;
  return puVar1;
}

