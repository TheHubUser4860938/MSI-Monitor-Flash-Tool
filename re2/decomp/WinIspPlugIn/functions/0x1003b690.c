// rea decompile_all
// name: FUN_1003b690
// address: 0x1003b690
// body: available
// range: 0x1003b690-0x1003b809 inclusive
// non_contiguous: false
// provider: Ghidra 12.1.2 (ghidra)
// analysis_profile: b075844f08879296d957518397cd0ddda73db81dce53d00d3f0e702766fc2af6
// limitations: The session serves operations only after Ghidra reports default auto-analysis complete; incomplete analysis does not expose partial results.; The imported Program and temporary project are ephemeral and deleted on close. Annotation operations edit session database metadata; original executable bytes are never written.; Cancelling an active Ghidra request terminates its ephemeral database and discards session annotations. The selected target remains open; the next provider query imports the original artifact again.; Default-space addresses use lowercase 0x-prefixed hexadecimal; other address spaces use <percent-encoded-space>:0x<hex>.; The Ghidra Program references PDB WinIspPlugIn.pdb (GUID d9f398c7-6c98-49a8-af25-a0659d5ad2f3, age (hex) 1, signature unknown, version RSDS); Ghidra reports load state unknown. Original names and types may be missing; an empty name search does not prove a procedure is absent. Use list_procedures and address-based analysis to inspect recovered functions. REA does not admit a caller-selected PDB companion.; This session uses Ghidra 12.1.2. The bridge is verified against 12.1.4; other 12.1.x builds are accepted and the observed version is reported.; Pseudocode is Ghidra decompiler output, not original source and not text-equivalent to Hopper output.; External functions and functions without an analyzable body return null; other decompiler failures remain explicit.
// pseudocode: provider-specific; not original source


void FUN_1003b690(void)

{
  uint uVar1;
  int iVar2;
  int in_EDX;
  void *local_10;
  undefined1 *puStack_c;
  undefined4 local_8;
  
  puStack_c = &LAB_101c370b;
  local_10 = ExceptionList;
  uVar1 = DAT_1023dfec ^ (uint)&stack0xfffffffc;
  ExceptionList = &local_10;
  local_8 = 2;
  if ((((in_EDX != 0) && (iVar2 = FUN_10017720(uVar1), iVar2 == 0)) &&
      (iVar2 = FUN_10017780(), iVar2 == 0)) &&
     (((iVar2 = (**(code **)(*DAT_10249d10 + 0x14))(), iVar2 != 2 || (DAT_1024a384 == 0)) ||
      (iVar2 = FUN_10019030(), iVar2 == 0)))) {
    FUN_1002a200();
    iVar2 = (**(code **)(*DAT_10249d10 + 0x14))();
    if ((iVar2 == 2) && (DAT_1024a384 != 0)) {
      FUN_10019030();
    }
  }
  FUN_10048130();
  FUN_10048130();
  FUN_10048130();
  ExceptionList = local_10;
  __security_check_cookie(uVar1 ^ (uint)&stack0xfffffffc);
  return;
}

