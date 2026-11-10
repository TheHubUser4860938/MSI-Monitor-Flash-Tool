// rea decompile_all
// name: CMFCRibbonMainPanel::MouseButtonDown
// address: 0x52f5c0
// body: available
// range: 0x52f5c0-0x52f66a inclusive
// non_contiguous: false
// provider: Ghidra 12.1.2 (ghidra)
// analysis_profile: ac6d50be2cdf54f7005df47d1ed7e7ef55dee595681eb1b7c2e0b00d70cd697d
// limitations: The session serves operations only after Ghidra reports default auto-analysis complete; incomplete analysis does not expose partial results.; The imported Program and temporary project are ephemeral and deleted on close. Annotation operations edit session database metadata; original executable bytes are never written.; Cancelling an active Ghidra request terminates its ephemeral database and discards session annotations. The selected target remains open; the next provider query imports the original artifact again.; Default-space addresses use lowercase 0x-prefixed hexadecimal; other address spaces use <percent-encoded-space>:0x<hex>.; The Ghidra Program references PDB ISPToolForMsi.pdb (GUID b8f2ac8f-1d6f-438d-800f-ed4a14426ac6, age (hex) 1, signature unknown, version RSDS); Ghidra reports load state unknown. Original names and types may be missing; an empty name search does not prove a procedure is absent. Use list_procedures and address-based analysis to inspect recovered functions. REA does not admit a caller-selected PDB companion.; This session uses Ghidra 12.1.2. The bridge is verified against 12.1.4; other 12.1.x builds are accepted and the observed version is reported.; Pseudocode is Ghidra decompiler output, not original source and not text-equivalent to Hopper output.; External functions and functions without an analyzable body return null; other decompiler failures remain explicit.
// pseudocode: provider-specific; not original source


/* Library Function - Single Match
    protected: virtual class CMFCRibbonBaseElement * __thiscall
   CMFCRibbonMainPanel::MouseButtonDown(class CPoint)
   
   Library: Visual Studio 2015 Release */

CMFCRibbonBaseElement * __thiscall
CMFCRibbonMainPanel::MouseButtonDown(CMFCRibbonMainPanel *this,LONG param_2,LONG param_3)

{
  int iVar1;
  code *pcVar2;
  POINT pt;
  CMFCRibbonBaseElement *pCVar3;
  CWnd *this_00;
  BOOL BVar4;
  undefined4 extraout_EDX;
  undefined4 extraout_EDX_00;
  undefined4 extraout_EDX_01;
  undefined4 uVar5;
  tagRECT *ptVar6;
  tagRECT local_18;
  uint local_8;
  
  local_8 = DAT_0060cff4 ^ (uint)&stack0xfffffffc;
  pCVar3 = CMFCRibbonPanel::MouseButtonDown((CMFCRibbonPanel *)this,param_2,param_3);
  iVar1 = *(int *)(this + 0x50c);
  uVar5 = extraout_EDX;
  if (iVar1 != 0) {
    local_18.left = *(LONG *)(iVar1 + 0x74);
    local_18.top = *(LONG *)(iVar1 + 0x78);
    local_18.right = *(LONG *)(iVar1 + 0x7c);
    local_18.bottom = *(LONG *)(iVar1 + 0x80);
    CWnd::ClientToScreen(*(CWnd **)(iVar1 + 0x84),&local_18);
    ptVar6 = &local_18;
    pcVar2 = *(code **)(*(int *)this + 0xa4);
    guard_check_icall();
    this_00 = (CWnd *)(*pcVar2)();
    CWnd::ScreenToClient(this_00,ptVar6);
    pt.y = param_3;
    pt.x = param_2;
    BVar4 = PtInRect(&local_18,pt);
    uVar5 = extraout_EDX_00;
    if (BVar4 != 0) {
      pcVar2 = *(code **)(**(int **)(this + 0x50c) + 0x198);
      guard_check_icall();
      (*pcVar2)();
      uVar5 = extraout_EDX_01;
    }
  }
  pCVar3 = (CMFCRibbonBaseElement *)
           __security_check_cookie(local_8 ^ (uint)&stack0xfffffffc,uVar5,pCVar3);
  return pCVar3;
}

