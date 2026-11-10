// rea decompile_all
// name: FUN_1004993b
// address: 0x1004993b
// body: available
// range: 0x1004993b-0x1004998e inclusive
// non_contiguous: false
// provider: Ghidra 12.1.2 (ghidra)
// analysis_profile: b075844f08879296d957518397cd0ddda73db81dce53d00d3f0e702766fc2af6
// limitations: The session serves operations only after Ghidra reports default auto-analysis complete; incomplete analysis does not expose partial results.; The imported Program and temporary project are ephemeral and deleted on close. Annotation operations edit session database metadata; original executable bytes are never written.; Cancelling an active Ghidra request terminates its ephemeral database and discards session annotations. The selected target remains open; the next provider query imports the original artifact again.; Default-space addresses use lowercase 0x-prefixed hexadecimal; other address spaces use <percent-encoded-space>:0x<hex>.; Ghidra Listing reports a terminal call at 0x1004998a to 0x1005b95c FUN_1005b95c (external=false, thunk=false, hasNoReturn=true); fallthrough is excluded by Ghidra's flow model. This records Ghidra's FunctionManager flag, not an independent verification that the callee cannot return.; The Ghidra Program references PDB Comm_Aux.pdb (GUID ba7920cc-daa3-4461-a102-1f8f66c67a2a, age (hex) 1, signature unknown, version RSDS); Ghidra reports load state unknown. Original names and types may be missing; an empty name search does not prove a procedure is absent. Use list_procedures and address-based analysis to inspect recovered functions. REA does not admit a caller-selected PDB companion.; This session uses Ghidra 12.1.2. The bridge is verified against 12.1.4; other 12.1.x builds are accepted and the observed version is reported.; Pseudocode is Ghidra decompiler output, not original source and not text-equivalent to Hopper output.; External functions and functions without an analyzable body return null; other decompiler failures remain explicit.
// pseudocode: provider-specific; not original source


void FUN_1004993b(LPCVOID param_1,DWORD param_2)

{
  BOOL BVar1;
  DWORD DVar2;
  undefined4 uVar3;
  DWORD in_ECX;
  DWORD local_8;
  
  if (param_2 != 0) {
    local_8 = in_ECX;
    BVar1 = WriteFile(*(HANDLE *)(in_ECX + 4),param_1,param_2,&local_8,(LPOVERLAPPED)0x0);
    if (BVar1 == 0) {
      uVar3 = *(undefined4 *)(in_ECX + 0xc);
      DVar2 = GetLastError();
      FUN_1005bd48(DVar2,uVar3);
    }
    if (local_8 != param_2) {
      uVar3 = FUN_10034ad0();
                    /* WARNING: Subroutine does not return */
      FUN_1005b95c(0xd,0xffffffff,uVar3);
    }
  }
  return;
}

