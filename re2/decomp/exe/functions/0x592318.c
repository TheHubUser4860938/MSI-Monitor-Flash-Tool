// rea decompile_all
// name: FUN_00592318
// address: 0x592318
// body: available
// range: 0x592318-0x59231d inclusive
// non_contiguous: false
// provider: Ghidra 12.1.2 (ghidra)
// analysis_profile: ac6d50be2cdf54f7005df47d1ed7e7ef55dee595681eb1b7c2e0b00d70cd697d
// limitations: The session serves operations only after Ghidra reports default auto-analysis complete; incomplete analysis does not expose partial results.; The imported Program and temporary project are ephemeral and deleted on close. Annotation operations edit session database metadata; original executable bytes are never written.; Cancelling an active Ghidra request terminates its ephemeral database and discards session annotations. The selected target remains open; the next provider query imports the original artifact again.; Default-space addresses use lowercase 0x-prefixed hexadecimal; other address spaces use <percent-encoded-space>:0x<hex>.; The Ghidra Program references PDB ISPToolForMsi.pdb (GUID b8f2ac8f-1d6f-438d-800f-ed4a14426ac6, age (hex) 1, signature unknown, version RSDS); Ghidra reports load state unknown. Original names and types may be missing; an empty name search does not prove a procedure is absent. Use list_procedures and address-based analysis to inspect recovered functions. REA does not admit a caller-selected PDB companion.; This session uses Ghidra 12.1.2. The bridge is verified against 12.1.4; other 12.1.x builds are accepted and the observed version is reported.; Pseudocode is Ghidra decompiler output, not original source and not text-equivalent to Hopper output.; External functions and functions without an analyzable body return null; other decompiler failures remain explicit.
// pseudocode: provider-specific; not original source


float10 FUN_00592318(double param_1)

{
  ushort uVar1;
  ushort uVar2;
  int iVar3;
  float10 fVar4;
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
  double dVar17;
  
  uVar1 = (ushort)((ulonglong)param_1 >> 0x30);
  uVar2 = (uVar1 & 0x7fff) + 0xcfd0;
  if (uVar2 < 0x10c6) {
    dVar10 = (param_1 * 10.185916357881302 + 6755399441055744.0) - 6755399441055744.0;
    iVar3 = ((int)ROUND(param_1 * 10.185916357881302) + 0x1c7610U & 0x3f) * 0x20;
    dVar11 = dVar10 * 3.798187816439979e-12;
    dVar5 = param_1 - dVar10 * 0.09817477042088285;
    param_1 = param_1 - dVar10 * 0.09817477042088285;
    dVar15 = param_1 - dVar11;
    dVar6 = dVar5 - dVar11;
    dVar8 = dVar5 - dVar10 * 3.798187816439979e-12;
    dVar7 = dVar6 * dVar6;
    dVar9 = dVar8 * dVar8;
    dVar12 = *(double *)(&DAT_005e39e0 + iVar3) + *(double *)(&DAT_005e39f8 + iVar3);
    dVar13 = *(double *)(&DAT_005e39f8 + iVar3) * dVar15;
    dVar16 = dVar15 * *(double *)(&DAT_005e39e0 + iVar3);
    dVar14 = dVar13 + *(double *)(&DAT_005e39e8 + iVar3);
    dVar17 = dVar16 + dVar14;
    return (float10)(dVar17 + (dVar10 * 1.2639164054974691e-22 - ((param_1 - dVar15) - dVar11)) *
                              (*(double *)(&DAT_005e39e8 + iVar3) * dVar15 - dVar12) +
                              *(double *)(&DAT_005e39f0 + iVar3) +
                              (*(double *)(&DAT_005e39e8 + iVar3) - dVar14) + dVar13 +
                              (dVar14 - dVar17) + dVar16 +
                              (dVar7 * 0.008333333333333333 + -0.16666666666666666 +
                              (dVar5 * 2.7557319223985893e-06 * dVar6 + -0.0001984126984126984) *
                              dVar7 * dVar7) * dVar12 * dVar15 * dVar7 +
                              (dVar9 * 0.041666666666666664 + -0.5 +
                              (dVar5 * 2.48015873015873e-05 * dVar8 + -0.001388888888888889) *
                              dVar9 * dVar9) * *(double *)(&DAT_005e39e8 + iVar3) * dVar9);
  }
  if ((short)uVar2 < 0x10c6) {
    return (float10)(1.0 - (double)((ulonglong)param_1 & 0xffffffffffff |
                                   (ulonglong)(uVar1 & 0x7fff) << 0x30));
  }
  fVar4 = (float10)FUN_00586ccf();
  return fVar4;
}

