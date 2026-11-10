// rea decompile_all
// name: FUN_100082e0
// address: 0x100082e0
// body: available
// range: 0x100082e0-0x100084ba inclusive
// non_contiguous: false
// provider: Ghidra 12.1.2 (ghidra)
// analysis_profile: b075844f08879296d957518397cd0ddda73db81dce53d00d3f0e702766fc2af6
// limitations: The session serves operations only after Ghidra reports default auto-analysis complete; incomplete analysis does not expose partial results.; The imported Program and temporary project are ephemeral and deleted on close. Annotation operations edit session database metadata; original executable bytes are never written.; Cancelling an active Ghidra request terminates its ephemeral database and discards session annotations. The selected target remains open; the next provider query imports the original artifact again.; Default-space addresses use lowercase 0x-prefixed hexadecimal; other address spaces use <percent-encoded-space>:0x<hex>.; The Ghidra Program references PDB Comm.pdb (GUID c3062acb-498d-45fa-a233-c8b7e401bb13, age (hex) 1, signature unknown, version RSDS); Ghidra reports load state unknown. Original names and types may be missing; an empty name search does not prove a procedure is absent. Use list_procedures and address-based analysis to inspect recovered functions. REA does not admit a caller-selected PDB companion.; This session uses Ghidra 12.1.2. The bridge is verified against 12.1.4; other 12.1.x builds are accepted and the observed version is reported.; Pseudocode is Ghidra decompiler output, not original source and not text-equivalent to Hopper output.; External functions and functions without an analyzable body return null; other decompiler failures remain explicit.
// pseudocode: provider-specific; not original source


void FUN_100082e0(undefined4 param_1,int param_2)

