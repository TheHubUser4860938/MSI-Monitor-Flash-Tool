// rea decompile_all
// name: FUN_100241d0
// address: 0x100241d0
// body: available
// range: 0x100241d0-0x10024382 inclusive
// non_contiguous: false
// provider: Ghidra 12.1.2 (ghidra)
// analysis_profile: b075844f08879296d957518397cd0ddda73db81dce53d00d3f0e702766fc2af6
// limitations: The session serves operations only after Ghidra reports default auto-analysis complete; incomplete analysis does not expose partial results.; The imported Program and temporary project are ephemeral and deleted on close. Annotation operations edit session database metadata; original executable bytes are never written.; Cancelling an active Ghidra request terminates its ephemeral database and discards session annotations. The selected target remains open; the next provider query imports the original artifact again.; Default-space addresses use lowercase 0x-prefixed hexadecimal; other address spaces use <percent-encoded-space>:0x<hex>.; The Ghidra Program references PDB WinIspPlugIn.pdb (GUID d9f398c7-6c98-49a8-af25-a0659d5ad2f3, age (hex) 1, signature unknown, version RSDS); Ghidra reports load state unknown. Original names and types may be missing; an empty name search does not prove a procedure is absent. Use list_procedures and address-based analysis to inspect recovered functions. REA does not admit a caller-selected PDB companion.; This session uses Ghidra 12.1.2. The bridge is verified against 12.1.4; other 12.1.x builds are accepted and the observed version is reported.; Pseudocode is Ghidra decompiler output, not original source and not text-equivalent to Hopper output.; External functions and functions without an analyzable body return null; other decompiler failures remain explicit.
// pseudocode: provider-specific; not original source


/* WARNING: Removing unreachable block (ram,0x100242f6) */

void FUN_100241d0(void)

{
  void **ppvVar1;
  uint uVar2;
  undefined4 uVar3;
  int in_ECX;
  undefined4 in_stack_fffffef4;
  undefined4 uVar4;
  uint uVar5;
  void *local_10;
  undefined1 *puStack_c;
  undefined4 local_8;
  
  puStack_c = &LAB_101c237b;
  local_10 = ExceptionList;
  uVar2 = DAT_1023dfec ^ (uint)&stack0xfffffffc;
  local_8 = 1;
  ppvVar1 = &local_10;
  uVar5 = uVar2;
  if ((((*(byte *)(in_ECX + 0x44) < 0x41) && (*(byte *)(in_ECX + 0x4d) < 0x41)) &&
      (*(byte *)(in_ECX + 0x55) < 0x41)) &&
     (((*(byte *)(in_ECX + 0x5d) < 0x41 && (*(byte *)(in_ECX + 0x4c) <= *(byte *)(in_ECX + 0x44)))
      && ((*(byte *)(in_ECX + 0x54) <= *(byte *)(in_ECX + 0x4d) &&
          ((*(byte *)(in_ECX + 0x5c) <= *(byte *)(in_ECX + 0x55) &&
           (*(byte *)(in_ECX + 100) <= *(byte *)(in_ECX + 0x5d))))))))) {
    if (*(int *)(in_ECX + 4) == 0) {
      local_8 = 1;
      puStack_c = &LAB_101c237b;
      if (*(int *)(in_ECX + 8) == 0) {
        local_8 = 1;
        puStack_c = &LAB_101c237b;
        if (*(int *)(in_ECX + 0xc) == 0) {
          local_8 = 1;
          puStack_c = &LAB_101c237b;
          if (*(int *)(in_ECX + 0x10) == 0) {
            local_8 = 1;
            puStack_c = &LAB_101c237b;
            if ((((*(int *)(in_ECX + 0xc) != 0) || (*(int *)(in_ECX + 8) != 0)) ||
                (*(int *)(in_ECX + 4) != 0)) && (*(uint *)(in_ECX + 0xc98) < 0x2711)) {
              uVar4 = 0x10024322;
              ExceptionList = &local_10;
              uVar3 = FUN_100486d0();
              FUN_1000f550(uVar3,0x12,in_stack_fffffef4,uVar4);
              local_8 = CONCAT31(local_8._1_3_,2);
              FUN_1000f510();
              FUN_1000e2f0();
              ppvVar1 = ExceptionList;
            }
          }
          else {
            ExceptionList = &local_10;
            FUN_10048240(in_ECX + 0x67e);
            ppvVar1 = ExceptionList;
          }
        }
        else {
          ExceptionList = &local_10;
          FUN_10048240(in_ECX + 0x476);
          ppvVar1 = ExceptionList;
        }
      }
      else {
        ExceptionList = &local_10;
        FUN_10048240(in_ECX + 0x26e);
        ppvVar1 = ExceptionList;
      }
    }
    else {
      ExceptionList = &local_10;
      FUN_10048240(in_ECX + 0x66);
      ppvVar1 = ExceptionList;
    }
  }
  ExceptionList = ppvVar1;
  FUN_10048130(uVar5);
  FUN_10048130();
  ExceptionList = local_10;
  __security_check_cookie(uVar2 ^ (uint)&stack0xfffffffc);
  return;
}

