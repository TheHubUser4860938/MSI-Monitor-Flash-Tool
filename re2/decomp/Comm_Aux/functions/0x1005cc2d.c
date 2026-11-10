// rea decompile_all
// name: FUN_1005cc2d
// address: 0x1005cc2d
// body: available
// range: 0x1005cc2d-0x1005cce2 inclusive
// non_contiguous: false
// provider: Ghidra 12.1.2 (ghidra)
// analysis_profile: b075844f08879296d957518397cd0ddda73db81dce53d00d3f0e702766fc2af6
// limitations: The session serves operations only after Ghidra reports default auto-analysis complete; incomplete analysis does not expose partial results.; The imported Program and temporary project are ephemeral and deleted on close. Annotation operations edit session database metadata; original executable bytes are never written.; Cancelling an active Ghidra request terminates its ephemeral database and discards session annotations. The selected target remains open; the next provider query imports the original artifact again.; Default-space addresses use lowercase 0x-prefixed hexadecimal; other address spaces use <percent-encoded-space>:0x<hex>.; Ghidra Listing reports a terminal call at 0x1005ccde to 0x1004e3b5 FUN_1004e3b5 (external=false, thunk=false, hasNoReturn=true); fallthrough is excluded by Ghidra's flow model. This records Ghidra's FunctionManager flag, not an independent verification that the callee cannot return.; The Ghidra Program references PDB Comm_Aux.pdb (GUID ba7920cc-daa3-4461-a102-1f8f66c67a2a, age (hex) 1, signature unknown, version RSDS); Ghidra reports load state unknown. Original names and types may be missing; an empty name search does not prove a procedure is absent. Use list_procedures and address-based analysis to inspect recovered functions. REA does not admit a caller-selected PDB companion.; This session uses Ghidra 12.1.2. The bridge is verified against 12.1.4; other 12.1.x builds are accepted and the observed version is reported.; Pseudocode is Ghidra decompiler output, not original source and not text-equivalent to Hopper output.; External functions and functions without an analyzable body return null; other decompiler failures remain explicit.
// pseudocode: provider-specific; not original source


void FUN_1005cc2d(int *param_1)

{
  void *pvVar1;
  code *pcVar2;
  void **ppvVar3;
  undefined4 uVar4;
  CArchive *in_ECX;
  
  if ((~*(uint *)(in_ECX + 0x18) & 1) == 0) {
    uVar4 = FUN_10034ad0();
                    /* WARNING: Subroutine does not return */
    FUN_1004e3b5(2,uVar4);
  }
  CArchive::MapObject(in_ECX,(CObject *)0x0);
  if (param_1 == (int *)0x0) {
    FUN_1004da4a(0);
  }
  else {
    ppvVar3 = CMapPtrToPtr::operator[](*(CMapPtrToPtr **)(in_ECX + 0x38),param_1);
    pvVar1 = *ppvVar3;
    if (pvVar1 == (void *)0x0) {
      pcVar2 = *(code **)*param_1;
      guard_check_icall();
      uVar4 = (*pcVar2)();
      FUN_1005cb68(uVar4);
      FUN_1005c4de();
      ppvVar3 = CMapPtrToPtr::operator[](*(CMapPtrToPtr **)(in_ECX + 0x38),param_1);
      *ppvVar3 = *(void **)(in_ECX + 0x34);
      *(int *)(in_ECX + 0x34) = *(int *)(in_ECX + 0x34) + 1;
      pcVar2 = *(code **)(*param_1 + 8);
      guard_check_icall();
      (*pcVar2)();
    }
    else if (pvVar1 < (void *)0x7fff) {
      FUN_1004da4a(pvVar1);
    }
    else {
      FUN_1004da4a(0x7fff);
      FUN_1004da8f(pvVar1);
    }
  }
  return;
}