{
  char *pcVar1;
  char *pcVar2;
  int iVar3;
  int iVar4;
  int iVar5;
  int iVar6;
  int iVar7;
  int iVar8;
  int iVar9;
  int iVar10;
  int iVar11;
  int iVar12;
  int iVar13;
  int iVar14;
  int iVar15;
  int iVar16;
  int iVar17;
  undefined4 in_ECX;
  ushort in_DX;
  uint uVar18;
  char cVar19;
  char cVar20;
  char cVar21;
  char cVar22;
  char cVar23;
  char cVar24;
  char cVar25;
  char cVar26;
  char cVar27;
  char cVar28;
  char cVar29;
  char cVar30;
  char cVar31;
  char cVar32;
  char cVar33;
  char cVar34;
  char cVar35;
  char cVar37;
  char cVar38;
  undefined4 uVar36;
  char cVar39;
  char cVar40;
  char cVar42;
  char cVar43;
  undefined4 uVar41;
  char cVar44;
  char cVar45;
  char cVar47;
  char cVar48;
  undefined4 uVar46;
  char cVar49;
  char cVar50;
  char cVar52;
  char cVar53;
  undefined4 uVar51;
  char cVar54;
  char local_28;
  byte bStack_27;
  char acStack_26 [2];
  undefined4 uStack_24;
  char acStack_20 [16];
  undefined4 uStack_10;
  char acStack_c [4];
  undefined4 local_8;
  
  local_8 = DAT_101d3fec ^ (uint)&stack0xfffffffc;
  uVar18 = (uint)in_DX;
  local_28 = '\0';
  acStack_20[9] = '\0';
  acStack_20[10] = '\0';
  acStack_20[0xb] = '\0';
  acStack_20[0xc] = '\0';
  acStack_20[0xd] = '\0';
  acStack_20[0xe] = '\0';
  acStack_20[0xf] = '\0';
  uStack_10 = 0;
  acStack_c[0] = '\0';
  bStack_27 = 0;
  acStack_26[0] = '\0';
  acStack_26[1] = 0;
  uStack_24 = 0;
  acStack_20[0] = '\0';
  acStack_20[1] = '\0';
  acStack_20[2] = '\0';
  acStack_20[3] = '\0';
  acStack_20[4] = '\0';
  acStack_20[5] = '\0';
  acStack_20[6] = '\0';
  acStack_20[7] = '\0';
  acStack_20[8] = 0;
  if (0x18 < uVar18) {
LAB_10008319:
    __security_check_cookie(local_8 ^ (uint)&stack0xfffffffc);
    return;
  }
  acStack_26[1] = param_2 == 1;
  bStack_27 = (byte)in_ECX;
  local_28 = (char)((uint)in_ECX >> 8);
  acStack_26[0] = (char)in_DX;
  uStack_24 = (uint)(byte)(acStack_26[1] + bStack_27 + acStack_26[0] + local_28);
  iVar17 = I2CWrite(DAT_101d49aa,0xbb,5,&local_28);
  if (iVar17 == 0) {
    acStack_c[0] = '\0';
    acStack_20[8] = 0;
    acStack_20[9] = '\0';
    acStack_20[10] = '\0';
    acStack_20[0xb] = '\0';
    acStack_20[0xc] = '\0';
    acStack_20[0xd] = '\0';
    acStack_20[0xe] = '\0';
    acStack_20[0xf] = '\0';
    local_28 = '\0';
    bStack_27 = 0;
    acStack_26[0] = '\0';
    acStack_26[1] = 0;
    uStack_24 = 0;
    acStack_20[0] = '\0';
    acStack_20[1] = '\0';
    acStack_20[2] = '\0';
    acStack_20[3] = '\0';
    acStack_20[4] = '\0';
    acStack_20[5] = '\0';
    acStack_20[6] = '\0';
    acStack_20[7] = '\0';
    uStack_10 = iVar17;
    iVar17 = I2CRead(DAT_101d49aa,8,uVar18 + 3,&local_28);
    if (iVar17 == 0) {
      cVar19 = '\0';
      if (local_28 != -0x45) {
        __security_check_cookie(local_8 ^ (uint)&stack0xfffffffc);
        return;
      }
      if (in_DX != bStack_27) goto LAB_10008319;
      iVar17 = 0;
      if ((uVar18 != 0) && (0x1f < uVar18)) {
        uVar36 = 0;
        uVar41 = 0;
        uVar46 = 0;
        uVar51 = 0;
        cVar19 = '\0';
        cVar20 = '\0';
        cVar21 = '\0';
        cVar22 = '\0';
        cVar23 = '\0';
        cVar24 = '\0';
        cVar25 = '\0';
        cVar26 = '\0';
        cVar27 = '\0';
        cVar28 = '\0';
        cVar29 = '\0';
        cVar30 = '\0';
        cVar31 = '\0';
        cVar32 = '\0';
        cVar33 = '\0';
        cVar34 = '\0';
        do {
          cVar35 = (char)uVar36 + acStack_26[iVar17];
          cVar37 = (char)((uint)uVar36 >> 8) + acStack_26[iVar17 + 1];
          cVar38 = (char)((uint)uVar36 >> 0x10) + *(char *)((int)&uStack_24 + iVar17);
          cVar39 = (char)((uint)uVar36 >> 0x18) + *(char *)((int)&uStack_24 + iVar17 + 1);
          uVar36 = CONCAT13(cVar39,CONCAT12(cVar38,CONCAT11(cVar37,cVar35)));
          cVar40 = (char)uVar41 + *(char *)((int)&uStack_24 + iVar17 + 2);
          cVar42 = (char)((uint)uVar41 >> 8) + *(char *)((int)&uStack_24 + iVar17 + 3);
          cVar43 = (char)((uint)uVar41 >> 0x10) + acStack_20[iVar17];
          cVar44 = (char)((uint)uVar41 >> 0x18) + acStack_20[iVar17 + 1];
          uVar41 = CONCAT13(cVar44,CONCAT12(cVar43,CONCAT11(cVar42,cVar40)));
          cVar45 = (char)uVar46 + acStack_20[iVar17 + 2];
          cVar47 = (char)((uint)uVar46 >> 8) + acStack_20[iVar17 + 3];
          cVar48 = (char)((uint)uVar46 >> 0x10) + acStack_20[iVar17 + 4];
          cVar49 = (char)((uint)uVar46 >> 0x18) + acStack_20[iVar17 + 5];
          uVar46 = CONCAT13(cVar49,CONCAT12(cVar48,CONCAT11(cVar47,cVar45)));
          cVar50 = (char)uVar51 + acStack_20[iVar17 + 6];
          cVar52 = (char)((uint)uVar51 >> 8) + acStack_20[iVar17 + 7];
          cVar53 = (char)((uint)uVar51 >> 0x10) + acStack_20[iVar17 + 8];
          cVar54 = (char)((uint)uVar51 >> 0x18) + acStack_20[iVar17 + 9];
          uVar51 = CONCAT13(cVar54,CONCAT12(cVar53,CONCAT11(cVar52,cVar50)));
          iVar11 = iVar17 + 10;
          iVar12 = iVar17 + 0xb;
          iVar13 = iVar17 + 0xc;
          iVar14 = iVar17 + 0xd;
          iVar15 = iVar17 + 0xe;
          iVar16 = iVar17 + 0xf;
          iVar3 = iVar17 + -4;
          iVar4 = iVar17 + -3;
          iVar5 = iVar17 + -2;
          iVar6 = iVar17 + -1;
          pcVar1 = acStack_c + iVar17;
          iVar7 = iVar17 + 1;
          iVar8 = iVar17 + 2;
          iVar9 = iVar17 + 3;
          pcVar2 = (char *)((int)&local_8 + iVar17);
          iVar10 = iVar17 + 1;
          iVar17 = iVar17 + 0x20;
          cVar19 = cVar19 + acStack_20[iVar11];
          cVar20 = cVar20 + acStack_20[iVar12];
          cVar21 = cVar21 + acStack_20[iVar13];
          cVar22 = cVar22 + acStack_20[iVar14];
          cVar23 = cVar23 + acStack_20[iVar15];
          cVar24 = cVar24 + acStack_20[iVar16];
          cVar25 = cVar25 + acStack_c[iVar3];
          cVar26 = cVar26 + acStack_c[iVar4];
          cVar27 = cVar27 + acStack_c[iVar5];
          cVar28 = cVar28 + acStack_c[iVar6];
          cVar29 = cVar29 + *pcVar1;
          cVar30 = cVar30 + acStack_c[iVar7];
          cVar31 = cVar31 + acStack_c[iVar8];
          cVar32 = cVar32 + acStack_c[iVar9];
          cVar33 = cVar33 + *pcVar2;
          cVar34 = cVar34 + *(char *)((int)&local_8 + iVar10);
        } while (iVar17 < (int)(uVar18 & 0xffffffe0));
        cVar19 = cVar19 + cVar35 + cVar27 + cVar45 + cVar23 + cVar40 + cVar31 + cVar50 +
                 cVar21 + cVar38 + cVar29 + cVar48 + cVar25 + cVar43 + cVar33 + cVar53 +
                 cVar20 + cVar37 + cVar28 + cVar47 + cVar24 + cVar42 + cVar32 + cVar52 +
                 cVar22 + cVar39 + cVar30 + cVar49 + cVar26 + cVar44 + cVar34 + cVar54;
      }
      cVar21 = '\0';
      cVar20 = '\0';
      if (iVar17 < (int)uVar18) {
        if (1 < (int)(uVar18 - iVar17)) {
          do {
            cVar21 = cVar21 + acStack_26[iVar17];
            cVar20 = cVar20 + acStack_26[iVar17 + 1];
            iVar17 = iVar17 + 2;
          } while (iVar17 < (int)(uVar18 - 1));
        }
        if (iVar17 < (int)uVar18) {
          cVar19 = cVar19 + acStack_26[iVar17];
        }
        cVar19 = cVar19 + cVar20 + cVar21;
      }
      if (cVar19 != acStack_26[uVar18]) {
        __security_check_cookie(local_8 ^ (uint)&stack0xfffffffc);
        return;
      }
      FUN_1014c320(param_1,acStack_26,uVar18);
    }
  }
  __security_check_cookie(local_8 ^ (uint)&stack0xfffffffc);
  return;
}

