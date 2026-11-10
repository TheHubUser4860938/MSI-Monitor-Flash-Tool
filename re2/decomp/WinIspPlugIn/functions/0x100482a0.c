// rea decompile_all
// name: FUN_100482a0
// address: 0x100482a0
// body: available
// range: 0x100482a0-0x10048341 inclusive
// non_contiguous: false
// provider: Ghidra 12.1.2 (ghidra)
// analysis_profile: b075844f08879296d957518397cd0ddda73db81dce53d00d3f0e702766fc2af6
// limitations: The session serves operations only after Ghidra reports default auto-analysis complete; incomplete analysis does not expose partial results.; The imported Program and temporary project are ephemeral and deleted on close. Annotation operations edit session database metadata; original executable bytes are never written.; Cancelling an active Ghidra request terminates its ephemeral database and discards session annotations. The selected target remains open; the next provider query imports the original artifact again.; Default-space addresses use lowercase 0x-prefixed hexadecimal; other address spaces use <percent-encoded-space>:0x<hex>.; The Ghidra Program references PDB WinIspPlugIn.pdb (GUID d9f398c7-6c98-49a8-af25-a0659d5ad2f3, age (hex) 1, signature unknown, version RSDS); Ghidra reports load state unknown. Original names and types may be missing; an empty name search does not prove a procedure is absent. Use list_procedures and address-based analysis to inspect recovered functions. REA does not admit a caller-selected PDB companion.; This session uses Ghidra 12.1.2. The bridge is verified against 12.1.4; other 12.1.x builds are accepted and the observed version is reported.; Pseudocode is Ghidra decompiler output, not original source and not text-equivalent to Hopper output.; External functions and functions without an analyzable body return null; other decompiler failures remain explicit.
// pseudocode: provider-specific; not original source


void FUN_100482a0(undefined4 param_1)

{
  undefined2 *puVar1;
  undefined4 uVar2;
  int in_ECX;
  undefined4 extraout_EDX;
  undefined4 extraout_EDX_00;
  undefined **ppuVar3;
  undefined4 local_30 [5];
  uint local_1c;
  uint local_18;
  void *local_10;
  undefined1 *puStack_c;
  undefined4 local_8;
  
  puStack_c = &LAB_101c4160;
  local_10 = ExceptionList;
  local_18 = DAT_1023dfec ^ (uint)&stack0xfffffffc;
  ExceptionList = &local_10;
  *(undefined4 *)(in_ECX + 0x14) = 0;
  if (*(uint *)(in_ECX + 0x18) < 8) {
    puVar1 = (undefined2 *)(in_ECX + 4);
  }
  else {
    puVar1 = *(undefined2 **)(in_ECX + 4);
  }
  ppuVar3 = CCpTransform::vftable;
  *puVar1 = 0;
  local_8 = 0;
  uVar2 = FUN_10048c90(local_30,param_1);
  local_8 = CONCAT31(local_8._1_3_,1);
  FUN_10046260(uVar2,0,0xffffffff);
  uVar2 = extraout_EDX;
  if (7 < local_1c) {
    FUN_1000b5d0(local_30[0],local_1c + 1);
    uVar2 = extraout_EDX_00;
  }
  ExceptionList = local_10;
  __security_check_cookie(local_18 ^ (uint)&stack0xfffffffc,uVar2,ppuVar3);
  return;
}

