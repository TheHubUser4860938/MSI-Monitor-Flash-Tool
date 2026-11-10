// rea decompile_all
// name: FUN_0052f4d5
// address: 0x52f4d5
// body: available
// range: 0x52f4d5-0x52f5b3 inclusive
// non_contiguous: false
// provider: Ghidra 12.1.2 (ghidra)
// analysis_profile: ac6d50be2cdf54f7005df47d1ed7e7ef55dee595681eb1b7c2e0b00d70cd697d
// limitations: The session serves operations only after Ghidra reports default auto-analysis complete; incomplete analysis does not expose partial results.; The imported Program and temporary project are ephemeral and deleted on close. Annotation operations edit session database metadata; original executable bytes are never written.; Cancelling an active Ghidra request terminates its ephemeral database and discards session annotations. The selected target remains open; the next provider query imports the original artifact again.; Default-space addresses use lowercase 0x-prefixed hexadecimal; other address spaces use <percent-encoded-space>:0x<hex>.; The Ghidra Program references PDB ISPToolForMsi.pdb (GUID b8f2ac8f-1d6f-438d-800f-ed4a14426ac6, age (hex) 1, signature unknown, version RSDS); Ghidra reports load state unknown. Original names and types may be missing; an empty name search does not prove a procedure is absent. Use list_procedures and address-based analysis to inspect recovered functions. REA does not admit a caller-selected PDB companion.; This session uses Ghidra 12.1.2. The bridge is verified against 12.1.4; other 12.1.x builds are accepted and the observed version is reported.; Pseudocode is Ghidra decompiler output, not original source and not text-equivalent to Hopper output.; External functions and functions without an analyzable body return null; other decompiler failures remain explicit.
// pseudocode: provider-specific; not original source


void FUN_0052f4d5(undefined4 *param_1,undefined4 param_2)

{
  double dVar1;
  int *piVar2;
  code *pcVar3;
  int iVar4;
  undefined4 *puVar5;
  AFX_GLOBAL_DATA *pAVar6;
  int in_ECX;
  undefined4 uVar7;
  undefined1 local_14 [4];
  int local_10;
  int local_c;
  int local_8;
  
  local_8 = 4;
  local_c = 0;
  if (0 < *(int *)(in_ECX + 0x114)) {
    do {
      puVar5 = (undefined4 *)FUN_004ab4cd(local_c);
      piVar2 = (int *)*puVar5;
      pcVar3 = *(code **)(*piVar2 + 0x180);
      guard_check_icall(param_2);
      (*pcVar3)();
      pcVar3 = *(code **)(*piVar2 + 0xf4);
      guard_check_icall(local_14,param_2);
      (*pcVar3)();
      local_8 = local_8 + local_10 + 8;
      local_c = local_c + 1;
    } while (local_c < *(int *)(in_ECX + 0x114));
  }
  iVar4 = local_8;
  pAVar6 = GetGlobalData();
  if (*(int *)(pAVar6 + 0x1e8) == 0) {
    dVar1 = 1.0;
  }
  else {
    dVar1 = *(double *)(pAVar6 + 0x1e0);
  }
  if (dVar1 == 1.0) {
    uVar7 = 300;
  }
  else {
    GetGlobalData();
    uVar7 = FUN_0055bce0();
  }
  param_1[1] = iVar4;
  *param_1 = uVar7;
  return;
}

