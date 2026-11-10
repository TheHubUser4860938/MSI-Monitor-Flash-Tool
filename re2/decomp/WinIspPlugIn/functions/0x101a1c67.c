// rea decompile_all
// name: FUN_101a1c67
// address: 0x101a1c67
// body: available
// range: 0x101a1c67-0x101a1cf4 inclusive
// non_contiguous: false
// provider: Ghidra 12.1.2 (ghidra)
// analysis_profile: b075844f08879296d957518397cd0ddda73db81dce53d00d3f0e702766fc2af6
// limitations: The session serves operations only after Ghidra reports default auto-analysis complete; incomplete analysis does not expose partial results.; The imported Program and temporary project are ephemeral and deleted on close. Annotation operations edit session database metadata; original executable bytes are never written.; Cancelling an active Ghidra request terminates its ephemeral database and discards session annotations. The selected target remains open; the next provider query imports the original artifact again.; Default-space addresses use lowercase 0x-prefixed hexadecimal; other address spaces use <percent-encoded-space>:0x<hex>.; Ghidra Listing reports a terminal call at 0x101a1cf4 with no resolved callee; its no-return basis is unknown.; The Ghidra Program references PDB WinIspPlugIn.pdb (GUID d9f398c7-6c98-49a8-af25-a0659d5ad2f3, age (hex) 1, signature unknown, version RSDS); Ghidra reports load state unknown. Original names and types may be missing; an empty name search does not prove a procedure is absent. Use list_procedures and address-based analysis to inspect recovered functions. REA does not admit a caller-selected PDB companion.; This session uses Ghidra 12.1.2. The bridge is verified against 12.1.4; other 12.1.x builds are accepted and the observed version is reported.; Pseudocode is Ghidra decompiler output, not original source and not text-equivalent to Hopper output.; External functions and functions without an analyzable body return null; other decompiler failures remain explicit.
// pseudocode: provider-specific; not original source


undefined4 FUN_101a1c67(undefined4 *param_1,undefined4 *param_2)

{
  code *pcVar1;
  int iVar2;
  errno_t eVar3;
  undefined4 uVar4;
  char *local_8;
  
  local_8 = (char *)0x0;
  iVar2 = ___acrt_copy_to_char(param_1 + 9,&local_8);
  if (iVar2 == 0) {
    uVar4 = 0;
  }
  else {
    eVar3 = _strcpy_s((char *)(param_2 + 9),0x104,local_8);
    if (eVar3 != 0) {
      __invoke_watson((wchar_t *)0x0,(wchar_t *)0x0,(wchar_t *)0x0,0,0);
      pcVar1 = (code *)swi(3);
      uVar4 = (*pcVar1)();
      return uVar4;
    }
    FID_conflict__free(local_8);
    *param_2 = *param_1;
    param_2[2] = param_1[2];
    param_2[3] = param_1[3];
    param_2[4] = param_1[4];
    param_2[5] = param_1[5];
    param_2[6] = param_1[6];
    param_2[7] = param_1[7];
    uVar4 = param_1[8];
    param_2[8] = uVar4;
    uVar4 = CONCAT31((int3)((uint)uVar4 >> 8),1);
  }
  return uVar4;
}

