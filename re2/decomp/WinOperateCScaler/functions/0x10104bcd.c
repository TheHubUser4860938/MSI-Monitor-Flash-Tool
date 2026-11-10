// rea decompile_all
// name: CMDIClientAreaWnd::EnableMDITabs
// address: 0x10104bcd
// body: available
// range: 0x10104bcd-0x10104cda inclusive
// non_contiguous: false
// provider: Ghidra 12.1.2 (ghidra)
// analysis_profile: b075844f08879296d957518397cd0ddda73db81dce53d00d3f0e702766fc2af6
// limitations: The session serves operations only after Ghidra reports default auto-analysis complete; incomplete analysis does not expose partial results.; The imported Program and temporary project are ephemeral and deleted on close. Annotation operations edit session database metadata; original executable bytes are never written.; Cancelling an active Ghidra request terminates its ephemeral database and discards session annotations. The selected target remains open; the next provider query imports the original artifact again.; Default-space addresses use lowercase 0x-prefixed hexadecimal; other address spaces use <percent-encoded-space>:0x<hex>.; The Ghidra Program references PDB WinOperateCScaler.pdb (GUID a6737962-efea-4805-8ae6-1fc1ef126554, age (hex) 1, signature unknown, version RSDS); Ghidra reports load state unknown. Original names and types may be missing; an empty name search does not prove a procedure is absent. Use list_procedures and address-based analysis to inspect recovered functions. REA does not admit a caller-selected PDB companion.; This session uses Ghidra 12.1.2. The bridge is verified against 12.1.4; other 12.1.x builds are accepted and the observed version is reported.; Pseudocode is Ghidra decompiler output, not original source and not text-equivalent to Hopper output.; External functions and functions without an analyzable body return null; other decompiler failures remain explicit.
// pseudocode: provider-specific; not original source


/* Library Function - Single Match
    public: void __thiscall CMDIClientAreaWnd::EnableMDITabs(int,class CMDITabInfo const &)
   
   Library: Visual Studio 2015 Release */

void __thiscall
CMDIClientAreaWnd::EnableMDITabs(CMDIClientAreaWnd *this,int param_1,CMDITabInfo *param_2)

{
  CWnd *this_00;
  code *pcVar1;
  CFrameWnd *pCVar2;
  int iVar3;
  CMDIClientAreaWnd *pCVar4;
  ulong uVar5;
  ulong uVar6;
  
  if (*(int *)(this + 0x2b30) != 0) {
    EnableMDITabbedGroups(this,0,param_2);
  }
  *(int *)(this + 0x2a9c) = param_1;
  *(int *)(this + 0x2a98) = param_1;
  pCVar4 = this + 0x2ac8;
  for (iVar3 = 0xc; iVar3 != 0; iVar3 = iVar3 + -1) {
    *(undefined4 *)pCVar4 = *(undefined4 *)param_2;
    param_2 = param_2 + 4;
    pCVar4 = pCVar4 + 4;
  }
  this_00 = (CWnd *)(this + 0x80);
  ApplyParams(this,(CMFCTabCtrl *)this_00);
  if (param_1 == 0) {
    iVar3 = IsKeepClientEdge(this);
    if (iVar3 != 0) goto LAB_10104c57;
    uVar6 = 0x200;
    uVar5 = 0;
  }
  else {
    UpdateTabs(this,0);
    iVar3 = IsKeepClientEdge(this);
    if (iVar3 != 0) goto LAB_10104c57;
    uVar6 = 0;
    uVar5 = 0x200;
  }
  CWnd::ModifyStyleEx((CWnd *)this,uVar5,uVar6,0);
LAB_10104c57:
  if ((this_00 != (CWnd *)0x0) && (*(int *)(this + 0xa0) != 0)) {
    CWnd::ShowWindow(this_00,5);
  }
  BringWindowToTop(*(HWND *)(this + 0x20));
  if (*(int *)(this + 0x20) != 0) {
    pCVar2 = CWnd::GetParentFrame((CWnd *)this);
    if (pCVar2 != (CFrameWnd *)0x0) {
      pCVar2 = CWnd::GetParentFrame((CWnd *)this);
      pcVar1 = *(code **)(*(int *)pCVar2 + 0x178);
      guard_check_icall(1);
      (*pcVar1)();
      if ((this_00 != (CWnd *)0x0) && (*(int *)(this + 0xa0) != 0)) {
        RedrawWindow(*(HWND *)(this + 0xa0),(RECT *)0x0,(HRGN)0x0,0x585);
      }
      RedrawWindow(*(HWND *)(this + 0x20),(RECT *)0x0,(HRGN)0x0,0x585);
    }
  }
  return;
}

