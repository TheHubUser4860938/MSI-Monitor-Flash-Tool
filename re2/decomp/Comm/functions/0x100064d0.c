// rea decompile_all
// name: WritePortRegBitEx
// address: 0x100064d0
// body: available
// range: 0x100064d0-0x10006531 inclusive
// non_contiguous: false
// provider: Ghidra 12.1.2 (ghidra)
// analysis_profile: b075844f08879296d957518397cd0ddda73db81dce53d00d3f0e702766fc2af6
// limitations: The session serves operations only after Ghidra reports default auto-analysis complete; incomplete analysis does not expose partial results.; The imported Program and temporary project are ephemeral and deleted on close. Annotation operations edit session database metadata; original executable bytes are never written.; Cancelling an active Ghidra request terminates its ephemeral database and discards session annotations. The selected target remains open; the next provider query imports the original artifact again.; Default-space addresses use lowercase 0x-prefixed hexadecimal; other address spaces use <percent-encoded-space>:0x<hex>.; The Ghidra Program references PDB Comm.pdb (GUID c3062acb-498d-45fa-a233-c8b7e401bb13, age (hex) 1, signature unknown, version RSDS); Ghidra reports load state unknown. Original names and types may be missing; an empty name search does not prove a procedure is absent. Use list_procedures and address-based analysis to inspect recovered functions. REA does not admit a caller-selected PDB companion.; This session uses Ghidra 12.1.2. The bridge is verified against 12.1.4; other 12.1.x builds are accepted and the observed version is reported.; Pseudocode is Ghidra decompiler output, not original source and not text-equivalent to Hopper output.; External functions and functions without an analyzable body return null; other decompiler failures remain explicit.
// pseudocode: provider-specific; not original source


void WritePortRegBitEx(undefined4 param_1,undefined4 param_2,byte param_3,byte param_4)

{
  int iVar1;
  uint local_9;
  byte local_5;
  
                    /* 0x64d0  162  WritePortRegBitEx */
  local_9 = local_9 & 0xffffff00;
  local_5 = 0;
  iVar1 = ReadRegEx(param_1,&local_9);
  if (iVar1 == 0) {
    iVar1 = ReadRegEx(param_2,&local_5);
    if (iVar1 == 0) {
      iVar1 = WriteRegEx(param_1,local_9);
      if (iVar1 == 0) {
        WriteRegEx(param_2,local_5 & param_3 | param_4);
      }
    }
  }
  return;
}

