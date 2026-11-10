// rea decompile_all
// name: CMDIChildWndEx::ActivateTopLevelFrame
// address: 0x100eb5e8
// body: available
// range: 0x100eb5e8-0x100eb674 inclusive
// non_contiguous: false
// provider: Ghidra 12.1.2 (ghidra)
// analysis_profile: b075844f08879296d957518397cd0ddda73db81dce53d00d3f0e702766fc2af6
// limitations: The session serves operations only after Ghidra reports default auto-analysis complete; incomplete analysis does not expose partial results.; The imported Program and temporary project are ephemeral and deleted on close. Annotation operations edit session database metadata; original executable bytes are never written.; Cancelling an active Ghidra request terminates its ephemeral database and discards session annotations. The selected target remains open; the next provider query imports the original artifact again.; Default-space addresses use lowercase 0x-prefixed hexadecimal; other address spaces use <percent-encoded-space>:0x<hex>.; The Ghidra Program references PDB Comm_Aux.pdb (GUID ba7920cc-daa3-4461-a102-1f8f66c67a2a, age (hex) 1, signature unknown, version RSDS); Ghidra reports load state unknown. Original names and types may be missing; an empty name search does not prove a procedure is absent. Use list_procedures and address-based analysis to inspect recovered functions. REA does not admit a caller-selected PDB companion.; This session uses Ghidra 12.1.2. The bridge is verified against 12.1.4; other 12.1.x builds are accepted and the observed version is reported.; Pseudocode is Ghidra decompiler output, not original source and not text-equivalent to Hopper output.; External functions and functions without an analyzable body return null; other decompiler failures remain explicit.
// pseudocode: provider-specific; not original source


/* Library Function - Single Match
    protected: virtual void __thiscall CMDIChildWndEx::ActivateTopLevelFrame(void)
   
   Library: Visual Studio 2015 Release */

void __thiscall CMDIChildWndEx::ActivateTopLevelFrame(CMDIChildWndEx *this)

{
  code *pcVar1;
  CFrameWnd *pCVar2;
  CObject *this_00;
  WPARAM wParam;
  BOOL BVar3;
  int iVar4;
  
  pCVar2 = CWnd::GetTopLevelFrame((CWnd *)this);
  this_00 = AfxDynamicDownCast((CRuntimeClass *)&PTR_s_CMDIFrameWndEx_101c56b8,(CObject *)pCVar2);
  if (this_00 != (CObject *)0x0) {
    pcVar1 = *(code **)(*(int *)this + 0x17c);
    guard_check_icall(0xffffffff);
    (*pcVar1)();
    SetForegroundWindow(*(HWND *)(this_00 + 0x20));
    wParam = IsIconic(*(HWND *)(this_00 + 0x20));
    CWnd::ShowWindow((CWnd *)this_00,(uint)(wParam != 0) * 4 + 5);
    PostMessageW(*(HWND *)(this_00 + 0x20),DAT_1020fed0,wParam,*(LPARAM *)(this + 0x20));
    BVar3 = IsIconic(*(HWND *)(this_00 + 0x20));
    if (BVar3 == 0) {
      iVar4 = 5;
    }
    else {
      iVar4 = 9;
    }
    CWnd::ShowWindow((CWnd *)this_00,iVar4);
  }
  return;
}

