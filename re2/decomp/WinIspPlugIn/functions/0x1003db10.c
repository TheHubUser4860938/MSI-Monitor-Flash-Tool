// rea decompile_all
// name: FUN_1003db10
// address: 0x1003db10
// body: available
// range: 0x1003db10-0x1003deff inclusive
// non_contiguous: false
// provider: Ghidra 12.1.2 (ghidra)
// analysis_profile: b075844f08879296d957518397cd0ddda73db81dce53d00d3f0e702766fc2af6
// limitations: The session serves operations only after Ghidra reports default auto-analysis complete; incomplete analysis does not expose partial results.; The imported Program and temporary project are ephemeral and deleted on close. Annotation operations edit session database metadata; original executable bytes are never written.; Cancelling an active Ghidra request terminates its ephemeral database and discards session annotations. The selected target remains open; the next provider query imports the original artifact again.; Default-space addresses use lowercase 0x-prefixed hexadecimal; other address spaces use <percent-encoded-space>:0x<hex>.; The Ghidra Program references PDB WinIspPlugIn.pdb (GUID d9f398c7-6c98-49a8-af25-a0659d5ad2f3, age (hex) 1, signature unknown, version RSDS); Ghidra reports load state unknown. Original names and types may be missing; an empty name search does not prove a procedure is absent. Use list_procedures and address-based analysis to inspect recovered functions. REA does not admit a caller-selected PDB companion.; This session uses Ghidra 12.1.2. The bridge is verified against 12.1.4; other 12.1.x builds are accepted and the observed version is reported.; Pseudocode is Ghidra decompiler output, not original source and not text-equivalent to Hopper output.; External functions and functions without an analyzable body return null; other decompiler failures remain explicit.
// pseudocode: provider-specific; not original source


int FUN_1003db10(uint param_1,uint param_2,int param_3,int param_4,int param_5)

