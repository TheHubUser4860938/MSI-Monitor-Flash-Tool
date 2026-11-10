// rea decompile_all
// name: ___BuildCatchObject
// address: 0x572817
// body: available
// range: 0x572817-0x572898 inclusive
// non_contiguous: false
// provider: Ghidra 12.1.2 (ghidra)
// analysis_profile: ac6d50be2cdf54f7005df47d1ed7e7ef55dee595681eb1b7c2e0b00d70cd697d
// limitations: The session serves operations only after Ghidra reports default auto-analysis complete; incomplete analysis does not expose partial results.; The imported Program and temporary project are ephemeral and deleted on close. Annotation operations edit session database metadata; original executable bytes are never written.; Cancelling an active Ghidra request terminates its ephemeral database and discards session annotations. The selected target remains open; the next provider query imports the original artifact again.; Default-space addresses use lowercase 0x-prefixed hexadecimal; other address spaces use <percent-encoded-space>:0x<hex>.; The Ghidra Program references PDB ISPToolForMsi.pdb (GUID b8f2ac8f-1d6f-438d-800f-ed4a14426ac6, age (hex) 1, signature unknown, version RSDS); Ghidra reports load state unknown. Original names and types may be missing; an empty name search does not prove a procedure is absent. Use list_procedures and address-based analysis to inspect recovered functions. REA does not admit a caller-selected PDB companion.; This session uses Ghidra 12.1.2. The bridge is verified against 12.1.4; other 12.1.x builds are accepted and the observed version is reported.; Pseudocode is Ghidra decompiler output, not original source and not text-equivalent to Hopper output.; External functions and functions without an analyzable body return null; other decompiler failures remain explicit.
// pseudocode: provider-specific; not original source


/* WARNING: Function: __SEH_prolog4 replaced with injection: SEH_prolog4 */
/* WARNING: Function: __SEH_epilog4 replaced with injection: EH_epilog3 */
/* Library Function - Single Match
    ___BuildCatchObject
   
   Library: Visual Studio 2015 Release */

void ___BuildCatchObject(int param_1,int param_2,int *param_3,int param_4)

{
  int iVar1;
  undefined4 uVar2;
  int iVar3;
  
  iVar3 = param_2;
  if (-1 < *param_3) {
    iVar3 = param_2 + 0xc + param_3[2];
  }
  iVar1 = ___BuildCatchObjectHelper(param_1,param_2,param_3,param_4);
  if (iVar1 == 1) {
    uVar2 = ___AdjustPointer(*(undefined4 *)(param_1 + 0x18),param_4 + 8);
    FID_conflict__CallMemberFunction2(iVar3,*(undefined4 *)(param_4 + 0x18),uVar2);
  }
  else if (iVar1 == 2) {
    uVar2 = ___AdjustPointer(*(undefined4 *)(param_1 + 0x18),param_4 + 8,1);
    FID_conflict__CallMemberFunction2(iVar3,*(undefined4 *)(param_4 + 0x18),uVar2);
  }
  return;
}

