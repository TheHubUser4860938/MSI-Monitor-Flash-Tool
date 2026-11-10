// rea decompile_all
// name: FUN_101ad4bd
// address: 0x101ad4bd
// body: available
// range: 0x101ad4bd-0x101ad680 inclusive
// non_contiguous: false
// provider: Ghidra 12.1.2 (ghidra)
// analysis_profile: b075844f08879296d957518397cd0ddda73db81dce53d00d3f0e702766fc2af6
// limitations: The session serves operations only after Ghidra reports default auto-analysis complete; incomplete analysis does not expose partial results.; The imported Program and temporary project are ephemeral and deleted on close. Annotation operations edit session database metadata; original executable bytes are never written.; Cancelling an active Ghidra request terminates its ephemeral database and discards session annotations. The selected target remains open; the next provider query imports the original artifact again.; Default-space addresses use lowercase 0x-prefixed hexadecimal; other address spaces use <percent-encoded-space>:0x<hex>.; Ghidra Listing reports a terminal call at 0x101ad530 to 0x101b6819 FUN_101b6819 (external=false, thunk=false, hasNoReturn=false); fallthrough is excluded by Ghidra's flow model. The reason for the terminal flow is not established by this observation.; Ghidra Listing reports a terminal call at 0x101ad64e to 0x101b67ce FUN_101b67ce (external=false, thunk=false, hasNoReturn=false); fallthrough is excluded by Ghidra's flow model. The reason for the terminal flow is not established by this observation.; Ghidra Listing reports a terminal call at 0x101ad657 to 0x101b67ce FUN_101b67ce (external=false, thunk=false, hasNoReturn=false); fallthrough is excluded by Ghidra's flow model. The reason for the terminal flow is not established by this observation.; The Ghidra Program references PDB WinIspPlugIn.pdb (GUID d9f398c7-6c98-49a8-af25-a0659d5ad2f3, age (hex) 1, signature unknown, version RSDS); Ghidra reports load state unknown. Original names and types may be missing; an empty name search does not prove a procedure is absent. Use list_procedures and address-based analysis to inspect recovered functions. REA does not admit a caller-selected PDB companion.; This session uses Ghidra 12.1.2. The bridge is verified against 12.1.4; other 12.1.x builds are accepted and the observed version is reported.; Pseudocode is Ghidra decompiler output, not original source and not text-equivalent to Hopper output.; External functions and functions without an analyzable body return null; other decompiler failures remain explicit.
// pseudocode: provider-specific; not original source


ushort FUN_101ad4bd(int param_1,uint param_2,int param_3,uint param_4)

{
  ushort uVar1;
  uint in_EAX;
  uint uVar2;
  byte extraout_CL;
  char extraout_CL_00;
  uint extraout_ECX;
  int extraout_ECX_00;
  int iVar3;
  int extraout_ECX_01;
  bool bVar4;
  short in_FPUControlWord;
  ushort in_FPUStatusWord;
  float10 extraout_ST0;
  float10 extraout_ST0_00;
  float10 fVar5;
  float10 extraout_ST1;
  float10 extraout_ST1_00;
  float10 extraout_ST1_01;
  float10 fVar6;
  unkbyte10 in_ST6;
  unkbyte10 in_ST7;
  undefined1 local_78 [12];
  ushort uStack_6c;
  undefined4 uStack_64;
  undefined1 auStack_e [10];
  short local_4;
  undefined2 uStack_2;
  
  _local_4 = CONCAT22((short)(in_EAX >> 0x10),in_FPUControlWord);
  uVar2 = in_EAX;
  if (in_FPUControlWord != 0x27f) {
    auStack_e._6_4_ = 0x101ad4d1;
    in_EAX = FUN_101b6745();
    uVar2 = extraout_ECX;
  }
  bVar4 = (uVar2 & 0x7ff00000) == 0x7ff00000;
  if (bVar4) {
    if ((in_EAX & 0xfffff) == 0 && param_3 == 0) {
      auStack_e._6_4_ = 0x101ad599;
      fVar5 = (float10)__fload_withFB();
      iVar3 = extraout_ECX_01;
      fVar6 = extraout_ST1_01;
      in_ST6 = in_ST7;
    }
    else {
      auStack_e._6_4_ = 0x101ad55d;
      uVar1 = __fload_withFB();
      in_FPUStatusWord = in_FPUStatusWord & 0xfdff;
      fVar6 = extraout_ST1_00;
      if (NAN((float10)1) || NAN(extraout_ST0_00)) goto LAB_101ad568;
      if ((float10)1 == extraout_ST0_00) {
        return uVar1;
      }
      iVar3 = extraout_ECX_00 + 1;
      fVar5 = extraout_ST0_00;
    }
  }
  else {
    auStack_e._6_4_ = 0x101ad4ec;
    uVar2 = __fload_withFB();
    if (!bVar4) {
      if (((uVar2 & 0x7ff00000) != 0) || ((param_2 & 0xfffff) != 0 || param_1 != 0)) {
        fVar5 = extraout_ST0;
        if ((param_2 & 0x80000000) != 0) {
          auStack_e._6_4_ = 0x101ad663;
          fVar5 = (float10)FUN_101ad681();
          fVar5 = -fVar5;
          if (extraout_CL_00 == '\0') {
            uVar1 = 1;
            goto LAB_101ad535;
          }
        }
        log2(fVar5);
        auStack_e._6_4_ = 0x101ad511;
        uVar1 = FUN_101b6730();
        if (DAT_10249c8c != 0) {
          return uVar1;
        }
        uVar1 = FUN_101b6819();
        return uVar1;
      }
      if ((param_4 & 0x7fffffff) == 0 && param_3 == 0) {
        uVar1 = FUN_101b67ce();
        return uVar1;
      }
      auStack_e._6_4_ = 0x101ad61b;
      uVar1 = FUN_101ad681();
      if ((param_4 & 0x80000000) == 0) {
        if ((param_2._3_1_ >> 7 & extraout_CL) == 0) {
          return uVar1;
        }
        uVar1 = FUN_101b67ce();
        return uVar1;
      }
      uVar1 = 2;
      goto LAB_101ad535;
    }
    iVar3 = 0;
    fVar5 = extraout_ST0;
    fVar6 = extraout_ST1;
    in_ST6 = in_ST7;
  }
  if (((param_2 & 0x7ff00000) == 0x7ff00000) && ((param_2 & 0xfffff) != 0 || param_1 != 0)) {
LAB_101ad568:
    fVar5 = (float10)0;
    uVar1 = (ushort)NAN(fVar6) << 8 | (ushort)(fVar6 < fVar5) << 9 | (ushort)(fVar6 != fVar5) << 10
            | (ushort)(fVar6 == fVar5) << 0xe;
    if ((fVar6 == fVar5) == 0) {
      return uVar1;
    }
    return uVar1;
  }
  if (iVar3 != 0) {
    return 0;
  }
  uStack_64 = 0x101ad5c7;
  uStack_6c = in_FPUStatusWord;
  auStack_e = (undefined1  [10])in_ST6;
  iVar3 = FUN_101ba8ba((double)fVar5,(double)fVar6,local_78);
  if (iVar3 == 0) {
    return 0;
  }
  uVar1 = 1;
LAB_101ad535:
  if (DAT_10249c8c != 0) {
    return uVar1;
  }
  auStack_e._6_4_ = 0x101ad552;
  uVar1 = FUN_101b68c0();
  return uVar1;
}

