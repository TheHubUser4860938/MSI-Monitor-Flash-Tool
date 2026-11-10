// rea decompile_all
// name: FUN_004059b0
// address: 0x4059b0
// body: available
// range: 0x4059b0-0x4059fd inclusive
// non_contiguous: false
// provider: Ghidra 12.1.2 (ghidra)
// analysis_profile: ac6d50be2cdf54f7005df47d1ed7e7ef55dee595681eb1b7c2e0b00d70cd697d
// limitations: The session serves operations only after Ghidra reports default auto-analysis complete; incomplete analysis does not expose partial results.; The imported Program and temporary project are ephemeral and deleted on close. Annotation operations edit session database metadata; original executable bytes are never written.; Cancelling an active Ghidra request terminates its ephemeral database and discards session annotations. The selected target remains open; the next provider query imports the original artifact again.; Default-space addresses use lowercase 0x-prefixed hexadecimal; other address spaces use <percent-encoded-space>:0x<hex>.; The Ghidra Program references PDB ISPToolForMsi.pdb (GUID b8f2ac8f-1d6f-438d-800f-ed4a14426ac6, age (hex) 1, signature unknown, version RSDS); Ghidra reports load state unknown. Original names and types may be missing; an empty name search does not prove a procedure is absent. Use list_procedures and address-based analysis to inspect recovered functions. REA does not admit a caller-selected PDB companion.; This session uses Ghidra 12.1.2. The bridge is verified against 12.1.4; other 12.1.x builds are accepted and the observed version is reported.; Pseudocode is Ghidra decompiler output, not original source and not text-equivalent to Hopper output.; External functions and functions without an analyzable body return null; other decompiler failures remain explicit.
// pseudocode: provider-specific; not original source


void FUN_004059b0(byte param_1)

{
  int *piVar1;
  int iVar2;
  byte *pbVar3;
  uint uVar4;
  undefined1 *in_ECX;
  
  piVar1 = *(int **)(in_ECX + 4);
  if (piVar1 == (int *)0x0) goto LAB_004059f4;
  if (*(int *)piVar1[8] == 0) {
LAB_004059e5:
    uVar4 = (**(code **)(*piVar1 + 0xc))(param_1);
  }
  else {
    iVar2 = *(int *)piVar1[0xc];
    if (iVar2 < 1) goto LAB_004059e5;
    *(int *)piVar1[0xc] = iVar2 + -1;
    pbVar3 = *(byte **)piVar1[8];
    *(byte **)piVar1[8] = pbVar3 + 1;
    *pbVar3 = param_1;
    uVar4 = (uint)param_1;
  }
  if (uVar4 != 0xffffffff) {
    return;
  }
LAB_004059f4:
  *in_ECX = 1;
  return;
}

