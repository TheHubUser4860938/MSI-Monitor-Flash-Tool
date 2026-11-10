// rea decompile_all
// name: FUN_1002d7c0
// address: 0x1002d7c0
// body: available
// range: 0x1002d7c0-0x1002da14 inclusive
// non_contiguous: false
// provider: Ghidra 12.1.2 (ghidra)
// analysis_profile: b075844f08879296d957518397cd0ddda73db81dce53d00d3f0e702766fc2af6
// limitations: The session serves operations only after Ghidra reports default auto-analysis complete; incomplete analysis does not expose partial results.; The imported Program and temporary project are ephemeral and deleted on close. Annotation operations edit session database metadata; original executable bytes are never written.; Cancelling an active Ghidra request terminates its ephemeral database and discards session annotations. The selected target remains open; the next provider query imports the original artifact again.; Default-space addresses use lowercase 0x-prefixed hexadecimal; other address spaces use <percent-encoded-space>:0x<hex>.; The Ghidra Program references PDB WinIspPlugIn.pdb (GUID d9f398c7-6c98-49a8-af25-a0659d5ad2f3, age (hex) 1, signature unknown, version RSDS); Ghidra reports load state unknown. Original names and types may be missing; an empty name search does not prove a procedure is absent. Use list_procedures and address-based analysis to inspect recovered functions. REA does not admit a caller-selected PDB companion.; This session uses Ghidra 12.1.2. The bridge is verified against 12.1.4; other 12.1.x builds are accepted and the observed version is reported.; Pseudocode is Ghidra decompiler output, not original source and not text-equivalent to Hopper output.; External functions and functions without an analyzable body return null; other decompiler failures remain explicit.
// pseudocode: provider-specific; not original source


/* WARNING: Removing unreachable block (ram,0x1002d9b6) */
/* WARNING: Removing unreachable block (ram,0x1002d9c4) */

void FUN_1002d7c0(uint param_1)

{
  undefined4 uVar1;
  undefined4 ****ppppuVar2;
  undefined4 ****ppppuVar3;
  undefined **local_7c;
  undefined4 ***local_78 [4];
  undefined4 local_68;
  uint local_64;
  undefined1 local_60;
  undefined4 local_50;
  undefined4 local_4c;
  undefined **local_48;
  undefined4 ***local_44 [4];
  undefined4 local_34;
  uint local_30;
  undefined1 local_2c;
  undefined4 local_1c;
  undefined4 local_18;
  uint local_14;
  void *local_10;
  undefined1 *puStack_c;
  undefined4 local_8;
  
  puStack_c = &LAB_101c2a86;
  local_10 = ExceptionList;
  local_14 = DAT_1023dfec ^ (uint)&stack0xfffffffc;
  ExceptionList = &local_10;
  local_64 = 7;
  local_68 = 0;
  local_78[0] = (undefined4 ***)((uint)local_78[0] & 0xffff0000);
  local_7c = CCpRsString::vftable;
  local_4c = 0xf;
  local_50 = 0;
  local_60 = 0;
  local_30 = 7;
  local_34 = 0;
  local_44[0] = (undefined4 ***)((uint)local_44[0] & 0xffff0000);
  local_48 = CCpRsString::vftable;
  local_18 = 0xf;
  local_1c = 0;
  local_2c = 0;
  local_8 = 3;
  if (DAT_1024a1a8 < param_1) {
    DAT_1024a1a8 = param_1;
    if (99 < param_1) {
      DAT_1024a1a8 = 100;
    }
    if (DAT_1024a1bc != 0) {
      if (DAT_10249d20 != (code *)0x0) {
        (*DAT_10249d20)(DAT_1024a1a8,local_14);
      }
      if (DAT_1024e460 == 0) {
        FUN_10048350(&DAT_1024a13c,L"\rISP Progress: %d %%",DAT_1024a1a8);
        FUN_1003fc00();
      }
    }
    if (DAT_1024a1c0 != 0) {
      uVar1 = FUN_10047bd0(&DAT_1024e6fc);
      FUN_100481b0(uVar1);
      FUN_10048130();
      FUN_10048350(&local_7c,&DAT_102164fc,param_1);
      FUN_10046260(&DAT_1024e734,0,0xffffffff);
      FUN_10046260(&DAT_1024e768,0,0xffffffff);
      ppppuVar3 = local_44;
      if (7 < local_30) {
        ppppuVar3 = (undefined4 ****)local_44[0];
      }
      ppppuVar2 = local_78;
      if (7 < local_64) {
        ppppuVar2 = (undefined4 ****)local_78[0];
      }
      FUN_10042360(ppppuVar2,ppppuVar3);
    }
  }
  FUN_10048130();
  FUN_10048130();
  FUN_10048130();
  FUN_10048130();
  ExceptionList = local_10;
  __security_check_cookie(local_14 ^ (uint)&stack0xfffffffc);
  return;
}

