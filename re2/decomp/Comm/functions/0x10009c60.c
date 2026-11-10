// rea decompile_all
// name: FUN_10009c60
// address: 0x10009c60
// body: available
// range: 0x10009c60-0x10009ed9 inclusive
// non_contiguous: false
// provider: Ghidra 12.1.2 (ghidra)
// analysis_profile: b075844f08879296d957518397cd0ddda73db81dce53d00d3f0e702766fc2af6
// limitations: The session serves operations only after Ghidra reports default auto-analysis complete; incomplete analysis does not expose partial results.; The imported Program and temporary project are ephemeral and deleted on close. Annotation operations edit session database metadata; original executable bytes are never written.; Cancelling an active Ghidra request terminates its ephemeral database and discards session annotations. The selected target remains open; the next provider query imports the original artifact again.; Default-space addresses use lowercase 0x-prefixed hexadecimal; other address spaces use <percent-encoded-space>:0x<hex>.; The Ghidra Program references PDB Comm.pdb (GUID c3062acb-498d-45fa-a233-c8b7e401bb13, age (hex) 1, signature unknown, version RSDS); Ghidra reports load state unknown. Original names and types may be missing; an empty name search does not prove a procedure is absent. Use list_procedures and address-based analysis to inspect recovered functions. REA does not admit a caller-selected PDB companion.; This session uses Ghidra 12.1.2. The bridge is verified against 12.1.4; other 12.1.x builds are accepted and the observed version is reported.; Pseudocode is Ghidra decompiler output, not original source and not text-equivalent to Hopper output.; External functions and functions without an analyzable body return null; other decompiler failures remain explicit.
// pseudocode: provider-specific; not original source


void FUN_10009c60(int param_1,int param_2,int param_3)

