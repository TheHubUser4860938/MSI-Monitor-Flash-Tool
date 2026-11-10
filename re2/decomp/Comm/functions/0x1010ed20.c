// rea decompile_all
// name: FUN_1010ed20
// address: 0x1010ed20
// body: available
// range: 0x1010ed20-0x1010ef1e inclusive
// non_contiguous: false
// provider: Ghidra 12.1.2 (ghidra)
// analysis_profile: b075844f08879296d957518397cd0ddda73db81dce53d00d3f0e702766fc2af6
// limitations: The session serves operations only after Ghidra reports default auto-analysis complete; incomplete analysis does not expose partial results.; The imported Program and temporary project are ephemeral and deleted on close. Annotation operations edit session database metadata; original executable bytes are never written.; Cancelling an active Ghidra request terminates its ephemeral database and discards session annotations. The selected target remains open; the next provider query imports the original artifact again.; Default-space addresses use lowercase 0x-prefixed hexadecimal; other address spaces use <percent-encoded-space>:0x<hex>.; Ghidra Listing reports a terminal call at 0x1010ef1a to 0x10012a3f FUN_10012a3f (external=false, thunk=false, hasNoReturn=true); fallthrough is excluded by Ghidra's flow model. This records Ghidra's FunctionManager flag, not an independent verification that the callee cannot return.; The Ghidra Program references PDB Comm.pdb (GUID c3062acb-498d-45fa-a233-c8b7e401bb13, age (hex) 1, signature unknown, version RSDS); Ghidra reports load state unknown. Original names and types may be missing; an empty name search does not prove a procedure is absent. Use list_procedures and address-based analysis to inspect recovered functions. REA does not admit a caller-selected PDB companion.; This session uses Ghidra 12.1.2. The bridge is verified against 12.1.4; other 12.1.x builds are accepted and the observed version is reported.; Pseudocode is Ghidra decompiler output, not original source and not text-equivalent to Hopper output.; External functions and functions without an analyzable body return null; other decompiler failures remain explicit.
// pseudocode: provider-specific; not original source


void FUN_1010ed20(CDC *param_1,int param_2,uint param_3,int param_4,uint param_5,int param_6,
                 int param_7)

{
  code *pcVar1;
  CPen *pCVar2;
  uint uVar3;
  int iVar4;
  int *piVar5;
  int iVar6;
  HWND pHVar7;
  CWnd *pCVar8;
  int *in_ECX;
  uint uVar9;
  uint uVar10;
  undefined1 local_2c [4];
  uint local_28;
  int *local_24;
  uint local_20;
  int local_1c;
  tagRECT local_18;
  uint local_8;
  
  local_8 = DAT_101d3fec ^ (uint)&stack0xfffffffc;
  if (*(int *)(param_2 + 0x8c) == 0) {
    local_24 = in_ECX;
    pCVar2 = CDC::SelectObject(param_1,(CPen *)(in_ECX + 0x4f));
    if (pCVar2 == (CPen *)0x0) {
                    /* WARNING: Subroutine does not return */
      FUN_10012a3f();
    }
    if (param_7 == 0) {
      local_1c = (param_6 + param_4) / 2;
      local_20 = param_5;
      uVar3 = FUN_10019d4f(&PTR_s_CMFCRibbonPanelMenuBar_101a0508);
      uVar9 = 0;
      if (uVar3 != 0) {
        uVar9 = uVar3 & ~-(uint)(*(int *)(param_2 + 0xddc) != 0);
      }
      iVar4 = FUN_10019d4f(&PTR_s_CMFCPopupMenuBar_101d3928);
      iVar6 = local_1c;
      uVar3 = param_3;
      uVar10 = local_20;
      if (((iVar4 != 0) && (uVar9 == 0)) &&
         (iVar4 = FUN_10019d4f(&PTR_s_CMFCColorBar_101d37a8), iVar6 = local_1c, uVar10 = local_20,
         iVar4 == 0)) {
        iVar6 = *local_24;
        piVar5 = (int *)FUN_1005f3ff(local_2c);
        pcVar1 = *(code **)(iVar6 + 0x2dc);
        guard_check_icall();
        iVar6 = (*pcVar1)();
        local_28 = iVar6 + *piVar5 + param_3 + 1;
        local_18.left = 0;
        local_18.top = 0;
        local_18.right = 0;
        local_18.bottom = 0;
        GetClientRect(*(HWND *)(param_2 + 0x20),&local_18);
        uVar10 = local_20;
        if ((int)(local_18.right - local_20) < 0x32) {
          uVar10 = local_18.right;
        }
        uVar3 = ~-(uint)(*(int *)(param_2 + 0xd40) != 0) & local_28;
        iVar4 = FUN_10019d4f(&PTR_s_CMFCPopupMenuBar_101d3928);
        iVar6 = local_1c;
        if (iVar4 != 0) {
          pHVar7 = GetParent(*(HWND *)(param_2 + 0x20));
          pCVar8 = CWnd::FromHandle(pHVar7);
          iVar6 = local_1c;
          if (((pCVar8 != (CWnd *)0x0) &&
              (iVar4 = FUN_10019d4f(&PTR_s_CMFCPopupMenu_101d377c), iVar6 = local_1c, iVar4 != 0))
             && (*(int *)(pCVar8 + 0x1168) == 0)) {
            pcVar1 = *(code **)(*local_24 + 0x2dc);
            guard_check_icall();
            iVar4 = (*pcVar1)();
            piVar5 = (int *)FUN_1005f3ff(local_2c);
            iVar6 = local_1c;
            uVar3 = iVar4 * 3 + *piVar5 * 2 + 2 + param_3;
          }
        }
      }
    }
    else {
      uVar3 = (int)(param_5 + param_3) / 2;
      iVar6 = param_6 + -1;
      uVar10 = uVar3;
    }
    CDC::MoveTo(param_1,(int)local_2c,uVar3);
    CDC::LineTo(param_1,uVar10,iVar6);
    CDC::SelectObject(param_1,pCVar2);
  }
  else {
    CMFCVisualManager::OnDrawSeparator();
  }
  __security_check_cookie(local_8 ^ (uint)&stack0xfffffffc);
  return;
}

