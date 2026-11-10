// rea decompile_all
// name: FUN_100bae5a
// address: 0x100bae5a
// body: available
// range: 0x100bae5a-0x100bae9a inclusive
// non_contiguous: false
// provider: Ghidra 12.1.2 (ghidra)
// analysis_profile: b075844f08879296d957518397cd0ddda73db81dce53d00d3f0e702766fc2af6
// limitations: The session serves operations only after Ghidra reports default auto-analysis complete; incomplete analysis does not expose partial results.; The imported Program and temporary project are ephemeral and deleted on close. Annotation operations edit session database metadata; original executable bytes are never written.; Cancelling an active Ghidra request terminates its ephemeral database and discards session annotations. The selected target remains open; the next provider query imports the original artifact again.; Default-space addresses use lowercase 0x-prefixed hexadecimal; other address spaces use <percent-encoded-space>:0x<hex>.; Ghidra Listing reports a terminal call at 0x100bae96 to 0x10012a3f FUN_10012a3f (external=false, thunk=false, hasNoReturn=true); fallthrough is excluded by Ghidra's flow model. This records Ghidra's FunctionManager flag, not an independent verification that the callee cannot return.; The Ghidra Program references PDB Comm.pdb (GUID c3062acb-498d-45fa-a233-c8b7e401bb13, age (hex) 1, signature unknown, version RSDS); Ghidra reports load state unknown. Original names and types may be missing; an empty name search does not prove a procedure is absent. Use list_procedures and address-based analysis to inspect recovered functions. REA does not admit a caller-selected PDB companion.; This session uses Ghidra 12.1.2. The bridge is verified against 12.1.4; other 12.1.x builds are accepted and the observed version is reported.; Pseudocode is Ghidra decompiler output, not original source and not text-equivalent to Hopper output.; External functions and functions without an analyzable body return null; other decompiler failures remain explicit.
// pseudocode: provider-specific; not original source


void FUN_100bae5a(void)

{
  code *pcVar1;
  int iVar2;
  CCommandManager *this;
  int *in_ECX;
  uint uVar3;
  int iVar4;
  int iVar5;
  
  iVar2 = FUN_1005f070(in_ECX[0x2fd]);
  if (iVar2 != 0) {
    iVar5 = -1;
    iVar4 = 0;
    uVar3 = *(uint *)(iVar2 + 0x20);
    this = (CCommandManager *)FUN_100918eb();
    CCommandManager::EnableMenuItemImage(this,uVar3,iVar4,iVar5);
    pcVar1 = *(code **)(*in_ECX + 0x20c);
    guard_check_icall();
    (*pcVar1)();
    return;
  }
                    /* WARNING: Subroutine does not return */
  FUN_10012a3f();
}

