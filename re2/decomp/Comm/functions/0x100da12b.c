// rea decompile_all
// name: FUN_100da12b
// address: 0x100da12b
// body: available
// range: 0x100da12b-0x100da255 inclusive
// non_contiguous: false
// provider: Ghidra 12.1.2 (ghidra)
// analysis_profile: b075844f08879296d957518397cd0ddda73db81dce53d00d3f0e702766fc2af6
// limitations: The session serves operations only after Ghidra reports default auto-analysis complete; incomplete analysis does not expose partial results.; The imported Program and temporary project are ephemeral and deleted on close. Annotation operations edit session database metadata; original executable bytes are never written.; Cancelling an active Ghidra request terminates its ephemeral database and discards session annotations. The selected target remains open; the next provider query imports the original artifact again.; Default-space addresses use lowercase 0x-prefixed hexadecimal; other address spaces use <percent-encoded-space>:0x<hex>.; Ghidra Listing reports a terminal call at 0x100da251 to 0x10012a3f FUN_10012a3f (external=false, thunk=false, hasNoReturn=true); fallthrough is excluded by Ghidra's flow model. This records Ghidra's FunctionManager flag, not an independent verification that the callee cannot return.; The Ghidra Program references PDB Comm.pdb (GUID c3062acb-498d-45fa-a233-c8b7e401bb13, age (hex) 1, signature unknown, version RSDS); Ghidra reports load state unknown. Original names and types may be missing; an empty name search does not prove a procedure is absent. Use list_procedures and address-based analysis to inspect recovered functions. REA does not admit a caller-selected PDB companion.; This session uses Ghidra 12.1.2. The bridge is verified against 12.1.4; other 12.1.x builds are accepted and the observed version is reported.; Pseudocode is Ghidra decompiler output, not original source and not text-equivalent to Hopper output.; External functions and functions without an analyzable body return null; other decompiler failures remain explicit.
// pseudocode: provider-specific; not original source


CMFCToolBarButton * FUN_100da12b(CMFCToolBarButton *param_1)

{
  undefined4 *puVar1;
  int iVar2;
  CObject *pCVar3;
  CMFCToolBarButton *in_ECX;
  code *pcVar4;
  int *local_8;
  
  CMFCToolBarButton::CopyFrom(in_ECX,param_1);
  *(undefined4 *)(in_ECX + 0x98) = *(undefined4 *)(param_1 + 0x98);
  *(undefined4 *)(in_ECX + 0xa8) = *(undefined4 *)(param_1 + 0xa8);
  *(undefined4 *)(in_ECX + 0xac) = *(undefined4 *)(param_1 + 0xac);
  *(undefined4 *)(in_ECX + 0xc4) = *(undefined4 *)(param_1 + 0xc4);
  *(undefined4 *)(in_ECX + 0xb0) = *(undefined4 *)(param_1 + 0xb0);
  *(undefined4 *)(in_ECX + 0xc0) = *(undefined4 *)(param_1 + 0xc0);
  *(undefined4 *)(in_ECX + 0xb4) = *(undefined4 *)(param_1 + 0xb4);
  *(undefined4 *)(in_ECX + 0xb8) = *(undefined4 *)(param_1 + 0xb8);
  pcVar4 = *(code **)(*(int *)in_ECX + 0xf8);
  guard_check_icall(*(undefined4 *)(param_1 + 0xbc));
  do {
    (*pcVar4)();
    do {
      if (*(int *)(in_ECX + 0x7c) == 0) {
        local_8 = *(int **)(param_1 + 0x74);
        if (local_8 == (int *)0x0) {
          return (CMFCToolBarButton *)0x0;
        }
        goto LAB_100da1f0;
      }
      local_8 = (int *)FUN_10029c75();
    } while (local_8 == (int *)0x0);
    pcVar4 = *(code **)(*local_8 + 4);
    guard_check_icall(1);
  } while( true );
LAB_100da1f0:
  puVar1 = (undefined4 *)FUN_1005f4c2(&local_8);
  if (puVar1 == (undefined4 *)0x0) {
LAB_100da251:
                    /* WARNING: Subroutine does not return */
    FUN_10012a3f();
  }
  pcVar4 = *(code **)*puVar1;
  guard_check_icall();
  iVar2 = (*pcVar4)();
  if ((iVar2 == 0) || (pCVar3 = (CObject *)FUN_10019cd8(), pCVar3 == (CObject *)0x0))
  goto LAB_100da251;
  pcVar4 = *(code **)(*(int *)pCVar3 + 0x14);
  guard_check_icall(puVar1);
  (*pcVar4)();
  CObList::AddTail((CObList *)(in_ECX + 0x70),pCVar3);
  if (local_8 == (int *)0x0) {
    return param_1 + 0x70;
  }
  goto LAB_100da1f0;
}

