// rea decompile_all
// name: FUN_1002db10
// address: 0x1002db10
// body: available
// range: 0x1002db10-0x1002dc9b inclusive
// non_contiguous: false
// provider: Ghidra 12.1.2 (ghidra)
// analysis_profile: b075844f08879296d957518397cd0ddda73db81dce53d00d3f0e702766fc2af6
// limitations: The session serves operations only after Ghidra reports default auto-analysis complete; incomplete analysis does not expose partial results.; The imported Program and temporary project are ephemeral and deleted on close. Annotation operations edit session database metadata; original executable bytes are never written.; Cancelling an active Ghidra request terminates its ephemeral database and discards session annotations. The selected target remains open; the next provider query imports the original artifact again.; Default-space addresses use lowercase 0x-prefixed hexadecimal; other address spaces use <percent-encoded-space>:0x<hex>.; The Ghidra Program references PDB WinIspPlugIn.pdb (GUID d9f398c7-6c98-49a8-af25-a0659d5ad2f3, age (hex) 1, signature unknown, version RSDS); Ghidra reports load state unknown. Original names and types may be missing; an empty name search does not prove a procedure is absent. Use list_procedures and address-based analysis to inspect recovered functions. REA does not admit a caller-selected PDB companion.; This session uses Ghidra 12.1.2. The bridge is verified against 12.1.4; other 12.1.x builds are accepted and the observed version is reported.; Pseudocode is Ghidra decompiler output, not original source and not text-equivalent to Hopper output.; External functions and functions without an analyzable body return null; other decompiler failures remain explicit.
// pseudocode: provider-specific; not original source


void FUN_1002db10(void)

{
  undefined4 *in_ECX;
  wchar_t local_210 [260];
  uint local_8;
  
  local_8 = DAT_1023dfec ^ (uint)&stack0xfffffffc;
  *in_ECX = 0;
  in_ECX[1] = 0;
  in_ECX[2] = 0;
  in_ECX[3] = 0;
  in_ECX[4] = 0;
  in_ECX[5] = 0;
  in_ECX[6] = 0;
  in_ECX[7] = 0;
  in_ECX[8] = 0;
  in_ECX[9] = 0;
  in_ECX[10] = 0;
  in_ECX[0xb] = 1;
  in_ECX[0xc] = 1;
  in_ECX[0xd] = 1;
  in_ECX[0xe] = 1;
  in_ECX[0xf] = 0;
  in_ECX[0x10] = 0;
  *(undefined1 *)(in_ECX + 0x11) = 0;
  in_ECX[0x12] = 2;
  *(undefined2 *)(in_ECX + 0x13) = 0;
  in_ECX[0x14] = 2;
  *(undefined2 *)(in_ECX + 0x15) = 0;
  in_ECX[0x16] = 2;
  *(undefined2 *)(in_ECX + 0x17) = 0;
  in_ECX[0x18] = 2;
  *(undefined2 *)(in_ECX + 0x19) = 0;
  in_ECX[0x326] = 0;
  *(undefined1 *)(in_ECX + 0x327) = 10;
  _memset(local_210,0,0x208);
  _wcsncpy((wchar_t *)((int)in_ECX + 0x66),local_210,0x104);
  _wcsncpy((wchar_t *)((int)in_ECX + 0x26e),local_210,0x104);
  _wcsncpy((wchar_t *)((int)in_ECX + 0x476),local_210,0x104);
  _wcsncpy((wchar_t *)((int)in_ECX + 0x67e),local_210,0x104);
  _wcsncpy((wchar_t *)((int)in_ECX + 0x886),local_210,0x104);
  _wcsncpy((wchar_t *)((int)in_ECX + 0xa8e),local_210,0x104);
  __security_check_cookie(local_8 ^ (uint)&stack0xfffffffc);
  return;
}

