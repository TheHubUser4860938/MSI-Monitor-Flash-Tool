// rea decompile_all
// name: FUN_1000ad00
// address: 0x1000ad00
// body: available
// range: 0x1000ad00-0x1000af16 inclusive
// non_contiguous: false
// provider: Ghidra 12.1.2 (ghidra)
// analysis_profile: b075844f08879296d957518397cd0ddda73db81dce53d00d3f0e702766fc2af6
// limitations: The session serves operations only after Ghidra reports default auto-analysis complete; incomplete analysis does not expose partial results.; The imported Program and temporary project are ephemeral and deleted on close. Annotation operations edit session database metadata; original executable bytes are never written.; Cancelling an active Ghidra request terminates its ephemeral database and discards session annotations. The selected target remains open; the next provider query imports the original artifact again.; Default-space addresses use lowercase 0x-prefixed hexadecimal; other address spaces use <percent-encoded-space>:0x<hex>.; The Ghidra Program references PDB Comm.pdb (GUID c3062acb-498d-45fa-a233-c8b7e401bb13, age (hex) 1, signature unknown, version RSDS); Ghidra reports load state unknown. Original names and types may be missing; an empty name search does not prove a procedure is absent. Use list_procedures and address-based analysis to inspect recovered functions. REA does not admit a caller-selected PDB companion.; This session uses Ghidra 12.1.2. The bridge is verified against 12.1.4; other 12.1.x builds are accepted and the observed version is reported.; Pseudocode is Ghidra decompiler output, not original source and not text-equivalent to Hopper output.; External functions and functions without an analyzable body return null; other decompiler failures remain explicit.
// pseudocode: provider-specific; not original source


void FUN_1000ad00(byte param_1,undefined4 param_2)

