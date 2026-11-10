// rea decompile_all
// name: FUN_1000d890
// address: 0x1000d890
// body: available
// range: 0x1000d890-0x1000da5c inclusive
// non_contiguous: false
// provider: Ghidra 12.1.2 (ghidra)
// analysis_profile: b075844f08879296d957518397cd0ddda73db81dce53d00d3f0e702766fc2af6
// limitations: The session serves operations only after Ghidra reports default auto-analysis complete; incomplete analysis does not expose partial results.; The imported Program and temporary project are ephemeral and deleted on close. Annotation operations edit session database metadata; original executable bytes are never written.; Cancelling an active Ghidra request terminates its ephemeral database and discards session annotations. The selected target remains open; the next provider query imports the original artifact again.; Default-space addresses use lowercase 0x-prefixed hexadecimal; other address spaces use <percent-encoded-space>:0x<hex>.; The Ghidra Program references PDB WinIspPlugIn.pdb (GUID d9f398c7-6c98-49a8-af25-a0659d5ad2f3, age (hex) 1, signature unknown, version RSDS); Ghidra reports load state unknown. Original names and types may be missing; an empty name search does not prove a procedure is absent. Use list_procedures and address-based analysis to inspect recovered functions. REA does not admit a caller-selected PDB companion.; This session uses Ghidra 12.1.2. The bridge is verified against 12.1.4; other 12.1.x builds are accepted and the observed version is reported.; Pseudocode is Ghidra decompiler output, not original source and not text-equivalent to Hopper output.; External functions and functions without an analyzable body return null; other decompiler failures remain explicit.
// pseudocode: provider-specific; not original source


void FUN_1000d890(void)

{
  undefined4 *puVar1;
  undefined4 *in_ECX;
  void *local_10;
  undefined1 *puStack_c;
  undefined4 local_8;
  
  local_8 = 0xffffffff;
  puStack_c = &LAB_101c1294;
  local_10 = ExceptionList;
  ExceptionList = &local_10;
  *in_ECX = 0;
  puVar1 = in_ECX + 4;
  in_ECX[9] = 7;
  in_ECX[8] = 0;
  if (7 < (uint)in_ECX[9]) {
    puVar1 = (undefined4 *)*puVar1;
  }
  *(undefined2 *)puVar1 = 0;
  FUN_10045540(&PTR_1020e6b0,0);
  puVar1 = in_ECX + 10;
  in_ECX[3] = CCpRsString::vftable;
  in_ECX[0xf] = 0xf;
  in_ECX[0xe] = 0;
  if (0xf < (uint)in_ECX[0xf]) {
    puVar1 = (undefined4 *)*puVar1;
  }
  *(undefined1 *)puVar1 = 0;
  local_8 = 0;
  in_ECX[0x11] = 2;
  puVar1 = in_ECX + 0x18;
  *(undefined2 *)(in_ECX + 0x10) = 0;
  *(undefined1 *)((int)in_ECX + 0x42) = 0;
  in_ECX[0x12] = 0;
  in_ECX[0x15] = 0;
  in_ECX[0x16] = 0;
  in_ECX[0x1d] = 7;
  in_ECX[0x1c] = 0;
  if (7 < (uint)in_ECX[0x1d]) {
    puVar1 = (undefined4 *)*puVar1;
  }
  *(undefined2 *)puVar1 = 0;
  FUN_10045540(&PTR_1020e6b0,0);
  puVar1 = in_ECX + 0x1e;
  in_ECX[0x17] = CCpRsString::vftable;
  in_ECX[0x23] = 0xf;
  in_ECX[0x22] = 0;
  if (0xf < (uint)in_ECX[0x23]) {
    puVar1 = (undefined4 *)*puVar1;
  }
  *(undefined1 *)puVar1 = 0;
  local_8._0_1_ = 1;
  puVar1 = in_ECX + 0x26;
  in_ECX[0x24] = 0;
  in_ECX[0x2b] = 7;
  in_ECX[0x2a] = 0;
  if (7 < (uint)in_ECX[0x2b]) {
    puVar1 = (undefined4 *)*puVar1;
  }
  *(undefined2 *)puVar1 = 0;
  FUN_10045540(&PTR_1020e6b0,0);
  puVar1 = in_ECX + 0x2c;
  in_ECX[0x25] = CCpRsString::vftable;
  in_ECX[0x31] = 0xf;
  in_ECX[0x30] = 0;
  if (0xf < (uint)in_ECX[0x31]) {
    puVar1 = (undefined4 *)*puVar1;
  }
  *(undefined1 *)puVar1 = 0;
  local_8 = CONCAT31(local_8._1_3_,2);
  in_ECX[0x38] = 7;
  in_ECX[0x37] = 0;
  *(undefined2 *)(in_ECX + 0x33) = 0;
  FUN_10045540(&PTR_1020e6b0,0);
  in_ECX[0x32] = CCpRsString::vftable;
  in_ECX[0x3e] = 0xf;
  in_ECX[0x3d] = 0;
  *(undefined1 *)(in_ECX + 0x39) = 0;
  *(undefined8 *)(in_ECX + 1) = 0;
  in_ECX[0x13] = 0;
  in_ECX[0x14] = 0;
  ExceptionList = local_10;
  return;
}

