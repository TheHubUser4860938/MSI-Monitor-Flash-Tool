// rea decompile_all
// name: FUN_100062b0
// address: 0x100062b0
// body: available
// range: 0x100062b0-0x100063bd inclusive
// non_contiguous: false
// provider: Ghidra 12.1.2 (ghidra)
// analysis_profile: b075844f08879296d957518397cd0ddda73db81dce53d00d3f0e702766fc2af6
// limitations: The session serves operations only after Ghidra reports default auto-analysis complete; incomplete analysis does not expose partial results.; The imported Program and temporary project are ephemeral and deleted on close. Annotation operations edit session database metadata; original executable bytes are never written.; Cancelling an active Ghidra request terminates its ephemeral database and discards session annotations. The selected target remains open; the next provider query imports the original artifact again.; Default-space addresses use lowercase 0x-prefixed hexadecimal; other address spaces use <percent-encoded-space>:0x<hex>.; The Ghidra Program references PDB WinOperateCScaler.pdb (GUID a6737962-efea-4805-8ae6-1fc1ef126554, age (hex) 1, signature unknown, version RSDS); Ghidra reports load state unknown. Original names and types may be missing; an empty name search does not prove a procedure is absent. Use list_procedures and address-based analysis to inspect recovered functions. REA does not admit a caller-selected PDB companion.; This session uses Ghidra 12.1.2. The bridge is verified against 12.1.4; other 12.1.x builds are accepted and the observed version is reported.; Pseudocode is Ghidra decompiler output, not original source and not text-equivalent to Hopper output.; External functions and functions without an analyzable body return null; other decompiler failures remain explicit.
// pseudocode: provider-specific; not original source


void FUN_100062b0(void)

{
  int *piVar1;
  uint uVar2;
  undefined4 *puVar3;
  int iVar4;
  undefined4 *in_ECX;
  void *local_10;
  undefined1 *puStack_c;
  undefined4 local_8;
  
  puStack_c = &LAB_10194b29;
  local_10 = ExceptionList;
  uVar2 = DAT_10201fec ^ (uint)&stack0xfffffffc;
  ExceptionList = &local_10;
  in_ECX[4] = 0;
  in_ECX[5] = 0;
  in_ECX[5] = 0xf;
  in_ECX[4] = 0;
  puVar3 = in_ECX;
  if (0xf < (uint)in_ECX[5]) {
    puVar3 = (undefined4 *)*in_ECX;
  }
  *(undefined1 *)puVar3 = 0;
  piVar1 = in_ECX + 6;
  local_8 = 0;
  *piVar1 = 0;
  in_ECX[7] = 0;
  iVar4 = FUN_100050f0(uVar2);
  *piVar1 = iVar4;
  local_8._0_1_ = 1;
  FUN_1001baa0();
  FUN_100043a0();
  in_ECX[0x10e70] = 0;
  in_ECX[0x10e71] = 0;
  in_ECX[0x10e72] = 0;
  in_ECX[0x10e73] = 0;
  in_ECX[0x10e74] = 0;
  _memset(in_ECX + 0x10e75,0,0x71c);
  local_8 = CONCAT31(local_8._1_3_,2);
  FUN_10005120(*(undefined4 *)(*piVar1 + 4));
  *(int *)(*piVar1 + 4) = *piVar1;
  *(int *)*piVar1 = *piVar1;
  *(int *)(*piVar1 + 8) = *piVar1;
  in_ECX[7] = 0;
  ExceptionList = local_10;
  return;
}

