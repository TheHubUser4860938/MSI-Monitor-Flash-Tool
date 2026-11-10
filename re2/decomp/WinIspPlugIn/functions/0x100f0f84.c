// rea decompile_all
// name: FUN_100f0f84
// address: 0x100f0f84
// body: available
// range: 0x100f0f84-0x100f10d7 inclusive
// non_contiguous: false
// provider: Ghidra 12.1.2 (ghidra)
// analysis_profile: b075844f08879296d957518397cd0ddda73db81dce53d00d3f0e702766fc2af6
// limitations: The session serves operations only after Ghidra reports default auto-analysis complete; incomplete analysis does not expose partial results.; The imported Program and temporary project are ephemeral and deleted on close. Annotation operations edit session database metadata; original executable bytes are never written.; Cancelling an active Ghidra request terminates its ephemeral database and discards session annotations. The selected target remains open; the next provider query imports the original artifact again.; Default-space addresses use lowercase 0x-prefixed hexadecimal; other address spaces use <percent-encoded-space>:0x<hex>.; Ghidra Listing reports a terminal call at 0x100f10d3 to 0x1004a383 FUN_1004a383 (external=false, thunk=false, hasNoReturn=true); fallthrough is excluded by Ghidra's flow model. This records Ghidra's FunctionManager flag, not an independent verification that the callee cannot return.; The Ghidra Program references PDB WinIspPlugIn.pdb (GUID d9f398c7-6c98-49a8-af25-a0659d5ad2f3, age (hex) 1, signature unknown, version RSDS); Ghidra reports load state unknown. Original names and types may be missing; an empty name search does not prove a procedure is absent. Use list_procedures and address-based analysis to inspect recovered functions. REA does not admit a caller-selected PDB companion.; This session uses Ghidra 12.1.2. The bridge is verified against 12.1.4; other 12.1.x builds are accepted and the observed version is reported.; Pseudocode is Ghidra decompiler output, not original source and not text-equivalent to Hopper output.; External functions and functions without an analyzable body return null; other decompiler failures remain explicit.
// pseudocode: provider-specific; not original source


void FUN_100f0f84(undefined4 param_1)

{
  int iVar1;
  code *pcVar2;
  HWND pHVar3;
  CWnd *pCVar4;
  CObject *pCVar5;
  int iVar6;
  int *piVar7;
  int iVar8;
  CMFCVisualManager *pCVar9;
  int in_ECX;
  bool bVar10;
  undefined4 local_20;
  undefined4 local_1c;
  undefined4 local_18;
  undefined4 local_14;
  int local_c;
  int local_8;
  
  if (((DAT_10245ca8 == 0) && (DAT_1023dacc != 0)) && (*(int *)(in_ECX + 0xd78) == 0)) {
    pHVar3 = GetParent(*(HWND *)(in_ECX + 0x20));
    pCVar4 = CWnd::FromHandle(pHVar3);
    pCVar5 = AfxDynamicDownCast((CRuntimeClass *)&PTR_s_CMFCPopupMenu_1023d77c,(CObject *)pCVar4);
    if ((pCVar5 != (CObject *)0x0) && (iVar6 = FUN_100b72f0(), iVar6 != 0)) {
      local_c = *(int *)(in_ECX + 0xc40);
      local_20 = 0;
      local_8 = 1;
      local_1c = 0;
      local_18 = 0;
      local_14 = 0;
      iVar6 = 1;
joined_r0x100f1007:
      if (local_c != 0) {
        do {
          piVar7 = (int *)FUN_100c321b(&local_c);
          iVar1 = *piVar7;
          if (iVar1 == 0) {
                    /* WARNING: Subroutine does not return */
            FUN_1004a383();
          }
          if ((((*(byte *)(iVar1 + 0x24) & 1) != 0) && (local_c != 0)) &&
             (iVar8 = CMFCToolBar::IsCommandRarelyUsed(*(uint *)(*(int *)(local_c + 8) + 0x20)),
             iVar8 != 0)) goto joined_r0x100f1007;
          iVar8 = CMFCToolBar::IsCommandRarelyUsed(*(uint *)(iVar1 + 0x20));
          if (iVar8 == 0) {
            bVar10 = iVar6 == 0;
            if (bVar10) {
              local_14 = *(undefined4 *)(iVar1 + 0x58);
            }
            iVar6 = 1;
            local_8 = 1;
            if (!bVar10) goto joined_r0x100f1007;
            goto LAB_100f1091;
          }
          if (iVar6 != 0) {
            local_8 = 0;
            local_20 = *(undefined4 *)(iVar1 + 0x54);
            local_1c = *(undefined4 *)(iVar1 + 0x58);
            local_18 = *(undefined4 *)(iVar1 + 0x5c);
            local_14 = *(undefined4 *)(iVar1 + 0x60);
            iVar6 = 0;
          }
        } while (local_c != 0);
        local_14 = *(undefined4 *)(iVar1 + 0x60);
LAB_100f1091:
        pCVar9 = CMFCVisualManager::GetInstance();
        pcVar2 = *(code **)(*(int *)pCVar9 + 0xa0);
        guard_check_icall(param_1,local_20,local_1c,local_18,local_14);
        (*pcVar2)();
        iVar6 = local_8;
        goto joined_r0x100f1007;
      }
    }
  }
  return;
}

