// rea decompile_all
// name: FUN_100084c0
// address: 0x100084c0
// body: available
// range: 0x100084c0-0x1000864e inclusive
// non_contiguous: false
// provider: Ghidra 12.1.2 (ghidra)
// analysis_profile: b075844f08879296d957518397cd0ddda73db81dce53d00d3f0e702766fc2af6
// limitations: The session serves operations only after Ghidra reports default auto-analysis complete; incomplete analysis does not expose partial results.; The imported Program and temporary project are ephemeral and deleted on close. Annotation operations edit session database metadata; original executable bytes are never written.; Cancelling an active Ghidra request terminates its ephemeral database and discards session annotations. The selected target remains open; the next provider query imports the original artifact again.; Default-space addresses use lowercase 0x-prefixed hexadecimal; other address spaces use <percent-encoded-space>:0x<hex>.; The Ghidra Program references PDB Comm.pdb (GUID c3062acb-498d-45fa-a233-c8b7e401bb13, age (hex) 1, signature unknown, version RSDS); Ghidra reports load state unknown. Original names and types may be missing; an empty name search does not prove a procedure is absent. Use list_procedures and address-based analysis to inspect recovered functions. REA does not admit a caller-selected PDB companion.; This session uses Ghidra 12.1.2. The bridge is verified against 12.1.4; other 12.1.x builds are accepted and the observed version is reported.; Pseudocode is Ghidra decompiler output, not original source and not text-equivalent to Hopper output.; External functions and functions without an analyzable body return null; other decompiler failures remain explicit.
// pseudocode: provider-specific; not original source


void FUN_100084c0(undefined4 param_1,int param_2)

{
  uint uVar1;
  uint uVar2;
  undefined4 in_ECX;
  uint uVar3;
  uint uVar4;
  uint in_EDX;
  uint uVar5;
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
  undefined8 uVar42;
  char local_28 [3];
  bool bStack_25;
  char acStack_24 [20];
  int local_10;
  undefined2 local_c;
  uint local_8;
  
  local_8 = DAT_101d3fec ^ (uint)&stack0xfffffffc;
  uVar5 = in_EDX & 0xffff;
  if (0x18 < uVar5) {
LAB_100084dc:
    __security_check_cookie(local_8 ^ (uint)&stack0xfffffffc);
    return;
  }
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
  local_10 = 0;
  local_c = 0;
  _local_28 = CONCAT13(param_2 == 1,
                       CONCAT12((char)uVar5,CONCAT11((char)in_ECX,(char)((uint)in_ECX >> 8))));
  FUN_1014c320(acStack_24,param_1,uVar5);
  uVar1 = uVar5 + 4;
  cVar6 = '\0';
  uVar2 = 0;
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
    uVar3 = 0;
    do {
      uVar4 = uVar2 + 0x10;
      uVar2 = uVar2 + 0x20;
      uVar4 = uVar4 & 0xffff;
      cVar22 = (char)uVar23 + local_28[uVar3];
      cVar24 = (char)((uint)uVar23 >> 8) + local_28[uVar3 + 1];
      cVar25 = (char)((uint)uVar23 >> 0x10) + local_28[uVar3 + 2];
      cVar26 = (char)((uint)uVar23 >> 0x18) + local_28[uVar3 + 3];
      uVar23 = CONCAT13(cVar26,CONCAT12(cVar25,CONCAT11(cVar24,cVar22)));
      cVar27 = (char)uVar28 + acStack_24[uVar3];
      cVar29 = (char)((uint)uVar28 >> 8) + acStack_24[uVar3 + 1];
      cVar30 = (char)((uint)uVar28 >> 0x10) + acStack_24[uVar3 + 2];
      cVar31 = (char)((uint)uVar28 >> 0x18) + acStack_24[uVar3 + 3];
      uVar28 = CONCAT13(cVar31,CONCAT12(cVar30,CONCAT11(cVar29,cVar27)));
      cVar32 = (char)uVar33 + acStack_24[uVar3 + 4];
      cVar34 = (char)((uint)uVar33 >> 8) + acStack_24[uVar3 + 5];
      cVar35 = (char)((uint)uVar33 >> 0x10) + acStack_24[uVar3 + 6];
      cVar36 = (char)((uint)uVar33 >> 0x18) + acStack_24[uVar3 + 7];
      uVar33 = CONCAT13(cVar36,CONCAT12(cVar35,CONCAT11(cVar34,cVar32)));
      cVar37 = (char)uVar38 + acStack_24[uVar3 + 8];
      cVar39 = (char)((uint)uVar38 >> 8) + acStack_24[uVar3 + 9];
      cVar40 = (char)((uint)uVar38 >> 0x10) + acStack_24[uVar3 + 10];
      cVar41 = (char)((uint)uVar38 >> 0x18) + acStack_24[uVar3 + 0xb];
      uVar38 = CONCAT13(cVar41,CONCAT12(cVar40,CONCAT11(cVar39,cVar37)));
      uVar3 = uVar2 & 0xffff;
      cVar6 = cVar6 + local_28[uVar4];
      cVar7 = cVar7 + local_28[uVar4 + 1];
      cVar8 = cVar8 + local_28[uVar4 + 2];
      cVar9 = cVar9 + local_28[uVar4 + 3];
      cVar10 = cVar10 + acStack_24[uVar4];
      cVar11 = cVar11 + acStack_24[uVar4 + 1];
      cVar12 = cVar12 + acStack_24[uVar4 + 2];
      cVar13 = cVar13 + acStack_24[uVar4 + 3];
      cVar14 = cVar14 + acStack_24[uVar4 + 4];
      cVar15 = cVar15 + acStack_24[uVar4 + 5];
      cVar16 = cVar16 + acStack_24[uVar4 + 6];
      cVar17 = cVar17 + acStack_24[uVar4 + 7];
      cVar18 = cVar18 + acStack_24[uVar4 + 8];
      cVar19 = cVar19 + acStack_24[uVar4 + 9];
      cVar20 = cVar20 + acStack_24[uVar4 + 10];
      cVar21 = cVar21 + acStack_24[uVar4 + 0xb];
    } while (uVar3 < (uVar1 & 0xffffffe0));
    cVar6 = cVar6 + cVar22 + cVar14 + cVar32 + cVar10 + cVar27 + cVar18 + cVar37 +
            cVar8 + cVar25 + cVar16 + cVar35 + cVar12 + cVar30 + cVar20 + cVar40 +
            cVar7 + cVar24 + cVar15 + cVar34 + cVar11 + cVar29 + cVar19 + cVar39 +
            cVar9 + cVar26 + cVar17 + cVar36 + cVar13 + cVar31 + cVar21 + cVar41;
  }
  for (; (uVar2 & 0xffff) < uVar1; uVar2 = uVar2 + 1) {
    cVar6 = cVar6 + local_28[uVar2 & 0xffff];
  }
  acStack_24[uVar5] = cVar6;
  uVar42 = I2CWrite(DAT_101d49aa,0xba,uVar5 + 5,local_28);
  uVar23 = (undefined4)((ulonglong)uVar42 >> 0x20);
  if ((int)uVar42 == 0) {
    local_c = 0;
    _local_28 = 0;
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
    local_10 = (int)uVar42;
    I2CRead(DAT_101d49aa,8,2,local_28);
    if (local_28[0] != -0x46) {
      __security_check_cookie(local_8 ^ (uint)&stack0xfffffffc);
      return;
    }
    if (local_28[1] == -0x1f) goto LAB_100084dc;
    uVar23 = 0x15;
  }
  __security_check_cookie(local_8 ^ (uint)&stack0xfffffffc,uVar23);
  return;
}

