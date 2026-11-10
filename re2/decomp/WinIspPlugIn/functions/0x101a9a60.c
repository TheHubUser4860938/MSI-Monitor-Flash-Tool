// rea decompile_all
// name: FUN_101a9a60
// address: 0x101a9a60
// body: available
// range: 0x101a9a60-0x101a9b5c inclusive
// range: 0x101b6be4-0x101b6c9c inclusive
// non_contiguous: true
// provider: Ghidra 12.1.2 (ghidra)
// analysis_profile: b075844f08879296d957518397cd0ddda73db81dce53d00d3f0e702766fc2af6
// limitations: The session serves operations only after Ghidra reports default auto-analysis complete; incomplete analysis does not expose partial results.; The imported Program and temporary project are ephemeral and deleted on close. Annotation operations edit session database metadata; original executable bytes are never written.; Cancelling an active Ghidra request terminates its ephemeral database and discards session annotations. The selected target remains open; the next provider query imports the original artifact again.; Default-space addresses use lowercase 0x-prefixed hexadecimal; other address spaces use <percent-encoded-space>:0x<hex>.; The Ghidra Program references PDB WinIspPlugIn.pdb (GUID d9f398c7-6c98-49a8-af25-a0659d5ad2f3, age (hex) 1, signature unknown, version RSDS); Ghidra reports load state unknown. Original names and types may be missing; an empty name search does not prove a procedure is absent. Use list_procedures and address-based analysis to inspect recovered functions. REA does not admit a caller-selected PDB companion.; This session uses Ghidra 12.1.2. The bridge is verified against 12.1.4; other 12.1.x builds are accepted and the observed version is reported.; Pseudocode is Ghidra decompiler output, not original source and not text-equivalent to Hopper output.; External functions and functions without an analyzable body return null; other decompiler failures remain explicit.
// pseudocode: provider-specific; not original source


/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

float10 FUN_101a9a60(double param_1)

{
  uint uVar1;
  uint uVar2;
  int iVar3;
  ushort in_FPUControlWord;
  float10 fVar4;
  double dVar5;
  ulonglong uVar6;
  undefined4 uVar7;
  
  uVar1 = (uint)((ulonglong)param_1 >> 0x20);
  if ((DAT_1024efd0 == 0) || ((MXCSR & 0x7f80) != 0x1f80 || (in_FPUControlWord & 0x7f) != 0x7f)) {
    uVar2 = __ctrlfp(0x173f,0xffff);
    if ((param_1._6_2_ & 0x7ff0) == 0x7ff0) {
      iVar3 = __sptype();
      if (iVar3 - 1U < 3) {
        __ctrlfp(uVar2,0xffff);
        return (float10)param_1;
      }
      dVar5 = param_1 + 1.0;
      uVar7 = 8;
    }
    else {
      fVar4 = (float10)FUN_101be9aa(SUB84(param_1,0),uVar1);
      if (((float10)param_1 == fVar4) || ((uVar2 & 0x20) != 0)) {
        __ctrlfp(uVar2,0xffff);
        return (float10)(double)fVar4;
      }
      dVar5 = (double)fVar4;
      uVar7 = 0x10;
    }
    fVar4 = (float10)__except1(uVar7,0xb,param_1,dVar5,uVar2);
                    /* WARNING: Read-only address (ram,0x10204f60) is written */
    return fVar4;
  }
  uVar2 = uVar1 >> 0x14;
  uVar6 = (ulonglong)(0x433 - (uVar1 >> 0x14 & 0x7ff));
  if ((uVar2 & 0x800) == 0) {
    if (uVar2 < 0x3ff) {
      return (float10)0;
    }
    if (uVar2 < 0x433) {
      return (float10)(double)(((ulonglong)param_1 >> uVar6) << uVar6);
    }
  }
  else {
    dVar5 = (double)(((ulonglong)param_1 >> uVar6) << uVar6);
    if (!NAN(param_1)) {
      if (uVar2 < 0xbff) {
        return (float10)(double)((-(ulonglong)(param_1 < -0.0) | (ulonglong)DAT_10204f60) &
                                0xbff0000000000000);
      }
      if (uVar2 < 0xc33) {
        return (float10)(dVar5 - (double)(-(ulonglong)(param_1 < dVar5) & 0x3ff0000000000000));
      }
    }
  }
  return (float10)param_1;
}

