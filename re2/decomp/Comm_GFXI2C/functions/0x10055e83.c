// rea decompile_all
// name: FUN_10055e83
// address: 0x10055e83
// body: available
// range: 0x10055e83-0x1005654a inclusive
// non_contiguous: false
// provider: Ghidra 12.1.2 (ghidra)
// analysis_profile: b075844f08879296d957518397cd0ddda73db81dce53d00d3f0e702766fc2af6
// limitations: The session serves operations only after Ghidra reports default auto-analysis complete; incomplete analysis does not expose partial results.; The imported Program and temporary project are ephemeral and deleted on close. Annotation operations edit session database metadata; original executable bytes are never written.; Cancelling an active Ghidra request terminates its ephemeral database and discards session annotations. The selected target remains open; the next provider query imports the original artifact again.; Default-space addresses use lowercase 0x-prefixed hexadecimal; other address spaces use <percent-encoded-space>:0x<hex>.; The Ghidra Program references PDB Comm_GFXI2C.pdb (GUID d304cc6d-b3ee-4851-b468-0ab5e385ca92, age (hex) 1, signature unknown, version RSDS); Ghidra reports load state unknown. Original names and types may be missing; an empty name search does not prove a procedure is absent. Use list_procedures and address-based analysis to inspect recovered functions. REA does not admit a caller-selected PDB companion.; This session uses Ghidra 12.1.2. The bridge is verified against 12.1.4; other 12.1.x builds are accepted and the observed version is reported.; Pseudocode is Ghidra decompiler output, not original source and not text-equivalent to Hopper output.; External functions and functions without an analyzable body return null; other decompiler failures remain explicit.
// pseudocode: provider-specific; not original source


void __cdecl
FUN_10055e83(undefined2 *param_1,int *param_2,char *param_3,int param_4,int param_5,int param_6,
            int param_7,int *param_8)

