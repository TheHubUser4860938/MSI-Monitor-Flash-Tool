// rea decompile_all
// name: CMFCDropDownToolBar::OnLButtonUp
// address: 0x10127501
// body: available
// range: 0x10127501-0x101275b1 inclusive
// non_contiguous: false
// provider: Ghidra 12.1.2 (ghidra)
// analysis_profile: b075844f08879296d957518397cd0ddda73db81dce53d00d3f0e702766fc2af6
// limitations: The session serves operations only after Ghidra reports default auto-analysis complete; incomplete analysis does not expose partial results.; The imported Program and temporary project are ephemeral and deleted on close. Annotation operations edit session database metadata; original executable bytes are never written.; Cancelling an active Ghidra request terminates its ephemeral database and discards session annotations. The selected target remains open; the next provider query imports the original artifact again.; Default-space addresses use lowercase 0x-prefixed hexadecimal; other address spaces use <percent-encoded-space>:0x<hex>.; The Ghidra Program references PDB Comm_Aux.pdb (GUID ba7920cc-daa3-4461-a102-1f8f66c67a2a, age (hex) 1, signature unknown, version RSDS); Ghidra reports load state unknown. Original names and types may be missing; an empty name search does not prove a procedure is absent. Use list_procedures and address-based analysis to inspect recovered functions. REA does not admit a caller-selected PDB companion.; This session uses Ghidra 12.1.2. The bridge is verified against 12.1.4; other 12.1.x builds are accepted and the observed version is reported.; Pseudocode is Ghidra decompiler output, not original source and not text-equivalent to Hopper output.; External functions and functions without an analyzable body return null; other decompiler failures remain explicit.
// pseudocode: provider-specific; not original source


/* Library Function - Single Match
    public: void __thiscall CMFCDropDownToolBar::OnLButtonUp(unsigned int,class CPoint)
   
   Library: Visual Studio 2015 Release */

void __thiscall
CMFCDropDownToolBar::OnLButtonUp
          (CMFCDropDownToolBar *this,undefined4 param_1,LONG param_3,LONG param_4)

{
  code *pcVar1;
  POINT pt;
  BOOL BVar2;
  CFrameWnd *pCVar3;
  int iVar4;
  tagRECT local_18;
  uint local_8;
  
  local_8 = DAT_10206460 ^ (uint)&stack0xfffffffc;
  local_18.left = 0;
  local_18.top = 0;
  local_18.right = 0;
  local_18.bottom = 0;
  GetClientRect(*(HWND *)(this + 0x20),&local_18);
  if (DAT_1020e500 == 0) {
    pt.y = param_4;
    pt.x = param_3;
    BVar2 = PtInRect(&local_18,pt);
    if (BVar2 == 0) {
      pCVar3 = CWnd::GetParentFrame((CWnd *)this);
      pcVar1 = *(code **)(*(int *)pCVar3 + 0x60);
      guard_check_icall();
      (*pcVar1)();
      goto LAB_101275a1;
    }
    if ((DAT_1020e500 == 0) && (iVar4 = *(int *)(this + 0xbf0), -1 < iVar4)) {
      *(int *)(this + 0xbec) = iVar4;
      iVar4 = FUN_10094903(iVar4);
      *(uint *)(iVar4 + 0x24) = *(uint *)(iVar4 + 0x24) & 0xfffdffff;
    }
  }
  CMFCToolBar::OnLButtonUp((CMFCToolBar *)this,param_1,param_3,param_4);
LAB_101275a1:
  __security_check_cookie(local_8 ^ (uint)&stack0xfffffffc);
  return;
}

