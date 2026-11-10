// rea decompile_all
// name: FUN_10002e00
// address: 0x10002e00
// body: available
// range: 0x10002e00-0x10002e71 inclusive
// non_contiguous: false
// provider: Ghidra 12.1.2 (ghidra)
// analysis_profile: b075844f08879296d957518397cd0ddda73db81dce53d00d3f0e702766fc2af6
// limitations: The session serves operations only after Ghidra reports default auto-analysis complete; incomplete analysis does not expose partial results.; The imported Program and temporary project are ephemeral and deleted on close. Annotation operations edit session database metadata; original executable bytes are never written.; Cancelling an active Ghidra request terminates its ephemeral database and discards session annotations. The selected target remains open; the next provider query imports the original artifact again.; Default-space addresses use lowercase 0x-prefixed hexadecimal; other address spaces use <percent-encoded-space>:0x<hex>.; The Ghidra Program references PDB Comm.pdb (GUID c3062acb-498d-45fa-a233-c8b7e401bb13, age (hex) 1, signature unknown, version RSDS); Ghidra reports load state unknown. Original names and types may be missing; an empty name search does not prove a procedure is absent. Use list_procedures and address-based analysis to inspect recovered functions. REA does not admit a caller-selected PDB companion.; This session uses Ghidra 12.1.2. The bridge is verified against 12.1.4; other 12.1.x builds are accepted and the observed version is reported.; Pseudocode is Ghidra decompiler output, not original source and not text-equivalent to Hopper output.; External functions and functions without an analyzable body return null; other decompiler failures remain explicit.
// pseudocode: provider-specific; not original source


undefined4 FUN_10002e00(undefined4 param_1,int param_2)

{
  int iVar1;
  int iVar2;
  int *piVar3;
  int *in_ECX;
  int iVar4;
  
  iVar4 = 0;
  if (-1 < param_2) {
    iVar4 = param_2;
  }
  iVar1 = *(int *)(*in_ECX + -0xc);
  if (iVar1 <= iVar4) {
    FUN_10002fd0(in_ECX);
    return param_1;
  }
  piVar3 = *(int **)(*in_ECX + -0x10);
  if (piVar3 != (int *)0x0) {
    iVar2 = (**(code **)(*piVar3 + 0x10))();
    if (iVar2 != 0) goto LAB_10002e54;
  }
  piVar3 = (int *)FUN_10013071();
  iVar2 = (**(code **)(*piVar3 + 0x10))();
LAB_10002e54:
  FUN_10002f50(*in_ECX + (iVar1 - iVar4) * 2,iVar4,iVar2);
  return param_1;
}

