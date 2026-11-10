// rea decompile_all
// name: CWinApp::_LoadSysPolicies
// address: 0x1003b210
// body: available
// range: 0x1003b210-0x1003b214 inclusive
// non_contiguous: false
// provider: Ghidra 12.1.2 (ghidra)
// analysis_profile: b075844f08879296d957518397cd0ddda73db81dce53d00d3f0e702766fc2af6
// limitations: The session serves operations only after Ghidra reports default auto-analysis complete; incomplete analysis does not expose partial results.; The imported Program and temporary project are ephemeral and deleted on close. Annotation operations edit session database metadata; original executable bytes are never written.; Cancelling an active Ghidra request terminates its ephemeral database and discards session annotations. The selected target remains open; the next provider query imports the original artifact again.; Default-space addresses use lowercase 0x-prefixed hexadecimal; other address spaces use <percent-encoded-space>:0x<hex>.; The Ghidra Program references PDB Comm_GFXI2C.pdb (GUID d304cc6d-b3ee-4851-b468-0ab5e385ca92, age (hex) 1, signature unknown, version RSDS); Ghidra reports load state unknown. Original names and types may be missing; an empty name search does not prove a procedure is absent. Use list_procedures and address-based analysis to inspect recovered functions. REA does not admit a caller-selected PDB companion.; This session uses Ghidra 12.1.2. The bridge is verified against 12.1.4; other 12.1.x builds are accepted and the observed version is reported.; Pseudocode is Ghidra decompiler output, not original source and not text-equivalent to Hopper output.; External functions and functions without an analyzable body return null; other decompiler failures remain explicit.
// pseudocode: provider-specific; not original source


int __thiscall CWinApp::_LoadSysPolicies(CWinApp *this)

{
  undefined *puVar1;
  LSTATUS LVar2;
  undefined **ppuVar3;
  undefined4 *puVar4;
  DWORD DStack_18;
  CWinApp *pCStack_14;
  DWORD DStack_10;
  int iStack_c;
  HKEY pHStack_8;
  
  *(undefined4 *)(this + 0xa0) = 0;
  pHStack_8 = (HKEY)0x0;
  iStack_c = 0;
  DStack_18 = 4;
  DStack_10 = 0;
  ppuVar3 = &PTR_u_Software_Microsoft_Windows_Curre_100639f0;
  pCStack_14 = this;
  puVar1 = PTR_u_Software_Microsoft_Windows_Curre_100639f0;
  while (puVar1 != (undefined *)0x0) {
    LVar2 = RegOpenKeyExW((HKEY)0x80000001,(LPCWSTR)*ppuVar3,0,1,&pHStack_8);
    if (LVar2 == 0) {
      for (puVar4 = (undefined4 *)ppuVar3[1]; (LPCWSTR)*puVar4 != (LPCWSTR)0x0; puVar4 = puVar4 + 2)
      {
        LVar2 = RegQueryValueExW(pHStack_8,(LPCWSTR)*puVar4,(LPDWORD)0x0,&DStack_10,
                                 (LPBYTE)&iStack_c,&DStack_18);
        if ((LVar2 == 0) && (DStack_10 == 4)) {
          if (iStack_c == 0) {
            *(uint *)(pCStack_14 + 0xa0) = *(uint *)(pCStack_14 + 0xa0) & ~puVar4[1];
          }
          else {
            *(uint *)(pCStack_14 + 0xa0) = *(uint *)(pCStack_14 + 0xa0) | puVar4[1];
          }
        }
        iStack_c = 0;
        DStack_18 = 4;
        DStack_10 = 0;
      }
      RegCloseKey(pHStack_8);
      pHStack_8 = (HKEY)0x0;
    }
    ppuVar3 = ppuVar3 + 2;
    puVar1 = *ppuVar3;
  }
  return 1;
}

