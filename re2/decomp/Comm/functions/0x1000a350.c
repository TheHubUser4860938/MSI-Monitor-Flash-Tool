// rea decompile_all
// name: FUN_1000a350
// address: 0x1000a350
// body: available
// range: 0x1000a350-0x1000a640 inclusive
// non_contiguous: false
// provider: Ghidra 12.1.2 (ghidra)
// analysis_profile: b075844f08879296d957518397cd0ddda73db81dce53d00d3f0e702766fc2af6
// limitations: The session serves operations only after Ghidra reports default auto-analysis complete; incomplete analysis does not expose partial results.; The imported Program and temporary project are ephemeral and deleted on close. Annotation operations edit session database metadata; original executable bytes are never written.; Cancelling an active Ghidra request terminates its ephemeral database and discards session annotations. The selected target remains open; the next provider query imports the original artifact again.; Default-space addresses use lowercase 0x-prefixed hexadecimal; other address spaces use <percent-encoded-space>:0x<hex>.; The Ghidra Program references PDB Comm.pdb (GUID c3062acb-498d-45fa-a233-c8b7e401bb13, age (hex) 1, signature unknown, version RSDS); Ghidra reports load state unknown. Original names and types may be missing; an empty name search does not prove a procedure is absent. Use list_procedures and address-based analysis to inspect recovered functions. REA does not admit a caller-selected PDB companion.; This session uses Ghidra 12.1.2. The bridge is verified against 12.1.4; other 12.1.x builds are accepted and the observed version is reported.; Pseudocode is Ghidra decompiler output, not original source and not text-equivalent to Hopper output.; External functions and functions without an analyzable body return null; other decompiler failures remain explicit.
// pseudocode: provider-specific; not original source


void FUN_1000a350(byte param_1,int param_2)

