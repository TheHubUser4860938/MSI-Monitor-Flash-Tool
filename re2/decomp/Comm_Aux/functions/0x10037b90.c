// rea decompile_all
// name: FUN_10037b90
// address: 0x10037b90
// body: available
// range: 0x10037b90-0x10037c4b inclusive
// non_contiguous: false
// provider: Ghidra 12.1.2 (ghidra)
// analysis_profile: b075844f08879296d957518397cd0ddda73db81dce53d00d3f0e702766fc2af6
// limitations: The session serves operations only after Ghidra reports default auto-analysis complete; incomplete analysis does not expose partial results.; The imported Program and temporary project are ephemeral and deleted on close. Annotation operations edit session database metadata; original executable bytes are never written.; Cancelling an active Ghidra request terminates its ephemeral database and discards session annotations. The selected target remains open; the next provider query imports the original artifact again.; Default-space addresses use lowercase 0x-prefixed hexadecimal; other address spaces use <percent-encoded-space>:0x<hex>.; Ghidra Listing reports a terminal call at 0x10037c47 to 0x100351a0 FUN_100351a0 (external=false, thunk=false, hasNoReturn=true); fallthrough is excluded by Ghidra's flow model. This records Ghidra's FunctionManager flag, not an independent verification that the callee cannot return.; The Ghidra Program references PDB Comm_Aux.pdb (GUID ba7920cc-daa3-4461-a102-1f8f66c67a2a, age (hex) 1, signature unknown, version RSDS); Ghidra reports load state unknown. Original names and types may be missing; an empty name search does not prove a procedure is absent. Use list_procedures and address-based analysis to inspect recovered functions. REA does not admit a caller-selected PDB companion.; This session uses Ghidra 12.1.2. The bridge is verified against 12.1.4; other 12.1.x builds are accepted and the observed version is reported.; Pseudocode is Ghidra decompiler output, not original source and not text-equivalent to Hopper output.; External functions and functions without an analyzable body return null; other decompiler failures remain explicit.
// pseudocode: provider-specific; not original source


void FUN_10037b90(short param_1)

{
  short *psVar1;
  short *psVar2;
  short *psVar3;
  int iVar4;
  bool bVar5;
  short *psVar6;
  int *in_ECX;
  short *psVar7;
  int iVar8;
  
  iVar4 = *in_ECX;
  iVar8 = *(int *)(iVar4 + -0xc);
  if (-1 < iVar8) {
    if ((int)(1U - *(int *)(iVar4 + -4) | *(int *)(iVar4 + -8) - iVar8) < 0) {
      FUN_10034ff0(iVar8);
    }
    psVar7 = (short *)*in_ECX;
    psVar3 = psVar7 + iVar8;
    psVar1 = psVar7;
    while (psVar6 = psVar1, psVar6 < psVar3) {
      psVar1 = psVar6 + 1;
      if (*psVar6 != param_1) {
        psVar2 = psVar7 + 1;
        bVar5 = false;
        while ((psVar7 != psVar2 && (!bVar5))) {
          *psVar7 = *psVar6;
          psVar6 = psVar6 + 1;
          psVar7 = psVar7 + 1;
          bVar5 = true;
        }
      }
    }
    iVar8 = iVar8 - ((int)psVar6 - (int)psVar7 >> 1);
    *psVar7 = 0;
    if ((-1 < iVar8) && (iVar8 <= *(int *)(*in_ECX + -8))) {
      *(int *)(*in_ECX + -0xc) = iVar8;
      *(undefined2 *)(*in_ECX + iVar8 * 2) = 0;
      return;
    }
  }
                    /* WARNING: Subroutine does not return */
  FUN_100351a0(0x80070057);
}

