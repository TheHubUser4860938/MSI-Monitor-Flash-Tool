// rea decompile_all
// name: FUN_10032f90
// address: 0x10032f90
// body: available
// range: 0x10032f90-0x10033572 inclusive
// non_contiguous: false
// provider: Ghidra 12.1.2 (ghidra)
// analysis_profile: b075844f08879296d957518397cd0ddda73db81dce53d00d3f0e702766fc2af6
// limitations: The session serves operations only after Ghidra reports default auto-analysis complete; incomplete analysis does not expose partial results.; The imported Program and temporary project are ephemeral and deleted on close. Annotation operations edit session database metadata; original executable bytes are never written.; Cancelling an active Ghidra request terminates its ephemeral database and discards session annotations. The selected target remains open; the next provider query imports the original artifact again.; Default-space addresses use lowercase 0x-prefixed hexadecimal; other address spaces use <percent-encoded-space>:0x<hex>.; The Ghidra Program references PDB WinIspPlugIn.pdb (GUID d9f398c7-6c98-49a8-af25-a0659d5ad2f3, age (hex) 1, signature unknown, version RSDS); Ghidra reports load state unknown. Original names and types may be missing; an empty name search does not prove a procedure is absent. Use list_procedures and address-based analysis to inspect recovered functions. REA does not admit a caller-selected PDB companion.; This session uses Ghidra 12.1.2. The bridge is verified against 12.1.4; other 12.1.x builds are accepted and the observed version is reported.; Pseudocode is Ghidra decompiler output, not original source and not text-equivalent to Hopper output.; External functions and functions without an analyzable body return null; other decompiler failures remain explicit.
// pseudocode: provider-specific; not original source


/* WARNING: Function: __alloca_probe replaced with injection: alloca_probe */

void FUN_10032f90(void)

