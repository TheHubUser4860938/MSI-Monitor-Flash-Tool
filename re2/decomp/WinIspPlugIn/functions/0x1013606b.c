// rea decompile_all
// name: CMFCOutlookBarToolBar::OnSendCommand
// address: 0x1013606b
// body: available
// range: 0x1013606b-0x10136119 inclusive
// non_contiguous: false
// provider: Ghidra 12.1.2 (ghidra)
// analysis_profile: b075844f08879296d957518397cd0ddda73db81dce53d00d3f0e702766fc2af6
// limitations: The session serves operations only after Ghidra reports default auto-analysis complete; incomplete analysis does not expose partial results.; The imported Program and temporary project are ephemeral and deleted on close. Annotation operations edit session database metadata; original executable bytes are never written.; Cancelling an active Ghidra request terminates its ephemeral database and discards session annotations. The selected target remains open; the next provider query imports the original artifact again.; Default-space addresses use lowercase 0x-prefixed hexadecimal; other address spaces use <percent-encoded-space>:0x<hex>.; The Ghidra Program references PDB WinIspPlugIn.pdb (GUID d9f398c7-6c98-49a8-af25-a0659d5ad2f3, age (hex) 1, signature unknown, version RSDS); Ghidra reports load state unknown. Original names and types may be missing; an empty name search does not prove a procedure is absent. Use list_procedures and address-based analysis to inspect recovered functions. REA does not admit a caller-selected PDB companion.; This session uses Ghidra 12.1.2. The bridge is verified against 12.1.4; other 12.1.x builds are accepted and the observed version is reported.; Pseudocode is Ghidra decompiler output, not original source and not text-equivalent to Hopper output.; External functions and functions without an analyzable body return null; other decompiler failures remain explicit.
// pseudocode: provider-specific; not original source


/* Library Function - Single Match
    public: virtual int __thiscall CMFCOutlookBarToolBar::OnSendCommand(class CMFCToolBarButton
   const *)
   
   Library: Visual Studio 2015 Release */

int __thiscall
CMFCOutlookBarToolBar::OnSendCommand(CMFCOutlookBarToolBar *this,CMFCToolBarButton *param_1)

{
  code *pcVar1;
  CWnd *this_00;
  UINT Msg;
  int iVar2;
  CMFCOutlookBarToolBar *pCVar3;
  CFrameWnd *pCVar4;
  CMFCOutlookBarToolBar *local_8;
  
  local_8 = this;
  iVar2 = FUN_1009455c(param_1);
  if (-1 < iVar2) {
    local_8 = (CMFCOutlookBarToolBar *)0xffffffff;
    iVar2 = CMap<int,int,int,int>::Lookup
                      ((CMap<int,int,int,int> *)(this + 0xd40),iVar2,(int *)&local_8);
    if (iVar2 != 0) {
      pcVar1 = *(code **)(**(int **)(this + 0xd5c) + 0x20c);
      guard_check_icall();
      pCVar3 = (CMFCOutlookBarToolBar *)(*pcVar1)();
      if (pCVar3 != local_8) {
        pcVar1 = *(code **)(**(int **)(this + 0xd5c) + 0x214);
        guard_check_icall(local_8);
        iVar2 = (*pcVar1)();
        if ((iVar2 != 0) &&
           (pCVar4 = CWnd::GetParentFrame(*(CWnd **)(this + 0xd5c)), Msg = DAT_102466a4,
           pCVar4 != (CFrameWnd *)0x0)) {
          this_00 = *(CWnd **)(this + 0xd5c);
          pCVar4 = CWnd::GetParentFrame(this_00);
          SendMessageW(*(HWND *)(pCVar4 + 0x20),Msg,(WPARAM)local_8,(LPARAM)this_00);
        }
        return 1;
      }
    }
  }
  return 0;
}

