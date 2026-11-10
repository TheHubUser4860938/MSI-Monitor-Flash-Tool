// rea decompile_all
// name: FUN_0044b3a8
// address: 0x44b3a8
// body: available
// range: 0x44b3a8-0x44b64b inclusive
// non_contiguous: false
// provider: Ghidra 12.1.2 (ghidra)
// analysis_profile: ac6d50be2cdf54f7005df47d1ed7e7ef55dee595681eb1b7c2e0b00d70cd697d
// limitations: The session serves operations only after Ghidra reports default auto-analysis complete; incomplete analysis does not expose partial results.; The imported Program and temporary project are ephemeral and deleted on close. Annotation operations edit session database metadata; original executable bytes are never written.; Cancelling an active Ghidra request terminates its ephemeral database and discards session annotations. The selected target remains open; the next provider query imports the original artifact again.; Default-space addresses use lowercase 0x-prefixed hexadecimal; other address spaces use <percent-encoded-space>:0x<hex>.; The Ghidra Program references PDB ISPToolForMsi.pdb (GUID b8f2ac8f-1d6f-438d-800f-ed4a14426ac6, age (hex) 1, signature unknown, version RSDS); Ghidra reports load state unknown. Original names and types may be missing; an empty name search does not prove a procedure is absent. Use list_procedures and address-based analysis to inspect recovered functions. REA does not admit a caller-selected PDB companion.; This session uses Ghidra 12.1.2. The bridge is verified against 12.1.4; other 12.1.x builds are accepted and the observed version is reported.; Pseudocode is Ghidra decompiler output, not original source and not text-equivalent to Hopper output.; External functions and functions without an analyzable body return null; other decompiler failures remain explicit.
// pseudocode: provider-specific; not original source


void FUN_0044b3a8(int param_1,uint param_2,int param_3,int param_4,int param_5)

{
  double dVar1;
  code *pcVar2;
  int *piVar3;
  double dVar4;
  double dVar5;
  bool bVar6;
  bool bVar7;
  undefined4 uVar8;
  int iVar9;
  int iVar10;
  CMFCZoomKernel *in_ECX;
  int *piVar11;
  uint uVar12;
  int iVar13;
  uint uVar14;
  float10 fVar15;
  double local_40;
  double local_38;
  int local_18;
  int *local_14;
  uint local_c;
  
  if ((0 < param_1) && (0 < (int)param_2)) {
    CMFCZoomKernel::Empty(in_ECX);
    *(uint *)(in_ECX + 4) = param_2;
    dVar4 = (double)(int)param_2;
    if ((int)param_2 < 0) {
      dVar4 = dVar4 + 4294967296.0;
    }
    dVar4 = dVar4 / (double)param_1;
    pcVar2 = (code *)(&PTR_FUN_0060c470)[param_5 * 4];
    dVar1 = *(double *)(&DAT_0060c478 + param_5 * 0x10);
    uVar8 = FUN_00416444(-(uint)((int)((ulonglong)param_2 * 8 >> 0x20) != 0) |
                         (uint)((ulonglong)param_2 * 8));
    local_38 = 1.0;
    *(undefined4 *)(in_ECX + 8) = uVar8;
    if (dVar4 < 1.0) {
      dVar1 = dVar1 / dVar4;
      local_38 = dVar4;
    }
    uVar14 = 0;
    if (*(int *)(in_ECX + 4) != 0) {
      do {
        dVar5 = (double)(int)uVar14;
        if ((int)uVar14 < 0) {
          dVar5 = dVar5 + 4294967296.0;
        }
        FUN_00586b40(dVar5 / dVar4 - dVar1);
        local_18 = FUN_0055bce0();
        FUN_00586a20(dVar5 / dVar4 + dVar1);
        iVar9 = FUN_0055bce0();
        *(undefined4 *)(*(int *)(in_ECX + 8) + uVar14 * 8) = 0;
        if (iVar9 - local_18 != -1) {
          uVar8 = FUN_00416444();
          local_c = 0;
          local_40 = 0.0;
          bVar7 = false;
          bVar6 = true;
          *(undefined4 *)(*(int *)(in_ECX + 8) + 4 + uVar14 * 8) = uVar8;
          piVar3 = *(int **)(*(int *)(in_ECX + 8) + 4 + uVar14 * 8);
          if (local_18 <= iVar9) {
            iVar13 = local_18 + param_3;
            local_14 = piVar3;
            do {
              guard_check_icall();
              fVar15 = (float10)(*pcVar2)();
              fVar15 = fVar15 * (float10)local_38;
              if ((float10)0 == fVar15) {
                if (!bVar6) break;
              }
              else {
                bVar6 = false;
                if (iVar13 < 0) {
                  bVar7 = true;
                  iVar10 = -(iVar13 % param_4);
LAB_0044b592:
                  uVar12 = 0;
                  piVar11 = piVar3;
                  if (local_c != 0) {
                    do {
                      if (*piVar11 == iVar10) {
                        *(double *)(piVar3 + uVar12 * 4 + 2) =
                             (double)((float10)*(double *)(piVar3 + uVar12 * 4 + 2) + fVar15);
                        goto LAB_0044b5ca;
                      }
                      uVar12 = uVar12 + 1;
                      piVar11 = piVar11 + 4;
                    } while (uVar12 < local_c);
                  }
                }
                else {
                  iVar10 = iVar13;
                  if (param_4 <= iVar13) {
                    bVar7 = true;
                    iVar10 = (param_4 - iVar13 % param_4) + -1;
                  }
                  if (bVar7) goto LAB_0044b592;
                }
                local_c = local_c + 1;
                *local_14 = iVar10;
                *(double *)(local_14 + 2) = (double)fVar15;
                local_14 = local_14 + 4;
                *(uint *)(*(int *)(in_ECX + 8) + uVar14 * 8) = local_c;
LAB_0044b5ca:
                local_40 = (double)(fVar15 + (float10)local_40);
              }
              local_18 = local_18 + 1;
              iVar13 = iVar13 + 1;
            } while (local_18 <= iVar9);
            if (local_40 != 0.0) {
              uVar12 = 0;
              iVar9 = 0;
              do {
                uVar12 = uVar12 + 1;
                iVar13 = *(int *)(*(int *)(in_ECX + 8) + 4 + uVar14 * 8);
                *(double *)(iVar13 + 8 + iVar9) = *(double *)(iVar13 + 8 + iVar9) / local_40;
                iVar9 = iVar9 + 0x10;
              } while (uVar12 <= *(uint *)(*(int *)(in_ECX + 8) + uVar14 * 8));
            }
          }
        }
        uVar14 = uVar14 + 1;
      } while (uVar14 < *(uint *)(in_ECX + 4));
    }
  }
  return;
}

