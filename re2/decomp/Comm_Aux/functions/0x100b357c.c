// rea decompile_all
// name: FUN_100b357c
// address: 0x100b357c
// body: available
// range: 0x100b357c-0x100b3830 inclusive
// non_contiguous: false
// provider: Ghidra 12.1.2 (ghidra)
// analysis_profile: b075844f08879296d957518397cd0ddda73db81dce53d00d3f0e702766fc2af6
// limitations: The session serves operations only after Ghidra reports default auto-analysis complete; incomplete analysis does not expose partial results.; The imported Program and temporary project are ephemeral and deleted on close. Annotation operations edit session database metadata; original executable bytes are never written.; Cancelling an active Ghidra request terminates its ephemeral database and discards session annotations. The selected target remains open; the next provider query imports the original artifact again.; Default-space addresses use lowercase 0x-prefixed hexadecimal; other address spaces use <percent-encoded-space>:0x<hex>.; The Ghidra Program references PDB Comm_Aux.pdb (GUID ba7920cc-daa3-4461-a102-1f8f66c67a2a, age (hex) 1, signature unknown, version RSDS); Ghidra reports load state unknown. Original names and types may be missing; an empty name search does not prove a procedure is absent. Use list_procedures and address-based analysis to inspect recovered functions. REA does not admit a caller-selected PDB companion.; This session uses Ghidra 12.1.2. The bridge is verified against 12.1.4; other 12.1.x builds are accepted and the observed version is reported.; Pseudocode is Ghidra decompiler output, not original source and not text-equivalent to Hopper output.; External functions and functions without an analyzable body return null; other decompiler failures remain explicit.
// pseudocode: provider-specific; not original source


HBITMAP__ * FUN_100b357c(int param_1,uint param_2,int param_3,int param_4)

{
  double dVar1;
  double dVar2;
  double dVar3;
  undefined1 uVar4;
  int iVar5;
  uint uVar6;
  uint uVar7;
  double *pdVar8;
  undefined1 *puVar9;
  float10 fVar10;
  float10 fVar11;
  int local_50;
  int local_4c;
  double local_48;
  double local_40;
  double local_38;
  double local_30;
  HBITMAP__ *local_28;
  uint local_24;
  undefined8 local_20;
  double *local_18;
  uint local_14;
  double *local_10;
  int local_c;
  void *local_8;
  
  local_28 = (HBITMAP__ *)0x0;
  if (param_1 != 0) {
    iVar5 = 3;
    if (2 < param_1) {
      iVar5 = param_1;
    }
    local_8 = (void *)0x0;
    iVar5 = iVar5 * 2 + 1;
    local_50 = iVar5;
    local_4c = iVar5;
    local_28 = CDrawingManager::CreateBitmap_32((CSize *)&local_50,&local_8);
    if ((local_28 == (HBITMAP__ *)0x0) || (local_8 == (void *)0x0)) {
      local_28 = (HBITMAP__ *)0x0;
    }
    else {
      local_c = iVar5 * iVar5;
      local_18 = (double *)FUN_10047ef0();
      iVar5 = iVar5 / 2;
      local_38 = (double)param_3 / 100.0;
      local_20 = (double)CONCAT44(iVar5,(undefined4)local_20);
      uVar6 = -iVar5;
      local_30 = (double)param_4 / 100.0 - local_38;
      dVar1 = (double)local_c * 0.25;
      local_14 = uVar6;
      local_48 = dVar1;
      local_24 = uVar6;
      local_10 = local_18;
      if (-iVar5 == iVar5 || SBORROW4(uVar6,iVar5) != iVar5 * -2 < 0) {
        do {
          local_20 = (double)CONCAT44(local_14 * local_14,(undefined4)local_20);
          dVar3 = (double)(int)(local_14 * local_14);
          uVar7 = uVar6;
          local_40 = dVar3;
          pdVar8 = local_10;
          for (; (int)uVar7 <= iVar5; uVar7 = uVar7 + 1) {
            fVar10 = (float10)0;
            local_20 = (double)(int)(uVar7 * uVar7);
            dVar2 = local_20 + dVar3;
            if (dVar2 < dVar1 != (dVar2 == dVar1)) {
              local_20 = (dVar2 / dVar1) * -2.0;
              fVar10 = (float10)FUN_10192680(local_20);
              fVar11 = (float10)local_38;
              if (fVar11 < fVar10 * (float10)local_30 + fVar11) {
                fVar10 = (float10)FUN_10192680(local_20);
                fVar11 = fVar10 * (float10)local_30 + (float10)local_38;
              }
              fVar10 = (float10)((double)param_4 / 100.0);
              dVar1 = local_48;
              dVar3 = local_40;
              if (fVar11 <= fVar10) {
                fVar11 = (float10)FUN_10192680(local_20);
                fVar10 = (float10)local_38;
                dVar1 = local_48;
                dVar3 = local_40;
                if (fVar10 < fVar11 * (float10)local_30 + fVar10) {
                  fVar10 = (float10)FUN_10192680(local_20);
                  fVar10 = fVar10 * (float10)local_30 + (float10)local_38;
                  dVar1 = local_48;
                  dVar3 = local_40;
                }
              }
            }
            *pdVar8 = (double)fVar10;
            pdVar8 = pdVar8 + 1;
            uVar6 = local_24;
          }
          local_14 = local_14 + 1;
          local_10 = pdVar8;
        } while ((int)local_14 <= iVar5);
      }
      if (0 < local_c) {
        puVar9 = (undefined1 *)((int)local_8 + 1);
        iVar5 = local_c;
        local_24 = param_2 >> 0x12 & 0x3f;
        do {
          uVar4 = FUN_1017f8e0();
          puVar9[1] = uVar4;
          uVar4 = FUN_1017f8e0();
          *puVar9 = uVar4;
          uVar4 = FUN_1017f8e0();
          puVar9[-1] = uVar4;
          uVar4 = FUN_1017f8e0();
          puVar9[2] = uVar4;
          puVar9 = puVar9 + 4;
          iVar5 = iVar5 + -1;
        } while (iVar5 != 0);
      }
      if (local_18 != (double *)0x0) {
        FID_conflict__free(local_18);
      }
    }
  }
  return local_28;
}

