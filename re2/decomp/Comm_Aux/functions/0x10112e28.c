// rea decompile_all
// name: FUN_10112e28
// address: 0x10112e28
// body: available
// range: 0x10112e28-0x10112eec inclusive
// non_contiguous: false
// provider: Ghidra 12.1.2 (ghidra)
// analysis_profile: b075844f08879296d957518397cd0ddda73db81dce53d00d3f0e702766fc2af6
// limitations: The session serves operations only after Ghidra reports default auto-analysis complete; incomplete analysis does not expose partial results.; The imported Program and temporary project are ephemeral and deleted on close. Annotation operations edit session database metadata; original executable bytes are never written.; Cancelling an active Ghidra request terminates its ephemeral database and discards session annotations. The selected target remains open; the next provider query imports the original artifact again.; Default-space addresses use lowercase 0x-prefixed hexadecimal; other address spaces use <percent-encoded-space>:0x<hex>.; The Ghidra Program references PDB Comm_Aux.pdb (GUID ba7920cc-daa3-4461-a102-1f8f66c67a2a, age (hex) 1, signature unknown, version RSDS); Ghidra reports load state unknown. Original names and types may be missing; an empty name search does not prove a procedure is absent. Use list_procedures and address-based analysis to inspect recovered functions. REA does not admit a caller-selected PDB companion.; This session uses Ghidra 12.1.2. The bridge is verified against 12.1.4; other 12.1.x builds are accepted and the observed version is reported.; Pseudocode is Ghidra decompiler output, not original source and not text-equivalent to Hopper output.; External functions and functions without an analyzable body return null; other decompiler failures remain explicit.
// pseudocode: provider-specific; not original source


void FUN_10112e28(CArchive *param_1)

{
  code *pcVar1;
  CMFCToolBarButton *in_ECX;
  CMFCToolBarButton *local_8;
  
  local_8 = in_ECX;
  CMFCToolBarButton::Serialize(in_ECX,param_1);
  if (((byte)param_1[0x18] & 1) == 0) {
    FUN_1004da8f(*(undefined4 *)(in_ECX + 0xbc));
    FUN_1004da8f(*(undefined4 *)(in_ECX + 0xb0));
    FUN_1004da8f(*(undefined4 *)(in_ECX + 0xc0));
  }
  else {
    while (*(int *)(in_ECX + 0x7c) != 0) {
      local_8 = (CMFCToolBarButton *)FUN_10069e9a();
      if (local_8 != (CMFCToolBarButton *)0x0) {
        pcVar1 = *(code **)(*(int *)local_8 + 4);
        guard_check_icall(1);
        (*pcVar1)();
      }
    }
    FUN_1005b6e3(&local_8);
    pcVar1 = *(code **)(*(int *)in_ECX + 0xf8);
    guard_check_icall(local_8);
    (*pcVar1)();
    FUN_1005b6e3(in_ECX + 0xb0);
    FUN_1005b6e3(in_ECX + 0xc0);
  }
  pcVar1 = *(code **)(*(int *)(in_ECX + 0x70) + 8);
  guard_check_icall(param_1);
  (*pcVar1)();
  return;
}