{
  undefined1 *puVar1;
  undefined1 *puVar2;
  uint uVar3;
  uint uVar4;
  undefined4 in_ECX;
  uint uVar5;
  ushort in_DX;
  uint uVar6;
  undefined4 uVar7;
  uint uVar8;
  byte bVar9;
  undefined1 in_XMM1_Ba;
  char cVar10;
  undefined1 in_XMM1_Bb;
  char cVar11;
  undefined1 in_XMM1_Bc;
  char cVar12;
  undefined1 in_XMM1_Bd;
  char cVar13;
  undefined1 in_XMM1_Be;
  char cVar14;
  undefined1 in_XMM1_Bf;
  char cVar15;
  undefined1 in_XMM1_Bg;
  char cVar16;
  undefined1 in_XMM1_Bh;
  char cVar17;
  undefined1 in_XMM1_Bi;
  char cVar18;
  undefined1 in_XMM1_Bj;
  char cVar19;
  undefined1 in_XMM1_Bk;
  char cVar20;
  undefined1 in_XMM1_Bl;
  char cVar21;
  undefined1 in_XMM1_Bm;
  char cVar22;
  undefined1 in_XMM1_Bn;
  char cVar23;
  undefined1 in_XMM1_Bo;
  char cVar24;
  undefined1 in_XMM1_Bp;
  char cVar25;
  char cVar26;
  char cVar28;
  char cVar29;
  char cVar30;
  char cVar31;
  char cVar33;
  char cVar34;
  char cVar35;
  char cVar36;
  char cVar38;
  char cVar39;
  char cVar40;
  char cVar41;
  char cVar43;
  char cVar44;
  char cVar45;
  undefined8 uVar46;
  undefined4 local_2c;
  undefined4 uStack_28;
  char acStack_24 [24];
  undefined2 local_c;
  uint local_8;
  uint uVar27;
  uint uVar32;
  uint uVar37;
  uint uVar42;
  
  local_8 = DAT_101d3fec ^ (uint)&stack0xfffffffc;
  uVar8 = (uint)in_DX;
  local_c = 0;
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
  if (uVar8 < 7) {
    bVar9 = param_3 == 1;
    if (param_1 == 0) {
      bVar9 = bVar9 | 2;
    }
    local_2c = CONCAT13((char)in_ECX,
                        CONCAT12((char)((uint)in_ECX >> 8),
                                 (short)CONCAT21((short)((uint)in_ECX >> 0x10),
                                                 (char)((uint)in_ECX >> 0x18))));
    uStack_28 = (uint)CONCAT11(bVar9,(char)in_DX);
    if (in_DX != 0) {
      uVar6 = (uint)in_DX;
      puVar2 = (undefined1 *)(param_2 + 2);
      do {
        puVar1 = puVar2 + 4;
        puVar1[(int)&local_2c - param_2] = puVar2[1];
        puVar1[(int)&local_2c + (1 - param_2)] = *puVar2;
        puVar1[(int)&local_2c + (2 - param_2)] = puVar2[-1];
        puVar1[(int)&local_2c + (3 - param_2)] = puVar2[-2];
        uVar6 = uVar6 - 1;
        puVar2 = puVar1;
      } while (uVar6 != 0);
    }
    cVar10 = '\0';
    uVar5 = 0;
    uVar6 = uVar8 * 4 + 6;
    if (0x1f < uVar6) {
      uVar27 = CONCAT13(in_XMM1_Bd,CONCAT12(in_XMM1_Bc,CONCAT11(in_XMM1_Bb,in_XMM1_Ba))) ^
               CONCAT13(in_XMM1_Bd,CONCAT12(in_XMM1_Bc,CONCAT11(in_XMM1_Bb,in_XMM1_Ba)));
      cVar10 = (char)uVar27;
      cVar11 = (char)(uVar27 >> 8);
      cVar12 = (char)(uVar27 >> 0x10);
      cVar13 = (char)(uVar27 >> 0x18);
      uVar32 = CONCAT13(in_XMM1_Bh,CONCAT12(in_XMM1_Bg,CONCAT11(in_XMM1_Bf,in_XMM1_Be))) ^
               CONCAT13(in_XMM1_Bh,CONCAT12(in_XMM1_Bg,CONCAT11(in_XMM1_Bf,in_XMM1_Be)));
      cVar14 = (char)uVar32;
      cVar15 = (char)(uVar32 >> 8);
      cVar16 = (char)(uVar32 >> 0x10);
      cVar17 = (char)(uVar32 >> 0x18);
      uVar37 = CONCAT13(in_XMM1_Bl,CONCAT12(in_XMM1_Bk,CONCAT11(in_XMM1_Bj,in_XMM1_Bi))) ^
               CONCAT13(in_XMM1_Bl,CONCAT12(in_XMM1_Bk,CONCAT11(in_XMM1_Bj,in_XMM1_Bi)));
      cVar18 = (char)uVar37;
      cVar19 = (char)(uVar37 >> 8);
      cVar20 = (char)(uVar37 >> 0x10);
      cVar21 = (char)(uVar37 >> 0x18);
      uVar42 = CONCAT13(in_XMM1_Bp,CONCAT12(in_XMM1_Bo,CONCAT11(in_XMM1_Bn,in_XMM1_Bm))) ^
               CONCAT13(in_XMM1_Bp,CONCAT12(in_XMM1_Bo,CONCAT11(in_XMM1_Bn,in_XMM1_Bm)));
      cVar22 = (char)uVar42;
      cVar23 = (char)(uVar42 >> 8);
      cVar24 = (char)(uVar42 >> 0x10);
      cVar25 = (char)(uVar42 >> 0x18);
      uVar3 = 0;
      do {
        uVar4 = uVar5 + 0x10;
        uVar5 = uVar5 + 0x20;
        uVar4 = uVar4 & 0xffff;
        cVar10 = cVar10 + *(char *)((int)&local_2c + uVar3);
        cVar11 = cVar11 + *(char *)((int)&local_2c + uVar3 + 1);
        cVar12 = cVar12 + *(char *)((int)&local_2c + uVar3 + 2);
        cVar13 = cVar13 + *(char *)((int)&local_2c + uVar3 + 3);
        cVar14 = cVar14 + *(char *)((int)&uStack_28 + uVar3);
        cVar15 = cVar15 + *(char *)((int)&uStack_28 + uVar3 + 1);
        cVar16 = cVar16 + *(char *)((int)&uStack_28 + uVar3 + 2);
        cVar17 = cVar17 + *(char *)((int)&uStack_28 + uVar3 + 3);
        cVar18 = cVar18 + acStack_24[uVar3];
        cVar19 = cVar19 + acStack_24[uVar3 + 1];
        cVar20 = cVar20 + acStack_24[uVar3 + 2];
        cVar21 = cVar21 + acStack_24[uVar3 + 3];
        cVar22 = cVar22 + acStack_24[uVar3 + 4];
        cVar23 = cVar23 + acStack_24[uVar3 + 5];
        cVar24 = cVar24 + acStack_24[uVar3 + 6];
        cVar25 = cVar25 + acStack_24[uVar3 + 7];
        uVar3 = uVar5 & 0xffff;
        cVar26 = (char)uVar27 + *(char *)((int)&local_2c + uVar4);
        cVar28 = (char)(uVar27 >> 8) + *(char *)((int)&local_2c + uVar4 + 1);
        cVar29 = (char)(uVar27 >> 0x10) + *(char *)((int)&local_2c + uVar4 + 2);
        cVar30 = (char)(uVar27 >> 0x18) + *(char *)((int)&local_2c + uVar4 + 3);
        uVar27 = CONCAT13(cVar30,CONCAT12(cVar29,CONCAT11(cVar28,cVar26)));
        cVar31 = (char)uVar32 + *(char *)((int)&uStack_28 + uVar4);
        cVar33 = (char)(uVar32 >> 8) + *(char *)((int)&uStack_28 + uVar4 + 1);
        cVar34 = (char)(uVar32 >> 0x10) + *(char *)((int)&uStack_28 + uVar4 + 2);
        cVar35 = (char)(uVar32 >> 0x18) + *(char *)((int)&uStack_28 + uVar4 + 3);
        uVar32 = CONCAT13(cVar35,CONCAT12(cVar34,CONCAT11(cVar33,cVar31)));
        cVar36 = (char)uVar37 + acStack_24[uVar4];
        cVar38 = (char)(uVar37 >> 8) + acStack_24[uVar4 + 1];
        cVar39 = (char)(uVar37 >> 0x10) + acStack_24[uVar4 + 2];
        cVar40 = (char)(uVar37 >> 0x18) + acStack_24[uVar4 + 3];
        uVar37 = CONCAT13(cVar40,CONCAT12(cVar39,CONCAT11(cVar38,cVar36)));
        cVar41 = (char)uVar42 + acStack_24[uVar4 + 4];
        cVar43 = (char)(uVar42 >> 8) + acStack_24[uVar4 + 5];
        cVar44 = (char)(uVar42 >> 0x10) + acStack_24[uVar4 + 6];
        cVar45 = (char)(uVar42 >> 0x18) + acStack_24[uVar4 + 7];
        uVar42 = CONCAT13(cVar45,CONCAT12(cVar44,CONCAT11(cVar43,cVar41)));
      } while (uVar3 < (uVar6 & 0xffffffe0));
      cVar10 = cVar10 + cVar26 + cVar18 + cVar36 + cVar14 + cVar31 + cVar22 + cVar41 +
               cVar12 + cVar29 + cVar20 + cVar39 + cVar16 + cVar34 + cVar24 + cVar44 +
               cVar11 + cVar28 + cVar19 + cVar38 + cVar15 + cVar33 + cVar23 + cVar43 +
               cVar13 + cVar30 + cVar21 + cVar40 + cVar17 + cVar35 + cVar25 + cVar45;
    }
    for (; (uVar5 & 0xffff) < uVar6; uVar5 = uVar5 + 1) {
      cVar10 = cVar10 + *(char *)((int)&local_2c + (uVar5 & 0xffff));
    }
    *(char *)((int)&uStack_28 + uVar8 * 4 + 2) = cVar10;
    uVar8 = uVar8 * 4 + 7 & 0xffff;
    if (DAT_101def00 == (code *)0x0) {
      __security_check_cookie(local_8 ^ (uint)&stack0xfffffffc);
      return;
    }
    if (DAT_101def2c == 1) {
      uVar46 = FUN_10003c80(0xac,uVar8,&local_2c);
    }
    else {
      uVar46 = (*DAT_101def00)(DAT_101d49aa,0xac,uVar8,&local_2c);
    }
    uVar7 = (undefined4)((ulonglong)uVar46 >> 0x20);
    if ((int)uVar46 == 0) {
      local_c = 0;
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
          FUN_10003990(8,2,&local_2c);
        }
        else {
          (*DAT_101deefc)(DAT_101d49aa,8,2,&local_2c);
        }
      }
      if ((char)local_2c != -0x54) {
        __security_check_cookie(local_8 ^ (uint)&stack0xfffffffc);
        return;
      }
      if (local_2c._1_1_ == -0x1f) goto LAB_10009c90;
      uVar7 = 0x15;
    }
    __security_check_cookie(local_8 ^ (uint)&stack0xfffffffc,uVar7);
    return;
  }
LAB_10009c90:
  __security_check_cookie(local_8 ^ (uint)&stack0xfffffffc);
  return;
}

