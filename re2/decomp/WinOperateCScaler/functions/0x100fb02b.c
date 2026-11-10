// rea decompile_all
// name: CMFCMenuBar::UpdateMDIChildrenMenus
// address: 0x100fb02b
// body: available
// range: 0x100fb02b-0x100fb0cd inclusive
// non_contiguous: false
// provider: Ghidra 12.1.2 (ghidra)
// analysis_profile: b075844f08879296d957518397cd0ddda73db81dce53d00d3f0e702766fc2af6
// limitations: The session serves operations only after Ghidra reports default auto-analysis complete; incomplete analysis does not expose partial results.; The imported Program and temporary project are ephemeral and deleted on close. Annotation operations edit session database metadata; original executable bytes are never written.; Cancelling an active Ghidra request terminates its ephemeral database and discards session annotations. The selected target remains open; the next provider query imports the original artifact again.; Default-space addresses use lowercase 0x-prefixed hexadecimal; other address spaces use <percent-encoded-space>:0x<hex>.; The Ghidra Program references PDB WinOperateCScaler.pdb (GUID a6737962-efea-4805-8ae6-1fc1ef126554, age (hex) 1, signature unknown, version RSDS); Ghidra reports load state unknown. Original names and types may be missing; an empty name search does not prove a procedure is absent. Use list_procedures and address-based analysis to inspect recovered functions. REA does not admit a caller-selected PDB companion.; This session uses Ghidra 12.1.2. The bridge is verified against 12.1.4; other 12.1.x builds are accepted and the observed version is reported.; Pseudocode is Ghidra decompiler output, not original source and not text-equivalent to Hopper output.; External functions and functions without an analyzable body return null; other decompiler failures remain explicit.
// pseudocode: provider-specific; not original source


/* Library Function - Single Match
    protected: static void __stdcall CMFCMenuBar::UpdateMDIChildrenMenus(class CMultiDocTemplate *)
   
   Library: Visual Studio 2015 Release */

void CMFCMenuBar::UpdateMDIChildrenMenus(CMultiDocTemplate *param_1)

{
  code *pcVar1;
  int *piVar2;
  CWnd *this;
  CFrameWnd *pCVar3;
  CObject *this_00;
  int local_c;
  int local_8;
  
  pcVar1 = *(code **)(*(int *)param_1 + 0x54);
  guard_check_icall();
  local_c = (*pcVar1)();
  while (local_c != 0) {
    pcVar1 = *(code **)(*(int *)param_1 + 0x58);
    guard_check_icall(&local_c);
    piVar2 = (int *)(*pcVar1)();
    pcVar1 = *(code **)(*piVar2 + 0x68);
    guard_check_icall();
    local_8 = (*pcVar1)();
    while (local_8 != 0) {
      pcVar1 = *(code **)(*piVar2 + 0x6c);
      guard_check_icall(&local_8);
      this = (CWnd *)(*pcVar1)();
      pCVar3 = CWnd::GetParentFrame(this);
      this_00 = AfxDynamicDownCast((CRuntimeClass *)&PTR_s_CMDIChildWnd_101c9044,(CObject *)pCVar3);
      if (this_00 != (CObject *)0x0) {
        CMDIChildWnd::SetHandles
                  ((CMDIChildWnd *)this_00,*(HMENU__ **)(param_1 + 0x88),
                   *(HACCEL__ **)(param_1 + 0x8c));
      }
    }
    local_8 = 0;
  }
  return;
}

