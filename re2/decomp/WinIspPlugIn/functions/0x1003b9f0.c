// rea decompile_all
// name: FUN_1003b9f0
// address: 0x1003b9f0
// body: available
// range: 0x1003b9f0-0x1003bcac inclusive
// non_contiguous: false
// provider: Ghidra 12.1.2 (ghidra)
// analysis_profile: b075844f08879296d957518397cd0ddda73db81dce53d00d3f0e702766fc2af6
// limitations: The session serves operations only after Ghidra reports default auto-analysis complete; incomplete analysis does not expose partial results.; The imported Program and temporary project are ephemeral and deleted on close. Annotation operations edit session database metadata; original executable bytes are never written.; Cancelling an active Ghidra request terminates its ephemeral database and discards session annotations. The selected target remains open; the next provider query imports the original artifact again.; Default-space addresses use lowercase 0x-prefixed hexadecimal; other address spaces use <percent-encoded-space>:0x<hex>.; The Ghidra Program references PDB WinIspPlugIn.pdb (GUID d9f398c7-6c98-49a8-af25-a0659d5ad2f3, age (hex) 1, signature unknown, version RSDS); Ghidra reports load state unknown. Original names and types may be missing; an empty name search does not prove a procedure is absent. Use list_procedures and address-based analysis to inspect recovered functions. REA does not admit a caller-selected PDB companion.; This session uses Ghidra 12.1.2. The bridge is verified against 12.1.4; other 12.1.x builds are accepted and the observed version is reported.; Pseudocode is Ghidra decompiler output, not original source and not text-equivalent to Hopper output.; External functions and functions without an analyzable body return null; other decompiler failures remain explicit.
// pseudocode: provider-specific; not original source


void FUN_1003b9f0(void)

{
  int iVar1;
  char in_CL;
  int *in_EDX;
  int iVar2;
  undefined **local_88;
  uint local_84;
  undefined4 local_74;
  uint local_70;
  uint local_6c;
  undefined4 local_5c;
  uint local_58;
  undefined **local_54;
  uint local_50;
  undefined4 local_40;
  uint local_3c;
  uint local_38;
  undefined4 local_28;
  uint local_24;
  undefined1 local_20;
  undefined1 uStack_1f;
  byte bStack_1e;
  undefined1 uStack_1d;
  undefined1 local_1c;
  int local_1b;
  uint local_14;
  void *local_10;
  undefined1 *puStack_c;
  undefined4 local_8;
  
  iVar2 = DAT_1024be74;
  puStack_c = &LAB_101c3793;
  local_10 = ExceptionList;
  local_14 = DAT_1023dfec ^ (uint)&stack0xfffffffc;
  ExceptionList = &local_10;
  local_20 = 0x6e;
  uStack_1f = 0x51;
  bStack_1e = 0x86;
  uStack_1d = 0x53;
  local_1c = 1;
  local_1b = 0;
  local_70 = 7;
  local_74 = 0;
  local_84 = local_84 & 0xffff0000;
  local_88 = CCpRsString::vftable;
  local_58 = 0xf;
  local_5c = 0;
  local_6c = local_6c & 0xffffff00;
  local_40 = 0;
  local_50 = local_50 & 0xffff0000;
  local_3c = 7;
  local_54 = CCpRsString::vftable;
  local_24 = 0xf;
  local_28 = 0;
  local_38 = local_38 & 0xffffff00;
  local_8 = 1;
  if (in_CL == '\x04') {
    local_1b = *in_EDX;
    FUN_10048350(&local_54,L"Enter function isp HP friends package version",local_14);
    FUN_10016860();
    FUN_10048350(&local_88,L"delay time between send cmd %d",DAT_1024be70);
    FUN_10016860();
    FUN_10048350(&local_88,L"Package verison want to update: %d.%d.%d.%d",(char)*in_EDX,
                 *(undefined1 *)((int)in_EDX + 1),*(undefined1 *)((int)in_EDX + 2),
                 *(undefined1 *)((int)in_EDX + 3));
    FUN_10016860();
    for (; 0 < iVar2; iVar2 = iVar2 + -1) {
      FUN_10048350(&local_54,L"Get HP friends package version retry count:%d",
                   (DAT_1024be74 - iVar2) + 1);
      FUN_10016860();
      iVar1 = (**(code **)(*DAT_10249d10 + 0x13c))
                        (CONCAT13(uStack_1d,CONCAT12(bStack_1e,CONCAT11(uStack_1f,local_20))),
                         CONCAT13(local_1c,CONCAT12(uStack_1d,CONCAT11(bStack_1e,uStack_1f))),
                         bStack_1e & 0x7f,&uStack_1d);
      if (iVar1 == 0) {
        Sleep(DAT_1024be70);
        iVar1 = FUN_10036bf0();
        if (iVar1 == 0) {
          if (*in_EDX == 0) break;
        }
        else {
          FUN_10048350(&local_88,L"Read user defined merge info of HP friends fail, error code:0x%x"
                       ,iVar1);
          FUN_10016860();
        }
      }
      else {
        FUN_10048350(&local_88,L"DDCCI write fail, error code:0x%x",iVar1);
        FUN_10016860();
      }
    }
  }
  local_54 = CCpRsString::vftable;
  if (0xf < local_24) {
    FUN_1000b630(local_38,local_24 + 1);
  }
  local_24 = 0xf;
  local_28 = 0;
  local_38 = local_38 & 0xffffff00;
  if (7 < local_3c) {
    FUN_1000b5d0(local_50,local_3c + 1);
  }
  local_3c = 7;
  local_50 = local_50 & 0xffff0000;
  local_40 = 0;
  local_88 = CCpRsString::vftable;
  if (0xf < local_58) {
    FUN_1000b630(local_6c,local_58 + 1);
  }
  local_58 = 0xf;
  local_5c = 0;
  local_6c = local_6c & 0xffffff00;
  if (7 < local_70) {
    FUN_1000b5d0(local_84,local_70 + 1);
  }
  ExceptionList = local_10;
  __security_check_cookie(local_14 ^ (uint)&stack0xfffffffc);
  return;
}

