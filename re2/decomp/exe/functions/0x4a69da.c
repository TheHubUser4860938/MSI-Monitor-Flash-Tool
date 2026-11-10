// rea decompile_all
// name: CDockablePane::FindButton
// address: 0x4a69da
// body: available
// range: 0x4a69da-0x4a6a9a inclusive
// non_contiguous: false
// provider: Ghidra 12.1.2 (ghidra)
// analysis_profile: ac6d50be2cdf54f7005df47d1ed7e7ef55dee595681eb1b7c2e0b00d70cd697d
// limitations: The session serves operations only after Ghidra reports default auto-analysis complete; incomplete analysis does not expose partial results.; The imported Program and temporary project are ephemeral and deleted on close. Annotation operations edit session database metadata; original executable bytes are never written.; Cancelling an active Ghidra request terminates its ephemeral database and discards session annotations. The selected target remains open; the next provider query imports the original artifact again.; Default-space addresses use lowercase 0x-prefixed hexadecimal; other address spaces use <percent-encoded-space>:0x<hex>.; The Ghidra Program references PDB ISPToolForMsi.pdb (GUID b8f2ac8f-1d6f-438d-800f-ed4a14426ac6, age (hex) 1, signature unknown, version RSDS); Ghidra reports load state unknown. Original names and types may be missing; an empty name search does not prove a procedure is absent. Use list_procedures and address-based analysis to inspect recovered functions. REA does not admit a caller-selected PDB companion.; This session uses Ghidra 12.1.2. The bridge is verified against 12.1.4; other 12.1.x builds are accepted and the observed version is reported.; Pseudocode is Ghidra decompiler output, not original source and not text-equivalent to Hopper output.; External functions and functions without an analyzable body return null; other decompiler failures remain explicit.
// pseudocode: provider-specific; not original source


/* Library Function - Single Match
    protected: class CMFCCaptionButton * __thiscall CDockablePane::FindButton(class CPoint)const 
   
   Library: Visual Studio 2015 Release */

CMFCCaptionButton * __thiscall
CDockablePane::FindButton(CDockablePane *this,LONG param_2,LONG param_3)

{
  code *pcVar1;
  POINT pt;
  int *piVar2;
  BOOL BVar3;
  CMFCCaptionButton *pCVar4;
  int iVar5;
  tagRECT local_28;
  tagRECT local_18;
  uint local_8;
  
  local_8 = DAT_0060cff4 ^ (uint)&stack0xfffffffc;
  iVar5 = 0;
  local_18.left = 0;
  local_18.top = 0;
  local_18.right = 0;
  local_18.bottom = 0;
  GetWindowRect(*(HWND *)(this + 0x20),&local_18);
  CWnd::ScreenToClient((CWnd *)this,&local_18);
  if (0 < *(int *)(this + 0x33c)) {
    do {
      piVar2 = (int *)FUN_004858f9(iVar5);
      pcVar1 = *(code **)(*piVar2 + 0xc);
      guard_check_icall(&local_28);
      (*pcVar1)();
      OffsetRect(&local_28,local_18.left,local_18.top);
      CWnd::ClientToScreen((CWnd *)this,&local_28);
      pt.y = param_3;
      pt.x = param_2;
      BVar3 = PtInRect(&local_28,pt);
      if (BVar3 != 0) break;
      iVar5 = iVar5 + 1;
    } while (iVar5 < *(int *)(this + 0x33c));
  }
  pCVar4 = (CMFCCaptionButton *)__security_check_cookie(local_8 ^ (uint)&stack0xfffffffc);
  return pCVar4;
}

