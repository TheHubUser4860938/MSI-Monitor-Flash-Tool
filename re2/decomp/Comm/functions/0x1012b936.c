// rea decompile_all
// name: COleIPFrameWnd::OnResizeChild
// address: 0x1012b936
// body: available
// range: 0x1012b936-0x1012ba3b inclusive
// non_contiguous: false
// provider: Ghidra 12.1.2 (ghidra)
// analysis_profile: b075844f08879296d957518397cd0ddda73db81dce53d00d3f0e702766fc2af6
// limitations: The session serves operations only after Ghidra reports default auto-analysis complete; incomplete analysis does not expose partial results.; The imported Program and temporary project are ephemeral and deleted on close. Annotation operations edit session database metadata; original executable bytes are never written.; Cancelling an active Ghidra request terminates its ephemeral database and discards session annotations. The selected target remains open; the next provider query imports the original artifact again.; Default-space addresses use lowercase 0x-prefixed hexadecimal; other address spaces use <percent-encoded-space>:0x<hex>.; The Ghidra Program references PDB Comm.pdb (GUID c3062acb-498d-45fa-a233-c8b7e401bb13, age (hex) 1, signature unknown, version RSDS); Ghidra reports load state unknown. Original names and types may be missing; an empty name search does not prove a procedure is absent. Use list_procedures and address-based analysis to inspect recovered functions. REA does not admit a caller-selected PDB companion.; This session uses Ghidra 12.1.2. The bridge is verified against 12.1.4; other 12.1.x builds are accepted and the observed version is reported.; Pseudocode is Ghidra decompiler output, not original source and not text-equivalent to Hopper output.; External functions and functions without an analyzable body return null; other decompiler failures remain explicit.
// pseudocode: provider-specific; not original source


/* Library Function - Single Match
    protected: long __thiscall COleIPFrameWnd::OnResizeChild(unsigned int,long)
   
   Library: Visual Studio 2015 Release */

long __thiscall COleIPFrameWnd::OnResizeChild(COleIPFrameWnd *this,uint param_1,long param_2)

{
  code *pcVar1;
  int iVar2;
  HWND pHVar3;
  CWnd *pCVar4;
  long lVar5;
  int local_28;
  int local_24;
  int local_20;
  int local_1c;
  tagRECT local_18;
  uint local_8;
  
  local_8 = DAT_101d3fec ^ (uint)&stack0xfffffffc;
  pcVar1 = *(code **)(*(int *)this + 0x16c);
  guard_check_icall();
  iVar2 = (*pcVar1)();
  if (iVar2 != 0) {
    local_18.left = 0;
    local_18.top = 0;
    local_18.right = 0;
    local_18.bottom = 0;
    CopyRect(&local_18,(RECT *)param_2);
    pHVar3 = GetParent(*(HWND *)(this + 0x20));
    pCVar4 = CWnd::FromHandle(pHVar3);
    CWnd::ClientToScreen((CWnd *)this,&local_18);
    CWnd::ScreenToClient(pCVar4,&local_18);
    pCVar4 = CWnd::GetDlgItem((CWnd *)this,0xe900);
    local_28 = *(int *)(this + 0x168);
    local_24 = *(int *)(this + 0x16c);
    local_20 = *(int *)(this + 0x170);
    local_1c = *(int *)(this + 0x174);
    pcVar1 = *(code **)(*(int *)pCVar4 + 0x68);
    guard_check_icall(&local_28,1);
    (*pcVar1)();
    local_18.left = local_18.left + (*(int *)(this + 0x168) - local_28);
    local_18.top = local_18.top + (*(int *)(this + 0x16c) - local_24);
    local_18.right = local_18.right + (*(int *)(this + 0x170) - local_20);
    local_18.bottom = local_18.bottom + (*(int *)(this + 0x174) - local_1c);
    pcVar1 = *(code **)(*(int *)this + 0x1dc);
    guard_check_icall(&local_18);
    (*pcVar1)();
  }
  lVar5 = __security_check_cookie(local_8 ^ (uint)&stack0xfffffffc);
  return lVar5;
}

