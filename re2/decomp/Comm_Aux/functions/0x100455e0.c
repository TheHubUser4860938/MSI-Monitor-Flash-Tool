// rea decompile_all
// name: FUN_100455e0
// address: 0x100455e0
// body: available
// range: 0x100455e0-0x100456be inclusive
// non_contiguous: false
// provider: Ghidra 12.1.2 (ghidra)
// analysis_profile: b075844f08879296d957518397cd0ddda73db81dce53d00d3f0e702766fc2af6
// limitations: The session serves operations only after Ghidra reports default auto-analysis complete; incomplete analysis does not expose partial results.; The imported Program and temporary project are ephemeral and deleted on close. Annotation operations edit session database metadata; original executable bytes are never written.; Cancelling an active Ghidra request terminates its ephemeral database and discards session annotations. The selected target remains open; the next provider query imports the original artifact again.; Default-space addresses use lowercase 0x-prefixed hexadecimal; other address spaces use <percent-encoded-space>:0x<hex>.; The Ghidra Program references PDB Comm_Aux.pdb (GUID ba7920cc-daa3-4461-a102-1f8f66c67a2a, age (hex) 1, signature unknown, version RSDS); Ghidra reports load state unknown. Original names and types may be missing; an empty name search does not prove a procedure is absent. Use list_procedures and address-based analysis to inspect recovered functions. REA does not admit a caller-selected PDB companion.; This session uses Ghidra 12.1.2. The bridge is verified against 12.1.4; other 12.1.x builds are accepted and the observed version is reported.; Pseudocode is Ghidra decompiler output, not original source and not text-equivalent to Hopper output.; External functions and functions without an analyzable body return null; other decompiler failures remain explicit.
// pseudocode: provider-specific; not original source


bool FUN_100455e0(undefined1 param_1,undefined4 param_2,ushort param_3,undefined4 param_4)

{
  uint uVar1;
  int iVar2;
  undefined4 *in_ECX;
  undefined1 uVar3;
  undefined4 local_30;
  undefined4 local_2c;
  undefined4 uStack_28;
  undefined4 uStack_24;
  undefined4 uStack_20;
  undefined4 *local_1c;
  uint uStack_18;
  undefined4 uStack_14;
  undefined4 uStack_10;
  undefined8 local_c;
  
  uVar1 = (uint)param_2 >> 8;
  local_2c = in_ECX[1];
  local_1c = &param_2;
  local_c = 0;
  uVar3 = (undefined1)param_2;
  param_2._0_2_ = CONCAT11(uVar3,(char)uVar1);
  local_30 = 0x3002c;
  uStack_28 = (uint)CONCAT11(param_1,1);
  uStack_24 = 0;
  uStack_20 = 0;
  uStack_18 = 2;
  uStack_14 = 0xffff;
  uStack_10 = 0;
  iVar2 = FUN_1000a920(*in_ECX,&local_30);
  if (iVar2 != 0) {
    return false;
  }
  local_2c = in_ECX[1];
  local_1c = (undefined4 *)param_4;
  uStack_18 = (uint)param_3;
  local_30 = 0x3002c;
  uStack_28 = CONCAT22(uStack_28._2_2_,CONCAT11(param_1,1)) | 0x100;
  uStack_24 = 0;
  uStack_20 = 0;
  uStack_14 = 0xffff;
  uStack_10 = 0;
  iVar2 = FUN_1000a7c0(*in_ECX,&local_30);
  return iVar2 == 0;
}

