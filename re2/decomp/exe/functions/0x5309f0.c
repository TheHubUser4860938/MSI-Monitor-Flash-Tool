// rea decompile_all
// name: COleIPFrameWnd::RecalcLayout
// address: 0x5309f0
// body: available
// range: 0x5309f0-0x530b9b inclusive
// non_contiguous: false
// provider: Ghidra 12.1.2 (ghidra)
// analysis_profile: ac6d50be2cdf54f7005df47d1ed7e7ef55dee595681eb1b7c2e0b00d70cd697d
// limitations: The session serves operations only after Ghidra reports default auto-analysis complete; incomplete analysis does not expose partial results.; The imported Program and temporary project are ephemeral and deleted on close. Annotation operations edit session database metadata; original executable bytes are never written.; Cancelling an active Ghidra request terminates its ephemeral database and discards session annotations. The selected target remains open; the next provider query imports the original artifact again.; Default-space addresses use lowercase 0x-prefixed hexadecimal; other address spaces use <percent-encoded-space>:0x<hex>.; The Ghidra Program references PDB ISPToolForMsi.pdb (GUID b8f2ac8f-1d6f-438d-800f-ed4a14426ac6, age (hex) 1, signature unknown, version RSDS); Ghidra reports load state unknown. Original names and types may be missing; an empty name search does not prove a procedure is absent. Use list_procedures and address-based analysis to inspect recovered functions. REA does not admit a caller-selected PDB companion.; This session uses Ghidra 12.1.2. The bridge is verified against 12.1.4; other 12.1.x builds are accepted and the observed version is reported.; Pseudocode is Ghidra decompiler output, not original source and not text-equivalent to Hopper output.; External functions and functions without an analyzable body return null; other decompiler failures remain explicit.
// pseudocode: provider-specific; not original source


/* Library Function - Single Match
    public: virtual void __thiscall COleIPFrameWnd::RecalcLayout(int)
   
   Library: Visual Studio 2015 Release */

void __thiscall COleIPFrameWnd::RecalcLayout(COleIPFrameWnd *this,int param_1)

{
  code *pcVar1;
  HWND pHVar2;
  CWnd *this_00;
  int iVar3;
  CWnd *pCVar4;
  undefined4 local_50;
  tagRECT local_48;
  tagRECT local_38;
  tagRECT local_28;
  RECT local_18;
  uint local_8;
  
  local_8 = DAT_0060cff4 ^ (uint)&stack0xfffffffc;
  pHVar2 = GetParent(*(HWND *)(this + 0x20));
  this_00 = CWnd::FromHandle(pHVar2);
  local_50 = 0;
  pcVar1 = *(code **)(*(int *)this + 0x16c);
  guard_check_icall();
  iVar3 = (*pcVar1)();
  if ((iVar3 != 0) && (*(int *)(iVar3 + 0x15c) != 0)) {
    local_50 = 1;
  }
  local_28.left = 0;
  local_28.top = 0;
  local_38.left = 0;
  local_38.top = 0;
  local_38.right = 0;
  local_38.bottom = 0;
  local_28.right = 0x3fffffff;
  local_28.bottom = 0x3fffffff;
  CWnd::RepositionBars((CWnd *)this,0,0xffff,0xe900,1,&local_38,&local_28,1);
  local_18.left = *(int *)(this + 0x168) - local_38.left;
  local_18.top = *(int *)(this + 0x16c) - local_38.top;
  local_18.bottom = *(int *)(this + 0x174) + (0x3fffffff - local_38.bottom);
  local_18.right = *(int *)(this + 0x170) + (0x3fffffff - local_38.right);
  pCVar4 = CWnd::GetDlgItem((CWnd *)this,0xe900);
  if (pCVar4 != (CWnd *)0x0) {
    local_28.left = *(LONG *)(this + 0x168);
    local_28.top = *(LONG *)(this + 0x16c);
    local_28.right = *(LONG *)(this + 0x170);
    local_28.bottom = *(LONG *)(this + 0x174);
    pcVar1 = *(code **)(*(int *)pCVar4 + 0x68);
    guard_check_icall(&local_28,1);
    (*pcVar1)();
    local_18.left = local_18.left + (local_28.left - *(int *)(this + 0x168));
    local_18.top = local_18.top + (local_28.top - *(int *)(this + 0x16c));
    local_18.right = local_18.right + (local_28.right - *(int *)(this + 0x170));
    local_18.bottom = local_18.bottom + (local_28.bottom - *(int *)(this + 0x174));
  }
  pcVar1 = *(code **)(*(int *)this + 0x68);
  guard_check_icall(&local_18,local_50);
  (*pcVar1)();
  local_48.left = 0;
  local_48.top = 0;
  local_48.right = 0;
  local_48.bottom = 0;
  IntersectRect(&local_48,&local_18,(RECT *)(this + 0x178));
  AfxRepositionWindow((AFX_SIZEPARENTPARAMS *)0x0,*(HWND__ **)(this + 0x20),&local_48);
  CWnd::ClientToScreen(this_00,&local_18);
  CWnd::ScreenToClient((CWnd *)this,&local_18);
  CWnd::RepositionBars((CWnd *)this,0,0xffff,0xe900,0,(tagRECT *)0x0,&local_18,1);
  __security_check_cookie(local_8 ^ (uint)&stack0xfffffffc);
  return;
}

