// rea decompile_all
// name: FUN_10187c15
// address: 0x10187c15
// body: available
// range: 0x10187c15-0x10187dcb inclusive
// non_contiguous: false
// provider: Ghidra 12.1.2 (ghidra)
// analysis_profile: b075844f08879296d957518397cd0ddda73db81dce53d00d3f0e702766fc2af6
// limitations: The session serves operations only after Ghidra reports default auto-analysis complete; incomplete analysis does not expose partial results.; The imported Program and temporary project are ephemeral and deleted on close. Annotation operations edit session database metadata; original executable bytes are never written.; Cancelling an active Ghidra request terminates its ephemeral database and discards session annotations. The selected target remains open; the next provider query imports the original artifact again.; Default-space addresses use lowercase 0x-prefixed hexadecimal; other address spaces use <percent-encoded-space>:0x<hex>.; The Ghidra Program references PDB Comm_Aux.pdb (GUID ba7920cc-daa3-4461-a102-1f8f66c67a2a, age (hex) 1, signature unknown, version RSDS); Ghidra reports load state unknown. Original names and types may be missing; an empty name search does not prove a procedure is absent. Use list_procedures and address-based analysis to inspect recovered functions. REA does not admit a caller-selected PDB companion.; This session uses Ghidra 12.1.2. The bridge is verified against 12.1.4; other 12.1.x builds are accepted and the observed version is reported.; Pseudocode is Ghidra decompiler output, not original source and not text-equivalent to Hopper output.; External functions and functions without an analyzable body return null; other decompiler failures remain explicit.
// pseudocode: provider-specific; not original source


uint FUN_10187c15(short *param_1,uint param_2)

