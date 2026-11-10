// rea decompile_all
// name: CMDIChildWndEx::OnPressTaskbarThmbnailCloseButton
// address: 0x100ed920
// body: available
// range: 0x100ed920-0x100ed998 inclusive
// non_contiguous: false
// provider: Ghidra 12.1.2 (ghidra)
// analysis_profile: b075844f08879296d957518397cd0ddda73db81dce53d00d3f0e702766fc2af6
// limitations: The session serves operations only after Ghidra reports default auto-analysis complete; incomplete analysis does not expose partial results.; The imported Program and temporary project are ephemeral and deleted on close. Annotation operations edit session database metadata; original executable bytes are never written.; Cancelling an active Ghidra request terminates its ephemeral database and discards session annotations. The selected target remains open; the next provider query imports the original artifact again.; Default-space addresses use lowercase 0x-prefixed hexadecimal; other address spaces use <percent-encoded-space>:0x<hex>.; The Ghidra Program references PDB WinIspPlugIn.pdb (GUID d9f398c7-6c98-49a8-af25-a0659d5ad2f3, age (hex) 1, signature unknown, version RSDS); Ghidra reports load state unknown. Original names and types may be missing; an empty name search does not prove a procedure is absent. Use list_procedures and address-based analysis to inspect recovered functions. REA does not admit a caller-selected PDB companion.; This session uses Ghidra 12.1.2. The bridge is verified against 12.1.4; other 12.1.x builds are accepted and the observed version is reported.; Pseudocode is Ghidra decompiler output, not original source and not text-equivalent to Hopper output.; External functions and functions without an analyzable body return null; other decompiler failures remain explicit.
// pseudocode: provider-specific; not original source


/* Library Function - Single Match
    public: virtual void __thiscall CMDIChildWndEx::OnPressTaskbarThmbnailCloseButton(void)
   
   Library: Visual Studio 2015 Release */

void __thiscall CMDIChildWndEx::OnPressTaskbarThmbnailCloseButton(CMDIChildWndEx *this)

{
  code *pcVar1;
  CFrameWnd *pCVar2;
  CObject *this_00;
  int iVar3;
  int *piVar4;
  
  pCVar2 = CWnd::GetTopLevelFrame((CWnd *)this);
  this_00 = AfxDynamicDownCast((CRuntimeClass *)&PTR_s_CMDIFrameWndEx_101e9630,(CObject *)pCVar2);
  if (this_00 != (CObject *)0x0) {
    iVar3 = CWnd::IsWindowEnabled((CWnd *)this_00);
    if (iVar3 != 0) {
      pcVar1 = *(code **)(*(int *)this + 0x16c);
      guard_check_icall();
      piVar4 = (int *)(*pcVar1)();
      if (piVar4 != (int *)0x0) {
        pcVar1 = *(code **)(*piVar4 + 0x60);
        guard_check_icall();
        iVar3 = (*pcVar1)();
        if (iVar3 != 0) {
          pcVar1 = *(code **)(*(int *)this + 0x220);
          guard_check_icall();
          (*pcVar1)();
        }
      }
      PostMessageW(*(HWND *)(this + 0x20),0x10,0,0);
    }
  }
  return;
}

