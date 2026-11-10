// rea decompile_all
// name: FUN_10005310
// address: 0x10005310
// body: available
// range: 0x10005310-0x100055a5 inclusive
// non_contiguous: false
// provider: Ghidra 12.1.2 (ghidra)
// analysis_profile: b075844f08879296d957518397cd0ddda73db81dce53d00d3f0e702766fc2af6
// limitations: The session serves operations only after Ghidra reports default auto-analysis complete; incomplete analysis does not expose partial results.; The imported Program and temporary project are ephemeral and deleted on close. Annotation operations edit session database metadata; original executable bytes are never written.; Cancelling an active Ghidra request terminates its ephemeral database and discards session annotations. The selected target remains open; the next provider query imports the original artifact again.; Default-space addresses use lowercase 0x-prefixed hexadecimal; other address spaces use <percent-encoded-space>:0x<hex>.; The Ghidra Program references PDB WinOperateCScaler.pdb (GUID a6737962-efea-4805-8ae6-1fc1ef126554, age (hex) 1, signature unknown, version RSDS); Ghidra reports load state unknown. Original names and types may be missing; an empty name search does not prove a procedure is absent. Use list_procedures and address-based analysis to inspect recovered functions. REA does not admit a caller-selected PDB companion.; This session uses Ghidra 12.1.2. The bridge is verified against 12.1.4; other 12.1.x builds are accepted and the observed version is reported.; Pseudocode is Ghidra decompiler output, not original source and not text-equivalent to Hopper output.; External functions and functions without an analyzable body return null; other decompiler failures remain explicit.
// pseudocode: provider-specific; not original source


/* WARNING: Removing unreachable block (ram,0x100053d8) */
/* WARNING: Removing unreachable block (ram,0x100053e8) */
/* WARNING: Removing unreachable block (ram,0x100053f1) */
/* WARNING: Removing unreachable block (ram,0x100053f4) */
/* WARNING: Removing unreachable block (ram,0x100053e4) */
/* WARNING: Removing unreachable block (ram,0x10005402) */
/* WARNING: Removing unreachable block (ram,0x10005411) */
/* WARNING: Removing unreachable block (ram,0x1000541c) */
/* WARNING: Removing unreachable block (ram,0x10005418) */
/* WARNING: Removing unreachable block (ram,0x1000540c) */
/* WARNING: Removing unreachable block (ram,0x1000541f) */

undefined4 * FUN_10005310(undefined4 *param_1,int *param_2)

