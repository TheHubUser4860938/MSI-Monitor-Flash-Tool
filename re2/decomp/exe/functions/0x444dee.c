// rea decompile_all
// name: FUN_00444dee
// address: 0x444dee
// body: available
// range: 0x444dee-0x444ea8 inclusive
// non_contiguous: false
// provider: Ghidra 12.1.2 (ghidra)
// analysis_profile: ac6d50be2cdf54f7005df47d1ed7e7ef55dee595681eb1b7c2e0b00d70cd697d
// limitations: The session serves operations only after Ghidra reports default auto-analysis complete; incomplete analysis does not expose partial results.; The imported Program and temporary project are ephemeral and deleted on close. Annotation operations edit session database metadata; original executable bytes are never written.; Cancelling an active Ghidra request terminates its ephemeral database and discards session annotations. The selected target remains open; the next provider query imports the original artifact again.; Default-space addresses use lowercase 0x-prefixed hexadecimal; other address spaces use <percent-encoded-space>:0x<hex>.; Ghidra Listing reports a terminal call at 0x444ea4 to 0x429127 FUN_00429127 (external=false, thunk=false, hasNoReturn=true); fallthrough is excluded by Ghidra's flow model. This records Ghidra's FunctionManager flag, not an independent verification that the callee cannot return.; The Ghidra Program references PDB ISPToolForMsi.pdb (GUID b8f2ac8f-1d6f-438d-800f-ed4a14426ac6, age (hex) 1, signature unknown, version RSDS); Ghidra reports load state unknown. Original names and types may be missing; an empty name search does not prove a procedure is absent. Use list_procedures and address-based analysis to inspect recovered functions. REA does not admit a caller-selected PDB companion.; This session uses Ghidra 12.1.2. The bridge is verified against 12.1.4; other 12.1.x builds are accepted and the observed version is reported.; Pseudocode is Ghidra decompiler output, not original source and not text-equivalent to Hopper output.; External functions and functions without an analyzable body return null; other decompiler failures remain explicit.
// pseudocode: provider-specific; not original source


void FUN_00444dee(void)

{
  undefined4 *puVar1;
  undefined4 *puVar2;
  code *pcVar3;
  int iVar4;
  IUnknown *pIVar5;
  CDataBoundProperty *in_ECX;
  CDataBoundProperty *local_8;
  
  if ((*(int *)(in_ECX + 8) != -0x7ffeffff) && (*(int *)in_ECX != 0)) {
    puVar1 = *(undefined4 **)(*(int *)in_ECX + 0x50);
    if (puVar1 == (undefined4 *)0x0) {
                    /* WARNING: Subroutine does not return */
      FUN_00429127();
    }
    puVar2 = (undefined4 *)*puVar1;
    local_8 = in_ECX;
    guard_check_icall(puVar1,&DAT_005db910,&local_8);
    iVar4 = (*(code *)*puVar2)();
    if (iVar4 < 0) {
      pIVar5 = CDataBoundProperty::GetCursor(in_ECX);
      if (pIVar5 != (IUnknown *)0x0) {
        iVar4 = **(int **)in_ECX;
        guard_check_icall(*(int **)in_ECX,*(undefined4 *)(in_ECX + 8),
                          (-(uint)(*(int *)(*(int *)(in_ECX + 0xc) + 0x90) != 0) & 0x8000) + 0xd,
                          pIVar5);
        (**(code **)(iVar4 + 0x70))();
      }
    }
    else {
      iVar4 = *(int *)local_8;
      guard_check_icall(local_8,*(undefined4 *)(in_ECX + 8),*(int *)(in_ECX + 0xc) != 0,
                        in_ECX + 0x10);
      (**(code **)(iVar4 + 0xc))();
      pcVar3 = *(code **)(*(int *)local_8 + 8);
      guard_check_icall(local_8);
      (*pcVar3)();
    }
  }
  return;
}

