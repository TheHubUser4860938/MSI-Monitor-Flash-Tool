// rea decompile_all
// name: FUN_004b07df
// address: 0x4b07df
// body: available
// range: 0x4b07df-0x4b08d3 inclusive
// non_contiguous: false
// provider: Ghidra 12.1.2 (ghidra)
// analysis_profile: ac6d50be2cdf54f7005df47d1ed7e7ef55dee595681eb1b7c2e0b00d70cd697d
// limitations: The session serves operations only after Ghidra reports default auto-analysis complete; incomplete analysis does not expose partial results.; The imported Program and temporary project are ephemeral and deleted on close. Annotation operations edit session database metadata; original executable bytes are never written.; Cancelling an active Ghidra request terminates its ephemeral database and discards session annotations. The selected target remains open; the next provider query imports the original artifact again.; Default-space addresses use lowercase 0x-prefixed hexadecimal; other address spaces use <percent-encoded-space>:0x<hex>.; The Ghidra Program references PDB ISPToolForMsi.pdb (GUID b8f2ac8f-1d6f-438d-800f-ed4a14426ac6, age (hex) 1, signature unknown, version RSDS); Ghidra reports load state unknown. Original names and types may be missing; an empty name search does not prove a procedure is absent. Use list_procedures and address-based analysis to inspect recovered functions. REA does not admit a caller-selected PDB companion.; This session uses Ghidra 12.1.2. The bridge is verified against 12.1.4; other 12.1.x builds are accepted and the observed version is reported.; Pseudocode is Ghidra decompiler output, not original source and not text-equivalent to Hopper output.; External functions and functions without an analyzable body return null; other decompiler failures remain explicit.
// pseudocode: provider-specific; not original source


int FUN_004b07df(DLGTEMPLATE *param_1)

{
  short sVar1;
  ushort uVar2;
  wchar_t *pwVar3;
  int iVar4;
  size_t sVar5;
  ushort *puVar6;
  WORD WVar7;
  
  sVar1 = *(short *)((int)&param_1->style + 2);
  pwVar3 = (wchar_t *)FUN_004b078a(param_1);
  iVar4 = HasFont(param_1);
  if (iVar4 != 0) {
    pwVar3 = pwVar3 + (uint)(sVar1 == -1) * 2 + 1;
    if (pwVar3 == (wchar_t *)0x0) {
      sVar5 = 0;
    }
    else {
      sVar5 = _wcslen(pwVar3);
    }
    pwVar3 = pwVar3 + sVar5 + 1;
  }
  if (sVar1 == -1) {
    WVar7 = param_1->cy;
  }
  else {
    WVar7 = param_1->cdit;
  }
  if (WVar7 != 0) {
    do {
      puVar6 = (ushort *)(((int)pwVar3 + 3U & 0xfffffffc) + ((sVar1 != -1) - 1 & 6) + 0x12);
      if (*puVar6 == 0xffff) {
        puVar6 = puVar6 + 2;
      }
      else {
        do {
          uVar2 = *puVar6;
          puVar6 = puVar6 + 1;
        } while (uVar2 != 0);
      }
      if (*puVar6 == 0xffff) {
        puVar6 = puVar6 + 2;
      }
      else {
        do {
          uVar2 = *puVar6;
          puVar6 = puVar6 + 1;
        } while (uVar2 != 0);
      }
      uVar2 = *puVar6;
      if ((uVar2 != 0) && (sVar1 != -1)) {
        uVar2 = uVar2 - 2;
      }
      WVar7 = WVar7 - 1;
      pwVar3 = (wchar_t *)(uVar2 + 2 + (int)puVar6);
    } while (WVar7 != 0);
  }
  return (int)pwVar3 - (int)param_1;
}

