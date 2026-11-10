// rea decompile_all
// name: FUN_10007250
// address: 0x10007250
// body: available
// range: 0x10007250-0x10007429 inclusive
// non_contiguous: false
// provider: Ghidra 12.1.2 (ghidra)
// analysis_profile: b075844f08879296d957518397cd0ddda73db81dce53d00d3f0e702766fc2af6
// limitations: The session serves operations only after Ghidra reports default auto-analysis complete; incomplete analysis does not expose partial results.; The imported Program and temporary project are ephemeral and deleted on close. Annotation operations edit session database metadata; original executable bytes are never written.; Cancelling an active Ghidra request terminates its ephemeral database and discards session annotations. The selected target remains open; the next provider query imports the original artifact again.; Default-space addresses use lowercase 0x-prefixed hexadecimal; other address spaces use <percent-encoded-space>:0x<hex>.; The Ghidra Program references PDB Comm_GFXI2C.pdb (GUID d304cc6d-b3ee-4851-b468-0ab5e385ca92, age (hex) 1, signature unknown, version RSDS); Ghidra reports load state unknown. Original names and types may be missing; an empty name search does not prove a procedure is absent. Use list_procedures and address-based analysis to inspect recovered functions. REA does not admit a caller-selected PDB companion.; This session uses Ghidra 12.1.2. The bridge is verified against 12.1.4; other 12.1.x builds are accepted and the observed version is reported.; Pseudocode is Ghidra decompiler output, not original source and not text-equivalent to Hopper output.; External functions and functions without an analyzable body return null; other decompiler failures remain explicit.
// pseudocode: provider-specific; not original source


int __cdecl FUN_10007250(int *param_1)

{
  HMODULE pHVar1;
  int iVar2;
  uint uVar3;
  uint local_8;
  
  FUN_10006fe0();
  local_8 = 0;
  while (DAT_10065a10 != '\0') {
    Sleep(100);
    local_8 = local_8 + 1;
    if (9 < local_8) {
      return -1;
    }
  }
  DAT_10065a34 = DAT_10065a34 + 1;
  pHVar1 = GetModuleHandleA("nvapi.dll");
  *param_1 = (int)pHVar1;
  if (*param_1 == 0) {
    EnterCriticalSection((LPCRITICAL_SECTION)&DAT_100659e0);
    pHVar1 = GetModuleHandleA("nvapi.dll");
    *param_1 = (int)pHVar1;
    if (*param_1 == 0) {
      pHVar1 = FUN_10036a80("nvapi.dll",0);
      *param_1 = (int)pHVar1;
      if (*param_1 == 0) {
        DAT_10065a34 = DAT_10065a34 + -1;
        LeaveCriticalSection((LPCRITICAL_SECTION)&DAT_100659e0);
        return -2;
      }
      iVar2 = FUN_10007110((HMODULE)*param_1,0);
      if (iVar2 != 0) {
        DAT_10065a34 = DAT_10065a34 + -1;
        FreeLibrary((HMODULE)*param_1);
        LeaveCriticalSection((LPCRITICAL_SECTION)&DAT_100659e0);
        return iVar2;
      }
      DAT_100659f8 = *param_1;
      FUN_10007010(*param_1,0);
      LeaveCriticalSection((LPCRITICAL_SECTION)&DAT_100659e0);
      return -0xe;
    }
    LeaveCriticalSection((LPCRITICAL_SECTION)&DAT_100659e0);
  }
  uVar3 = FUN_10007060(*param_1,0);
  if ((uVar3 & 0xff) == 0) {
    return 0;
  }
  pHVar1 = FUN_10036a80("nvapi.dll",0);
  *param_1 = (int)pHVar1;
  iVar2 = FUN_10007110((HMODULE)*param_1,0);
  if (iVar2 != 0) {
    DAT_10065a34 = DAT_10065a34 + -1;
    FreeLibrary((HMODULE)*param_1);
    return iVar2;
  }
  DAT_100659f8 = *param_1;
  FUN_10007010(*param_1,0);
  return -0xe;
}

