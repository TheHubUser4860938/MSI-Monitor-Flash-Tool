// rea decompile_all
// name: FUN_00497daa
// address: 0x497daa
// body: available
// range: 0x497daa-0x497ee9 inclusive
// non_contiguous: false
// provider: Ghidra 12.1.2 (ghidra)
// analysis_profile: ac6d50be2cdf54f7005df47d1ed7e7ef55dee595681eb1b7c2e0b00d70cd697d
// limitations: The session serves operations only after Ghidra reports default auto-analysis complete; incomplete analysis does not expose partial results.; The imported Program and temporary project are ephemeral and deleted on close. Annotation operations edit session database metadata; original executable bytes are never written.; Cancelling an active Ghidra request terminates its ephemeral database and discards session annotations. The selected target remains open; the next provider query imports the original artifact again.; Default-space addresses use lowercase 0x-prefixed hexadecimal; other address spaces use <percent-encoded-space>:0x<hex>.; Ghidra Listing reports a terminal call at 0x497ee5 to 0x429127 FUN_00429127 (external=false, thunk=false, hasNoReturn=true); fallthrough is excluded by Ghidra's flow model. This records Ghidra's FunctionManager flag, not an independent verification that the callee cannot return.; The Ghidra Program references PDB ISPToolForMsi.pdb (GUID b8f2ac8f-1d6f-438d-800f-ed4a14426ac6, age (hex) 1, signature unknown, version RSDS); Ghidra reports load state unknown. Original names and types may be missing; an empty name search does not prove a procedure is absent. Use list_procedures and address-based analysis to inspect recovered functions. REA does not admit a caller-selected PDB companion.; This session uses Ghidra 12.1.2. The bridge is verified against 12.1.4; other 12.1.x builds are accepted and the observed version is reported.; Pseudocode is Ghidra decompiler output, not original source and not text-equivalent to Hopper output.; External functions and functions without an analyzable body return null; other decompiler failures remain explicit.
// pseudocode: provider-specific; not original source


/* WARNING: Function: __EH_prolog3 replaced with injection: EH_prolog3 */
/* WARNING: Function: __EH_epilog3 replaced with injection: EH_epilog3 */

undefined4 FUN_00497daa(undefined4 param_1,undefined4 param_2,byte param_3)

{
  code *pcVar1;
  HMENU pHVar2;
  undefined4 uVar3;
  int iVar4;
  BOOL BVar5;
  CMDIChildWnd *pCVar6;
  CObject *pCVar7;
  CMDIFrameWnd *in_ECX;
  undefined **local_24;
  HMENU local_20;
  CMDIFrameWnd *local_1c;
  HWND local_18;
  LPCWSTR local_14;
  undefined4 local_8;
  undefined4 uStack_4;
  
  uStack_4 = 0x14;
  if (((param_3 & 0x10) == 0) || (DAT_006176b0 == (int *)0x0)) {
    return 0;
  }
  local_24 = CMenu::vftable;
  local_20 = (HMENU)0x0;
  local_8 = 0;
  local_1c = in_ECX;
  pHVar2 = CreatePopupMenu();
  CMenu::Attach((CMenu *)&local_24,pHVar2);
  uVar3 = FUN_004295fe();
  FUN_0040eb30(uVar3);
  local_8 = CONCAT31(local_8._1_3_,1);
  iVar4 = FUN_00435fce(0x42c0);
  if ((iVar4 != 0) && (iVar4 = FUN_004160f0(iVar4,0x42c0), iVar4 != 0)) {
    AppendMenuW(local_20,0,0xffffff96,local_14);
    CheckMenuItem(local_20,0xffffff96,8);
    if (in_ECX == (CMDIFrameWnd *)0x0) {
      local_18 = (HWND)0x0;
    }
    else {
      local_18 = *(HWND *)(in_ECX + 0x20);
    }
    iVar4 = *DAT_006176b0;
    guard_check_icall(local_20,param_1,param_2,local_1c,0);
    iVar4 = (**(code **)(iVar4 + 0x14))();
    BVar5 = IsWindow(local_18);
    if ((BVar5 != 0) && (iVar4 == -0x6a)) {
      pCVar6 = CMDIFrameWnd::MDIGetActive(local_1c,(int *)0x0);
      pCVar7 = AfxDynamicDownCast((CRuntimeClass *)&PTR_s_CMDIChildWndEx_005c1ebc,(CObject *)pCVar6)
      ;
      if (pCVar7 != (CObject *)0x0) {
        pcVar1 = *(code **)(*(int *)local_1c + 0x1d8);
        guard_check_icall(pCVar7);
        (*pcVar1)();
      }
    }
    FUN_0040efa0();
    local_8 = 2;
    local_24 = CMenu::vftable;
    CMenu::DestroyMenu((CMenu *)&local_24);
    return 1;
  }
                    /* WARNING: Subroutine does not return */
  FUN_00429127();
}

