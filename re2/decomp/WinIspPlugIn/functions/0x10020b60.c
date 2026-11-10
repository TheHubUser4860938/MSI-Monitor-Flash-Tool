// rea decompile_all
// name: FUN_10020b60
// address: 0x10020b60
// body: available
// range: 0x10020b60-0x10020d6b inclusive
// non_contiguous: false
// provider: Ghidra 12.1.2 (ghidra)
// analysis_profile: b075844f08879296d957518397cd0ddda73db81dce53d00d3f0e702766fc2af6
// limitations: The session serves operations only after Ghidra reports default auto-analysis complete; incomplete analysis does not expose partial results.; The imported Program and temporary project are ephemeral and deleted on close. Annotation operations edit session database metadata; original executable bytes are never written.; Cancelling an active Ghidra request terminates its ephemeral database and discards session annotations. The selected target remains open; the next provider query imports the original artifact again.; Default-space addresses use lowercase 0x-prefixed hexadecimal; other address spaces use <percent-encoded-space>:0x<hex>.; The Ghidra Program references PDB WinIspPlugIn.pdb (GUID d9f398c7-6c98-49a8-af25-a0659d5ad2f3, age (hex) 1, signature unknown, version RSDS); Ghidra reports load state unknown. Original names and types may be missing; an empty name search does not prove a procedure is absent. Use list_procedures and address-based analysis to inspect recovered functions. REA does not admit a caller-selected PDB companion.; This session uses Ghidra 12.1.2. The bridge is verified against 12.1.4; other 12.1.x builds are accepted and the observed version is reported.; Pseudocode is Ghidra decompiler output, not original source and not text-equivalent to Hopper output.; External functions and functions without an analyzable body return null; other decompiler failures remain explicit.
// pseudocode: provider-specific; not original source


int FUN_10020b60(undefined4 param_1)

{
  int iVar1;
  int in_EDX;
  int *piVar2;
  int *piVar3;
  wchar_t *pwVar4;
  int local_500 [309];
  int local_2c [4];
  undefined4 *local_1c;
  undefined4 local_18;
  void *local_10;
  undefined1 *puStack_c;
  undefined4 local_8;
  
  puStack_c = &LAB_101c2090;
  local_10 = ExceptionList;
  ExceptionList = &local_10;
  local_2c[0] = 0;
  local_2c[1] = 0;
  local_2c[2] = 0;
  local_8 = 0;
  local_1c = (undefined4 *)0x0;
  local_18 = 0;
  local_1c = (undefined4 *)FUN_1000c2b0(DAT_1023dfec ^ (uint)&stack0xfffffffc);
  local_8 = CONCAT31(local_8._1_3_,1);
  FUN_1002bdf0(&DAT_1024a648);
  FUN_1000b550();
  FUN_1000c880(&DAT_1024a2cc,local_2c[3]);
  if ((DAT_1024a2f0 == 1) && ((in_EDX == 2 || ((in_EDX == 1 && (DAT_1024a2dc == 4)))))) {
    piVar2 = &DAT_1024b4c4;
    piVar3 = local_500;
    for (iVar1 = 0x134; iVar1 != 0; iVar1 = iVar1 + -1) {
      *piVar3 = *piVar2;
      piVar2 = piVar2 + 1;
      piVar3 = piVar3 + 1;
    }
    if (local_500[0] != 0) {
      iVar1 = FUN_1001e070(local_2c,&local_1c);
      if (iVar1 == 0) {
        iVar1 = FUN_1001e380(param_1);
        if (iVar1 != 0) goto LAB_10020d18;
        piVar2 = local_500;
        piVar3 = &DAT_1024b4c4;
        for (iVar1 = 0x134; iVar1 != 0; iVar1 = iVar1 + -1) {
          *piVar3 = *piVar2;
          piVar2 = piVar2 + 1;
          piVar3 = piVar3 + 1;
        }
        goto LAB_10020c82;
      }
      pwVar4 = L"Get KeyData EraseFlagType Fail!, ErrorCode: 0x%x";
LAB_10020cc2:
      FUN_10048350(&DAT_1024a13c,pwVar4,iVar1);
      FUN_1003fc00();
      FUN_10016860();
      goto LAB_10020d18;
    }
LAB_10020c82:
    piVar2 = &DAT_1024b994;
    piVar3 = local_500;
    for (iVar1 = 0x134; iVar1 != 0; iVar1 = iVar1 + -1) {
      *piVar3 = *piVar2;
      piVar2 = piVar2 + 1;
      piVar3 = piVar3 + 1;
    }
    if (local_500[0] != 0) {
      iVar1 = FUN_1001e070(local_2c,&local_1c);
      if (iVar1 != 0) {
        pwVar4 = L"GetSignatureDataEraseFlagType Fail!, ErrorCode: 0x%x";
        goto LAB_10020cc2;
      }
      iVar1 = FUN_1001e380(param_1);
      if (iVar1 != 0) goto LAB_10020d18;
      piVar2 = local_500;
      piVar3 = &DAT_1024b994;
      for (iVar1 = 0x134; iVar1 != 0; iVar1 = iVar1 + -1) {
        *piVar3 = *piVar2;
        piVar2 = piVar2 + 1;
        piVar3 = piVar3 + 1;
      }
    }
  }
  iVar1 = 0;
LAB_10020d18:
  local_2c[3] = *local_1c;
  FUN_1000b550();
  FID_conflict__free(local_1c);
  if (local_2c[0] != 0) {
    FUN_1002c430(local_2c[0],(local_2c[2] - local_2c[0]) / 0x18);
  }
  ExceptionList = local_10;
  return iVar1;
}