{
  int iVar1;
  int iVar2;
  int iVar3;
  uint uVar4;
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
  uint3 uVar18;
  ushort uVar19;
  char *pcVar20;
  undefined1 in_CL;
  char cVar21;
  undefined1 in_DL;
  int iVar22;
  uint uVar23;
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
  char cVar37;
  char cVar38;
  char cVar39;
  char cVar41;
  char cVar42;
  undefined4 uVar40;
  char cVar43;
  char cVar44;
  char cVar46;
  char cVar47;
  undefined4 uVar45;
  char cVar48;
  char cVar49;
  char cVar51;
  char cVar52;
  undefined4 uVar50;
  char cVar53;
  char cVar54;
  char cVar56;
  char cVar57;
  undefined4 uVar55;
  char cVar58;
  undefined4 local_2c;
  char acStack_28 [32];
  uint local_8;
  
  local_8 = DAT_101d3fec ^ (uint)&stack0xfffffffc;
  acStack_28[0x1c] = '\0';
  acStack_28[0x1d] = '\0';
  local_2c = 0;
  acStack_28[0] = '\0';
  acStack_28[1] = '\0';
  acStack_28[2] = '\0';
  acStack_28[3] = '\0';
  acStack_28[4] = '\0';
  acStack_28[5] = '\0';
  acStack_28[6] = '\0';
  acStack_28[7] = '\0';
  acStack_28[8] = '\0';
  acStack_28[9] = '\0';
  acStack_28[10] = '\0';
  acStack_28[0xb] = '\0';
  acStack_28[0xc] = '\0';
  acStack_28[0xd] = '\0';
  acStack_28[0xe] = '\0';
  acStack_28[0xf] = '\0';
  acStack_28[0x10] = '\0';
  acStack_28[0x11] = '\0';
  acStack_28[0x12] = '\0';
  acStack_28[0x13] = '\0';
  acStack_28[0x14] = '\0';
  acStack_28[0x15] = '\0';
  acStack_28[0x16] = '\0';
  acStack_28[0x17] = '\0';
  acStack_28[0x18] = '\0';
  acStack_28[0x19] = '\0';
  acStack_28[0x1a] = '\0';
  acStack_28[0x1b] = '\0';
  if (0xc < param_1) {
    __security_check_cookie(DAT_101d3fec ^ (uint)&stack0xfffffffc ^ (uint)&stack0xfffffffc);
    return;
  }
  pcVar20 = (char *)&local_2c;
  cVar21 = '\0';
  local_2c._0_3_ = CONCAT12(param_1,CONCAT11(in_DL,in_CL));
  uVar18 = (uint3)local_2c;
  local_2c = (uint)(uint3)local_2c;
  iVar22 = 3;
  do {
    cVar21 = cVar21 + *pcVar20;
    pcVar20 = pcVar20 + 1;
    iVar22 = iVar22 + -1;
  } while (iVar22 != 0);
  local_2c = CONCAT13(cVar21,uVar18);
  if (DAT_101def00 != (code *)0x0) {
    if (DAT_101def2c == 1) {
      iVar22 = FUN_10003c80(0x9d,4,&local_2c);
    }
    else {
      iVar22 = (*DAT_101def00)(DAT_101d49aa,0x9d,4,&local_2c);
    }
    if (iVar22 != 0) {
      if (iVar22 == 0xe5) {
        __security_check_cookie(local_8 ^ (uint)&stack0xfffffffc);
        return;
      }
      if (iVar22 == 0xe6) {
        __security_check_cookie(local_8 ^ (uint)&stack0xfffffffc);
        return;
      }
    }
  }
  acStack_28[0x1c] = '\0';
  acStack_28[0x1d] = '\0';
  uVar19 = (ushort)param_1 * 2 + 3;
  local_2c = 0;
  acStack_28[0] = '\0';
  acStack_28[1] = '\0';
  acStack_28[2] = '\0';
  acStack_28[3] = '\0';
  acStack_28[4] = '\0';
  acStack_28[5] = '\0';
  acStack_28[6] = '\0';
  acStack_28[7] = '\0';
  acStack_28[8] = '\0';
  acStack_28[9] = '\0';
  acStack_28[10] = '\0';
  acStack_28[0xb] = '\0';
  acStack_28[0xc] = '\0';
  acStack_28[0xd] = '\0';
  acStack_28[0xe] = '\0';
  acStack_28[0xf] = '\0';
  acStack_28[0x10] = '\0';
  acStack_28[0x11] = '\0';
  acStack_28[0x12] = '\0';
  acStack_28[0x13] = '\0';
  acStack_28[0x14] = '\0';
  acStack_28[0x15] = '\0';
  acStack_28[0x16] = '\0';
  acStack_28[0x17] = '\0';
  acStack_28[0x18] = '\0';
  acStack_28[0x19] = '\0';
  acStack_28[0x1a] = '\0';
  acStack_28[0x1b] = '\0';
  if (DAT_101deefc != (code *)0x0) {
    if (DAT_101def2c == 1) {
      if (uVar19 < 0x19) {
        iVar22 = FUN_10003990(8,uVar19,&local_2c);
      }
      else {
        iVar22 = 0x10;
      }
    }
    else {
      iVar22 = (*DAT_101deefc)(DAT_101d49aa,8,uVar19,&local_2c);
    }
    if (iVar22 != 0) {
      if (iVar22 == 0xe5) {
        __security_check_cookie(local_8 ^ (uint)&stack0xfffffffc);
        return;
      }
      if (iVar22 == 0xe6) {
        __security_check_cookie(local_8 ^ (uint)&stack0xfffffffc);
        return;
      }
    }
  }
  if ((char)local_2c != -99) {
    __security_check_cookie(local_8 ^ (uint)&stack0xfffffffc);
    return;
  }
  if (param_1 == local_2c._1_1_) {
    uVar23 = (uint)param_1;
    cVar21 = '\0';
    iVar22 = 0;
    uVar4 = uVar23 * 2;
    if ((uVar23 != 0) && (0x1f < uVar4)) {
      uVar40 = 0;
      uVar45 = 0;
      uVar50 = 0;
      uVar55 = 0;
      cVar21 = '\0';
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
      cVar36 = '\0';
      cVar37 = '\0';
      cVar38 = '\0';
      do {
        cVar39 = (char)uVar40 + *(char *)((int)&local_2c + iVar22 + 2);
        cVar41 = (char)((uint)uVar40 >> 8) + *(char *)((int)&local_2c + iVar22 + 3);
        cVar42 = (char)((uint)uVar40 >> 0x10) + acStack_28[iVar22];
        cVar43 = (char)((uint)uVar40 >> 0x18) + acStack_28[iVar22 + 1];
        uVar40 = CONCAT13(cVar43,CONCAT12(cVar42,CONCAT11(cVar41,cVar39)));
        cVar44 = (char)uVar45 + acStack_28[iVar22 + 2];
        cVar46 = (char)((uint)uVar45 >> 8) + acStack_28[iVar22 + 3];
        cVar47 = (char)((uint)uVar45 >> 0x10) + acStack_28[iVar22 + 4];
        cVar48 = (char)((uint)uVar45 >> 0x18) + acStack_28[iVar22 + 5];
        uVar45 = CONCAT13(cVar48,CONCAT12(cVar47,CONCAT11(cVar46,cVar44)));
        cVar49 = (char)uVar50 + acStack_28[iVar22 + 6];
        cVar51 = (char)((uint)uVar50 >> 8) + acStack_28[iVar22 + 7];
        cVar52 = (char)((uint)uVar50 >> 0x10) + acStack_28[iVar22 + 8];
        cVar53 = (char)((uint)uVar50 >> 0x18) + acStack_28[iVar22 + 9];
        uVar50 = CONCAT13(cVar53,CONCAT12(cVar52,CONCAT11(cVar51,cVar49)));
        cVar54 = (char)uVar55 + acStack_28[iVar22 + 10];
        cVar56 = (char)((uint)uVar55 >> 8) + acStack_28[iVar22 + 0xb];
        cVar57 = (char)((uint)uVar55 >> 0x10) + acStack_28[iVar22 + 0xc];
        cVar58 = (char)((uint)uVar55 >> 0x18) + acStack_28[iVar22 + 0xd];
        uVar55 = CONCAT13(cVar58,CONCAT12(cVar57,CONCAT11(cVar56,cVar54)));
        iVar1 = iVar22 + 0xe;
        iVar2 = iVar22 + 0xf;
        iVar3 = iVar22 + 0x10;
        iVar5 = iVar22 + 0x11;
        iVar6 = iVar22 + 0x12;
        iVar7 = iVar22 + 0x13;
        iVar8 = iVar22 + 0x14;
        iVar9 = iVar22 + 0x15;
        iVar10 = iVar22 + 0x16;
        iVar11 = iVar22 + 0x17;
        iVar12 = iVar22 + 0x18;
        iVar13 = iVar22 + 0x19;
        iVar14 = iVar22 + 0x1a;
        iVar15 = iVar22 + 0x1b;
        iVar16 = iVar22 + 0x1c;
        iVar17 = iVar22 + 0x1d;
        iVar22 = iVar22 + 0x20;
        cVar21 = cVar21 + acStack_28[iVar1];
        cVar24 = cVar24 + acStack_28[iVar2];
        cVar25 = cVar25 + acStack_28[iVar3];
        cVar26 = cVar26 + acStack_28[iVar5];
        cVar27 = cVar27 + acStack_28[iVar6];
        cVar28 = cVar28 + acStack_28[iVar7];
        cVar29 = cVar29 + acStack_28[iVar8];
        cVar30 = cVar30 + acStack_28[iVar9];
        cVar31 = cVar31 + acStack_28[iVar10];
        cVar32 = cVar32 + acStack_28[iVar11];
        cVar33 = cVar33 + acStack_28[iVar12];
        cVar34 = cVar34 + acStack_28[iVar13];
        cVar35 = cVar35 + acStack_28[iVar14];
        cVar36 = cVar36 + acStack_28[iVar15];
        cVar37 = cVar37 + acStack_28[iVar16];
        cVar38 = cVar38 + acStack_28[iVar17];
      } while (iVar22 < (int)(uVar4 & 0xffffffe0));
      cVar21 = cVar21 + cVar39 + cVar31 + cVar49 + cVar27 + cVar44 + cVar35 + cVar54 +
               cVar25 + cVar42 + cVar33 + cVar52 + cVar29 + cVar47 + cVar37 + cVar57 +
               cVar24 + cVar41 + cVar32 + cVar51 + cVar28 + cVar46 + cVar36 + cVar56 +
               cVar26 + cVar43 + cVar34 + cVar53 + cVar30 + cVar48 + cVar38 + cVar58;
    }
    cVar25 = '\0';
    cVar24 = '\0';
    if (iVar22 < (int)uVar4) {
      if (1 < (int)(uVar4 - iVar22)) {
        do {
          cVar25 = cVar25 + *(char *)((int)&local_2c + iVar22 + 2);
          cVar24 = cVar24 + *(char *)((int)&local_2c + iVar22 + 3);
          iVar22 = iVar22 + 2;
        } while (iVar22 < (int)(uVar4 - 1));
      }
      if (iVar22 < (int)uVar4) {
        cVar21 = cVar21 + *(char *)((int)&local_2c + iVar22 + 2);
      }
      cVar21 = cVar21 + cVar24 + cVar25;
    }
    if (cVar21 == *(char *)((int)&local_2c + uVar4 + 2)) {
      iVar22 = 0;
      if (uVar23 != 0) {
        do {
          iVar2 = iVar22 * 2;
          iVar3 = iVar22 * 2;
          iVar1 = iVar22 * 2;
          iVar22 = iVar22 + 1;
          *(ushort *)(param_2 + iVar1) =
               CONCAT11(*(undefined1 *)((int)&local_2c + iVar2 + 3),
                        *(undefined1 *)((int)&local_2c + iVar3 + 2));
        } while (iVar22 < (int)uVar23);
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

