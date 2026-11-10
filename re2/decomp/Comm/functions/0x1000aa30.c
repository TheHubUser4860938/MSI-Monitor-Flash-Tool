// rea decompile_all
// name: FUN_1000aa30
// address: 0x1000aa30
// body: available
// range: 0x1000aa30-0x1000acfc inclusive
// non_contiguous: false
// provider: Ghidra 12.1.2 (ghidra)
// analysis_profile: b075844f08879296d957518397cd0ddda73db81dce53d00d3f0e702766fc2af6
// limitations: The session serves operations only after Ghidra reports default auto-analysis complete; incomplete analysis does not expose partial results.; The imported Program and temporary project are ephemeral and deleted on close. Annotation operations edit session database metadata; original executable bytes are never written.; Cancelling an active Ghidra request terminates its ephemeral database and discards session annotations. The selected target remains open; the next provider query imports the original artifact again.; Default-space addresses use lowercase 0x-prefixed hexadecimal; other address spaces use <percent-encoded-space>:0x<hex>.; The Ghidra Program references PDB Comm.pdb (GUID c3062acb-498d-45fa-a233-c8b7e401bb13, age (hex) 1, signature unknown, version RSDS); Ghidra reports load state unknown. Original names and types may be missing; an empty name search does not prove a procedure is absent. Use list_procedures and address-based analysis to inspect recovered functions. REA does not admit a caller-selected PDB companion.; This session uses Ghidra 12.1.2. The bridge is verified against 12.1.4; other 12.1.x builds are accepted and the observed version is reported.; Pseudocode is Ghidra decompiler output, not original source and not text-equivalent to Hopper output.; External functions and functions without an analyzable body return null; other decompiler failures remain explicit.
// pseudocode: provider-specific; not original source


void FUN_1000aa30(byte param_1,undefined4 param_2)

