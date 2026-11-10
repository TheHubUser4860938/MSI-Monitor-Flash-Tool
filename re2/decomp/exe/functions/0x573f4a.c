// rea decompile_all
// name: FUN_00573f4a
// address: 0x573f4a
// body: available
// range: 0x573f4a-0x573fc0 inclusive
// non_contiguous: false
// provider: Ghidra 12.1.2 (ghidra)
// analysis_profile: ac6d50be2cdf54f7005df47d1ed7e7ef55dee595681eb1b7c2e0b00d70cd697d
// limitations: The session serves operations only after Ghidra reports default auto-analysis complete; incomplete analysis does not expose partial results.; The imported Program and temporary project are ephemeral and deleted on close. Annotation operations edit session database metadata; original executable bytes are never written.; Cancelling an active Ghidra request terminates its ephemeral database and discards session annotations. The selected target remains open; the next provider query imports the original artifact again.; Default-space addresses use lowercase 0x-prefixed hexadecimal; other address spaces use <percent-encoded-space>:0x<hex>.; Ghidra Listing reports a terminal call at 0x573fbc to 0x58a87b FUN_0058a87b (external=false, thunk=false, hasNoReturn=true); fallthrough is excluded by Ghidra's flow model. This records Ghidra's FunctionManager flag, not an independent verification that the callee cannot return.; The Ghidra Program references PDB ISPToolForMsi.pdb (GUID b8f2ac8f-1d6f-438d-800f-ed4a14426ac6, age (hex) 1, signature unknown, version RSDS); Ghidra reports load state unknown. Original names and types may be missing; an empty name search does not prove a procedure is absent. Use list_procedures and address-based analysis to inspect recovered functions. REA does not admit a caller-selected PDB companion.; This session uses Ghidra 12.1.2. The bridge is verified against 12.1.4; other 12.1.x builds are accepted and the observed version is reported.; Pseudocode is Ghidra decompiler output, not original source and not text-equivalent to Hopper output.; External functions and functions without an analyzable body return null; other decompiler failures remain explicit.
// pseudocode: provider-specific; not original source


int FUN_00573f4a(int param_1,int param_2,int param_3,uint *param_4,uint *param_5)

{
  int iVar1;
  int *piVar2;
  uint uVar3;
  uint uVar4;
  uint local_8;
  
  uVar3 = *(uint *)(param_1 + 0xc);
  iVar1 = *(int *)(param_1 + 0x10);
  uVar4 = uVar3;
  if (-1 < param_2) {
    piVar2 = (int *)(uVar3 * 0x14 + 8 + iVar1);
    local_8 = uVar3;
    do {
      if (uVar3 == 0xffffffff) goto LAB_00573fbc;
      uVar3 = uVar3 - 1;
      if (((piVar2[-6] < param_3) && (param_3 <= piVar2[-5])) || (uVar3 == 0xffffffff)) {
        param_2 = param_2 + -1;
        uVar4 = local_8;
        local_8 = uVar3;
      }
      piVar2 = piVar2 + -5;
    } while (-1 < param_2);
  }
  uVar3 = uVar3 + 1;
  *param_4 = uVar3;
  *param_5 = uVar4;
  if ((uVar4 <= *(uint *)(param_1 + 0xc)) && (uVar3 <= uVar4)) {
    return uVar3 * 0x14 + iVar1;
  }
LAB_00573fbc:
                    /* WARNING: Subroutine does not return */
  FUN_0058a87b();
}

