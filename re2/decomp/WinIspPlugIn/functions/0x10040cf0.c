// rea decompile_all
// name: FUN_10040cf0
// address: 0x10040cf0
// body: available
// range: 0x10040cf0-0x10040f17 inclusive
// non_contiguous: false
// provider: Ghidra 12.1.2 (ghidra)
// analysis_profile: b075844f08879296d957518397cd0ddda73db81dce53d00d3f0e702766fc2af6
// limitations: The session serves operations only after Ghidra reports default auto-analysis complete; incomplete analysis does not expose partial results.; The imported Program and temporary project are ephemeral and deleted on close. Annotation operations edit session database metadata; original executable bytes are never written.; Cancelling an active Ghidra request terminates its ephemeral database and discards session annotations. The selected target remains open; the next provider query imports the original artifact again.; Default-space addresses use lowercase 0x-prefixed hexadecimal; other address spaces use <percent-encoded-space>:0x<hex>.; The Ghidra Program references PDB WinIspPlugIn.pdb (GUID d9f398c7-6c98-49a8-af25-a0659d5ad2f3, age (hex) 1, signature unknown, version RSDS); Ghidra reports load state unknown. Original names and types may be missing; an empty name search does not prove a procedure is absent. Use list_procedures and address-based analysis to inspect recovered functions. REA does not admit a caller-selected PDB companion.; This session uses Ghidra 12.1.2. The bridge is verified against 12.1.4; other 12.1.x builds are accepted and the observed version is reported.; Pseudocode is Ghidra decompiler output, not original source and not text-equivalent to Hopper output.; External functions and functions without an analyzable body return null; other decompiler failures remain explicit.
// pseudocode: provider-specific; not original source


void FUN_10040cf0(undefined4 param_1)

{
  char cVar1;
  uint *puVar2;
  undefined4 uVar3;
  undefined4 *puVar4;
  int _FindHandle;
  int iVar5;
  char *pcVar6;
  undefined4 in_ECX;
  uint *extraout_ECX;
  uint *puVar7;
  uint *in_EDX;
  uint in_stack_00000018;
  __finddata64_t local_16c;
  undefined4 local_34;
  uint local_30;
  uint local_2c [4];
  undefined4 local_1c;
  uint local_18;
  uint local_14;
  void *local_10;
  undefined1 *puStack_c;
  undefined1 local_8;
  undefined3 uStack_7;
  
  puStack_c = &LAB_101c3bd0;
  local_10 = ExceptionList;
  local_14 = DAT_1023dfec ^ (uint)&stack0xfffffffc;
  ExceptionList = &local_10;
  local_30 = 0xf;
  local_34 = 0;
  local_16c.name._256_4_ = local_16c.name._256_4_ & 0xffffff00;
  local_8 = 1;
  uStack_7 = 0;
  uVar3 = FUN_1002d0e0(&param_1,local_14);
  local_8 = 2;
  FUN_1000ab60(in_ECX,0,0xffffffff);
  puVar4 = (undefined4 *)FUN_1000ae70(uVar3,0,0xffffffff);
  if (0xf < (uint)puVar4[5]) {
    puVar4 = (undefined4 *)*puVar4;
  }
  _FindHandle = FUN_101a1d1b(puVar4,&local_16c);
  _local_8 = CONCAT31(uStack_7,1);
  if (0xf < local_18) {
    FUN_1000b630(local_2c[0],local_18 + 1);
  }
  if (_FindHandle != -1) {
    do {
      local_18 = 0xf;
      local_1c = 0;
      local_2c[0] = local_2c[0] & 0xffffff00;
      if (local_16c.size._4_1_ == '\0') {
        iVar5 = 0;
      }
      else {
        pcVar6 = (char *)((int)&local_16c.size + 4);
        do {
          cVar1 = *pcVar6;
          pcVar6 = pcVar6 + 1;
        } while (cVar1 != '\0');
        iVar5 = (int)pcVar6 - (int)((int)&local_16c.size + 5);
      }
      FUN_1000aa60((undefined1 *)((int)&local_16c.size + 4),iVar5);
      _local_8 = CONCAT31(uStack_7,3);
      puVar2 = (uint *)in_EDX[1];
      puVar7 = extraout_ECX;
      if (local_2c < puVar2) {
        puVar7 = local_2c;
        if (puVar7 < (uint *)*in_EDX) goto LAB_10040e65;
        iVar5 = (int)puVar7 - (int)*in_EDX;
        if (puVar2 == (uint *)in_EDX[2]) {
          FUN_10045240(iVar5);
        }
        if (in_EDX[1] != 0) {
          FUN_100090c0(*in_EDX + (iVar5 / 0x18) * 0x18);
        }
      }
      else {
LAB_10040e65:
        if (puVar2 == (uint *)in_EDX[2]) {
          FUN_10045240(puVar7);
        }
        if (in_EDX[1] != 0) {
          FUN_100090c0(local_2c);
        }
      }
      in_EDX[1] = in_EDX[1] + 0x18;
      _local_8 = CONCAT31(uStack_7,1);
      if (0xf < local_18) {
        FUN_1000b630(local_2c[0],local_18 + 1);
      }
      iVar5 = FID_conflict___findnext64i32(_FindHandle,&local_16c);
    } while (iVar5 == 0);
    FUN_101a1cf5(_FindHandle);
  }
  if (0xf < local_30) {
    FUN_1000b630(local_16c.name._256_4_,local_30 + 1);
  }
  local_30 = 0xf;
  local_34 = 0;
  local_16c.name._256_4_ = local_16c.name._256_4_ & 0xffffff00;
  if (0xf < in_stack_00000018) {
    FUN_1000b630(param_1,in_stack_00000018 + 1);
  }
  ExceptionList = local_10;
  __security_check_cookie(local_14 ^ (uint)&stack0xfffffffc);
  return;
}

