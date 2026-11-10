// rea decompile_all
// name: FUN_1003c2e0
// address: 0x1003c2e0
// body: available
// range: 0x1003c2e0-0x1003c362 inclusive
// non_contiguous: false
// provider: Ghidra 12.1.2 (ghidra)
// analysis_profile: b075844f08879296d957518397cd0ddda73db81dce53d00d3f0e702766fc2af6
// limitations: The session serves operations only after Ghidra reports default auto-analysis complete; incomplete analysis does not expose partial results.; The imported Program and temporary project are ephemeral and deleted on close. Annotation operations edit session database metadata; original executable bytes are never written.; Cancelling an active Ghidra request terminates its ephemeral database and discards session annotations. The selected target remains open; the next provider query imports the original artifact again.; Default-space addresses use lowercase 0x-prefixed hexadecimal; other address spaces use <percent-encoded-space>:0x<hex>.; The Ghidra Program references PDB Comm_Aux.pdb (GUID ba7920cc-daa3-4461-a102-1f8f66c67a2a, age (hex) 1, signature unknown, version RSDS); Ghidra reports load state unknown. Original names and types may be missing; an empty name search does not prove a procedure is absent. Use list_procedures and address-based analysis to inspect recovered functions. REA does not admit a caller-selected PDB companion.; This session uses Ghidra 12.1.2. The bridge is verified against 12.1.4; other 12.1.x builds are accepted and the observed version is reported.; Pseudocode is Ghidra decompiler output, not original source and not text-equivalent to Hopper output.; External functions and functions without an analyzable body return null; other decompiler failures remain explicit.
// pseudocode: provider-specific; not original source


int FUN_1003c2e0(undefined2 *param_1,uint param_2,undefined4 param_3)

{
  int iVar1;
  uint *puVar2;
  uint uVar3;
  
  iVar1 = 0;
  param_2 = param_2 >> 1;
  if (param_2 == 0) {
    iVar1 = -0x7ff8ffa9;
  }
  if (-1 < iVar1) {
    iVar1 = 0;
    param_2 = param_2 - 1;
    puVar2 = (uint *)FUN_10034b20(param_1,param_2,param_3,0,&stack0x00000010);
    uVar3 = ___stdio_common_vswprintf(*puVar2 | 1,puVar2[1]);
    if ((int)uVar3 < 0) {
      uVar3 = 0xffffffff;
    }
    if (((int)uVar3 < 0) || (param_2 < uVar3)) {
      iVar1 = -0x7ff8ff86;
      param_1[param_2] = 0;
    }
    else if (uVar3 == param_2) {
      param_1[param_2] = 0;
      return 0;
    }
    return iVar1;
  }
  if (param_2 != 0) {
    *param_1 = 0;
  }
  return iVar1;
}

