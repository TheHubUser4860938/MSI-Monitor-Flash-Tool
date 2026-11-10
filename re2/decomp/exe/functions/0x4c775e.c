// rea decompile_all
// name: CMDITabProxyWnd::OnSysCommand
// address: 0x4c775e
// body: available
// range: 0x4c775e-0x4c77d2 inclusive
// non_contiguous: false
// provider: Ghidra 12.1.2 (ghidra)
// analysis_profile: ac6d50be2cdf54f7005df47d1ed7e7ef55dee595681eb1b7c2e0b00d70cd697d
// limitations: The session serves operations only after Ghidra reports default auto-analysis complete; incomplete analysis does not expose partial results.; The imported Program and temporary project are ephemeral and deleted on close. Annotation operations edit session database metadata; original executable bytes are never written.; Cancelling an active Ghidra request terminates its ephemeral database and discards session annotations. The selected target remains open; the next provider query imports the original artifact again.; Default-space addresses use lowercase 0x-prefixed hexadecimal; other address spaces use <percent-encoded-space>:0x<hex>.; The Ghidra Program references PDB ISPToolForMsi.pdb (GUID b8f2ac8f-1d6f-438d-800f-ed4a14426ac6, age (hex) 1, signature unknown, version RSDS); Ghidra reports load state unknown. Original names and types may be missing; an empty name search does not prove a procedure is absent. Use list_procedures and address-based analysis to inspect recovered functions. REA does not admit a caller-selected PDB companion.; This session uses Ghidra 12.1.2. The bridge is verified against 12.1.4; other 12.1.x builds are accepted and the observed version is reported.; Pseudocode is Ghidra decompiler output, not original source and not text-equivalent to Hopper output.; External functions and functions without an analyzable body return null; other decompiler failures remain explicit.
// pseudocode: provider-specific; not original source


/* Library Function - Single Match
    protected: void __thiscall CMDITabProxyWnd::OnSysCommand(unsigned int,long)
   
   Library: Visual Studio 2015 Release */

void __thiscall CMDITabProxyWnd::OnSysCommand(CMDITabProxyWnd *this,uint param_1,long param_2)

{
  code *pcVar1;
  CFrameWnd *pCVar2;
  CObject *pCVar3;
  
  if (*(CWnd **)(this + 0x80) != (CWnd *)0x0) {
    pCVar2 = CWnd::GetTopLevelFrame(*(CWnd **)(this + 0x80));
    pCVar3 = AfxDynamicDownCast((CRuntimeClass *)&PTR_s_CMDIFrameWndEx_005bad18,(CObject *)pCVar2);
    if (param_1 == 0xf060) {
      FUN_0042ec70();
    }
    else {
      if (param_1 != 0xf020) {
        pcVar1 = *(code **)(**(int **)(this + 0x80) + 0x220);
        guard_check_icall();
        (*pcVar1)();
      }
      SendMessageW(*(HWND *)(pCVar3 + 0x20),0x112,param_1,param_2);
    }
  }
  return;
}

