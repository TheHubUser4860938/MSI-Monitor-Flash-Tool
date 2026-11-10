// rea decompile_all
// name: CMFCRibbonPanelMenuBar::OnSize
// address: 0x1012bead
// body: available
// range: 0x1012bead-0x1012bf1a inclusive
// non_contiguous: false
// provider: Ghidra 12.1.2 (ghidra)
// analysis_profile: b075844f08879296d957518397cd0ddda73db81dce53d00d3f0e702766fc2af6
// limitations: The session serves operations only after Ghidra reports default auto-analysis complete; incomplete analysis does not expose partial results.; The imported Program and temporary project are ephemeral and deleted on close. Annotation operations edit session database metadata; original executable bytes are never written.; Cancelling an active Ghidra request terminates its ephemeral database and discards session annotations. The selected target remains open; the next provider query imports the original artifact again.; Default-space addresses use lowercase 0x-prefixed hexadecimal; other address spaces use <percent-encoded-space>:0x<hex>.; The Ghidra Program references PDB WinOperateCScaler.pdb (GUID a6737962-efea-4805-8ae6-1fc1ef126554, age (hex) 1, signature unknown, version RSDS); Ghidra reports load state unknown. Original names and types may be missing; an empty name search does not prove a procedure is absent. Use list_procedures and address-based analysis to inspect recovered functions. REA does not admit a caller-selected PDB companion.; This session uses Ghidra 12.1.2. The bridge is verified against 12.1.4; other 12.1.x builds are accepted and the observed version is reported.; Pseudocode is Ghidra decompiler output, not original source and not text-equivalent to Hopper output.; External functions and functions without an analyzable body return null; other decompiler failures remain explicit.
// pseudocode: provider-specific; not original source


/* Library Function - Single Match
    protected: void __thiscall CMFCRibbonPanelMenuBar::OnSize(unsigned int,int,int)
   
   Library: Visual Studio 2015 Release */

void __thiscall
CMFCRibbonPanelMenuBar::OnSize(CMFCRibbonPanelMenuBar *this,uint param_1,int param_2,int param_3)

{
  uint uVar1;
  tagRECT *ptVar2;
  tagRECT local_18;
  uint local_8;
  
  local_8 = DAT_10201fec ^ (uint)&stack0xfffffffc;
  CMFCToolBar::OnSize((CMFCToolBar *)this,param_1,param_2,param_3);
  if ((*(int *)(this + 0xd08) != 0) && (*(int *)(*(int *)(this + 0xd08) + 0x20) != 0)) {
    local_18.left = 0;
    ptVar2 = &local_18;
    local_18.top = 0;
    local_18.right = param_2;
    local_18.bottom = param_3;
    uVar1 = CWnd::GetDlgCtrlID((CWnd *)this);
    CToolTipCtrl::SetToolRect(*(CToolTipCtrl **)(this + 0xd08),(CWnd *)this,uVar1,ptVar2);
  }
  __security_check_cookie(local_8 ^ (uint)&stack0xfffffffc);
  return;
}

