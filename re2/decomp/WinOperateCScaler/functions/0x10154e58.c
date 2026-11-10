// rea decompile_all
// name: FUN_10154e58
// address: 0x10154e58
// body: available
// range: 0x10154e58-0x10154eaa inclusive
// non_contiguous: false
// provider: Ghidra 12.1.2 (ghidra)
// analysis_profile: b075844f08879296d957518397cd0ddda73db81dce53d00d3f0e702766fc2af6
// limitations: The session serves operations only after Ghidra reports default auto-analysis complete; incomplete analysis does not expose partial results.; The imported Program and temporary project are ephemeral and deleted on close. Annotation operations edit session database metadata; original executable bytes are never written.; Cancelling an active Ghidra request terminates its ephemeral database and discards session annotations. The selected target remains open; the next provider query imports the original artifact again.; Default-space addresses use lowercase 0x-prefixed hexadecimal; other address spaces use <percent-encoded-space>:0x<hex>.; The Ghidra Program references PDB WinOperateCScaler.pdb (GUID a6737962-efea-4805-8ae6-1fc1ef126554, age (hex) 1, signature unknown, version RSDS); Ghidra reports load state unknown. Original names and types may be missing; an empty name search does not prove a procedure is absent. Use list_procedures and address-based analysis to inspect recovered functions. REA does not admit a caller-selected PDB companion.; This session uses Ghidra 12.1.2. The bridge is verified against 12.1.4; other 12.1.x builds are accepted and the observed version is reported.; Pseudocode is Ghidra decompiler output, not original source and not text-equivalent to Hopper output.; External functions and functions without an analyzable body return null; other decompiler failures remain explicit.
// pseudocode: provider-specific; not original source


void FUN_10154e58(void)

{
  int iVar1;
  BOOL BVar2;
  _ATL_BASE_MODULE70 *in_ECX;
  
  ATL::_ATL_BASE_MODULE70::_ATL_BASE_MODULE70(in_ECX);
  *(undefined4 *)in_ECX = 0x38;
  *(undefined4 *)(in_ECX + 8) = 0x10000000;
  *(undefined4 *)(in_ECX + 4) = 0x10000000;
  *(undefined4 *)(in_ECX + 0xc) = 0xe00;
  *(undefined **)(in_ECX + 0x10) = &DAT_101d4914;
  iVar1 = FUN_100239ea();
  if (iVar1 < 0) {
    BVar2 = IsDebuggerPresent();
    if (BVar2 != 0) {
      OutputDebugStringW(L"ERROR : Unable to initialize critical section in CAtlBaseModule\n");
    }
    DAT_10207440 = 1;
  }
  return;
}

