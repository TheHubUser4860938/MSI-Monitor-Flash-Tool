// rea decompile_all
// name: FUN_00430840
// address: 0x430840
// body: available
// range: 0x430840-0x4309bb inclusive
// non_contiguous: false
// provider: Ghidra 12.1.2 (ghidra)
// analysis_profile: ac6d50be2cdf54f7005df47d1ed7e7ef55dee595681eb1b7c2e0b00d70cd697d
// limitations: The session serves operations only after Ghidra reports default auto-analysis complete; incomplete analysis does not expose partial results.; The imported Program and temporary project are ephemeral and deleted on close. Annotation operations edit session database metadata; original executable bytes are never written.; Cancelling an active Ghidra request terminates its ephemeral database and discards session annotations. The selected target remains open; the next provider query imports the original artifact again.; Default-space addresses use lowercase 0x-prefixed hexadecimal; other address spaces use <percent-encoded-space>:0x<hex>.; Ghidra Listing reports a terminal call at 0x430966 to 0x429127 FUN_00429127 (external=false, thunk=false, hasNoReturn=true); fallthrough is excluded by Ghidra's flow model. This records Ghidra's FunctionManager flag, not an independent verification that the callee cannot return.; The Ghidra Program references PDB ISPToolForMsi.pdb (GUID b8f2ac8f-1d6f-438d-800f-ed4a14426ac6, age (hex) 1, signature unknown, version RSDS); Ghidra reports load state unknown. Original names and types may be missing; an empty name search does not prove a procedure is absent. Use list_procedures and address-based analysis to inspect recovered functions. REA does not admit a caller-selected PDB companion.; This session uses Ghidra 12.1.2. The bridge is verified against 12.1.4; other 12.1.x builds are accepted and the observed version is reported.; Pseudocode is Ghidra decompiler output, not original source and not text-equivalent to Hopper output.; External functions and functions without an analyzable body return null; other decompiler failures remain explicit.
// pseudocode: provider-specific; not original source


undefined4 FUN_00430840(ushort param_1,undefined4 param_2)

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
    uVar3 = FUN_0042ec70();
  }
  else {
    iVar4 = *(int *)((int)ThreadLocalStoragePointer + _tls_index * 4);
    if ((*(int *)(iVar4 + 4) < DAT_00614c9c) && (FUN_0055b543(&DAT_00614c9c), DAT_00614c9c == -1)) {
      DAT_00614c98 = GetModuleHandleW(L"user32.dll");
      FUN_0055b504(&DAT_00614c9c);
    }
    if (DAT_00614c98 == (HMODULE)0x0) {
                    /* WARNING: Subroutine does not return */
      FUN_00429127();
    }
    if ((*(int *)(iVar4 + 4) < DAT_00614ca4) && (FUN_0055b543(&DAT_00614ca4), DAT_00614ca4 == -1)) {
      DAT_00614ca0 = GetProcAddress(DAT_00614c98,"GetTouchInputInfo");
      DAT_00614ca8 = GetProcAddress(DAT_00614c98,"CloseTouchInputHandle");
      FUN_0055b504(&DAT_00614ca4);
    }
    if (((DAT_00614ca0 != (FARPROC)0x0) && (DAT_00614ca8 != (FARPROC)0x0)) &&
       (_Memory = (void *)FUN_00416444(uVar5 * 0x28), pFVar2 = DAT_00614ca0, _Memory != (void *)0x0)
       ) {
      guard_check_icall(param_2,uVar5,_Memory,0x28);
      iVar4 = (*pFVar2)();
      if (iVar4 != 0) {
        pcVar1 = *(code **)(*in_ECX + 0x128);
        guard_check_icall(uVar5,_Memory);
        iVar4 = (*pcVar1)();
        FID_conflict__free(_Memory);
        pFVar2 = DAT_00614ca8;
        guard_check_icall(param_2);
        (*pFVar2)();
        if (iVar4 != 0) {
          return 0;
        }
      }
    }
    uVar3 = FUN_0042ec70();
  }
  return uVar3;
}

