// rea decompile_all
// name: FUN_10015510
// address: 0x10015510
// body: available
// range: 0x10015510-0x100159e2 inclusive
// non_contiguous: false
// provider: Ghidra 12.1.2 (ghidra)
// analysis_profile: b075844f08879296d957518397cd0ddda73db81dce53d00d3f0e702766fc2af6
// limitations: The session serves operations only after Ghidra reports default auto-analysis complete; incomplete analysis does not expose partial results.; The imported Program and temporary project are ephemeral and deleted on close. Annotation operations edit session database metadata; original executable bytes are never written.; Cancelling an active Ghidra request terminates its ephemeral database and discards session annotations. The selected target remains open; the next provider query imports the original artifact again.; Default-space addresses use lowercase 0x-prefixed hexadecimal; other address spaces use <percent-encoded-space>:0x<hex>.; The Ghidra Program references PDB WinIspPlugIn.pdb (GUID d9f398c7-6c98-49a8-af25-a0659d5ad2f3, age (hex) 1, signature unknown, version RSDS); Ghidra reports load state unknown. Original names and types may be missing; an empty name search does not prove a procedure is absent. Use list_procedures and address-based analysis to inspect recovered functions. REA does not admit a caller-selected PDB companion.; This session uses Ghidra 12.1.2. The bridge is verified against 12.1.4; other 12.1.x builds are accepted and the observed version is reported.; Pseudocode is Ghidra decompiler output, not original source and not text-equivalent to Hopper output.; External functions and functions without an analyzable body return null; other decompiler failures remain explicit.
// pseudocode: provider-specific; not original source


int FUN_10015510(undefined4 param_1,undefined4 param_2,int *param_3,uint param_4)

