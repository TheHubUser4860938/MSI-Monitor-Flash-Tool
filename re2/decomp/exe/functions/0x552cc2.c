// rea decompile_all
// name: CMFCTasksPane::SetScrollSizes
// address: 0x552cc2
// body: available
// range: 0x552cc2-0x552e69 inclusive
// non_contiguous: false
// provider: Ghidra 12.1.2 (ghidra)
// analysis_profile: ac6d50be2cdf54f7005df47d1ed7e7ef55dee595681eb1b7c2e0b00d70cd697d
// limitations: The session serves operations only after Ghidra reports default auto-analysis complete; incomplete analysis does not expose partial results.; The imported Program and temporary project are ephemeral and deleted on close. Annotation operations edit session database metadata; original executable bytes are never written.; Cancelling an active Ghidra request terminates its ephemeral database and discards session annotations. The selected target remains open; the next provider query imports the original artifact again.; Default-space addresses use lowercase 0x-prefixed hexadecimal; other address spaces use <percent-encoded-space>:0x<hex>.; The Ghidra Program references PDB ISPToolForMsi.pdb (GUID b8f2ac8f-1d6f-438d-800f-ed4a14426ac6, age (hex) 1, signature unknown, version RSDS); Ghidra reports load state unknown. Original names and types may be missing; an empty name search does not prove a procedure is absent. Use list_procedures and address-based analysis to inspect recovered functions. REA does not admit a caller-selected PDB companion.; This session uses Ghidra 12.1.2. The bridge is verified against 12.1.4; other 12.1.x builds are accepted and the observed version is reported.; Pseudocode is Ghidra decompiler output, not original source and not text-equivalent to Hopper output.; External functions and functions without an analyzable body return null; other decompiler failures remain explicit.
// pseudocode: provider-specific; not original source


/* Library Function - Single Match
    protected: void __thiscall CMFCTasksPane::SetScrollSizes(void)
   
   Library: Visual Studio 2015 Release */

void __thiscall CMFCTasksPane::SetScrollSizes(CMFCTasksPane *this)

{
  code *pcVar1;
  int iVar2;
  int iVar3;
  int iVar4;
  UINT wArrows;
  int local_28;
  tagSCROLLINFO local_24;
  uint local_8;
  
  local_8 = DAT_0060cff4 ^ (uint)&stack0xfffffffc;
  if ((this == (CMFCTasksPane *)0xfffffb60) || (*(int *)(this + 0x4c0) == 0)) goto LAB_00552e5b;
  wArrows = 0;
  if (*(int *)(this + 0x3a4) == 0) {
    *(undefined4 *)(this + 0x3a0) = 0;
    *(undefined4 *)(this + 0x39c) = 0;
    *(undefined4 *)(this + 0x398) = 0;
  }
  else {
    local_28 = *(int *)(this + 0x450) - *(int *)(this + 0x448);
    if (*(int *)(this + 0x374) != 0) {
      local_28 = local_28 + (-1 - *(int *)(this + 0x394));
    }
    iVar3 = *(int *)(this + 0x470);
    if (((*(int *)(this + 0x36c) != 0) || (iVar2 = ForceShowNavToolbar(this), iVar2 != 0)) &&
       (1 < iVar3)) {
      local_28 = local_28 + (*(int *)(this + 0x420) - *(int *)(this + 0x418));
    }
    *(int *)(this + 0x3a0) = local_28 / *(int *)(this + 0x3a4) + -1;
    pcVar1 = *(code **)(*(int *)this + 0x3e0);
    guard_check_icall(1);
    iVar3 = (*pcVar1)();
    if ((iVar3 == 0) || (iVar3 <= local_28)) {
      *(undefined4 *)(this + 0x3a0) = 0;
      *(undefined4 *)(this + 0x39c) = 0;
      *(undefined4 *)(this + 0x398) = 0;
    }
    else {
      *(int *)(this + 0x39c) = iVar3 / *(int *)(this + 0x3a4) + -1;
    }
    iVar3 = *(int *)(this + 0x398);
    iVar2 = 0;
    if (-1 < iVar3) {
      iVar2 = iVar3;
    }
    iVar4 = (*(int *)(this + 0x39c) - *(int *)(this + 0x3a0)) + 1;
    if ((iVar2 < iVar4) && (iVar4 = iVar3, iVar3 < 0)) {
      iVar4 = 0;
    }
    *(int *)(this + 0x398) = iVar4;
  }
  if (*(int *)(this + 0x374) == 0) {
    _memset(&local_24,0,0x1c);
    local_24.nMax = *(int *)(this + 0x39c);
    local_24.nPage = *(UINT *)(this + 0x3a0);
    local_24.nPos = *(int *)(this + 0x398);
    local_24.cbSize = 0x1c;
    local_24.fMask = 7;
    local_24.nMin = 0;
    CWnd::SetScrollInfo((CWnd *)this,1,&local_24,1);
    if ((*(int *)(this + 0x374) != 0) || (*(int *)(this + 0x39c) < 1)) goto LAB_00552e47;
  }
  else {
LAB_00552e47:
    wArrows = 3;
  }
  EnableScrollBar(*(HWND *)(this + 0x4c0),2,wArrows);
LAB_00552e5b:
  __security_check_cookie(local_8 ^ (uint)&stack0xfffffffc);
  return;
}

