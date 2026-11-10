// rea decompile_all
// name: FUN_100339f0
// address: 0x100339f0
// body: available
// range: 0x100339f0-0x10033aab inclusive
// non_contiguous: false
// provider: Ghidra 12.1.2 (ghidra)
// analysis_profile: b075844f08879296d957518397cd0ddda73db81dce53d00d3f0e702766fc2af6
// limitations: The session serves operations only after Ghidra reports default auto-analysis complete; incomplete analysis does not expose partial results.; The imported Program and temporary project are ephemeral and deleted on close. Annotation operations edit session database metadata; original executable bytes are never written.; Cancelling an active Ghidra request terminates its ephemeral database and discards session annotations. The selected target remains open; the next provider query imports the original artifact again.; Default-space addresses use lowercase 0x-prefixed hexadecimal; other address spaces use <percent-encoded-space>:0x<hex>.; The Ghidra Program references PDB WinIspPlugIn.pdb (GUID d9f398c7-6c98-49a8-af25-a0659d5ad2f3, age (hex) 1, signature unknown, version RSDS); Ghidra reports load state unknown. Original names and types may be missing; an empty name search does not prove a procedure is absent. Use list_procedures and address-based analysis to inspect recovered functions. REA does not admit a caller-selected PDB companion.; This session uses Ghidra 12.1.2. The bridge is verified against 12.1.4; other 12.1.x builds are accepted and the observed version is reported.; Pseudocode is Ghidra decompiler output, not original source and not text-equivalent to Hopper output.; External functions and functions without an analyzable body return null; other decompiler failures remain explicit.
// pseudocode: provider-specific; not original source


undefined4 * FUN_100339f0(undefined4 *param_1)

{
  undefined4 *puVar1;
  int in_ECX;
  int in_EDX;
  void *local_10;
  undefined1 *puStack_c;
  undefined1 local_8;
  undefined3 uStack_7;
  
  puStack_c = &LAB_101c2f51;
  local_10 = ExceptionList;
  ExceptionList = &local_10;
  uStack_7 = 0;
  for (; in_ECX != in_EDX; in_ECX = in_ECX + 0x34) {
    local_8 = 1;
    if (param_1 != (undefined4 *)0x0) {
      param_1[6] = 7;
      param_1[5] = 0;
      if ((uint)param_1[6] < 8) {
        puVar1 = param_1 + 1;
      }
      else {
        puVar1 = (undefined4 *)param_1[1];
      }
      *(undefined2 *)puVar1 = 0;
      FUN_10046260(-(uint)(in_ECX != 0) & in_ECX + 4U,0,0xffffffff);
      puVar1 = param_1 + 7;
      *param_1 = CCpRsString::vftable;
      param_1[0xc] = 0xf;
      param_1[0xb] = 0;
      if (0xf < (uint)param_1[0xc]) {
        puVar1 = (undefined4 *)*puVar1;
      }
      *(undefined1 *)puVar1 = 0;
    }
    param_1 = param_1 + 0xd;
  }
  ExceptionList = local_10;
  return param_1;
}

