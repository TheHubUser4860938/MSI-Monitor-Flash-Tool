// rea decompile_all
// name: FUN_1001ab50
// address: 0x1001ab50
// body: available
// range: 0x1001ab50-0x1001abcf inclusive
// non_contiguous: false
// provider: Ghidra 12.1.2 (ghidra)
// analysis_profile: b075844f08879296d957518397cd0ddda73db81dce53d00d3f0e702766fc2af6
// limitations: The session serves operations only after Ghidra reports default auto-analysis complete; incomplete analysis does not expose partial results.; The imported Program and temporary project are ephemeral and deleted on close. Annotation operations edit session database metadata; original executable bytes are never written.; Cancelling an active Ghidra request terminates its ephemeral database and discards session annotations. The selected target remains open; the next provider query imports the original artifact again.; Default-space addresses use lowercase 0x-prefixed hexadecimal; other address spaces use <percent-encoded-space>:0x<hex>.; The Ghidra Program references PDB WinOperateCScaler.pdb (GUID a6737962-efea-4805-8ae6-1fc1ef126554, age (hex) 1, signature unknown, version RSDS); Ghidra reports load state unknown. Original names and types may be missing; an empty name search does not prove a procedure is absent. Use list_procedures and address-based analysis to inspect recovered functions. REA does not admit a caller-selected PDB companion.; This session uses Ghidra 12.1.2. The bridge is verified against 12.1.4; other 12.1.x builds are accepted and the observed version is reported.; Pseudocode is Ghidra decompiler output, not original source and not text-equivalent to Hopper output.; External functions and functions without an analyzable body return null; other decompiler failures remain explicit.
// pseudocode: provider-specific; not original source


void FUN_1001ab50(undefined4 param_1,undefined4 *param_2,undefined4 param_3,int *param_4,
                 byte *param_5,int param_6)

{
  byte bVar1;
  int iVar2;
  byte *pbVar3;
  uint uVar4;
  
  do {
    if (param_6 == 0) {
      param_2[1] = param_4;
      *param_2 = param_3;
      return;
    }
    if (param_4 == (int *)0x0) {
LAB_1001abb4:
      uVar4 = (uint)param_3 >> 8;
      param_3 = CONCAT31((int3)uVar4,1);
    }
    else {
      bVar1 = *param_5;
      if (*(int *)param_4[8] == 0) {
LAB_1001aba1:
        uVar4 = (**(code **)(*param_4 + 0xc))(bVar1);
      }
      else {
        iVar2 = *(int *)param_4[0xc];
        if (iVar2 < 1) goto LAB_1001aba1;
        *(int *)param_4[0xc] = iVar2 + -1;
        pbVar3 = *(byte **)param_4[8];
        *(byte **)param_4[8] = pbVar3 + 1;
        *pbVar3 = bVar1;
        uVar4 = (uint)bVar1;
      }
      if (uVar4 == 0xffffffff) goto LAB_1001abb4;
    }
    param_5 = param_5 + 1;
    param_6 = param_6 + -1;
  } while( true );
}

