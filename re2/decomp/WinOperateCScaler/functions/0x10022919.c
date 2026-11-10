// rea decompile_all
// name: CWinApp::_LoadSysPolicies
// address: 0x10022919
// body: available
// range: 0x10022919-0x100229e3 inclusive
// non_contiguous: false
// provider: Ghidra 12.1.2 (ghidra)
// analysis_profile: b075844f08879296d957518397cd0ddda73db81dce53d00d3f0e702766fc2af6
// limitations: The session serves operations only after Ghidra reports default auto-analysis complete; incomplete analysis does not expose partial results.; The imported Program and temporary project are ephemeral and deleted on close. Annotation operations edit session database metadata; original executable bytes are never written.; Cancelling an active Ghidra request terminates its ephemeral database and discards session annotations. The selected target remains open; the next provider query imports the original artifact again.; Default-space addresses use lowercase 0x-prefixed hexadecimal; other address spaces use <percent-encoded-space>:0x<hex>.; The Ghidra Program references PDB WinOperateCScaler.pdb (GUID a6737962-efea-4805-8ae6-1fc1ef126554, age (hex) 1, signature unknown, version RSDS); Ghidra reports load state unknown. Original names and types may be missing; an empty name search does not prove a procedure is absent. Use list_procedures and address-based analysis to inspect recovered functions. REA does not admit a caller-selected PDB companion.; This session uses Ghidra 12.1.2. The bridge is verified against 12.1.4; other 12.1.x builds are accepted and the observed version is reported.; Pseudocode is Ghidra decompiler output, not original source and not text-equivalent to Hopper output.; External functions and functions without an analyzable body return null; other decompiler failures remain explicit.
// pseudocode: provider-specific; not original source


/* Library Function - Single Match
    protected: int __thiscall CWinApp::_LoadSysPolicies(void)
   
   Library: Visual Studio 2015 Release */

int __thiscall CWinApp::_LoadSysPolicies(CWinApp *this)

{
  undefined *puVar1;
  LSTATUS LVar2;
  undefined4 *puVar3;
  undefined **ppuVar4;
  DWORD local_14;
  DWORD local_10;
  int local_c;
  HKEY local_8;
  
  local_14 = 4;
  local_8 = (HKEY)0x0;
  ppuVar4 = &PTR_u_Software_Microsoft_Windows_Curre_102013ec;
  *(undefined4 *)(this + 0xa8) = 0;
  local_c = 0;
  local_10 = 0;
  puVar1 = PTR_u_Software_Microsoft_Windows_Curre_102013ec;
  while (puVar1 != (undefined *)0x0) {
    LVar2 = RegOpenKeyExW((HKEY)0x80000001,(LPCWSTR)*ppuVar4,0,1,&local_8);
    if (LVar2 == 0) {
      for (puVar3 = (undefined4 *)ppuVar4[1]; (LPCWSTR)*puVar3 != (LPCWSTR)0x0; puVar3 = puVar3 + 2)
      {
        LVar2 = RegQueryValueExW(local_8,(LPCWSTR)*puVar3,(LPDWORD)0x0,&local_10,(LPBYTE)&local_c,
                                 &local_14);
        if ((LVar2 == 0) && (local_10 == 4)) {
          if (local_c == 0) {
            *(uint *)(this + 0xa8) = *(uint *)(this + 0xa8) & ~puVar3[1];
          }
          else {
            *(uint *)(this + 0xa8) = *(uint *)(this + 0xa8) | puVar3[1];
          }
        }
        local_c = 0;
        local_10 = 0;
        local_14 = 4;
      }
      RegCloseKey(local_8);
      local_8 = (HKEY)0x0;
    }
    ppuVar4 = ppuVar4 + 2;
    puVar1 = *ppuVar4;
  }
  return 1;
}

