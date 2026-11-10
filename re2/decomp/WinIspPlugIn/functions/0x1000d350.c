// rea decompile_all
// name: FUN_1000d350
// address: 0x1000d350
// body: available
// range: 0x1000d350-0x1000d79d inclusive
// non_contiguous: false
// provider: Ghidra 12.1.2 (ghidra)
// analysis_profile: b075844f08879296d957518397cd0ddda73db81dce53d00d3f0e702766fc2af6
// limitations: The session serves operations only after Ghidra reports default auto-analysis complete; incomplete analysis does not expose partial results.; The imported Program and temporary project are ephemeral and deleted on close. Annotation operations edit session database metadata; original executable bytes are never written.; Cancelling an active Ghidra request terminates its ephemeral database and discards session annotations. The selected target remains open; the next provider query imports the original artifact again.; Default-space addresses use lowercase 0x-prefixed hexadecimal; other address spaces use <percent-encoded-space>:0x<hex>.; The Ghidra Program references PDB WinIspPlugIn.pdb (GUID d9f398c7-6c98-49a8-af25-a0659d5ad2f3, age (hex) 1, signature unknown, version RSDS); Ghidra reports load state unknown. Original names and types may be missing; an empty name search does not prove a procedure is absent. Use list_procedures and address-based analysis to inspect recovered functions. REA does not admit a caller-selected PDB companion.; This session uses Ghidra 12.1.2. The bridge is verified against 12.1.4; other 12.1.x builds are accepted and the observed version is reported.; Pseudocode is Ghidra decompiler output, not original source and not text-equivalent to Hopper output.; External functions and functions without an analyzable body return null; other decompiler failures remain explicit.
// pseudocode: provider-specific; not original source


void FUN_1000d350(undefined4 *param_1,int *param_2)

