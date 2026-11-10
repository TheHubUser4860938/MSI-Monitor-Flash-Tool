// rea decompile_all
// name: FUN_004fd70e
// address: 0x4fd70e
// body: available
// range: 0x4fd70e-0x4fd827 inclusive
// non_contiguous: false
// provider: Ghidra 12.1.2 (ghidra)
// analysis_profile: ac6d50be2cdf54f7005df47d1ed7e7ef55dee595681eb1b7c2e0b00d70cd697d
// limitations: The session serves operations only after Ghidra reports default auto-analysis complete; incomplete analysis does not expose partial results.; The imported Program and temporary project are ephemeral and deleted on close. Annotation operations edit session database metadata; original executable bytes are never written.; Cancelling an active Ghidra request terminates its ephemeral database and discards session annotations. The selected target remains open; the next provider query imports the original artifact again.; Default-space addresses use lowercase 0x-prefixed hexadecimal; other address spaces use <percent-encoded-space>:0x<hex>.; Ghidra Listing reports a terminal call at 0x4fd81e to 0x4dcf73 FUN_004dcf73 (external=false, thunk=false, hasNoReturn=false); fallthrough is excluded by Ghidra's flow model. The reason for the terminal flow is not established by this observation.; Ghidra Listing reports a terminal call at 0x4fd823 to 0x429127 FUN_00429127 (external=false, thunk=false, hasNoReturn=true); fallthrough is excluded by Ghidra's flow model. This records Ghidra's FunctionManager flag, not an independent verification that the callee cannot return.; The Ghidra Program references PDB ISPToolForMsi.pdb (GUID b8f2ac8f-1d6f-438d-800f-ed4a14426ac6, age (hex) 1, signature unknown, version RSDS); Ghidra reports load state unknown. Original names and types may be missing; an empty name search does not prove a procedure is absent. Use list_procedures and address-based analysis to inspect recovered functions. REA does not admit a caller-selected PDB companion.; This session uses Ghidra 12.1.2. The bridge is verified against 12.1.4; other 12.1.x builds are accepted and the observed version is reported.; Pseudocode is Ghidra decompiler output, not original source and not text-equivalent to Hopper output.; External functions and functions without an analyzable body return null; other decompiler failures remain explicit.
// pseudocode: provider-specific; not original source


void FUN_004fd70e(void)

{
  int iVar1;
  CObject *pCVar2;
  code *pcVar3;
  uint uVar4;
  CObject *in_ECX;
  byte bVar5;
  
  bVar5 = *(int *)(in_ECX + 4) != 0;
  if (*(int *)(in_ECX + 8) != 0) {
    bVar5 = bVar5 + 1;
  }
  if (*(int *)(in_ECX + 0x10) != 0) {
    bVar5 = bVar5 + 1;
  }
  if (*(int *)(in_ECX + 0x14) != 0) {
    bVar5 = bVar5 + 1;
  }
  if ((bVar5 < 2) && (*(int *)(in_ECX + 0x30) < 1)) {
    iVar1 = *(int *)(in_ECX + 0xc);
    if ((((iVar1 != 0) && ((*(int *)(iVar1 + 300) != 0 && (iVar1 != 0)))) ||
        (iVar1 = *(int *)(in_ECX + 0x18), iVar1 == 0)) ||
       (iVar1 == *(int *)(*(int *)(in_ECX + 0x1c) + 0x3c))) {
      FUN_004dcf73();
      return;
    }
    pCVar2 = *(CObject **)(iVar1 + 0x10);
    if ((pCVar2 == (CObject *)0x0) && (*(int *)(iVar1 + 0x14) == 0)) {
                    /* WARNING: Subroutine does not return */
      FUN_00429127();
    }
    uVar4 = (uint)(pCVar2 == in_ECX);
    if (pCVar2 == in_ECX) {
      *(undefined4 *)(iVar1 + 0x10) = 0;
    }
    else {
      *(undefined4 *)(iVar1 + 0x14) = 0;
    }
    if (*(int *)(in_ECX + 4) == 0) {
      if (*(int *)(in_ECX + 8) == 0) {
        if (*(int *)(in_ECX + 0x10) == 0) {
          if (*(int *)(in_ECX + 0x14) != 0) {
            CPaneContainer::SetPaneContainer
                      (*(CPaneContainer **)(in_ECX + 0x18),*(CPaneContainer **)(in_ECX + 0x14),uVar4
                      );
            *(undefined4 *)(in_ECX + 0x14) = 0;
          }
        }
        else {
          CPaneContainer::SetPaneContainer
                    (*(CPaneContainer **)(in_ECX + 0x18),*(CPaneContainer **)(in_ECX + 0x10),uVar4);
          *(undefined4 *)(in_ECX + 0x10) = 0;
        }
      }
      else {
        CPaneContainer::SetPane
                  (*(CPaneContainer **)(in_ECX + 0x18),*(CDockablePane **)(in_ECX + 8),uVar4);
        *(undefined4 *)(in_ECX + 8) = 0;
      }
    }
    else {
      CPaneContainer::SetPane
                (*(CPaneContainer **)(in_ECX + 0x18),*(CDockablePane **)(in_ECX + 4),uVar4);
      *(undefined4 *)(in_ECX + 4) = 0;
    }
    if (*(int **)(in_ECX + 0xc) != (int *)0x0) {
      pcVar3 = *(code **)(**(int **)(in_ECX + 0xc) + 0x60);
      guard_check_icall();
      (*pcVar3)();
      *(undefined4 *)(in_ECX + 0xc) = 0;
    }
    *(undefined4 *)(in_ECX + 0x3c) = 1;
    CObList::AddTail((CObList *)&DAT_006173c4,in_ECX);
  }
  return;
}

