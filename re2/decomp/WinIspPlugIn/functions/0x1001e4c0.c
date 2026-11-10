// rea decompile_all
// name: FUN_1001e4c0
// address: 0x1001e4c0
// body: available
// range: 0x1001e4c0-0x1001e799 inclusive
// non_contiguous: false
// provider: Ghidra 12.1.2 (ghidra)
// analysis_profile: b075844f08879296d957518397cd0ddda73db81dce53d00d3f0e702766fc2af6
// limitations: The session serves operations only after Ghidra reports default auto-analysis complete; incomplete analysis does not expose partial results.; The imported Program and temporary project are ephemeral and deleted on close. Annotation operations edit session database metadata; original executable bytes are never written.; Cancelling an active Ghidra request terminates its ephemeral database and discards session annotations. The selected target remains open; the next provider query imports the original artifact again.; Default-space addresses use lowercase 0x-prefixed hexadecimal; other address spaces use <percent-encoded-space>:0x<hex>.; The Ghidra Program references PDB WinIspPlugIn.pdb (GUID d9f398c7-6c98-49a8-af25-a0659d5ad2f3, age (hex) 1, signature unknown, version RSDS); Ghidra reports load state unknown. Original names and types may be missing; an empty name search does not prove a procedure is absent. Use list_procedures and address-based analysis to inspect recovered functions. REA does not admit a caller-selected PDB companion.; This session uses Ghidra 12.1.2. The bridge is verified against 12.1.4; other 12.1.x builds are accepted and the observed version is reported.; Pseudocode is Ghidra decompiler output, not original source and not text-equivalent to Hopper output.; External functions and functions without an analyzable body return null; other decompiler failures remain explicit.
// pseudocode: provider-specific; not original source


void FUN_1001e4c0(uint *param_1,int param_2,uint param_3,undefined4 param_4)

{
  int iVar1;
  uint uVar2;
  uint *in_ECX;
  byte *pbVar3;
  undefined4 *in_EDX;
  int iVar4;
  uint uVar5;
  byte *in_stack_0000004c;
  byte *in_stack_00000050;
  int in_stack_00000054;
  int local_50;
  uint local_4c;
  undefined **local_48;
  uint local_44;
  undefined4 local_34;
  uint local_30;
  uint local_2c;
  undefined4 local_1c;
  uint local_18;
  uint local_14;
  void *local_10;
  undefined1 *puStack_c;
  undefined4 local_8;
  
  puStack_c = &LAB_101c1de8;
  local_10 = ExceptionList;
  local_14 = DAT_1023dfec ^ (uint)&stack0xfffffffc;
  ExceptionList = &local_10;
  local_30 = 7;
  local_34 = 0;
  local_44 = local_44 & 0xffff0000;
  local_48 = CCpRsString::vftable;
  local_18 = 0xf;
  local_1c = 0;
  local_2c = local_2c & 0xffffff00;
  local_8 = 2;
  *in_EDX = 0;
  *param_1 = 0;
  FUN_10197c50(param_2,param_4,0x10000,local_14);
  if (in_stack_0000004c != in_stack_00000050) {
    uVar5 = 0;
    iVar1 = (int)in_stack_00000050 - (int)in_stack_0000004c >> 0x1f;
    iVar4 = ((int)in_stack_00000050 - (int)in_stack_0000004c) / 0x18 + iVar1;
    pbVar3 = in_stack_0000004c;
    if (iVar4 != iVar1) {
      do {
        if (param_3 == *pbVar3) {
          local_4c = 0;
          local_50 = 0;
          goto LAB_1001e651;
        }
        uVar5 = uVar5 + 1;
        pbVar3 = pbVar3 + 0x18;
      } while (uVar5 < (uint)(iVar4 - iVar1));
    }
  }
  uVar5 = 0xffff;
  do {
    if (*(char *)(param_2 + uVar5) != -1) break;
    uVar5 = uVar5 - 1;
  } while (uVar5 < 0x10000);
  *in_ECX = uVar5 + 1;
LAB_1001e5a3:
  local_48 = CCpRsString::vftable;
  if (0xf < local_18) {
    FUN_1000b630(local_2c,local_18 + 1);
  }
  local_18 = 0xf;
  local_1c = 0;
  local_2c = local_2c & 0xffffff00;
  if (7 < local_30) {
    FUN_1000b5d0(local_44,local_30 + 1);
  }
  local_30 = 7;
  local_34 = 0;
  local_44 = local_44 & 0xffff0000;
  FUN_10048130();
  if (in_stack_0000004c != (byte *)0x0) {
    FUN_1002c430(in_stack_0000004c,(in_stack_00000054 - (int)in_stack_0000004c) / 0x18);
  }
  ExceptionList = local_10;
  __security_check_cookie(local_14 ^ (uint)&stack0xfffffffc);
  return;
  while( true ) {
    local_4c = local_4c + 1;
    local_50 = local_50 + 0x18;
    if ((uint)(((int)in_stack_00000050 - (int)in_stack_0000004c) / 0x18) <= local_4c) break;
LAB_1001e651:
    if (param_3 == in_stack_0000004c[local_50]) {
      if (*(int *)(in_stack_0000004c + local_50 + 4) == 0) {
        *in_EDX = 1;
        uVar5 = 0xffff;
        goto LAB_1001e730;
      }
      uVar2 = *(uint *)(in_stack_0000004c + local_50 + 0xc);
      uVar5 = uVar2 - 1;
      if (uVar5 < uVar2) {
        do {
          if (*(char *)((uint)*(ushort *)(in_stack_0000004c + local_50 + 8) + param_2 + uVar5) != -1
             ) break;
          uVar5 = uVar5 - 1;
        } while (uVar5 < uVar2);
      }
      if (uVar5 != 0xffffffff) break;
      iVar1 = FUN_1003eda0(param_3,*(undefined2 *)(in_stack_0000004c + local_50 + 8),uVar2,
                           (uint)*(ushort *)(in_stack_0000004c + local_50 + 8) + param_2);
      if (iVar1 != 0) {
        FUN_10048350(&DAT_1024a13c,L"Read flash data fail! Error code: 0x%X",iVar1);
        FUN_10016860();
        break;
      }
      uVar5 = FUN_1001e7a0();
      *in_ECX = uVar5;
    }
  }
  goto LAB_1001e5a3;
  while (uVar5 = uVar5 - 1, uVar5 < 0x10000) {
LAB_1001e730:
    if (*(char *)(param_2 + uVar5) != -1) break;
  }
  uVar5 = uVar5 + 1;
  if ((*(int *)(in_stack_0000004c + local_4c * 0x18 + 0x14) == 0) &&
     ((uint)in_stack_0000004c[local_4c * 0x18 + 0x10] * 0x1000 < uVar5)) {
    FUN_10048350(&local_48,L"Protected Sector Value Is Not All 0xFF");
    FUN_10016860();
  }
  else {
    uVar2 = uVar5 >> 0xc;
    if ((uVar5 & 0xfff) != 0) {
      uVar2 = uVar2 + 1;
    }
    *param_1 = uVar2;
    *in_ECX = uVar5;
  }
  goto LAB_1001e5a3;
}

