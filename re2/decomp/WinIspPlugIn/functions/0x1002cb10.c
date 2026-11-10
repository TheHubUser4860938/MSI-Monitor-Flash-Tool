// rea decompile_all
// name: FUN_1002cb10
// address: 0x1002cb10
// body: available
// range: 0x1002cb10-0x1002cf34 inclusive
// non_contiguous: false
// provider: Ghidra 12.1.2 (ghidra)
// analysis_profile: b075844f08879296d957518397cd0ddda73db81dce53d00d3f0e702766fc2af6
// limitations: The session serves operations only after Ghidra reports default auto-analysis complete; incomplete analysis does not expose partial results.; The imported Program and temporary project are ephemeral and deleted on close. Annotation operations edit session database metadata; original executable bytes are never written.; Cancelling an active Ghidra request terminates its ephemeral database and discards session annotations. The selected target remains open; the next provider query imports the original artifact again.; Default-space addresses use lowercase 0x-prefixed hexadecimal; other address spaces use <percent-encoded-space>:0x<hex>.; The Ghidra Program references PDB WinIspPlugIn.pdb (GUID d9f398c7-6c98-49a8-af25-a0659d5ad2f3, age (hex) 1, signature unknown, version RSDS); Ghidra reports load state unknown. Original names and types may be missing; an empty name search does not prove a procedure is absent. Use list_procedures and address-based analysis to inspect recovered functions. REA does not admit a caller-selected PDB companion.; This session uses Ghidra 12.1.2. The bridge is verified against 12.1.4; other 12.1.x builds are accepted and the observed version is reported.; Pseudocode is Ghidra decompiler output, not original source and not text-equivalent to Hopper output.; External functions and functions without an analyzable body return null; other decompiler failures remain explicit.
// pseudocode: provider-specific; not original source


void FUN_1002cb10(undefined4 *param_1,int *param_2)

