// rea decompile_all
// name: GetAllCommName
// address: 0x100042e0
// body: available
// range: 0x100042e0-0x10004363 inclusive
// non_contiguous: false
// provider: Ghidra 12.1.2 (ghidra)
// analysis_profile: b075844f08879296d957518397cd0ddda73db81dce53d00d3f0e702766fc2af6
// limitations: The session serves operations only after Ghidra reports default auto-analysis complete; incomplete analysis does not expose partial results.; The imported Program and temporary project are ephemeral and deleted on close. Annotation operations edit session database metadata; original executable bytes are never written.; Cancelling an active Ghidra request terminates its ephemeral database and discards session annotations. The selected target remains open; the next provider query imports the original artifact again.; Default-space addresses use lowercase 0x-prefixed hexadecimal; other address spaces use <percent-encoded-space>:0x<hex>.; The Ghidra Program references PDB Comm.pdb (GUID c3062acb-498d-45fa-a233-c8b7e401bb13, age (hex) 1, signature unknown, version RSDS); Ghidra reports load state unknown. Original names and types may be missing; an empty name search does not prove a procedure is absent. Use list_procedures and address-based analysis to inspect recovered functions. REA does not admit a caller-selected PDB companion.; This session uses Ghidra 12.1.2. The bridge is verified against 12.1.4; other 12.1.x builds are accepted and the observed version is reported.; Pseudocode is Ghidra decompiler output, not original source and not text-equivalent to Hopper output.; External functions and functions without an analyzable body return null; other decompiler failures remain explicit.
// pseudocode: provider-specific; not original source


void GetAllCommName(wchar_t *param_1)

{
  int iVar1;
  uint local_8;
  
                    /* 0x42e0  30  GetAllCommName */
  local_8 = 0;
  iVar1 = DAT_101def34 - DAT_101def30 >> 0x1f;
  if ((DAT_101def34 - DAT_101def30) / 0x244 + iVar1 != iVar1) {
    iVar1 = 0;
    do {
      _wcscpy_s(param_1,0x100,(wchar_t *)(DAT_101def30 + 0x3c + iVar1));
      local_8 = local_8 + 1;
      iVar1 = iVar1 + 0x244;
      param_1 = param_1 + 0x100;
    } while (local_8 < (uint)((DAT_101def34 - DAT_101def30) / 0x244));
  }
  return;
}

