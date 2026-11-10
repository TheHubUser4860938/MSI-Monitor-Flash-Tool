// rea decompile_all
// name: FUN_0040e330
// address: 0x40e330
// body: available
// range: 0x40e330-0x40e4bb inclusive
// non_contiguous: false
// provider: Ghidra 12.1.2 (ghidra)
// analysis_profile: ac6d50be2cdf54f7005df47d1ed7e7ef55dee595681eb1b7c2e0b00d70cd697d
// limitations: The session serves operations only after Ghidra reports default auto-analysis complete; incomplete analysis does not expose partial results.; The imported Program and temporary project are ephemeral and deleted on close. Annotation operations edit session database metadata; original executable bytes are never written.; Cancelling an active Ghidra request terminates its ephemeral database and discards session annotations. The selected target remains open; the next provider query imports the original artifact again.; Default-space addresses use lowercase 0x-prefixed hexadecimal; other address spaces use <percent-encoded-space>:0x<hex>.; The Ghidra Program references PDB ISPToolForMsi.pdb (GUID b8f2ac8f-1d6f-438d-800f-ed4a14426ac6, age (hex) 1, signature unknown, version RSDS); Ghidra reports load state unknown. Original names and types may be missing; an empty name search does not prove a procedure is absent. Use list_procedures and address-based analysis to inspect recovered functions. REA does not admit a caller-selected PDB companion.; This session uses Ghidra 12.1.2. The bridge is verified against 12.1.4; other 12.1.x builds are accepted and the observed version is reported.; Pseudocode is Ghidra decompiler output, not original source and not text-equivalent to Hopper output.; External functions and functions without an analyzable body return null; other decompiler failures remain explicit.
// pseudocode: provider-specific; not original source


void FUN_0040e330(void)

{
  short sVar1;
  undefined2 *puVar2;
  undefined4 *puVar3;
  undefined4 *puVar4;
  undefined1 *in_ECX;
  int iVar5;
  short ****ppppsVar6;
  undefined4 extraout_ECX;
  short ****ppppsVar7;
  undefined4 local_68;
  uint local_54;
  short ***local_44 [5];
  uint local_30;
  uint local_14;
  void *local_10;
  undefined1 *puStack_c;
  undefined1 local_8;
  undefined3 uStack_7;
  
  puStack_c = &LAB_0059ca34;
  local_10 = ExceptionList;
  local_14 = DAT_0060cff4 ^ (uint)&stack0xfffffffc;
  ExceptionList = &local_10;
  *(undefined4 *)(in_ECX + 4) = 0;
  *(undefined4 *)(in_ECX + 0x20) = 7;
  *(undefined4 *)(in_ECX + 0x1c) = 0;
  if (*(uint *)(in_ECX + 0x20) < 8) {
    puVar2 = (undefined2 *)(in_ECX + 0xc);
  }
  else {
    puVar2 = *(undefined2 **)(in_ECX + 0xc);
  }
  *puVar2 = 0;
  puVar4 = (undefined4 *)(in_ECX + 0x24);
  *(undefined4 *)(in_ECX + 0x38) = 7;
  *(undefined4 *)(in_ECX + 0x34) = 0;
  puVar3 = puVar4;
  if (7 < *(uint *)(in_ECX + 0x38)) {
    puVar3 = (undefined4 *)*puVar4;
  }
  *(undefined2 *)puVar3 = 0;
  local_8 = 1;
  uStack_7 = 0;
  *in_ECX = 1;
  FUN_00408850(local_14);
  _local_8 = CONCAT31(uStack_7,2);
  ppppsVar7 = local_44;
  if (7 < local_30) {
    ppppsVar7 = (short ****)local_44[0];
  }
  if (*(short *)ppppsVar7 == 0) {
    iVar5 = 0;
  }
  else {
    ppppsVar6 = ppppsVar7;
    do {
      sVar1 = *(short *)ppppsVar6;
      ppppsVar6 = (short ****)((int)ppppsVar6 + 2);
    } while (sVar1 != 0);
    iVar5 = (int)ppppsVar6 - (int)((int)ppppsVar7 + 2) >> 1;
  }
  FUN_00403fc0(ppppsVar7,iVar5);
  puVar3 = (undefined4 *)FUN_0040e5c0(extraout_ECX);
  if (puVar4 != puVar3) {
    if (7 < *(uint *)(in_ECX + 0x38)) {
      FUN_004053c0(*puVar4,*(uint *)(in_ECX + 0x38) + 1);
    }
    *(undefined4 *)(in_ECX + 0x38) = 7;
    *(undefined4 *)(in_ECX + 0x34) = 0;
    if (7 < *(uint *)(in_ECX + 0x38)) {
      puVar4 = (undefined4 *)*puVar4;
    }
    *(undefined2 *)puVar4 = 0;
    FUN_004041e0(puVar3);
  }
  if (7 < local_54) {
    FUN_004053c0(local_68,local_54 + 1);
  }
  if (*(HMODULE *)(in_ECX + 4) != (HMODULE)0x0) {
    FreeLibrary(*(HMODULE *)(in_ECX + 4));
    *(undefined4 *)(in_ECX + 4) = 0;
  }
  *(undefined4 *)(in_ECX + 8) = 0;
  FUN_004033e0();
  if (7 < local_30) {
    FUN_004053c0(local_44[0],local_30 + 1);
  }
  ExceptionList = local_10;
  __security_check_cookie(local_14 ^ (uint)&stack0xfffffffc);
  return;
}

