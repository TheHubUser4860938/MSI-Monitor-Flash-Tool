// rea decompile_all
// name: __handle_exc
// address: 0x1019a5b7
// body: available
// range: 0x1019a5b7-0x1019a796 inclusive
// non_contiguous: false
// provider: Ghidra 12.1.2 (ghidra)
// analysis_profile: b075844f08879296d957518397cd0ddda73db81dce53d00d3f0e702766fc2af6
// limitations: The session serves operations only after Ghidra reports default auto-analysis complete; incomplete analysis does not expose partial results.; The imported Program and temporary project are ephemeral and deleted on close. Annotation operations edit session database metadata; original executable bytes are never written.; Cancelling an active Ghidra request terminates its ephemeral database and discards session annotations. The selected target remains open; the next provider query imports the original artifact again.; Default-space addresses use lowercase 0x-prefixed hexadecimal; other address spaces use <percent-encoded-space>:0x<hex>.; The Ghidra Program references PDB Comm_Aux.pdb (GUID ba7920cc-daa3-4461-a102-1f8f66c67a2a, age (hex) 1, signature unknown, version RSDS); Ghidra reports load state unknown. Original names and types may be missing; an empty name search does not prove a procedure is absent. Use list_procedures and address-based analysis to inspect recovered functions. REA does not admit a caller-selected PDB companion.; This session uses Ghidra 12.1.2. The bridge is verified against 12.1.4; other 12.1.x builds are accepted and the observed version is reported.; Pseudocode is Ghidra decompiler output, not original source and not text-equivalent to Hopper output.; External functions and functions without an analyzable body return null; other decompiler failures remain explicit.
// pseudocode: provider-specific; not original source


/* Library Function - Single Match
    __handle_exc
   
   Library: Visual Studio 2015 Release */

bool __handle_exc(uint param_1,double *param_2,uint param_3)

{
  double dVar1;
  int iVar2;
  uint uVar3;
  bool bVar4;
  float10 fVar5;
  float10 fVar6;
  uint local_14;
  byte bStack_10;
  undefined1 uStack_f;
  ushort uStack_e;
  int local_8;
  
  uVar3 = param_1 & 0x1f;
  if (((param_1 & 8) != 0) && ((param_3 & 1) != 0)) {
    FUN_1019ad1c(1);
    uVar3 = param_1 & 0x17;
    goto LAB_1019a774;
  }
  if ((param_1 & param_3 & 4) != 0) {
    FUN_1019ad1c(4);
    uVar3 = param_1 & 0x1b;
    goto LAB_1019a774;
  }
  if (((param_1 & 1) == 0) || ((param_3 & 8) == 0)) {
    if (((param_1 & 2) != 0) && ((param_3 & 0x10) != 0)) {
      bVar4 = (param_1 & 0x10) != 0;
      if (*param_2 == 0.0) {
        bVar4 = true;
      }
      else {
        fVar5 = (float10)FUN_1019ab7c(*param_2,&local_8);
        local_8 = local_8 + -0x600;
        dVar1 = (double)fVar5;
        local_14 = SUB84(dVar1,0);
        bStack_10 = (byte)((ulonglong)dVar1 >> 0x20);
        uStack_f = (undefined1)((ulonglong)dVar1 >> 0x28);
        uStack_e = (ushort)((ulonglong)dVar1 >> 0x30);
        if (local_8 < -0x432) {
          fVar6 = (float10)0 * fVar5;
          bVar4 = true;
        }
        else {
          uStack_e = uStack_e & 0xf | 0x10;
          if (local_8 < -0x3fd) {
            iVar2 = -0x3fd - local_8;
            do {
              if (((local_14 & 1) != 0) && (!bVar4)) {
                bVar4 = true;
              }
              local_14 = local_14 >> 1;
              if ((bStack_10 & 1) != 0) {
                local_14 = local_14 | 0x80000000;
              }
              uVar3 = CONCAT22(uStack_e,CONCAT11(uStack_f,bStack_10)) >> 1;
              bStack_10 = (byte)uVar3;
              uStack_f = (undefined1)(uVar3 >> 8);
              uStack_e = uStack_e >> 1;
              iVar2 = iVar2 + -1;
            } while (iVar2 != 0);
          }
          fVar6 = (float10)(double)CONCAT26(uStack_e,CONCAT15(uStack_f,CONCAT14(bStack_10,local_14))
                                           );
          if (fVar5 < (float10)0) {
            fVar6 = -fVar6;
          }
        }
        *param_2 = (double)fVar6;
      }
      if (bVar4) {
        FUN_1019ad1c(0x10);
      }
      uVar3 = param_1 & 0x1d;
    }
    goto LAB_1019a774;
  }
  FUN_1019ad1c(8);
  uVar3 = param_3 & 0xc00;
  if (uVar3 == 0) {
    if (*param_2 <= 0.0) {
LAB_1019a68e:
      dVar1 = INFINITY;
      goto LAB_1019a694;
    }
LAB_1019a686:
    dVar1 = INFINITY;
LAB_1019a696:
    *param_2 = dVar1;
  }
  else {
    if (uVar3 == 0x400) {
      if (*param_2 <= 0.0) goto LAB_1019a68e;
      dVar1 = 1.79769313486232e+308;
      goto LAB_1019a696;
    }
    if (uVar3 == 0x800) {
      if (0.0 < *param_2) goto LAB_1019a686;
      dVar1 = 1.79769313486232e+308;
LAB_1019a694:
      dVar1 = -dVar1;
      goto LAB_1019a696;
    }
    if (uVar3 == 0xc00) {
      dVar1 = 1.79769313486232e+308;
      if (0.0 < *param_2) goto LAB_1019a696;
      goto LAB_1019a694;
    }
  }
  uVar3 = param_1 & 0x1e;
LAB_1019a774:
  if (((param_1 & 0x10) != 0) && ((param_3 & 0x20) != 0)) {
    FUN_1019ad1c(0x20);
    uVar3 = uVar3 & 0xffffffef;
  }
  return uVar3 == 0;
}

