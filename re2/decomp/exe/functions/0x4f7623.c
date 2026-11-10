// rea decompile_all
// name: CMFCDropDownToolBar::OnLButtonUp
// address: 0x4f7623
// body: available
// range: 0x4f7623-0x4f76d3 inclusive
// non_contiguous: false
// provider: Ghidra 12.1.2 (ghidra)
// analysis_profile: ac6d50be2cdf54f7005df47d1ed7e7ef55dee595681eb1b7c2e0b00d70cd697d
// limitations: The session serves operations only after Ghidra reports default auto-analysis complete; incomplete analysis does not expose partial results.; The imported Program and temporary project are ephemeral and deleted on close. Annotation operations edit session database metadata; original executable bytes are never written.; Cancelling an active Ghidra request terminates its ephemeral database and discards session annotations. The selected target remains open; the next provider query imports the original artifact again.; Default-space addresses use lowercase 0x-prefixed hexadecimal; other address spaces use <percent-encoded-space>:0x<hex>.; The Ghidra Program references PDB ISPToolForMsi.pdb (GUID b8f2ac8f-1d6f-438d-800f-ed4a14426ac6, age (hex) 1, signature unknown, version RSDS); Ghidra reports load state unknown. Original names and types may be missing; an empty name search does not prove a procedure is absent. Use list_procedures and address-based analysis to inspect recovered functions. REA does not admit a caller-selected PDB companion.; This session uses Ghidra 12.1.2. The bridge is verified against 12.1.4; other 12.1.x builds are accepted and the observed version is reported.; Pseudocode is Ghidra decompiler output, not original source and not text-equivalent to Hopper output.; External functions and functions without an analyzable body return null; other decompiler failures remain explicit.
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
  
  local_8 = DAT_0060cff4 ^ (uint)&stack0xfffffffc;
  local_18.left = 0;
  local_18.top = 0;
  local_18.right = 0;
  local_18.bottom = 0;
  GetClientRect(*(HWND *)(this + 0x20),&local_18);
  if (DAT_00614ed8 == 0) {
    pt.y = param_4;
    pt.x = param_3;
    BVar2 = PtInRect(&local_18,pt);
    if (BVar2 == 0) {
      pCVar3 = CWnd::GetParentFrame((CWnd *)this);
      pcVar1 = *(code **)(*(int *)pCVar3 + 0x60);
      guard_check_icall();
      (*pcVar1)();
      goto LAB_004f76c3;
    }
    if ((DAT_00614ed8 == 0) && (iVar4 = *(int *)(this + 0xbf0), -1 < iVar4)) {
      *(int *)(this + 0xbec) = iVar4;
      iVar4 = FUN_00452f94(iVar4);
      *(uint *)(iVar4 + 0x24) = *(uint *)(iVar4 + 0x24) & 0xfffdffff;
    }
  }
  CMFCToolBar::OnLButtonUp((CMFCToolBar *)this,param_1,param_3,param_4);
LAB_004f76c3:
  __security_check_cookie(local_8 ^ (uint)&stack0xfffffffc);
  return;
}

