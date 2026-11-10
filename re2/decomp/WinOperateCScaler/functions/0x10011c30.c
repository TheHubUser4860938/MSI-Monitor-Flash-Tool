// rea decompile_all
// name: FUN_10011c30
// address: 0x10011c30
// body: available
// range: 0x10011c30-0x10011cd6 inclusive
// non_contiguous: false
// provider: Ghidra 12.1.2 (ghidra)
// analysis_profile: b075844f08879296d957518397cd0ddda73db81dce53d00d3f0e702766fc2af6
// limitations: The session serves operations only after Ghidra reports default auto-analysis complete; incomplete analysis does not expose partial results.; The imported Program and temporary project are ephemeral and deleted on close. Annotation operations edit session database metadata; original executable bytes are never written.; Cancelling an active Ghidra request terminates its ephemeral database and discards session annotations. The selected target remains open; the next provider query imports the original artifact again.; Default-space addresses use lowercase 0x-prefixed hexadecimal; other address spaces use <percent-encoded-space>:0x<hex>.; The Ghidra Program references PDB WinOperateCScaler.pdb (GUID a6737962-efea-4805-8ae6-1fc1ef126554, age (hex) 1, signature unknown, version RSDS); Ghidra reports load state unknown. Original names and types may be missing; an empty name search does not prove a procedure is absent. Use list_procedures and address-based analysis to inspect recovered functions. REA does not admit a caller-selected PDB companion.; This session uses Ghidra 12.1.2. The bridge is verified against 12.1.4; other 12.1.x builds are accepted and the observed version is reported.; Pseudocode is Ghidra decompiler output, not original source and not text-equivalent to Hopper output.; External functions and functions without an analyzable body return null; other decompiler failures remain explicit.
// pseudocode: provider-specific; not original source


void FUN_10011c30(void)

{
  int in_ECX;
  undefined4 *puVar1;
  int iVar2;
  wchar_t local_210 [260];
  uint local_8;
  
  local_8 = DAT_10201fec ^ (uint)&stack0xfffffffc;
  _memset(local_210,0,0x208);
  *(undefined4 *)(in_ECX + 0x54) = 0;
  _memset((void *)(in_ECX + 0x58),0,0x800);
  puVar1 = (undefined4 *)(in_ECX + 0x858);
  iVar2 = 0x200;
  do {
    *puVar1 = 0;
    *(undefined4 *)(in_ECX + 0x85c) = 0;
    _wcsncpy((wchar_t *)(in_ECX + 0x860),local_210,0x104);
    puVar1 = puVar1 + 0x84;
    iVar2 = iVar2 + -1;
  } while (iVar2 != 0);
  __security_check_cookie(local_8 ^ (uint)&stack0xfffffffc);
  return;
}

