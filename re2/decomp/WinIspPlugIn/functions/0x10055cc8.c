// rea decompile_all
// name: FUN_10055cc8
// address: 0x10055cc8
// body: available
// range: 0x10055cc8-0x10055e43 inclusive
// non_contiguous: false
// provider: Ghidra 12.1.2 (ghidra)
// analysis_profile: b075844f08879296d957518397cd0ddda73db81dce53d00d3f0e702766fc2af6
// limitations: The session serves operations only after Ghidra reports default auto-analysis complete; incomplete analysis does not expose partial results.; The imported Program and temporary project are ephemeral and deleted on close. Annotation operations edit session database metadata; original executable bytes are never written.; Cancelling an active Ghidra request terminates its ephemeral database and discards session annotations. The selected target remains open; the next provider query imports the original artifact again.; Default-space addresses use lowercase 0x-prefixed hexadecimal; other address spaces use <percent-encoded-space>:0x<hex>.; Ghidra Listing reports a terminal call at 0x10055dee to 0x1004a383 FUN_1004a383 (external=false, thunk=false, hasNoReturn=true); fallthrough is excluded by Ghidra's flow model. This records Ghidra's FunctionManager flag, not an independent verification that the callee cannot return.; The Ghidra Program references PDB WinIspPlugIn.pdb (GUID d9f398c7-6c98-49a8-af25-a0659d5ad2f3, age (hex) 1, signature unknown, version RSDS); Ghidra reports load state unknown. Original names and types may be missing; an empty name search does not prove a procedure is absent. Use list_procedures and address-based analysis to inspect recovered functions. REA does not admit a caller-selected PDB companion.; This session uses Ghidra 12.1.2. The bridge is verified against 12.1.4; other 12.1.x builds are accepted and the observed version is reported.; Pseudocode is Ghidra decompiler output, not original source and not text-equivalent to Hopper output.; External functions and functions without an analyzable body return null; other decompiler failures remain explicit.
// pseudocode: provider-specific; not original source


undefined4 FUN_10055cc8(ushort param_1,undefined4 param_2)

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
    uVar3 = FUN_100540e0();
  }
  else {
    iVar4 = *(int *)((int)ThreadLocalStoragePointer + _tls_index * 4);
    if ((*(int *)(iVar4 + 4) < DAT_10245270) && (FUN_1017fb14(&DAT_10245270), DAT_10245270 == -1)) {
      DAT_1024526c = GetModuleHandleW(L"user32.dll");
      FUN_1017fad5(&DAT_10245270);
    }
    if (DAT_1024526c == (HMODULE)0x0) {
                    /* WARNING: Subroutine does not return */
      FUN_1004a383();
    }
    if ((*(int *)(iVar4 + 4) < DAT_10245278) && (FUN_1017fb14(&DAT_10245278), DAT_10245278 == -1)) {
      DAT_10245274 = GetProcAddress(DAT_1024526c,"GetTouchInputInfo");
      DAT_1024527c = GetProcAddress(DAT_1024526c,"CloseTouchInputHandle");
      FUN_1017fad5(&DAT_10245278);
    }
    if (((DAT_10245274 != (FARPROC)0x0) && (DAT_1024527c != (FARPROC)0x0)) &&
       (_Memory = (void *)FUN_100491e5(uVar5 * 0x28), pFVar2 = DAT_10245274, _Memory != (void *)0x0)
       ) {
      guard_check_icall(param_2,uVar5,_Memory,0x28);
      iVar4 = (*pFVar2)();
      if (iVar4 != 0) {
        pcVar1 = *(code **)(*in_ECX + 0x128);
        guard_check_icall(uVar5,_Memory);
        iVar4 = (*pcVar1)();
        FID_conflict__free(_Memory);
        pFVar2 = DAT_1024527c;
        guard_check_icall(param_2);
        (*pFVar2)();
        if (iVar4 != 0) {
          return 0;
        }
      }
    }
    uVar3 = FUN_100540e0();
  }
  return uVar3;
}

