// rea decompile_all
// name: CDockSite::ResizeDockSiteByOffset
// address: 0x49c517
// body: available
// range: 0x49c517-0x49c5f2 inclusive
// non_contiguous: false
// provider: Ghidra 12.1.2 (ghidra)
// analysis_profile: ac6d50be2cdf54f7005df47d1ed7e7ef55dee595681eb1b7c2e0b00d70cd697d
// limitations: The session serves operations only after Ghidra reports default auto-analysis complete; incomplete analysis does not expose partial results.; The imported Program and temporary project are ephemeral and deleted on close. Annotation operations edit session database metadata; original executable bytes are never written.; Cancelling an active Ghidra request terminates its ephemeral database and discards session annotations. The selected target remains open; the next provider query imports the original artifact again.; Default-space addresses use lowercase 0x-prefixed hexadecimal; other address spaces use <percent-encoded-space>:0x<hex>.; The Ghidra Program references PDB ISPToolForMsi.pdb (GUID b8f2ac8f-1d6f-438d-800f-ed4a14426ac6, age (hex) 1, signature unknown, version RSDS); Ghidra reports load state unknown. Original names and types may be missing; an empty name search does not prove a procedure is absent. Use list_procedures and address-based analysis to inspect recovered functions. REA does not admit a caller-selected PDB companion.; This session uses Ghidra 12.1.2. The bridge is verified against 12.1.4; other 12.1.x builds are accepted and the observed version is reported.; Pseudocode is Ghidra decompiler output, not original source and not text-equivalent to Hopper output.; External functions and functions without an analyzable body return null; other decompiler failures remain explicit.
// pseudocode: provider-specific; not original source


/* Library Function - Single Match
    protected: void __thiscall CDockSite::ResizeDockSiteByOffset(int,int)
   
   Library: Visual Studio 2015 Release */

void __thiscall CDockSite::ResizeDockSiteByOffset(CDockSite *this,int param_1,int param_2)

{
  code *pcVar1;
  HWND pHVar2;
  CWnd *this_00;
  int iVar3;
  tagRECT *ptVar4;
  undefined4 uVar5;
  undefined4 uVar6;
  tagRECT local_18;
  uint local_8;
  
  local_8 = DAT_0060cff4 ^ (uint)&stack0xfffffffc;
  local_18.left = 0;
  local_18.top = 0;
  local_18.right = 0;
  local_18.bottom = 0;
  GetWindowRect(*(HWND *)(this + 0x20),&local_18);
  ptVar4 = &local_18;
  pHVar2 = GetParent(*(HWND *)(this + 0x20));
  this_00 = CWnd::FromHandle(pHVar2);
  CWnd::ScreenToClient(this_00,ptVar4);
  pcVar1 = *(code **)(*(int *)this + 0x194);
  guard_check_icall();
  iVar3 = (*pcVar1)();
  if (iVar3 == 0x1000) {
    local_18.right = local_18.right + param_1;
  }
  else if (iVar3 == 0x2000) {
    local_18.bottom = local_18.bottom + param_1;
  }
  else if (iVar3 == 0x4000) {
    local_18.left = local_18.left - param_1;
  }
  else if (iVar3 == 0x8000) {
    local_18.top = local_18.top - param_1;
  }
  ptVar4 = &local_18;
  uVar6 = 0;
  uVar5 = 1;
  pcVar1 = *(code **)(*(int *)this + 0x234);
  guard_check_icall(ptVar4,1,0);
  (*pcVar1)();
  if (param_2 != 0) {
    pcVar1 = *(code **)(*(int *)this + 0x2a8);
    guard_check_icall(ptVar4,uVar5,uVar6);
    (*pcVar1)();
  }
  __security_check_cookie(local_8 ^ (uint)&stack0xfffffffc);
  return;
}

