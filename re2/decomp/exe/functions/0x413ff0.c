// rea decompile_all
// name: FUN_00413ff0
// address: 0x413ff0
// body: available
// range: 0x413ff0-0x41411d inclusive
// non_contiguous: false
// provider: Ghidra 12.1.2 (ghidra)
// analysis_profile: ac6d50be2cdf54f7005df47d1ed7e7ef55dee595681eb1b7c2e0b00d70cd697d
// limitations: The session serves operations only after Ghidra reports default auto-analysis complete; incomplete analysis does not expose partial results.; The imported Program and temporary project are ephemeral and deleted on close. Annotation operations edit session database metadata; original executable bytes are never written.; Cancelling an active Ghidra request terminates its ephemeral database and discards session annotations. The selected target remains open; the next provider query imports the original artifact again.; Default-space addresses use lowercase 0x-prefixed hexadecimal; other address spaces use <percent-encoded-space>:0x<hex>.; The Ghidra Program references PDB ISPToolForMsi.pdb (GUID b8f2ac8f-1d6f-438d-800f-ed4a14426ac6, age (hex) 1, signature unknown, version RSDS); Ghidra reports load state unknown. Original names and types may be missing; an empty name search does not prove a procedure is absent. Use list_procedures and address-based analysis to inspect recovered functions. REA does not admit a caller-selected PDB companion.; This session uses Ghidra 12.1.2. The bridge is verified against 12.1.4; other 12.1.x builds are accepted and the observed version is reported.; Pseudocode is Ghidra decompiler output, not original source and not text-equivalent to Hopper output.; External functions and functions without an analyzable body return null; other decompiler failures remain explicit.
// pseudocode: provider-specific; not original source


int FUN_00413ff0(uint *param_1,char param_2)

{
  uint uVar1;
  uint uVar2;
  uint uVar3;
  uint3 uVar5;
  uint uVar4;
  
  uVar4 = *param_1;
  uVar5 = (uint3)(uVar4 >> 8);
  if ((((0x2f < uVar4) && (uVar4 < 0x3a)) || (uVar4 < 10)) &&
     (((((uVar1 = param_1[1], 0x2f < uVar1 && (uVar1 < 0x3a)) || (uVar1 < 10)) &&
       (((uVar2 = param_1[2], 0x2f < uVar2 && (uVar2 < 0x3a)) || (uVar2 < 10)))) &&
      (((uVar3 = param_1[3], 0x2f < uVar3 && (uVar3 < 0x3a)) || (uVar3 < 10)))))) {
    if (param_2 == '\x02') {
      if ((((0x2f < uVar4) && (uVar4 < 0x3a)) && (0x2f < uVar1)) && (uVar1 < 0x3a)) {
        param_1[2] = 0;
        *param_1 = uVar4 - 0x30;
        uVar4 = uVar1 - 0x30;
        param_1[1] = uVar4;
        param_1[3] = 0;
      }
    }
    else if (param_2 == '\x03') {
      if ((((0x2f < uVar4) && (uVar4 < 0x3a)) &&
          ((0x2f < uVar1 && ((uVar1 < 0x3a && (0x2f < uVar2)))))) && (uVar2 < 0x3a)) {
        param_1[3] = 0;
        *param_1 = uVar4 - 0x30;
        param_1[1] = uVar1 - 0x30;
        param_1[2] = uVar2 - 0x30;
        return CONCAT31((int3)(uVar2 - 0x30 >> 8),1);
      }
    }
    else if (((param_2 == '\x04') && (0x2f < uVar4)) &&
            ((((uVar4 < 0x3a && ((0x2f < uVar1 && (uVar1 < 0x3a)))) && (0x2f < uVar2)) &&
             (((uVar2 < 0x3a && (0x2f < uVar3)) && (uVar3 < 0x3a)))))) {
      *param_1 = *param_1 - 0x30;
      param_1[1] = param_1[1] - 0x30;
      param_1[2] = param_1[2] - 0x30;
      param_1[3] = param_1[3] - 0x30;
      return CONCAT31(uVar5,1);
    }
    return CONCAT31((int3)(uVar4 >> 8),1);
  }
  return (uint)uVar5 << 8;
}

