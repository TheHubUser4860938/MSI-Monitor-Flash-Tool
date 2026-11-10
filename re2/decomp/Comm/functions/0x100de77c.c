// rea decompile_all
// name: CMFCCaptionBar::OnUpdateToolTips
// address: 0x100de77c
// body: available
// range: 0x100de77c-0x100de81f inclusive
// non_contiguous: false
// provider: Ghidra 12.1.2 (ghidra)
// analysis_profile: b075844f08879296d957518397cd0ddda73db81dce53d00d3f0e702766fc2af6
// limitations: The session serves operations only after Ghidra reports default auto-analysis complete; incomplete analysis does not expose partial results.; The imported Program and temporary project are ephemeral and deleted on close. Annotation operations edit session database metadata; original executable bytes are never written.; Cancelling an active Ghidra request terminates its ephemeral database and discards session annotations. The selected target remains open; the next provider query imports the original artifact again.; Default-space addresses use lowercase 0x-prefixed hexadecimal; other address spaces use <percent-encoded-space>:0x<hex>.; The Ghidra Program references PDB Comm.pdb (GUID c3062acb-498d-45fa-a233-c8b7e401bb13, age (hex) 1, signature unknown, version RSDS); Ghidra reports load state unknown. Original names and types may be missing; an empty name search does not prove a procedure is absent. Use list_procedures and address-based analysis to inspect recovered functions. REA does not admit a caller-selected PDB companion.; This session uses Ghidra 12.1.2. The bridge is verified against 12.1.4; other 12.1.x builds are accepted and the observed version is reported.; Pseudocode is Ghidra decompiler output, not original source and not text-equivalent to Hopper output.; External functions and functions without an analyzable body return null; other decompiler failures remain explicit.
// pseudocode: provider-specific; not original source


/* Library Function - Single Match
    protected: long __thiscall CMFCCaptionBar::OnUpdateToolTips(unsigned int,long)
   
   Library: Visual Studio 2015 Release */

long __thiscall CMFCCaptionBar::OnUpdateToolTips(CMFCCaptionBar *this,uint param_1,long param_2)

{
  CMFCCaptionBar *pCVar1;
  long lVar2;
  tagRECT local_18;
  uint local_8;
  
  local_8 = DAT_101d3fec ^ (uint)&stack0xfffffffc;
  if ((param_1 & 0x400) != 0) {
    pCVar1 = this + 0x2c8;
    CTooltipManager::CreateToolTip((CToolTipCtrl **)pCVar1,(CWnd *)this,0x400);
    local_18.left = 0;
    local_18.top = 0;
    local_18.right = 0;
    local_18.bottom = 0;
    SendMessageW(*(HWND *)(*(CToolTipCtrl **)pCVar1 + 0x20),0x418,0,0x280);
    CToolTipCtrl::AddTool(*(CToolTipCtrl **)pCVar1,(CWnd *)this,(wchar_t *)0xffffffff,&local_18,1);
    CToolTipCtrl::AddTool(*(CToolTipCtrl **)pCVar1,(CWnd *)this,(wchar_t *)0xffffffff,&local_18,2);
    CToolTipCtrl::AddTool(*(CToolTipCtrl **)pCVar1,(CWnd *)this,(wchar_t *)0xffffffff,&local_18,3);
    CToolTipCtrl::AddTool(*(CToolTipCtrl **)pCVar1,(CWnd *)this,(wchar_t *)0xffffffff,&local_18,4);
  }
  lVar2 = __security_check_cookie(local_8 ^ (uint)&stack0xfffffffc);
  return lVar2;
}

