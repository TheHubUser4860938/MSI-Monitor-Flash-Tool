// rea decompile_all
// name: FUN_1005f0ed
// address: 0x1005f0ed
// body: available
// range: 0x1005f0ed-0x1005f180 inclusive
// non_contiguous: false
// provider: Ghidra 12.1.2 (ghidra)
// analysis_profile: b075844f08879296d957518397cd0ddda73db81dce53d00d3f0e702766fc2af6
// limitations: The session serves operations only after Ghidra reports default auto-analysis complete; incomplete analysis does not expose partial results.; The imported Program and temporary project are ephemeral and deleted on close. Annotation operations edit session database metadata; original executable bytes are never written.; Cancelling an active Ghidra request terminates its ephemeral database and discards session annotations. The selected target remains open; the next provider query imports the original artifact again.; Default-space addresses use lowercase 0x-prefixed hexadecimal; other address spaces use <percent-encoded-space>:0x<hex>.; Ghidra Listing reports a terminal call at 0x1005f17c to 0x10012a3f FUN_10012a3f (external=false, thunk=false, hasNoReturn=true); fallthrough is excluded by Ghidra's flow model. This records Ghidra's FunctionManager flag, not an independent verification that the callee cannot return.; The Ghidra Program references PDB Comm.pdb (GUID c3062acb-498d-45fa-a233-c8b7e401bb13, age (hex) 1, signature unknown, version RSDS); Ghidra reports load state unknown. Original names and types may be missing; an empty name search does not prove a procedure is absent. Use list_procedures and address-based analysis to inspect recovered functions. REA does not admit a caller-selected PDB companion.; This session uses Ghidra 12.1.2. The bridge is verified against 12.1.4; other 12.1.x builds are accepted and the observed version is reported.; Pseudocode is Ghidra decompiler output, not original source and not text-equivalent to Hopper output.; External functions and functions without an analyzable body return null; other decompiler failures remain explicit.
// pseudocode: provider-specific; not original source


undefined4 FUN_1005f0ed(int param_1,CObList *param_2)

{
  int iVar1;
  undefined4 *puVar2;
  CObject *pCVar3;
  undefined4 uVar4;
  CWnd *pCVar5;
  undefined4 *puVar6;
  int local_8;
  
  CObList::RemoveAll(param_2);
  puVar2 = DAT_101daff4;
  if (param_1 == 0) {
    uVar4 = 0;
  }
  else {
joined_r0x1005f110:
    if (puVar2 != (undefined4 *)0x0) {
      if (puVar2 == (undefined4 *)0x0) {
LAB_1005f17c:
                    /* WARNING: Subroutine does not return */
        FUN_10012a3f();
      }
      iVar1 = puVar2[2];
      puVar2 = (undefined4 *)*puVar2;
      if (iVar1 == 0) goto LAB_1005f17c;
      pCVar5 = CWnd::FromHandlePermanent(*(HWND__ **)(iVar1 + 0x20));
      if (pCVar5 != (CWnd *)0x0) {
        local_8 = *(int *)(iVar1 + 0xc40);
        while (local_8 != 0) {
          puVar6 = (undefined4 *)FUN_1002466e(&local_8);
          pCVar3 = (CObject *)*puVar6;
          if (pCVar3 == (CObject *)0x0) break;
          if (*(int *)(pCVar3 + 0x20) == param_1) {
            CObList::AddTail(param_2,pCVar3);
          }
        }
      }
      goto joined_r0x1005f110;
    }
    uVar4 = *(undefined4 *)(param_2 + 0xc);
  }
  return uVar4;
}

