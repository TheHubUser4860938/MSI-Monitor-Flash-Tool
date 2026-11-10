// rea decompile_all
// name: FUN_1006d6e5
// address: 0x1006d6e5
// body: available
// range: 0x1006d6e5-0x1006d747 inclusive
// non_contiguous: false
// provider: Ghidra 12.1.2 (ghidra)
// analysis_profile: b075844f08879296d957518397cd0ddda73db81dce53d00d3f0e702766fc2af6
// limitations: The session serves operations only after Ghidra reports default auto-analysis complete; incomplete analysis does not expose partial results.; The imported Program and temporary project are ephemeral and deleted on close. Annotation operations edit session database metadata; original executable bytes are never written.; Cancelling an active Ghidra request terminates its ephemeral database and discards session annotations. The selected target remains open; the next provider query imports the original artifact again.; Default-space addresses use lowercase 0x-prefixed hexadecimal; other address spaces use <percent-encoded-space>:0x<hex>.; Ghidra Listing reports a terminal call at 0x1006d743 to 0x1004a383 FUN_1004a383 (external=false, thunk=false, hasNoReturn=true); fallthrough is excluded by Ghidra's flow model. This records Ghidra's FunctionManager flag, not an independent verification that the callee cannot return.; The Ghidra Program references PDB WinIspPlugIn.pdb (GUID d9f398c7-6c98-49a8-af25-a0659d5ad2f3, age (hex) 1, signature unknown, version RSDS); Ghidra reports load state unknown. Original names and types may be missing; an empty name search does not prove a procedure is absent. Use list_procedures and address-based analysis to inspect recovered functions. REA does not admit a caller-selected PDB companion.; This session uses Ghidra 12.1.2. The bridge is verified against 12.1.4; other 12.1.x builds are accepted and the observed version is reported.; Pseudocode is Ghidra decompiler output, not original source and not text-equivalent to Hopper output.; External functions and functions without an analyzable body return null; other decompiler failures remain explicit.
// pseudocode: provider-specific; not original source


void FUN_1006d6e5(int *param_1)

{
  DWORD DVar1;
  int iVar2;
  int in_ECX;
  code *pcVar3;
  CGdiObject *pCVar4;
  
  if (*(HGDIOBJ *)(in_ECX + 0x790) != (HGDIOBJ)0x0) {
    DVar1 = GetObjectType(*(HGDIOBJ *)(in_ECX + 0x790));
    if (DVar1 != 6) {
      *(undefined4 *)(in_ECX + 0x790) = 0;
    }
  }
  if (*(void **)(in_ECX + 0x790) == (void *)0x0) {
    pCVar4 = (CGdiObject *)0x11;
    pcVar3 = *(code **)(*param_1 + 0x24);
  }
  else {
    pCVar4 = CGdiObject::FromHandle(*(void **)(in_ECX + 0x790));
    pcVar3 = *(code **)(*param_1 + 0x28);
  }
  guard_check_icall(pCVar4);
  iVar2 = (*pcVar3)();
  if (iVar2 != 0) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  FUN_1004a383();
}

