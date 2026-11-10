// rea decompile_all
// name: FUN_1003a900
// address: 0x1003a900
// body: available
// range: 0x1003a900-0x1003ab83 inclusive
// non_contiguous: false
// provider: Ghidra 12.1.2 (ghidra)
// analysis_profile: b075844f08879296d957518397cd0ddda73db81dce53d00d3f0e702766fc2af6
// limitations: The session serves operations only after Ghidra reports default auto-analysis complete; incomplete analysis does not expose partial results.; The imported Program and temporary project are ephemeral and deleted on close. Annotation operations edit session database metadata; original executable bytes are never written.; Cancelling an active Ghidra request terminates its ephemeral database and discards session annotations. The selected target remains open; the next provider query imports the original artifact again.; Default-space addresses use lowercase 0x-prefixed hexadecimal; other address spaces use <percent-encoded-space>:0x<hex>.; The Ghidra Program references PDB WinIspPlugIn.pdb (GUID d9f398c7-6c98-49a8-af25-a0659d5ad2f3, age (hex) 1, signature unknown, version RSDS); Ghidra reports load state unknown. Original names and types may be missing; an empty name search does not prove a procedure is absent. Use list_procedures and address-based analysis to inspect recovered functions. REA does not admit a caller-selected PDB companion.; This session uses Ghidra 12.1.2. The bridge is verified against 12.1.4; other 12.1.x builds are accepted and the observed version is reported.; Pseudocode is Ghidra decompiler output, not original source and not text-equivalent to Hopper output.; External functions and functions without an analyzable body return null; other decompiler failures remain explicit.
// pseudocode: provider-specific; not original source


void FUN_1003a900(void)

{
  int iVar1;
  int iVar2;
  undefined4 *****pppppuVar3;
  undefined1 uVar4;
  undefined4 *in_ECX;
  int iVar5;
  code *pcVar6;
  undefined **local_98;
  undefined2 local_94 [8];
  undefined4 local_84;
  undefined4 local_80;
  undefined1 local_7c;
  undefined4 local_6c;
  undefined4 local_68;
  undefined **local_64;
  undefined4 ****local_60 [4];
  undefined4 local_50;
  uint local_4c;
  undefined1 local_48;
  undefined4 local_38;
  undefined4 local_34;
  undefined1 local_30 [2];
  undefined2 uStack_2e;
  undefined4 uStack_2c;
  undefined4 uStack_28;
  undefined4 uStack_24;
  undefined1 uStack_20;
  undefined7 uStack_1f;
  undefined1 uStack_18;
  undefined1 local_17;
  uint local_14;
  void *local_10;
  undefined1 *puStack_c;
  undefined4 local_8;
  
  puStack_c = &LAB_101c35e3;
  local_10 = ExceptionList;
  local_14 = DAT_1023dfec ^ (uint)&stack0xfffffffc;
  ExceptionList = &local_10;
  local_30[0] = 0;
  local_17 = 0;
  local_30[1] = 0;
  uStack_2e = 0;
  uStack_2c = 0;
  uStack_28 = 0;
  uStack_24 = 0;
  uStack_20 = 0;
  uStack_1f = 0;
  uStack_18 = 0;
  local_4c = 7;
  local_50 = 0;
  local_60[0] = (undefined4 ****)((uint)local_60[0] & 0xffff0000);
  local_64 = CCpRsString::vftable;
  local_34 = 0xf;
  local_38 = 0;
  local_48 = 0;
  local_8 = 0;
  iVar1 = (**(code **)(*DAT_10249d10 + 0x14))(local_14);
  uVar4 = 0x6e;
  local_80 = 7;
  if (iVar1 == 1) {
    uVar4 = 0x4a;
  }
  local_84 = 0;
  local_94[0] = 0;
  local_98 = CCpRsString::vftable;
  local_68 = 0xf;
  local_6c = 0;
  local_7c = 0;
  local_8 = CONCAT31(local_8._1_3_,1);
  pcVar6 = Sleep_exref;
  iVar1 = DAT_1024be74;
  do {
    if (iVar1 < 1) {
LAB_1003ab48:
      FUN_10048130();
      FUN_10048130();
      ExceptionList = local_10;
      __security_check_cookie(local_14 ^ (uint)&stack0xfffffffc);
      return;
    }
    uStack_18 = 0;
    local_17 = 0;
    uStack_2e = 0;
    uStack_2c = 0;
    uStack_28 = 0;
    uStack_24 = 0;
    local_30[0] = 0x77;
    local_30[1] = 0x99;
    uStack_20 = 0;
    uStack_1f = 0;
    iVar2 = (**(code **)(*DAT_10249d10 + 0x13c))(uVar4,0x71,2,local_30);
    if (iVar2 == 0) {
      (*pcVar6)(DAT_1024be70);
      iVar2 = (**(code **)(*DAT_10249d10 + 0x140))(uVar4,0x71,0x10,local_30);
      FUN_10048350(&local_64,L"Get Count:%d, ReadMergeFwGen1Info Read data Error:0x%X",
                   (DAT_1024be74 - iVar1) + 1,iVar2);
      FUN_10016860();
      local_50 = 0;
      pppppuVar3 = local_60;
      if (7 < local_4c) {
        pppppuVar3 = (undefined4 *****)local_60[0];
      }
      iVar5 = 0;
      *(undefined2 *)pppppuVar3 = 0;
      do {
        FUN_10048350(&local_98,L"0x%02X ,",local_30[iVar5]);
        FUN_1002c980(local_94,0,0xffffffff);
        iVar5 = iVar5 + 1;
      } while (iVar5 < 0x10);
      FUN_10016860();
      if (iVar2 == 0) {
        if (0 < iVar1) {
          *in_ECX = CONCAT22(uStack_2e,CONCAT11(local_30[1],local_30[0]));
          in_ECX[1] = uStack_2c;
          in_ECX[2] = uStack_28;
          in_ECX[3] = uStack_24;
        }
        goto LAB_1003ab48;
      }
      FUN_10048350(&local_64,L"Get Count:%d, Read merge fw info gen1 fail!",
                   (DAT_1024be74 - iVar1) + 1);
      FUN_10016860();
      pcVar6 = Sleep_exref;
    }
    else {
      FUN_10048350(&local_64,L"Get Count:%d, ReadMergeFwGen1Info Send Command Error:0x%X",
                   (DAT_1024be74 - iVar1) + 1,iVar2);
      FUN_10016860();
      (*pcVar6)(DAT_1024be70);
    }
    iVar1 = iVar1 + -1;
  } while( true );
}

