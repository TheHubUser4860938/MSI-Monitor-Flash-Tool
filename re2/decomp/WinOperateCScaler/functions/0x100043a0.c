// rea decompile_all
// name: FUN_100043a0
// address: 0x100043a0
// body: available
// range: 0x100043a0-0x10004611 inclusive
// non_contiguous: false
// provider: Ghidra 12.1.2 (ghidra)
// analysis_profile: b075844f08879296d957518397cd0ddda73db81dce53d00d3f0e702766fc2af6
// limitations: The session serves operations only after Ghidra reports default auto-analysis complete; incomplete analysis does not expose partial results.; The imported Program and temporary project are ephemeral and deleted on close. Annotation operations edit session database metadata; original executable bytes are never written.; Cancelling an active Ghidra request terminates its ephemeral database and discards session annotations. The selected target remains open; the next provider query imports the original artifact again.; Default-space addresses use lowercase 0x-prefixed hexadecimal; other address spaces use <percent-encoded-space>:0x<hex>.; The Ghidra Program references PDB WinOperateCScaler.pdb (GUID a6737962-efea-4805-8ae6-1fc1ef126554, age (hex) 1, signature unknown, version RSDS); Ghidra reports load state unknown. Original names and types may be missing; an empty name search does not prove a procedure is absent. Use list_procedures and address-based analysis to inspect recovered functions. REA does not admit a caller-selected PDB companion.; This session uses Ghidra 12.1.2. The bridge is verified against 12.1.4; other 12.1.x builds are accepted and the observed version is reported.; Pseudocode is Ghidra decompiler output, not original source and not text-equivalent to Hopper output.; External functions and functions without an analyzable body return null; other decompiler failures remain explicit.
// pseudocode: provider-specific; not original source


void FUN_100043a0(void)

{
  undefined4 *in_ECX;
  wchar_t local_51c [260];
  char local_314 [260];
  wchar_t local_210 [260];
  uint local_8;
  
  local_8 = DAT_10201fec ^ (uint)&stack0xfffffffc;
  *in_ECX = 0;
  in_ECX[1] = 0;
  in_ECX[2] = 0;
  in_ECX[3] = 1;
  in_ECX[4] = 0;
  in_ECX[5] = 0;
  in_ECX[6] = 0;
  in_ECX[7] = 0;
  in_ECX[8] = 0;
  in_ECX[9] = 0;
  in_ECX[10] = 2;
  in_ECX[0xb] = 0;
  in_ECX[0xc] = 0xffffffff;
  *(undefined1 *)(in_ECX + 0xd) = 0x94;
  in_ECX[0xe] = 0;
  in_ECX[0xf] = 0;
  in_ECX[0x10] = 0;
  in_ECX[0x11] = 0;
  in_ECX[0x12] = 0;
  in_ECX[0x13] = 0;
  in_ECX[0x14] = 0;
  FUN_10004620();
  in_ECX[0x10a16] = 0;
  in_ECX[0x10b48] = 0;
  in_ECX[0x10b49] = 0;
  _memset(in_ECX + 0x10a17,0xff,0x4c4);
  in_ECX[0x10b4a] = 0;
  in_ECX[0x10b4b] = 0;
  in_ECX[0x10b4c] = 0;
  in_ECX[0x10b4d] = 0;
  in_ECX[0x10b4e] = 0;
  in_ECX[0x10b4f] = 0;
  in_ECX[0x10b50] = 0;
  in_ECX[0x10b51] = 0;
  _memset(local_51c,0,0x208);
  _wcsncpy((wchar_t *)(in_ECX + 0x10b52),local_51c,0x104);
  *(undefined2 *)(in_ECX + 0x10bd4) = 0xffff;
  *(undefined1 *)((int)in_ECX + 0x42f52) = 1;
  in_ECX[0x10c15] = 0;
  _memset((void *)((int)in_ECX + 0x42f53),0xff,0x100);
  in_ECX[0x10e5f] = 0;
  in_ECX[0x10e60] = 0;
  in_ECX[0x10e61] = 0;
  in_ECX[0x10e62] = 0;
  in_ECX[0x10e63] = 0;
  in_ECX[0x10e64] = 2;
  in_ECX[0x10e65] = 4;
  *(undefined2 *)(in_ECX + 0x10e66) = 0;
  _memset(local_210,0,0x208);
  _memset(local_314,0,0x104);
  _strncpy((char *)(in_ECX + 0x10e1e),local_314,0x104);
  _wcsncpy((wchar_t *)(in_ECX + 0x10c16),local_210,0x104);
  _wcsncpy((wchar_t *)(in_ECX + 0x10c98),local_210,0x104);
  _wcsncpy((wchar_t *)(in_ECX + 0x10d1a),local_210,0x104);
  _wcsncpy((wchar_t *)(in_ECX + 0x10d9c),local_210,0x104);
  __security_check_cookie(local_8 ^ (uint)&stack0xfffffffc);
  return;
}

