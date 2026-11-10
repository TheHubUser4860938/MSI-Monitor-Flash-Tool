// rea decompile_all
// name: FUN_10029f60
// address: 0x10029f60
// body: available
// range: 0x10029f60-0x1002a1f3 inclusive
// non_contiguous: false
// provider: Ghidra 12.1.2 (ghidra)
// analysis_profile: b075844f08879296d957518397cd0ddda73db81dce53d00d3f0e702766fc2af6
// limitations: The session serves operations only after Ghidra reports default auto-analysis complete; incomplete analysis does not expose partial results.; The imported Program and temporary project are ephemeral and deleted on close. Annotation operations edit session database metadata; original executable bytes are never written.; Cancelling an active Ghidra request terminates its ephemeral database and discards session annotations. The selected target remains open; the next provider query imports the original artifact again.; Default-space addresses use lowercase 0x-prefixed hexadecimal; other address spaces use <percent-encoded-space>:0x<hex>.; The Ghidra Program references PDB WinIspPlugIn.pdb (GUID d9f398c7-6c98-49a8-af25-a0659d5ad2f3, age (hex) 1, signature unknown, version RSDS); Ghidra reports load state unknown. Original names and types may be missing; an empty name search does not prove a procedure is absent. Use list_procedures and address-based analysis to inspect recovered functions. REA does not admit a caller-selected PDB companion.; This session uses Ghidra 12.1.2. The bridge is verified against 12.1.4; other 12.1.x builds are accepted and the observed version is reported.; Pseudocode is Ghidra decompiler output, not original source and not text-equivalent to Hopper output.; External functions and functions without an analyzable body return null; other decompiler failures remain explicit.
// pseudocode: provider-specific; not original source


/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_10029f60(void)

{
  void **ppvVar1;
  uint uVar2;
  int iVar3;
  undefined2 *puVar4;
  undefined8 *in_ECX;
  int iVar5;
  code *pcVar6;
  int iVar7;
  undefined1 local_65;
  undefined **local_64;
  uint local_60 [4];
  undefined4 local_50;
  uint local_4c;
  uint local_48;
  undefined4 local_38;
  uint local_34;
  uint local_30;
  undefined4 uStack_2c;
  undefined4 uStack_28;
  undefined1 uStack_24;
  undefined2 uStack_23;
  undefined1 uStack_21;
  undefined1 uStack_20;
  undefined7 uStack_1f;
  undefined1 uStack_18;
  undefined1 local_17;
  uint local_14;
  void *local_10;
  undefined1 *puStack_c;
  undefined4 local_8;
  
  puStack_c = &LAB_101c2238;
  uVar2 = DAT_1023dfec ^ (uint)&stack0xfffffffc;
  local_65 = 10;
  local_30 = 0;
  uStack_2c = 0;
  uStack_28 = 0;
  uStack_24 = 0;
  uStack_23 = 0;
  uStack_21 = 0;
  uStack_20 = 0;
  local_17 = 0;
  uStack_1f = 0;
  uStack_18 = 0;
  local_4c = 7;
  local_50 = 0;
  local_60[0] = local_60[0] & 0xffff0000;
  local_64 = CCpRsString::vftable;
  local_34 = 0xf;
  local_38 = 0;
  local_48 = local_48 & 0xffffff00;
  local_8 = 0;
  local_14 = uVar2;
  ppvVar1 = &local_10;
  local_10 = ExceptionList;
  iVar7 = DAT_1024be74;
  pcVar6 = Sleep_exref;
  do {
    ExceptionList = ppvVar1;
    if (iVar7 < 1) {
LAB_1002a140:
      local_64 = CCpRsString::vftable;
      if (0xf < local_34) {
        FUN_1000b630(local_48,local_34 + 1);
      }
      local_34 = 0xf;
      local_38 = 0;
      local_48 = local_48 & 0xffffff00;
      if (7 < local_4c) {
        FUN_1000b5d0(local_60[0],local_4c + 1);
      }
      ExceptionList = local_10;
      __security_check_cookie(local_14 ^ (uint)&stack0xfffffffc);
      return;
    }
    uStack_18 = 0;
    local_17 = 0;
    local_30 = 0;
    uStack_2c = 0;
    uStack_28 = 0;
    uStack_24 = 0;
    uStack_23 = 0;
    uStack_21 = 0;
    uStack_20 = 0;
    uStack_1f = 0;
    iVar3 = (**(code **)(*DAT_10249d10 + 0x54))(0x6a,0xca,1,&local_65,uVar2);
    if (iVar3 == 0) {
      (*pcVar6)(DAT_1024be70);
      iVar3 = (**(code **)(*DAT_10249d10 + 0x58))(0x6a,1,0x10,&local_30);
      FUN_10048350(&DAT_1024a13c,
                   L"Get Count:%d, ReadMergeFwInDebugMode Read data Error:0x%X, data0:0x%X",
                   (DAT_1024be74 - iVar7) + 1,iVar3,local_30 & 0xff);
      FUN_10016860();
      _DAT_1024a150 = 0;
      puVar4 = &DAT_1024a140;
      if (7 < DAT_1024a154) {
        puVar4 = _DAT_1024a140;
      }
      iVar5 = 0;
      *puVar4 = 0;
      do {
        FUN_10048350(&local_64,L"0x%02X ,",*(undefined1 *)((int)&local_30 + iVar5));
        FUN_1002c980(local_60,0,0xffffffff);
        iVar5 = iVar5 + 1;
      } while (iVar5 < 0x10);
      FUN_10016860();
      if (iVar3 == 0) {
        pcVar6 = Sleep_exref;
        if ((char)local_30 == -0x36) {
          FUN_10048350(&DAT_1024a13c,L"Get Count:%d, ReadMergeFwInDebugMode Read merge fw success!",
                       (DAT_1024be74 - iVar7) + 1);
          FUN_10016860();
          if (0 < iVar7) {
            *in_ECX = CONCAT17((undefined1)uStack_28,CONCAT43(uStack_2c,local_30._1_3_));
            *(uint *)(in_ECX + 1) = CONCAT13(uStack_24,uStack_28._1_3_);
            *(undefined2 *)((int)in_ECX + 0xc) = uStack_23;
            *(undefined1 *)((int)in_ECX + 0xe) = uStack_21;
          }
          goto LAB_1002a140;
        }
      }
      else {
        FUN_10048350(&DAT_1024a13c,L"Get Count:%d, ReadMergeFwInDebugMode Read merge fw info fail!",
                     (DAT_1024be74 - iVar7) + 1);
        FUN_10016860();
        pcVar6 = Sleep_exref;
      }
    }
    else {
      FUN_10048350(&DAT_1024a13c,L"Get Count:%d, ReadMergeFwInDebugMode Send Command Error:0x%X",
                   (DAT_1024be74 - iVar7) + 1,iVar3);
      FUN_10016860();
      (*pcVar6)(DAT_1024be70);
    }
    iVar7 = iVar7 + -1;
    ppvVar1 = ExceptionList;
  } while( true );
}

