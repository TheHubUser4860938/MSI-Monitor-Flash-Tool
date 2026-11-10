// rea decompile_all
// name: FUN_1002ade0
// address: 0x1002ade0
// body: available
// range: 0x1002ade0-0x1002b0be inclusive
// non_contiguous: false
// provider: Ghidra 12.1.2 (ghidra)
// analysis_profile: b075844f08879296d957518397cd0ddda73db81dce53d00d3f0e702766fc2af6
// limitations: The session serves operations only after Ghidra reports default auto-analysis complete; incomplete analysis does not expose partial results.; The imported Program and temporary project are ephemeral and deleted on close. Annotation operations edit session database metadata; original executable bytes are never written.; Cancelling an active Ghidra request terminates its ephemeral database and discards session annotations. The selected target remains open; the next provider query imports the original artifact again.; Default-space addresses use lowercase 0x-prefixed hexadecimal; other address spaces use <percent-encoded-space>:0x<hex>.; The Ghidra Program references PDB WinIspPlugIn.pdb (GUID d9f398c7-6c98-49a8-af25-a0659d5ad2f3, age (hex) 1, signature unknown, version RSDS); Ghidra reports load state unknown. Original names and types may be missing; an empty name search does not prove a procedure is absent. Use list_procedures and address-based analysis to inspect recovered functions. REA does not admit a caller-selected PDB companion.; This session uses Ghidra 12.1.2. The bridge is verified against 12.1.4; other 12.1.x builds are accepted and the observed version is reported.; Pseudocode is Ghidra decompiler output, not original source and not text-equivalent to Hopper output.; External functions and functions without an analyzable body return null; other decompiler failures remain explicit.
// pseudocode: provider-specific; not original source


/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_1002ade0(uint param_1)

{
  uint uVar1;
  int iVar2;
  int in_ECX;
  int in_EDX;
  uint local_58;
  undefined1 local_51;
  undefined **local_50;
  uint local_4c;
  undefined4 local_3c;
  uint local_38;
  uint local_34;
  undefined4 local_24;
  uint local_20;
  undefined1 local_1c;
  undefined4 local_1b;
  undefined1 local_17;
  uint local_14;
  void *local_10;
  undefined1 *puStack_c;
  undefined4 local_8;
  
  puStack_c = &LAB_101c28d8;
  local_10 = ExceptionList;
  local_14 = DAT_1023dfec ^ (uint)&stack0xfffffffc;
  ExceptionList = &local_10;
  local_38 = 7;
  local_3c = 0;
  local_4c = local_4c & 0xffff0000;
  local_50 = CCpRsString::vftable;
  local_20 = 0xf;
  local_24 = 0;
  local_34 = local_34 & 0xffffff00;
  local_8 = 0;
  local_51 = 0;
  local_1c = 0;
  local_1b = 0;
  local_17 = 0;
  FUN_10048350(&local_50,L"3.Send Backgroudn FW Update Write Data Command",local_14);
  FUN_10016860();
  local_58 = 0;
  if (param_1 / *(ushort *)(in_ECX + 0x18) != 0) {
    do {
      DAT_1024a1b8 = DAT_1024a1b8 + _DAT_1024a1b4;
      if (DAT_1024a1b8 < DAT_1024a1b0) {
        uVar1 = ((DAT_1024a1b8 - _DAT_1024a1ac) * 100) / (DAT_1024a1b0 - _DAT_1024a1ac);
        if (99 < uVar1) {
          uVar1 = 99;
        }
      }
      else {
        uVar1 = 99;
      }
      FUN_1002d7c0(uVar1);
      FUN_10048350(&local_50,L"Write data packet: %d",local_58);
      FUN_10016860();
      iVar2 = FUN_1002aa00();
      if (iVar2 != 0) {
        FUN_10048350(&local_50,
                     L"Polling status fail in write data error code:0x%x, Send Exit Command",iVar2);
        FUN_10016860();
        local_51 = 4;
        (**(code **)(*DAT_10249d10 + 0x54))(0x3a,0x31,1,&local_51);
        break;
      }
      if (*(int *)(in_ECX + 0x1c) != 0) {
        uVar1 = *(ushort *)(in_ECX + 0x18) * local_58;
        if ((short)uVar1 == 0) {
          FUN_10048350(&local_50,L"Send Backgroud FW Update Bank Change  ",uVar1 >> 0x10);
          FUN_10016860();
          local_1c = 8;
          local_1b._0_2_ = CONCAT11((char)(uVar1 >> 0x10),(char)(uVar1 >> 0x18));
          iVar2 = (**(code **)(*DAT_10249d10 + 0x54))(0x3a,0x31,3,&local_1c);
          if (iVar2 != 0) {
            FUN_10048350(&local_50,L"Send Backgroudn FW Update Start Command Error Code %d",iVar2);
            FUN_10016860();
            break;
          }
        }
        iVar2 = FUN_1002aa00();
        if (iVar2 != 0) {
          FUN_10048350(&local_50,
                       L"Polling status fail in write data hw isp speed up error code:0x%x",iVar2);
          FUN_10016860();
          local_1c = 4;
          (**(code **)(*DAT_10249d10 + 0x54))(0x3a,0x31,1,&local_1c);
          break;
        }
      }
      iVar2 = (**(code **)(*DAT_10249d10 + 0x74))
                        (0x3a,0x32,(uint)*(ushort *)(in_ECX + 0x18),
                         *(ushort *)(in_ECX + 0x18) * local_58 + in_EDX,0);
      if (iVar2 != 0) {
        FUN_10048350(&local_50,L"Write data fail! error Code %d",iVar2);
        FUN_10016860();
        break;
      }
      Sleep(*(DWORD *)(in_ECX + 0xc));
      local_58 = local_58 + 1;
    } while (local_58 < param_1 / *(ushort *)(in_ECX + 0x18));
  }
  local_50 = CCpRsString::vftable;
  if (0xf < local_20) {
    FUN_1000b630(local_34,local_20 + 1);
  }
  local_20 = 0xf;
  local_24 = 0;
  local_34 = local_34 & 0xffffff00;
  if (7 < local_38) {
    FUN_1000b5d0(local_4c,local_38 + 1);
  }
  ExceptionList = local_10;
  __security_check_cookie(local_14 ^ (uint)&stack0xfffffffc);
  return;
}

