// rea decompile_all
// name: _GetLcidFromLangCountry
// address: 0x1016992c
// body: available
// range: 0x1016992c-0x101699c6 inclusive
// non_contiguous: false
// provider: Ghidra 12.1.2 (ghidra)
// analysis_profile: b075844f08879296d957518397cd0ddda73db81dce53d00d3f0e702766fc2af6
// limitations: The session serves operations only after Ghidra reports default auto-analysis complete; incomplete analysis does not expose partial results.; The imported Program and temporary project are ephemeral and deleted on close. Annotation operations edit session database metadata; original executable bytes are never written.; Cancelling an active Ghidra request terminates its ephemeral database and discards session annotations. The selected target remains open; the next provider query imports the original artifact again.; Default-space addresses use lowercase 0x-prefixed hexadecimal; other address spaces use <percent-encoded-space>:0x<hex>.; The Ghidra Program references PDB Comm.pdb (GUID c3062acb-498d-45fa-a233-c8b7e401bb13, age (hex) 1, signature unknown, version RSDS); Ghidra reports load state unknown. Original names and types may be missing; an empty name search does not prove a procedure is absent. Use list_procedures and address-based analysis to inspect recovered functions. REA does not admit a caller-selected PDB companion.; This session uses Ghidra 12.1.2. The bridge is verified against 12.1.4; other 12.1.x builds are accepted and the observed version is reported.; Pseudocode is Ghidra decompiler output, not original source and not text-equivalent to Hopper output.; External functions and functions without an analyzable body return null; other decompiler failures remain explicit.
// pseudocode: provider-specific; not original source


/* Library Function - Single Match
    _GetLcidFromLangCountry
   
   Library: Visual Studio 2015 Release */

void _GetLcidFromLangCountry(uint *param_1)

{
  short *psVar1;
  short sVar2;
  uint uVar3;
  int iVar4;
  undefined4 uVar5;
  short *psVar6;
  short *psVar7;
  
  iVar4 = FUN_1015ddfc();
  uVar5 = 2;
  psVar6 = *(short **)(iVar4 + 0x50);
  psVar1 = psVar6 + 1;
  do {
    sVar2 = *psVar6;
    psVar6 = psVar6 + 1;
  } while (sVar2 != 0);
  psVar7 = *(short **)(iVar4 + 0x54);
  *(uint *)(iVar4 + 0x60) = (uint)((int)psVar6 - (int)psVar1 >> 1 == 3);
  psVar1 = psVar7 + 1;
  do {
    sVar2 = *psVar7;
    psVar7 = psVar7 + 1;
  } while (sVar2 != 0);
  *(uint *)(iVar4 + 100) = (uint)((int)psVar7 - (int)psVar1 >> 1 == 3);
  param_1[1] = 0;
  if (*(int *)(iVar4 + 0x60) == 0) {
    uVar5 = _GetPrimaryLen(*(undefined4 *)(iVar4 + 0x50));
  }
  *(undefined4 *)(iVar4 + 0x5c) = uVar5;
  EnumSystemLocalesW(_LangCountryEnumProc_4,1);
  uVar3 = *param_1;
  if ((uVar3 >> 8 & 1) == 0 || ((uVar3 & 7) == 0 || (uVar3 >> 9 & 1) == 0)) {
    *param_1 = 0;
  }
  return;
}

