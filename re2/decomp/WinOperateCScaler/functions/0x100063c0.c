// rea decompile_all
// name: FUN_100063c0
// address: 0x100063c0
// body: available
// range: 0x100063c0-0x10006879 inclusive
// non_contiguous: false
// provider: Ghidra 12.1.2 (ghidra)
// analysis_profile: b075844f08879296d957518397cd0ddda73db81dce53d00d3f0e702766fc2af6
// limitations: The session serves operations only after Ghidra reports default auto-analysis complete; incomplete analysis does not expose partial results.; The imported Program and temporary project are ephemeral and deleted on close. Annotation operations edit session database metadata; original executable bytes are never written.; Cancelling an active Ghidra request terminates its ephemeral database and discards session annotations. The selected target remains open; the next provider query imports the original artifact again.; Default-space addresses use lowercase 0x-prefixed hexadecimal; other address spaces use <percent-encoded-space>:0x<hex>.; The Ghidra Program references PDB WinOperateCScaler.pdb (GUID a6737962-efea-4805-8ae6-1fc1ef126554, age (hex) 1, signature unknown, version RSDS); Ghidra reports load state unknown. Original names and types may be missing; an empty name search does not prove a procedure is absent. Use list_procedures and address-based analysis to inspect recovered functions. REA does not admit a caller-selected PDB companion.; This session uses Ghidra 12.1.2. The bridge is verified against 12.1.4; other 12.1.x builds are accepted and the observed version is reported.; Pseudocode is Ghidra decompiler output, not original source and not text-equivalent to Hopper output.; External functions and functions without an analyzable body return null; other decompiler failures remain explicit.
// pseudocode: provider-specific; not original source


void FUN_100063c0(void)

