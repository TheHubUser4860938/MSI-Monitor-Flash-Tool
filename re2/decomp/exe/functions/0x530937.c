// rea decompile_all
// name: FUN_00530937
// address: 0x530937
// body: available
// range: 0x530937-0x5309ee inclusive
// non_contiguous: false
// provider: Ghidra 12.1.2 (ghidra)
// analysis_profile: ac6d50be2cdf54f7005df47d1ed7e7ef55dee595681eb1b7c2e0b00d70cd697d
// limitations: The session serves operations only after Ghidra reports default auto-analysis complete; incomplete analysis does not expose partial results.; The imported Program and temporary project are ephemeral and deleted on close. Annotation operations edit session database metadata; original executable bytes are never written.; Cancelling an active Ghidra request terminates its ephemeral database and discards session annotations. The selected target remains open; the next provider query imports the original artifact again.; Default-space addresses use lowercase 0x-prefixed hexadecimal; other address spaces use <percent-encoded-space>:0x<hex>.; Ghidra Listing reports a terminal call at 0x5309ea to 0x429127 FUN_00429127 (external=false, thunk=false, hasNoReturn=true); fallthrough is excluded by Ghidra's flow model. This records Ghidra's FunctionManager flag, not an independent verification that the callee cannot return.; The Ghidra Program references PDB ISPToolForMsi.pdb (GUID b8f2ac8f-1d6f-438d-800f-ed4a14426ac6, age (hex) 1, signature unknown, version RSDS); Ghidra reports load state unknown. Original names and types may be missing; an empty name search does not prove a procedure is absent. Use list_procedures and address-based analysis to inspect recovered functions. REA does not admit a caller-selected PDB companion.; This session uses Ghidra 12.1.2. The bridge is verified against 12.1.4; other 12.1.x builds are accepted and the observed version is reported.; Pseudocode is Ghidra decompiler output, not original source and not text-equivalent to Hopper output.; External functions and functions without an analyzable body return null; other decompiler failures remain explicit.
// pseudocode: provider-specific; not original source


void FUN_00530937(void)

{
  code *pcVar1;
  int iVar2;
  int *piVar3;
  int iVar4;
  int in_ECX;
  
  if (*(int *)(in_ECX + 0xf4) == 0) {
    *(uint *)(in_ECX + 0x118) = *(uint *)(in_ECX + 0x118) & 0xfffffff3;
    *(undefined4 *)(in_ECX + 0xf4) = 1;
    pcVar1 = *(code **)(**(int **)(in_ECX + 0x120) + 0x16c);
    guard_check_icall();
    piVar3 = (int *)(*pcVar1)();
    iVar4 = FUN_0042bc8f();
    if (iVar4 == 0) {
                    /* WARNING: Subroutine does not return */
      FUN_00429127();
    }
    if ((piVar3 != (int *)0x0) &&
       (iVar2 = *(int *)(in_ECX + 0x120), *(int *)(iVar4 + 0x24) == iVar2)) {
      if (in_ECX == *(int *)(iVar2 + 0x140)) {
        pcVar1 = *(code **)(*piVar3 + 0x18c);
        guard_check_icall(0,*(undefined4 *)(iVar2 + 0x138),1);
        (*pcVar1)();
      }
      if (in_ECX == *(int *)(*(int *)(in_ECX + 0x120) + 0x144)) {
        pcVar1 = *(code **)(*piVar3 + 0x18c);
        guard_check_icall(0,*(undefined4 *)(*(int *)(in_ECX + 0x120) + 0x13c),0);
        (*pcVar1)();
      }
    }
    *(undefined4 *)(in_ECX + 0xf4) = 0;
  }
  return;
}

