// rea decompile_all
// name: FUN_1000fc50
// address: 0x1000fc50
// body: available
// range: 0x1000fc50-0x1000fca8 inclusive
// non_contiguous: false
// provider: Ghidra 12.1.2 (ghidra)
// analysis_profile: b075844f08879296d957518397cd0ddda73db81dce53d00d3f0e702766fc2af6
// limitations: The session serves operations only after Ghidra reports default auto-analysis complete; incomplete analysis does not expose partial results.; The imported Program and temporary project are ephemeral and deleted on close. Annotation operations edit session database metadata; original executable bytes are never written.; Cancelling an active Ghidra request terminates its ephemeral database and discards session annotations. The selected target remains open; the next provider query imports the original artifact again.; Default-space addresses use lowercase 0x-prefixed hexadecimal; other address spaces use <percent-encoded-space>:0x<hex>.; The Ghidra Program references PDB WinOperateCScaler.pdb (GUID a6737962-efea-4805-8ae6-1fc1ef126554, age (hex) 1, signature unknown, version RSDS); Ghidra reports load state unknown. Original names and types may be missing; an empty name search does not prove a procedure is absent. Use list_procedures and address-based analysis to inspect recovered functions. REA does not admit a caller-selected PDB companion.; This session uses Ghidra 12.1.2. The bridge is verified against 12.1.4; other 12.1.x builds are accepted and the observed version is reported.; Pseudocode is Ghidra decompiler output, not original source and not text-equivalent to Hopper output.; External functions and functions without an analyzable body return null; other decompiler failures remain explicit.
// pseudocode: provider-specific; not original source


uint FUN_1000fc50(char *param_1)

{
  uint *puVar1;
  char cVar2;
  uint uVar3;
  uint uVar4;
  undefined4 *in_ECX;
  uint uVar5;
  char *pcVar6;
  
  if (*param_1 == '\0') {
    uVar5 = 0;
  }
  else {
    pcVar6 = param_1;
    do {
      cVar2 = *pcVar6;
      pcVar6 = pcVar6 + 1;
    } while (cVar2 != '\0');
    uVar5 = (int)pcVar6 - (int)(param_1 + 1);
  }
  puVar1 = in_ECX + 4;
  if (0xf < (uint)in_ECX[5]) {
    in_ECX = (undefined4 *)*in_ECX;
  }
  uVar3 = *puVar1;
  uVar4 = uVar5;
  if (uVar3 < uVar5) {
    uVar4 = uVar3;
  }
  uVar4 = FUN_1000fcb0(in_ECX,param_1,uVar4);
  if (uVar4 == 0) {
    if (uVar3 < uVar5) {
      return 0xffffffff;
    }
    uVar4 = (uint)(uVar5 < uVar3);
  }
  return uVar4;
}

