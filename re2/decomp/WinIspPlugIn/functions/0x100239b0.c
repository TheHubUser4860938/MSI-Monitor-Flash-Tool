// rea decompile_all
// name: FUN_100239b0
// address: 0x100239b0
// body: available
// range: 0x100239b0-0x10023faf inclusive
// non_contiguous: false
// provider: Ghidra 12.1.2 (ghidra)
// analysis_profile: b075844f08879296d957518397cd0ddda73db81dce53d00d3f0e702766fc2af6
// limitations: The session serves operations only after Ghidra reports default auto-analysis complete; incomplete analysis does not expose partial results.; The imported Program and temporary project are ephemeral and deleted on close. Annotation operations edit session database metadata; original executable bytes are never written.; Cancelling an active Ghidra request terminates its ephemeral database and discards session annotations. The selected target remains open; the next provider query imports the original artifact again.; Default-space addresses use lowercase 0x-prefixed hexadecimal; other address spaces use <percent-encoded-space>:0x<hex>.; The Ghidra Program references PDB WinIspPlugIn.pdb (GUID d9f398c7-6c98-49a8-af25-a0659d5ad2f3, age (hex) 1, signature unknown, version RSDS); Ghidra reports load state unknown. Original names and types may be missing; an empty name search does not prove a procedure is absent. Use list_procedures and address-based analysis to inspect recovered functions. REA does not admit a caller-selected PDB companion.; This session uses Ghidra 12.1.2. The bridge is verified against 12.1.4; other 12.1.x builds are accepted and the observed version is reported.; Pseudocode is Ghidra decompiler output, not original source and not text-equivalent to Hopper output.; External functions and functions without an analyzable body return null; other decompiler failures remain explicit.
// pseudocode: provider-specific; not original source


void FUN_100239b0(undefined4 param_1)