{
  uint uVar1;
  uint uVar2;
  int iVar3;
  undefined1 in_CL;
  uint uVar4;
  uint uVar5;
  undefined1 in_DL;
  char cVar6;
  char cVar7;
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
  char cVar24;
  char cVar25;
  undefined4 uVar23;
  char cVar26;
  char cVar27;
  char cVar29;
  char cVar30;
  undefined4 uVar28;
  char cVar31;
  char cVar32;
  char cVar34;
  char cVar35;
  undefined4 uVar33;
  char cVar36;
  char cVar37;
  char cVar39;
  char cVar40;
  undefined4 uVar38;
  char cVar41;
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
      FUN_1014c320((int)&local_2c + 3,param_2,(uint)param_1);
    }
    cVar6 = '\0';
    uVar2 = 0;
    uVar1 = param_1 + 3;
    if ((uVar1 != 0) && (0x1f < uVar1)) {
      uVar23 = 0;
      uVar28 = 0;
      uVar33 = 0;
      uVar38 = 0;
      cVar6 = '\0';
      cVar7 = '\0';
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
      uVar4 = 0;
      do {
        uVar5 = uVar2 + 0x10;
        uVar2 = uVar2 + 0x20;
        uVar5 = uVar5 & 0xffff;
        cVar22 = (char)uVar23 + *(char *)((int)&local_2c + uVar4);
        cVar24 = (char)((uint)uVar23 >> 8) + *(char *)((int)&local_2c + uVar4 + 1);
        cVar25 = (char)((uint)uVar23 >> 0x10) + *(char *)((int)&local_2c + uVar4 + 2);
        cVar26 = (char)((uint)uVar23 >> 0x18) + *(char *)((int)&local_2c + uVar4 + 3);
        uVar23 = CONCAT13(cVar26,CONCAT12(cVar25,CONCAT11(cVar24,cVar22)));
        cVar27 = (char)uVar28 + acStack_28[uVar4];
        cVar29 = (char)((uint)uVar28 >> 8) + acStack_28[uVar4 + 1];
        cVar30 = (char)((uint)uVar28 >> 0x10) + acStack_28[uVar4 + 2];
        cVar31 = (char)((uint)uVar28 >> 0x18) + acStack_28[uVar4 + 3];
        uVar28 = CONCAT13(cVar31,CONCAT12(cVar30,CONCAT11(cVar29,cVar27)));
        cVar32 = (char)uVar33 + acStack_28[uVar4 + 4];
        cVar34 = (char)((uint)uVar33 >> 8) + acStack_28[uVar4 + 5];
        cVar35 = (char)((uint)uVar33 >> 0x10) + acStack_28[uVar4 + 6];
        cVar36 = (char)((uint)uVar33 >> 0x18) + acStack_28[uVar4 + 7];
        uVar33 = CONCAT13(cVar36,CONCAT12(cVar35,CONCAT11(cVar34,cVar32)));
        cVar37 = (char)uVar38 + acStack_28[uVar4 + 8];
        cVar39 = (char)((uint)uVar38 >> 8) + acStack_28[uVar4 + 9];
        cVar40 = (char)((uint)uVar38 >> 0x10) + acStack_28[uVar4 + 10];
        cVar41 = (char)((uint)uVar38 >> 0x18) + acStack_28[uVar4 + 0xb];
        uVar38 = CONCAT13(cVar41,CONCAT12(cVar40,CONCAT11(cVar39,cVar37)));
        uVar4 = uVar2 & 0xffff;
        cVar6 = cVar6 + *(char *)((int)&local_2c + uVar5);
        cVar7 = cVar7 + *(char *)((int)&local_2c + uVar5 + 1);
        cVar8 = cVar8 + *(char *)((int)&local_2c + uVar5 + 2);
        cVar9 = cVar9 + *(char *)((int)&local_2c + uVar5 + 3);
        cVar10 = cVar10 + acStack_28[uVar5];
        cVar11 = cVar11 + acStack_28[uVar5 + 1];
        cVar12 = cVar12 + acStack_28[uVar5 + 2];
        cVar13 = cVar13 + acStack_28[uVar5 + 3];
        cVar14 = cVar14 + acStack_28[uVar5 + 4];
        cVar15 = cVar15 + acStack_28[uVar5 + 5];
        cVar16 = cVar16 + acStack_28[uVar5 + 6];
        cVar17 = cVar17 + acStack_28[uVar5 + 7];
        cVar18 = cVar18 + acStack_28[uVar5 + 8];
        cVar19 = cVar19 + acStack_28[uVar5 + 9];
        cVar20 = cVar20 + acStack_28[uVar5 + 10];
        cVar21 = cVar21 + acStack_28[uVar5 + 0xb];
      } while (uVar4 < (uVar1 & 0xffffffe0));
      cVar6 = cVar6 + cVar22 + cVar14 + cVar32 + cVar10 + cVar27 + cVar18 + cVar37 +
              cVar8 + cVar25 + cVar16 + cVar35 + cVar12 + cVar30 + cVar20 + cVar40 +
              cVar7 + cVar24 + cVar15 + cVar34 + cVar11 + cVar29 + cVar19 + cVar39 +
              cVar9 + cVar26 + cVar17 + cVar36 + cVar13 + cVar31 + cVar21 + cVar41;
    }
    for (; (uVar2 & 0xffff) < uVar1; uVar2 = uVar2 + 1) {
      cVar6 = cVar6 + *(char *)((int)&local_2c + (uVar2 & 0xffff));
    }
    iVar3 = param_1 + 4;
    *(char *)((int)&local_2c + param_1 + 3) = cVar6;
    if (DAT_101def00 != (code *)0x0) {
      if (DAT_101def2c == 1) {
        iVar3 = FUN_10003c80(0x9a,iVar3,&local_2c);
      }
      else {
        iVar3 = (*DAT_101def00)(DAT_101d49aa,0x9a,iVar3,&local_2c);
      }
      if (iVar3 != 0) {
        if (iVar3 == 0xe5) {
          __security_check_cookie(local_8 ^ (uint)&stack0xfffffffc);
          return;
        }
        if (iVar3 == 0xe6) {
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
    if ((char)local_2c != -0x66) {
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

