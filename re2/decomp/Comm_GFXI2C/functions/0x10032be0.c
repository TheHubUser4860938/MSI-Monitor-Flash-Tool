// rea decompile_all
// name: FUN_10032be0
// address: 0x10032be0
// body: available
// range: 0x10032be0-0x10032d38 inclusive
// non_contiguous: false
// provider: Ghidra 12.1.2 (ghidra)
// analysis_profile: b075844f08879296d957518397cd0ddda73db81dce53d00d3f0e702766fc2af6
// limitations: The session serves operations only after Ghidra reports default auto-analysis complete; incomplete analysis does not expose partial results.; The imported Program and temporary project are ephemeral and deleted on close. Annotation operations edit session database metadata; original executable bytes are never written.; Cancelling an active Ghidra request terminates its ephemeral database and discards session annotations. The selected target remains open; the next provider query imports the original artifact again.; Default-space addresses use lowercase 0x-prefixed hexadecimal; other address spaces use <percent-encoded-space>:0x<hex>.; The Ghidra Program references PDB Comm_GFXI2C.pdb (GUID d304cc6d-b3ee-4851-b468-0ab5e385ca92, age (hex) 1, signature unknown, version RSDS); Ghidra reports load state unknown. Original names and types may be missing; an empty name search does not prove a procedure is absent. Use list_procedures and address-based analysis to inspect recovered functions. REA does not admit a caller-selected PDB companion.; This session uses Ghidra 12.1.2. The bridge is verified against 12.1.4; other 12.1.x builds are accepted and the observed version is reported.; Pseudocode is Ghidra decompiler output, not original source and not text-equivalent to Hopper output.; External functions and functions without an analyzable body return null; other decompiler failures remain explicit.
// pseudocode: provider-specific; not original source


/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

int __cdecl FUN_10032be0(undefined4 param_1,undefined4 param_2,undefined4 param_3)

{
  int iVar1;
  undefined4 local_14;
  undefined4 local_10;
  int local_c;
  code *local_8;
  
  local_c = 0;
  iVar1 = FUN_10007250(&local_c);
  if ((iVar1 == 0) || (iVar1 == -0xe)) {
    if (iVar1 == -0xe) {
      DAT_10066a20 = (code *)0x0;
    }
    if ((DAT_10066a20 != (code *)0x0) && (DAT_10066a24 != _DAT_10065a44)) {
      DAT_10066a20 = (code *)0x0;
    }
    if (((DAT_10066a20 == (code *)0x0) && (local_c != 0)) && (DAT_10065a00 != (code *)0x0)) {
      DAT_10066a20 = (code *)(*DAT_10065a00)(0x2afd7dc7);
      DAT_10066a24 = _DAT_10065a44;
    }
    if (DAT_10066a20 == (code *)0x0) {
      DAT_10065a34 = DAT_10065a34 + -1;
      iVar1 = -3;
    }
    else {
      local_8 = DAT_10066a20;
      local_14 = 0;
      local_10 = 0;
      if (DAT_10065a08 != (code *)0x0) {
        (*DAT_10065a08)(0x2afd7dc7,&local_14);
      }
      iVar1 = (*local_8)(param_1,param_2,param_3);
      if (DAT_10065a0c != (code *)0x0) {
        (*DAT_10065a0c)(0x2afd7dc7,local_14,local_10,iVar1);
      }
      DAT_10065a34 = DAT_10065a34 + -1;
    }
  }
  return iVar1;
}

