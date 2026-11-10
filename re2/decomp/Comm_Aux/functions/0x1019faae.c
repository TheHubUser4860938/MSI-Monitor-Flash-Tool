// rea decompile_all
// name: FUN_1019faae
// address: 0x1019faae
// body: available
// range: 0x1019faae-0x1019fd13 inclusive
// non_contiguous: false
// provider: Ghidra 12.1.2 (ghidra)
// analysis_profile: b075844f08879296d957518397cd0ddda73db81dce53d00d3f0e702766fc2af6
// limitations: The session serves operations only after Ghidra reports default auto-analysis complete; incomplete analysis does not expose partial results.; The imported Program and temporary project are ephemeral and deleted on close. Annotation operations edit session database metadata; original executable bytes are never written.; Cancelling an active Ghidra request terminates its ephemeral database and discards session annotations. The selected target remains open; the next provider query imports the original artifact again.; Default-space addresses use lowercase 0x-prefixed hexadecimal; other address spaces use <percent-encoded-space>:0x<hex>.; The Ghidra Program references PDB Comm_Aux.pdb (GUID ba7920cc-daa3-4461-a102-1f8f66c67a2a, age (hex) 1, signature unknown, version RSDS); Ghidra reports load state unknown. Original names and types may be missing; an empty name search does not prove a procedure is absent. Use list_procedures and address-based analysis to inspect recovered functions. REA does not admit a caller-selected PDB companion.; This session uses Ghidra 12.1.2. The bridge is verified against 12.1.4; other 12.1.x builds are accepted and the observed version is reported.; Pseudocode is Ghidra decompiler output, not original source and not text-equivalent to Hopper output.; External functions and functions without an analyzable body return null; other decompiler failures remain explicit.
// pseudocode: provider-specific; not original source


float10 FUN_1019faae(double param_1)

{
  uint uVar1;
  uint uVar2;
  uint uVar3;
  int iVar4;
  int iVar5;
  undefined4 uVar6;
  ulonglong uVar7;
  double dVar8;
  undefined1 in_XMM0 [16];
  double dVar9;
  double dVar10;
  double dVar11;
  double dVar12;
  double local_c;
  
  iVar4 = 0;
  while( true ) {
    uVar7 = in_XMM0._0_8_;
    uVar2 = (uint)(ushort)(in_XMM0._6_2_ >> 4);
    dVar8 = (double)(uVar7 & 0xfffffffffffff | 0x3ff0000000000000);
    uVar1 = SUB82(dVar8 + 4398046511103.008,0) & 0x7f0;
    dVar10 = (double)(uVar7 & 0xfffff80000000 | 0x3ff0000000000000);
    dVar12 = (double)(uVar7 & 0xfffff80000000 | 0x3ff0000000000000);
    dVar11 = dVar10 * *(double *)(&DAT_101e1e60 + uVar1) - 0.43359375;
    dVar8 = (dVar8 - dVar10) * *(double *)(&DAT_101e1e60 + uVar1);
    dVar9 = ((double)(uVar7 & 0xfffffffffffff | 0x3ff0000000000000) - dVar12) *
            *(double *)(&UNK_101e1e68 + uVar1);
    dVar10 = dVar8 + dVar11;
    in_XMM0._8_8_ = dVar9 + (dVar12 * *(double *)(&UNK_101e1e68 + uVar1) - 0.43359375);
    uVar3 = uVar2 - 1;
    if (uVar3 < 0x7fe) {
      iVar4 = (uVar2 - 0x3ff) + iVar4;
      dVar12 = (double)iVar4;
      iVar5 = 0;
      if (uVar1 + iVar4 * 0x400 == 0) {
        iVar5 = 0x10;
      }
      return (float10)(((in_XMM0._8_8_ * -3.0717952561537047 + 1.775881635348345) * in_XMM0._8_8_ +
                       -1.155016766740187) * in_XMM0._8_8_ * in_XMM0._8_8_ +
                       ((dVar10 * 21.535473262846583 + -10.893557852776363) * dVar10 +
                       5.667600603343536) * dVar10 * dVar10 * dVar10 * dVar10 * dVar10 +
                       dVar10 * 0.0016161024074997105 +
                       *(double *)(&UNK_101e1a58 + uVar1) + dVar12 * 2.8363394551044964e-14 +
                       (double)((ulonglong)dVar9 & *(ulonglong *)(&UNK_101e19a8 + iVar5)) +
                      *(double *)(&DAT_101e1a50 + uVar1) + dVar11 + dVar12 * 0.30102999566395283 +
                      (double)((ulonglong)dVar8 & *(ulonglong *)(&DAT_101e19a0 + iVar5)));
    }
    local_c = (double)-(ulonglong)(param_1 == 0.0);
    if (SUB82(local_c,0) != 0) break;
    if (uVar3 != 0xffffffff) {
      if (uVar3 < 0x7ff) {
        local_c = 2.225073858507201e-308;
        if ((double)((ulonglong)param_1 & 0xfffffffffffff | 0x3ff0000000000000) == 1.0) {
          return (float10)INFINITY;
        }
        uVar6 = 0x3e9;
      }
      else if (((uVar2 & 0x7ff) < 0x7ff) ||
              (SUB84(param_1,0) == 0 && ((ulonglong)param_1 & 0xfffff00000000) == 0)) {
        local_c = -NAN;
        uVar6 = 9;
      }
      else {
        uVar6 = 0x3e9;
      }
      goto LAB_1019fcba;
    }
    in_XMM0._0_8_ = param_1 * 4503599627370496.0;
    iVar4 = -0x34;
  }
  local_c = -INFINITY;
  uVar6 = 8;
LAB_1019fcba:
  ___libm_error_support(&param_1,&param_1,&local_c,uVar6);
  return (float10)local_c;
}