{
  uint uVar1;
  undefined1 uVar2;
  char cVar3;
  int iVar4;
  uint uVar5;
  undefined4 extraout_ECX;
  undefined4 extraout_ECX_00;
  int iVar6;
  undefined4 local_28;
  uint local_24;
  undefined4 local_20;
  uint local_1c;
  uint local_18;
  uint local_14;
  int local_10;
  uint local_c;
  undefined1 local_6;
  char local_5;
  
  iVar6 = 0;
  local_5 = '\0';
  local_10 = 0;
  local_6 = 0x78;
  if (param_3 == 0) {
    return 0xd51;
  }
  if (param_2 != 0) {
    iVar4 = (**(code **)(*DAT_10249d10 + 0x14))();
    if (iVar4 == 8) {
      return 0xd87;
    }
    uVar2 = (**(code **)(*DAT_10249d10 + 0x3c))();
    local_20 = CONCAT31(local_20._1_3_,uVar2);
    local_14 = 0x100 - (param_1 & 0xff) & 0xffff;
    if (param_2 < local_14) {
      local_14 = param_2 & 0xffff;
      uVar5 = 0;
    }
    else {
      uVar5 = param_2 - local_14;
    }
    local_c = param_1;
    if ((char)uVar5 == '\0') {
      local_24 = (uVar5 >> 8) + 1 & 0xffff;
      local_18 = local_14;
      if (local_24 != 1) {
        local_18 = 0x100;
      }
    }
    else {
      local_24 = (uVar5 >> 8) + 2 & 0xffff;
      local_18 = uVar5 & 0xff;
    }
    uVar5 = local_24;
    iVar4 = (**(code **)(*DAT_10249d10 + 0xc4))(0x84f,2);
    if (iVar4 != 0) {
      return iVar4;
    }
    local_1c = 0;
    uVar1 = 0;
    if ((short)uVar5 != 0) {
      do {
        if ((short)local_1c == 0) {
          uVar5 = local_14 & 0xffff;
        }
        else if ((uVar5 & 0xffff) - 1 == (local_1c & 0xffff)) {
          uVar5 = local_18 & 0xffff;
        }
        else {
          uVar5 = 0x100;
        }
        uVar1 = uVar5;
        do {
          uVar1 = uVar1 - 1;
          if (uVar5 <= uVar1) break;
        } while (*(char *)(uVar1 + iVar6 + param_3) == -1);
        if ((short)uVar1 == -1) {
          local_c = local_c + uVar5;
          iVar6 = local_10 + uVar5;
          local_10 = iVar6;
        }
        else {
          if (*(int *)(param_4 + 0x58) != 0) {
            local_28 = *(undefined4 *)(param_4 + 0x50);
            iVar4 = FUN_1003cb60(&local_28,param_4);
            if (iVar4 != 0) {
              return iVar4;
            }
          }
          iVar4 = (**(code **)(*DAT_10249d10 + 0xc4))(0x853,(char)uVar5 + -1);
          if (iVar4 != 0) {
            return iVar4;
          }
          iVar4 = FUN_1001c450(0x10,extraout_ECX);
          if (iVar4 != 0) {
            return iVar4;
          }
          if ((DAT_1024e45c == 1) &&
             (iVar4 = (**(code **)(*DAT_10249d10 + 0xc4))(0x845,param_1 >> 0x18), iVar4 != 0)) {
            return iVar4;
          }
          uVar1 = local_c;
          iVar4 = (**(code **)(*DAT_10249d10 + 0xc4))(0x846,local_c >> 0x10);
          if (iVar4 != 0) {
            return iVar4;
          }
          iVar4 = (**(code **)(*DAT_10249d10 + 0xc4))(0x847,uVar1 >> 8);
          if (iVar4 != 0) {
            return iVar4;
          }
          iVar4 = (**(code **)(*DAT_10249d10 + 0xc4))(0x848,uVar1);
          if (iVar4 != 0) {
            return iVar4;
          }
          iVar4 = (**(code **)(*DAT_10249d10 + 0xf0))(0xf3,0x20);
          if (iVar4 != 0) {
            return iVar4;
          }
          iVar4 = (**(code **)(*DAT_10249d10 + 0xc4))(0x879,0);
          if (iVar4 != 0) {
            return iVar4;
          }
          iVar4 = (**(code **)(*DAT_10249d10 + 0xc4))(0x87a,0);
          if (iVar4 != 0) {
            return iVar4;
          }
          iVar4 = (**(code **)(*DAT_10249d10 + 0x54))(local_20,0xf4,1,&local_6);
          if (iVar4 != 0) {
            return iVar4;
          }
          iVar6 = (**(code **)(*DAT_10249d10 + 0x74))(local_20,0xf5,0x100,iVar6 + param_3,0);
          if (iVar6 != 0) {
            return iVar6;
          }
          iVar6 = (**(code **)(*DAT_10249d10 + 0xd0))(0x851,0xff,0x20);
          if (iVar6 != 0) {
            return iVar6;
          }
          iVar6 = FUN_1001c450(0,extraout_ECX_00);
          if (iVar6 != 0) {
            return iVar6;
          }
          local_c = uVar1 + uVar5;
          iVar6 = local_10 + uVar5;
          local_10 = iVar6;
          if ((short)local_1c == 0) {
            cVar3 = FUN_1001c910();
            iVar4 = FUN_1001c530(&local_5);
            if (iVar4 != 0) {
              return iVar4;
            }
            if (local_5 != cVar3) {
              FUN_10048350(&DAT_1024a13c,L"First Page Check CRC Fail, StartAddr: 0x%x ProLen: 0x%x",
                           param_1,param_2);
              FUN_10016860();
              return 0xd04;
            }
          }
          if (param_5 != 0) {
            FUN_1002da20();
          }
        }
        local_1c = local_1c + 1;
        uVar5 = local_24;
        uVar1 = local_1c;
      } while ((ushort)local_1c < (ushort)local_24);
    }
    local_1c = uVar1;
    cVar3 = FUN_1001c910();
    iVar6 = FUN_1001c530(&local_5);
    if (iVar6 != 0) {
      return iVar6;
    }
    if (local_5 != cVar3) {
      FUN_10048350(&DAT_1024a13c,L"Check CRC Fail, StartAddr: 0x%x ProLen: 0x%x",param_1,param_2);
      FUN_10016860();
      return 0xd06;
    }
  }
  return 0;
}

