// rea decompile_all
// name: CPaneFrameWnd::RemoveNonValidPanes
// address: 0x100e051b
// body: available
// range: 0x100e051b-0x100e05a6 inclusive
// non_contiguous: false
// provider: Ghidra 12.1.2 (ghidra)
// analysis_profile: b075844f08879296d957518397cd0ddda73db81dce53d00d3f0e702766fc2af6
// limitations: The session serves operations only after Ghidra reports default auto-analysis complete; incomplete analysis does not expose partial results.; The imported Program and temporary project are ephemeral and deleted on close. Annotation operations edit session database metadata; original executable bytes are never written.; Cancelling an active Ghidra request terminates its ephemeral database and discards session annotations. The selected target remains open; the next provider query imports the original artifact again.; Default-space addresses use lowercase 0x-prefixed hexadecimal; other address spaces use <percent-encoded-space>:0x<hex>.; The Ghidra Program references PDB WinIspPlugIn.pdb (GUID d9f398c7-6c98-49a8-af25-a0659d5ad2f3, age (hex) 1, signature unknown, version RSDS); Ghidra reports load state unknown. Original names and types may be missing; an empty name search does not prove a procedure is absent. Use list_procedures and address-based analysis to inspect recovered functions. REA does not admit a caller-selected PDB companion.; This session uses Ghidra 12.1.2. The bridge is verified against 12.1.4; other 12.1.x builds are accepted and the observed version is reported.; Pseudocode is Ghidra decompiler output, not original source and not text-equivalent to Hopper output.; External functions and functions without an analyzable body return null; other decompiler failures remain explicit.
// pseudocode: provider-specific; not original source


/* Library Function - Single Match
    public: virtual void __thiscall CPaneFrameWnd::RemoveNonValidPanes(void)
   
   Library: Visual Studio 2015 Release */

void __thiscall CPaneFrameWnd::RemoveNonValidPanes(CPaneFrameWnd *this)

{
  code *pcVar1;
  CObject *pCVar2;
  BOOL BVar3;
  int iVar4;
  
  pcVar1 = *(code **)(*(int *)this + 0x1a8);
  guard_check_icall();
  pCVar2 = (CObject *)(*pcVar1)();
  pCVar2 = AfxDynamicDownCast((CRuntimeClass *)&PTR_DAT_101d7084,pCVar2);
  if ((pCVar2 != (CObject *)0x0) && (BVar3 = IsWindow(*(HWND *)(pCVar2 + 0x20)), BVar3 != 0)) {
    iVar4 = CWnd::GetDlgCtrlID((CWnd *)pCVar2);
    if (iVar4 != -1) {
      return;
    }
    pcVar1 = *(code **)(*(int *)this + 0x1a8);
    guard_check_icall();
    pCVar2 = (CObject *)(*pcVar1)();
    pCVar2 = AfxDynamicDownCast((CRuntimeClass *)&PTR_s_CBaseTabbedPane_101eb880,pCVar2);
    if (pCVar2 != (CObject *)0x0) {
      pcVar1 = *(code **)(*(int *)pCVar2 + 0x3a4);
      guard_check_icall();
      iVar4 = (*pcVar1)();
      if (iVar4 != 0) {
        return;
      }
    }
  }
  *(undefined4 *)(this + 0xd4) = 0;
  return;
}