{
  char cVar1;
  int iVar2;
  undefined4 *puVar3;
  int *piVar4;
  int *piVar5;
  int *_Memory;
  int *in_ECX;
  int *piVar6;
  int *piVar7;
  int *piVar8;
  
  _Memory = param_2;
  if (*(char *)((int)param_2 + 0xd) == '\0') {
    piVar7 = (int *)param_2[2];
    if (*(char *)((int)piVar7 + 0xd) == '\0') {
      cVar1 = *(char *)(*piVar7 + 0xd);
      param_2 = piVar7;
      piVar7 = (int *)*piVar7;
      while (cVar1 == '\0') {
        cVar1 = *(char *)(*piVar7 + 0xd);
        param_2 = piVar7;
        piVar7 = (int *)*piVar7;
      }
    }
    else {
      cVar1 = *(char *)(param_2[1] + 0xd);
      piVar8 = (int *)param_2[1];
      piVar7 = param_2;
      while ((param_2 = piVar8, cVar1 == '\0' && (piVar7 == (int *)param_2[2]))) {
        cVar1 = *(char *)(param_2[1] + 0xd);
        piVar8 = (int *)param_2[1];
        piVar7 = param_2;
      }
    }
  }
  piVar7 = (int *)*_Memory;
  if (*(char *)((int)piVar7 + 0xd) == '\0') {
    piVar8 = piVar7;
    if ((*(char *)(_Memory[2] + 0xd) == '\0') && (piVar8 = (int *)param_2[2], param_2 != _Memory)) {
      piVar7[1] = (int)param_2;
      *param_2 = *_Memory;
      piVar7 = param_2;
      if (param_2 != (int *)_Memory[2]) {
        piVar7 = (int *)param_2[1];
        if (*(char *)((int)piVar8 + 0xd) == '\0') {
          piVar8[1] = (int)piVar7;
        }
        *piVar7 = (int)piVar8;
        param_2[2] = _Memory[2];
        *(int **)(_Memory[2] + 4) = param_2;
      }
      if (*(int **)(*in_ECX + 4) == _Memory) {
        *(int **)(*in_ECX + 4) = param_2;
      }
      else {
        puVar3 = (undefined4 *)_Memory[1];
        if ((int *)*puVar3 == _Memory) {
          *puVar3 = param_2;
        }
        else {
          puVar3[2] = param_2;
        }
      }
      param_2[1] = _Memory[1];
      iVar2 = param_2[3];
      *(char *)(param_2 + 3) = (char)_Memory[3];
      *(char *)(_Memory + 3) = (char)iVar2;
      goto LAB_1002cc70;
    }
  }
  else {
    piVar8 = (int *)_Memory[2];
  }
  piVar7 = (int *)_Memory[1];
  if (*(char *)((int)piVar8 + 0xd) == '\0') {
    piVar8[1] = (int)piVar7;
  }
  if (*(int **)(*in_ECX + 4) == _Memory) {
    *(int **)(*in_ECX + 4) = piVar8;
  }
  else if ((int *)*piVar7 == _Memory) {
    *piVar7 = (int)piVar8;
  }
  else {
    piVar7[2] = (int)piVar8;
  }
  if (*(int **)*in_ECX == _Memory) {
    piVar6 = piVar7;
    if (*(char *)((int)piVar8 + 0xd) == '\0') {
      cVar1 = *(char *)(*piVar8 + 0xd);
      piVar4 = (int *)*piVar8;
      piVar6 = piVar8;
      while (piVar5 = piVar4, cVar1 == '\0') {
        piVar4 = (int *)*piVar5;
        cVar1 = *(char *)((int)piVar4 + 0xd);
        piVar6 = piVar5;
      }
    }
    *(int **)*in_ECX = piVar6;
  }
  iVar2 = *in_ECX;
  if (*(int **)(iVar2 + 8) == _Memory) {
    if (*(char *)((int)piVar8 + 0xd) == '\0') {
      cVar1 = *(char *)(piVar8[2] + 0xd);
      piVar6 = (int *)piVar8[2];
      piVar4 = piVar8;
      while (piVar5 = piVar6, cVar1 == '\0') {
        piVar6 = (int *)piVar5[2];
        cVar1 = *(char *)((int)piVar6 + 0xd);
        piVar4 = piVar5;
      }
      *(int **)(iVar2 + 8) = piVar4;
    }
    else {
      *(int **)(iVar2 + 8) = piVar7;
    }
  }
LAB_1002cc70:
  if ((char)_Memory[3] == '\x01') {
    if (piVar8 != *(int **)(*in_ECX + 4)) {
      while (piVar6 = piVar7, (char)piVar8[3] == '\x01') {
        piVar7 = (int *)*piVar6;
        if (piVar8 == piVar7) {
          piVar7 = (int *)piVar6[2];
          if ((char)piVar7[3] == '\0') {
            *(undefined1 *)(piVar7 + 3) = 1;
            piVar7 = (int *)piVar6[2];
            *(undefined1 *)(piVar6 + 3) = 0;
            piVar6[2] = *piVar7;
            if (*(char *)(*piVar7 + 0xd) == '\0') {
              *(int **)(*piVar7 + 4) = piVar6;
            }
            piVar7[1] = piVar6[1];
            if (piVar6 == *(int **)(*in_ECX + 4)) {
              *(int **)(*in_ECX + 4) = piVar7;
            }
            else {
              piVar4 = (int *)piVar6[1];
              if (piVar6 == (int *)*piVar4) {
                *piVar4 = (int)piVar7;
              }
              else {
                piVar4[2] = (int)piVar7;
              }
            }
            *piVar7 = (int)piVar6;
            piVar6[1] = (int)piVar7;
            piVar7 = (int *)piVar6[2];
          }
          if (*(char *)((int)piVar7 + 0xd) == '\0') {
            if ((*(char *)(*piVar7 + 0xc) != '\x01') || (*(char *)(piVar7[2] + 0xc) != '\x01')) {
              if (*(char *)(piVar7[2] + 0xc) == '\x01') {
                *(undefined1 *)(*piVar7 + 0xc) = 1;
                iVar2 = *piVar7;
                *(undefined1 *)(piVar7 + 3) = 0;
                *piVar7 = *(int *)(iVar2 + 8);
                if (*(char *)(*(int *)(iVar2 + 8) + 0xd) == '\0') {
                  *(int **)(*(int *)(iVar2 + 8) + 4) = piVar7;
                }
                *(int *)(iVar2 + 4) = piVar7[1];
                if (piVar7 == *(int **)(*in_ECX + 4)) {
                  *(int *)(*in_ECX + 4) = iVar2;
                }
                else {
                  piVar4 = (int *)piVar7[1];
                  if (piVar7 == (int *)piVar4[2]) {
                    piVar4[2] = iVar2;
                  }
                  else {
                    *piVar4 = iVar2;
                  }
                }
                *(int **)(iVar2 + 8) = piVar7;
                piVar7[1] = iVar2;
                piVar7 = (int *)piVar6[2];
              }
              *(char *)(piVar7 + 3) = (char)piVar6[3];
              *(undefined1 *)(piVar6 + 3) = 1;
              *(undefined1 *)(piVar7[2] + 0xc) = 1;
              piVar7 = (int *)piVar6[2];
              piVar6[2] = *piVar7;
              if (*(char *)(*piVar7 + 0xd) == '\0') {
                *(int **)(*piVar7 + 4) = piVar6;
              }
              piVar7[1] = piVar6[1];
              if (piVar6 == *(int **)(*in_ECX + 4)) {
                *(int **)(*in_ECX + 4) = piVar7;
                *piVar7 = (int)piVar6;
                piVar6[1] = (int)piVar7;
              }
              else {
                piVar4 = (int *)piVar6[1];
                if (piVar6 == (int *)*piVar4) {
                  *piVar4 = (int)piVar7;
                  *piVar7 = (int)piVar6;
                  piVar6[1] = (int)piVar7;
                }
                else {
                  piVar4[2] = (int)piVar7;
                  *piVar7 = (int)piVar6;
                  piVar6[1] = (int)piVar7;
                }
              }
              break;
            }
LAB_1002cdc7:
            *(undefined1 *)(piVar7 + 3) = 0;
          }
        }
        else {
          if ((char)piVar7[3] == '\0') {
            *(undefined1 *)(piVar7 + 3) = 1;
            iVar2 = *piVar6;
            *(undefined1 *)(piVar6 + 3) = 0;
            *piVar6 = *(int *)(iVar2 + 8);
            if (*(char *)(*(int *)(iVar2 + 8) + 0xd) == '\0') {
              *(int **)(*(int *)(iVar2 + 8) + 4) = piVar6;
            }
            *(int *)(iVar2 + 4) = piVar6[1];
            if (piVar6 == *(int **)(*in_ECX + 4)) {
              *(int *)(*in_ECX + 4) = iVar2;
            }
            else {
              piVar7 = (int *)piVar6[1];
              if (piVar6 == (int *)piVar7[2]) {
                piVar7[2] = iVar2;
              }
              else {
                *piVar7 = iVar2;
              }
            }
            *(int **)(iVar2 + 8) = piVar6;
            piVar6[1] = iVar2;
            piVar7 = (int *)*piVar6;
          }
          if (*(char *)((int)piVar7 + 0xd) == '\0') {
            if ((*(char *)(piVar7[2] + 0xc) == '\x01') && (*(char *)(*piVar7 + 0xc) == '\x01'))
            goto LAB_1002cdc7;
            if (*(char *)(*piVar7 + 0xc) == '\x01') {
              *(undefined1 *)(piVar7[2] + 0xc) = 1;
              piVar4 = (int *)piVar7[2];
              *(undefined1 *)(piVar7 + 3) = 0;
              piVar7[2] = *piVar4;
              if (*(char *)(*piVar4 + 0xd) == '\0') {
                *(int **)(*piVar4 + 4) = piVar7;
              }
              piVar4[1] = piVar7[1];
              if (piVar7 == *(int **)(*in_ECX + 4)) {
                *(int **)(*in_ECX + 4) = piVar4;
              }
              else {
                piVar5 = (int *)piVar7[1];
                if (piVar7 == (int *)*piVar5) {
                  *piVar5 = (int)piVar4;
                }
                else {
                  piVar5[2] = (int)piVar4;
                }
              }
              *piVar4 = (int)piVar7;
              piVar7[1] = (int)piVar4;
              piVar7 = (int *)*piVar6;
            }
            *(char *)(piVar7 + 3) = (char)piVar6[3];
            *(undefined1 *)(piVar6 + 3) = 1;
            *(undefined1 *)(*piVar7 + 0xc) = 1;
            iVar2 = *piVar6;
            *piVar6 = *(int *)(iVar2 + 8);
            if (*(char *)(*(int *)(iVar2 + 8) + 0xd) == '\0') {
              *(int **)(*(int *)(iVar2 + 8) + 4) = piVar6;
            }
            *(int *)(iVar2 + 4) = piVar6[1];
            if (piVar6 == *(int **)(*in_ECX + 4)) {
              *(int *)(*in_ECX + 4) = iVar2;
              *(int **)(iVar2 + 8) = piVar6;
              piVar6[1] = iVar2;
            }
            else {
              piVar7 = (int *)piVar6[1];
              if (piVar6 == (int *)piVar7[2]) {
                piVar7[2] = iVar2;
                *(int **)(iVar2 + 8) = piVar6;
                piVar6[1] = iVar2;
              }
              else {
                *piVar7 = iVar2;
                *(int **)(iVar2 + 8) = piVar6;
                piVar6[1] = iVar2;
              }
            }
            break;
          }
        }
        piVar7 = (int *)piVar6[1];
        piVar8 = piVar6;
        if (piVar6 == *(int **)(*in_ECX + 4)) break;
      }
    }
    *(undefined1 *)(piVar8 + 3) = 1;
  }
  FID_conflict__free(_Memory);
  if (in_ECX[1] != 0) {
    in_ECX[1] = in_ECX[1] + -1;
  }
  *param_1 = param_2;
  return;
}

