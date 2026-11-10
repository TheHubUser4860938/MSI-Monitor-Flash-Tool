// rea decompile_all
// name: FUN_10043160
// address: 0x10043160
// body: available
// range: 0x10043160-0x10043773 inclusive
// non_contiguous: false
// provider: Ghidra 12.1.2 (ghidra)
// analysis_profile: b075844f08879296d957518397cd0ddda73db81dce53d00d3f0e702766fc2af6
// limitations: The session serves operations only after Ghidra reports default auto-analysis complete; incomplete analysis does not expose partial results.; The imported Program and temporary project are ephemeral and deleted on close. Annotation operations edit session database metadata; original executable bytes are never written.; Cancelling an active Ghidra request terminates its ephemeral database and discards session annotations. The selected target remains open; the next provider query imports the original artifact again.; Default-space addresses use lowercase 0x-prefixed hexadecimal; other address spaces use <percent-encoded-space>:0x<hex>.; The Ghidra Program references PDB WinIspPlugIn.pdb (GUID d9f398c7-6c98-49a8-af25-a0659d5ad2f3, age (hex) 1, signature unknown, version RSDS); Ghidra reports load state unknown. Original names and types may be missing; an empty name search does not prove a procedure is absent. Use list_procedures and address-based analysis to inspect recovered functions. REA does not admit a caller-selected PDB companion.; This session uses Ghidra 12.1.2. The bridge is verified against 12.1.4; other 12.1.x builds are accepted and the observed version is reported.; Pseudocode is Ghidra decompiler output, not original source and not text-equivalent to Hopper output.; External functions and functions without an analyzable body return null; other decompiler failures remain explicit.
// pseudocode: provider-specific; not original source


int FUN_10043160(void)

