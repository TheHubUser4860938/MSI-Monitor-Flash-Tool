// rea decompile_all
// name: FUN_10015ad0
// address: 0x10015ad0
// body: available
// range: 0x10015ad0-0x10015f1e inclusive
// non_contiguous: false
// provider: Ghidra 12.1.2 (ghidra)
// analysis_profile: b075844f08879296d957518397cd0ddda73db81dce53d00d3f0e702766fc2af6
// limitations: The session serves operations only after Ghidra reports default auto-analysis complete; incomplete analysis does not expose partial results.; The imported Program and temporary project are ephemeral and deleted on close. Annotation operations edit session database metadata; original executable bytes are never written.; Cancelling an active Ghidra request terminates its ephemeral database and discards session annotations. The selected target remains open; the next provider query imports the original artifact again.; Default-space addresses use lowercase 0x-prefixed hexadecimal; other address spaces use <percent-encoded-space>:0x<hex>.; The Ghidra Program references PDB WinIspPlugIn.pdb (GUID d9f398c7-6c98-49a8-af25-a0659d5ad2f3, age (hex) 1, signature unknown, version RSDS); Ghidra reports load state unknown. Original names and types may be missing; an empty name search does not prove a procedure is absent. Use list_procedures and address-based analysis to inspect recovered functions. REA does not admit a caller-selected PDB companion.; This session uses Ghidra 12.1.2. The bridge is verified against 12.1.4; other 12.1.x builds are accepted and the observed version is reported.; Pseudocode is Ghidra decompiler output, not original source and not text-equivalent to Hopper output.; External functions and functions without an analyzable body return null; other decompiler failures remain explicit.
// pseudocode: provider-specific; not original source


int FUN_10015ad0(undefined4 param_1,undefined4 param_2,int *param_3,uint param_4)

