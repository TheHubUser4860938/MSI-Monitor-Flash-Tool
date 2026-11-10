// rea decompile_all
// name: CFrameImpl::ProcessMouseMove
// address: 0x1011861f
// body: available
// range: 0x1011861f-0x10118710 inclusive
// non_contiguous: false
// provider: Ghidra 12.1.2 (ghidra)
// analysis_profile: b075844f08879296d957518397cd0ddda73db81dce53d00d3f0e702766fc2af6
// limitations: The session serves operations only after Ghidra reports default auto-analysis complete; incomplete analysis does not expose partial results.; The imported Program and temporary project are ephemeral and deleted on close. Annotation operations edit session database metadata; original executable bytes are never written.; Cancelling an active Ghidra request terminates its ephemeral database and discards session annotations. The selected target remains open; the next provider query imports the original artifact again.; Default-space addresses use lowercase 0x-prefixed hexadecimal; other address spaces use <percent-encoded-space>:0x<hex>.; The Ghidra Program references PDB Comm_Aux.pdb (GUID ba7920cc-daa3-4461-a102-1f8f66c67a2a, age (hex) 1, signature unknown, version RSDS); Ghidra reports load state unknown. Original names and types may be missing; an empty name search does not prove a procedure is absent. Use list_procedures and address-based analysis to inspect recovered functions. REA does not admit a caller-selected PDB companion.; This session uses Ghidra 12.1.2. The bridge is verified against 12.1.4; other 12.1.x builds are accepted and the observed version is reported.; Pseudocode is Ghidra decompiler output, not original source and not text-equivalent to Hopper output.; External functions and functions without an analyzable body return null; other decompiler failures remain explicit.
// pseudocode: provider-specific; not original source


/* Library Function - Single Match
    protected: int __thiscall CFrameImpl::ProcessMouseMove(struct tagPOINT)
   
   Library: Visual Studio 2015 Release */

int __thiscall CFrameImpl::ProcessMouseMove(CFrameImpl *this,tagPOINT param_1)

{
  code *pcVar1;
  CMFCPopupMenu *pCVar2;
  BOOL BVar3;
  int iVar4;
  CMFCPopupMenuBar *pCVar5;
  tagRECT local_18;
  uint local_8;
  
  local_8 = DAT_10206460 ^ (uint)&stack0xfffffffc;
  if ((DAT_1020e500 == 0) && (DAT_1020f8f4 != 0)) {
    pCVar2 = CMFCPopupMenu::FindMenuWithConnectedFloaty();
    if ((pCVar2 != (CMFCPopupMenu *)0x0) &&
       (BVar3 = IsWindow(*(HWND *)(pCVar2 + 0x1170)), BVar3 != 0)) {
      local_18.left = 0;
      local_18.top = 0;
      local_18.right = 0;
      local_18.bottom = 0;
      GetWindowRect(*(HWND *)(pCVar2 + 0x1170),&local_18);
      BVar3 = PtInRect(&local_18,param_1);
      if (BVar3 != 0) goto LAB_1011869b;
    }
    pCVar2 = CMFCPopupMenu::GetSafeActivePopupMenu();
    if (pCVar2 != (CMFCPopupMenu *)0x0) {
      local_18.left = 0;
      local_18.top = 0;
      local_18.right = 0;
      local_18.bottom = 0;
      GetWindowRect(*(HWND *)(pCVar2 + 0x20),&local_18);
      BVar3 = PtInRect(&local_18,param_1);
      if (BVar3 == 0) {
        pcVar1 = *(code **)(*(int *)pCVar2 + 0x1c8);
        guard_check_icall(param_1.x,param_1.y);
        pCVar5 = (CMFCPopupMenuBar *)(*pcVar1)();
        CMFCPopupMenuBar::FindDestintationToolBar(pCVar5,param_1.x,param_1.y);
      }
    }
  }
LAB_1011869b:
  iVar4 = __security_check_cookie(local_8 ^ (uint)&stack0xfffffffc);
  return iVar4;
}

