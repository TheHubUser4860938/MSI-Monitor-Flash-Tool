// rea decompile_all
// name: FUN_101b6378
// address: 0x101b6378
// body: available
// range: 0x101b6378-0x101b637d inclusive
// non_contiguous: false
// provider: Ghidra 12.1.2 (ghidra)
// analysis_profile: b075844f08879296d957518397cd0ddda73db81dce53d00d3f0e702766fc2af6
// limitations: The session serves operations only after Ghidra reports default auto-analysis complete; incomplete analysis does not expose partial results.; The imported Program and temporary project are ephemeral and deleted on close. Annotation operations edit session database metadata; original executable bytes are never written.; Cancelling an active Ghidra request terminates its ephemeral database and discards session annotations. The selected target remains open; the next provider query imports the original artifact again.; Default-space addresses use lowercase 0x-prefixed hexadecimal; other address spaces use <percent-encoded-space>:0x<hex>.; The Ghidra Program references PDB WinIspPlugIn.pdb (GUID d9f398c7-6c98-49a8-af25-a0659d5ad2f3, age (hex) 1, signature unknown, version RSDS); Ghidra reports load state unknown. Original names and types may be missing; an empty name search does not prove a procedure is absent. Use list_procedures and address-based analysis to inspect recovered functions. REA does not admit a caller-selected PDB companion.; This session uses Ghidra 12.1.2. The bridge is verified against 12.1.4; other 12.1.x builds are accepted and the observed version is reported.; Pseudocode is Ghidra decompiler output, not original source and not text-equivalent to Hopper output.; External functions and functions without an analyzable body return null; other decompiler failures remain explicit.
// pseudocode: provider-specific; not original source


float10 FUN_101b6378(double param_1)

{
  ushort uVar1;
  int iVar2;
  float10 fVar3;
  double dVar4;
  double dVar5;
  double dVar6;
  double dVar7;
  double dVar8;
  double dVar9;
  double dVar10;
  double dVar11;
  double dVar12;
  double dVar13;
  double dVar14;
  double dVar15;
  double dVar16;
  
  uVar1 = ((ushort)((ulonglong)param_1 >> 0x30) & 0x7fff) + 0xcfd0;
  if (uVar1 < 0x10c6) {
    dVar9 = (param_1 * 10.185916357881302 + 6755399441055744.0) - 6755399441055744.0;
    iVar2 = ((int)ROUND(param_1 * 10.185916357881302) + 0x1c7600U & 0x3f) * 0x20;
    dVar10 = dVar9 * 3.798187816439979e-12;
    dVar4 = param_1 - dVar9 * 0.09817477042088285;
    param_1 = param_1 - dVar9 * 0.09817477042088285;
    dVar14 = param_1 - dVar10;
    dVar5 = dVar4 - dVar10;
    dVar7 = dVar4 - dVar9 * 3.798187816439979e-12;
    dVar6 = dVar5 * dVar5;
    dVar8 = dVar7 * dVar7;
    dVar11 = *(double *)(&DAT_10208910 + iVar2) + *(double *)(&DAT_10208928 + iVar2);
    dVar12 = *(double *)(&DAT_10208928 + iVar2) * dVar14;
    dVar15 = dVar14 * *(double *)(&DAT_10208910 + iVar2);
    dVar13 = dVar12 + *(double *)(&DAT_10208918 + iVar2);
    dVar16 = dVar15 + dVar13;
    return (float10)(dVar16 + (dVar9 * 1.2639164054974691e-22 - ((param_1 - dVar14) - dVar10)) *
                              (*(double *)(&DAT_10208918 + iVar2) * dVar14 - dVar11) +
                              *(double *)(&DAT_10208920 + iVar2) +
                              (*(double *)(&DAT_10208918 + iVar2) - dVar13) + dVar12 +
                              (dVar13 - dVar16) + dVar15 +
                              (dVar6 * 0.008333333333333333 + -0.16666666666666666 +
                              (dVar4 * 2.7557319223985893e-06 * dVar5 + -0.0001984126984126984) *
                              dVar6 * dVar6) * dVar11 * dVar14 * dVar6 +
                              (dVar8 * 0.041666666666666664 + -0.5 +
                              (dVar4 * 2.48015873015873e-05 * dVar7 + -0.001388888888888889) *
                              dVar8 * dVar8) * *(double *)(&DAT_10208918 + iVar2) * dVar8);
  }
  if ((short)uVar1 < 0x10c6) {
    if (uVar1 >> 4 == 0xcfd) {
      return (float10)(param_1 * 0.9999999999999999);
    }
    return (float10)param_1;
  }
  fVar3 = (float10)FUN_101a989f();
  return fVar3;
}

