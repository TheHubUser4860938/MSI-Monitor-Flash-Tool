// rea decompile_all
// name: FUN_1000a650
// address: 0x1000a650
// body: available
// range: 0x1000a650-0x1000a88a inclusive
// non_contiguous: false
// provider: Ghidra 12.1.2 (ghidra)
// analysis_profile: b075844f08879296d957518397cd0ddda73db81dce53d00d3f0e702766fc2af6
// limitations: The session serves operations only after Ghidra reports default auto-analysis complete; incomplete analysis does not expose partial results.; The imported Program and temporary project are ephemeral and deleted on close. Annotation operations edit session database metadata; original executable bytes are never written.; Cancelling an active Ghidra request terminates its ephemeral database and discards session annotations. The selected target remains open; the next provider query imports the original artifact again.; Default-space addresses use lowercase 0x-prefixed hexadecimal; other address spaces use <percent-encoded-space>:0x<hex>.; The Ghidra Program references PDB Comm.pdb (GUID c3062acb-498d-45fa-a233-c8b7e401bb13, age (hex) 1, signature unknown, version RSDS); Ghidra reports load state unknown. Original names and types may be missing; an empty name search does not prove a procedure is absent. Use list_procedures and address-based analysis to inspect recovered functions. REA does not admit a caller-selected PDB companion.; This session uses Ghidra 12.1.2. The bridge is verified against 12.1.4; other 12.1.x builds are accepted and the observed version is reported.; Pseudocode is Ghidra decompiler output, not original source and not text-equivalent to Hopper output.; External functions and functions without an analyzable body return null; other decompiler failures remain explicit.
// pseudocode: provider-specific; not original source


void FUN_1000a650(byte param_1,undefined1 *param_2)

