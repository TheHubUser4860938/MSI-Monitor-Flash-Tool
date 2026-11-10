// rea decompile_all
// name: GetCommFile
// address: 0x10004460
// body: available
// range: 0x10004460-0x1000451a inclusive
// non_contiguous: false
// provider: Ghidra 12.1.2 (ghidra)
// analysis_profile: b075844f08879296d957518397cd0ddda73db81dce53d00d3f0e702766fc2af6
// limitations: The session serves operations only after Ghidra reports default auto-analysis complete; incomplete analysis does not expose partial results.; The imported Program and temporary project are ephemeral and deleted on close. Annotation operations edit session database metadata; original executable bytes are never written.; Cancelling an active Ghidra request terminates its ephemeral database and discards session annotations. The selected target remains open; the next provider query imports the original artifact again.; Default-space addresses use lowercase 0x-prefixed hexadecimal; other address spaces use <percent-encoded-space>:0x<hex>.; The Ghidra Program references PDB Comm.pdb (GUID c3062acb-498d-45fa-a233-c8b7e401bb13, age (hex) 1, signature unknown, version RSDS); Ghidra reports load state unknown. Original names and types may be missing; an empty name search does not prove a procedure is absent. Use list_procedures and address-based analysis to inspect recovered functions. REA does not admit a caller-selected PDB companion.; This session uses Ghidra 12.1.2. The bridge is verified against 12.1.4; other 12.1.x builds are accepted and the observed version is reported.; Pseudocode is Ghidra decompiler output, not original source and not text-equivalent to Hopper output.; External functions and functions without an analyzable body return null; other decompiler failures remain explicit.
// pseudocode: provider-specific; not original source


undefined4 GetCommFile(wchar_t *param_1)

{
  wchar_t *_Src;
  int iVar1;
  int iVar2;
  uint local_8;
  
                    /* 0x4460  33  GetCommFile */
  iVar2 = DAT_101def34 - DAT_101def30 >> 0x1f;
  iVar1 = (DAT_101def34 - DAT_101def30) / 0x244 + iVar2;
  if (iVar1 != iVar2) {
    local_8 = 0;
    if (iVar1 != iVar2) {
      iVar2 = 0;
      do {
        _wcscpy_s(param_1,0x104,(wchar_t *)(DAT_101def30 + 0x3c + iVar2));
        _Src = (wchar_t *)(DAT_101def30 + 4 + iVar2);
        if (7 < *(uint *)(_Src + 10)) {
          _Src = *(wchar_t **)_Src;
        }
        _wcscpy_s(param_1 + 0x104,0x104,_Src);
        local_8 = local_8 + 1;
        param_1 = param_1 + 0x208;
        iVar2 = iVar2 + 0x244;
      } while (local_8 < (uint)((DAT_101def34 - DAT_101def30) / 0x244));
    }
    return 0;
  }
  return 4;
}

