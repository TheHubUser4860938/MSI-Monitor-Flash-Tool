// rea decompile_all
// name: FUN_00404ab0
// address: 0x404ab0
// body: available
// range: 0x404ab0-0x404b26 inclusive
// non_contiguous: false
// provider: Ghidra 12.1.2 (ghidra)
// analysis_profile: ac6d50be2cdf54f7005df47d1ed7e7ef55dee595681eb1b7c2e0b00d70cd697d
// limitations: The session serves operations only after Ghidra reports default auto-analysis complete; incomplete analysis does not expose partial results.; The imported Program and temporary project are ephemeral and deleted on close. Annotation operations edit session database metadata; original executable bytes are never written.; Cancelling an active Ghidra request terminates its ephemeral database and discards session annotations. The selected target remains open; the next provider query imports the original artifact again.; Default-space addresses use lowercase 0x-prefixed hexadecimal; other address spaces use <percent-encoded-space>:0x<hex>.; The Ghidra Program references PDB ISPToolForMsi.pdb (GUID b8f2ac8f-1d6f-438d-800f-ed4a14426ac6, age (hex) 1, signature unknown, version RSDS); Ghidra reports load state unknown. Original names and types may be missing; an empty name search does not prove a procedure is absent. Use list_procedures and address-based analysis to inspect recovered functions. REA does not admit a caller-selected PDB companion.; This session uses Ghidra 12.1.2. The bridge is verified against 12.1.4; other 12.1.x builds are accepted and the observed version is reported.; Pseudocode is Ghidra decompiler output, not original source and not text-equivalent to Hopper output.; External functions and functions without an analyzable body return null; other decompiler failures remain explicit.
// pseudocode: provider-specific; not original source


void FUN_00404ab0(undefined4 param_1,undefined4 *param_2,undefined4 param_3,int *param_4,
                 byte param_5,int param_6)

{
  int iVar1;
  byte *pbVar2;
  uint uVar3;
  
  do {
    if (param_6 == 0) {
      param_2[1] = param_4;
      *param_2 = param_3;
      return;
    }
    if (param_4 == (int *)0x0) {
LAB_00404b0c:
      uVar3 = (uint)param_3 >> 8;
      param_3 = CONCAT31((int3)uVar3,1);
    }
    else {
      if (*(int *)param_4[8] == 0) {
LAB_00404af9:
        uVar3 = (**(code **)(*param_4 + 0xc))(param_5);
      }
      else {
        iVar1 = *(int *)param_4[0xc];
        if (iVar1 < 1) goto LAB_00404af9;
        *(int *)param_4[0xc] = iVar1 + -1;
        pbVar2 = *(byte **)param_4[8];
        *(byte **)param_4[8] = pbVar2 + 1;
        *pbVar2 = param_5;
        uVar3 = (uint)param_5;
      }
      if (uVar3 == 0xffffffff) goto LAB_00404b0c;
    }
    param_6 = param_6 + -1;
  } while( true );
}

