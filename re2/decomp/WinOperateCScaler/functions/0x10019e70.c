// rea decompile_all
// name: thunk_FUN_10019d70
// address: 0x10019e70
// body: available
// range: 0x10019e70-0x10019e74 inclusive
// non_contiguous: false
// provider: Ghidra 12.1.2 (ghidra)
// analysis_profile: b075844f08879296d957518397cd0ddda73db81dce53d00d3f0e702766fc2af6
// limitations: The session serves operations only after Ghidra reports default auto-analysis complete; incomplete analysis does not expose partial results.; The imported Program and temporary project are ephemeral and deleted on close. Annotation operations edit session database metadata; original executable bytes are never written.; Cancelling an active Ghidra request terminates its ephemeral database and discards session annotations. The selected target remains open; the next provider query imports the original artifact again.; Default-space addresses use lowercase 0x-prefixed hexadecimal; other address spaces use <percent-encoded-space>:0x<hex>.; The Ghidra Program references PDB WinOperateCScaler.pdb (GUID a6737962-efea-4805-8ae6-1fc1ef126554, age (hex) 1, signature unknown, version RSDS); Ghidra reports load state unknown. Original names and types may be missing; an empty name search does not prove a procedure is absent. Use list_procedures and address-based analysis to inspect recovered functions. REA does not admit a caller-selected PDB companion.; This session uses Ghidra 12.1.2. The bridge is verified against 12.1.4; other 12.1.x builds are accepted and the observed version is reported.; Pseudocode is Ghidra decompiler output, not original source and not text-equivalent to Hopper output.; External functions and functions without an analyzable body return null; other decompiler failures remain explicit.
// pseudocode: provider-specific; not original source


void thunk_FUN_10019d70(void)

{
  undefined4 *puVar1;
  int in_ECX;
  undefined4 *puVar2;
  undefined4 auStack_30 [5];
  uint uStack_1c;
  uint uStack_14;
  void *pvStack_10;
  undefined1 *puStack_c;
  undefined4 uStack_8;
  
  uStack_8 = 0xffffffff;
  puStack_c = &LAB_10195ece;
  pvStack_10 = ExceptionList;
  uStack_14 = DAT_10201fec ^ (uint)&stack0xfffffffc;
  ExceptionList = &pvStack_10;
  FUN_1001baa0(uStack_14);
  uStack_8 = 0;
  puVar1 = (undefined4 *)FUN_1001bd80(auStack_30,-(uint)(in_ECX != 0) & in_ECX + 4U);
  puVar2 = (undefined4 *)(in_ECX + 0x1c);
  if (puVar2 != puVar1) {
    if (0xf < *(uint *)(in_ECX + 0x30)) {
      FUN_10003d70(*puVar2,*(uint *)(in_ECX + 0x30) + 1);
    }
    *(undefined4 *)(in_ECX + 0x30) = 0xf;
    *(undefined4 *)(in_ECX + 0x2c) = 0;
    if (0xf < *(uint *)(in_ECX + 0x30)) {
      puVar2 = (undefined4 *)*puVar2;
    }
    *(undefined1 *)puVar2 = 0;
    FUN_100035d0(puVar1);
  }
  if (0xf < uStack_1c) {
    FUN_10003d70(auStack_30[0],uStack_1c + 1);
  }
  FUN_1001bab0();
  ExceptionList = pvStack_10;
  __security_check_cookie(uStack_14 ^ (uint)&stack0xfffffffc);
  return;
}

