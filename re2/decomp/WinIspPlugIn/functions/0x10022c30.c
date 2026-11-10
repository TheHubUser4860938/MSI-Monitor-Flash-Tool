// rea decompile_all
// name: FUN_10022c30
// address: 0x10022c30
// body: available
// range: 0x10022c30-0x10022e8f inclusive
// non_contiguous: false
// provider: Ghidra 12.1.2 (ghidra)
// analysis_profile: b075844f08879296d957518397cd0ddda73db81dce53d00d3f0e702766fc2af6
// limitations: The session serves operations only after Ghidra reports default auto-analysis complete; incomplete analysis does not expose partial results.; The imported Program and temporary project are ephemeral and deleted on close. Annotation operations edit session database metadata; original executable bytes are never written.; Cancelling an active Ghidra request terminates its ephemeral database and discards session annotations. The selected target remains open; the next provider query imports the original artifact again.; Default-space addresses use lowercase 0x-prefixed hexadecimal; other address spaces use <percent-encoded-space>:0x<hex>.; The Ghidra Program references PDB WinIspPlugIn.pdb (GUID d9f398c7-6c98-49a8-af25-a0659d5ad2f3, age (hex) 1, signature unknown, version RSDS); Ghidra reports load state unknown. Original names and types may be missing; an empty name search does not prove a procedure is absent. Use list_procedures and address-based analysis to inspect recovered functions. REA does not admit a caller-selected PDB companion.; This session uses Ghidra 12.1.2. The bridge is verified against 12.1.4; other 12.1.x builds are accepted and the observed version is reported.; Pseudocode is Ghidra decompiler output, not original source and not text-equivalent to Hopper output.; External functions and functions without an analyzable body return null; other decompiler failures remain explicit.
// pseudocode: provider-specific; not original source


/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_10022c30(void)

{
  void **ppvVar1;
  uint uVar2;
  int iVar3;
  undefined2 *puVar4;
  undefined4 in_ECX;
  int iVar5;
  code *pcVar6;
  int iVar7;
  undefined **local_6c;
  uint local_68 [4];
  undefined4 local_58;
  uint local_54;
  uint local_50;
  undefined4 local_40;
  uint local_3c;
  char local_38 [4];
  undefined4 uStack_34;
  undefined4 uStack_30;
  undefined4 uStack_2c;
  undefined1 uStack_28;
  undefined7 uStack_27;
  undefined1 uStack_20;
  undefined1 local_1f;
  undefined1 local_1c;
  undefined1 uStack_1b;
  undefined1 uStack_1a;
  undefined2 uStack_19;
  uint local_14;
  void *local_10;
  undefined1 *puStack_c;
  undefined4 local_8;
  
  puStack_c = &LAB_101c2208;
  uVar2 = DAT_1023dfec ^ (uint)&stack0xfffffffc;
  local_54 = 7;
  local_58 = 0;
  local_68[0] = local_68[0] & 0xffff0000;
  local_6c = CCpRsString::vftable;
  local_3c = 0xf;
  local_40 = 0;
  local_50 = local_50 & 0xffffff00;
  local_8 = 0;
  uStack_19 = 0;
  local_38[0] = '\0';
  uStack_27 = 0;
  uStack_20 = 0;
  local_1f = 0;
  local_1c = 0x77;
  uStack_1b = 0xc9;
  uStack_1a = 9;
  local_38[1] = 0;
  local_38[2] = '\0';
  local_38[3] = 0;
  uStack_34 = 0;
  uStack_30 = 0;
  uStack_2c = 0;
  uStack_28 = 0;
  local_14 = uVar2;
  ppvVar1 = &local_10;
  local_10 = ExceptionList;
  iVar7 = DAT_1024be74;
  pcVar6 = Sleep_exref;
  do {
    ExceptionList = ppvVar1;
    if (iVar7 < 1) {
LAB_10022e13:
      local_6c = CCpRsString::vftable;
      if (0xf < local_3c) {
        FUN_1000b630(local_50,local_3c + 1);
      }
      local_3c = 0xf;
      local_40 = 0;
      local_50 = local_50 & 0xffffff00;
      if (7 < local_54) {
        FUN_1000b5d0(local_68[0],local_54 + 1);
      }
      ExceptionList = local_10;
      __security_check_cookie(local_14 ^ (uint)&stack0xfffffffc);
      return;
    }
    uStack_20 = 0;
    local_1f = 0;
    local_38[0] = '\0';
    local_38[1] = 0;
    local_38[2] = '\0';
    local_38[3] = 0;
    uStack_34 = 0;
    uStack_30 = 0;
    uStack_2c = 0;
    uStack_28 = 0;
    uStack_27 = 0;
    iVar3 = (**(code **)(*DAT_10249d10 + 0x13c))(0x6e,0x71,3,&local_1c,uVar2);
    if (iVar3 == 0) {
      (*pcVar6)(DAT_1024be70);
      iVar3 = (**(code **)(*DAT_10249d10 + 0x140))(0x6e,0x51,0xe,local_38);
      FUN_10048350(&DAT_1024a13c,L"Get Count:%d, GetFwInfoInDDCCIMode Read data Error:0x%X",
                   (DAT_1024be74 - iVar7) + 1,iVar3);
      FUN_10016860();
      _DAT_1024a150 = 0;
      puVar4 = &DAT_1024a140;
      if (7 < DAT_1024a154) {
        puVar4 = _DAT_1024a140;
      }
      iVar5 = 0;
      *puVar4 = 0;
      do {
        FUN_10048350(&local_6c,L"0x%02X ,",local_38[iVar5]);
        FUN_1002c980(local_68,0,0xffffffff);
        iVar5 = iVar5 + 1;
      } while (iVar5 < 0x10);
      FUN_10016860();
      if (iVar3 == 0) {
        pcVar6 = Sleep_exref;
        if (local_38[2] == -0x37) {
          if (0 < iVar7) {
            FUN_10197c50(in_ECX,local_38 + 3,(byte)local_38[3] + 1);
          }
          goto LAB_10022e13;
        }
      }
      else {
        FUN_10048350(&DAT_1024a13c,L"Get Count:%d, GetFwInfoInDDCCIMode get fw info fail!",
                     (DAT_1024be74 - iVar7) + 1);
        FUN_10016860();
        pcVar6 = Sleep_exref;
      }
    }
    else {
      FUN_10048350(&DAT_1024a13c,L"Get Count:%d, GetFwInfoInDDCCIMode Send Command Error:0x%X",
                   (DAT_1024be74 - iVar7) + 1,iVar3);
      FUN_10016860();
      (*pcVar6)(DAT_1024be70);
    }
    iVar7 = iVar7 + -1;
    ppvVar1 = ExceptionList;
  } while( true );
}

