// rea decompile_all
// name: FUN_1003fdc0
// address: 0x1003fdc0
// body: available
// range: 0x1003fdc0-0x1003ff3a inclusive
// non_contiguous: false
// provider: Ghidra 12.1.2 (ghidra)
// analysis_profile: b075844f08879296d957518397cd0ddda73db81dce53d00d3f0e702766fc2af6
// limitations: The session serves operations only after Ghidra reports default auto-analysis complete; incomplete analysis does not expose partial results.; The imported Program and temporary project are ephemeral and deleted on close. Annotation operations edit session database metadata; original executable bytes are never written.; Cancelling an active Ghidra request terminates its ephemeral database and discards session annotations. The selected target remains open; the next provider query imports the original artifact again.; Default-space addresses use lowercase 0x-prefixed hexadecimal; other address spaces use <percent-encoded-space>:0x<hex>.; The Ghidra Program references PDB WinIspPlugIn.pdb (GUID d9f398c7-6c98-49a8-af25-a0659d5ad2f3, age (hex) 1, signature unknown, version RSDS); Ghidra reports load state unknown. Original names and types may be missing; an empty name search does not prove a procedure is absent. Use list_procedures and address-based analysis to inspect recovered functions. REA does not admit a caller-selected PDB companion.; This session uses Ghidra 12.1.2. The bridge is verified against 12.1.4; other 12.1.x builds are accepted and the observed version is reported.; Pseudocode is Ghidra decompiler output, not original source and not text-equivalent to Hopper output.; External functions and functions without an analyzable body return null; other decompiler failures remain explicit.
// pseudocode: provider-specific; not original source


void FUN_1003fdc0(void)

{
  uint uVar1;
  int iVar2;
  uint *puVar3;
  undefined4 uVar4;
  undefined4 extraout_ECX;
  uint *in_EDX;
  uint *puVar5;
  undefined1 local_a0 [12];
  uint local_94;
  uint local_90;
  uint local_8c;
  undefined **local_88;
  undefined2 local_84;
  undefined4 local_74;
  undefined4 local_70;
  undefined1 local_6c;
  undefined4 local_5c;
  undefined4 local_58;
  uint local_14;
  void *local_10;
  undefined1 *puStack_c;
  int local_8;
  
  local_8 = 0xffffffff;
  puStack_c = &LAB_101c39e3;
  local_10 = ExceptionList;
  uVar1 = DAT_1023dfec ^ (uint)&stack0xfffffffc;
  ExceptionList = &local_10;
  local_90 = 0;
  local_8c = 0;
  local_70 = 7;
  local_74 = 0;
  local_84 = 0;
  local_14 = uVar1;
  FUN_10045540(&PTR_1020e6b0,0);
  local_88 = CCpRsString::vftable;
  local_58 = 0xf;
  local_5c = 0;
  local_6c = 0;
  local_8 = 0;
  FUN_1000b550(uVar1);
  local_94 = 0;
  if (*in_EDX != 0) {
    puVar5 = in_EDX + 0x203;
    do {
      if ((short)*puVar5 == 0) {
        iVar2 = 0;
      }
      else {
        puVar3 = puVar5;
        do {
          uVar1 = *puVar3;
          puVar3 = (uint *)((int)puVar3 + 2);
        } while ((short)uVar1 != 0);
        iVar2 = (int)puVar3 - ((int)puVar5 + 2) >> 1;
      }
      FUN_10045540(puVar5,iVar2);
      local_90 = puVar5[-2];
      local_8c = puVar5[-1];
      uVar4 = FUN_1000c6d0(&local_90);
      local_8._0_1_ = 1;
      iVar2 = FUN_1000cb30(uVar4);
      FUN_1000cb60(local_a0,extraout_ECX,iVar2 + 0x10,iVar2);
      local_8 = (uint)local_8._1_3_ << 8;
      FUN_10048130();
      puVar5 = puVar5 + 0x84;
      local_94 = local_94 + 1;
    } while (local_94 < *in_EDX);
  }
  FUN_10048130();
  ExceptionList = local_10;
  __security_check_cookie(local_14 ^ (uint)&stack0xfffffffc);
  return;
}

