// rea decompile_all
// name: FUN_0050dcb4
// address: 0x50dcb4
// body: available
// range: 0x50dcb4-0x50dd16 inclusive
// non_contiguous: false
// provider: Ghidra 12.1.2 (ghidra)
// analysis_profile: ac6d50be2cdf54f7005df47d1ed7e7ef55dee595681eb1b7c2e0b00d70cd697d
// limitations: The session serves operations only after Ghidra reports default auto-analysis complete; incomplete analysis does not expose partial results.; The imported Program and temporary project are ephemeral and deleted on close. Annotation operations edit session database metadata; original executable bytes are never written.; Cancelling an active Ghidra request terminates its ephemeral database and discards session annotations. The selected target remains open; the next provider query imports the original artifact again.; Default-space addresses use lowercase 0x-prefixed hexadecimal; other address spaces use <percent-encoded-space>:0x<hex>.; Ghidra Listing reports a terminal call at 0x50dd12 to 0x429127 FUN_00429127 (external=false, thunk=false, hasNoReturn=true); fallthrough is excluded by Ghidra's flow model. This records Ghidra's FunctionManager flag, not an independent verification that the callee cannot return.; The Ghidra Program references PDB ISPToolForMsi.pdb (GUID b8f2ac8f-1d6f-438d-800f-ed4a14426ac6, age (hex) 1, signature unknown, version RSDS); Ghidra reports load state unknown. Original names and types may be missing; an empty name search does not prove a procedure is absent. Use list_procedures and address-based analysis to inspect recovered functions. REA does not admit a caller-selected PDB companion.; This session uses Ghidra 12.1.2. The bridge is verified against 12.1.4; other 12.1.x builds are accepted and the observed version is reported.; Pseudocode is Ghidra decompiler output, not original source and not text-equivalent to Hopper output.; External functions and functions without an analyzable body return null; other decompiler failures remain explicit.
// pseudocode: provider-specific; not original source


void FUN_0050dcb4(int *param_1)

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
  FUN_00429127();
}

