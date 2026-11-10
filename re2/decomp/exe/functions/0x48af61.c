// rea decompile_all
// name: FUN_0048af61
// address: 0x48af61
// body: available
// range: 0x48af61-0x48b0b4 inclusive
// non_contiguous: false
// provider: Ghidra 12.1.2 (ghidra)
// analysis_profile: ac6d50be2cdf54f7005df47d1ed7e7ef55dee595681eb1b7c2e0b00d70cd697d
// limitations: The session serves operations only after Ghidra reports default auto-analysis complete; incomplete analysis does not expose partial results.; The imported Program and temporary project are ephemeral and deleted on close. Annotation operations edit session database metadata; original executable bytes are never written.; Cancelling an active Ghidra request terminates its ephemeral database and discards session annotations. The selected target remains open; the next provider query imports the original artifact again.; Default-space addresses use lowercase 0x-prefixed hexadecimal; other address spaces use <percent-encoded-space>:0x<hex>.; Ghidra Listing reports a terminal call at 0x48b0b0 to 0x429127 FUN_00429127 (external=false, thunk=false, hasNoReturn=true); fallthrough is excluded by Ghidra's flow model. This records Ghidra's FunctionManager flag, not an independent verification that the callee cannot return.; The Ghidra Program references PDB ISPToolForMsi.pdb (GUID b8f2ac8f-1d6f-438d-800f-ed4a14426ac6, age (hex) 1, signature unknown, version RSDS); Ghidra reports load state unknown. Original names and types may be missing; an empty name search does not prove a procedure is absent. Use list_procedures and address-based analysis to inspect recovered functions. REA does not admit a caller-selected PDB companion.; This session uses Ghidra 12.1.2. The bridge is verified against 12.1.4; other 12.1.x builds are accepted and the observed version is reported.; Pseudocode is Ghidra decompiler output, not original source and not text-equivalent to Hopper output.; External functions and functions without an analyzable body return null; other decompiler failures remain explicit.
// pseudocode: provider-specific; not original source


void FUN_0048af61(undefined4 param_1)

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
  
  if (((DAT_00614ed8 == 0) && (DAT_0060c724 != 0)) && (*(int *)(in_ECX + 0xd78) == 0)) {
    pHVar3 = GetParent(*(HWND *)(in_ECX + 0x20));
    pCVar4 = CWnd::FromHandle(pHVar3);
    pCVar5 = AfxDynamicDownCast((CRuntimeClass *)&PTR_s_CMFCPopupMenu_0060c808,(CObject *)pCVar4);
    if ((pCVar5 != (CObject *)0x0) && (iVar6 = FUN_004cb367(), iVar6 != 0)) {
      local_c = *(int *)(in_ECX + 0xc40);
      local_20 = 0;
      local_8 = 1;
      local_1c = 0;
      local_18 = 0;
      local_14 = 0;
      iVar6 = 1;
joined_r0x0048afe4:
      if (local_c != 0) {
        do {
          piVar7 = (int *)FUN_004ead48(&local_c);
          iVar1 = *piVar7;
          if (iVar1 == 0) {
                    /* WARNING: Subroutine does not return */
            FUN_00429127();
          }
          if ((((*(byte *)(iVar1 + 0x24) & 1) != 0) && (local_c != 0)) &&
             (iVar8 = CMFCToolBar::IsCommandRarelyUsed(*(uint *)(*(int *)(local_c + 8) + 0x20)),
             iVar8 != 0)) goto joined_r0x0048afe4;
          iVar8 = CMFCToolBar::IsCommandRarelyUsed(*(uint *)(iVar1 + 0x20));
          if (iVar8 == 0) {
            bVar10 = iVar6 == 0;
            if (bVar10) {
              local_14 = *(undefined4 *)(iVar1 + 0x58);
            }
            iVar6 = 1;
            local_8 = 1;
            if (!bVar10) goto joined_r0x0048afe4;
            goto LAB_0048b06e;
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
LAB_0048b06e:
        pCVar9 = CMFCVisualManager::GetInstance();
        pcVar2 = *(code **)(*(int *)pCVar9 + 0xa0);
        guard_check_icall(param_1,local_20,local_1c,local_18,local_14);
        (*pcVar2)();
        iVar6 = local_8;
        goto joined_r0x0048afe4;
      }
    }
  }
  return;
}

