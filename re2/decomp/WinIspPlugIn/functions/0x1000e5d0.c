// rea decompile_all
// name: FUN_1000e5d0
// address: 0x1000e5d0
// body: available
// range: 0x1000e5d0-0x1000e640 inclusive
// non_contiguous: false
// provider: Ghidra 12.1.2 (ghidra)
// analysis_profile: b075844f08879296d957518397cd0ddda73db81dce53d00d3f0e702766fc2af6
// limitations: The session serves operations only after Ghidra reports default auto-analysis complete; incomplete analysis does not expose partial results.; The imported Program and temporary project are ephemeral and deleted on close. Annotation operations edit session database metadata; original executable bytes are never written.; Cancelling an active Ghidra request terminates its ephemeral database and discards session annotations. The selected target remains open; the next provider query imports the original artifact again.; Default-space addresses use lowercase 0x-prefixed hexadecimal; other address spaces use <percent-encoded-space>:0x<hex>.; The Ghidra Program references PDB WinIspPlugIn.pdb (GUID d9f398c7-6c98-49a8-af25-a0659d5ad2f3, age (hex) 1, signature unknown, version RSDS); Ghidra reports load state unknown. Original names and types may be missing; an empty name search does not prove a procedure is absent. Use list_procedures and address-based analysis to inspect recovered functions. REA does not admit a caller-selected PDB companion.; This session uses Ghidra 12.1.2. The bridge is verified against 12.1.4; other 12.1.x builds are accepted and the observed version is reported.; Pseudocode is Ghidra decompiler output, not original source and not text-equivalent to Hopper output.; External functions and functions without an analyzable body return null; other decompiler failures remain explicit.
// pseudocode: provider-specific; not original source


undefined4 FUN_1000e5d0(char *param_1)

{
  char cVar1;
  char *pcVar2;
  char *pcVar3;
  undefined4 uVar4;
  uint in_stack_00000014;
  uint in_stack_00000018;
  
  if (((in_stack_00000014 & 1) == 0) || (in_stack_00000014 != 0)) {
    pcVar3 = (char *)&param_1;
    if (0xf < in_stack_00000018) {
      pcVar3 = param_1;
    }
    while( true ) {
      pcVar2 = (char *)&param_1;
      if (0xf < in_stack_00000018) {
        pcVar2 = param_1;
      }
      if (pcVar3 == pcVar2 + in_stack_00000014) {
        uVar4 = 1;
        goto LAB_1000e626;
      }
      cVar1 = *pcVar3;
      if ((((cVar1 < '0') || ('9' < cVar1)) && ((cVar1 < 'A' || ('F' < cVar1)))) &&
         ((cVar1 < 'a' || ('f' < cVar1)))) break;
      pcVar3 = pcVar3 + 1;
    }
  }
  uVar4 = 0;
LAB_1000e626:
  if (0xf < in_stack_00000018) {
    FUN_1000b630(param_1,in_stack_00000018 + 1);
  }
  return uVar4;
}

