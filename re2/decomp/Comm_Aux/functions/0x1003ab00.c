// rea decompile_all
// name: FUN_1003ab00
// address: 0x1003ab00
// body: available
// range: 0x1003ab00-0x1003ac15 inclusive
// non_contiguous: false
// provider: Ghidra 12.1.2 (ghidra)
// analysis_profile: b075844f08879296d957518397cd0ddda73db81dce53d00d3f0e702766fc2af6
// limitations: The session serves operations only after Ghidra reports default auto-analysis complete; incomplete analysis does not expose partial results.; The imported Program and temporary project are ephemeral and deleted on close. Annotation operations edit session database metadata; original executable bytes are never written.; Cancelling an active Ghidra request terminates its ephemeral database and discards session annotations. The selected target remains open; the next provider query imports the original artifact again.; Default-space addresses use lowercase 0x-prefixed hexadecimal; other address spaces use <percent-encoded-space>:0x<hex>.; The Ghidra Program references PDB Comm_Aux.pdb (GUID ba7920cc-daa3-4461-a102-1f8f66c67a2a, age (hex) 1, signature unknown, version RSDS); Ghidra reports load state unknown. Original names and types may be missing; an empty name search does not prove a procedure is absent. Use list_procedures and address-based analysis to inspect recovered functions. REA does not admit a caller-selected PDB companion.; This session uses Ghidra 12.1.2. The bridge is verified against 12.1.4; other 12.1.x builds are accepted and the observed version is reported.; Pseudocode is Ghidra decompiler output, not original source and not text-equivalent to Hopper output.; External functions and functions without an analyzable body return null; other decompiler failures remain explicit.
// pseudocode: provider-specific; not original source


undefined4 FUN_1003ab00(uint param_1,undefined1 param_2,undefined1 param_3,uint param_4,int param_5)

{
  int iVar1;
  undefined4 uVar2;
  undefined2 uVar3;
  
  if (((ushort)param_4 == 0) || (param_5 == 0)) {
    return 0x801;
  }
  if ((ushort)DAT_1021ae40 < (ushort)param_4) {
    return 0x807;
  }
  uVar3 = CONCAT11(param_2,param_3);
  if (DAT_1021ae1c == 2) {
    iVar1 = FUN_10036740(param_1,uVar3,param_5,param_4 & 0xffff);
    uVar2 = 0;
    if (iVar1 == 0) {
      uVar2 = 0x802;
    }
    return uVar2;
  }
  if (DAT_1021ae1c != 1) {
    if (DAT_1021ae1c == 3) {
      iVar1 = FUN_100455e0(param_1,uVar3,param_4,param_5);
      uVar2 = 0;
      if (iVar1 == 0) {
        uVar2 = 0x802;
      }
      return uVar2;
    }
    return 0x804;
  }
  if (DAT_1021aff4 == 2) {
    iVar1 = FUN_10042d80(param_1 & 0xff,uVar3,param_5,param_4 & 0xffff);
    uVar2 = 0;
    if (iVar1 == 0) {
      uVar2 = 0x802;
    }
    return uVar2;
  }
  iVar1 = FUN_1003e920(param_1 & 0xff,uVar3,param_5,param_4 & 0xffff);
  uVar2 = 0;
  if (iVar1 == 0) {
    uVar2 = 0x802;
  }
  return uVar2;
}

