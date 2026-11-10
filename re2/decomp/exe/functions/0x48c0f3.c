// rea decompile_all
// name: FUN_0048c0f3
// address: 0x48c0f3
// body: available
// range: 0x48c0f3-0x48c1d8 inclusive
// non_contiguous: false
// provider: Ghidra 12.1.2 (ghidra)
// analysis_profile: ac6d50be2cdf54f7005df47d1ed7e7ef55dee595681eb1b7c2e0b00d70cd697d
// limitations: The session serves operations only after Ghidra reports default auto-analysis complete; incomplete analysis does not expose partial results.; The imported Program and temporary project are ephemeral and deleted on close. Annotation operations edit session database metadata; original executable bytes are never written.; Cancelling an active Ghidra request terminates its ephemeral database and discards session annotations. The selected target remains open; the next provider query imports the original artifact again.; Default-space addresses use lowercase 0x-prefixed hexadecimal; other address spaces use <percent-encoded-space>:0x<hex>.; Ghidra Listing reports a terminal call at 0x48c1d4 to 0x429127 FUN_00429127 (external=false, thunk=false, hasNoReturn=true); fallthrough is excluded by Ghidra's flow model. This records Ghidra's FunctionManager flag, not an independent verification that the callee cannot return.; The Ghidra Program references PDB ISPToolForMsi.pdb (GUID b8f2ac8f-1d6f-438d-800f-ed4a14426ac6, age (hex) 1, signature unknown, version RSDS); Ghidra reports load state unknown. Original names and types may be missing; an empty name search does not prove a procedure is absent. Use list_procedures and address-based analysis to inspect recovered functions. REA does not admit a caller-selected PDB companion.; This session uses Ghidra 12.1.2. The bridge is verified against 12.1.4; other 12.1.x builds are accepted and the observed version is reported.; Pseudocode is Ghidra decompiler output, not original source and not text-equivalent to Hopper output.; External functions and functions without an analyzable body return null; other decompiler failures remain explicit.
// pseudocode: provider-specific; not original source


void FUN_0048c0f3(int param_1,uint param_2)

{
  uint uVar1;
  int iVar2;
  CObject *pCVar3;
  CMFCToolBar *in_ECX;
  tagRECT local_18;
  uint local_8;
  
  local_8 = DAT_0060cff4 ^ (uint)&stack0xfffffffc;
  iVar2 = FUN_00452f94(param_1);
  if (iVar2 != 0) {
    uVar1 = *(uint *)(iVar2 + 0x24);
    if ((uVar1 != param_2) && (*(uint *)(iVar2 + 0x24) = param_2, (uVar1 & param_2 & 0x20000) == 0))
    {
      pCVar3 = (CObject *)FUN_00452f94(param_1);
      pCVar3 = AfxDynamicDownCast((CRuntimeClass *)&PTR_s_CMFCToolBarMenuButton_0060c6d0,pCVar3);
      if ((pCVar3 == (CObject *)0x0) || (((uVar1 ^ param_2) & 0x10000) == 0)) {
        if ((uVar1 ^ param_2) != 2) {
          CMFCToolBar::InvalidateButton(in_ECX,param_1);
        }
      }
      else {
        local_18.left = 0;
        local_18.top = 0;
        local_18.right = 0;
        local_18.bottom = 0;
        FUN_0048df70(&local_18);
        InflateRect(&local_18,DAT_006161c8 * 2,DAT_006161cc * 2);
        InvalidateRect(*(HWND *)(in_ECX + 0x20),&local_18,1);
        UpdateWindow(*(HWND *)(in_ECX + 0x20));
      }
    }
    __security_check_cookie(local_8 ^ (uint)&stack0xfffffffc);
    return;
  }
                    /* WARNING: Subroutine does not return */
  FUN_00429127();
}

