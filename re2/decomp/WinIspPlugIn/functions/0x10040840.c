// rea decompile_all
// name: FUN_10040840
// address: 0x10040840
// body: available
// range: 0x10040840-0x100408aa inclusive
// non_contiguous: false
// provider: Ghidra 12.1.2 (ghidra)
// analysis_profile: b075844f08879296d957518397cd0ddda73db81dce53d00d3f0e702766fc2af6
// limitations: The session serves operations only after Ghidra reports default auto-analysis complete; incomplete analysis does not expose partial results.; The imported Program and temporary project are ephemeral and deleted on close. Annotation operations edit session database metadata; original executable bytes are never written.; Cancelling an active Ghidra request terminates its ephemeral database and discards session annotations. The selected target remains open; the next provider query imports the original artifact again.; Default-space addresses use lowercase 0x-prefixed hexadecimal; other address spaces use <percent-encoded-space>:0x<hex>.; The Ghidra Program references PDB WinIspPlugIn.pdb (GUID d9f398c7-6c98-49a8-af25-a0659d5ad2f3, age (hex) 1, signature unknown, version RSDS); Ghidra reports load state unknown. Original names and types may be missing; an empty name search does not prove a procedure is absent. Use list_procedures and address-based analysis to inspect recovered functions. REA does not admit a caller-selected PDB companion.; This session uses Ghidra 12.1.2. The bridge is verified against 12.1.4; other 12.1.x builds are accepted and the observed version is reported.; Pseudocode is Ghidra decompiler output, not original source and not text-equivalent to Hopper output.; External functions and functions without an analyzable body return null; other decompiler failures remain explicit.
// pseudocode: provider-specific; not original source


undefined4 FUN_10040840(undefined4 param_1)

{
  int iVar1;
  undefined4 in_ECX;
  undefined4 extraout_ECX;
  undefined4 extraout_ECX_00;
  undefined4 uVar2;
  uint in_stack_00000018;
  undefined4 local_8;
  
  local_8 = in_ECX;
  iVar1 = FUN_10045730(&DAT_1021a6a0,in_ECX,2);
  if (iVar1 != 1) {
    iVar1 = FUN_10045730(&DAT_1021a6a4,extraout_ECX,3);
    if (iVar1 != 1) {
      local_8 = CONCAT31(local_8._1_3_,0x2f);
      iVar1 = FUN_10045730(&local_8,extraout_ECX_00,1);
      if (iVar1 != 0) {
        uVar2 = 0;
        goto LAB_1004088f;
      }
    }
  }
  uVar2 = 1;
LAB_1004088f:
  if (0xf < in_stack_00000018) {
    FUN_1000b630(param_1,in_stack_00000018 + 1);
  }
  return uVar2;
}

