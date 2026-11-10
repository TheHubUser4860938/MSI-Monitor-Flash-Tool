// rea decompile_all
// name: FUN_0040cea0
// address: 0x40cea0
// body: available
// range: 0x40cea0-0x40cf31 inclusive
// non_contiguous: false
// provider: Ghidra 12.1.2 (ghidra)
// analysis_profile: ac6d50be2cdf54f7005df47d1ed7e7ef55dee595681eb1b7c2e0b00d70cd697d
// limitations: The session serves operations only after Ghidra reports default auto-analysis complete; incomplete analysis does not expose partial results.; The imported Program and temporary project are ephemeral and deleted on close. Annotation operations edit session database metadata; original executable bytes are never written.; Cancelling an active Ghidra request terminates its ephemeral database and discards session annotations. The selected target remains open; the next provider query imports the original artifact again.; Default-space addresses use lowercase 0x-prefixed hexadecimal; other address spaces use <percent-encoded-space>:0x<hex>.; The Ghidra Program references PDB ISPToolForMsi.pdb (GUID b8f2ac8f-1d6f-438d-800f-ed4a14426ac6, age (hex) 1, signature unknown, version RSDS); Ghidra reports load state unknown. Original names and types may be missing; an empty name search does not prove a procedure is absent. Use list_procedures and address-based analysis to inspect recovered functions. REA does not admit a caller-selected PDB companion.; This session uses Ghidra 12.1.2. The bridge is verified against 12.1.4; other 12.1.x builds are accepted and the observed version is reported.; Pseudocode is Ghidra decompiler output, not original source and not text-equivalent to Hopper output.; External functions and functions without an analyzable body return null; other decompiler failures remain explicit.
// pseudocode: provider-specific; not original source


undefined2 FUN_0040cea0(void)

{
  int iVar1;
  short *psVar2;
  short sVar3;
  undefined2 uVar4;
  int *in_ECX;
  undefined2 *puVar5;
  
  if (*(int *)in_ECX[7] != 0) {
    iVar1 = *(int *)in_ECX[0xb];
    if (1 < iVar1) {
      *(int *)in_ECX[0xb] = iVar1 + -1;
      puVar5 = (undefined2 *)(*(int *)in_ECX[7] + 2);
      *(int *)in_ECX[7] = (int)puVar5;
      return *puVar5;
    }
    if (*(int *)in_ECX[7] != 0) {
      iVar1 = *(int *)in_ECX[0xb];
      if (0 < iVar1) {
        *(int *)in_ECX[0xb] = iVar1 + -1;
        psVar2 = *(short **)in_ECX[7];
        *(short **)in_ECX[7] = psVar2 + 1;
        sVar3 = *psVar2;
        goto LAB_0040cef3;
      }
    }
  }
  sVar3 = (**(code **)(*in_ECX + 0x1c))();
LAB_0040cef3:
  if (sVar3 == -1) {
    return 0xffff;
  }
  if ((*(undefined2 **)in_ECX[7] != (undefined2 *)0x0) && (0 < *(int *)in_ECX[0xb])) {
    return **(undefined2 **)in_ECX[7];
  }
  uVar4 = (**(code **)(*in_ECX + 0x18))();
  return uVar4;
}

