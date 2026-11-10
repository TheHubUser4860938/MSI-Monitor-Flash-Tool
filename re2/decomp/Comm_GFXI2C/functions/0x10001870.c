// rea decompile_all
// name: FUN_10001870
// address: 0x10001870
// body: available
// range: 0x10001870-0x1000197a inclusive
// non_contiguous: false
// provider: Ghidra 12.1.2 (ghidra)
// analysis_profile: b075844f08879296d957518397cd0ddda73db81dce53d00d3f0e702766fc2af6
// limitations: The session serves operations only after Ghidra reports default auto-analysis complete; incomplete analysis does not expose partial results.; The imported Program and temporary project are ephemeral and deleted on close. Annotation operations edit session database metadata; original executable bytes are never written.; Cancelling an active Ghidra request terminates its ephemeral database and discards session annotations. The selected target remains open; the next provider query imports the original artifact again.; Default-space addresses use lowercase 0x-prefixed hexadecimal; other address spaces use <percent-encoded-space>:0x<hex>.; The Ghidra Program references PDB Comm_GFXI2C.pdb (GUID d304cc6d-b3ee-4851-b468-0ab5e385ca92, age (hex) 1, signature unknown, version RSDS); Ghidra reports load state unknown. Original names and types may be missing; an empty name search does not prove a procedure is absent. Use list_procedures and address-based analysis to inspect recovered functions. REA does not admit a caller-selected PDB companion.; This session uses Ghidra 12.1.2. The bridge is verified against 12.1.4; other 12.1.x builds are accepted and the observed version is reported.; Pseudocode is Ghidra decompiler output, not original source and not text-equivalent to Hopper output.; External functions and functions without an analyzable body return null; other decompiler failures remain explicit.
// pseudocode: provider-specific; not original source


void FUN_10001870(undefined1 param_1,undefined1 param_2,void *param_3)

{
  int iVar1;
  int unaff_ESI;
  size_t unaff_EDI;
  undefined1 local_118;
  undefined1 local_117 [135];
  undefined1 local_90;
  undefined1 local_8f [139];
  uint local_4;
  
  local_4 = DAT_10064168 ^ (uint)&stack0xfffffee4;
  _memset(local_117,0,0x81);
  local_90 = 0;
  _memset(local_8f,0,0x81);
  local_118 = param_1;
  local_117[0] = param_2;
  (**(code **)(unaff_ESI + 0x18))
            (*(undefined4 *)(unaff_ESI + 0x2c),*(undefined4 *)(unaff_ESI + 0x34),0,0,2,&local_118,
             &stack0xfffffee4,0);
  FUN_10001b40();
  iVar1 = (**(code **)(unaff_ESI + 0x18))
                    (*(undefined4 *)(unaff_ESI + 0x2c),*(undefined4 *)(unaff_ESI + 0x34),0,0,1,
                     &local_118,&stack0xfffffee4,&local_90);
  if (iVar1 == 0) {
    if (0 < (int)unaff_EDI) {
      _memcpy(param_3,&local_90,unaff_EDI);
    }
    __security_check_cookie(local_4 ^ (uint)&stack0xfffffee4);
    return;
  }
  __security_check_cookie(local_4 ^ (uint)&stack0xfffffee4);
  return;
}

