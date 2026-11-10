// rea decompile_all
// name: FUN_10005860
// address: 0x10005860
// body: available
// range: 0x10005860-0x10005a01 inclusive
// non_contiguous: false
// provider: Ghidra 12.1.2 (ghidra)
// analysis_profile: b075844f08879296d957518397cd0ddda73db81dce53d00d3f0e702766fc2af6
// limitations: The session serves operations only after Ghidra reports default auto-analysis complete; incomplete analysis does not expose partial results.; The imported Program and temporary project are ephemeral and deleted on close. Annotation operations edit session database metadata; original executable bytes are never written.; Cancelling an active Ghidra request terminates its ephemeral database and discards session annotations. The selected target remains open; the next provider query imports the original artifact again.; Default-space addresses use lowercase 0x-prefixed hexadecimal; other address spaces use <percent-encoded-space>:0x<hex>.; Ghidra Listing reports a terminal call at 0x100059fd to 0x1015503c FUN_1015503c (external=false, thunk=false, hasNoReturn=true); fallthrough is excluded by Ghidra's flow model. This records Ghidra's FunctionManager flag, not an independent verification that the callee cannot return.; The Ghidra Program references PDB WinOperateCScaler.pdb (GUID a6737962-efea-4805-8ae6-1fc1ef126554, age (hex) 1, signature unknown, version RSDS); Ghidra reports load state unknown. Original names and types may be missing; an empty name search does not prove a procedure is absent. Use list_procedures and address-based analysis to inspect recovered functions. REA does not admit a caller-selected PDB companion.; This session uses Ghidra 12.1.2. The bridge is verified against 12.1.4; other 12.1.x builds are accepted and the observed version is reported.; Pseudocode is Ghidra decompiler output, not original source and not text-equivalent to Hopper output.; External functions and functions without an analyzable body return null; other decompiler failures remain explicit.
// pseudocode: provider-specific; not original source


void FUN_10005860(undefined4 *param_1,char param_2,undefined4 *param_3,undefined4 param_4,
                 int *param_5)

{
  char cVar1;
  int *piVar2;
  int *in_ECX;
  int *piVar3;
  int *piVar4;
  int *piVar5;
  
  if (0x3333331 < (uint)in_ECX[1]) {
    FUN_100196a0();
    FID_conflict__free(param_5);
                    /* WARNING: Subroutine does not return */
    FUN_1015503c("map/set<T> too long");
  }
  in_ECX[1] = in_ECX[1] + 1;
  param_5[1] = (int)param_3;
  if (param_3 == (undefined4 *)*in_ECX) {
    ((undefined4 *)*in_ECX)[1] = param_5;
    *(int **)*in_ECX = param_5;
    *(int **)(*in_ECX + 8) = param_5;
  }
  else if (param_2 == '\0') {
    param_3[2] = param_5;
    if (param_3 == *(undefined4 **)(*in_ECX + 8)) {
      *(int **)(*in_ECX + 8) = param_5;
    }
  }
  else {
    *param_3 = param_5;
    if (param_3 == *(undefined4 **)*in_ECX) {
      *(int **)*in_ECX = param_5;
    }
  }
  cVar1 = *(char *)(param_5[1] + 0xc);
  piVar5 = param_5;
  do {
    if (cVar1 != '\0') {
      *(undefined1 *)(*(int *)(*in_ECX + 4) + 0xc) = 1;
      *param_1 = param_5;
      return;
    }
    piVar4 = (int *)piVar5[1];
    piVar3 = *(int **)piVar4[1];
    if (piVar4 == piVar3) {
      piVar3 = (int *)((undefined4 *)piVar4[1])[2];
      if ((char)piVar3[3] == '\0') goto LAB_1000594b;
      if (piVar5 == (int *)piVar4[2]) {
        FUN_10005160(piVar4);
        piVar5 = piVar4;
      }
      *(undefined1 *)(piVar5[1] + 0xc) = 1;
      *(undefined1 *)(*(int *)(piVar5[1] + 4) + 0xc) = 0;
      piVar4 = *(int **)(piVar5[1] + 4);
      piVar3 = (int *)*piVar4;
      *piVar4 = piVar3[2];
      if (*(char *)(piVar3[2] + 0xd) == '\0') {
        *(int **)(piVar3[2] + 4) = piVar4;
      }
      piVar3[1] = piVar4[1];
      if (piVar4 == *(int **)(*in_ECX + 4)) {
        *(int **)(*in_ECX + 4) = piVar3;
        piVar3[2] = (int)piVar4;
      }
      else {
        piVar2 = (int *)piVar4[1];
        if (piVar4 == (int *)piVar2[2]) {
          piVar2[2] = (int)piVar3;
          piVar3[2] = (int)piVar4;
        }
        else {
          *piVar2 = (int)piVar3;
          piVar3[2] = (int)piVar4;
        }
      }
LAB_100059bf:
      piVar4[1] = (int)piVar3;
    }
    else {
      if ((char)piVar3[3] != '\0') {
        if (piVar5 == (int *)*piVar4) {
          FUN_100051c0(piVar4);
          piVar5 = piVar4;
        }
        *(undefined1 *)(piVar5[1] + 0xc) = 1;
        *(undefined1 *)(*(int *)(piVar5[1] + 4) + 0xc) = 0;
        piVar4 = *(int **)(piVar5[1] + 4);
        piVar3 = (int *)piVar4[2];
        piVar4[2] = *piVar3;
        if (*(char *)(*piVar3 + 0xd) == '\0') {
          *(int **)(*piVar3 + 4) = piVar4;
        }
        piVar3[1] = piVar4[1];
        if (piVar4 == *(int **)(*in_ECX + 4)) {
          *(int **)(*in_ECX + 4) = piVar3;
        }
        else {
          piVar2 = (int *)piVar4[1];
          if (piVar4 == (int *)*piVar2) {
            *piVar2 = (int)piVar3;
          }
          else {
            piVar2[2] = (int)piVar3;
          }
        }
        *piVar3 = (int)piVar4;
        goto LAB_100059bf;
      }
LAB_1000594b:
      *(undefined1 *)(piVar4 + 3) = 1;
      *(undefined1 *)(piVar3 + 3) = 1;
      *(undefined1 *)(*(int *)(piVar5[1] + 4) + 0xc) = 0;
      piVar5 = *(int **)(piVar5[1] + 4);
    }
    cVar1 = *(char *)(piVar5[1] + 0xc);
  } while( true );
}