{
  int iVar1;
  int iVar2;
  uint uVar3;
  bool bVar4;
  bool bVar5;
  bool bVar6;
  ushort uVar7;
  char cVar8;
  ushort uVar9;
  int *piVar10;
  uint uVar11;
  ushort *puVar12;
  uint uVar13;
  uint uVar14;
  ushort uVar15;
  int iVar16;
  undefined *puVar17;
  char *pcVar18;
  undefined4 uVar19;
  ushort uVar20;
  uint uVar21;
  undefined4 uVar22;
  char *pcVar23;
  short *psVar24;
  int local_6c;
  int local_68;
  ushort *local_64;
  ushort *local_60;
  int local_5c;
  char *local_58;
  int local_54;
  uint local_50;
  ushort local_4c;
  undefined4 uStack_4a;
  undefined2 uStack_46;
  undefined4 local_44;
  undefined4 local_40;
  undefined4 local_3c;
  undefined4 uStack_38;
  byte local_30;
  undefined1 uStack_2f;
  undefined4 uStack_2e;
  undefined4 uStack_2a;
  ushort uStack_26;
  char local_24 [23];
  char local_d;
  uint local_8;
  
  local_8 = DAT_10064168 ^ (uint)&stack0xfffffffc;
  iVar16 = 0;
  pcVar23 = local_24;
  uVar7 = 0;
  local_6c = 1;
  local_50 = 0;
  bVar4 = false;
  bVar6 = false;
  bVar5 = false;
  local_68 = 0;
  local_54 = 0;
  if (param_8 != (int *)0x0) {
    local_58 = param_3;
    for (; (((cVar8 = *param_3, cVar8 == ' ' || (cVar8 == '\t')) || (cVar8 == '\n')) ||
           (cVar8 == '\r')); param_3 = param_3 + 1) {
    }
LAB_10055f0a:
    cVar8 = *param_3;
    pcVar18 = param_3 + 1;
    switch(iVar16) {
    case 0:
      if ((byte)(cVar8 - 0x31U) < 9) {
LAB_10055f27:
        iVar16 = 3;
        goto LAB_10055f29;
      }
      if (cVar8 == *(char *)**(undefined4 **)(*param_8 + 0xbc)) {
LAB_10055f3e:
        iVar16 = 5;
        param_3 = pcVar18;
      }
      else if (cVar8 == '+') {
        uVar7 = 0;
        iVar16 = 2;
        param_3 = pcVar18;
      }
      else {
        if (cVar8 != '-') {
          if (cVar8 == '0') goto LAB_10055f58;
          goto LAB_100560e3;
        }
        iVar16 = 2;
        uVar7 = 0x8000;
        param_3 = pcVar18;
      }
      goto LAB_10055f0a;
    case 1:
      bVar4 = true;
      if ((byte)(cVar8 - 0x31U) < 9) goto LAB_10055f27;
      if (cVar8 == *(char *)**(undefined4 **)(*param_8 + 0xbc)) goto LAB_10055f8f;
      if ((cVar8 == '+') || (cVar8 == '-')) goto LAB_10055fbf;
      if (cVar8 == '0') goto LAB_10055f58;
      goto LAB_10055f9f;
    case 2:
      if ((byte)(cVar8 - 0x31U) < 9) goto LAB_10055f27;
      if (cVar8 == *(char *)**(undefined4 **)(*param_8 + 0xbc)) goto LAB_10055f3e;
      param_3 = local_58;
      if (cVar8 != '0') goto LAB_1005610e;
LAB_10055f58:
      iVar16 = 1;
      param_3 = pcVar18;
      goto LAB_10055f0a;
    case 3:
      while (('/' < cVar8 && (cVar8 < ':'))) {
        if (local_50 < 0x19) {
          local_50 = local_50 + 1;
          *pcVar23 = cVar8 + -0x30;
          pcVar23 = pcVar23 + 1;
        }
        else {
          local_54 = local_54 + 1;
        }
        cVar8 = *pcVar18;
        pcVar18 = pcVar18 + 1;
      }
      if (cVar8 != *(char *)**(undefined4 **)(*param_8 + 0xbc)) goto LAB_10056032;
LAB_10055f8f:
      bVar4 = true;
      iVar16 = 4;
      param_3 = pcVar18;
      goto LAB_10055f0a;
    case 4:
      bVar6 = true;
      if (local_50 == 0) {
        while (cVar8 == '0') {
          local_54 = local_54 + -1;
          cVar8 = *pcVar18;
          pcVar18 = pcVar18 + 1;
        }
      }
      while (('/' < cVar8 && (cVar8 < ':'))) {
        if (local_50 < 0x19) {
          local_50 = local_50 + 1;
          *pcVar23 = cVar8 + -0x30;
          pcVar23 = pcVar23 + 1;
          local_54 = local_54 + -1;
        }
        cVar8 = *pcVar18;
        pcVar18 = pcVar18 + 1;
      }
LAB_10056032:
      if ((cVar8 == '+') || (cVar8 == '-')) {
LAB_10055fbf:
        bVar4 = true;
        iVar16 = 0xb;
        param_3 = pcVar18 + -1;
      }
      else {
LAB_10055f9f:
        bVar4 = true;
        if ((cVar8 < 'D') || (('E' < cVar8 && ((cVar8 < 'd' || ('e' < cVar8)))))) goto LAB_100560e3;
        iVar16 = 6;
        param_3 = pcVar18;
      }
      goto LAB_10055f0a;
    case 5:
      bVar6 = true;
      param_3 = local_58;
      if ((byte)(cVar8 - 0x30U) < 10) {
        iVar16 = 4;
        goto LAB_10055f29;
      }
      goto LAB_1005610e;
    case 6:
      local_58 = param_3 + -1;
      if (8 < (byte)(cVar8 - 0x31U)) {
        if (cVar8 == '+') goto LAB_100560ca;
        if (cVar8 == '-') goto LAB_100560be;
LAB_100560b1:
        param_3 = local_58;
        if (cVar8 != '0') goto LAB_1005610e;
        iVar16 = 8;
        param_3 = pcVar18;
        goto LAB_10055f0a;
      }
      break;
    case 7:
      if (8 < (byte)(cVar8 - 0x31U)) goto LAB_100560b1;
      break;
    case 8:
      bVar5 = true;
      while (cVar8 == '0') {
        cVar8 = *pcVar18;
        pcVar18 = pcVar18 + 1;
      }
      if (8 < (byte)(cVar8 - 0x31U)) goto LAB_100560e3;
      break;
    case 9:
      bVar5 = true;
      local_68 = 0;
      goto LAB_10056170;
    default:
      goto switchD_10055f16_caseD_a;
    case 0xb:
      if (param_7 != 0) {
        local_58 = param_3;
        if (cVar8 == '+') {
LAB_100560ca:
          iVar16 = 7;
          param_3 = pcVar18;
        }
        else {
          if (cVar8 != '-') goto LAB_1005610e;
LAB_100560be:
          local_6c = -1;
          iVar16 = 7;
          param_3 = pcVar18;
        }
        goto LAB_10055f0a;
      }
      iVar16 = 10;
      pcVar18 = param_3;
switchD_10055f16_caseD_a:
      param_3 = pcVar18;
      if (iVar16 != 10) goto LAB_10055f0a;
      goto LAB_1005610e;
    }
    iVar16 = 9;
LAB_10055f29:
    param_3 = pcVar18 + -1;
    goto LAB_10055f0a;
  }
  piVar10 = __errno();
  *piVar10 = 0x16;
  __invalid_parameter((wchar_t *)0x0,(wchar_t *)0x0,(wchar_t *)0x0,0,0);
  uVar3 = CONCAT22(local_40._2_2_,(undefined2)local_40);
  uVar14 = CONCAT22(uStack_38._2_2_,(ushort)uStack_38);
  goto LAB_1005653c;
LAB_10056170:
  if ((cVar8 < '0') || ('9' < cVar8)) goto LAB_1005618b;
  local_68 = local_68 * 10 + -0x30 + (int)cVar8;
  if (local_68 < 0x1451) {
    cVar8 = *pcVar18;
    pcVar18 = pcVar18 + 1;
    goto LAB_10056170;
  }
  local_68 = 0x1451;
LAB_1005618b:
  while (('/' < cVar8 && (cVar8 < ':'))) {
    cVar8 = *pcVar18;
    pcVar18 = pcVar18 + 1;
  }
LAB_100560e3:
  param_3 = pcVar18 + -1;
LAB_1005610e:
  *param_2 = (int)param_3;
  if (bVar4) {
    if (0x18 < local_50) {
      if ('\x04' < local_d) {
        local_d = local_d + '\x01';
      }
      pcVar23 = pcVar23 + -1;
      local_54 = local_54 + 1;
      local_50 = 0x18;
    }
    if (local_50 == 0) goto LAB_1005651e;
    while (pcVar23 = pcVar23 + -1, *pcVar23 == '\0') {
      local_50 = local_50 - 1;
      local_54 = local_54 + 1;
    }
    ___mtold12(local_24,local_50,&local_40);
    iVar2 = CONCAT22(local_3c._2_2_,(undefined2)local_3c);
    uVar3 = CONCAT22(local_40._2_2_,(undefined2)local_40);
    iVar1 = CONCAT22(uStack_2a._2_2_,(ushort)uStack_2a);
    uVar21 = CONCAT22(uStack_2e._2_2_,(ushort)uStack_2e);
    uVar14 = CONCAT22(uStack_38._2_2_,(ushort)uStack_38);
    uVar13 = CONCAT22(uStack_38._2_2_,(ushort)uStack_38);
    iVar16 = CONCAT22(uStack_4a._2_2_,(undefined2)uStack_4a);
    if (local_6c < 0) {
      local_68 = -local_68;
    }
    local_58 = (char *)(local_68 + local_54);
    if (!bVar5) {
      local_58 = (char *)((int)local_58 + param_5);
    }
    if (!bVar6) {
      local_58 = (char *)((int)local_58 - param_6);
    }
    if ((int)local_58 < 0x1451) {
      if ((int)local_58 < -0x1450) goto LAB_1005651e;
      puVar17 = &DAT_10065170;
      if (local_58 != (char *)0x0) {
        if ((int)local_58 < 0) {
          local_58 = (char *)-(int)local_58;
          puVar17 = &DAT_100652d0;
        }
        if (param_4 == 0) {
          local_40._0_2_ = 0;
        }
        iVar16 = uStack_4a;
        uVar13 = uVar14;
        uVar21 = uStack_2e;
        iVar1 = uStack_2a;
        uVar3 = CONCAT22(local_40._2_2_,(undefined2)local_40);
        iVar2 = local_3c;
joined_r0x10056218:
        if (local_58 != (char *)0x0) {
          uStack_38._2_2_ = (ushort)(uVar13 >> 0x10);
          uVar14 = (int)local_58 >> 3;
          puVar17 = puVar17 + 0x54;
          uVar11 = (uint)local_58 & 7;
          local_58 = (char *)uVar14;
          if (uVar11 != 0) {
            puVar12 = (ushort *)(puVar17 + uVar11 * 0xc);
            if (0x7fff < *puVar12) {
              local_4c = (ushort)*(undefined4 *)puVar12;
              uStack_4a._0_2_ = (undefined2)((uint)*(undefined4 *)puVar12 >> 0x10);
              uStack_4a._2_2_ = (undefined2)*(undefined4 *)(puVar12 + 2);
              uStack_46 = (undefined2)((uint)*(undefined4 *)(puVar12 + 2) >> 0x10);
              local_44 = *(undefined4 *)(puVar12 + 4);
              iVar16 = CONCAT22(uStack_4a._2_2_,(undefined2)uStack_4a) + -1;
              uStack_4a._0_2_ = (undefined2)iVar16;
              uStack_4a._2_2_ = (undefined2)((uint)iVar16 >> 0x10);
              puVar12 = &local_4c;
            }
            local_54 = 0;
            local_30 = 0;
            uStack_2f = 0;
            uStack_2e._0_2_ = 0;
            uStack_2e._2_2_ = 0;
            uVar21 = 0;
            uStack_2a._0_2_ = 0;
            uStack_2a._2_2_ = 0;
            iVar1 = 0;
            uStack_26 = 0;
            uVar9 = puVar12[5] & 0x7fff;
            uVar20 = (puVar12[5] ^ uStack_38._2_2_) & 0x8000;
            uVar15 = uVar9 + (uStack_38._2_2_ & 0x7fff);
            if ((((uStack_38._2_2_ & 0x7fff) < 0x7fff) && (uVar9 < 0x7fff)) && (uVar15 < 0xbffe)) {
              if (0x3fbf < uVar15) {
                if ((((uVar13 & 0x7fff0000) == 0) &&
                    (uVar15 = uVar15 + 1, (uVar13 & 0x7fffffff) == 0)) &&
                   ((iVar2 == 0 && (uVar3 == 0)))) {
                  uStack_38._2_2_ = 0;
                  uVar13 = uVar13 & 0xffff;
                  uVar21 = 0;
                  iVar1 = 0;
                }
                else if (((uVar9 == 0) &&
                         (uVar15 = uVar15 + 1, (*(uint *)(puVar12 + 4) & 0x7fffffff) == 0)) &&
                        ((*(int *)(puVar12 + 2) == 0 && (*(int *)puVar12 == 0)))) {
                  uStack_38._0_2_ = 0;
                  uStack_38._2_2_ = 0;
                  uVar13 = 0;
                  local_3c._0_2_ = 0;
                  local_3c._2_2_ = 0;
                  local_40._0_2_ = 0;
                  local_40._2_2_ = 0;
                  uVar3 = 0;
                  iVar2 = 0;
                }
                else {
                  local_6c = 0;
                  psVar24 = (short *)((int)&uStack_2e + 2);
                  local_5c = 5;
                  do {
                    local_68 = local_5c;
                    if (0 < local_5c) {
                      local_60 = (ushort *)((int)&local_40 + local_6c * 2);
                      local_64 = puVar12 + 4;
                      do {
                        bVar4 = false;
                        uVar21 = *(uint *)(psVar24 + -2) + (uint)*local_64 * (uint)*local_60;
                        if ((uVar21 < *(uint *)(psVar24 + -2)) ||
                           (uVar21 < (uint)*local_64 * (uint)*local_60)) {
                          bVar4 = true;
                        }
                        *(uint *)(psVar24 + -2) = uVar21;
                        if (bVar4) {
                          *psVar24 = *psVar24 + 1;
                        }
                        local_60 = local_60 + 1;
                        local_64 = local_64 + -1;
                        local_68 = local_68 + -1;
                      } while (0 < local_68);
                    }
                    psVar24 = psVar24 + 1;
                    local_6c = local_6c + 1;
                    local_5c = local_5c + -1;
                  } while (0 < local_5c);
                  uVar15 = uVar15 + 0xc002;
                  if ((short)uVar15 < 1) {
LAB_100563d4:
                    uVar15 = uVar15 - 1;
                    if ((short)uVar15 < 0) {
                      uVar21 = (uint)(ushort)-uVar15;
                      uVar15 = 0;
                      do {
                        if ((local_30 & 1) != 0) {
                          local_54 = local_54 + 1;
                        }
                        iVar2 = CONCAT22(uStack_26,uStack_2a._2_2_);
                        uVar13 = CONCAT22((ushort)uStack_2a,uStack_2e._2_2_);
                        iVar1 = CONCAT22((ushort)uStack_2a,uStack_2e._2_2_);
                        uStack_2a._2_2_ = (ushort)(CONCAT22(uStack_26,uStack_2a._2_2_) >> 1);
                        uStack_26 = uStack_26 >> 1;
                        uStack_2a._0_2_ =
                             (ushort)uStack_2a >> 1 | (ushort)((uint)(iVar2 << 0x1f) >> 0x10);
                        uVar14 = CONCAT22((ushort)uStack_2e,CONCAT11(uStack_2f,local_30)) >> 1;
                        uStack_2e._0_2_ =
                             (ushort)uStack_2e >> 1 | (ushort)((uint)(iVar1 << 0x1f) >> 0x10);
                        uVar21 = uVar21 - 1;
                        uStack_2e._2_2_ = (ushort)(uVar13 >> 1);
                        local_30 = (byte)uVar14;
                        uStack_2f = (undefined1)(uVar14 >> 8);
                      } while (uVar21 != 0);
                      if (local_54 != 0) {
                        local_30 = local_30 | 1;
                      }
                    }
                  }
                  else {
                    do {
                      uVar9 = (ushort)uStack_2e;
                      if ((short)uStack_26 < 0) break;
                      iVar1 = CONCAT22((ushort)uStack_2e,CONCAT11(uStack_2f,local_30)) << 1;
                      local_30 = (byte)iVar1;
                      uStack_2f = (undefined1)((uint)iVar1 >> 8);
                      uStack_2e._0_2_ = (ushort)((uint)iVar1 >> 0x10);
                      iVar1 = CONCAT22((ushort)uStack_2a,uStack_2e._2_2_) * 2;
                      uStack_2e._2_2_ = (ushort)iVar1 | uVar9 >> 0xf;
                      iVar2 = CONCAT22(uStack_26,uStack_2a._2_2_) * 2;
                      uStack_2a._2_2_ = (ushort)iVar2 | (ushort)uStack_2a >> 0xf;
                      uVar15 = uVar15 - 1;
                      uStack_2a._0_2_ = (ushort)((uint)iVar1 >> 0x10);
                      uStack_26 = (ushort)((uint)iVar2 >> 0x10);
                    } while (0 < (short)uVar15);
                    if ((short)uVar15 < 1) goto LAB_100563d4;
                  }
                  if ((0x8000 < CONCAT11(uStack_2f,local_30)) ||
                     (iVar1 = CONCAT22(uStack_2a._2_2_,(ushort)uStack_2a),
                     uVar21 = CONCAT22(uStack_2e._2_2_,(ushort)uStack_2e),
                     (CONCAT22((ushort)uStack_2e,CONCAT11(uStack_2f,local_30)) & 0x1ffff) == 0x18000
                     )) {
                    if (CONCAT22(uStack_2e._2_2_,(ushort)uStack_2e) == -1) {
                      uVar21 = 0;
                      if (CONCAT22(uStack_2a._2_2_,(ushort)uStack_2a) == -1) {
                        if (uStack_26 == 0xffff) {
                          uStack_26 = 0x8000;
                          uVar15 = uVar15 + 1;
                          iVar1 = 0;
                          uVar21 = 0;
                        }
                        else {
                          uStack_26 = uStack_26 + 1;
                          iVar1 = 0;
                          uVar21 = 0;
                        }
                      }
                      else {
                        iVar1 = CONCAT22(uStack_2a._2_2_,(ushort)uStack_2a) + 1;
                      }
                    }
                    else {
                      uVar21 = CONCAT22(uStack_2e._2_2_,(ushort)uStack_2e) + 1;
                      iVar1 = CONCAT22(uStack_2a._2_2_,(ushort)uStack_2a);
                    }
                  }
                  if (uVar15 < 0x7fff) {
                    local_40 = uVar21;
                    local_3c = iVar1;
                    uStack_38._0_2_ = uStack_26;
                    uStack_38._2_2_ = uVar15 | uVar20;
                    uVar13 = CONCAT22(uVar15 | uVar20,uStack_26);
                    uVar3 = uVar21;
                    iVar2 = iVar1;
                  }
                  else {
                    local_3c._0_2_ = 0;
                    local_3c._2_2_ = 0;
                    local_40._0_2_ = 0;
                    local_40._2_2_ = 0;
                    uVar13 = ((uVar20 == 0) - 1 & 0x80000000) + 0x7fff8000;
                    uStack_38._0_2_ = (ushort)uVar13;
                    uStack_38._2_2_ = (ushort)(uVar13 >> 0x10);
                    uVar3 = 0;
                    iVar2 = 0;
                  }
                }
                goto joined_r0x10056218;
              }
              uVar13 = 0;
              local_3c._0_2_ = 0;
              local_3c._2_2_ = 0;
              local_40._0_2_ = 0;
              local_40._2_2_ = 0;
            }
            else {
              local_3c._0_2_ = 0;
              local_3c._2_2_ = 0;
              uVar13 = ((uVar20 == 0) - 1 & 0x80000000) + 0x7fff8000;
              local_40._0_2_ = 0;
              local_40._2_2_ = 0;
            }
            uStack_38._0_2_ = (ushort)uVar13;
            uStack_38._2_2_ = (ushort)(uVar13 >> 0x10);
            uVar21 = 0;
            iVar1 = 0;
            uVar3 = 0;
            iVar2 = 0;
          }
          goto joined_r0x10056218;
        }
      }
      local_3c._2_2_ = (undefined2)((uint)iVar2 >> 0x10);
      local_3c._0_2_ = (undefined2)iVar2;
      local_40._2_2_ = (undefined2)(uVar3 >> 0x10);
      local_40._0_2_ = (undefined2)uVar3;
      uStack_38._2_2_ = (ushort)(uVar13 >> 0x10);
      uStack_38._0_2_ = (ushort)uVar13;
      uVar22 = CONCAT22((undefined2)local_3c,local_40._2_2_);
      uVar19 = CONCAT22((ushort)uStack_38,local_3c._2_2_);
      uStack_4a = iVar16;
      uVar14 = uVar13;
      uStack_2e = uVar21;
      uStack_2a = iVar1;
      local_3c = iVar2;
    }
    else {
      uVar22 = 0;
      uStack_38._2_2_ = 0x7fff;
      uVar19 = 0x80000000;
      local_40._0_2_ = 0;
    }
  }
  else {
LAB_1005651e:
    uVar3 = CONCAT22(local_40._2_2_,(undefined2)local_40);
    uVar14 = CONCAT22(uStack_38._2_2_,(ushort)uStack_38);
    local_40._0_2_ = 0;
    uStack_38._2_2_ = 0;
    uVar19 = 0;
    uVar22 = 0;
  }
  *param_1 = (undefined2)local_40;
  param_1[5] = uStack_38._2_2_ | uVar7;
  *(undefined4 *)(param_1 + 1) = uVar22;
  *(undefined4 *)(param_1 + 3) = uVar19;
LAB_1005653c:
  uStack_38 = uVar14;
  local_40 = uVar3;
  __security_check_cookie(local_8 ^ (uint)&stack0xfffffffc);
  return;
}

