// rea decompile_all
// name: FUN_1000e7a0
// address: 0x1000e7a0
// body: available
// range: 0x1000e7a0-0x1000e8bf inclusive
// non_contiguous: false
// provider: Ghidra 12.1.2 (ghidra)
// analysis_profile: b075844f08879296d957518397cd0ddda73db81dce53d00d3f0e702766fc2af6
// limitations: The session serves operations only after Ghidra reports default auto-analysis complete; incomplete analysis does not expose partial results.; The imported Program and temporary project are ephemeral and deleted on close. Annotation operations edit session database metadata; original executable bytes are never written.; Cancelling an active Ghidra request terminates its ephemeral database and discards session annotations. The selected target remains open; the next provider query imports the original artifact again.; Default-space addresses use lowercase 0x-prefixed hexadecimal; other address spaces use <percent-encoded-space>:0x<hex>.; The Ghidra Program references PDB WinIspPlugIn.pdb (GUID d9f398c7-6c98-49a8-af25-a0659d5ad2f3, age (hex) 1, signature unknown, version RSDS); Ghidra reports load state unknown. Original names and types may be missing; an empty name search does not prove a procedure is absent. Use list_procedures and address-based analysis to inspect recovered functions. REA does not admit a caller-selected PDB companion.; This session uses Ghidra 12.1.2. The bridge is verified against 12.1.4; other 12.1.x builds are accepted and the observed version is reported.; Pseudocode is Ghidra decompiler output, not original source and not text-equivalent to Hopper output.; External functions and functions without an analyzable body return null; other decompiler failures remain explicit.
// pseudocode: provider-specific; not original source


void FUN_1000e7a0(undefined4 *param_1,int param_2)

{
  char cVar1;
  uint uVar2;
  int iVar3;
  char *pcVar4;
  uint uVar5;
  uint local_38 [4];
  undefined4 local_28;
  uint local_24;
  char local_20;
  undefined4 local_1f;
  undefined1 local_1b;
  uint local_18;
  void *local_10;
  undefined1 *puStack_c;
  undefined4 local_8;
  
  puStack_c = &LAB_101c13d1;
  local_10 = ExceptionList;
  uVar2 = DAT_1023dfec ^ (uint)&stack0xfffffffc;
  ExceptionList = &local_10;
  local_24 = 0xf;
  local_28 = 0;
  local_38[0] = local_38[0] & 0xffffff00;
  local_8 = 1;
  param_1[4] = 0;
  param_1[5] = 0;
  param_1[5] = 0xf;
  param_1[4] = 0;
  if (0xf < (uint)param_1[5]) {
    param_1 = (undefined4 *)*param_1;
  }
  *(undefined1 *)param_1 = 0;
  uVar5 = 0;
  local_20 = '\0';
  local_1f = 0;
  local_1b = 0;
  local_18 = uVar2;
  do {
    FUN_100134e0(&local_20,"%02x,",*(undefined1 *)(param_2 + uVar5),uVar2);
    if (local_20 == '\0') {
      iVar3 = 0;
    }
    else {
      pcVar4 = &local_20;
      do {
        cVar1 = *pcVar4;
        pcVar4 = pcVar4 + 1;
      } while (cVar1 != '\0');
      iVar3 = (int)pcVar4 - (int)&local_1f;
    }
    FUN_1000aa60(&local_20,iVar3);
    FUN_1000ae70(local_38,0,0xffffffff);
    uVar5 = uVar5 + 1;
  } while (uVar5 < 8);
  if (0xf < local_24) {
    FUN_1000b630(local_38[0],local_24 + 1);
  }
  ExceptionList = local_10;
  __security_check_cookie(local_18 ^ (uint)&stack0xfffffffc);
  return;
}

