// rea decompile_all
// name: FUN_1000b7b0
// address: 0x1000b7b0
// body: available
// range: 0x1000b7b0-0x1000bab0 inclusive
// non_contiguous: false
// provider: Ghidra 12.1.2 (ghidra)
// analysis_profile: b075844f08879296d957518397cd0ddda73db81dce53d00d3f0e702766fc2af6
// limitations: The session serves operations only after Ghidra reports default auto-analysis complete; incomplete analysis does not expose partial results.; The imported Program and temporary project are ephemeral and deleted on close. Annotation operations edit session database metadata; original executable bytes are never written.; Cancelling an active Ghidra request terminates its ephemeral database and discards session annotations. The selected target remains open; the next provider query imports the original artifact again.; Default-space addresses use lowercase 0x-prefixed hexadecimal; other address spaces use <percent-encoded-space>:0x<hex>.; The Ghidra Program references PDB Comm.pdb (GUID c3062acb-498d-45fa-a233-c8b7e401bb13, age (hex) 1, signature unknown, version RSDS); Ghidra reports load state unknown. Original names and types may be missing; an empty name search does not prove a procedure is absent. Use list_procedures and address-based analysis to inspect recovered functions. REA does not admit a caller-selected PDB companion.; This session uses Ghidra 12.1.2. The bridge is verified against 12.1.4; other 12.1.x builds are accepted and the observed version is reported.; Pseudocode is Ghidra decompiler output, not original source and not text-equivalent to Hopper output.; External functions and functions without an analyzable body return null; other decompiler failures remain explicit.
// pseudocode: provider-specific; not original source


void FUN_1000b7b0(byte param_1,int param_2)

