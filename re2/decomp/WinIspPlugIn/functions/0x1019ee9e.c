// rea decompile_all
// name: FUN_1019ee9e
// address: 0x1019ee9e
// body: available
// range: 0x1019ee9e-0x1019ef99 inclusive
// non_contiguous: false
// provider: Ghidra 12.1.2 (ghidra)
// analysis_profile: b075844f08879296d957518397cd0ddda73db81dce53d00d3f0e702766fc2af6
// limitations: The session serves operations only after Ghidra reports default auto-analysis complete; incomplete analysis does not expose partial results.; The imported Program and temporary project are ephemeral and deleted on close. Annotation operations edit session database metadata; original executable bytes are never written.; Cancelling an active Ghidra request terminates its ephemeral database and discards session annotations. The selected target remains open; the next provider query imports the original artifact again.; Default-space addresses use lowercase 0x-prefixed hexadecimal; other address spaces use <percent-encoded-space>:0x<hex>.; The Ghidra Program references PDB WinIspPlugIn.pdb (GUID d9f398c7-6c98-49a8-af25-a0659d5ad2f3, age (hex) 1, signature unknown, version RSDS); Ghidra reports load state unknown. Original names and types may be missing; an empty name search does not prove a procedure is absent. Use list_procedures and address-based analysis to inspect recovered functions. REA does not admit a caller-selected PDB companion.; This session uses Ghidra 12.1.2. The bridge is verified against 12.1.4; other 12.1.x builds are accepted and the observed version is reported.; Pseudocode is Ghidra decompiler output, not original source and not text-equivalent to Hopper output.; External functions and functions without an analyzable body return null; other decompiler failures remain explicit.
// pseudocode: provider-specific; not original source


float10 FUN_1019ee9e(double param_1,undefined4 *param_2)

{
  double dVar1;
  int *piVar2;
  undefined4 uVar3;
  int iVar4;
  float10 fVar5;
  undefined4 uVar6;
  undefined4 uVar7;
  
  if (param_2 == (undefined4 *)0x0) {
    piVar2 = __errno();
    *piVar2 = 0x16;
    FUN_1019ab61();
    fVar5 = (float10)0;
  }
  else {
    uVar3 = __ctrlfp(0x133f,0xffff);
    uVar6 = SUB84(param_1,0);
    uVar7 = (undefined4)((ulonglong)param_1 >> 0x20);
    if ((param_1._6_2_ & 0x7ff0) == 0x7ff0) {
      *param_2 = 0xffffffff;
      iVar4 = __sptype(uVar6,uVar7);
      if (((iVar4 == 1) || (iVar4 == 2)) || (iVar4 == 3)) {
        __ctrlfp(uVar3,0xffff);
        return (float10)param_1;
      }
      dVar1 = param_1 + 1.0;
      uVar6 = 8;
    }
    else {
      if ((param_1 != 0.0) || (iVar4 = FUN_101b3c72(uVar6,uVar7), iVar4 == 0)) {
        fVar5 = (float10)FUN_101b4438(uVar6,uVar7,param_2);
        __ctrlfp(uVar3,0xffff);
        return (float10)(double)fVar5;
      }
      *param_2 = 0;
      dVar1 = -0.0;
      uVar6 = 0;
    }
    fVar5 = (float10)__except1(uVar6,0x17,param_1,dVar1,uVar3);
  }
  return fVar5;
}

