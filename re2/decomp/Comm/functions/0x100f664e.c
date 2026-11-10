// rea decompile_all
// name: FUN_100f664e
// address: 0x100f664e
// body: available
// range: 0x100f664e-0x100f6770 inclusive
// non_contiguous: false
// provider: Ghidra 12.1.2 (ghidra)
// analysis_profile: b075844f08879296d957518397cd0ddda73db81dce53d00d3f0e702766fc2af6
// limitations: The session serves operations only after Ghidra reports default auto-analysis complete; incomplete analysis does not expose partial results.; The imported Program and temporary project are ephemeral and deleted on close. Annotation operations edit session database metadata; original executable bytes are never written.; Cancelling an active Ghidra request terminates its ephemeral database and discards session annotations. The selected target remains open; the next provider query imports the original artifact again.; Default-space addresses use lowercase 0x-prefixed hexadecimal; other address spaces use <percent-encoded-space>:0x<hex>.; Ghidra Listing reports a terminal call at 0x100f676c to 0x10012a3f FUN_10012a3f (external=false, thunk=false, hasNoReturn=true); fallthrough is excluded by Ghidra's flow model. This records Ghidra's FunctionManager flag, not an independent verification that the callee cannot return.; The Ghidra Program references PDB Comm.pdb (GUID c3062acb-498d-45fa-a233-c8b7e401bb13, age (hex) 1, signature unknown, version RSDS); Ghidra reports load state unknown. Original names and types may be missing; an empty name search does not prove a procedure is absent. Use list_procedures and address-based analysis to inspect recovered functions. REA does not admit a caller-selected PDB companion.; This session uses Ghidra 12.1.2. The bridge is verified against 12.1.4; other 12.1.x builds are accepted and the observed version is reported.; Pseudocode is Ghidra decompiler output, not original source and not text-equivalent to Hopper output.; External functions and functions without an analyzable body return null; other decompiler failures remain explicit.
// pseudocode: provider-specific; not original source


undefined4 FUN_100f664e(undefined4 param_1,int *param_2)

{
  code *pcVar1;
  ushort uVar2;
  int iVar3;
  int iVar4;
  int *in_ECX;
  undefined4 uVar5;
  
  if ((*(int *)(*(int *)((int)ThreadLocalStoragePointer + _tls_index * 4) + 4) < DAT_101dd12c) &&
     (FUN_10148cb4(&DAT_101dd12c), DAT_101dd12c == -1)) {
    uVar5 = FUN_10013071();
    FUN_10003190(uVar5);
    _atexit((_func_4879 *)&LAB_1017af72);
    FUN_10148c75(&DAT_101dd12c);
  }
  if (param_2 == (int *)0x0) {
LAB_100f676c:
                    /* WARNING: Subroutine does not return */
    FUN_10012a3f();
  }
  iVar4 = in_ECX[0xd3];
  if ((iVar4 != 0) && (*(int *)(iVar4 + 0x20) != 0)) {
    iVar3 = 0;
    if (iVar4 != 0) {
      iVar3 = *(int *)(iVar4 + 0x20);
    }
    if (*param_2 == iVar3) {
      iVar4 = param_2[1];
      if (iVar4 == 1) {
        uVar5 = 0x3ea0;
      }
      else if (iVar4 == 2) {
        uVar5 = 0x3ea1;
        uVar2 = GetAsyncKeyState(0x11);
        if ((uVar2 & 0x8000) != 0) {
          pcVar1 = *(code **)(*in_ECX + 0x340);
          guard_check_icall();
          iVar4 = (*pcVar1)();
          if (iVar4 != 0) {
            uVar5 = 0x3ea4;
          }
        }
      }
      else {
        if (iVar4 != 3) {
          return 0;
        }
        uVar5 = 0x428e;
      }
      iVar4 = FUN_10012ca3(uVar5);
      if ((iVar4 != 0) && (iVar4 = FUN_100032f0(iVar4,uVar5), iVar4 != 0)) {
        param_2[3] = DAT_101dd128;
        return 1;
      }
      goto LAB_100f676c;
    }
  }
  return 0;
}