{
  char cVar1;
  int *piVar2;
  int *piVar3;
  undefined4 *puVar4;
  int *in_ECX;
  int *piVar5;
  int *piVar6;
  int *piVar7;
  
  FUN_10004760();
  piVar7 = (int *)*param_2;
  if (*(char *)((int)piVar7 + 0xd) == '\0') {
    if (*(char *)(param_2[2] + 0xd) == '\0') {
      piVar7 = (int *)param_2[2];
    }
  }
  else {
    piVar7 = (int *)param_2[2];
  }
  piVar6 = (int *)param_2[1];
  if (*(char *)((int)piVar7 + 0xd) == '\0') {
    piVar7[1] = (int)piVar6;
  }
  if (*(int **)(*in_ECX + 4) == param_2) {
    *(int **)(*in_ECX + 4) = piVar7;
  }
  else if ((int *)*piVar6 == param_2) {
    *piVar6 = (int)piVar7;
  }
  else {
    piVar6[2] = (int)piVar7;
  }
  puVar4 = (undefined4 *)*in_ECX;
  if ((int *)*puVar4 == param_2) {
    piVar5 = piVar6;
    if (*(char *)((int)piVar7 + 0xd) == '\0') {
      cVar1 = *(char *)(*piVar7 + 0xd);
      piVar2 = (int *)*piVar7;
      piVar5 = piVar7;
      while (piVar3 = piVar2, cVar1 == '\0') {
        piVar2 = (int *)*piVar3;
        cVar1 = *(char *)((int)piVar2 + 0xd);
        piVar5 = piVar3;
      }
      puVar4 = (undefined4 *)*in_ECX;
    }
    *puVar4 = piVar5;
  }
  if (*(int **)(*in_ECX + 8) == param_2) {
    if (*(char *)((int)piVar7 + 0xd) == '\0') {
      cVar1 = *(char *)(piVar7[2] + 0xd);
      piVar5 = (int *)piVar7[2];
      piVar2 = piVar7;
      while (piVar3 = piVar5, cVar1 == '\0') {
        piVar5 = (int *)piVar3[2];
        cVar1 = *(char *)((int)piVar5 + 0xd);
        piVar2 = piVar3;
      }
      *(int **)(*in_ECX + 8) = piVar2;
    }
    else {
      *(int **)(*in_ECX + 8) = piVar6;
    }
  }
  if ((char)param_2[3] == '\x01') {
    if (piVar7 != *(int **)(*in_ECX + 4)) {
      do {
        piVar5 = piVar6;
        if ((char)piVar7[3] != '\x01') break;
        piVar6 = (int *)*piVar5;
        if (piVar7 == piVar6) {
          piVar6 = (int *)piVar5[2];
          if ((char)piVar6[3] == '\0') {
            *(undefined1 *)(piVar6 + 3) = 1;
            *(undefined1 *)(piVar5 + 3) = 0;
            FUN_10005160(piVar5);
            piVar6 = (int *)piVar5[2];
          }
          if (*(char *)((int)piVar6 + 0xd) == '\0') {
            if ((*(char *)(*piVar6 + 0xc) != '\x01') || (*(char *)(piVar6[2] + 0xc) != '\x01')) {
              if (*(char *)(piVar6[2] + 0xc) == '\x01') {
                *(undefined1 *)(*piVar6 + 0xc) = 1;
                *(undefined1 *)(piVar6 + 3) = 0;
                FUN_100051c0(piVar6);
                piVar6 = (int *)piVar5[2];
              }
              *(char *)(piVar6 + 3) = (char)piVar5[3];
              *(undefined1 *)(piVar5 + 3) = 1;
              *(undefined1 *)(piVar6[2] + 0xc) = 1;
              FUN_10005160(piVar5);
              break;
            }
LAB_1000550f:
            *(undefined1 *)(piVar6 + 3) = 0;
          }
        }
        else {
          if ((char)piVar6[3] == '\0') {
            *(undefined1 *)(piVar6 + 3) = 1;
            *(undefined1 *)(piVar5 + 3) = 0;
            FUN_100051c0(piVar5);
            piVar6 = (int *)*piVar5;
          }
          if (*(char *)((int)piVar6 + 0xd) == '\0') {
            if ((*(char *)(piVar6[2] + 0xc) == '\x01') && (*(char *)(*piVar6 + 0xc) == '\x01'))
            goto LAB_1000550f;
            if (*(char *)(*piVar6 + 0xc) == '\x01') {
              *(undefined1 *)(piVar6[2] + 0xc) = 1;
              *(undefined1 *)(piVar6 + 3) = 0;
              FUN_10005160(piVar6);
              piVar6 = (int *)*piVar5;
            }
            *(char *)(piVar6 + 3) = (char)piVar5[3];
            *(undefined1 *)(piVar5 + 3) = 1;
            *(undefined1 *)(*piVar6 + 0xc) = 1;
            FUN_100051c0(piVar5);
            break;
          }
        }
        piVar6 = (int *)piVar5[1];
        piVar7 = piVar5;
      } while (piVar5 != *(int **)(*in_ECX + 4));
    }
    *(undefined1 *)(piVar7 + 3) = 1;
  }
  FUN_100196a0();
  FID_conflict__free(param_2);
  if (in_ECX[1] != 0) {
    in_ECX[1] = in_ECX[1] + -1;
    *param_1 = param_2;
    return param_1;
  }
  *param_1 = param_2;
  return param_1;
}

