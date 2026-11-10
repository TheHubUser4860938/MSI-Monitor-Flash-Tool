// rea decompile_all
// name: CMDIFrameWndEx::OnUpdateFrameMenu
// address: 0x498125
// body: available
// range: 0x498125-0x4981c7 inclusive
// non_contiguous: false
// provider: Ghidra 12.1.2 (ghidra)
// analysis_profile: ac6d50be2cdf54f7005df47d1ed7e7ef55dee595681eb1b7c2e0b00d70cd697d
// limitations: The session serves operations only after Ghidra reports default auto-analysis complete; incomplete analysis does not expose partial results.; The imported Program and temporary project are ephemeral and deleted on close. Annotation operations edit session database metadata; original executable bytes are never written.; Cancelling an active Ghidra request terminates its ephemeral database and discards session annotations. The selected target remains open; the next provider query imports the original artifact again.; Default-space addresses use lowercase 0x-prefixed hexadecimal; other address spaces use <percent-encoded-space>:0x<hex>.; The Ghidra Program references PDB ISPToolForMsi.pdb (GUID b8f2ac8f-1d6f-438d-800f-ed4a14426ac6, age (hex) 1, signature unknown, version RSDS); Ghidra reports load state unknown. Original names and types may be missing; an empty name search does not prove a procedure is absent. Use list_procedures and address-based analysis to inspect recovered functions. REA does not admit a caller-selected PDB companion.; This session uses Ghidra 12.1.2. The bridge is verified against 12.1.4; other 12.1.x builds are accepted and the observed version is reported.; Pseudocode is Ghidra decompiler output, not original source and not text-equivalent to Hopper output.; External functions and functions without an analyzable body return null; other decompiler failures remain explicit.
// pseudocode: provider-specific; not original source


/* Library Function - Single Match
    public: virtual void __thiscall CMDIFrameWndEx::OnUpdateFrameMenu(struct HMENU__ *)
   
   Library: Visual Studio 2015 Release */

void __thiscall CMDIFrameWndEx::OnUpdateFrameMenu(CMDIFrameWndEx *this,HMENU__ *param_1)

{
  code *pcVar1;
  int iVar2;
  bool bVar3;
  bool bVar4;
  ulong uVar5;
  COleClientItem *this_00;
  CWnd *pCVar6;
  CMenu *pCVar7;
  
  CMDIFrameWnd::OnUpdateFrameMenu((CMDIFrameWnd *)this,param_1);
  if ((*(CWnd **)(this + 0x3fc) == (CWnd *)0x0) ||
     (uVar5 = CWnd::GetExStyle(*(CWnd **)(this + 0x3fc)), (uVar5 & 0x10000000) == 0)) {
    bVar3 = false;
  }
  else {
    bVar3 = true;
  }
  bVar4 = false;
  if ((*(CWnd **)(this + 0x44c) != (CWnd *)0x0) &&
     (uVar5 = CWnd::GetExStyle(*(CWnd **)(this + 0x44c)), (uVar5 & 0x10000000) != 0)) {
    bVar4 = true;
  }
  if ((bVar3) || (bVar4)) {
    pcVar1 = *(code **)(*(int *)this + 0x22c);
    guard_check_icall();
    this_00 = (COleClientItem *)(*pcVar1)();
    if ((this_00 != (COleClientItem *)0x0) &&
       (pCVar6 = COleClientItem::GetInPlaceWindow(this_00), pCVar6 != (CWnd *)0x0)) {
      iVar2 = *(int *)this;
      pCVar7 = CMenu::FromHandle(param_1);
      guard_check_icall(pCVar7);
      (**(code **)(iVar2 + 0x70))();
      return;
    }
    pcVar1 = *(code **)(*(int *)this + 0x70);
    guard_check_icall(0);
    (*pcVar1)();
  }
  return;
}

