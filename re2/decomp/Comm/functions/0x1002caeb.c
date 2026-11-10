// rea decompile_all
// name: FUN_1002caeb
// address: 0x1002caeb
// body: available
// range: 0x1002caeb-0x1002cbc0 inclusive
// non_contiguous: false
// provider: Ghidra 12.1.2 (ghidra)
// analysis_profile: b075844f08879296d957518397cd0ddda73db81dce53d00d3f0e702766fc2af6
// limitations: The session serves operations only after Ghidra reports default auto-analysis complete; incomplete analysis does not expose partial results.; The imported Program and temporary project are ephemeral and deleted on close. Annotation operations edit session database metadata; original executable bytes are never written.; Cancelling an active Ghidra request terminates its ephemeral database and discards session annotations. The selected target remains open; the next provider query imports the original artifact again.; Default-space addresses use lowercase 0x-prefixed hexadecimal; other address spaces use <percent-encoded-space>:0x<hex>.; Ghidra Listing reports a terminal call at 0x1002cbbc to 0x10012a3f FUN_10012a3f (external=false, thunk=false, hasNoReturn=true); fallthrough is excluded by Ghidra's flow model. This records Ghidra's FunctionManager flag, not an independent verification that the callee cannot return.; The Ghidra Program references PDB Comm.pdb (GUID c3062acb-498d-45fa-a233-c8b7e401bb13, age (hex) 1, signature unknown, version RSDS); Ghidra reports load state unknown. Original names and types may be missing; an empty name search does not prove a procedure is absent. Use list_procedures and address-based analysis to inspect recovered functions. REA does not admit a caller-selected PDB companion.; This session uses Ghidra 12.1.2. The bridge is verified against 12.1.4; other 12.1.x builds are accepted and the observed version is reported.; Pseudocode is Ghidra decompiler output, not original source and not text-equivalent to Hopper output.; External functions and functions without an analyzable body return null; other decompiler failures remain explicit.
// pseudocode: provider-specific; not original source


void FUN_1002caeb(uint param_1,int param_2)

{
  uint *puVar1;
  AFX_MODULE_STATE *pAVar2;
  int iVar3;
  int in_ECX;
  
  *(undefined4 *)(*(int *)(in_ECX + 0xa8) + 4) = 0x80;
  if (param_1 != 0) {
    pAVar2 = AfxGetModuleState();
    *(undefined4 *)(*(int *)(in_ECX + 0xa8) + 8) = *(undefined4 *)(pAVar2 + 0xc);
  }
  *(uint *)(*(int *)(in_ECX + 0xa8) + 0xc) = param_1;
  *(code **)(*(int *)(in_ECX + 0xa8) + 0x18) = AfxDlgProc;
  *(int *)(*(int *)(in_ECX + 0xa8) + 0x1c) = in_ECX;
  *(undefined **)(*(int *)(in_ECX + 0xa8) + 0x20) = &DAT_1002c8ad;
  if (param_2 != 0) {
    iVar3 = FUN_10003390(param_2);
    if (iVar3 == 0) {
                    /* WARNING: Subroutine does not return */
      FUN_10012a3f();
    }
    *(undefined4 *)(*(int *)(in_ECX + 0xa8) + 0x14) = *(undefined4 *)(in_ECX + 0xac);
    puVar1 = (uint *)(*(int *)(in_ECX + 0xa8) + 4);
    *puVar1 = *puVar1 | 8;
  }
  iVar3 = AfxHelpEnabled();
  if (iVar3 != 0) {
    puVar1 = (uint *)(*(int *)(in_ECX + 0xa8) + 4);
    *puVar1 = *puVar1 | 0x20;
  }
  if ((param_1 & 0xffff0000) == 0) {
    *(uint *)(in_ECX + 0x80) = param_1 & 0xffff;
  }
  *(undefined4 *)(in_ECX + 0x84) = *(undefined4 *)(*(int *)(in_ECX + 0xa8) + 0xc);
  *(undefined4 *)(in_ECX + 0xb0) = 1;
  AfxRegisterMFCCtrlClasses();
  return;
}

