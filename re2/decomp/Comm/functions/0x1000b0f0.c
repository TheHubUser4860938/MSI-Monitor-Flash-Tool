// rea decompile_all
// name: FUN_1000b0f0
// address: 0x1000b0f0
// body: available
// range: 0x1000b0f0-0x1000b3f0 inclusive
// non_contiguous: false
// provider: Ghidra 12.1.2 (ghidra)
// analysis_profile: b075844f08879296d957518397cd0ddda73db81dce53d00d3f0e702766fc2af6
// limitations: The session serves operations only after Ghidra reports default auto-analysis complete; incomplete analysis does not expose partial results.; The imported Program and temporary project are ephemeral and deleted on close. Annotation operations edit session database metadata; original executable bytes are never written.; Cancelling an active Ghidra request terminates its ephemeral database and discards session annotations. The selected target remains open; the next provider query imports the original artifact again.; Default-space addresses use lowercase 0x-prefixed hexadecimal; other address spaces use <percent-encoded-space>:0x<hex>.; The Ghidra Program references PDB Comm.pdb (GUID c3062acb-498d-45fa-a233-c8b7e401bb13, age (hex) 1, signature unknown, version RSDS); Ghidra reports load state unknown. Original names and types may be missing; an empty name search does not prove a procedure is absent. Use list_procedures and address-based analysis to inspect recovered functions. REA does not admit a caller-selected PDB companion.; This session uses Ghidra 12.1.2. The bridge is verified against 12.1.4; other 12.1.x builds are accepted and the observed version is reported.; Pseudocode is Ghidra decompiler output, not original source and not text-equivalent to Hopper output.; External functions and functions without an analyzable body return null; other decompiler failures remain explicit.
// pseudocode: provider-specific; not original source


