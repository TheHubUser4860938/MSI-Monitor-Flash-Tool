// rea decompile_all
// name: FUN_1001ec3e
// address: 0x1001ec3e
// body: available
// range: 0x1001ec3e-0x1001edb9 inclusive
// non_contiguous: false
// provider: Ghidra 12.1.2 (ghidra)
// analysis_profile: b075844f08879296d957518397cd0ddda73db81dce53d00d3f0e702766fc2af6
// limitations: The session serves operations only after Ghidra reports default auto-analysis complete; incomplete analysis does not expose partial results.; The imported Program and temporary project are ephemeral and deleted on close. Annotation operations edit session database metadata; original executable bytes are never written.; Cancelling an active Ghidra request terminates its ephemeral database and discards session annotations. The selected target remains open; the next provider query imports the original artifact again.; Default-space addresses use lowercase 0x-prefixed hexadecimal; other address spaces use <percent-encoded-space>:0x<hex>.; Ghidra Listing reports a terminal call at 0x1001ed64 to 0x10012a3f FUN_10012a3f (external=false, thunk=false, hasNoReturn=true); fallthrough is excluded by Ghidra's flow model. This records Ghidra's FunctionManager flag, not an independent verification that the callee cannot return.; The Ghidra Program references PDB Comm.pdb (GUID c3062acb-498d-45fa-a233-c8b7e401bb13, age (hex) 1, signature unknown, version RSDS); Ghidra reports load state unknown. Original names and types may be missing; an empty name search does not prove a procedure is absent. Use list_procedures and address-based analysis to inspect recovered functions. REA does not admit a caller-selected PDB companion.; This session uses Ghidra 12.1.2. The bridge is verified against 12.1.4; other 12.1.x builds are accepted and the observed version is reported.; Pseudocode is Ghidra decompiler output, not original source and not text-equivalent to Hopper output.; External functions and functions without an analyzable body return null; other decompiler failures remain explicit.
// pseudocode: provider-specific; not original source


undefined4 FUN_1001ec3e(ushort param_1,undefined4 param_2)

{
  code *pcVar1;
  FARPROC pFVar2;
  undefined4 uVar3;
  void *_Memory;
  int iVar4;
  int *in_ECX;
  uint uVar5;
  
  uVar5 = (uint)param_1;
  if (uVar5 == 0) {
    uVar3 = FUN_1001d029();
  }
  else {
    iVar4 = *(int *)((int)ThreadLocalStoragePointer + _tls_index * 4);
    if ((*(int *)(iVar4 + 4) < DAT_101da558) && (FUN_10148cb4(&DAT_101da558), DAT_101da558 == -1)) {
      DAT_101da554 = GetModuleHandleW(L"user32.dll");
      FUN_10148c75(&DAT_101da558);
    }
    if (DAT_101da554 == (HMODULE)0x0) {
                    /* WARNING: Subroutine does not return */
      FUN_10012a3f();
    }
    if ((*(int *)(iVar4 + 4) < DAT_101da560) && (FUN_10148cb4(&DAT_101da560), DAT_101da560 == -1)) {
      DAT_101da55c = GetProcAddress(DAT_101da554,"GetTouchInputInfo");
      DAT_101da564 = GetProcAddress(DAT_101da554,"CloseTouchInputHandle");
      FUN_10148c75(&DAT_101da560);
    }
    if (((DAT_101da55c != (FARPROC)0x0) && (DAT_101da564 != (FARPROC)0x0)) &&
       (_Memory = (void *)FUN_10011fb9(uVar5 * 0x28), pFVar2 = DAT_101da55c, _Memory != (void *)0x0)
       ) {
      guard_check_icall(param_2,uVar5,_Memory,0x28);
      iVar4 = (*pFVar2)();
      if (iVar4 != 0) {
        pcVar1 = *(code **)(*in_ECX + 0x128);
        guard_check_icall(uVar5,_Memory);
        iVar4 = (*pcVar1)();
        FID_conflict__free(_Memory);
        pFVar2 = DAT_101da564;
        guard_check_icall(param_2);
        (*pFVar2)();
        if (iVar4 != 0) {
          return 0;
        }
      }
    }
    uVar3 = FUN_1001d029();
  }
  return uVar3;
}