{
  undefined4 *puVar1;
  undefined4 *in_ECX;
  void *local_10;
  undefined1 *puStack_c;
  undefined4 local_8;
  
  puStack_c = &LAB_10194cbb;
  local_10 = ExceptionList;
  ExceptionList = &local_10;
  puVar1 = in_ECX + 4;
  *in_ECX = 0;
  in_ECX[1] = 0;
  in_ECX[2] = 0;
  in_ECX[3] = 0;
  in_ECX[9] = 0xf;
  in_ECX[8] = 0;
  if (0xf < (uint)in_ECX[9]) {
    puVar1 = (undefined4 *)*puVar1;
  }
  *(undefined1 *)puVar1 = 0;
  puVar1 = in_ECX + 10;
  local_8 = 0;
  in_ECX[0xf] = 0xf;
  in_ECX[0xe] = 0;
  if (0xf < (uint)in_ECX[0xf]) {
    puVar1 = (undefined4 *)*puVar1;
  }
  *(undefined1 *)puVar1 = 0;
  FUN_10003c70(&PTR_101a6410,0);
  puVar1 = in_ECX + 0x10;
  local_8._0_1_ = 1;
  in_ECX[0x15] = 0xf;
  in_ECX[0x14] = 0;
  if (0xf < (uint)in_ECX[0x15]) {
    puVar1 = (undefined4 *)*puVar1;
  }
  *(undefined1 *)puVar1 = 0;
  FUN_10003c70(&PTR_101a6410,0);
  puVar1 = in_ECX + 0x16;
  local_8._0_1_ = 2;
  in_ECX[0x1b] = 0xf;
  in_ECX[0x1a] = 0;
  if (0xf < (uint)in_ECX[0x1b]) {
    puVar1 = (undefined4 *)*puVar1;
  }
  *(undefined1 *)puVar1 = 0;
  FUN_10003c70(&PTR_101a6410,0);
  puVar1 = in_ECX + 0x1c;
  local_8._0_1_ = 3;
  in_ECX[0x21] = 0xf;
  in_ECX[0x20] = 0;
  if (0xf < (uint)in_ECX[0x21]) {
    puVar1 = (undefined4 *)*puVar1;
  }
  *(undefined1 *)puVar1 = 0;
  FUN_10003c70(&PTR_101a6410,0);
  puVar1 = in_ECX + 0x22;
  local_8._0_1_ = 4;
  in_ECX[0x27] = 0xf;
  in_ECX[0x26] = 0;
  if (0xf < (uint)in_ECX[0x27]) {
    puVar1 = (undefined4 *)*puVar1;
  }
  *(undefined1 *)puVar1 = 0;
  FUN_10003c70(&PTR_101a6410,0);
  puVar1 = in_ECX + 0x28;
  local_8._0_1_ = 5;
  in_ECX[0x2d] = 0xf;
  in_ECX[0x2c] = 0;
  if (0xf < (uint)in_ECX[0x2d]) {
    puVar1 = (undefined4 *)*puVar1;
  }
  *(undefined1 *)puVar1 = 0;
  FUN_10003c70(&PTR_101a6410,0);
  puVar1 = in_ECX + 0x2e;
  local_8._0_1_ = 6;
  in_ECX[0x33] = 0xf;
  in_ECX[0x32] = 0;
  if (0xf < (uint)in_ECX[0x33]) {
    puVar1 = (undefined4 *)*puVar1;
  }
  *(undefined1 *)puVar1 = 0;
  FUN_10003c70(&PTR_101a6410,0);
  puVar1 = in_ECX + 0x34;
  local_8._0_1_ = 7;
  in_ECX[0x39] = 0xf;
  in_ECX[0x38] = 0;
  if (0xf < (uint)in_ECX[0x39]) {
    puVar1 = (undefined4 *)*puVar1;
  }
  *(undefined1 *)puVar1 = 0;
  FUN_10003c70(&PTR_101a6410,0);
  puVar1 = in_ECX + 0x3a;
  local_8._0_1_ = 8;
  in_ECX[0x3f] = 0xf;
  in_ECX[0x3e] = 0;
  if (0xf < (uint)in_ECX[0x3f]) {
    puVar1 = (undefined4 *)*puVar1;
  }
  *(undefined1 *)puVar1 = 0;
  FUN_10003c70(&PTR_101a6410,0);
  puVar1 = in_ECX + 0x40;
  in_ECX[0x45] = 0xf;
  in_ECX[0x44] = 0;
  if (0xf < (uint)in_ECX[0x45]) {
    puVar1 = (undefined4 *)*puVar1;
  }
  *(undefined1 *)puVar1 = 0;
  puVar1 = in_ECX + 0x46;
  in_ECX[0x4b] = 0xf;
  in_ECX[0x4a] = 0;
  if (0xf < (uint)in_ECX[0x4b]) {
    puVar1 = (undefined4 *)*puVar1;
  }
  *(undefined1 *)puVar1 = 0;
  puVar1 = in_ECX + 0x4c;
  in_ECX[0x51] = 0xf;
  in_ECX[0x50] = 0;
  if (0xf < (uint)in_ECX[0x51]) {
    puVar1 = (undefined4 *)*puVar1;
  }
  *(undefined1 *)puVar1 = 0;
  puVar1 = in_ECX + 0x52;
  in_ECX[0x57] = 0xf;
  in_ECX[0x56] = 0;
  if (0xf < (uint)in_ECX[0x57]) {
    puVar1 = (undefined4 *)*puVar1;
  }
  *(undefined1 *)puVar1 = 0;
  puVar1 = in_ECX + 0x58;
  in_ECX[0x5d] = 0xf;
  in_ECX[0x5c] = 0;
  if (0xf < (uint)in_ECX[0x5d]) {
    puVar1 = (undefined4 *)*puVar1;
  }
  *(undefined1 *)puVar1 = 0;
  puVar1 = in_ECX + 0x5e;
  in_ECX[99] = 0xf;
  in_ECX[0x62] = 0;
  if (0xf < (uint)in_ECX[99]) {
    puVar1 = (undefined4 *)*puVar1;
  }
  *(undefined1 *)puVar1 = 0;
  local_8._0_1_ = 0xf;
  FUN_10001dc0(&PTR_101a6410);
  local_8._0_1_ = 0x10;
  FUN_10001dc0(&PTR_101a6410);
  local_8._0_1_ = 0x11;
  FUN_10001dc0(&PTR_101a6410);
  puVar1 = in_ECX + 0x76;
  in_ECX[0x7b] = 0xf;
  in_ECX[0x7a] = 0;
  if (0xf < (uint)in_ECX[0x7b]) {
    puVar1 = (undefined4 *)*puVar1;
  }
  *(undefined1 *)puVar1 = 0;
  puVar1 = in_ECX + 0x7c;
  in_ECX[0x81] = 0xf;
  in_ECX[0x80] = 0;
  if (0xf < (uint)in_ECX[0x81]) {
    puVar1 = (undefined4 *)*puVar1;
  }
  *(undefined1 *)puVar1 = 0;
  puVar1 = in_ECX + 0x82;
  in_ECX[0x87] = 0xf;
  in_ECX[0x86] = 0;
  if (0xf < (uint)in_ECX[0x87]) {
    puVar1 = (undefined4 *)*puVar1;
  }
  *(undefined1 *)puVar1 = 0;
  local_8._0_1_ = 0x15;
  FUN_10001dc0(&PTR_101a6410);
  puVar1 = in_ECX + 0x8e;
  in_ECX[0x93] = 0xf;
  in_ECX[0x92] = 0;
  if (0xf < (uint)in_ECX[0x93]) {
    puVar1 = (undefined4 *)*puVar1;
  }
  *(undefined1 *)puVar1 = 0;
  local_8._0_1_ = 0x17;
  in_ECX[0x94] = 0;
  in_ECX[0x95] = 0;
  in_ECX[0x96] = 0;
  in_ECX[0x97] = 0;
  in_ECX[0x98] = 0;
  FUN_10001dc0(&PTR_101a6410);
  local_8._0_1_ = 0x18;
  FUN_10001dc0(&PTR_101a6410);
  local_8._0_1_ = 0x19;
  in_ECX[0xa5] = 0;
  in_ECX[0xa6] = 1;
  FUN_10001dc0(&PTR_101a6410);
  local_8 = CONCAT31(local_8._1_3_,0x1a);
  FUN_10001dc0(&PTR_101a6410);
  in_ECX[0xb3] = 0;
  in_ECX[0xb4] = 0;
  in_ECX[0xb5] = 2;
  in_ECX[0xb6] = 0;
  in_ECX[0xb7] = 0;
  in_ECX[0xb8] = 2;
  in_ECX[0xb9] = 4;
  *(undefined2 *)(in_ECX + 0xba) = 0;
  in_ECX[0xc0] = 0xf;
  in_ECX[0xbf] = 0;
  *(undefined1 *)(in_ECX + 0xbb) = 0;
  ExceptionList = local_10;
  return;
}

