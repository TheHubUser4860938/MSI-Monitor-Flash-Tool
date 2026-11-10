// rea decompile_all
// name: FUN_1003a2f0
// address: 0x1003a2f0
// body: available
// range: 0x1003a2f0-0x1003a822 inclusive
// non_contiguous: false
// provider: Ghidra 12.1.2 (ghidra)
// analysis_profile: b075844f08879296d957518397cd0ddda73db81dce53d00d3f0e702766fc2af6
// limitations: The session serves operations only after Ghidra reports default auto-analysis complete; incomplete analysis does not expose partial results.; The imported Program and temporary project are ephemeral and deleted on close. Annotation operations edit session database metadata; original executable bytes are never written.; Cancelling an active Ghidra request terminates its ephemeral database and discards session annotations. The selected target remains open; the next provider query imports the original artifact again.; Default-space addresses use lowercase 0x-prefixed hexadecimal; other address spaces use <percent-encoded-space>:0x<hex>.; The Ghidra Program references PDB WinIspPlugIn.pdb (GUID d9f398c7-6c98-49a8-af25-a0659d5ad2f3, age (hex) 1, signature unknown, version RSDS); Ghidra reports load state unknown. Original names and types may be missing; an empty name search does not prove a procedure is absent. Use list_procedures and address-based analysis to inspect recovered functions. REA does not admit a caller-selected PDB companion.; This session uses Ghidra 12.1.2. The bridge is verified against 12.1.4; other 12.1.x builds are accepted and the observed version is reported.; Pseudocode is Ghidra decompiler output, not original source and not text-equivalent to Hopper output.; External functions and functions without an analyzable body return null; other decompiler failures remain explicit.
// pseudocode: provider-specific; not original source


void FUN_1003a2f0(void)

