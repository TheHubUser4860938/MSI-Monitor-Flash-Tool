// rea decompile_all
// name: CPaneFrameWnd::DockPaneStandard
// address: 0x45cab1
// body: available
// range: 0x45cab1-0x45cb50 inclusive
// non_contiguous: false
// provider: Ghidra 12.1.2 (ghidra)
// analysis_profile: ac6d50be2cdf54f7005df47d1ed7e7ef55dee595681eb1b7c2e0b00d70cd697d
// limitations: The session serves operations only after Ghidra reports default auto-analysis complete; incomplete analysis does not expose partial results.; The imported Program and temporary project are ephemeral and deleted on close. Annotation operations edit session database metadata; original executable bytes are never written.; Cancelling an active Ghidra request terminates its ephemeral database and discards session annotations. The selected target remains open; the next provider query imports the original artifact again.; Default-space addresses use lowercase 0x-prefixed hexadecimal; other address spaces use <percent-encoded-space>:0x<hex>.; The Ghidra Program references PDB ISPToolForMsi.pdb (GUID b8f2ac8f-1d6f-438d-800f-ed4a14426ac6, age (hex) 1, signature unknown, version RSDS); Ghidra reports load state unknown. Original names and types may be missing; an empty name search does not prove a procedure is absent. Use list_procedures and address-based analysis to inspect recovered functions. REA does not admit a caller-selected PDB companion.; This session uses Ghidra 12.1.2. The bridge is verified against 12.1.4; other 12.1.x builds are accepted and the observed version is reported.; Pseudocode is Ghidra decompiler output, not original source and not text-equivalent to Hopper output.; External functions and functions without an analyzable body return null; other decompiler failures remain explicit.
// pseudocode: provider-specific; not original source


/* Library Function - Single Match
    protected: virtual class CDockablePane * __thiscall CPaneFrameWnd::DockPaneStandard(int &)
   
   Library: Visual Studio 2015 Release */

CDockablePane * __thiscall CPaneFrameWnd::DockPaneStandard(CPaneFrameWnd *this,int *param_1)

{
  code *pcVar1;
  CObject *pCVar2;
  int iVar3;
  BOOL BVar4;
  uint uVar5;
  
  pcVar1 = *(code **)(*(int *)this + 0x1a8);
  guard_check_icall();
  pCVar2 = (CObject *)(*pcVar1)();
  pCVar2 = AfxDynamicDownCast((CRuntimeClass *)&PTR_s_CDockablePane_0060c780,pCVar2);
  if (pCVar2 != (CObject *)0x0) {
    pcVar1 = *(code **)(*(int *)this + 0x19c);
    guard_check_icall();
    iVar3 = (*pcVar1)();
    if (iVar3 != 0) {
      BVar4 = IsWindowVisible(*(HWND *)(pCVar2 + 0x20));
      if (BVar4 == 0) {
        pcVar1 = *(code **)(*(int *)pCVar2 + 0x1b8);
        guard_check_icall();
        uVar5 = (*pcVar1)();
        if ((uVar5 & 2) != 0) {
          CWnd::ShowWindow((CWnd *)pCVar2,5);
        }
      }
      pcVar1 = *(code **)(*(int *)pCVar2 + 0x2b0);
      guard_check_icall(param_1);
      pCVar2 = (CObject *)(*pcVar1)();
      pCVar2 = AfxDynamicDownCast((CRuntimeClass *)&PTR_s_CDockablePane_0060c780,pCVar2);
      return (CDockablePane *)pCVar2;
    }
  }
  return (CDockablePane *)0x0;
}

