// rea decompile_all
// name: FUN_100454d0
// address: 0x100454d0
// body: available
// range: 0x100454d0-0x100455d5 inclusive
// non_contiguous: false
// provider: Ghidra 12.1.2 (ghidra)
// analysis_profile: b075844f08879296d957518397cd0ddda73db81dce53d00d3f0e702766fc2af6
// limitations: The session serves operations only after Ghidra reports default auto-analysis complete; incomplete analysis does not expose partial results.; The imported Program and temporary project are ephemeral and deleted on close. Annotation operations edit session database metadata; original executable bytes are never written.; Cancelling an active Ghidra request terminates its ephemeral database and discards session annotations. The selected target remains open; the next provider query imports the original artifact again.; Default-space addresses use lowercase 0x-prefixed hexadecimal; other address spaces use <percent-encoded-space>:0x<hex>.; The Ghidra Program references PDB Comm_Aux.pdb (GUID ba7920cc-daa3-4461-a102-1f8f66c67a2a, age (hex) 1, signature unknown, version RSDS); Ghidra reports load state unknown. Original names and types may be missing; an empty name search does not prove a procedure is absent. Use list_procedures and address-based analysis to inspect recovered functions. REA does not admit a caller-selected PDB companion.; This session uses Ghidra 12.1.2. The bridge is verified against 12.1.4; other 12.1.x builds are accepted and the observed version is reported.; Pseudocode is Ghidra decompiler output, not original source and not text-equivalent to Hopper output.; External functions and functions without an analyzable body return null; other decompiler failures remain explicit.
// pseudocode: provider-specific; not original source


void FUN_100454d0(undefined1 param_1,undefined4 param_2,ushort param_3,int param_4)

{
  undefined4 *in_ECX;
  undefined4 local_134;
  undefined4 local_130;
  undefined4 uStack_12c;
  undefined4 uStack_128;
  undefined4 uStack_124;
  undefined1 *local_120;
  int iStack_11c;
  undefined4 uStack_118;
  undefined4 uStack_114;
  undefined8 local_110;
  undefined1 local_108;
  undefined1 local_107;
  undefined1 local_106 [254];
  uint local_8;
  
  local_8 = DAT_10206460 ^ (uint)&stack0xfffffffc;
  local_110 = 0;
  local_108 = (undefined1)((uint)param_2 >> 8);
  local_130 = 0;
  uStack_12c = 0;
  uStack_128 = 0;
  uStack_124 = 0;
  local_107 = (undefined1)param_2;
  local_120 = (undefined1 *)0x0;
  iStack_11c = 0;
  uStack_118 = 0;
  uStack_114 = 0;
  _memset(local_106,0,0xfe);
  if (param_4 != 0) {
    FUN_10181570(local_106,param_4,param_3);
  }
  local_130 = in_ECX[1];
  local_120 = &local_108;
  iStack_11c = param_3 + 2;
  local_134 = 0x3002c;
  uStack_12c = CONCAT31(CONCAT21(uStack_12c._2_2_,param_1),1);
  uStack_128 = 0;
  uStack_124 = 0;
  uStack_118 = 0xffff;
  uStack_114 = 0;
  FUN_1000a920(*in_ECX,&local_134);
  __security_check_cookie(local_8 ^ (uint)&stack0xfffffffc);
  return;
}

