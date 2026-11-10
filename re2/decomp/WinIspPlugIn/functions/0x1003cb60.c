// rea decompile_all
// name: FUN_1003cb60
// address: 0x1003cb60
// body: available
// range: 0x1003cb60-0x1003cdde inclusive
// non_contiguous: false
// provider: Ghidra 12.1.2 (ghidra)
// analysis_profile: b075844f08879296d957518397cd0ddda73db81dce53d00d3f0e702766fc2af6
// limitations: The session serves operations only after Ghidra reports default auto-analysis complete; incomplete analysis does not expose partial results.; The imported Program and temporary project are ephemeral and deleted on close. Annotation operations edit session database metadata; original executable bytes are never written.; Cancelling an active Ghidra request terminates its ephemeral database and discards session annotations. The selected target remains open; the next provider query imports the original artifact again.; Default-space addresses use lowercase 0x-prefixed hexadecimal; other address spaces use <percent-encoded-space>:0x<hex>.; The Ghidra Program references PDB WinIspPlugIn.pdb (GUID d9f398c7-6c98-49a8-af25-a0659d5ad2f3, age (hex) 1, signature unknown, version RSDS); Ghidra reports load state unknown. Original names and types may be missing; an empty name search does not prove a procedure is absent. Use list_procedures and address-based analysis to inspect recovered functions. REA does not admit a caller-selected PDB companion.; This session uses Ghidra 12.1.2. The bridge is verified against 12.1.4; other 12.1.x builds are accepted and the observed version is reported.; Pseudocode is Ghidra decompiler output, not original source and not text-equivalent to Hopper output.; External functions and functions without an analyzable body return null; other decompiler failures remain explicit.
// pseudocode: provider-specific; not original source


void FUN_1003cb60(undefined1 *param_1,int param_2)

{
  undefined3 uVar1;
  uint uVar2;
  undefined4 uVar3;
  void *_Dst;
  int iVar4;
  int iVar5;
  uint uVar6;
  undefined1 local_78 [52];
  uint local_44 [4];
  undefined4 local_34;
  uint local_30;
  uint local_2c [4];
  uint local_1c;
  uint local_18;
  uint local_14;
  void *local_10;
  undefined1 *puStack_c;
  undefined1 local_8;
  undefined3 uStack_7;
  
  puStack_c = &LAB_101c391b;
  local_10 = ExceptionList;
  uVar2 = DAT_1023dfec ^ (uint)&stack0xfffffffc;
  ExceptionList = &local_10;
  local_18 = 0xf;
  local_1c = 0;
  local_2c[0] = local_2c[0] & 0xffffff00;
  uStack_7 = 0;
  uVar1 = uStack_7;
  local_8 = 1;
  uStack_7 = 0;
  local_14 = uVar2;
  if (DAT_1024a360 == 0) {
    if (DAT_1024a3bc == 0) {
      if (*(int *)(param_2 + 0x54) != 0) {
        FUN_1000daf0(local_78);
        _local_8 = CONCAT31(uStack_7,2);
        uVar3 = FUN_10048680(local_44);
        FUN_1000d1e0(uVar3);
        if (0xf < local_30) {
          FUN_1000b630(local_44[0],local_30 + 1);
        }
        local_30 = 0xf;
        local_34 = 0;
        local_44[0] = local_44[0] & 0xffffff00;
        local_8 = 1;
        FUN_10048130();
        uVar6 = local_1c / 3;
        _Dst = (void *)FUN_100491e5(uVar6);
        _memset(_Dst,0,uVar6);
        iVar4 = FUN_1000e650(local_2c,_Dst,uVar6);
        if (iVar4 == 0) {
          if (_Dst != (void *)0x0) {
            FID_conflict__free(_Dst);
          }
          goto LAB_1003cdaa;
        }
        iVar4 = FUN_10043160();
        if (_Dst != (void *)0x0) {
          FID_conflict__free(_Dst);
        }
        uVar1 = uStack_7;
        if (iVar4 != 0) goto LAB_1003cdaa;
      }
      uStack_7 = uVar1;
      if ((*(char *)(param_2 + 0x42) == '\x02') && (*(int *)(param_2 + 0x48) == 1)) {
        FUN_1003f250(param_1);
      }
      else {
        uVar6 = 0;
        if (*(char *)(param_2 + 0x42) != '\0') {
          iVar4 = (int)&DAT_1020eb84 - (int)param_1;
          while (((iVar5 = (**(code **)(*DAT_10249d10 + 0xf0))(0x60,0x68,uVar2), iVar5 == 0 &&
                  (uVar6 < 4)) &&
                 (iVar5 = (**(code **)(*DAT_10249d10 + 0xf0))(0x61,param_1[iVar4]), iVar5 == 0))) {
            if (DAT_1024e45c == 1) {
              uVar3 = 1;
            }
            else {
              uVar3 = 100;
            }
            iVar5 = (**(code **)(*DAT_10249d10 + 0xf0))(uVar3,*param_1);
            if (((iVar5 != 0) ||
                (iVar5 = (**(code **)(*DAT_10249d10 + 0xf0))(0x60,0x69), iVar5 != 0)) ||
               (iVar5 = FUN_1001c4c0(0,20000), iVar5 != 0)) break;
            uVar6 = uVar6 + 1;
            param_1 = param_1 + 1;
            if (*(byte *)(param_2 + 0x42) <= uVar6) break;
          }
        }
      }
    }
    else {
      FUN_1003f530(param_1,param_2);
    }
  }
  else {
    FUN_1003f320(param_1,param_2);
  }
LAB_1003cdaa:
  if (0xf < local_18) {
    FUN_1000b630(local_2c[0],local_18 + 1);
  }
  ExceptionList = local_10;
  __security_check_cookie(local_14 ^ (uint)&stack0xfffffffc);
  return;
}