{
  char *pcVar1;
  char *pcVar2;
  char *pcVar3;
  char *pcVar4;
  char *pcVar5;
  char *pcVar6;
  int iVar7;
  int iVar8;
  int iVar9;
  int iVar10;
  int iVar11;
  int iVar12;
  int iVar13;
  int iVar14;
  int iVar15;
  ushort uVar16;
  char *pcVar17;
  int iVar18;
  uint uVar19;
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
  char cVar36;
  char cVar38;
  char cVar39;
  undefined4 uVar37;
  char cVar40;
  char cVar41;
  char cVar43;
  char cVar44;
  undefined4 uVar42;
  char cVar45;
  char cVar46;
  char cVar48;
  char cVar49;
  undefined4 uVar47;
  char cVar50;
  char cVar51;
  char cVar53;
  char cVar54;
  undefined4 uVar52;
  char cVar55;
  char local_20 [24];
  undefined4 local_8;
  
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
  local_20[4] = '\0';
  local_20[5] = '\0';
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
  if (0xc < param_1) {
    __security_check_cookie(DAT_101d3fec ^ (uint)&stack0xfffffffc ^ (uint)&stack0xfffffffc);
    return;
  }
  pcVar17 = local_20;
  local_20[3] = '\0';
  local_20[2] = param_1;
  iVar18 = 3;
  do {
    local_20[3] = local_20[3] + *pcVar17;
    pcVar17 = pcVar17 + 1;
    iVar18 = iVar18 + -1;
  } while (iVar18 != 0);
  if (DAT_101def00 != (code *)0x0) {
    if (DAT_101def2c == 1) {
      iVar18 = FUN_10003c80(0x9b,4,local_20);
    }
    else {
      iVar18 = (*DAT_101def00)(DAT_101d49aa,0x9b,4,local_20);
    }
    if (iVar18 != 0) {
      if (iVar18 == 0xe5) {
        __security_check_cookie(local_8 ^ (uint)&stack0xfffffffc);
        return;
      }
      if (iVar18 == 0xe6) {
        __security_check_cookie(local_8 ^ (uint)&stack0xfffffffc);
        return;
      }
    }
  }
  uVar16 = param_1 + 3;
  local_20[0x10] = 0;
  local_20[0x11] = '\0';
  local_20[0x12] = '\0';
  local_20[0x13] = '\0';
  local_20[0x14] = '\0';
  local_20[0x15] = '\0';
  local_20[0x16] = '\0';
  local_20[0x17] = 0;
  local_20[0] = '\0';
  local_20[1] = 0;
  local_20[2] = 0;
  local_20[3] = 0;
  local_20[4] = '\0';
  local_20[5] = '\0';
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
      if (uVar16 < 0x19) {
        iVar18 = FUN_10003990(8,uVar16,local_20);
      }
      else {
        iVar18 = 0x10;
      }
    }
    else {
      iVar18 = (*DAT_101deefc)(DAT_101d49aa,8,uVar16,local_20);
    }
    if (iVar18 != 0) {
      if (iVar18 == 0xe5) {
        __security_check_cookie(local_8 ^ (uint)&stack0xfffffffc);
        return;
      }
      if (iVar18 == 0xe6) {
        __security_check_cookie(local_8 ^ (uint)&stack0xfffffffc);
        return;
      }
    }
  }
  if (local_20[0] != -0x65) {
    __security_check_cookie(local_8 ^ (uint)&stack0xfffffffc);
    return;
  }
  if (param_1 == local_20[1]) {
    cVar20 = '\0';
    uVar19 = (uint)param_1;
    iVar18 = 0;
    if ((param_1 != 0) && (0x1f < uVar19)) {
      uVar37 = 0;
      uVar42 = 0;
      uVar47 = 0;
      uVar52 = 0;
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
      cVar35 = '\0';
      do {
        cVar36 = (char)uVar37 + local_20[iVar18 + 2];
        cVar38 = (char)((uint)uVar37 >> 8) + local_20[iVar18 + 3];
        cVar39 = (char)((uint)uVar37 >> 0x10) + local_20[iVar18 + 4];
        cVar40 = (char)((uint)uVar37 >> 0x18) + local_20[iVar18 + 5];
        uVar37 = CONCAT13(cVar40,CONCAT12(cVar39,CONCAT11(cVar38,cVar36)));
        cVar41 = (char)uVar42 + local_20[iVar18 + 6];
        cVar43 = (char)((uint)uVar42 >> 8) + local_20[iVar18 + 7];
        cVar44 = (char)((uint)uVar42 >> 0x10) + local_20[iVar18 + 8];
        cVar45 = (char)((uint)uVar42 >> 0x18) + local_20[iVar18 + 9];
        uVar42 = CONCAT13(cVar45,CONCAT12(cVar44,CONCAT11(cVar43,cVar41)));
        cVar46 = (char)uVar47 + local_20[iVar18 + 10];
        cVar48 = (char)((uint)uVar47 >> 8) + local_20[iVar18 + 0xb];
        cVar49 = (char)((uint)uVar47 >> 0x10) + local_20[iVar18 + 0xc];
        cVar50 = (char)((uint)uVar47 >> 0x18) + local_20[iVar18 + 0xd];
        uVar47 = CONCAT13(cVar50,CONCAT12(cVar49,CONCAT11(cVar48,cVar46)));
        cVar51 = (char)uVar52 + local_20[iVar18 + 0xe];
        cVar53 = (char)((uint)uVar52 >> 8) + local_20[iVar18 + 0xf];
        cVar54 = (char)((uint)uVar52 >> 0x10) + local_20[iVar18 + 0x10];
        cVar55 = (char)((uint)uVar52 >> 0x18) + local_20[iVar18 + 0x11];
        uVar52 = CONCAT13(cVar55,CONCAT12(cVar54,CONCAT11(cVar53,cVar51)));
        iVar10 = iVar18 + 0x12;
        iVar11 = iVar18 + 0x13;
        iVar12 = iVar18 + 0x14;
        iVar13 = iVar18 + 0x15;
        iVar14 = iVar18 + 0x16;
        iVar15 = iVar18 + 0x17;
        pcVar17 = (char *)((int)&local_8 + iVar18);
        iVar7 = iVar18 + 1;
        iVar8 = iVar18 + 2;
        iVar9 = iVar18 + 3;
        pcVar1 = &stack0xfffffffc + iVar18;
        pcVar2 = &stack0xfffffffd + iVar18;
        pcVar3 = &stack0xfffffffe + iVar18;
        pcVar4 = &stack0xffffffff + iVar18;
        pcVar5 = &stack0x00000000 + iVar18;
        pcVar6 = &stack0x00000001 + iVar18;
        iVar18 = iVar18 + 0x20;
        cVar20 = cVar20 + local_20[iVar10];
        cVar21 = cVar21 + local_20[iVar11];
        cVar22 = cVar22 + local_20[iVar12];
        cVar23 = cVar23 + local_20[iVar13];
        cVar24 = cVar24 + local_20[iVar14];
        cVar25 = cVar25 + local_20[iVar15];
        cVar26 = cVar26 + *pcVar17;
        cVar27 = cVar27 + *(char *)((int)&local_8 + iVar7);
        cVar28 = cVar28 + *(char *)((int)&local_8 + iVar8);
        cVar29 = cVar29 + *(char *)((int)&local_8 + iVar9);
        cVar30 = cVar30 + *pcVar1;
        cVar31 = cVar31 + *pcVar2;
        cVar32 = cVar32 + *pcVar3;
        cVar33 = cVar33 + *pcVar4;
        cVar34 = cVar34 + *pcVar5;
        cVar35 = cVar35 + *pcVar6;
      } while (iVar18 < (int)(uVar19 & 0xffffffe0));
      cVar20 = cVar20 + cVar36 + cVar28 + cVar46 + cVar24 + cVar41 + cVar32 + cVar51 +
               cVar22 + cVar39 + cVar30 + cVar49 + cVar26 + cVar44 + cVar34 + cVar54 +
               cVar21 + cVar38 + cVar29 + cVar48 + cVar25 + cVar43 + cVar33 + cVar53 +
               cVar23 + cVar40 + cVar31 + cVar50 + cVar27 + cVar45 + cVar35 + cVar55;
    }
    cVar22 = '\0';
    cVar21 = '\0';
    if (iVar18 < (int)uVar19) {
      if (1 < (int)(uVar19 - iVar18)) {
        do {
          cVar22 = cVar22 + local_20[iVar18 + 2];
          cVar21 = cVar21 + local_20[iVar18 + 3];
          iVar18 = iVar18 + 2;
        } while (iVar18 < (int)(uVar19 - 1));
      }
      if (iVar18 < (int)uVar19) {
        cVar20 = cVar20 + local_20[iVar18 + 2];
      }
      cVar20 = cVar20 + cVar21 + cVar22;
    }
    if (cVar20 == local_20[uVar19 + 2]) {
      FUN_1014c320(param_2,local_20 + 2,uVar19);
      __security_check_cookie(local_8 ^ (uint)&stack0xfffffffc);
      return;
    }
    __security_check_cookie(local_8 ^ (uint)&stack0xfffffffc);
    return;
  }
  __security_check_cookie(local_8 ^ (uint)&stack0xfffffffc);
  return;
}

