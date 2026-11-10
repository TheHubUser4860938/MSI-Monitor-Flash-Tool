// rea decompile_all
// name: FUN_100132d0
// address: 0x100132d0
// body: available
// range: 0x100132d0-0x10013376 inclusive
// non_contiguous: false
// provider: Ghidra 12.1.2 (ghidra)
// analysis_profile: b075844f08879296d957518397cd0ddda73db81dce53d00d3f0e702766fc2af6
// limitations: The session serves operations only after Ghidra reports default auto-analysis complete; incomplete analysis does not expose partial results.; The imported Program and temporary project are ephemeral and deleted on close. Annotation operations edit session database metadata; original executable bytes are never written.; Cancelling an active Ghidra request terminates its ephemeral database and discards session annotations. The selected target remains open; the next provider query imports the original artifact again.; Default-space addresses use lowercase 0x-prefixed hexadecimal; other address spaces use <percent-encoded-space>:0x<hex>.; The Ghidra Program references PDB WinIspPlugIn.pdb (GUID d9f398c7-6c98-49a8-af25-a0659d5ad2f3, age (hex) 1, signature unknown, version RSDS); Ghidra reports load state unknown. Original names and types may be missing; an empty name search does not prove a procedure is absent. Use list_procedures and address-based analysis to inspect recovered functions. REA does not admit a caller-selected PDB companion.; This session uses Ghidra 12.1.2. The bridge is verified against 12.1.4; other 12.1.x builds are accepted and the observed version is reported.; Pseudocode is Ghidra decompiler output, not original source and not text-equivalent to Hopper output.; External functions and functions without an analyzable body return null; other decompiler failures remain explicit.
// pseudocode: provider-specific; not original source


void FUN_100132d0(int param_1)

{
  undefined4 *puVar1;
  undefined4 *in_ECX;
  void *local_10;
  undefined1 *puStack_c;
  undefined4 local_8;
  
  local_8 = 0xffffffff;
  puStack_c = &LAB_101c1788;
  local_10 = ExceptionList;
  ExceptionList = &local_10;
  puVar1 = in_ECX + 1;
  in_ECX[6] = 7;
  in_ECX[5] = 0;
  if (7 < (uint)in_ECX[6]) {
    puVar1 = (undefined4 *)*puVar1;
  }
  *(undefined2 *)puVar1 = 0;
  FUN_10045640(-(uint)(param_1 != 0) & param_1 + 4U);
  puVar1 = in_ECX + 7;
  *in_ECX = CCpRsString::vftable;
  in_ECX[0xc] = 0xf;
  in_ECX[0xb] = 0;
  if (0xf < (uint)in_ECX[0xc]) {
    puVar1 = (undefined4 *)*puVar1;
  }
  *(undefined1 *)puVar1 = 0;
  local_8 = 0;
  FUN_10012800(param_1 + 0x34);
  ExceptionList = local_10;
  return;
}

