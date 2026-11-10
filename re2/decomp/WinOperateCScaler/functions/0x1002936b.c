// rea decompile_all
// name: FUN_1002936b
// address: 0x1002936b
// body: available
// range: 0x1002936b-0x10029412 inclusive
// non_contiguous: false
// provider: Ghidra 12.1.2 (ghidra)
// analysis_profile: b075844f08879296d957518397cd0ddda73db81dce53d00d3f0e702766fc2af6
// limitations: The session serves operations only after Ghidra reports default auto-analysis complete; incomplete analysis does not expose partial results.; The imported Program and temporary project are ephemeral and deleted on close. Annotation operations edit session database metadata; original executable bytes are never written.; Cancelling an active Ghidra request terminates its ephemeral database and discards session annotations. The selected target remains open; the next provider query imports the original artifact again.; Default-space addresses use lowercase 0x-prefixed hexadecimal; other address spaces use <percent-encoded-space>:0x<hex>.; Ghidra Listing reports a terminal call at 0x1002940e to 0x1001d023 FUN_1001d023 (external=false, thunk=false, hasNoReturn=true); fallthrough is excluded by Ghidra's flow model. This records Ghidra's FunctionManager flag, not an independent verification that the callee cannot return.; The Ghidra Program references PDB WinOperateCScaler.pdb (GUID a6737962-efea-4805-8ae6-1fc1ef126554, age (hex) 1, signature unknown, version RSDS); Ghidra reports load state unknown. Original names and types may be missing; an empty name search does not prove a procedure is absent. Use list_procedures and address-based analysis to inspect recovered functions. REA does not admit a caller-selected PDB companion.; This session uses Ghidra 12.1.2. The bridge is verified against 12.1.4; other 12.1.x builds are accepted and the observed version is reported.; Pseudocode is Ghidra decompiler output, not original source and not text-equivalent to Hopper output.; External functions and functions without an analyzable body return null; other decompiler failures remain explicit.
// pseudocode: provider-specific; not original source


undefined4 FUN_1002936b(uint param_1,HWND__ *param_2)

{
  code *pcVar1;
  CNoTrackObject *pCVar2;
  int iVar3;
  undefined4 uVar4;
  int *in_ECX;
  uint uVar5;
  undefined1 local_30 [4];
  uint local_2c;
  int local_8;
  
  uVar5 = param_1 & 0xffff;
  param_1 = param_1 >> 0x10;
  if (param_2 == (HWND__ *)0x0) {
    if (uVar5 == 0) {
      return 0;
    }
    FUN_1002673c();
    iVar3 = *in_ECX;
    local_2c = uVar5;
    guard_check_icall(uVar5,0xffffffff,local_30,0);
    (**(code **)(iVar3 + 0xc))();
    if (local_8 != 0) {
      param_1 = 0;
LAB_100293ef:
      pcVar1 = *(code **)(*in_ECX + 0xc);
      guard_check_icall(uVar5,param_1,0,0);
      uVar4 = (*pcVar1)();
      return uVar4;
    }
  }
  else {
    pCVar2 = CThreadLocalObject::GetData
                       ((CThreadLocalObject *)&DAT_1020761c,
                        (_func_CNoTrackObject_ptr *)&LAB_1001d071);
    if (pCVar2 == (CNoTrackObject *)0x0) {
                    /* WARNING: Subroutine does not return */
      FUN_1001d023();
    }
    if ((*(int *)(pCVar2 + 0x13c) != in_ECX[8]) &&
       (iVar3 = CWnd::ReflectLastMsg(param_2,(long *)0x0), iVar3 == 0)) {
      if (uVar5 == 0) {
        return 0;
      }
      goto LAB_100293ef;
    }
  }
  return 1;
}