{
  char cVar1;
  int iVar2;
  int *piVar3;
  int *piVar4;
  int *_Memory;
  int *piVar5;
  int *in_ECX;
  undefined4 *puVar6;
  int *piVar7;
  int *piVar8;
  
  _Memory = param_2;
  if (*(char *)((int)param_2 + 0xd) == '\0') {
    piVar5 = (int *)param_2[2];
    if (*(char *)((int)piVar5 + 0xd) == '\0') {
      cVar1 = *(char *)(*piVar5 + 0xd);
      param_2 = piVar5;
      piVar5 = (int *)*piVar5;
      while (cVar1 == '\0') {
        cVar1 = *(char *)(*piVar5 + 0xd);
        param_2 = piVar5;
        piVar5 = (int *)*piVar5;
      }
    }
    else {
      cVar1 = *(char *)(param_2[1] + 0xd);
      piVar8 = (int *)param_2[1];
      piVar5 = param_2;
      while ((param_2 = piVar8, cVar1 == '\0' && (piVar5 == (int *)param_2[2]))) {
        cVar1 = *(char *)(param_2[1] + 0xd);
        piVar8 = (int *)param_2[1];
        piVar5 = param_2;
      }
    }
  }
  piVar5 = (int *)*_Memory;
  if (*(char *)((int)piVar5 + 0xd) == '\0') {
    piVar8 = piVar5;
    if ((*(char *)(_Memory[2] + 0xd) == '\0') && (piVar8 = (int *)param_2[2], param_2 != _Memory)) {
      piVar5[1] = (int)param_2;
      *param_2 = *_Memory;
      piVar5 = param_2;
      if (param_2 != (int *)_Memory[2]) {
        piVar5 = (int *)param_2[1];
        if (*(char *)((int)piVar8 + 0xd) == '\0') {
          piVar8[1] = (int)piVar5;
        }
        *piVar5 = (int)piVar8;
        param_2[2] = _Memory[2];
        *(int **)(_Memory[2] + 4) = param_2;
      }
      if (*(int **)(*in_ECX + 4) == _Memory) {
        *(int **)(*in_ECX + 4) = param_2;
      }
      else {
        puVar6 = (undefined4 *)_Memory[1];
        if ((int *)*puVar6 == _Memory) {
          *puVar6 = param_2;
        }
        else {
          puVar6[2] = param_2;
        }
      }
      param_2[1] = _Memory[1];
      iVar2 = param_2[3];
      *(char *)(param_2 + 3) = (char)_Memory[3];
      *(char *)(_Memory + 3) = (char)iVar2;
      goto LAB_1000d4ad;
    }
  }
  else {
    piVar8 = (int *)_Memory[2];
  }
  piVar5 = (int *)_Memory[1];
  if (*(char *)((int)piVar8 + 0xd) == '\0') {
    piVar8[1] = (int)piVar5;
  }
  if (*(int **)(*in_ECX + 4) == _Memory) {
    *(int **)(*in_ECX + 4) = piVar8;
  }
  else if ((int *)*piVar5 == _Memory) {
    *piVar5 = (int)piVar8;
  }
  else {
    piVar5[2] = (int)piVar8;
  }
  puVar6 = (undefined4 *)*in_ECX;
  if ((int *)*puVar6 == _Memory) {
    piVar7 = piVar5;
    if (*(char *)((int)piVar8 + 0xd) == '\0') {
      cVar1 = *(char *)(*piVar8 + 0xd);
      piVar3 = (int *)*piVar8;
      piVar7 = piVar8;
      while (piVar4 = piVar3, cVar1 == '\0') {
        piVar3 = (int *)*piVar4;
        cVar1 = *(char *)((int)piVar3 + 0xd);
        piVar7 = piVar4;
      }
      puVar6 = (undefined4 *)*in_ECX;
    }
    *puVar6 = piVar7;
  }
  if (*(int **)(*in_ECX + 8) == _Memory) {
    if (*(char *)((int)piVar8 + 0xd) == '\0') {
      cVar1 = *(char *)(piVar8[2] + 0xd);
      piVar7 = (int *)piVar8[2];
      piVar3 = piVar8;
      while (piVar4 = piVar7, cVar1 == '\0') {
        piVar7 = (int *)piVar4[2];
        cVar1 = *(char *)((int)piVar7 + 0xd);
        piVar3 = piVar4;
      }
      *(int **)(*in_ECX + 8) = piVar3;
    }
    else {
      *(int **)(*in_ECX + 8) = piVar5;
    }
  }
LAB_1000d4ad:
  if ((char)_Memory[3] == '\x01') {
    if (piVar8 != *(int **)(*in_ECX + 4)) {
      while (piVar7 = piVar5, (char)piVar8[3] == '\x01') {
        piVar5 = (int *)*piVar7;
        if (piVar8 == piVar5) {
          piVar5 = (int *)piVar7[2];
          if ((char)piVar5[3] == '\0') {
            *(undefined1 *)(piVar5 + 3) = 1;
            piVar5 = (int *)piVar7[2];
            *(undefined1 *)(piVar7 + 3) = 0;
            piVar7[2] = *piVar5;
            if (*(char *)(*piVar5 + 0xd) == '\0') {
              *(int **)(*piVar5 + 4) = piVar7;
            }
            piVar5[1] = piVar7[1];
            if (piVar7 == *(int **)(*in_ECX + 4)) {
              *(int **)(*in_ECX + 4) = piVar5;
            }
            else {
              piVar3 = (int *)piVar7[1];
              if (piVar7 == (int *)*piVar3) {
                *piVar3 = (int)piVar5;
              }
              else {
                piVar3[2] = (int)piVar5;
              }
            }
            *piVar5 = (int)piVar7;
            piVar7[1] = (int)piVar5;
            piVar5 = (int *)piVar7[2];
          }
          if (*(char *)((int)piVar5 + 0xd) == '\0') {
            if ((*(char *)(*piVar5 + 0xc) != '\x01') || (*(char *)(piVar5[2] + 0xc) != '\x01')) {
              if (*(char *)(piVar5[2] + 0xc) == '\x01') {
                *(undefined1 *)(*piVar5 + 0xc) = 1;
                iVar2 = *piVar5;
                *(undefined1 *)(piVar5 + 3) = 0;
                *piVar5 = *(int *)(iVar2 + 8);
                if (*(char *)(*(int *)(iVar2 + 8) + 0xd) == '\0') {
                  *(int **)(*(int *)(iVar2 + 8) + 4) = piVar5;
                }
                *(int *)(iVar2 + 4) = piVar5[1];
                if (piVar5 == *(int **)(*in_ECX + 4)) {
                  *(int *)(*in_ECX + 4) = iVar2;
                }
                else {
                  piVar3 = (int *)piVar5[1];
                  if (piVar5 == (int *)piVar3[2]) {
                    piVar3[2] = iVar2;
                  }
                  else {
                    *piVar3 = iVar2;
                  }
                }
                *(int **)(iVar2 + 8) = piVar5;
                piVar5[1] = iVar2;
                piVar5 = (int *)piVar7[2];
              }
              *(char *)(piVar5 + 3) = (char)piVar7[3];
              *(undefined1 *)(piVar7 + 3) = 1;
              *(undefined1 *)(piVar5[2] + 0xc) = 1;
              piVar5 = (int *)piVar7[2];
              piVar7[2] = *piVar5;
              if (*(char *)(*piVar5 + 0xd) == '\0') {
                *(int **)(*piVar5 + 4) = piVar7;
              }
              piVar5[1] = piVar7[1];
              if (piVar7 == *(int **)(*in_ECX + 4)) {
                *(int **)(*in_ECX + 4) = piVar5;
                *piVar5 = (int)piVar7;
                piVar7[1] = (int)piVar5;
              }
              else {
                piVar3 = (int *)piVar7[1];
                if (piVar7 == (int *)*piVar3) {
                  *piVar3 = (int)piVar5;
                  *piVar5 = (int)piVar7;
                  piVar7[1] = (int)piVar5;
                }
                else {
                  piVar3[2] = (int)piVar5;
                  *piVar5 = (int)piVar7;
                  piVar7[1] = (int)piVar5;
                }
              }
              break;
            }
LAB_1000d5f9:
            *(undefined1 *)(piVar5 + 3) = 0;
          }
        }
        else {
          if ((char)piVar5[3] == '\0') {
            *(undefined1 *)(piVar5 + 3) = 1;
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
              piVar5 = (int *)piVar7[1];
              if (piVar7 == (int *)piVar5[2]) {
                piVar5[2] = iVar2;
              }
              else {
                *piVar5 = iVar2;
              }
            }
            *(int **)(iVar2 + 8) = piVar7;
            piVar7[1] = iVar2;
            piVar5 = (int *)*piVar7;
          }
          if (*(char *)((int)piVar5 + 0xd) == '\0') {
            if ((*(char *)(piVar5[2] + 0xc) == '\x01') && (*(char *)(*piVar5 + 0xc) == '\x01'))
            goto LAB_1000d5f9;
            if (*(char *)(*piVar5 + 0xc) == '\x01') {
              *(undefined1 *)(piVar5[2] + 0xc) = 1;
              piVar3 = (int *)piVar5[2];
              *(undefined1 *)(piVar5 + 3) = 0;
              piVar5[2] = *piVar3;
              if (*(char *)(*piVar3 + 0xd) == '\0') {
                *(int **)(*piVar3 + 4) = piVar5;
              }
              piVar3[1] = piVar5[1];
              if (piVar5 == *(int **)(*in_ECX + 4)) {
                *(int **)(*in_ECX + 4) = piVar3;
              }
              else {
                piVar4 = (int *)piVar5[1];
                if (piVar5 == (int *)*piVar4) {
                  *piVar4 = (int)piVar3;
                }
                else {
                  piVar4[2] = (int)piVar3;
                }
              }
              *piVar3 = (int)piVar5;
              piVar5[1] = (int)piVar3;
              piVar5 = (int *)*piVar7;
            }
            *(char *)(piVar5 + 3) = (char)piVar7[3];
            *(undefined1 *)(piVar7 + 3) = 1;
            *(undefined1 *)(*piVar5 + 0xc) = 1;
            iVar2 = *piVar7;
            *piVar7 = *(int *)(iVar2 + 8);
            if (*(char *)(*(int *)(iVar2 + 8) + 0xd) == '\0') {
              *(int **)(*(int *)(iVar2 + 8) + 4) = piVar7;
            }
            *(int *)(iVar2 + 4) = piVar7[1];
            if (piVar7 == *(int **)(*in_ECX + 4)) {
              *(int *)(*in_ECX + 4) = iVar2;
              *(int **)(iVar2 + 8) = piVar7;
              piVar7[1] = iVar2;
            }
            else {
              piVar5 = (int *)piVar7[1];
              if (piVar7 == (int *)piVar5[2]) {
                piVar5[2] = iVar2;
                *(int **)(iVar2 + 8) = piVar7;
                piVar7[1] = iVar2;
              }
              else {
                *piVar5 = iVar2;
                *(int **)(iVar2 + 8) = piVar7;
                piVar7[1] = iVar2;
              }
            }
            break;
          }
        }
        piVar5 = (int *)piVar7[1];
        piVar8 = piVar7;
        if (piVar7 == *(int **)(*in_ECX + 4)) break;
      }
    }
    *(undefined1 *)(piVar8 + 3) = 1;
  }
  FUN_10048130();
  FUN_10048130();
  FUN_10048130();
  FUN_10048130();
  FUN_10048130();
  FID_conflict__free(_Memory);
  if (in_ECX[1] != 0) {
    in_ECX[1] = in_ECX[1] + -1;
  }
  *param_1 = param_2;
  return;
}

