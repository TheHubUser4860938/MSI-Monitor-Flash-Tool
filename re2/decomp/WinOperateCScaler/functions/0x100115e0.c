// rea decompile_all
// name: FUN_100115e0
// address: 0x100115e0
// body: available
// range: 0x100115e0-0x1001164f inclusive
// non_contiguous: false
// provider: Ghidra 12.1.2 (ghidra)
// analysis_profile: b075844f08879296d957518397cd0ddda73db81dce53d00d3f0e702766fc2af6
// limitations: The session serves operations only after Ghidra reports default auto-analysis complete; incomplete analysis does not expose partial results.; The imported Program and temporary project are ephemeral and deleted on close. Annotation operations edit session database metadata; original executable bytes are never written.; Cancelling an active Ghidra request terminates its ephemeral database and discards session annotations. The selected target remains open; the next provider query imports the original artifact again.; Default-space addresses use lowercase 0x-prefixed hexadecimal; other address spaces use <percent-encoded-space>:0x<hex>.; The Ghidra Program references PDB WinOperateCScaler.pdb (GUID a6737962-efea-4805-8ae6-1fc1ef126554, age (hex) 1, signature unknown, version RSDS); Ghidra reports load state unknown. Original names and types may be missing; an empty name search does not prove a procedure is absent. Use list_procedures and address-based analysis to inspect recovered functions. REA does not admit a caller-selected PDB companion.; This session uses Ghidra 12.1.2. The bridge is verified against 12.1.4; other 12.1.x builds are accepted and the observed version is reported.; Pseudocode is Ghidra decompiler output, not original source and not text-equivalent to Hopper output.; External functions and functions without an analyzable body return null; other decompiler failures remain explicit.
// pseudocode: provider-specific; not original source


uint FUN_100115e0(void)

{
  int iVar1;
  uint uVar2;
  int *in_ECX;
  byte *pbVar3;
  
  if (*(int *)in_ECX[7] == 0) goto LAB_10011627;
  iVar1 = *(int *)in_ECX[0xb];
  if (1 < iVar1) {
    *(int *)in_ECX[0xb] = iVar1 + -1;
    pbVar3 = (byte *)(*(int *)in_ECX[7] + 1);
    *(int *)in_ECX[7] = (int)pbVar3;
    goto LAB_10011603;
  }
  if (*(int *)in_ECX[7] == 0) {
LAB_10011627:
    uVar2 = (**(code **)(*in_ECX + 0x1c))();
  }
  else {
    iVar1 = *(int *)in_ECX[0xb];
    if (iVar1 < 1) goto LAB_10011627;
    *(int *)in_ECX[0xb] = iVar1 + -1;
    pbVar3 = *(byte **)in_ECX[7];
    *(byte **)in_ECX[7] = pbVar3 + 1;
    uVar2 = (uint)*pbVar3;
  }
  if (uVar2 == 0xffffffff) {
    return 0xffffffff;
  }
  pbVar3 = *(byte **)in_ECX[7];
  if ((pbVar3 == (byte *)0x0) || (*(int *)in_ECX[0xb] < 1)) {
                    /* WARNING: Could not recover jumptable at 0x1001164d. Too many branches */
                    /* WARNING: Treating indirect jump as call */
    uVar2 = (**(code **)(*in_ECX + 0x18))();
    return uVar2;
  }
LAB_10011603:
  return (uint)*pbVar3;
}

