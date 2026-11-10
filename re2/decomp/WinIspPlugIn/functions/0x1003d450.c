// rea decompile_all
// name: FUN_1003d450
// address: 0x1003d450
// body: available
// range: 0x1003d450-0x1003d75e inclusive
// non_contiguous: false
// provider: Ghidra 12.1.2 (ghidra)
// analysis_profile: b075844f08879296d957518397cd0ddda73db81dce53d00d3f0e702766fc2af6
// limitations: The session serves operations only after Ghidra reports default auto-analysis complete; incomplete analysis does not expose partial results.; The imported Program and temporary project are ephemeral and deleted on close. Annotation operations edit session database metadata; original executable bytes are never written.; Cancelling an active Ghidra request terminates its ephemeral database and discards session annotations. The selected target remains open; the next provider query imports the original artifact again.; Default-space addresses use lowercase 0x-prefixed hexadecimal; other address spaces use <percent-encoded-space>:0x<hex>.; The Ghidra Program references PDB WinIspPlugIn.pdb (GUID d9f398c7-6c98-49a8-af25-a0659d5ad2f3, age (hex) 1, signature unknown, version RSDS); Ghidra reports load state unknown. Original names and types may be missing; an empty name search does not prove a procedure is absent. Use list_procedures and address-based analysis to inspect recovered functions. REA does not admit a caller-selected PDB companion.; This session uses Ghidra 12.1.2. The bridge is verified against 12.1.4; other 12.1.x builds are accepted and the observed version is reported.; Pseudocode is Ghidra decompiler output, not original source and not text-equivalent to Hopper output.; External functions and functions without an analyzable body return null; other decompiler failures remain explicit.
// pseudocode: provider-specific; not original source


/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

int FUN_1003d450(uint param_1,undefined4 param_2,int param_3,int param_4,int param_5)

{
  undefined1 uVar1;
  char cVar2;
  int iVar3;
  uint uVar4;
  int iVar5;
  uint uVar6;
  undefined4 local_10;
  int local_c;
  char local_5;
  
  local_5 = '\0';
  uVar1 = (**(code **)(*DAT_10249d10 + 0x3c))();
  iVar3 = (**(code **)(*DAT_10249d10 + 0xf0))(0x6d,2);
  if (iVar3 == 0) {
    local_c = 0;
    uVar6 = param_1;
    do {
      iVar3 = local_c;
      uVar4 = 0xff;
      do {
        if (*(char *)(param_3 + uVar4) != -1) break;
        uVar4 = uVar4 - 1;
      } while (uVar4 < 0x100);
      if ((short)uVar4 != -1) {
        if (*(int *)(param_4 + 0x58) != 0) {
          local_10 = *(undefined4 *)(param_4 + 0x50);
          iVar5 = FUN_1003cb60(&local_10,param_4);
          if (iVar5 != 0) {
            return iVar5;
          }
        }
        iVar5 = FUN_1001c4c0(0x10,20000);
        if (iVar5 != 0) {
          return iVar5;
        }
        iVar5 = (**(code **)(*DAT_10249d10 + 0xf0))(0x71,0xff);
        if (iVar5 != 0) {
          return iVar5;
        }
        iVar5 = (**(code **)(*DAT_10249d10 + 0x74))(uVar1,0x70,0x100,param_3,0);
        if (iVar5 != 0) {
          return iVar5;
        }
        iVar5 = FUN_1001c4c0(0,20000);
        if (iVar5 != 0) {
          return iVar5;
        }
        if ((DAT_1024e45c == 1) &&
           (iVar5 = (**(code **)(*DAT_10249d10 + 0xf0))(1,uVar6 >> 0x18), iVar5 != 0)) {
          return iVar5;
        }
        iVar5 = (**(code **)(*DAT_10249d10 + 0xf0))(100,uVar6 >> 0x10);
        if (iVar5 != 0) {
          return iVar5;
        }
        iVar5 = (**(code **)(*DAT_10249d10 + 0xf0))(0x65,uVar6 >> 8);
        if (iVar5 != 0) {
          return iVar5;
        }
        iVar5 = (**(code **)(*DAT_10249d10 + 0xf0))(0x66,uVar6);
        if (iVar5 != 0) {
          return iVar5;
        }
        iVar5 = (**(code **)(*DAT_10249d10 + 0xf4))(0x6f,0xff,0x20);
        if (iVar5 != 0) {
          return iVar5;
        }
        iVar5 = FUN_1001c4c0(0,20000);
        if (iVar5 != 0) {
          return iVar5;
        }
        if ((short)iVar3 == 0) {
          iVar3 = FUN_1001c4c0(0,20000);
          if (iVar3 != 0) {
            return iVar3;
          }
          cVar2 = FUN_1001c910();
          iVar3 = FUN_1001c530(&local_5);
          if (iVar3 != 0) {
            return iVar3;
          }
          iVar3 = local_c;
          if (local_5 != cVar2) {
            FUN_10048350(&DAT_1024a13c,L"First Page Check CRC Fail, StartAddr: 0x%x ProLen: 0x%x",
                         param_1,0x1000);
            FUN_10016860();
            return 0xd04;
          }
        }
      }
      uVar6 = uVar6 + 0x100;
      param_3 = param_3 + 0x100;
      local_c = iVar3 + 1;
    } while ((ushort)local_c < 0x10);
    cVar2 = FUN_1001c910();
    iVar3 = FUN_1001c530(&local_5);
    if (iVar3 == 0) {
      if (local_5 != cVar2) {
        FUN_10048350(&DAT_1024a13c,L"Check CRC Fail, StartAddr: 0x%x ProLen: 0x%x",param_1,0x1000);
        FUN_10016860();
        return 0xd06;
      }
      if (param_5 != 0) {
        iVar3 = 0x10;
        do {
          DAT_1024a1b8 = DAT_1024a1b8 + _DAT_1024a1b4;
          uVar6 = 99;
          if ((DAT_1024a1b8 < DAT_1024a1b0) &&
             (uVar6 = ((DAT_1024a1b8 - _DAT_1024a1ac) * 100) / (DAT_1024a1b0 - _DAT_1024a1ac),
             99 < uVar6)) {
            uVar6 = 99;
          }
          FUN_1002d7c0(uVar6);
          iVar3 = iVar3 + -1;
        } while (iVar3 != 0);
      }
      iVar3 = 0;
    }
  }
  return iVar3;
}