{
  int *piVar1;
  int iVar2;
  int in_ECX;
  uint uVar3;
  uint in_EDX;
  int iVar4;
  uint local_1c;
  uint local_14;
  int local_10;
  uint local_c;
  undefined2 local_7;
  byte local_5;
  
  piVar1 = DAT_10249d10;
  local_10 = 0;
  iVar4 = 0;
  local_5 = 0;
  local_14 = 0;
  local_c = 0;
  if (in_EDX != 0) {
    do {
      iVar2 = local_c + in_ECX;
      switch(*(undefined1 *)(local_c + in_ECX)) {
      case 0:
        Sleep((uint)CONCAT11(*(undefined1 *)(local_c + 1 + in_ECX),
                             *(undefined1 *)(local_c + 2 + in_ECX)));
        local_c = local_c + 3;
        goto LAB_10043742;
      case 1:
        iVar4 = (**(code **)(*piVar1 + 0xec))();
        local_c = local_c + 1;
        break;
      case 2:
        iVar4 = (**(code **)(*piVar1 + 0xe8))();
        local_c = local_c + 1;
        break;
      case 3:
        iVar4 = (**(code **)(*piVar1 + 0xac))
                          (*(undefined1 *)(local_c + 1 + in_ECX),
                           *(undefined1 *)(local_c + 2 + in_ECX));
        local_c = local_c + 3;
        break;
      case 4:
        iVar4 = (**(code **)(*piVar1 + 0xb8))
                          (*(undefined1 *)(local_c + 1 + in_ECX),
                           *(undefined1 *)(local_c + 2 + in_ECX),
                           *(undefined1 *)(local_c + 3 + in_ECX));
        local_c = local_c + 4;
        break;
      case 5:
        if (local_10 == 0) {
          return 2;
        }
        iVar4 = (**(code **)(*piVar1 + 0xa8))(*(undefined1 *)(local_c + 1 + in_ECX),local_10);
        local_10 = local_10 + 1;
        local_c = local_c + 2;
        break;
      case 6:
        iVar4 = (**(code **)(*piVar1 + 0xf0))
                          (*(undefined1 *)(local_c + 1 + in_ECX),
                           *(undefined1 *)(local_c + 2 + in_ECX));
        local_c = local_c + 3;
        break;
      case 7:
        if (local_10 == 0) {
          return 2;
        }
        iVar4 = (**(code **)(*piVar1 + 0xf8))(*(undefined1 *)(local_c + 1 + in_ECX),local_10);
        local_10 = local_10 + 1;
        local_c = local_c + 2;
        break;
      case 8:
        iVar4 = (**(code **)(*piVar1 + 0x5c))
                          (*(undefined1 *)(local_c + 1 + in_ECX),
                           *(undefined1 *)(local_c + 2 + in_ECX),
                           *(undefined1 *)(local_c + 3 + in_ECX));
        local_c = local_c + 4;
        break;
      case 9:
        if (local_10 == 0) {
          return 2;
        }
        iVar4 = (**(code **)(*piVar1 + 0x58))
                          (*(undefined1 *)(local_c + 1 + in_ECX),
                           *(undefined1 *)(local_c + 2 + in_ECX),1,local_10);
        local_10 = local_10 + 1;
        local_c = local_c + 3;
        break;
      case 10:
      case 0xb:
        return 2;
      case 0xc:
        if (local_10 == 0) {
          return 2;
        }
        iVar4 = (**(code **)(*piVar1 + 0x60))(*(undefined1 *)(local_c + 1 + in_ECX),1,local_10);
        local_10 = local_10 + 1;
        local_c = local_c + 2;
        break;
      case 0xd:
        uVar3 = (uint)(ushort)((ushort)*(byte *)(local_c + 4 + in_ECX) * 0x100 +
                              (ushort)*(byte *)(local_c + 5 + in_ECX));
        local_7 = CONCAT11(*(undefined1 *)(local_c + 6 + in_ECX),
                           *(undefined1 *)(local_c + 7 + in_ECX));
        local_1c = 0;
        if (uVar3 != 0) {
          do {
            iVar4 = (**(code **)(*piVar1 + 0xf8))(*(undefined1 *)(iVar2 + 1),&local_5);
            if ((iVar4 != 0) ||
               ((*(byte *)(iVar2 + 2) & local_5) == (*(byte *)(iVar2 + 3) & *(byte *)(iVar2 + 2))))
            break;
            Sleep((uint)local_7);
            local_1c = local_1c + 1;
          } while (local_1c < uVar3);
        }
        if (uVar3 <= local_1c) {
          iVar4 = 3;
        }
        local_c = local_c + 8;
        break;
      case 0xe:
        iVar4 = (**(code **)(*piVar1 + 0xbc))
                          (*(undefined1 *)(local_c + 1 + in_ECX),
                           *(undefined1 *)(local_c + 2 + in_ECX),
                           *(undefined1 *)(local_c + 3 + in_ECX),
                           *(undefined1 *)(local_c + 4 + in_ECX));
        local_c = local_c + 5;
        break;
      case 0xf:
        iVar4 = (**(code **)(*piVar1 + 0xf4))
                          (*(undefined1 *)(local_c + 1 + in_ECX),
                           *(undefined1 *)(local_c + 2 + in_ECX),
                           *(undefined1 *)(local_c + 3 + in_ECX));
        local_c = local_c + 4;
        break;
      case 0x10:
        iVar4 = (**(code **)(*piVar1 + 0xc4))
                          (CONCAT11(*(undefined1 *)(local_c + 1 + in_ECX),
                                    *(undefined1 *)(local_c + 2 + in_ECX)),
                           *(undefined1 *)(local_c + 3 + in_ECX));
        local_c = local_c + 4;
        break;
      case 0x11:
        iVar4 = (**(code **)(*piVar1 + 0xd0))
                          (CONCAT11(*(undefined1 *)(local_c + 1 + in_ECX),
                                    *(undefined1 *)(local_c + 2 + in_ECX)),
                           *(undefined1 *)(local_c + 3 + in_ECX),
                           *(undefined1 *)(local_c + 4 + in_ECX));
        local_c = local_c + 5;
        break;
      case 0x12:
        if (local_10 == 0) {
          return 2;
        }
        iVar4 = (**(code **)(*piVar1 + 0xc0))
                          (CONCAT11(*(undefined1 *)(local_c + 1 + in_ECX),
                                    *(undefined1 *)(local_c + 2 + in_ECX)),local_10);
        local_10 = local_10 + 1;
        local_c = local_c + 3;
        break;
      case 0x13:
        iVar4 = (**(code **)(*piVar1 + 0xd4))
                          (CONCAT11(*(undefined1 *)(local_c + 1 + in_ECX),
                                    *(undefined1 *)(local_c + 2 + in_ECX)),
                           CONCAT11(*(undefined1 *)(local_c + 3 + in_ECX),
                                    *(undefined1 *)(local_c + 4 + in_ECX)),
                           *(undefined1 *)(local_c + 5 + in_ECX),
                           *(undefined1 *)(local_c + 6 + in_ECX));
        local_c = local_c + 7;
        break;
      case 0x14:
        local_14 = (uint)CONCAT11(*(undefined1 *)(local_c + 3 + in_ECX),
                                  *(undefined1 *)(local_c + 4 + in_ECX));
        iVar4 = (**(code **)(*piVar1 + 0xcc))
                          (CONCAT11(*(undefined1 *)(local_c + 1 + in_ECX),
                                    *(undefined1 *)(local_c + 2 + in_ECX)),local_14,
                           in_ECX + 6 + local_c,*(undefined1 *)(iVar2 + 5));
        iVar2 = local_14 + 6;
        goto LAB_10043739;
      case 0x15:
        local_14 = (uint)CONCAT11(*(undefined1 *)(local_c + 3 + in_ECX),
                                  *(undefined1 *)(local_c + 4 + in_ECX));
        iVar4 = (**(code **)(*piVar1 + 200))
                          (CONCAT11(*(undefined1 *)(local_c + 1 + in_ECX),
                                    *(undefined1 *)(local_c + 2 + in_ECX)),local_14,local_10,
                           *(undefined1 *)(local_c + 5 + in_ECX));
        local_c = local_c + 6;
        local_10 = local_10 + local_14;
        break;
      case 0x16:
        local_14 = (uint)CONCAT11(*(undefined1 *)(local_c + 2 + in_ECX),
                                  *(undefined1 *)(local_c + 3 + in_ECX));
        iVar4 = (**(code **)(*piVar1 + 0xb4))
                          (*(undefined1 *)(local_c + 1 + in_ECX),local_14,in_ECX + 5 + local_c,
                           *(undefined1 *)(iVar2 + 4));
        iVar2 = local_14 + 5;
        goto LAB_10043739;
      case 0x17:
        local_14 = (uint)CONCAT11(*(undefined1 *)(local_c + 2 + in_ECX),
                                  *(undefined1 *)(local_c + 3 + in_ECX));
        iVar4 = (**(code **)(*piVar1 + 0xb0))
                          (*(undefined1 *)(local_c + 1 + in_ECX),local_14,local_10,
                           *(undefined1 *)(local_c + 4 + in_ECX));
        local_c = local_c + 5;
        local_10 = local_10 + local_14;
        break;
      case 0x18:
        local_14 = (uint)CONCAT11(*(undefined1 *)(local_c + 3 + in_ECX),
                                  *(undefined1 *)(local_c + 4 + in_ECX));
        iVar4 = (**(code **)(*piVar1 + 0xfc))
                          (CONCAT11(*(undefined1 *)(local_c + 1 + in_ECX),
                                    *(undefined1 *)(local_c + 2 + in_ECX)),local_14,
                           in_ECX + 6 + local_c,*(undefined1 *)(iVar2 + 5));
        iVar2 = local_14 + 6;
        goto LAB_10043739;
      case 0x19:
        local_14 = (uint)CONCAT11(*(undefined1 *)(local_c + 3 + in_ECX),
                                  *(undefined1 *)(local_c + 4 + in_ECX));
        iVar4 = (**(code **)(*piVar1 + 0x100))
                          (CONCAT11(*(undefined1 *)(local_c + 1 + in_ECX),
                                    *(undefined1 *)(local_c + 2 + in_ECX)),local_14,local_10,
                           *(undefined1 *)(local_c + 5 + in_ECX));
        local_c = local_c + 6;
        local_10 = local_10 + local_14;
        break;
      case 0x1a:
        iVar4 = (**(code **)(*piVar1 + 0x1b0))
                          (CONCAT31(CONCAT21(CONCAT11(*(undefined1 *)(local_c + 1 + in_ECX),
                                                      *(undefined1 *)(local_c + 2 + in_ECX)),
                                             *(undefined1 *)(local_c + 3 + in_ECX)),
                                    *(undefined1 *)(local_c + 4 + in_ECX)),
                           CONCAT31(CONCAT21(CONCAT11(*(undefined1 *)(local_c + 5 + in_ECX),
                                                      *(undefined1 *)(local_c + 6 + in_ECX)),
                                             *(undefined1 *)(local_c + 7 + in_ECX)),
                                    *(undefined1 *)(local_c + 8 + in_ECX)));
        iVar2 = local_14 + 9;
LAB_10043739:
        local_c = local_c + iVar2;
        break;
      default:
        return 1;
      }
      if (iVar4 != 0) {
        return iVar4;
      }
LAB_10043742:
    } while (local_c < in_EDX);
  }
  return 0;
}