{
  int iVar1;
  undefined4 *puVar2;
  void *_Memory;
  undefined4 uVar3;
  uint in_ECX;
  int in_EDX;
  undefined4 uVar4;
  undefined4 uVar5;
  int local_268;
  undefined1 local_208 [4];
  undefined4 local_204;
  undefined4 *local_200;
  int local_1fc;
  undefined1 local_1f8 [52];
  undefined1 local_1c4 [116];
  ushort local_150;
  undefined **local_90;
  undefined4 local_8c;
  undefined4 local_88;
  undefined **local_80;
  undefined2 local_7c;
  undefined4 local_6c;
  undefined4 local_68;
  undefined1 local_64;
  undefined4 local_54;
  undefined4 local_50;
  undefined **local_4c;
  undefined2 local_48;
  undefined4 local_38;
  undefined4 local_34;
  undefined1 local_30;
  undefined4 local_20;
  undefined4 local_1c;
  uint local_18;
  void *local_10;
  undefined1 *puStack_c;
  undefined4 local_8;
  
  local_8 = 0xffffffff;
  puStack_c = &LAB_101c22f2;
  local_10 = ExceptionList;
  local_18 = DAT_1023dfec ^ (uint)&stack0xfffffffc;
  ExceptionList = &local_10;
  local_204 = param_1;
  FUN_1000d890(local_18);
  local_90 = CCpTransform::vftable;
  local_88 = 0;
  local_8c = 0;
  local_34 = 7;
  local_38 = 0;
  local_48 = 0;
  local_4c = CCpRsString::vftable;
  local_1c = 0xf;
  local_20 = 0;
  local_30 = 0;
  local_68 = 7;
  local_6c = 0;
  local_7c = 0;
  local_80 = CCpRsString::vftable;
  local_50 = 0xf;
  local_54 = 0;
  local_64 = 0;
  local_8._0_1_ = 3;
  local_8._1_3_ = 0;
  local_200 = (undefined4 *)0x0;
  local_1fc = 0;
  local_200 = (undefined4 *)FUN_1000d7a0();
  local_8._0_1_ = 4;
  iVar1 = (**(code **)(*DAT_10249d10 + 0x14))();
  if (iVar1 != 3) {
    iVar1 = (**(code **)(*DAT_10249d10 + 0x14))();
    if (iVar1 != 0xe) goto LAB_10023aaa;
  }
  (**(code **)(*DAT_10249d10 + 0xa0))(2,100);
LAB_10023aaa:
  FUN_10048350(&DAT_1024a13c,L"=== Dump Flash Data Start ===");
  FUN_10016860();
  iVar1 = FUN_1001ba20();
  if (iVar1 == 0) {
    iVar1 = FUN_1001bbd0();
    if (iVar1 == 0) {
      FUN_10047bd0(&DAT_1024a108);
      FUN_1000df70();
      if (local_1fc == 0) {
        FUN_10048350(&local_4c,L"Flash Data Map Empty!");
        FUN_1003fc00();
        FUN_10016860();
        FUN_1000d260(local_208,*local_200,local_200);
        FID_conflict__free(local_200);
        FUN_10048130();
        FUN_10048130();
        FUN_10048130();
        FUN_10048130();
        FUN_10048130();
        FUN_10048130();
      }
      else {
        iVar1 = FUN_1001d560(0);
        if (iVar1 == 0) {
          iVar1 = FUN_1000da90(local_1c4);
          puVar2 = (undefined4 *)(iVar1 + 4);
          local_8._0_1_ = 5;
          if (7 < *(uint *)(iVar1 + 0x18)) {
            puVar2 = (undefined4 *)*puVar2;
          }
          FUN_10048350(&local_4c,L"Flash Name: %ls",puVar2);
          local_8._0_1_ = 4;
          FUN_10048130();
          FUN_1003fc00();
          FUN_10016860();
          if ((uint)local_150 << 0x10 < in_EDX + in_ECX) {
            FUN_1000d1b0();
            FUN_10048130();
            FUN_10048130();
            FUN_1000da60();
          }
          else {
            _Memory = (void *)FUN_100491e5();
            if (_Memory == (void *)0x0) {
              FUN_1000d1b0();
              FUN_10048130();
              FUN_10048130();
              FUN_1000da60();
            }
            else {
              iVar1 = FUN_1003eda0(in_ECX >> 0x10 & 0xff,in_ECX & 0xffff,in_EDX,_Memory);
              if (iVar1 == 0) {
                FUN_1001b8f0();
                Sleep(DAT_1024a374);
                FUN_10048240(local_204);
                FUN_100075b0(local_1f8);
                local_8._0_1_ = 6;
                uVar3 = FUN_10047bd0(&local_80);
                uVar4 = 0x10023ea1;
                FUN_100481b0(uVar3);
                FUN_10048130();
                local_8._0_1_ = 4;
                FUN_10048130();
                uVar5 = 0x10023ec3;
                uVar3 = FUN_100486d0();
                FUN_1000f550(uVar3,0x32,uVar4,uVar5);
                local_8._0_1_ = 7;
                if (local_268 == 0) {
                  FID_conflict__free(_Memory);
                  FUN_1000e2f0();
                  FUN_1000d1b0();
                  FUN_10048130();
                  FUN_10048130();
                  FUN_1000da60();
                }
                else {
                  FUN_1000f6c0(_Memory);
                  FUN_1000f510();
                  FID_conflict__free(_Memory);
                  FUN_10048350(&DAT_1024a13c,L"=== Dump Flash Data End ===");
                  FUN_10016860();
                  FUN_1000e2f0();
                  FUN_1000d1b0();
                  FUN_10048130();
                  FUN_10048130();
                  FUN_1000da60();
                }
              }
              else {
                FID_conflict__free(_Memory);
                FUN_1000d1b0();
                FUN_10048130();
                FUN_10048130();
                FUN_1000da60();
              }
            }
          }
        }
        else {
          FUN_10048350(&local_4c,L" Get Flash Type Fail!, ErrorCode: 0x%x",iVar1);
          FUN_1003fc00();
          FUN_10016860();
          FUN_1000d260(local_208,*local_200,local_200);
          FID_conflict__free(local_200);
          FUN_10048130();
          FUN_10048130();
          FUN_1000da60();
        }
      }
    }
    else {
      FUN_1000d260(&local_204,*local_200,local_200);
      FID_conflict__free(local_200);
      FUN_10048130();
      FUN_10048130();
      FUN_10048130();
      FUN_10048130();
      FUN_10048130();
      FUN_10048130();
    }
  }
  else {
    FUN_10048350(&DAT_1024a13c,L"HandShakeBeforeEnterIspModeByBootType fail, error code:0x%x",iVar1)
    ;
    FUN_10016860();
    FUN_1000d260(&local_204,*local_200,local_200);
    FID_conflict__free(local_200);
    FUN_10048130();
    FUN_10048130();
    FUN_10048130();
    FUN_10048130();
    FUN_10048130();
    FUN_10048130();
  }
  ExceptionList = local_10;
  __security_check_cookie(local_18 ^ (uint)&stack0xfffffffc);
  return;
}