{
  int iVar1;
  int iVar2;
  int *_Memory;
  int in_ECX;
  int *piVar3;
  byte bVar4;
  byte bVar5;
  uint uVar6;
  uint uVar7;
  int iVar8;
  int *piVar9;
  uint uVar10;
  bool bVar11;
  uint local_18;
  uint local_14;
  uint local_10;
  undefined4 local_c;
  uint local_8;
  
  uVar6 = param_4 >> 4;
  param_4 = param_4 & 0xffffff0f;
  iVar1 = (**(code **)(*DAT_10249d10 + 0xf0))(0x3b,0);
  if ((iVar1 == 0) && (iVar1 = (**(code **)(*DAT_10249d10 + 0xf0))(0x3b,0x80), iVar1 == 0)) {
    local_10 = local_10 & 0xffffff00;
    iVar1 = (**(code **)(*DAT_10249d10 + 0xf8))(0x43,&local_10);
    if ((iVar1 == 0) &&
       (((iVar1 = (**(code **)(*DAT_10249d10 + 0xf0))(0x43,local_10), iVar1 == 0 &&
         (iVar1 = (**(code **)(*DAT_10249d10 + 0xf0))(0x3d,2), iVar1 == 0)) &&
        (iVar1 = (**(code **)(*DAT_10249d10 + 0xf0))(0x3e,0), iVar1 == 0)))) {
      iVar1 = 0x1f00;
      if (*(int *)(in_ECX + 0x434) != 1) {
        iVar1 = 0;
      }
      local_8 = 0;
      if (uVar6 != 0) {
        do {
          iVar8 = (local_8 & 0xfff) * 0x10;
          uVar7 = iVar1 + iVar8;
          uVar10 = uVar7 & 0xffff;
          iVar2 = (**(code **)(*DAT_10249d10 + 0xf0))(0x44,0xa8);
          if (iVar2 != 0) {
            return iVar2;
          }
          iVar2 = (**(code **)(*DAT_10249d10 + 0xf0))(0x44,uVar10 >> 8);
          if (iVar2 != 0) {
            return iVar2;
          }
          iVar2 = (**(code **)(*DAT_10249d10 + 0xf0))(0x44,uVar10);
          if (iVar2 != 0) {
            return iVar2;
          }
          uVar10 = 0;
          do {
            local_c = CONCAT31(local_c._1_3_,*(undefined1 *)(uVar10 + iVar8 + (int)param_3));
            iVar2 = (**(code **)(*DAT_10249d10 + 0xf0))(0x44,local_c);
            if (iVar2 != 0) {
              return iVar2;
            }
            bVar4 = (char)uVar10 + 1;
            uVar10 = (uint)bVar4;
          } while (bVar4 < 0x10);
          iVar2 = (**(code **)(*DAT_10249d10 + 0xf0))(0x3b,0xe2);
          if (iVar2 != 0) {
            return iVar2;
          }
          Sleep(5);
          iVar2 = FUN_100159f0();
          if (iVar2 != 0) {
            return iVar2;
          }
          local_14 = local_14 & 0xffffff00;
          iVar2 = (**(code **)(*DAT_10249d10 + 0xf8))(0x43,&local_14);
          if (iVar2 != 0) {
            return iVar2;
          }
          iVar2 = (**(code **)(*DAT_10249d10 + 0xf0))(0x43,local_14);
          if (iVar2 != 0) {
            return iVar2;
          }
          Sleep(1);
          if (local_8 == 0) {
            _Memory = (int *)FUN_100491e5(0x10);
            piVar9 = DAT_10249d10;
            *_Memory = 0;
            _Memory[1] = 0;
            _Memory[2] = 0;
            _Memory[3] = 0;
            iVar2 = (**(code **)(*piVar9 + 0xf0))(0x3e,8);
            if (iVar2 != 0) {
LAB_100159cb:
              if (_Memory != (int *)0x0) {
                FID_conflict__free(_Memory);
              }
              return iVar2;
            }
            uVar7 = uVar7 & 0xffff;
            iVar2 = (**(code **)(*DAT_10249d10 + 0xf0))(0x44,0xa8);
            if (((iVar2 != 0) ||
                (iVar2 = (**(code **)(*DAT_10249d10 + 0xf0))(0x44,uVar7 >> 8), iVar2 != 0)) ||
               ((iVar2 = (**(code **)(*DAT_10249d10 + 0xf0))(0x44,uVar7), iVar2 != 0 ||
                ((iVar2 = (**(code **)(*DAT_10249d10 + 0xf0))(0x44,0xa9), iVar2 != 0 ||
                 (iVar2 = (**(code **)(*DAT_10249d10 + 0xf0))(0x3b,0xde), iVar2 != 0))))))
            goto LAB_100159cb;
            Sleep(5);
            iVar2 = FUN_10015a60();
            if (iVar2 != 0) goto LAB_100159cb;
            local_18 = local_18 & 0xffffff00;
            iVar2 = (**(code **)(*DAT_10249d10 + 0xf8))(0x43,&local_18);
            if ((iVar2 != 0) ||
               (iVar2 = (**(code **)(*DAT_10249d10 + 0xf0))(0x43,local_18), iVar2 != 0))
            goto LAB_100159cb;
            iVar2 = 0x10;
            piVar9 = _Memory;
            do {
              iVar8 = iVar2;
              (**(code **)(*DAT_10249d10 + 0xf8))(0x44,piVar9);
              piVar9 = (int *)((int)piVar9 + 1);
              iVar2 = iVar8 + -1;
            } while (iVar2 != 0);
            uVar7 = iVar8 + 0xb;
            piVar9 = _Memory;
            piVar3 = param_3;
            do {
              if (*piVar9 != *piVar3) {
                if (_Memory != (int *)0x0) {
                  FID_conflict__free(_Memory);
                }
                return 0xe06;
              }
              piVar9 = piVar9 + 1;
              piVar3 = piVar3 + 1;
              bVar11 = 3 < uVar7;
              uVar7 = uVar7 - 4;
            } while (bVar11);
            if (_Memory != (int *)0x0) {
              FID_conflict__free(_Memory);
            }
            iVar2 = (**(code **)(*DAT_10249d10 + 0xf0))(0x3e,0);
            if (iVar2 != 0) {
              return iVar2;
            }
          }
          local_8 = local_8 + 1;
        } while (local_8 < uVar6);
      }
      if ((char)param_4 != '\0') {
        iVar2 = (local_8 & 0xfff) * 0x10;
        uVar6 = iVar1 + iVar2 & 0xffff;
        iVar1 = (**(code **)(*DAT_10249d10 + 0xf0))(0x44,0xa8);
        if (iVar1 != 0) {
          return iVar1;
        }
        iVar1 = (**(code **)(*DAT_10249d10 + 0xf0))(0x44,uVar6 >> 8);
        if (iVar1 != 0) {
          return iVar1;
        }
        iVar1 = (**(code **)(*DAT_10249d10 + 0xf0))(0x44,uVar6);
        if (iVar1 != 0) {
          return iVar1;
        }
        uVar6 = 0;
        bVar4 = 0;
        if ((char)param_4 != '\0') {
          do {
            local_c = CONCAT31(local_c._1_3_,*(undefined1 *)(uVar6 + iVar2 + (int)param_3));
            iVar1 = (**(code **)(*DAT_10249d10 + 0xf0))(0x44,local_c);
            if (iVar1 != 0) {
              return iVar1;
            }
            bVar4 = (byte)param_4;
            bVar5 = (char)uVar6 + 1;
            uVar6 = (uint)bVar5;
          } while (bVar5 < bVar4);
        }
        iVar1 = (**(code **)(*DAT_10249d10 + 0xf0))(0x3b,(bVar4 + 1) * '\x02' | 0xc0);
        if (iVar1 != 0) {
          return iVar1;
        }
        Sleep(5);
        iVar1 = FUN_100159f0();
        if (iVar1 != 0) {
          return iVar1;
        }
        param_4 = param_4 & 0xffffff00;
        iVar1 = (**(code **)(*DAT_10249d10 + 0xf8))(0x43,&param_4);
        if (iVar1 != 0) {
          return iVar1;
        }
        iVar1 = (**(code **)(*DAT_10249d10 + 0xf0))(0x43,param_4);
        if (iVar1 != 0) {
          return iVar1;
        }
      }
      iVar1 = 0;
    }
  }
  return iVar1;
}

