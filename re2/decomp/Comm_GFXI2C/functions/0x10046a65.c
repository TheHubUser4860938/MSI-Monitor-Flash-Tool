// rea decompile_all
// name: FUN_10046a65
// address: 0x10046a65
// body: available
// range: 0x10046a65-0x10046b09 inclusive
// non_contiguous: false
// provider: Ghidra 12.1.2 (ghidra)
// analysis_profile: b075844f08879296d957518397cd0ddda73db81dce53d00d3f0e702766fc2af6
// limitations: The session serves operations only after Ghidra reports default auto-analysis complete; incomplete analysis does not expose partial results.; The imported Program and temporary project are ephemeral and deleted on close. Annotation operations edit session database metadata; original executable bytes are never written.; Cancelling an active Ghidra request terminates its ephemeral database and discards session annotations. The selected target remains open; the next provider query imports the original artifact again.; Default-space addresses use lowercase 0x-prefixed hexadecimal; other address spaces use <percent-encoded-space>:0x<hex>.; Ghidra Listing reports a terminal call at 0x10046b05 to 0x10038e31 FUN_10038e31 (external=false, thunk=false, hasNoReturn=true); fallthrough is excluded by Ghidra's flow model. This records Ghidra's FunctionManager flag, not an independent verification that the callee cannot return.; The Ghidra Program references PDB Comm_GFXI2C.pdb (GUID d304cc6d-b3ee-4851-b468-0ab5e385ca92, age (hex) 1, signature unknown, version RSDS); Ghidra reports load state unknown. Original names and types may be missing; an empty name search does not prove a procedure is absent. Use list_procedures and address-based analysis to inspect recovered functions. REA does not admit a caller-selected PDB companion.; This session uses Ghidra 12.1.2. The bridge is verified against 12.1.4; other 12.1.x builds are accepted and the observed version is reported.; Pseudocode is Ghidra decompiler output, not original source and not text-equivalent to Hopper output.; External functions and functions without an analyzable body return null; other decompiler failures remain explicit.
// pseudocode: provider-specific; not original source


void __thiscall FUN_10046a65(void *this,int param_1,undefined4 param_2,int param_3)

{
  int iVar1;
  
  if ((-1 < param_1) && (0 < param_3)) {
    if (param_1 < *(int *)((int)this + 8)) {
      iVar1 = *(int *)((int)this + 8);
      CPtrArray::SetSize(this,iVar1 + param_3,-1);
      FUN_10003e20((void *)(*(int *)((int)this + 4) + (param_1 + param_3) * 4),
                   ((*(int *)((int)this + 8) - param_1) - param_3) * 4,
                   (void *)(*(int *)((int)this + 4) + param_1 * 4),(iVar1 - param_1) * 4);
      _memset((void *)(*(int *)((int)this + 4) + param_1 * 4),0,param_3 << 2);
    }
    else {
      CPtrArray::SetSize(this,param_1 + param_3,-1);
    }
    iVar1 = param_1 << 2;
    do {
      param_3 = param_3 + -1;
      *(undefined4 *)(iVar1 + *(int *)((int)this + 4)) = param_2;
      iVar1 = iVar1 + 4;
    } while (param_3 != 0);
    return;
  }
                    /* WARNING: Subroutine does not return */
  FUN_10038e31();
}

