// rea decompile_all
// name: FUN_10021b00
// address: 0x10021b00
// body: available
// range: 0x10021b00-0x10022143 inclusive
// non_contiguous: false
// provider: Ghidra 12.1.2 (ghidra)
// analysis_profile: b075844f08879296d957518397cd0ddda73db81dce53d00d3f0e702766fc2af6
// limitations: The session serves operations only after Ghidra reports default auto-analysis complete; incomplete analysis does not expose partial results.; The imported Program and temporary project are ephemeral and deleted on close. Annotation operations edit session database metadata; original executable bytes are never written.; Cancelling an active Ghidra request terminates its ephemeral database and discards session annotations. The selected target remains open; the next provider query imports the original artifact again.; Default-space addresses use lowercase 0x-prefixed hexadecimal; other address spaces use <percent-encoded-space>:0x<hex>.; The Ghidra Program references PDB WinIspPlugIn.pdb (GUID d9f398c7-6c98-49a8-af25-a0659d5ad2f3, age (hex) 1, signature unknown, version RSDS); Ghidra reports load state unknown. Original names and types may be missing; an empty name search does not prove a procedure is absent. Use list_procedures and address-based analysis to inspect recovered functions. REA does not admit a caller-selected PDB companion.; This session uses Ghidra 12.1.2. The bridge is verified against 12.1.4; other 12.1.x builds are accepted and the observed version is reported.; Pseudocode is Ghidra decompiler output, not original source and not text-equivalent to Hopper output.; External functions and functions without an analyzable body return null; other decompiler failures remain explicit.
// pseudocode: provider-specific; not original source


/* WARNING: Function: __alloca_probe replaced with injection: alloca_probe */

void FUN_10021b00(undefined4 param_1)

