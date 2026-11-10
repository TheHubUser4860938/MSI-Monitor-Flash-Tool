// rea decompile_all
// name: FUN_10021370
// address: 0x10021370
// body: available
// range: 0x10021370-0x1002143d inclusive
// non_contiguous: false
// provider: Ghidra 12.1.2 (ghidra)
// analysis_profile: b075844f08879296d957518397cd0ddda73db81dce53d00d3f0e702766fc2af6
// limitations: The session serves operations only after Ghidra reports default auto-analysis complete; incomplete analysis does not expose partial results.; The imported Program and temporary project are ephemeral and deleted on close. Annotation operations edit session database metadata; original executable bytes are never written.; Cancelling an active Ghidra request terminates its ephemeral database and discards session annotations. The selected target remains open; the next provider query imports the original artifact again.; Default-space addresses use lowercase 0x-prefixed hexadecimal; other address spaces use <percent-encoded-space>:0x<hex>.; The Ghidra Program references PDB WinIspPlugIn.pdb (GUID d9f398c7-6c98-49a8-af25-a0659d5ad2f3, age (hex) 1, signature unknown, version RSDS); Ghidra reports load state unknown. Original names and types may be missing; an empty name search does not prove a procedure is absent. Use list_procedures and address-based analysis to inspect recovered functions. REA does not admit a caller-selected PDB companion.; This session uses Ghidra 12.1.2. The bridge is verified against 12.1.4; other 12.1.x builds are accepted and the observed version is reported.; Pseudocode is Ghidra decompiler output, not original source and not text-equivalent to Hopper output.; External functions and functions without an analyzable body return null; other decompiler failures remain explicit.
// pseudocode: provider-specific; not original source


void FUN_10021370(void)

{
  undefined4 in_ECX;
  int iVar1;
  int *piVar2;
  undefined4 *puVar3;
  int *piVar4;
  int aiStack_9bc [304];
  undefined4 uStack_4fc;
  undefined *puStack_4f8;
  wchar_t *pwStack_4f4;
  int iStack_4f0;
  int local_4dc [308];
  undefined4 local_c;
  uint local_8;
  
  local_8 = DAT_1023dfec ^ (uint)&stack0xfffffffc;
  piVar2 = &DAT_1024b4c4;
  piVar4 = local_4dc;
  local_c = in_ECX;
  for (iVar1 = 0x134; iVar1 != 0; iVar1 = iVar1 + -1) {
    *piVar4 = *piVar2;
    piVar2 = piVar2 + 1;
    piVar4 = piVar4 + 1;
  }
  if (local_4dc[0] == 0) {
LAB_100213d3:
    piVar2 = &DAT_1024b994;
    piVar4 = local_4dc;
    for (iVar1 = 0x134; iVar1 != 0; iVar1 = iVar1 + -1) {
      *piVar4 = *piVar2;
      piVar2 = piVar2 + 1;
      piVar4 = piVar4 + 1;
    }
    if (local_4dc[0] == 0) goto LAB_1002142b;
    puVar3 = &DAT_1024b994;
    piVar2 = aiStack_9bc;
    for (iVar1 = 0x134; iVar1 != 0; iVar1 = iVar1 + -1) {
      *piVar2 = *puVar3;
      puVar3 = puVar3 + 1;
      piVar2 = piVar2 + 1;
    }
    iVar1 = FUN_1003d050(in_ECX);
    if (iVar1 == 0) goto LAB_1002142b;
    pwStack_4f4 = L" Write User Signature Fail!, ErrorCode: 0x%x";
    iStack_4f0 = iVar1;
  }
  else {
    piVar2 = local_4dc;
    piVar4 = aiStack_9bc;
    for (iVar1 = 0x134; iVar1 != 0; iVar1 = iVar1 + -1) {
      *piVar4 = *piVar2;
      piVar2 = piVar2 + 1;
      piVar4 = piVar4 + 1;
    }
    iVar1 = FUN_1003d050(in_ECX);
    in_ECX = local_c;
    if (iVar1 == 0) goto LAB_100213d3;
    pwStack_4f4 = L" Write Key Fail!, ErrorCode: 0x%x";
    iStack_4f0 = iVar1;
  }
  puStack_4f8 = &DAT_1024a13c;
  uStack_4fc = 0x1002141e;
  FUN_10048350();
  iStack_4f0 = 0x1002142b;
  FUN_10016860();
LAB_1002142b:
  __security_check_cookie(local_8 ^ (uint)&stack0xfffffffc);
  return;
}

