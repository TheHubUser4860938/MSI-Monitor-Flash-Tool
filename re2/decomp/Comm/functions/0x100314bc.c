// rea decompile_all
// name: FUN_100314bc
// address: 0x100314bc
// body: available
// range: 0x100314bc-0x10031571 inclusive
// non_contiguous: false
// provider: Ghidra 12.1.2 (ghidra)
// analysis_profile: b075844f08879296d957518397cd0ddda73db81dce53d00d3f0e702766fc2af6
// limitations: The session serves operations only after Ghidra reports default auto-analysis complete; incomplete analysis does not expose partial results.; The imported Program and temporary project are ephemeral and deleted on close. Annotation operations edit session database metadata; original executable bytes are never written.; Cancelling an active Ghidra request terminates its ephemeral database and discards session annotations. The selected target remains open; the next provider query imports the original artifact again.; Default-space addresses use lowercase 0x-prefixed hexadecimal; other address spaces use <percent-encoded-space>:0x<hex>.; Ghidra Listing reports a terminal call at 0x1003156d to 0x1001a365 FUN_1001a365 (external=false, thunk=false, hasNoReturn=true); fallthrough is excluded by Ghidra's flow model. This records Ghidra's FunctionManager flag, not an independent verification that the callee cannot return.; The Ghidra Program references PDB Comm.pdb (GUID c3062acb-498d-45fa-a233-c8b7e401bb13, age (hex) 1, signature unknown, version RSDS); Ghidra reports load state unknown. Original names and types may be missing; an empty name search does not prove a procedure is absent. Use list_procedures and address-based analysis to inspect recovered functions. REA does not admit a caller-selected PDB companion.; This session uses Ghidra 12.1.2. The bridge is verified against 12.1.4; other 12.1.x builds are accepted and the observed version is reported.; Pseudocode is Ghidra decompiler output, not original source and not text-equivalent to Hopper output.; External functions and functions without an analyzable body return null; other decompiler failures remain explicit.
// pseudocode: provider-specific; not original source


void FUN_100314bc(int *param_1)

{
  void *pvVar1;
  code *pcVar2;
  void **ppvVar3;
  undefined4 uVar4;
  CArchive *in_ECX;
  
  if ((~*(uint *)(in_ECX + 0x18) & 1) == 0) {
    uVar4 = FUN_10003050();
                    /* WARNING: Subroutine does not return */
    FUN_1001a365(2,uVar4);
  }
  CArchive::MapObject(in_ECX,(CObject *)0x0);
  if (param_1 == (int *)0x0) {
    FUN_1001a77e(0);
  }
  else {
    ppvVar3 = CMapPtrToPtr::operator[](*(CMapPtrToPtr **)(in_ECX + 0x38),param_1);
    pvVar1 = *ppvVar3;
    if (pvVar1 == (void *)0x0) {
      pcVar2 = *(code **)*param_1;
      guard_check_icall();
      uVar4 = (*pcVar2)();
      FUN_100313f7(uVar4);
      FUN_10030d6d();
      ppvVar3 = CMapPtrToPtr::operator[](*(CMapPtrToPtr **)(in_ECX + 0x38),param_1);
      *ppvVar3 = *(void **)(in_ECX + 0x34);
      *(int *)(in_ECX + 0x34) = *(int *)(in_ECX + 0x34) + 1;
      pcVar2 = *(code **)(*param_1 + 8);
      guard_check_icall();
      (*pcVar2)();
    }
    else if (pvVar1 < (void *)0x7fff) {
      FUN_1001a77e(pvVar1);
    }
    else {
      FUN_1001a77e(0x7fff);
      FUN_1001b086(pvVar1);
    }
  }
  return;
}