{
  char cVar1;
  int iVar2;
  int *_Memory;
  byte bVar3;
  byte bVar5;
  uint uVar4;
  uint uVar6;
  int *piVar7;
  uint local_1c;
  uint local_18;
  uint local_14;
  undefined4 local_10;
  undefined4 local_c;
  uint local_8;
  
  uVar4 = param_4 >> 3;
  param_4 = param_4 & 0xffffff07;
  iVar2 = (**(code **)(*DAT_10249d10 + 0xf0))(0x3b,0);
  if ((iVar2 == 0) && (iVar2 = (**(code **)(*DAT_10249d10 + 0xf0))(0x3b,0x80), iVar2 == 0)) {
    local_14 = local_14 & 0xffffff00;
    iVar2 = (**(code **)(*DAT_10249d10 + 0xf8))(0x43,&local_14);
    if ((iVar2 == 0) &&
       (((iVar2 = (**(code **)(*DAT_10249d10 + 0xf0))(0x43,local_14), iVar2 == 0 &&
         (iVar2 = (**(code **)(*DAT_10249d10 + 0xf0))(0x3d,0x81), iVar2 == 0)) &&
        (iVar2 = (**(code **)(*DAT_10249d10 + 0xf0))(0x3e,0), iVar2 == 0)))) {
      local_8 = 0;
      uVar6 = 0;
      if (uVar4 != 0) {
        do {
          bVar5 = (char)local_8 << 3;
          local_c = CONCAT31(local_c._1_3_,bVar5);
          iVar2 = (**(code **)(*DAT_10249d10 + 0xf0))(0x44,0xa0);
          if (iVar2 != 0) {
            return iVar2;
          }
          iVar2 = (**(code **)(*DAT_10249d10 + 0xf0))(0x44,local_c);
          if (iVar2 != 0) {
            return iVar2;
          }
          bVar3 = 0;
          do {
            local_10 = CONCAT31(local_10._1_3_,
                                *(undefined1 *)((uint)bVar3 + (uint)bVar5 + (int)param_3));
            iVar2 = (**(code **)(*DAT_10249d10 + 0xf0))(0x44,local_10);
            if (iVar2 != 0) {
              return iVar2;
            }
            bVar3 = bVar3 + 1;
          } while (bVar3 < 8);
          iVar2 = (**(code **)(*DAT_10249d10 + 0xf0))(0x3b,0xd0);
          if (iVar2 != 0) {
            return iVar2;
          }
          Sleep(5);
          iVar2 = FUN_100159f0();
          if (iVar2 != 0) {
            return iVar2;
          }
          local_18 = local_18 & 0xffffff00;
          iVar2 = (**(code **)(*DAT_10249d10 + 0xf8))(0x43,&local_18);
          if (iVar2 != 0) {
            return iVar2;
          }
          iVar2 = (**(code **)(*DAT_10249d10 + 0xf0))(0x43,local_18);
          if (iVar2 != 0) {
            return iVar2;
          }
          Sleep(10);
          if (local_8 == 0) {
            _Memory = (int *)FUN_100491e5(8);
            piVar7 = DAT_10249d10;
            _Memory[0] = 0;
            _Memory[1] = 0;
            iVar2 = (**(code **)(*piVar7 + 0xf0))(0x3e,8);
            if (((iVar2 != 0) ||
                (iVar2 = (**(code **)(*DAT_10249d10 + 0xf0))(0x44,0xa0), iVar2 != 0)) ||
               ((iVar2 = (**(code **)(*DAT_10249d10 + 0xf0))(0x44,local_c), iVar2 != 0 ||
                ((iVar2 = (**(code **)(*DAT_10249d10 + 0xf0))(0x44,0xa1), iVar2 != 0 ||
                 (iVar2 = (**(code **)(*DAT_10249d10 + 0xf0))(0x3b,0xce), iVar2 != 0)))))) {
LAB_10015f07:
              if (_Memory != (int *)0x0) {
                FID_conflict__free(_Memory);
              }
              return iVar2;
            }
            Sleep(5);
            iVar2 = FUN_10015a60();
            if (iVar2 != 0) goto LAB_10015f07;
            local_1c = local_1c & 0xffffff00;
            iVar2 = (**(code **)(*DAT_10249d10 + 0xf8))(0x43,&local_1c);
            if ((iVar2 != 0) ||
               (iVar2 = (**(code **)(*DAT_10249d10 + 0xf0))(0x43,local_1c), iVar2 != 0))
            goto LAB_10015f07;
            iVar2 = 8;
            piVar7 = _Memory;
            do {
              (**(code **)(*DAT_10249d10 + 0xf8))(0x44,piVar7);
              piVar7 = (int *)((int)piVar7 + 1);
              iVar2 = iVar2 + -1;
            } while (iVar2 != 0);
            if ((*_Memory != *param_3) || (_Memory[1] != param_3[1])) {
              if (_Memory != (int *)0x0) {
                FID_conflict__free(_Memory);
              }
              return 0xe06;
            }
            if (_Memory != (int *)0x0) {
              FID_conflict__free(_Memory);
            }
            iVar2 = (**(code **)(*DAT_10249d10 + 0xf0))(0x3e,0);
            if (iVar2 != 0) {
              return iVar2;
            }
          }
          local_8 = local_8 + 1;
          uVar6 = local_8;
        } while (local_8 < uVar4);
      }
      if ((char)param_4 != '\0') {
        cVar1 = (char)uVar6 << 3;
        local_8 = CONCAT31((int3)(uVar6 >> 8),cVar1);
        local_c = CONCAT31(local_c._1_3_,cVar1);
        iVar2 = (**(code **)(*DAT_10249d10 + 0xf0))(0x44,0xa0);
        if (iVar2 != 0) {
          return iVar2;
        }
        iVar2 = (**(code **)(*DAT_10249d10 + 0xf0))(0x44,local_c);
        if (iVar2 != 0) {
          return iVar2;
        }
        uVar4 = 0;
        bVar5 = 0;
        if ((char)param_4 != '\0') {
          uVar6 = local_8 & 0xff;
          do {
            local_10 = CONCAT31(local_10._1_3_,*(undefined1 *)(uVar4 + uVar6 + (int)param_3));
            iVar2 = (**(code **)(*DAT_10249d10 + 0xf0))(0x44,local_10);
            if (iVar2 != 0) {
              return iVar2;
            }
            bVar5 = (byte)param_4;
            bVar3 = (char)uVar4 + 1;
            uVar4 = (uint)bVar3;
          } while (bVar3 < bVar5);
        }
        iVar2 = (**(code **)(*DAT_10249d10 + 0xf0))(0x3b,(bVar5 + 1) * '\x02' | 0xc0);
        if (iVar2 != 0) {
          return iVar2;
        }
        Sleep(5);
        iVar2 = FUN_100159f0();
        if (iVar2 != 0) {
          return iVar2;
        }
        param_4 = param_4 & 0xffffff00;
        iVar2 = (**(code **)(*DAT_10249d10 + 0xf8))(0x43,&param_4);
        if (iVar2 != 0) {
          return iVar2;
        }
        iVar2 = (**(code **)(*DAT_10249d10 + 0xf0))(0x43,param_4);
        if (iVar2 != 0) {
          return iVar2;
        }
      }
      iVar2 = 0;
    }
  }
  return iVar2;
}