{
  undefined1 *puVar1;
  undefined1 *puVar2;
  uint uVar3;
  uint uVar4;
  int iVar5;
  undefined1 in_CL;
  uint uVar6;
  undefined1 in_DL;
  uint uVar7;
  char cVar8;
  char cVar9;
  char cVar10;
  char cVar11;
  char cVar12;
  char cVar13;
  char cVar14;
  char cVar15;
  char cVar16;
  char cVar17;
  char cVar18;
  char cVar19;
  char cVar20;
  char cVar21;
  char cVar22;
  char cVar23;
  char cVar24;
  char cVar26;
  char cVar27;
  undefined4 uVar25;
  char cVar28;
  char cVar29;
  char cVar31;
  char cVar32;
  undefined4 uVar30;
  char cVar33;
  char cVar34;
  char cVar36;
  char cVar37;
  undefined4 uVar35;
  char cVar38;
  char cVar39;
  char cVar41;
  char cVar42;
  undefined4 uVar40;
  char cVar43;
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
  if (param_1 < 0xd) {
    local_2c = (uint)CONCAT12(param_1,CONCAT11(in_DL,in_CL));
    if (param_1 != 0) {
      uVar7 = (uint)(ushort)param_1;
      puVar2 = param_2;
      do {
        puVar1 = puVar2 + 2;
        puVar1[(int)&local_2c + (1 - (int)param_2)] = *puVar2;
        puVar1[(int)&local_2c + (2 - (int)param_2)] = puVar2[1];
        uVar7 = uVar7 - 1;
        puVar2 = puVar1;
      } while (uVar7 != 0);
    }
    cVar8 = '\0';
    uVar6 = 0;
    uVar7 = (uint)param_1 * 2 + 3;
    if (0x1f < uVar7) {
      uVar25 = 0;
      uVar30 = 0;
      uVar35 = 0;
      uVar40 = 0;
      cVar8 = '\0';
      cVar9 = '\0';
      cVar10 = '\0';
      cVar11 = '\0';
      cVar12 = '\0';
      cVar13 = '\0';
      cVar14 = '\0';
      cVar15 = '\0';
      cVar16 = '\0';
      cVar17 = '\0';
      cVar18 = '\0';
      cVar19 = '\0';
      cVar20 = '\0';
      cVar21 = '\0';
      cVar22 = '\0';
      cVar23 = '\0';
      uVar3 = 0;
      do {
        uVar4 = uVar6 + 0x10;
        uVar6 = uVar6 + 0x20;
        uVar4 = uVar4 & 0xffff;
        cVar24 = (char)uVar25 + *(char *)((int)&local_2c + uVar3);
        cVar26 = (char)((uint)uVar25 >> 8) + *(char *)((int)&local_2c + uVar3 + 1);
        cVar27 = (char)((uint)uVar25 >> 0x10) + *(char *)((int)&local_2c + uVar3 + 2);
        cVar28 = (char)((uint)uVar25 >> 0x18) + *(char *)((int)&local_2c + uVar3 + 3);
        uVar25 = CONCAT13(cVar28,CONCAT12(cVar27,CONCAT11(cVar26,cVar24)));
        cVar29 = (char)uVar30 + acStack_28[uVar3];
        cVar31 = (char)((uint)uVar30 >> 8) + acStack_28[uVar3 + 1];
        cVar32 = (char)((uint)uVar30 >> 0x10) + acStack_28[uVar3 + 2];
        cVar33 = (char)((uint)uVar30 >> 0x18) + acStack_28[uVar3 + 3];
        uVar30 = CONCAT13(cVar33,CONCAT12(cVar32,CONCAT11(cVar31,cVar29)));
        cVar34 = (char)uVar35 + acStack_28[uVar3 + 4];
        cVar36 = (char)((uint)uVar35 >> 8) + acStack_28[uVar3 + 5];
        cVar37 = (char)((uint)uVar35 >> 0x10) + acStack_28[uVar3 + 6];
        cVar38 = (char)((uint)uVar35 >> 0x18) + acStack_28[uVar3 + 7];
        uVar35 = CONCAT13(cVar38,CONCAT12(cVar37,CONCAT11(cVar36,cVar34)));
        cVar39 = (char)uVar40 + acStack_28[uVar3 + 8];
        cVar41 = (char)((uint)uVar40 >> 8) + acStack_28[uVar3 + 9];
        cVar42 = (char)((uint)uVar40 >> 0x10) + acStack_28[uVar3 + 10];
        cVar43 = (char)((uint)uVar40 >> 0x18) + acStack_28[uVar3 + 0xb];
        uVar40 = CONCAT13(cVar43,CONCAT12(cVar42,CONCAT11(cVar41,cVar39)));
        uVar3 = uVar6 & 0xffff;
        cVar8 = cVar8 + *(char *)((int)&local_2c + uVar4);
        cVar9 = cVar9 + *(char *)((int)&local_2c + uVar4 + 1);
        cVar10 = cVar10 + *(char *)((int)&local_2c + uVar4 + 2);
        cVar11 = cVar11 + *(char *)((int)&local_2c + uVar4 + 3);
        cVar12 = cVar12 + acStack_28[uVar4];
        cVar13 = cVar13 + acStack_28[uVar4 + 1];
        cVar14 = cVar14 + acStack_28[uVar4 + 2];
        cVar15 = cVar15 + acStack_28[uVar4 + 3];
        cVar16 = cVar16 + acStack_28[uVar4 + 4];
        cVar17 = cVar17 + acStack_28[uVar4 + 5];
        cVar18 = cVar18 + acStack_28[uVar4 + 6];
        cVar19 = cVar19 + acStack_28[uVar4 + 7];
        cVar20 = cVar20 + acStack_28[uVar4 + 8];
        cVar21 = cVar21 + acStack_28[uVar4 + 9];
        cVar22 = cVar22 + acStack_28[uVar4 + 10];
        cVar23 = cVar23 + acStack_28[uVar4 + 0xb];
      } while (uVar3 < (uVar7 & 0xffffffe0));
      cVar8 = cVar8 + cVar24 + cVar16 + cVar34 + cVar12 + cVar29 + cVar20 + cVar39 +
              cVar10 + cVar27 + cVar18 + cVar37 + cVar14 + cVar32 + cVar22 + cVar42 +
              cVar9 + cVar26 + cVar17 + cVar36 + cVar13 + cVar31 + cVar21 + cVar41 +
              cVar11 + cVar28 + cVar19 + cVar38 + cVar15 + cVar33 + cVar23 + cVar43;
    }
    for (; (uVar6 & 0xffff) < uVar7; uVar6 = uVar6 + 1) {
      cVar8 = cVar8 + *(char *)((int)&local_2c + (uVar6 & 0xffff));
    }
    *(char *)((int)&local_2c + (uint)param_1 * 2 + 3) = cVar8;
    iVar5 = (uint)param_1 * 2 + 4;
    if (DAT_101def00 != (code *)0x0) {
      if (DAT_101def2c == 1) {
        iVar5 = FUN_10003c80(0x9c,iVar5,&local_2c);
      }
      else {
        iVar5 = (*DAT_101def00)(DAT_101d49aa,0x9c,iVar5,&local_2c);
      }
      if (iVar5 != 0) {
        if (iVar5 == 0xe5) {
          __security_check_cookie(local_8 ^ (uint)&stack0xfffffffc);
          return;
        }
        if (iVar5 == 0xe6) {
          __security_check_cookie(local_8 ^ (uint)&stack0xfffffffc);
          return;
        }
      }
    }
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
    if (DAT_101deefc != (code *)0x0) {
      if (DAT_101def2c == 1) {
        FUN_10003990(8,2,&local_2c);
      }
      else {
        (*DAT_101deefc)(DAT_101d49aa,8,2,&local_2c);
      }
    }
    if ((char)local_2c != -100) {
      __security_check_cookie(local_8 ^ (uint)&stack0xfffffffc);
      return;
    }
    if (local_2c._1_1_ != -0x1f) {
      __security_check_cookie(local_8 ^ (uint)&stack0xfffffffc,0x15);
      return;
    }
  }
  __security_check_cookie(local_8 ^ (uint)&stack0xfffffffc);
  return;
}