{
  undefined4 *puVar1;
  undefined4 *in_ECX;
  int iVar2;
  undefined4 *puVar3;
  undefined1 local_2138 [5232];
  undefined4 local_cc8 [809];
  uint local_24;
  undefined1 *puStack_20;
  void *local_1c;
  undefined1 *puStack_18;
  undefined4 local_14;
  
  puStack_20 = &stack0xfffffffc;
  local_14 = 0xffffffff;
  puStack_18 = &LAB_101c2ee6;
  local_1c = ExceptionList;
  local_24 = DAT_1023dfec ^ (uint)&stack0xfffffff0;
  ExceptionList = &local_1c;
  *in_ECX = 0;
  FUN_1000b550(local_24);
  in_ECX[0x37] = 0;
  in_ECX[0x3d] = 0;
  in_ECX[0x3f] = 1;
  in_ECX[0x38] = 0;
  in_ECX[0x39] = 0;
  in_ECX[0x3e] = 0;
  in_ECX[0x55] = 1;
  *(undefined1 *)(in_ECX + 0x56) = 0x94;
  in_ECX[0x57] = 1;
  in_ECX[0x58] = 0x9c4;
  in_ECX[0x59] = 1;
  in_ECX[0x5a] = 0;
  in_ECX[0x62] = 0;
  in_ECX[0x5b] = 200;
  in_ECX[0x5c] = 0;
  in_ECX[0x5d] = 1;
  in_ECX[0x5e] = 0;
  in_ECX[0x732] = 0;
  in_ECX[0x5f] = 1000;
  in_ECX[0x65] = 1;
  in_ECX[0x4d] = 0;
  in_ECX[0x4e] = 0;
  in_ECX[0x4f] = 0;
  in_ECX[0x50] = 0;
  in_ECX[0x51] = 0;
  in_ECX[0x52] = 0;
  in_ECX[0x53] = 0;
  in_ECX[0x66] = 0;
  in_ECX[0x54] = 0;
  in_ECX[0x60] = 0;
  in_ECX[99] = 0;
  in_ECX[0x61] = 0;
  in_ECX[0x6d] = 1;
  in_ECX[0x6e] = 0;
  *(undefined2 *)(in_ECX + 0x6f) = 0;
  in_ECX[0x70] = 0;
  in_ECX[0x71] = 0;
  in_ECX[0x72] = 0;
  in_ECX[0x73] = 1000;
  in_ECX[0x74] = 0;
  local_14 = 0;
  puVar1 = (undefined4 *)in_ECX[0x76];
  for (puVar3 = (undefined4 *)in_ECX[0x75]; puVar3 != puVar1; puVar3 = puVar3 + 0xd) {
    (**(code **)*puVar3)(0);
  }
  local_14 = 0xffffffff;
  in_ECX[0x76] = in_ECX[0x75];
  puVar1 = in_ECX + 0x81;
  in_ECX[0x67] = 0;
  in_ECX[0x68] = 100;
  in_ECX[0x69] = 10;
  in_ECX[0x6a] = 0;
  in_ECX[0x78] = 0;
  in_ECX[0x79] = 1;
  in_ECX[0x7a] = 0;
  in_ECX[0x7b] = 0;
  in_ECX[0x7c] = 0;
  in_ECX[0x7d] = 0;
  *(undefined8 *)(in_ECX + 0x6b) = 0xc80000000a;
  in_ECX[0x734] = 0;
  in_ECX[0x735] = 0;
  in_ECX[0x736] = 0;
  in_ECX[0x737] = 0;
  in_ECX[0x733] = 2;
  in_ECX[0x7f] = 1;
  in_ECX[0x7e] = 0;
  in_ECX[0x85] = 0;
  if (7 < (uint)in_ECX[0x86]) {
    puVar1 = (undefined4 *)*puVar1;
  }
  *(undefined2 *)puVar1 = 0;
  in_ECX[0x8d] = 0;
  in_ECX[0x8e] = 0;
  in_ECX[0x8f] = 10;
  _wcsncpy((wchar_t *)(in_ECX + 0x90),L"dumpflash.bin",0x104);
  in_ECX[0x112] = 0;
  in_ECX[0x113] = 1;
  in_ECX[0x115] = in_ECX[0x114];
  in_ECX[0x249] = 0;
  in_ECX[0x117] = 0;
  _memset(in_ECX + 0x118,0xff,0x4c4);
  in_ECX[0x4b1] = 0;
  in_ECX[0x37f] = 0;
  _memset(in_ECX + 0x380,0xff,0x4c4);
  in_ECX[0x71e] = 200;
  in_ECX[0x71f] = 10;
  in_ECX[0x720] = 0;
  in_ECX[0x722] = 0;
  in_ECX[0x721] = 0;
  in_ECX[0x723] = 0;
  in_ECX[0x71b] = 0;
  in_ECX[0x71c] = 0;
  in_ECX[0x724] = 0;
  in_ECX[0x71d] = 8000;
  in_ECX[0x1099] = 0;
  in_ECX[0x109a] = 0;
  in_ECX[100] = 1;
  in_ECX[0x109b] = 4;
  in_ECX[0x10ab] = 0;
  in_ECX[0x10ac] = 0;
  in_ECX[0x10ad] = 0;
  in_ECX[0x10ae] = 0;
  FUN_10045540(L"1.2.3.4",7);
  in_ECX[0x10af] = 2;
  in_ECX[0x10a9] = 0;
  in_ECX[0x10aa] = 0;
  FUN_1002db10();
  puVar1 = local_cc8;
  puVar3 = in_ECX + 0x739;
  for (iVar2 = 0x328; iVar2 != 0; iVar2 = iVar2 + -1) {
    *puVar3 = *puVar1;
    puVar1 = puVar1 + 1;
    puVar3 = puVar3 + 1;
  }
  FUN_1002da70();
  FUN_10197c50(in_ECX + 0xa61,local_2138,0x146c);
  in_ECX[0x3a] = 0;
  in_ECX[0x3b] = 0;
  in_ECX[0x3c] = 0;
  in_ECX[0x10b0] = 0;
  in_ECX[0x10b1] = 0;
  in_ECX[0x10b2] = 0;
  in_ECX[0x10b3] = 1;
  in_ECX[0x10b4] = 0;
  in_ECX[0x10b5] = 0;
  in_ECX[0x10b6] = 0x1194;
  in_ECX[0x10b7] = 0x32;
  in_ECX[0x10b8] = 10;
  in_ECX[0x10b9] = 0;
  in_ECX[0x10ba] = 0;
  in_ECX[0x10bb] = 0x20;
  in_ECX[0x10bc] = 0;
  *(undefined8 *)(in_ECX + 0x10bd) = 0x400000002;
  in_ECX[0x10bf] = 0;
  ExceptionList = local_1c;
  __security_check_cookie(local_24 ^ (uint)&stack0xfffffff0);
  return;
}

