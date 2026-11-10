// rea decompile_all
// name: FUN_004f6312
// address: 0x4f6312
// body: available
// range: 0x4f6312-0x4f6401 inclusive
// non_contiguous: false
// provider: Ghidra 12.1.2 (ghidra)
// analysis_profile: ac6d50be2cdf54f7005df47d1ed7e7ef55dee595681eb1b7c2e0b00d70cd697d
// limitations: The session serves operations only after Ghidra reports default auto-analysis complete; incomplete analysis does not expose partial results.; The imported Program and temporary project are ephemeral and deleted on close. Annotation operations edit session database metadata; original executable bytes are never written.; Cancelling an active Ghidra request terminates its ephemeral database and discards session annotations. The selected target remains open; the next provider query imports the original artifact again.; Default-space addresses use lowercase 0x-prefixed hexadecimal; other address spaces use <percent-encoded-space>:0x<hex>.; Ghidra Listing reports a terminal call at 0x4f63fd to 0x429127 FUN_00429127 (external=false, thunk=false, hasNoReturn=true); fallthrough is excluded by Ghidra's flow model. This records Ghidra's FunctionManager flag, not an independent verification that the callee cannot return.; The Ghidra Program references PDB ISPToolForMsi.pdb (GUID b8f2ac8f-1d6f-438d-800f-ed4a14426ac6, age (hex) 1, signature unknown, version RSDS); Ghidra reports load state unknown. Original names and types may be missing; an empty name search does not prove a procedure is absent. Use list_procedures and address-based analysis to inspect recovered functions. REA does not admit a caller-selected PDB companion.; This session uses Ghidra 12.1.2. The bridge is verified against 12.1.4; other 12.1.x builds are accepted and the observed version is reported.; Pseudocode is Ghidra decompiler output, not original source and not text-equivalent to Hopper output.; External functions and functions without an analyzable body return null; other decompiler failures remain explicit.
// pseudocode: provider-specific; not original source


void FUN_004f6312(CWnd *param_1)

{
  code *pcVar1;
  CFrameWnd *pCVar2;
  int iVar3;
  HWND pHVar4;
  CObject *this;
  CMDIChildWnd *pCVar5;
  HMENU pHVar6;
  CMenu *pCVar7;
  int *in_ECX;
  tagMENUITEMINFOW local_38;
  
  if (DAT_00614ed8 == 0) {
    if (param_1 == (CWnd *)0x0) {
                    /* WARNING: Subroutine does not return */
      FUN_00429127();
    }
    pcVar1 = *(code **)(*in_ECX + 0x58);
    guard_check_icall();
    (*pcVar1)();
    pCVar2 = AFXGetParentFrame(param_1);
    if ((pCVar2 != (CFrameWnd *)0x0) &&
       (iVar3 = FUN_0043970d(&PTR_s_CMiniDockFrameWnd_005d4cb0), iVar3 != 0)) {
      pHVar4 = GetParent(*(HWND *)(pCVar2 + 0x20));
      pCVar2 = (CFrameWnd *)CWnd::FromHandle(pHVar4);
    }
    this = AfxDynamicDownCast((CRuntimeClass *)&PTR_s_CMDIFrameWnd_005cbecc,(CObject *)pCVar2);
    if (this != (CObject *)0x0) {
      pCVar5 = CMDIFrameWnd::MDIGetActive((CMDIFrameWnd *)this,(int *)0x0);
      pHVar6 = GetSystemMenu(*(HWND *)(pCVar5 + 0x20),0);
      pCVar7 = CMenu::FromHandle(pHVar6);
      if (pCVar7 != (CMenu *)0x0) {
        _memset(&local_38,0,0x30);
        local_38.cbSize = 0x30;
        local_38.fMask = 1;
        GetMenuItemInfoW(*(HMENU *)(pCVar7 + 4),0xf060,0,&local_38);
        if ((local_38.fState & 3) != 0) {
          return;
        }
      }
      SendMessageW(*(HWND *)(pCVar5 + 0x20),0x112,0xf060,0);
    }
  }
  return;
}

