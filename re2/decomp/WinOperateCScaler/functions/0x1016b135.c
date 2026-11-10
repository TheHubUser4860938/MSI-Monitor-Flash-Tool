// rea decompile_all
// name: ___TypeMatch
// address: 0x1016b135
// body: available
// range: 0x1016b135-0x1016b1c2 inclusive
// non_contiguous: false
// provider: Ghidra 12.1.2 (ghidra)
// analysis_profile: b075844f08879296d957518397cd0ddda73db81dce53d00d3f0e702766fc2af6
// limitations: The session serves operations only after Ghidra reports default auto-analysis complete; incomplete analysis does not expose partial results.; The imported Program and temporary project are ephemeral and deleted on close. Annotation operations edit session database metadata; original executable bytes are never written.; Cancelling an active Ghidra request terminates its ephemeral database and discards session annotations. The selected target remains open; the next provider query imports the original artifact again.; Default-space addresses use lowercase 0x-prefixed hexadecimal; other address spaces use <percent-encoded-space>:0x<hex>.; The Ghidra Program references PDB WinOperateCScaler.pdb (GUID a6737962-efea-4805-8ae6-1fc1ef126554, age (hex) 1, signature unknown, version RSDS); Ghidra reports load state unknown. Original names and types may be missing; an empty name search does not prove a procedure is absent. Use list_procedures and address-based analysis to inspect recovered functions. REA does not admit a caller-selected PDB companion.; This session uses Ghidra 12.1.2. The bridge is verified against 12.1.4; other 12.1.x builds are accepted and the observed version is reported.; Pseudocode is Ghidra decompiler output, not original source and not text-equivalent to Hopper output.; External functions and functions without an analyzable body return null; other decompiler failures remain explicit.
// pseudocode: provider-specific; not original source


/* Library Function - Single Match
    ___TypeMatch
   
   Library: Visual Studio 2015 Release */

undefined4 ___TypeMatch(byte *param_1,byte *param_2,byte *param_3)

{
  byte bVar1;
  int iVar2;
  byte *pbVar3;
  uint uVar4;
  byte *pbVar5;
  undefined4 uVar6;
  bool bVar7;
  
  iVar2 = *(int *)(param_1 + 4);
  if (((iVar2 == 0) || (pbVar5 = (byte *)(iVar2 + 8), *pbVar5 == 0)) ||
     (((*param_1 & 0x80) != 0 && ((*param_2 & 0x10) != 0)))) {
    uVar6 = 1;
  }
  else {
    uVar6 = 0;
    if (iVar2 != *(int *)(param_2 + 4)) {
      pbVar3 = (byte *)(*(int *)(param_2 + 4) + 8);
      do {
        bVar1 = *pbVar5;
        bVar7 = bVar1 < *pbVar3;
        if (bVar1 != *pbVar3) {
LAB_1016b186:
          uVar4 = -(uint)bVar7 | 1;
          goto LAB_1016b18b;
        }
        if (bVar1 == 0) break;
        bVar1 = pbVar5[1];
        bVar7 = bVar1 < pbVar3[1];
        if (bVar1 != pbVar3[1]) goto LAB_1016b186;
        pbVar5 = pbVar5 + 2;
        pbVar3 = pbVar3 + 2;
      } while (bVar1 != 0);
      uVar4 = 0;
LAB_1016b18b:
      if (uVar4 != 0) {
        return 0;
      }
    }
    if ((((*param_2 & 2) == 0) || ((*param_1 & 8) != 0)) &&
       ((((*param_3 & 1) == 0 || ((*param_1 & 1) != 0)) &&
        (((*param_3 & 2) == 0 || ((*param_1 & 2) != 0)))))) {
      uVar6 = 1;
    }
  }
  return uVar6;
}

