// rea decompile_all
// name: CMFCTabCtrl::SynchronizeScrollBar
// address: 0x10073ceb
// body: available
// range: 0x10073ceb-0x10073dbe inclusive
// non_contiguous: false
// provider: Ghidra 12.1.2 (ghidra)
// analysis_profile: b075844f08879296d957518397cd0ddda73db81dce53d00d3f0e702766fc2af6
// limitations: The session serves operations only after Ghidra reports default auto-analysis complete; incomplete analysis does not expose partial results.; The imported Program and temporary project are ephemeral and deleted on close. Annotation operations edit session database metadata; original executable bytes are never written.; Cancelling an active Ghidra request terminates its ephemeral database and discards session annotations. The selected target remains open; the next provider query imports the original artifact again.; Default-space addresses use lowercase 0x-prefixed hexadecimal; other address spaces use <percent-encoded-space>:0x<hex>.; The Ghidra Program references PDB Comm.pdb (GUID c3062acb-498d-45fa-a233-c8b7e401bb13, age (hex) 1, signature unknown, version RSDS); Ghidra reports load state unknown. Original names and types may be missing; an empty name search does not prove a procedure is absent. Use list_procedures and address-based analysis to inspect recovered functions. REA does not admit a caller-selected PDB companion.; This session uses Ghidra 12.1.2. The bridge is verified against 12.1.4; other 12.1.x builds are accepted and the observed version is reported.; Pseudocode is Ghidra decompiler output, not original source and not text-equivalent to Hopper output.; External functions and functions without an analyzable body return null; other decompiler failures remain explicit.
// pseudocode: provider-specific; not original source


/* Library Function - Single Match
    public: int __thiscall CMFCTabCtrl::SynchronizeScrollBar(struct tagSCROLLINFO *)
   
   Library: Visual Studio 2015 Release */

int __thiscall CMFCTabCtrl::SynchronizeScrollBar(CMFCTabCtrl *this,tagSCROLLINFO *param_1)

{
  code *pcVar1;
  CWnd *this_00;
  int iVar2;
  tagSCROLLINFO *ptVar3;
  tagSCROLLINFO local_24;
  uint local_8;
  
  local_8 = DAT_101d3fec ^ (uint)&stack0xfffffffc;
  if (*(int *)(this + 0x260) != 0) {
    _memset(&local_24,0,0x1c);
    local_24.cbSize = 0x1c;
    local_24.fMask = 0x17;
    pcVar1 = *(code **)(*(int *)this + 0x210);
    guard_check_icall();
    this_00 = (CWnd *)(*pcVar1)();
    if (param_1 == (tagSCROLLINFO *)0x0) {
      if ((this_00 != (CWnd *)0x0) &&
         ((iVar2 = CWnd::GetScrollInfo(this_00,0,&local_24,0x17), iVar2 == 0 ||
          (local_24.nMax <= (int)(local_24.nPage + local_24.nMin))))) {
        EnableScrollBar(*(HWND *)(this + 0x350),2,3);
        goto LAB_10073d79;
      }
    }
    else {
      ptVar3 = &local_24;
      for (iVar2 = 7; iVar2 != 0; iVar2 = iVar2 + -1) {
        ptVar3->cbSize = param_1->cbSize;
        param_1 = (tagSCROLLINFO *)&param_1->fMask;
        ptVar3 = (tagSCROLLINFO *)&ptVar3->fMask;
      }
    }
    EnableScrollBar(*(HWND *)(this + 0x350),2,0);
    CWnd::SetScrollInfo((CWnd *)(this + 0x330),2,&local_24,1);
    HideActiveWindowHorzScrollBar(this);
  }
LAB_10073d79:
  iVar2 = __security_check_cookie(local_8 ^ (uint)&stack0xfffffffc);
  return iVar2;
}

