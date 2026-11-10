// rea decompile_all
// name: FUN_100101e0
// address: 0x100101e0
// body: available
// range: 0x100101e0-0x10010252 inclusive
// non_contiguous: false
// provider: Ghidra 12.1.2 (ghidra)
// analysis_profile: b075844f08879296d957518397cd0ddda73db81dce53d00d3f0e702766fc2af6
// limitations: The session serves operations only after Ghidra reports default auto-analysis complete; incomplete analysis does not expose partial results.; The imported Program and temporary project are ephemeral and deleted on close. Annotation operations edit session database metadata; original executable bytes are never written.; Cancelling an active Ghidra request terminates its ephemeral database and discards session annotations. The selected target remains open; the next provider query imports the original artifact again.; Default-space addresses use lowercase 0x-prefixed hexadecimal; other address spaces use <percent-encoded-space>:0x<hex>.; The Ghidra Program references PDB WinOperateCScaler.pdb (GUID a6737962-efea-4805-8ae6-1fc1ef126554, age (hex) 1, signature unknown, version RSDS); Ghidra reports load state unknown. Original names and types may be missing; an empty name search does not prove a procedure is absent. Use list_procedures and address-based analysis to inspect recovered functions. REA does not admit a caller-selected PDB companion.; This session uses Ghidra 12.1.2. The bridge is verified against 12.1.4; other 12.1.x builds are accepted and the observed version is reported.; Pseudocode is Ghidra decompiler output, not original source and not text-equivalent to Hopper output.; External functions and functions without an analyzable body return null; other decompiler failures remain explicit.
// pseudocode: provider-specific; not original source


int FUN_100101e0(void *param_1,uint param_2,size_t param_3)

{
  uint uVar1;
  undefined4 *puVar2;
  void *pvVar3;
  char *pcVar4;
  undefined4 *in_ECX;
  char *pcVar5;
  
  uVar1 = in_ECX[4];
  if (uVar1 != 0) {
    if (uVar1 <= param_2) {
      param_2 = uVar1 - 1;
    }
    puVar2 = in_ECX;
    if (0xf < (uint)in_ECX[5]) {
      puVar2 = (undefined4 *)*in_ECX;
    }
    pcVar5 = (char *)((int)puVar2 + param_2);
    while( true ) {
      if ((param_3 == 0) || (pvVar3 = _memchr(param_1,(int)*pcVar5,param_3), pvVar3 == (void *)0x0))
      {
        if (0xf < (uint)in_ECX[5]) {
          in_ECX = (undefined4 *)*in_ECX;
        }
        return (int)pcVar5 - (int)in_ECX;
      }
      pcVar4 = (char *)FUN_1000f1d0();
      if (pcVar5 == pcVar4) break;
      pcVar5 = pcVar5 + -1;
    }
  }
  return -1;
}

