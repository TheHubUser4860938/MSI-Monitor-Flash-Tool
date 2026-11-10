// rea decompile_all
// name: _GetLcidFromLanguage
// address: 0x595a72
// body: available
// range: 0x595a72-0x595ad2 inclusive
// non_contiguous: false
// provider: Ghidra 12.1.2 (ghidra)
// analysis_profile: ac6d50be2cdf54f7005df47d1ed7e7ef55dee595681eb1b7c2e0b00d70cd697d
// limitations: The session serves operations only after Ghidra reports default auto-analysis complete; incomplete analysis does not expose partial results.; The imported Program and temporary project are ephemeral and deleted on close. Annotation operations edit session database metadata; original executable bytes are never written.; Cancelling an active Ghidra request terminates its ephemeral database and discards session annotations. The selected target remains open; the next provider query imports the original artifact again.; Default-space addresses use lowercase 0x-prefixed hexadecimal; other address spaces use <percent-encoded-space>:0x<hex>.; The Ghidra Program references PDB ISPToolForMsi.pdb (GUID b8f2ac8f-1d6f-438d-800f-ed4a14426ac6, age (hex) 1, signature unknown, version RSDS); Ghidra reports load state unknown. Original names and types may be missing; an empty name search does not prove a procedure is absent. Use list_procedures and address-based analysis to inspect recovered functions. REA does not admit a caller-selected PDB companion.; This session uses Ghidra 12.1.2. The bridge is verified against 12.1.4; other 12.1.x builds are accepted and the observed version is reported.; Pseudocode is Ghidra decompiler output, not original source and not text-equivalent to Hopper output.; External functions and functions without an analyzable body return null; other decompiler failures remain explicit.
// pseudocode: provider-specific; not original source


/* Library Function - Single Match
    _GetLcidFromLanguage
   
   Library: Visual Studio 2015 Release */

void _GetLcidFromLanguage(byte *param_1)

{
  short *psVar1;
  short sVar2;
  int iVar3;
  uint uVar4;
  undefined4 uVar5;
  short *psVar6;
  
  iVar3 = FUN_0058c5ff();
  uVar5 = 2;
  psVar6 = *(short **)(iVar3 + 0x50);
  psVar1 = psVar6 + 1;
  do {
    sVar2 = *psVar6;
    psVar6 = psVar6 + 1;
  } while (sVar2 != 0);
  uVar4 = (uint)((int)psVar6 - (int)psVar1 >> 1 == 3);
  *(uint *)(iVar3 + 0x60) = uVar4;
  if (uVar4 == 0) {
    uVar5 = _GetPrimaryLen(*(undefined4 *)(iVar3 + 0x50));
  }
  *(undefined4 *)(iVar3 + 0x5c) = uVar5;
  EnumSystemLocalesW(_LanguageEnumProc_4,1);
  if ((*param_1 & 4) == 0) {
    param_1[0] = 0;
    param_1[1] = 0;
    param_1[2] = 0;
    param_1[3] = 0;
  }
  return;
}