void FUN_1000b0f0(byte param_1,int param_2)

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
  ushort uVar18;
  char *pcVar19;
  char cVar20;
  undefined2 in_CX;
  undefined4 in_EDX;
  int iVar21;
  uint uVar22;
  undefined1 in_XMM1_Ba;
  undefined1 in_XMM1_Bb;
  char cVar23;
  undefined1 in_XMM1_Bc;
  char cVar24;
  undefined1 in_XMM1_Bd;
  char cVar25;
  undefined1 in_XMM1_Be;
  char cVar26;
  undefined1 in_XMM1_Bf;
  char cVar27;
  undefined1 in_XMM1_Bg;
  char cVar28;
  undefined1 in_XMM1_Bh;
  char cVar29;
  undefined1 in_XMM1_Bi;
  char cVar30;
  undefined1 in_XMM1_Bj;
  char cVar31;
  undefined1 in_XMM1_Bk;
  char cVar32;
  undefined1 in_XMM1_Bl;
  char cVar33;
  undefined1 in_XMM1_Bm;
  char cVar34;
  undefined1 in_XMM1_Bn;
  char cVar35;
  undefined1 in_XMM1_Bo;
  char cVar36;
  undefined1 in_XMM1_Bp;
  char cVar37;
  char cVar38;
  char cVar40;
  char cVar41;
  char cVar42;
  char cVar43;
  char cVar45;
  char cVar46;
  char cVar47;
  char cVar48;
  char cVar50;
  char cVar51;
  char cVar52;
  char cVar53;
  char cVar55;
  char cVar56;
  char cVar57;
  undefined4 local_2c;
  undefined4 uStack_28;
  char acStack_24 [28];
  uint local_8;
  uint uVar39;
  uint uVar44;
  uint uVar49;
  uint uVar54;
  
  local_8 = DAT_101d3fec ^ (uint)&stack0xfffffffc;
  acStack_24[0x18] = '\0';
  acStack_24[0x19] = '\0';
  local_2c = 0;
  uStack_28 = 0;
  acStack_24[0] = '\0';
  acStack_24[1] = '\0';
  acStack_24[2] = '\0';
  acStack_24[3] = '\0';
  acStack_24[4] = '\0';
  acStack_24[5] = '\0';
  acStack_24[6] = '\0';
  acStack_24[7] = '\0';
  acStack_24[8] = '\0';
  acStack_24[9] = '\0';
  acStack_24[10] = '\0';
  acStack_24[0xb] = '\0';
  acStack_24[0xc] = '\0';
  acStack_24[0xd] = '\0';
  acStack_24[0xe] = '\0';
  acStack_24[0xf] = '\0';
  acStack_24[0x10] = '\0';
  acStack_24[0x11] = '\0';
  acStack_24[0x12] = '\0';
  acStack_24[0x13] = '\0';
  acStack_24[0x14] = '\0';
  acStack_24[0x15] = '\0';
  acStack_24[0x16] = '\0';
  acStack_24[0x17] = '\0';
  if (0xc < param_1) {
    __security_check_cookie(DAT_101d3fec ^ (uint)&stack0xfffffffc ^ (uint)&stack0xfffffffc);
    return;
  }
  pcVar19 = (char *)&local_2c;
  cVar20 = '\0';
  local_2c = CONCAT13((char)((uint)in_EDX >> 8),CONCAT12((char)in_EDX,in_CX));
  iVar21 = 5;
  uStack_28 = (uint)param_1;
  do {
    cVar20 = cVar20 + *pcVar19;
    pcVar19 = pcVar19 + 1;
    iVar21 = iVar21 + -1;
  } while (iVar21 != 0);
  uStack_28 = (uint)CONCAT11(cVar20,param_1);
  if (DAT_101def00 != (code *)0x0) {
    if (DAT_101def2c == 1) {
      iVar21 = FUN_10003c80(0x99,6,&local_2c);
    }
    else {
      iVar21 = (*DAT_101def00)(DAT_101d49aa,0x99,6,&local_2c);
    }
    if (iVar21 != 0) {
      if (iVar21 == 0xe5) {
        __security_check_cookie(local_8 ^ (uint)&stack0xfffffffc);
        return;
      }
      if (iVar21 == 0xe6) {
        __security_check_cookie(local_8 ^ (uint)&stack0xfffffffc);
        return;
      }
    }
  }
  acStack_24[0x18] = '\0';
  acStack_24[0x19] = '\0';
  uVar18 = (ushort)param_1 * 2 + 3;
  local_2c = 0;
  uStack_28 = 0;
  acStack_24[0] = '\0';
  acStack_24[1] = '\0';
  acStack_24[2] = '\0';
  acStack_24[3] = '\0';
  acStack_24[4] = '\0';
  acStack_24[5] = '\0';
  acStack_24[6] = '\0';
  acStack_24[7] = '\0';
  acStack_24[8] = '\0';
  acStack_24[9] = '\0';
  acStack_24[10] = '\0';
  acStack_24[0xb] = '\0';
  acStack_24[0xc] = '\0';
  acStack_24[0xd] = '\0';
  acStack_24[0xe] = '\0';
  acStack_24[0xf] = '\0';
  acStack_24[0x10] = '\0';
  acStack_24[0x11] = '\0';
  acStack_24[0x12] = '\0';
  acStack_24[0x13] = '\0';
  acStack_24[0x14] = '\0';
  acStack_24[0x15] = '\0';
  acStack_24[0x16] = '\0';
  acStack_24[0x17] = '\0';
  if (DAT_101deefc != (code *)0x0) {
    if (DAT_101def2c == 1) {
      if (uVar18 < 0x19) {
        iVar21 = FUN_10003990(8,uVar18,&local_2c);
      }
      else {
        iVar21 = 0x10;
      }
    }
    else {
      iVar21 = (*DAT_101deefc)(DAT_101d49aa,8,uVar18,&local_2c);
    }
    if (iVar21 != 0) {
      if (iVar21 == 0xe5) {
        __security_check_cookie(local_8 ^ (uint)&stack0xfffffffc);
        return;
      }
      if (iVar21 == 0xe6) {
        __security_check_cookie(local_8 ^ (uint)&stack0xfffffffc);
        return;
      }
    }
  }
  if ((char)local_2c != -0x67) {
    __security_check_cookie(local_8 ^ (uint)&stack0xfffffffc);
    return;
  }
  if (param_1 == local_2c._1_1_) {
    uVar22 = (uint)param_1;
    cVar20 = '\0';
    iVar21 = 0;
    uVar4 = uVar22 * 2;
    if ((uVar22 != 0) && (0x1f < uVar4)) {
      uVar39 = CONCAT13(in_XMM1_Bd,CONCAT12(in_XMM1_Bc,CONCAT11(in_XMM1_Bb,in_XMM1_Ba))) ^
               CONCAT13(in_XMM1_Bd,CONCAT12(in_XMM1_Bc,CONCAT11(in_XMM1_Bb,in_XMM1_Ba)));
      cVar20 = (char)uVar39;
      cVar23 = (char)(uVar39 >> 8);
      cVar24 = (char)(uVar39 >> 0x10);
      cVar25 = (char)(uVar39 >> 0x18);
      uVar44 = CONCAT13(in_XMM1_Bh,CONCAT12(in_XMM1_Bg,CONCAT11(in_XMM1_Bf,in_XMM1_Be))) ^
               CONCAT13(in_XMM1_Bh,CONCAT12(in_XMM1_Bg,CONCAT11(in_XMM1_Bf,in_XMM1_Be)));
      cVar26 = (char)uVar44;
      cVar27 = (char)(uVar44 >> 8);
      cVar28 = (char)(uVar44 >> 0x10);
      cVar29 = (char)(uVar44 >> 0x18);
      uVar49 = CONCAT13(in_XMM1_Bl,CONCAT12(in_XMM1_Bk,CONCAT11(in_XMM1_Bj,in_XMM1_Bi))) ^
               CONCAT13(in_XMM1_Bl,CONCAT12(in_XMM1_Bk,CONCAT11(in_XMM1_Bj,in_XMM1_Bi)));
      cVar30 = (char)uVar49;
      cVar31 = (char)(uVar49 >> 8);
      cVar32 = (char)(uVar49 >> 0x10);
      cVar33 = (char)(uVar49 >> 0x18);
      uVar54 = CONCAT13(in_XMM1_Bp,CONCAT12(in_XMM1_Bo,CONCAT11(in_XMM1_Bn,in_XMM1_Bm))) ^
               CONCAT13(in_XMM1_Bp,CONCAT12(in_XMM1_Bo,CONCAT11(in_XMM1_Bn,in_XMM1_Bm)));
      cVar34 = (char)uVar54;
      cVar35 = (char)(uVar54 >> 8);
      cVar36 = (char)(uVar54 >> 0x10);
      cVar37 = (char)(uVar54 >> 0x18);
      do {
        cVar20 = cVar20 + *(char *)((int)&local_2c + iVar21 + 2);
        cVar23 = cVar23 + *(char *)((int)&local_2c + iVar21 + 3);
        cVar24 = cVar24 + *(char *)((int)&uStack_28 + iVar21);
        cVar25 = cVar25 + *(char *)((int)&uStack_28 + iVar21 + 1);
        cVar26 = cVar26 + *(char *)((int)&uStack_28 + iVar21 + 2);
        cVar27 = cVar27 + *(char *)((int)&uStack_28 + iVar21 + 3);
        cVar28 = cVar28 + acStack_24[iVar21];
        cVar29 = cVar29 + acStack_24[iVar21 + 1];
        cVar30 = cVar30 + acStack_24[iVar21 + 2];
        cVar31 = cVar31 + acStack_24[iVar21 + 3];
        cVar32 = cVar32 + acStack_24[iVar21 + 4];
        cVar33 = cVar33 + acStack_24[iVar21 + 5];
        cVar34 = cVar34 + acStack_24[iVar21 + 6];
        cVar35 = cVar35 + acStack_24[iVar21 + 7];
        cVar36 = cVar36 + acStack_24[iVar21 + 8];
        cVar37 = cVar37 + acStack_24[iVar21 + 9];
        iVar1 = iVar21 + 10;
        iVar2 = iVar21 + 0xb;
        iVar3 = iVar21 + 0xc;
        iVar5 = iVar21 + 0xd;
        iVar6 = iVar21 + 0xe;
        iVar7 = iVar21 + 0xf;
        iVar8 = iVar21 + 0x10;
        iVar9 = iVar21 + 0x11;
        iVar10 = iVar21 + 0x12;
        iVar11 = iVar21 + 0x13;
        iVar12 = iVar21 + 0x14;
        iVar13 = iVar21 + 0x15;
        iVar14 = iVar21 + 0x16;
        iVar15 = iVar21 + 0x17;
        iVar16 = iVar21 + 0x18;
        iVar17 = iVar21 + 0x19;
        iVar21 = iVar21 + 0x20;
        cVar38 = (char)uVar39 + acStack_24[iVar1];
        cVar40 = (char)(uVar39 >> 8) + acStack_24[iVar2];
        cVar41 = (char)(uVar39 >> 0x10) + acStack_24[iVar3];
        cVar42 = (char)(uVar39 >> 0x18) + acStack_24[iVar5];
        uVar39 = CONCAT13(cVar42,CONCAT12(cVar41,CONCAT11(cVar40,cVar38)));
        cVar43 = (char)uVar44 + acStack_24[iVar6];
        cVar45 = (char)(uVar44 >> 8) + acStack_24[iVar7];
        cVar46 = (char)(uVar44 >> 0x10) + acStack_24[iVar8];
        cVar47 = (char)(uVar44 >> 0x18) + acStack_24[iVar9];
        uVar44 = CONCAT13(cVar47,CONCAT12(cVar46,CONCAT11(cVar45,cVar43)));
        cVar48 = (char)uVar49 + acStack_24[iVar10];
        cVar50 = (char)(uVar49 >> 8) + acStack_24[iVar11];
        cVar51 = (char)(uVar49 >> 0x10) + acStack_24[iVar12];
        cVar52 = (char)(uVar49 >> 0x18) + acStack_24[iVar13];
        uVar49 = CONCAT13(cVar52,CONCAT12(cVar51,CONCAT11(cVar50,cVar48)));
        cVar53 = (char)uVar54 + acStack_24[iVar14];
        cVar55 = (char)(uVar54 >> 8) + acStack_24[iVar15];
        cVar56 = (char)(uVar54 >> 0x10) + acStack_24[iVar16];
        cVar57 = (char)(uVar54 >> 0x18) + acStack_24[iVar17];
        uVar54 = CONCAT13(cVar57,CONCAT12(cVar56,CONCAT11(cVar55,cVar53)));
      } while (iVar21 < (int)(uVar4 & 0xffffffe0));
      cVar20 = cVar20 + cVar38 + cVar30 + cVar48 + cVar26 + cVar43 + cVar34 + cVar53 +
               cVar24 + cVar41 + cVar32 + cVar51 + cVar28 + cVar46 + cVar36 + cVar56 +
               cVar23 + cVar40 + cVar31 + cVar50 + cVar27 + cVar45 + cVar35 + cVar55 +
               cVar25 + cVar42 + cVar33 + cVar52 + cVar29 + cVar47 + cVar37 + cVar57;
    }
    cVar24 = '\0';
    cVar23 = '\0';
    if (iVar21 < (int)uVar4) {
      if (1 < (int)(uVar4 - iVar21)) {
        do {
          cVar24 = cVar24 + *(char *)((int)&local_2c + iVar21 + 2);
          cVar23 = cVar23 + *(char *)((int)&local_2c + iVar21 + 3);
          iVar21 = iVar21 + 2;
        } while (iVar21 < (int)(uVar4 - 1));
      }
      if (iVar21 < (int)uVar4) {
        cVar20 = cVar20 + *(char *)((int)&local_2c + iVar21 + 2);
      }
      cVar20 = cVar20 + cVar23 + cVar24;
    }
    if (cVar20 == *(char *)((int)&local_2c + uVar4 + 2)) {
      iVar21 = 0;
      if (uVar22 != 0) {
        do {
          iVar2 = iVar21 * 2;
          iVar3 = iVar21 * 2;
          iVar1 = iVar21 * 2;
          iVar21 = iVar21 + 1;
          *(ushort *)(param_2 + iVar1) =
               CONCAT11(*(undefined1 *)((int)&local_2c + iVar2 + 3),
                        *(undefined1 *)((int)&local_2c + iVar3 + 2));
        } while (iVar21 < (int)uVar22);
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

