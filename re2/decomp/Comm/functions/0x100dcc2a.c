// rea decompile_all
// name: FUN_100dcc2a
// address: 0x100dcc2a
// body: available
// range: 0x100dcc2a-0x100dccee inclusive
// non_contiguous: false
// provider: Ghidra 12.1.2 (ghidra)
// analysis_profile: b075844f08879296d957518397cd0ddda73db81dce53d00d3f0e702766fc2af6
// limitations: The session serves operations only after Ghidra reports default auto-analysis complete; incomplete analysis does not expose partial results.; The imported Program and temporary project are ephemeral and deleted on close. Annotation operations edit session database metadata; original executable bytes are never written.; Cancelling an active Ghidra request terminates its ephemeral database and discards session annotations. The selected target remains open; the next provider query imports the original artifact again.; Default-space addresses use lowercase 0x-prefixed hexadecimal; other address spaces use <percent-encoded-space>:0x<hex>.; The Ghidra Program references PDB Comm.pdb (GUID c3062acb-498d-45fa-a233-c8b7e401bb13, age (hex) 1, signature unknown, version RSDS); Ghidra reports load state unknown. Original names and types may be missing; an empty name search does not prove a procedure is absent. Use list_procedures and address-based analysis to inspect recovered functions. REA does not admit a caller-selected PDB companion.; This session uses Ghidra 12.1.2. The bridge is verified against 12.1.4; other 12.1.x builds are accepted and the observed version is reported.; Pseudocode is Ghidra decompiler output, not original source and not text-equivalent to Hopper output.; External functions and functions without an analyzable body return null; other decompiler failures remain explicit.
// pseudocode: provider-specific; not original source


void FUN_100dcc2a(CArchive *param_1)

{
  code *pcVar1;
  CMFCToolBarButton *in_ECX;
  CMFCToolBarButton *local_8;
  
  local_8 = in_ECX;
  CMFCToolBarButton::Serialize(in_ECX,param_1);
  if (((byte)param_1[0x18] & 1) == 0) {
    FUN_1001b086(*(undefined4 *)(in_ECX + 0xbc));
    FUN_1001b086(*(undefined4 *)(in_ECX + 0xb0));
    FUN_1001b086(*(undefined4 *)(in_ECX + 0xc0));
  }
  else {
    while (*(int *)(in_ECX + 0x7c) != 0) {
      local_8 = (CMFCToolBarButton *)FUN_10029c75();
      if (local_8 != (CMFCToolBarButton *)0x0) {
        pcVar1 = *(code **)(*(int *)local_8 + 4);
        guard_check_icall(1);
        (*pcVar1)();
      }
    }
    FUN_1001a6a2(&local_8);
    pcVar1 = *(code **)(*(int *)in_ECX + 0xf8);
    guard_check_icall(local_8);
    (*pcVar1)();
    FUN_1001a6a2(in_ECX + 0xb0);
    FUN_1001a6a2(in_ECX + 0xc0);
  }
  pcVar1 = *(code **)(*(int *)(in_ECX + 0x70) + 8);
  guard_check_icall(param_1);
  (*pcVar1)();
  return;
}

