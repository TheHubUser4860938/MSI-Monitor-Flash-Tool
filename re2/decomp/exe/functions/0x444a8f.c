// rea decompile_all
// name: FUN_00444a8f
// address: 0x444a8f
// body: available
// range: 0x444a8f-0x444b3b inclusive
// non_contiguous: false
// provider: Ghidra 12.1.2 (ghidra)
// analysis_profile: ac6d50be2cdf54f7005df47d1ed7e7ef55dee595681eb1b7c2e0b00d70cd697d
// limitations: The session serves operations only after Ghidra reports default auto-analysis complete; incomplete analysis does not expose partial results.; The imported Program and temporary project are ephemeral and deleted on close. Annotation operations edit session database metadata; original executable bytes are never written.; Cancelling an active Ghidra request terminates its ephemeral database and discards session annotations. The selected target remains open; the next provider query imports the original artifact again.; Default-space addresses use lowercase 0x-prefixed hexadecimal; other address spaces use <percent-encoded-space>:0x<hex>.; Ghidra Listing reports a terminal call at 0x444b37 to 0x429127 FUN_00429127 (external=false, thunk=false, hasNoReturn=true); fallthrough is excluded by Ghidra's flow model. This records Ghidra's FunctionManager flag, not an independent verification that the callee cannot return.; The Ghidra Program references PDB ISPToolForMsi.pdb (GUID b8f2ac8f-1d6f-438d-800f-ed4a14426ac6, age (hex) 1, signature unknown, version RSDS); Ghidra reports load state unknown. Original names and types may be missing; an empty name search does not prove a procedure is absent. Use list_procedures and address-based analysis to inspect recovered functions. REA does not admit a caller-selected PDB companion.; This session uses Ghidra 12.1.2. The bridge is verified against 12.1.4; other 12.1.x builds are accepted and the observed version is reported.; Pseudocode is Ghidra decompiler output, not original source and not text-equivalent to Hopper output.; External functions and functions without an analyzable body return null; other decompiler failures remain explicit.
// pseudocode: provider-specific; not original source


undefined4 FUN_00444a8f(int param_1)

{
  LPACCEL lpAccelDst;
  int iVar1;
  int in_ECX;
  LPACCEL ptVar2;
  int iVar3;
  undefined4 uVar4;
  byte bVar5;
  
  if ((*(ushort *)(in_ECX + 0x80) == 0) || (uVar4 = 0, *(int *)(in_ECX + 0x7c) == 0)) {
    uVar4 = 0;
  }
  else {
    lpAccelDst = (LPACCEL)FUN_00416444((uint)*(ushort *)(in_ECX + 0x80) * 6);
    iVar1 = CopyAcceleratorTableW
                      (*(HACCEL *)(in_ECX + 0x7c),lpAccelDst,(uint)*(ushort *)(in_ECX + 0x80));
    iVar3 = 0;
    ptVar2 = lpAccelDst;
    if (0 < iVar1) {
      do {
        if (param_1 == 0) {
                    /* WARNING: Subroutine does not return */
          FUN_00429127();
        }
        if (*(int *)(param_1 + 4) == 0x106) {
          bVar5 = 0x10;
        }
        else {
          bVar5 = 0;
        }
        if (((ptVar2->fVirt & 0xfd) == bVar5) && (ptVar2->key == *(WORD *)(param_1 + 8))) {
          uVar4 = 1;
          break;
        }
        iVar3 = iVar3 + 1;
        ptVar2 = ptVar2 + 1;
      } while (iVar3 < iVar1);
    }
    FID_conflict__free(lpAccelDst);
  }
  return uVar4;
}

