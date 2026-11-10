// rea decompile_all
// name: FUN_1002fd65
// address: 0x1002fd65
// body: available
// range: 0x1002fd65-0x1002fddd inclusive
// non_contiguous: false
// provider: Ghidra 12.1.2 (ghidra)
// analysis_profile: b075844f08879296d957518397cd0ddda73db81dce53d00d3f0e702766fc2af6
// limitations: The session serves operations only after Ghidra reports default auto-analysis complete; incomplete analysis does not expose partial results.; The imported Program and temporary project are ephemeral and deleted on close. Annotation operations edit session database metadata; original executable bytes are never written.; Cancelling an active Ghidra request terminates its ephemeral database and discards session annotations. The selected target remains open; the next provider query imports the original artifact again.; Default-space addresses use lowercase 0x-prefixed hexadecimal; other address spaces use <percent-encoded-space>:0x<hex>.; Ghidra Listing reports a terminal call at 0x1002fdd9 to 0x10012a3f FUN_10012a3f (external=false, thunk=false, hasNoReturn=true); fallthrough is excluded by Ghidra's flow model. This records Ghidra's FunctionManager flag, not an independent verification that the callee cannot return.; The Ghidra Program references PDB Comm.pdb (GUID c3062acb-498d-45fa-a233-c8b7e401bb13, age (hex) 1, signature unknown, version RSDS); Ghidra reports load state unknown. Original names and types may be missing; an empty name search does not prove a procedure is absent. Use list_procedures and address-based analysis to inspect recovered functions. REA does not admit a caller-selected PDB companion.; This session uses Ghidra 12.1.2. The bridge is verified against 12.1.4; other 12.1.x builds are accepted and the observed version is reported.; Pseudocode is Ghidra decompiler output, not original source and not text-equivalent to Hopper output.; External functions and functions without an analyzable body return null; other decompiler failures remain explicit.
// pseudocode: provider-specific; not original source


int FUN_1002fd65(undefined4 param_1)

{
  long lVar1;
  int iVar2;
  CTaskDialog *in_ECX;
  _TASKDIALOGCONFIG local_64 [4];
  undefined4 local_60;
  
  if (*(int *)(in_ECX + 4) == 0) {
    _memset(local_64,0,0x60);
    local_60 = param_1;
    CTaskDialog::FillStruct(in_ECX,local_64);
    lVar1 = _AfxTaskDialogIndirect
                      (local_64,(int *)(in_ECX + 0x8c),(int *)(in_ECX + 0x88),(int *)(in_ECX + 0x84)
                      );
    CTaskDialog::FreeStruct(in_ECX,local_64);
    if (lVar1 == 0) {
      iVar2 = *(int *)(in_ECX + 0x8c);
    }
    else {
      iVar2 = -1;
    }
    return iVar2;
  }
                    /* WARNING: Subroutine does not return */
  FUN_10012a3f();
}

