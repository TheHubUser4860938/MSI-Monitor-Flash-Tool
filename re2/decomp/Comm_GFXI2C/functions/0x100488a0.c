// rea decompile_all
// name: __except_handler4
// address: 0x100488a0
// body: available
// range: 0x100488a0-0x10048a2b inclusive
// non_contiguous: false
// provider: Ghidra 12.1.2 (ghidra)
// analysis_profile: b075844f08879296d957518397cd0ddda73db81dce53d00d3f0e702766fc2af6
// limitations: The session serves operations only after Ghidra reports default auto-analysis complete; incomplete analysis does not expose partial results.; The imported Program and temporary project are ephemeral and deleted on close. Annotation operations edit session database metadata; original executable bytes are never written.; Cancelling an active Ghidra request terminates its ephemeral database and discards session annotations. The selected target remains open; the next provider query imports the original artifact again.; Default-space addresses use lowercase 0x-prefixed hexadecimal; other address spaces use <percent-encoded-space>:0x<hex>.; The Ghidra Program references PDB Comm_GFXI2C.pdb (GUID d304cc6d-b3ee-4851-b468-0ab5e385ca92, age (hex) 1, signature unknown, version RSDS); Ghidra reports load state unknown. Original names and types may be missing; an empty name search does not prove a procedure is absent. Use list_procedures and address-based analysis to inspect recovered functions. REA does not admit a caller-selected PDB companion.; This session uses Ghidra 12.1.2. The bridge is verified against 12.1.4; other 12.1.x builds are accepted and the observed version is reported.; Pseudocode is Ghidra decompiler output, not original source and not text-equivalent to Hopper output.; External functions and functions without an analyzable body return null; other decompiler failures remain explicit.
// pseudocode: provider-specific; not original source


/* Library Function - Single Match
    __except_handler4
   
   Library: Visual Studio 2008 Release */

undefined4 __cdecl __except_handler4(int *param_1,PVOID param_2,undefined4 param_3)

{
  int iVar1;
  int iVar2;
  BOOL BVar3;
  PVOID pvVar4;
  int *piVar5;
  int *local_1c;
  undefined4 local_18;
  uint *local_14;
  undefined4 local_10;
  PVOID local_c;
  char local_5;
  
  piVar5 = (int *)(*(uint *)((int)param_2 + 8) ^ DAT_10064168);
  local_5 = '\0';
  local_10 = 1;
  iVar1 = (int)param_2 + 0x10;
  if (*piVar5 != -2) {
    __security_check_cookie(piVar5[1] + iVar1 ^ *(uint *)(*piVar5 + iVar1));
  }
  __security_check_cookie(piVar5[3] + iVar1 ^ *(uint *)(piVar5[2] + iVar1));
  pvVar4 = param_2;
  if ((*(byte *)(param_1 + 1) & 0x66) == 0) {
    *(int ***)((int)param_2 + -4) = &local_1c;
    pvVar4 = *(PVOID *)((int)param_2 + 0xc);
    local_1c = param_1;
    local_18 = param_3;
    if (pvVar4 == (PVOID)0xfffffffe) {
      return local_10;
    }
    do {
      local_14 = (uint *)(piVar5 + (int)pvVar4 * 3 + 4);
      local_c = (PVOID)*local_14;
      if ((undefined *)piVar5[(int)pvVar4 * 3 + 5] != (undefined *)0x0) {
        iVar2 = _EH4_CallFilterFunc((undefined *)piVar5[(int)pvVar4 * 3 + 5]);
        local_5 = '\x01';
        if (iVar2 < 0) {
          local_10 = 0;
          goto LAB_10048948;
        }
        if (0 < iVar2) {
          if ((*param_1 == -0x1f928c9d) &&
             (BVar3 = __IsNonwritableInCurrentImage((PBYTE)&PTR____DestructExceptionObject_1005c278)
             , BVar3 != 0)) {
            ___DestructExceptionObject(param_1);
          }
          _EH4_GlobalUnwind(param_2);
          if (*(PVOID *)((int)param_2 + 0xc) != pvVar4) {
            _EH4_LocalUnwind((int)param_2,(uint)pvVar4,iVar1,&DAT_10064168);
          }
          *(PVOID *)((int)param_2 + 0xc) = local_c;
          if (*piVar5 != -2) {
            __security_check_cookie(piVar5[1] + iVar1 ^ *(uint *)(*piVar5 + iVar1));
          }
          __security_check_cookie(piVar5[3] + iVar1 ^ *(uint *)(piVar5[2] + iVar1));
          _EH4_TransferToHandler((undefined *)local_14[2]);
          goto LAB_10048a0c;
        }
      }
      pvVar4 = local_c;
    } while (local_c != (PVOID)0xfffffffe);
    if (local_5 == '\0') {
      return local_10;
    }
  }
  else {
LAB_10048a0c:
    if (*(int *)((int)pvVar4 + 0xc) == -2) {
      return local_10;
    }
    _EH4_LocalUnwind((int)pvVar4,0xfffffffe,iVar1,&DAT_10064168);
  }
LAB_10048948:
  if (*piVar5 != -2) {
    __security_check_cookie(piVar5[1] + iVar1 ^ *(uint *)(*piVar5 + iVar1));
  }
  __security_check_cookie(piVar5[3] + iVar1 ^ *(uint *)(piVar5[2] + iVar1));
  return local_10;
}