{
  uint uVar1;
  int iVar2;
  undefined4 *puVar3;
  DWORD DVar4;
  uint in_ECX;
  int in_EDX;
  undefined1 local_11ac [4];
  int local_11a8;
  uint local_11a4;
  uint local_11a0;
  uint local_119c;
  undefined4 local_1198;
  undefined4 *local_1194;
  int local_1190;
  DWORD local_118c;
  undefined1 local_1188 [52];
  undefined1 local_1154 [252];
  undefined **local_1058;
  undefined4 local_1054;
  undefined4 local_1050;
  undefined **local_1048;
  undefined2 local_1044;
  undefined4 local_1034;
  undefined4 local_1030;
  undefined1 local_102c;
  undefined4 local_101c;
  undefined4 local_1018;
  undefined1 local_1014 [4096];
  uint local_14;
  void *local_10;
  undefined1 *puStack_c;
  undefined4 local_8;
  
  local_8 = 0xffffffff;
  puStack_c = &LAB_101c2187;
  local_10 = ExceptionList;
  uVar1 = DAT_1023dfec ^ (uint)&stack0xfffffffc;
  ExceptionList = &local_10;
  local_11a8 = in_EDX;
  local_14 = uVar1;
  _memset(local_1014,0,0x1000);
  local_1030 = 7;
  local_1034 = 0;
  local_1044 = 0;
  local_1048 = CCpRsString::vftable;
  local_1018 = 0xf;
  local_101c = 0;
  local_102c = 0;
  local_8 = 0;
  FUN_1000d890(uVar1);
  local_1058 = CCpTransform::vftable;
  local_1050 = 0;
  local_1054 = 0;
  local_8._0_1_ = 2;
  local_1194 = (undefined4 *)0x0;
  local_1190 = 0;
  local_1194 = (undefined4 *)FUN_1000d7a0();
  local_8._0_1_ = 3;
  local_11a4 = in_ECX & 0xf000;
  local_1198 = 0;
  local_119c = local_11a4 >> 0xc;
  local_118c = 0;
  local_11a0 = in_ECX >> 0x10;
  if ((in_ECX & 0xfff) + in_EDX < 0x1001) {
    FUN_10047bd0(&DAT_1024a108);
    FUN_1000df70();
    if (local_1190 == 0) {
      FUN_10048350(&local_1048,L"Flash Data Map Empty!");
      FUN_1003fc00();
      FUN_10016860();
    }
    else {
      (**(code **)(*DAT_10249d10 + 0x94))(200);
      iVar2 = FUN_1001bbd0();
      if ((iVar2 == 0) && (iVar2 = FUN_10016b00(), DVar4 = local_118c, iVar2 == 0)) {
        iVar2 = FUN_1001aa50();
        if (iVar2 == 0) {
          iVar2 = FUN_10017300();
          if (iVar2 == 0) {
            iVar2 = FUN_1001a050();
            if (iVar2 == 0) {
              (**(code **)(*DAT_10249d10 + 0x94))(DAT_1024a364);
              iVar2 = FUN_1001d560(DVar4);
              if (iVar2 == 0) {
                iVar2 = FUN_1000da90(local_1188);
                puVar3 = (undefined4 *)(iVar2 + 4);
                local_8._0_1_ = 4;
                if (7 < *(uint *)(iVar2 + 0x18)) {
                  puVar3 = (undefined4 *)*puVar3;
                }
                FUN_10048350(&local_1048,L"Flash Name: %ls",puVar3);
                local_8._0_1_ = 3;
                FUN_10048130();
                FUN_1003fc00();
                FUN_10016860();
                iVar2 = FUN_1001db90();
                if (iVar2 == 0) {
                  iVar2 = FUN_1001ad20();
                  if (iVar2 == 0) {
                    iVar2 = FUN_1001e8f0();
                    if (iVar2 != 0) {
                      FUN_10048350(&local_1048,L" Disable WP Fail! ");
                      FUN_10016860();
                    }
                    _memset(local_1014,0xff,0x1000);
                    uVar1 = local_11a4;
                    iVar2 = FUN_1003eda0(local_11a0,local_11a4,0x1000,local_1014);
                    if (iVar2 == 0) {
                      if (local_11a8 != 0) {
                        FUN_10197c50(local_1014 + ((in_ECX & 0xffff) - uVar1),param_1,local_11a8);
                      }
                      local_118c = GetTickCount();
                      iVar2 = FUN_1003e610(local_11a0,local_119c & 0xff,local_1154);
                      if (iVar2 == 0) {
                        local_119c = GetTickCount();
                        FUN_10048350(&local_1048,L"Sector erase time : %d ms",
                                     local_119c - local_118c);
                        FUN_10016860();
                        iVar2 = FUN_1003e2a0(in_ECX & 0xfffff000,0x1000,local_1014,local_1154,0);
                        if (iVar2 == 0) {
                          DVar4 = GetTickCount();
                          FUN_10048350(&local_1048,L"write data to flash time : %d ms",
                                       DVar4 - local_119c);
                          FUN_10016860();
                          FUN_10048350(&local_1048,
                                       L"sector erase and write data to flash time : %d ms",
                                       DVar4 - local_118c);
                          FUN_10016860();
                          iVar2 = FUN_1001e7c0();
                          if (iVar2 != 0) {
                            FUN_10048350(&local_1048,L" EnableSoftWareWP Fail!, Error Code:0x%x",
                                         iVar2);
                            FUN_10016860();
                          }
                          iVar2 = FUN_1001dfa0();
                          if (iVar2 != 0) {
                            FUN_10048350(&local_1048,L" JudgeSMBUSType Fail!, Error Code:0x%x",iVar2
                                        );
                            FUN_10016860();
                          }
                        }
                      }
                    }
                  }
                }
                else {
                  FUN_10048350(&local_1048,
                               L" Detect And Config Flash Address Mode Fail!, ErrorCode: 0x%x",iVar2
                              );
                  FUN_1003fc00();
                  FUN_10016860();
                }
              }
              else {
                FUN_10048350(&local_1048,L" Get Flash Type Fail!, ErrorCode: 0x%x",iVar2);
                FUN_1003fc00();
                FUN_10016860();
              }
            }
            else {
              FUN_10048350(&local_1048,L" Set Mcu Reg Default Value!, ErrorCode: 0x%x",iVar2);
              FUN_1003fc00();
              FUN_10016860();
            }
          }
          else {
            FUN_10048350(&local_1048,L" TypeC Usb Isp Check Fail!, ErrorCode: 0x%x",iVar2);
            FUN_1003fc00();
            FUN_10016860();
          }
        }
        else {
          FUN_10048350(&local_1048,L" Get Flash Mode Fail!, ErrorCode: 0x%x",iVar2);
          FUN_1003fc00();
          FUN_10016860();
        }
      }
    }
  }
  else {
    FUN_10048350(&local_1048,L"End Address 0x%x exceed current sector!",in_ECX + in_EDX);
    FUN_1003fc00();
    FUN_10016860();
  }
  FUN_1000d260(local_11ac,*local_1194,local_1194);
  FID_conflict__free(local_1194);
  FUN_10048130();
  FUN_10048130();
  FUN_10048130();
  FUN_10048130();
  FUN_10048130();
  ExceptionList = local_10;
  __security_check_cookie(local_14 ^ (uint)&stack0xfffffffc);
  return;
}