{
  undefined4 *_Memory;
  int iVar1;
  undefined4 *puVar2;
  undefined1 local_19c [4];
  undefined4 local_198;
  undefined4 local_194;
  undefined4 *local_190;
  int local_18c;
  undefined1 local_188 [52];
  undefined1 local_154 [252];
  undefined **local_58;
  undefined4 local_54;
  undefined4 local_50;
  undefined **local_48;
  undefined2 local_44;
  undefined4 local_34;
  undefined4 local_30;
  undefined1 local_2c;
  undefined4 local_1c;
  undefined4 local_18;
  uint local_14;
  void *local_10;
  undefined1 *puStack_c;
  undefined4 local_8;
  
  puStack_c = &LAB_101c359c;
  local_10 = ExceptionList;
  local_14 = DAT_1023dfec ^ (uint)&stack0xfffffffc;
  ExceptionList = &local_10;
  local_30 = 7;
  local_34 = 0;
  local_44 = 0;
  local_48 = CCpRsString::vftable;
  local_18 = 0xf;
  local_1c = 0;
  local_2c = 0;
  local_8 = 0;
  FUN_1000d890(local_14);
  local_58 = CCpTransform::vftable;
  local_50 = 0;
  local_54 = 0;
  local_8._0_1_ = 2;
  local_198 = 0;
  local_194 = 0;
  local_190 = (undefined4 *)0x0;
  local_18c = 0;
  local_190 = (undefined4 *)FUN_1000d7a0();
  local_8._0_1_ = 3;
  _Memory = (undefined4 *)FUN_100119b0();
  local_8 = CONCAT31(local_8._1_3_,4);
  iVar1 = (**(code **)(*DAT_10249d10 + 0x14))();
  if (iVar1 == 3) {
LAB_1003a3d0:
    (**(code **)(*DAT_10249d10 + 0xa0))(2,100);
  }
  else {
    iVar1 = (**(code **)(*DAT_10249d10 + 0x14))();
    if (iVar1 == 0xe) goto LAB_1003a3d0;
  }
  FUN_10048350(&local_48,L"......Do Chip Erase Begin......");
  FUN_10016860();
  FUN_10048350(&local_48,L" enumIspMode:%d, enumOneBankMode:%d ",DAT_1024a2f4,DAT_1024a2f0);
  FUN_10016860();
  FUN_10048350(&local_48,L"ChipErase Start!");
  FUN_1003fc00();
  FUN_10016860();
  FUN_10047bd0(&DAT_1024e8d0);
  FUN_1000df70();
  if (local_18c == 0) {
    FUN_10048350(&local_48,L"Flash Data Map Empty!");
    FUN_1003fc00();
    FUN_10016860();
    goto LAB_1003a780;
  }
  iVar1 = (**(code **)(*DAT_10249d10 + 0x14))();
  if (iVar1 == 3) {
LAB_1003a4bf:
    (**(code **)(*DAT_10249d10 + 0xa0))(2,100);
  }
  else {
    iVar1 = (**(code **)(*DAT_10249d10 + 0x14))();
    if (iVar1 == 0xe) goto LAB_1003a4bf;
  }
  iVar1 = FUN_1001bb80();
  if (iVar1 == 0) {
    FUN_1002da20();
    iVar1 = FUN_10016b00();
    if (iVar1 == 0) {
      iVar1 = FUN_1001aa50();
      if (iVar1 == 0) {
        FUN_1002da20();
        iVar1 = FUN_10017300();
        if (iVar1 == 0) {
          iVar1 = FUN_1001a050();
          if (iVar1 == 0) {
            (**(code **)(*DAT_10249d10 + 0x94))(DAT_1024a364);
            iVar1 = FUN_1001d560(0);
            if (iVar1 == 0) {
              iVar1 = FUN_1000da90(local_188);
              puVar2 = (undefined4 *)(iVar1 + 4);
              local_8._0_1_ = 5;
              if (7 < *(uint *)(iVar1 + 0x18)) {
                puVar2 = (undefined4 *)*puVar2;
              }
              FUN_10048350(&local_48,L"Flash Name: %ls",puVar2);
              local_8 = CONCAT31(local_8._1_3_,4);
              FUN_10048130();
              FUN_1003fc00();
              FUN_10016860();
              FUN_1002da20();
              iVar1 = FUN_1001ad20();
              if (iVar1 == 0) {
                iVar1 = FUN_1001e8f0();
                if (iVar1 == 0) {
                  FUN_1002da20();
                  iVar1 = FUN_1003e3a0(local_154);
                  if (iVar1 != 0) {
                    FUN_10048350(&local_48,L" ChipErase Fail!, Error Code:0x%x",iVar1);
                    FUN_10016860();
                  }
                  FUN_1002da20();
                  iVar1 = FUN_1001e7c0();
                  if (iVar1 != 0) {
                    FUN_10048350(&local_48,L" EnableSoftWareWP Fail!, Error Code:0x%x",iVar1);
                    FUN_10016860();
                  }
                  FUN_10048350(&local_48,L"ChipErase Success!");
                  FUN_1003fc00();
                  FUN_10016860();
                  FUN_1001b8f0();
                }
                else {
                  FUN_10048350(&local_48,L" Disable WP Fail!, ErrorCode: 0x%x",iVar1);
                  FUN_1003fc00();
                  FUN_10016860();
                }
              }
              else {
                FUN_10048350(&local_48,L" Set WP Pin Fail!, ErrorCode: 0x%x",iVar1);
                FUN_1003fc00();
                FUN_10016860();
              }
            }
            else {
              FUN_10048350(&local_48,L" Get Flash Type Fail!, ErrorCode: 0x%x",iVar1);
              FUN_1003fc00();
              FUN_10016860();
            }
          }
          else {
            FUN_10048350(&local_48,L" Set Mcu Reg Default Value!, ErrorCode: 0x%x",iVar1);
            FUN_1003fc00();
            FUN_10016860();
          }
        }
        else {
          FUN_10048350(&local_48,L" TypeC Usb Isp Check Fail!, ErrorCode: 0x%x",iVar1);
          FUN_1003fc00();
          FUN_10016860();
        }
      }
      else {
        FUN_10048350(&local_48,L" Get Flash Mode Fail!, ErrorCode: 0x%x",iVar1);
        FUN_1003fc00();
        FUN_10016860();
      }
    }
  }
LAB_1003a780:
  FUN_100107a0(local_19c,*_Memory,_Memory);
  FID_conflict__free(_Memory);
  FUN_1000d260(local_19c,*local_190,local_190);
  FID_conflict__free(local_190);
  FUN_10048130();
  FUN_10048130();
  FUN_10048130();
  FUN_10048130();
  FUN_10048130();
  ExceptionList = local_10;
  __security_check_cookie(local_14 ^ (uint)&stack0xfffffffc);
  return;
}

