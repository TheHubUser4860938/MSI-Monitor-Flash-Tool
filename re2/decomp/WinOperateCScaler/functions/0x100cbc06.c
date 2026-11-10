// rea decompile_all
// name: CMultiPaneFrameWnd::CheckGripperVisibility
// address: 0x100cbc06
// body: available
// range: 0x100cbc06-0x100cbc73 inclusive
// non_contiguous: false
// provider: Ghidra 12.1.2 (ghidra)
// analysis_profile: b075844f08879296d957518397cd0ddda73db81dce53d00d3f0e702766fc2af6
// limitations: The session serves operations only after Ghidra reports default auto-analysis complete; incomplete analysis does not expose partial results.; The imported Program and temporary project are ephemeral and deleted on close. Annotation operations edit session database metadata; original executable bytes are never written.; Cancelling an active Ghidra request terminates its ephemeral database and discards session annotations. The selected target remains open; the next provider query imports the original artifact again.; Default-space addresses use lowercase 0x-prefixed hexadecimal; other address spaces use <percent-encoded-space>:0x<hex>.; The Ghidra Program references PDB WinOperateCScaler.pdb (GUID a6737962-efea-4805-8ae6-1fc1ef126554, age (hex) 1, signature unknown, version RSDS); Ghidra reports load state unknown. Original names and types may be missing; an empty name search does not prove a procedure is absent. Use list_procedures and address-based analysis to inspect recovered functions. REA does not admit a caller-selected PDB companion.; This session uses Ghidra 12.1.2. The bridge is verified against 12.1.4; other 12.1.x builds are accepted and the observed version is reported.; Pseudocode is Ghidra decompiler output, not original source and not text-equivalent to Hopper output.; External functions and functions without an analyzable body return null; other decompiler failures remain explicit.
// pseudocode: provider-specific; not original source


/* Library Function - Single Match
    public: virtual void __thiscall CMultiPaneFrameWnd::CheckGripperVisibility(void)
   
   Library: Visual Studio 2015 Release */

void __thiscall CMultiPaneFrameWnd::CheckGripperVisibility(CMultiPaneFrameWnd *this)

{
  int iVar1;
  BOOL BVar2;
  int iVar3;
  CObject *pCVar4;
  code *pcVar5;
  undefined4 uVar6;
  
  BVar2 = IsWindowVisible(*(HWND *)(this + 0x20));
  if (BVar2 != 0) {
    pcVar5 = *(code **)(*(int *)(this + 400) + 0x54);
    guard_check_icall();
    iVar3 = (*pcVar5)();
    iVar1 = *(int *)(this + 400);
    if (iVar3 == 1) {
      pcVar5 = *(code **)(iVar1 + 0x78);
      guard_check_icall();
      pCVar4 = (CObject *)(*pcVar5)();
      pCVar4 = AfxDynamicDownCast((CRuntimeClass *)&PTR_s_CDockablePane_10201ba4,pCVar4);
      if (pCVar4 == (CObject *)0x0) {
        return;
      }
      uVar6 = 0;
      pcVar5 = *(code **)(*(int *)pCVar4 + 0x1f0);
    }
    else {
      pcVar5 = *(code **)(iVar1 + 0x58);
      uVar6 = 1;
    }
    guard_check_icall(uVar6);
    (*pcVar5)();
  }
  return;
}