{
  undefined1 (*pauVar1) [32];
  short *psVar2;
  undefined1 auVar3 [32];
  uint uVar4;
  undefined1 (*pauVar5) [32];
  short *psVar6;
  int iVar7;
  uint uVar8;
  undefined1 auVar9 [16];
  undefined1 in_ZMM1 [64];
  undefined1 auVar10 [64];
  
  psVar6 = param_1;
  if (DAT_10211810 < 5) {
    if (DAT_10211810 < 1) {
      for (; (psVar6 != param_1 + param_2 && (*psVar6 != 0)); psVar6 = psVar6 + 1) {
      }
    }
    else {
      if (((uint)param_1 & 1) == 0) {
        uVar8 = (-(uint)(((uint)param_1 & 0xf) != 0) & 0x10 - ((uint)param_1 & 0xf)) >> 1;
        if (param_2 < uVar8) {
          uVar8 = param_2;
        }
        for (; (psVar6 != param_1 + uVar8 && (*psVar6 != 0)); psVar6 = psVar6 + 1) {
        }
        uVar4 = (int)psVar6 - (int)param_1 >> 1;
        if (uVar4 != uVar8) {
          return uVar4;
        }
        psVar6 = param_1 + uVar4;
        auVar10 = ZEXT4864(in_ZMM1._16_48_) << 0x80;
        psVar2 = psVar6 + ((param_2 - uVar8) - (param_2 - uVar8 & 0xf));
        for (; psVar6 != psVar2; psVar6 = psVar6 + 8) {
          auVar9._0_2_ = -(ushort)(*psVar6 == 0);
          auVar9._2_2_ = -(ushort)(psVar6[1] == 0);
          auVar9._4_2_ = -(ushort)(psVar6[2] == 0);
          auVar9._6_2_ = -(ushort)(psVar6[3] == 0);
          auVar9._8_2_ = -(ushort)(psVar6[4] == auVar10._8_2_);
          auVar9._10_2_ = -(ushort)(psVar6[5] == auVar10._10_2_);
          auVar9._12_2_ = -(ushort)(psVar6[6] == auVar10._12_2_);
          auVar9._14_2_ = -(ushort)(psVar6[7] == auVar10._14_2_);
          if ((((((((((((((((SUB161(auVar9 >> 7,0) & 1) != 0 || (SUB161(auVar9 >> 0xf,0) & 1) != 0)
                          || (SUB161(auVar9 >> 0x17,0) & 1) != 0) ||
                         (SUB161(auVar9 >> 0x1f,0) & 1) != 0) || (SUB161(auVar9 >> 0x27,0) & 1) != 0
                        ) || (SUB161(auVar9 >> 0x2f,0) & 1) != 0) ||
                      (SUB161(auVar9 >> 0x37,0) & 1) != 0) || (SUB161(auVar9 >> 0x3f,0) & 1) != 0)
                    || (SUB161(auVar9 >> 0x47,0) & 1) != 0) || (SUB161(auVar9 >> 0x4f,0) & 1) != 0)
                  || (SUB161(auVar9 >> 0x57,0) & 1) != 0) || (SUB161(auVar9 >> 0x5f,0) & 1) != 0) ||
                (SUB161(auVar9 >> 0x67,0) & 1) != 0) || (SUB161(auVar9 >> 0x6f,0) & 1) != 0) ||
              (auVar9._14_2_ >> 7 & 1) != 0) || (auVar9._14_2_ & 0x8000) != 0) break;
        }
        for (; (psVar6 != param_1 + param_2 && (*psVar6 != 0)); psVar6 = psVar6 + 1) {
        }
        iVar7 = (int)psVar6 - (int)param_1;
        goto LAB_10187dc2;
      }
      for (; (psVar6 != param_1 + param_2 && (*psVar6 != 0)); psVar6 = psVar6 + 1) {
      }
    }
  }
  else {
    if (((uint)param_1 & 1) == 0) {
      uVar8 = (-(uint)(((uint)param_1 & 0x1f) != 0) & 0x20 - ((uint)param_1 & 0x1f)) >> 1;
      if (param_2 < uVar8) {
        uVar8 = param_2;
      }
      for (; (psVar6 != param_1 + uVar8 && (*psVar6 != 0)); psVar6 = psVar6 + 1) {
      }
      uVar4 = (int)psVar6 - (int)param_1 >> 1;
      if (uVar4 != uVar8) {
        return uVar4;
      }
      pauVar5 = (undefined1 (*) [32])(param_1 + uVar4);
      pauVar1 = (undefined1 (*) [32])
                ((int)pauVar5 + ((param_2 - uVar8) - (param_2 - uVar8 & 0x1f)) * 2);
      while ((pauVar5 != pauVar1 &&
             (auVar3 = vpcmpeqw_avx2(ZEXT1232(ZEXT812(0)),*pauVar5),
             (((((((((((((((((((((((((((((((SUB321(auVar3 >> 7,0) & 1) == 0 &&
                                          (SUB321(auVar3 >> 0xf,0) & 1) == 0) &&
                                         (SUB321(auVar3 >> 0x17,0) & 1) == 0) &&
                                        (SUB321(auVar3 >> 0x1f,0) & 1) == 0) &&
                                       (SUB321(auVar3 >> 0x27,0) & 1) == 0) &&
                                      (SUB321(auVar3 >> 0x2f,0) & 1) == 0) &&
                                     (SUB321(auVar3 >> 0x37,0) & 1) == 0) &&
                                    (SUB321(auVar3 >> 0x3f,0) & 1) == 0) &&
                                   (SUB321(auVar3 >> 0x47,0) & 1) == 0) &&
                                  (SUB321(auVar3 >> 0x4f,0) & 1) == 0) &&
                                 (SUB321(auVar3 >> 0x57,0) & 1) == 0) &&
                                (SUB321(auVar3 >> 0x5f,0) & 1) == 0) &&
                               (SUB321(auVar3 >> 0x67,0) & 1) == 0) &&
                              (SUB321(auVar3 >> 0x6f,0) & 1) == 0) &&
                             (SUB321(auVar3 >> 0x77,0) & 1) == 0) &&
                            SUB321(auVar3 >> 0x7f,0) == '\0') && (SUB321(auVar3 >> 0x87,0) & 1) == 0
                           ) && (SUB321(auVar3 >> 0x8f,0) & 1) == 0) &&
                         (SUB321(auVar3 >> 0x97,0) & 1) == 0) && (SUB321(auVar3 >> 0x9f,0) & 1) == 0
                        ) && (SUB321(auVar3 >> 0xa7,0) & 1) == 0) &&
                      (SUB321(auVar3 >> 0xaf,0) & 1) == 0) && (SUB321(auVar3 >> 0xb7,0) & 1) == 0)
                    && SUB321(auVar3 >> 0xbf,0) == '\0') && (SUB321(auVar3 >> 199,0) & 1) == 0) &&
                  (SUB321(auVar3 >> 0xcf,0) & 1) == 0) && (SUB321(auVar3 >> 0xd7,0) & 1) == 0) &&
                (SUB321(auVar3 >> 0xdf,0) & 1) == 0) && (SUB321(auVar3 >> 0xe7,0) & 1) == 0) &&
              (SUB321(auVar3 >> 0xef,0) & 1) == 0) && (SUB321(auVar3 >> 0xf7,0) & 1) == 0) &&
             -1 < auVar3[0x1f]))) {
        pauVar5 = pauVar5 + 1;
      }
      for (; (pauVar5 != (undefined1 (*) [32])(param_1 + param_2) && (*(short *)*pauVar5 != 0));
          pauVar5 = (undefined1 (*) [32])(*pauVar5 + 2)) {
      }
      return (int)pauVar5 - (int)param_1 >> 1;
    }
    for (; (psVar6 != param_1 + param_2 && (*psVar6 != 0)); psVar6 = psVar6 + 1) {
    }
  }
  iVar7 = (int)psVar6 - (int)param_1;
LAB_10187dc2:
  return iVar7 >> 1;
}