{
  int iVar1;
  int iVar2;
  int iVar3;
  uint uVar4;
  char *pcVar5;
  char *pcVar6;
  char *pcVar7;
  char *pcVar8;
  char *pcVar9;
  char *pcVar10;
  int iVar11;
  int iVar12;
  int iVar13;
  int iVar14;
  int iVar15;
  int iVar16;
  ushort uVar17;
  char *pcVar18;
  undefined4 in_ECX;
  undefined4 in_EDX;
  int iVar19;
  uint uVar20;
  undefined1 in_XMM1_Ba;
  char cVar21;
  undefined1 in_XMM1_Bb;
  char cVar22;
  undefined1 in_XMM1_Bc;
  char cVar23;
  undefined1 in_XMM1_Bd;
  char cVar24;
  undefined1 in_XMM1_Be;
  char cVar25;
  undefined1 in_XMM1_Bf;
  char cVar26;
  undefined1 in_XMM1_Bg;
  char cVar27;
  undefined1 in_XMM1_Bh;
  char cVar28;
  undefined1 in_XMM1_Bi;
  char cVar29;
  undefined1 in_XMM1_Bj;
  char cVar30;
  undefined1 in_XMM1_Bk;
  char cVar31;
  undefined1 in_XMM1_Bl;
  char cVar32;
  undefined1 in_XMM1_Bm;
  char cVar33;
  undefined1 in_XMM1_Bn;
  char cVar34;
  undefined1 in_XMM1_Bo;
  char cVar35;
  undefined1 in_XMM1_Bp;
  char cVar36;
  char cVar37;
  char cVar39;
  char cVar40;
  char cVar41;
  char cVar42;
  char cVar44;
  char cVar45;
  char cVar46;
  char cVar47;
  char cVar49;
  char cVar50;
  char cVar51;
  char cVar52;
  char cVar54;
  char cVar55;
  char cVar56;
  char local_20 [24];
  undefined4 local_8;
  uint uVar38;
  uint uVar43;
  uint uVar48;
  uint uVar53;
  
  local_8 = DAT_101d3fec ^ (uint)&stack0xfffffffc;
  local_20[0] = '\0';
  local_20[0x11] = '\0';
  local_20[0x12] = '\0';
  local_20[0x13] = '\0';
  local_20[0x14] = '\0';
  local_20[0x15] = '\0';
  local_20[0x16] = '\0';
  local_20[0x17] = 0;
  local_20[1] = 0;
  local_20[2] = 0;
  local_20[3] = 0;
  local_20[4] = 0;
  local_20[5] = 0;
  local_20[6] = '\0';
  local_20[7] = '\0';
  local_20[8] = '\0';
  local_20[9] = '\0';
  local_20[10] = '\0';
  local_20[0xb] = '\0';
  local_20[0xc] = '\0';
  local_20[0xd] = '\0';
  local_20[0xe] = '\0';
  local_20[0xf] = '\0';
  local_20[0x10] = 0;
  if (8 < param_1) {
    __security_check_cookie(DAT_101d3fec ^ (uint)&stack0xfffffffc ^ (uint)&stack0xfffffffc);
    return;
  }
  local_20[0] = (char)in_ECX;
  pcVar18 = local_20;
  local_20[2] = (char)in_EDX;
  local_20[1] = (char)((uint)in_ECX >> 8);
  local_20[5] = '\0';
  local_20[3] = (char)((uint)in_EDX >> 8);
  iVar19 = 5;
  local_20[4] = param_1;
  do {
    local_20[5] = local_20[5] + *pcVar18;
    pcVar18 = pcVar18 + 1;
    iVar19 = iVar19 + -1;
  } while (iVar19 != 0);
  if (DAT_101def00 != (code *)0x0) {
    if (DAT_101def2c == 1) {
      iVar19 = FUN_10003c80(0x97,6,local_20);
    }
    else {
      iVar19 = (*DAT_101def00)(DAT_101d49aa,0x97,6,local_20);
    }
    if (iVar19 != 0) {
      if (iVar19 == 0xe5) {
        __security_check_cookie(local_8 ^ (uint)&stack0xfffffffc);
        return;
      }
      if (iVar19 == 0xe6) {
        __security_check_cookie(local_8 ^ (uint)&stack0xfffffffc);
        return;
      }
    }
  }
  local_20[0x10] = 0;
  local_20[0x11] = '\0';
  local_20[0x12] = '\0';
  local_20[0x13] = '\0';
  local_20[0x14] = '\0';
  local_20[0x15] = '\0';
  local_20[0x16] = '\0';
  local_20[0x17] = 0;
  uVar17 = (ushort)param_1 * 2 + 3;
  local_20[0] = '\0';
  local_20[1] = 0;
  local_20[2] = 0;
  local_20[3] = 0;
  local_20[4] = 0;
  local_20[5] = 0;
  local_20[6] = '\0';
  local_20[7] = '\0';
  local_20[8] = '\0';
  local_20[9] = '\0';
  local_20[10] = '\0';
  local_20[0xb] = '\0';
  local_20[0xc] = '\0';
  local_20[0xd] = '\0';
  local_20[0xe] = '\0';
  local_20[0xf] = '\0';
  if (DAT_101deefc != (code *)0x0) {
    if (DAT_101def2c == 1) {
      if (uVar17 < 0x19) {
        iVar19 = FUN_10003990(8,uVar17,local_20);
      }
      else {
        iVar19 = 0x10;
      }
    }
    else {
      iVar19 = (*DAT_101deefc)(DAT_101d49aa,8,uVar17,local_20);
    }
    if (iVar19 != 0) {
      if (iVar19 == 0xe5) {
        __security_check_cookie(local_8 ^ (uint)&stack0xfffffffc);
        return;
      }
      if (iVar19 == 0xe6) {
        __security_check_cookie(local_8 ^ (uint)&stack0xfffffffc);
        return;
      }
    }
  }
  if (local_20[0] != -0x69) {
    __security_check_cookie(local_8 ^ (uint)&stack0xfffffffc);
    return;
  }
  if (param_1 == local_20[1]) {
    uVar20 = (uint)param_1;
    cVar21 = '\0';
    iVar19 = 0;
    uVar4 = uVar20 * 2;
    if ((uVar20 != 0) && (0x1f < uVar4)) {
      uVar38 = CONCAT13(in_XMM1_Bd,CONCAT12(in_XMM1_Bc,CONCAT11(in_XMM1_Bb,in_XMM1_Ba))) ^
               CONCAT13(in_XMM1_Bd,CONCAT12(in_XMM1_Bc,CONCAT11(in_XMM1_Bb,in_XMM1_Ba)));
      cVar21 = (char)uVar38;
      cVar22 = (char)(uVar38 >> 8);
      cVar23 = (char)(uVar38 >> 0x10);
      cVar24 = (char)(uVar38 >> 0x18);
      uVar43 = CONCAT13(in_XMM1_Bh,CONCAT12(in_XMM1_Bg,CONCAT11(in_XMM1_Bf,in_XMM1_Be))) ^
               CONCAT13(in_XMM1_Bh,CONCAT12(in_XMM1_Bg,CONCAT11(in_XMM1_Bf,in_XMM1_Be)));
      cVar25 = (char)uVar43;
      cVar26 = (char)(uVar43 >> 8);
      cVar27 = (char)(uVar43 >> 0x10);
      cVar28 = (char)(uVar43 >> 0x18);
      uVar48 = CONCAT13(in_XMM1_Bl,CONCAT12(in_XMM1_Bk,CONCAT11(in_XMM1_Bj,in_XMM1_Bi))) ^
               CONCAT13(in_XMM1_Bl,CONCAT12(in_XMM1_Bk,CONCAT11(in_XMM1_Bj,in_XMM1_Bi)));
      cVar29 = (char)uVar48;
      cVar30 = (char)(uVar48 >> 8);
      cVar31 = (char)(uVar48 >> 0x10);
      cVar32 = (char)(uVar48 >> 0x18);
      uVar53 = CONCAT13(in_XMM1_Bp,CONCAT12(in_XMM1_Bo,CONCAT11(in_XMM1_Bn,in_XMM1_Bm))) ^
               CONCAT13(in_XMM1_Bp,CONCAT12(in_XMM1_Bo,CONCAT11(in_XMM1_Bn,in_XMM1_Bm)));
      cVar33 = (char)uVar53;
      cVar34 = (char)(uVar53 >> 8);
      cVar35 = (char)(uVar53 >> 0x10);
      cVar36 = (char)(uVar53 >> 0x18);
      do {
        cVar21 = cVar21 + local_20[iVar19 + 2];
        cVar22 = cVar22 + local_20[iVar19 + 3];
        cVar23 = cVar23 + local_20[iVar19 + 4];
        cVar24 = cVar24 + local_20[iVar19 + 5];
        cVar25 = cVar25 + local_20[iVar19 + 6];
        cVar26 = cVar26 + local_20[iVar19 + 7];
        cVar27 = cVar27 + local_20[iVar19 + 8];
        cVar28 = cVar28 + local_20[iVar19 + 9];
        cVar29 = cVar29 + local_20[iVar19 + 10];
        cVar30 = cVar30 + local_20[iVar19 + 0xb];
        cVar31 = cVar31 + local_20[iVar19 + 0xc];
        cVar32 = cVar32 + local_20[iVar19 + 0xd];
        cVar33 = cVar33 + local_20[iVar19 + 0xe];
        cVar34 = cVar34 + local_20[iVar19 + 0xf];
        cVar35 = cVar35 + local_20[iVar19 + 0x10];
        cVar36 = cVar36 + local_20[iVar19 + 0x11];
        iVar11 = iVar19 + 0x12;
        iVar12 = iVar19 + 0x13;
        iVar13 = iVar19 + 0x14;
        iVar14 = iVar19 + 0x15;
        iVar15 = iVar19 + 0x16;
        iVar16 = iVar19 + 0x17;
        pcVar18 = (char *)((int)&local_8 + iVar19);
        iVar1 = iVar19 + 1;
        iVar2 = iVar19 + 2;
        iVar3 = iVar19 + 3;
        pcVar5 = &stack0xfffffffc + iVar19;
        pcVar6 = &stack0xfffffffd + iVar19;
        pcVar7 = &stack0xfffffffe + iVar19;
        pcVar8 = &stack0xffffffff + iVar19;
        pcVar9 = &stack0x00000000 + iVar19;
        pcVar10 = &stack0x00000001 + iVar19;
        iVar19 = iVar19 + 0x20;
        cVar37 = (char)uVar38 + local_20[iVar11];
        cVar39 = (char)(uVar38 >> 8) + local_20[iVar12];
        cVar40 = (char)(uVar38 >> 0x10) + local_20[iVar13];
        cVar41 = (char)(uVar38 >> 0x18) + local_20[iVar14];
        uVar38 = CONCAT13(cVar41,CONCAT12(cVar40,CONCAT11(cVar39,cVar37)));
        cVar42 = (char)uVar43 + local_20[iVar15];
        cVar44 = (char)(uVar43 >> 8) + local_20[iVar16];
        cVar45 = (char)(uVar43 >> 0x10) + *pcVar18;
        cVar46 = (char)(uVar43 >> 0x18) + *(char *)((int)&local_8 + iVar1);
        uVar43 = CONCAT13(cVar46,CONCAT12(cVar45,CONCAT11(cVar44,cVar42)));
        cVar47 = (char)uVar48 + *(char *)((int)&local_8 + iVar2);
        cVar49 = (char)(uVar48 >> 8) + *(char *)((int)&local_8 + iVar3);
        cVar50 = (char)(uVar48 >> 0x10) + *pcVar5;
        cVar51 = (char)(uVar48 >> 0x18) + *pcVar6;
        uVar48 = CONCAT13(cVar51,CONCAT12(cVar50,CONCAT11(cVar49,cVar47)));
        cVar52 = (char)uVar53 + *pcVar7;
        cVar54 = (char)(uVar53 >> 8) + *pcVar8;
        cVar55 = (char)(uVar53 >> 0x10) + *pcVar9;
        cVar56 = (char)(uVar53 >> 0x18) + *pcVar10;
        uVar53 = CONCAT13(cVar56,CONCAT12(cVar55,CONCAT11(cVar54,cVar52)));
      } while (iVar19 < (int)(uVar4 & 0xffffffe0));
      cVar21 = cVar21 + cVar37 + cVar29 + cVar47 + cVar25 + cVar42 + cVar33 + cVar52 +
               cVar23 + cVar40 + cVar31 + cVar50 + cVar27 + cVar45 + cVar35 + cVar55 +
               cVar22 + cVar39 + cVar30 + cVar49 + cVar26 + cVar44 + cVar34 + cVar54 +
               cVar24 + cVar41 + cVar32 + cVar51 + cVar28 + cVar46 + cVar36 + cVar56;
    }
    cVar23 = '\0';
    cVar22 = '\0';
    if (iVar19 < (int)uVar4) {
      if (1 < (int)(uVar4 - iVar19)) {
        do {
          cVar23 = cVar23 + local_20[iVar19 + 2];
          cVar22 = cVar22 + local_20[iVar19 + 3];
          iVar19 = iVar19 + 2;
        } while (iVar19 < (int)(uVar4 - 1));
      }
      if (iVar19 < (int)uVar4) {
        cVar21 = cVar21 + local_20[iVar19 + 2];
      }
      cVar21 = cVar21 + cVar22 + cVar23;
    }
    if (cVar21 == local_20[uVar4 + 2]) {
      iVar19 = 0;
      if (uVar20 != 0) {
        do {
          iVar2 = iVar19 * 2;
          iVar3 = iVar19 * 2;
          iVar1 = iVar19 * 2;
          iVar19 = iVar19 + 1;
          *(ushort *)(param_2 + iVar1) = CONCAT11(local_20[iVar2 + 3],local_20[iVar3 + 2]);
        } while (iVar19 < (int)uVar20);
      }
      __security_check_cookie(local_8 ^ (uint)&stack0xfffffffc);
      return;
    }
    __security_check_cookie(local_8 ^ (uint)&stack0xfffffffc);
    return;
  }
  __security_check_cookie(local_8 ^ (uint)&stack0xfffffffc);
  return;
}

