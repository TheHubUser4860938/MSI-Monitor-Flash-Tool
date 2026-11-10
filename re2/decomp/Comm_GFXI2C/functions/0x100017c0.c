// rea decompile_all
// name: FUN_100017c0
// address: 0x100017c0
// body: available
// range: 0x100017c0-0x10001866 inclusive
// non_contiguous: false
// provider: Ghidra 12.1.2 (ghidra)
// analysis_profile: b075844f08879296d957518397cd0ddda73db81dce53d00d3f0e702766fc2af6
// limitations: The session serves operations only after Ghidra reports default auto-analysis complete; incomplete analysis does not expose partial results.; The imported Program and temporary project are ephemeral and deleted on close. Annotation operations edit session database metadata; original executable bytes are never written.; Cancelling an active Ghidra request terminates its ephemeral database and discards session annotations. The selected target remains open; the next provider query imports the original artifact again.; Default-space addresses use lowercase 0x-prefixed hexadecimal; other address spaces use <percent-encoded-space>:0x<hex>.; The Ghidra Program references PDB Comm_GFXI2C.pdb (GUID d304cc6d-b3ee-4851-b468-0ab5e385ca92, age (hex) 1, signature unknown, version RSDS); Ghidra reports load state unknown. Original names and types may be missing; an empty name search does not prove a procedure is absent. Use list_procedures and address-based analysis to inspect recovered functions. REA does not admit a caller-selected PDB companion.; This session uses Ghidra 12.1.2. The bridge is verified against 12.1.4; other 12.1.x builds are accepted and the observed version is reported.; Pseudocode is Ghidra decompiler output, not original source and not text-equivalent to Hopper output.; External functions and functions without an analyzable body return null; other decompiler failures remain explicit.
// pseudocode: provider-specific; not original source


void __thiscall FUN_100017c0(void *this,undefined1 param_1,undefined1 param_2,void *param_3)

{
  int unaff_ESI;
  undefined4 local_8c;
  undefined1 local_88;
  undefined1 local_87;
  undefined1 local_86 [130];
  uint local_4;
  
  local_4 = DAT_10064168 ^ (uint)&local_8c;
  _memset(&local_87,0,0x81);
  local_88 = param_1;
  local_87 = param_2;
  if (0 < (int)this) {
    _memcpy(local_86,param_3,(size_t)this);
  }
  local_8c = 0;
  (**(code **)(unaff_ESI + 0x18))
            (*(undefined4 *)(unaff_ESI + 0x2c),*(undefined4 *)(unaff_ESI + 0x34),0,0,
             (char)this + '\x02',&local_88,&local_8c,0);
  __security_check_cookie(local_4 ^ (uint)&local_8c);
  return;
}

