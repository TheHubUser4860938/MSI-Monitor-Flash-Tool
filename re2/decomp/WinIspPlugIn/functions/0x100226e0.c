// rea decompile_all
// name: FUN_100226e0
// address: 0x100226e0
// body: available
// range: 0x100226e0-0x10022aca inclusive
// non_contiguous: false
// provider: Ghidra 12.1.2 (ghidra)
// analysis_profile: b075844f08879296d957518397cd0ddda73db81dce53d00d3f0e702766fc2af6
// limitations: The session serves operations only after Ghidra reports default auto-analysis complete; incomplete analysis does not expose partial results.; The imported Program and temporary project are ephemeral and deleted on close. Annotation operations edit session database metadata; original executable bytes are never written.; Cancelling an active Ghidra request terminates its ephemeral database and discards session annotations. The selected target remains open; the next provider query imports the original artifact again.; Default-space addresses use lowercase 0x-prefixed hexadecimal; other address spaces use <percent-encoded-space>:0x<hex>.; The Ghidra Program references PDB WinIspPlugIn.pdb (GUID d9f398c7-6c98-49a8-af25-a0659d5ad2f3, age (hex) 1, signature unknown, version RSDS); Ghidra reports load state unknown. Original names and types may be missing; an empty name search does not prove a procedure is absent. Use list_procedures and address-based analysis to inspect recovered functions. REA does not admit a caller-selected PDB companion.; This session uses Ghidra 12.1.2. The bridge is verified against 12.1.4; other 12.1.x builds are accepted and the observed version is reported.; Pseudocode is Ghidra decompiler output, not original source and not text-equivalent to Hopper output.; External functions and functions without an analyzable body return null; other decompiler failures remain explicit.
// pseudocode: provider-specific; not original source


/* WARNING: Removing unreachable block (ram,0x100228f6) */
/* WARNING: Removing unreachable block (ram,0x100228fd) */
/* WARNING: Removing unreachable block (ram,0x10022902) */
/* WARNING: Removing unreachable block (ram,0x10022908) */
/* WARNING: Removing unreachable block (ram,0x1002291c) */
/* WARNING: Removing unreachable block (ram,0x10022929) */
/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_100226e0(void)

{
  undefined1 uVar1;
  undefined1 uVar2;
  int iVar3;
  uint uVar4;
  undefined4 in_ECX;
  uint local_1c;
  byte local_14;
  undefined8 local_13;
  undefined1 local_b;
  uint local_8;
  
  local_8 = DAT_1023dfec ^ (uint)&stack0xfffffffc;
  local_1c = 0;
  local_14 = 0;
  local_13 = 0;
  local_b = 0;
  iVar3 = (**(code **)(*DAT_10249d10 + 0x14))();
  if ((iVar3 == 3) || (iVar3 = (**(code **)(*DAT_10249d10 + 0x14))(), iVar3 == 0xe)) {
    (**(code **)(*DAT_10249d10 + 0xa0))(2,100);
  }
  FUN_10048350(&DAT_1024a13c,L"=== Get Key From Flash Start ===");
  FUN_10016860();
  DAT_1024a1b8 = DAT_1024a1b8 + _DAT_1024a1b4;
  if (DAT_1024a1b8 < DAT_1024a1b0) {
    uVar4 = ((DAT_1024a1b8 - _DAT_1024a1ac) * 100) / (DAT_1024a1b0 - _DAT_1024a1ac);
    if (99 < uVar4) {
      uVar4 = 99;
    }
  }
  else {
    uVar4 = 99;
  }
  FUN_1002d7c0(uVar4);
  if (DAT_1024a2f0 != 1) {
LAB_10022a9c:
    FUN_10048350(&DAT_1024a13c,L"=== Get Key From Flash End ===");
    FUN_10016860();
    __security_check_cookie(local_8 ^ (uint)&stack0xfffffffc);
    return;
  }
  iVar3 = (**(code **)(*DAT_10249d10 + 0x14))();
  if (iVar3 == 8) {
    iVar3 = (**(code **)(*DAT_10249d10 + 0x220))(0x45,8,0,5,&local_14);
    if (iVar3 != 0) goto LAB_10022a6c;
    if (local_14 != 0x45) {
      __security_check_cookie(local_8 ^ (uint)&stack0xfffffffc);
      return;
    }
    local_1c = CONCAT31(CONCAT21(CONCAT11((byte)local_13,local_13._1_1_),local_13._2_1_),
                        local_13._3_1_);
    FUN_10048350(&DAT_1024a13c,L"Ask for current address: ulFlagStartAddr 0x%X",local_1c);
    FUN_10016860();
  }
  else {
    FUN_10048350(&DAT_1024a13c,L"GetKeyStart: Flag :%d",DAT_1024a384);
    FUN_10016860();
    FUN_1002da20();
    iVar3 = FUN_10019df0();
    if (iVar3 == 0) {
      __security_check_cookie(local_8 ^ (uint)&stack0xfffffffc);
      return;
    }
    FUN_1002da20();
    iVar3 = FUN_10022ad0();
    if (iVar3 != 0) {
      iVar3 = (**(code **)(*DAT_10249d10 + 0x14))();
      if ((iVar3 == 2) && (DAT_1024a384 != 0)) {
        FUN_10019030();
        __security_check_cookie(local_8 ^ (uint)&stack0xfffffffc);
        return;
      }
      goto LAB_10022a6c;
    }
    FUN_1002da20();
    FUN_1002da20();
    iVar3 = (**(code **)(*DAT_10249d10 + 0x14))();
    if (((iVar3 == 2) && (DAT_1024a384 != 0)) && (iVar3 = FUN_10019030(), iVar3 != 0))
    goto LAB_10022a6c;
  }
  iVar3 = FUN_1001bbd0();
  if (iVar3 == 0) {
    FUN_1002da20();
    iVar3 = FUN_1003eda0(local_1c >> 0x10,local_1c & 0xffff,4,&local_14);
    if (iVar3 == 0) {
      FUN_1002da20();
      uVar2 = local_13._2_1_;
      uVar1 = local_13._1_1_;
      uVar4 = ((uint)local_13._1_2_ * 0x100 + (uint)(byte)local_13) * 0x100 + (uint)local_14;
      FUN_10048350(&DAT_1024a13c,L"Buff[0]:0x%x, Buff[1]:0x%x, Buff[2]:0x%x, Buff[3]:0x%x",
                   (uint)local_14,(uint)(byte)local_13,uVar1,uVar2);
      FUN_10016860();
      FUN_10048350(&DAT_1024a13c,L"Get Current Key address enumError:0x%X ulKeyLen: %d",0,uVar4);
      FUN_10016860();
      FUN_1002da20();
      if ((DAT_1024e4c8 == 0) || (iVar3 = FUN_10022150(), iVar3 == 0)) {
        if (0x4c4 < uVar4) {
          __security_check_cookie(local_8 ^ (uint)&stack0xfffffffc);
          return;
        }
        iVar3 = FUN_1003eda0(local_1c + 4 >> 0x10 & 0xff,local_1c + 4,uVar4,in_ECX);
        if (iVar3 == 0) {
          FUN_1002da20();
          FUN_1001b8f0();
          Sleep(DAT_1024a374);
          FUN_1002da20();
          goto LAB_10022a9c;
        }
      }
    }
  }
LAB_10022a6c:
  __security_check_cookie(local_8 ^ (uint)&stack0xfffffffc);
  return;
}

