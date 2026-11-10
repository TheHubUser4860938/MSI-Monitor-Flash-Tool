// rea decompile_all
// name: CWnd::CenterWindow
// address: 0x1003fbd9
// body: available
// range: 0x1003fbd9-0x1003fd98 inclusive
// non_contiguous: false
// provider: Ghidra 12.1.2 (ghidra)
// analysis_profile: b075844f08879296d957518397cd0ddda73db81dce53d00d3f0e702766fc2af6
// limitations: The session serves operations only after Ghidra reports default auto-analysis complete; incomplete analysis does not expose partial results.; The imported Program and temporary project are ephemeral and deleted on close. Annotation operations edit session database metadata; original executable bytes are never written.; Cancelling an active Ghidra request terminates its ephemeral database and discards session annotations. The selected target remains open; the next provider query imports the original artifact again.; Default-space addresses use lowercase 0x-prefixed hexadecimal; other address spaces use <percent-encoded-space>:0x<hex>.; The Ghidra Program references PDB Comm_GFXI2C.pdb (GUID d304cc6d-b3ee-4851-b468-0ab5e385ca92, age (hex) 1, signature unknown, version RSDS); Ghidra reports load state unknown. Original names and types may be missing; an empty name search does not prove a procedure is absent. Use list_procedures and address-based analysis to inspect recovered functions. REA does not admit a caller-selected PDB companion.; This session uses Ghidra 12.1.2. The bridge is verified against 12.1.4; other 12.1.x builds are accepted and the observed version is reported.; Pseudocode is Ghidra decompiler output, not original source and not text-equivalent to Hopper output.; External functions and functions without an analyzable body return null; other decompiler failures remain explicit.
// pseudocode: provider-specific; not original source


/* Library Function - Single Match
    public: void __thiscall CWnd::CenterWindow(class CWnd *)
   
   Library: Visual Studio 2008 Release */

void __thiscall CWnd::CenterWindow(CWnd *this,CWnd *param_1)

{
  uint uVar1;
  CWnd *pCVar2;
  int iVar3;
  HWND pHVar4;
  int iVar5;
  HWND pHVar6;
  uint *puVar7;
  uint local_64 [5];
  RECT local_50;
  tagRECT local_3c;
  tagRECT local_2c;
  tagRECT local_1c;
  CWnd *local_c;
  ulong local_8;
  
  local_c = this;
  local_8 = GetExStyle(this);
  if (param_1 == (CWnd *)0x0) {
    if ((local_8 & 0x40000000) == 0) {
      pHVar6 = ::GetWindow(*(HWND *)(this + 0x20),4);
    }
    else {
      pHVar6 = GetParent(*(HWND *)(this + 0x20));
    }
    if (pHVar6 != (HWND)0x0) {
      pHVar4 = (HWND)SendMessageW(pHVar6,0x36b,0,0);
      if (pHVar4 != (HWND)0x0) {
        pHVar6 = pHVar4;
      }
    }
  }
  else {
    pHVar6 = *(HWND *)(param_1 + 0x20);
  }
  GetWindowRect(*(HWND *)(this + 0x20),&local_3c);
  if ((local_8 & 0x40000000) == 0) {
    if (pHVar6 != (HWND)0x0) {
      uVar1 = GetWindowLongW(pHVar6,-0x10);
      if (((uVar1 & 0x10000000) == 0) || ((uVar1 & 0x20000000) != 0)) {
        pHVar6 = (HWND)0x0;
      }
    }
    local_64[0] = 0x28;
    if (pHVar6 == (HWND)0x0) {
      pCVar2 = AfxGetMainWnd();
      pHVar6 = (HWND)0x0;
      if (pCVar2 != (CWnd *)0x0) {
        pHVar6 = *(HWND *)(pCVar2 + 0x20);
      }
      puVar7 = local_64;
      iVar3 = xMonitorFromWindow(pHVar6,1);
      xGetMonitorInfo(iVar3,puVar7);
      CopyRect(&local_2c,&local_50);
      CopyRect(&local_1c,&local_50);
    }
    else {
      GetWindowRect(pHVar6,&local_2c);
      puVar7 = local_64;
      iVar3 = xMonitorFromWindow(pHVar6,2);
      xGetMonitorInfo(iVar3,puVar7);
      CopyRect(&local_1c,&local_50);
    }
  }
  else {
    pHVar4 = GetParent(*(HWND *)(this + 0x20));
    GetClientRect(pHVar4,&local_1c);
    GetClientRect(pHVar6,&local_2c);
    MapWindowPoints(pHVar6,pHVar4,(LPPOINT)&local_2c,2);
  }
  iVar3 = (local_2c.left + local_2c.right) / 2 - (local_3c.right - local_3c.left) / 2;
  iVar5 = (local_2c.top + local_2c.bottom) / 2 - (local_3c.bottom - local_3c.top) / 2;
  if (local_1c.right < (local_3c.right - local_3c.left) + iVar3) {
    iVar3 = (local_3c.left - local_3c.right) + local_1c.right;
  }
  if (iVar3 < local_1c.left) {
    iVar3 = local_1c.left;
  }
  if (local_1c.bottom < (local_3c.bottom - local_3c.top) + iVar5) {
    iVar5 = (local_3c.top - local_3c.bottom) + local_1c.bottom;
  }
  if (iVar5 < local_1c.top) {
    iVar5 = local_1c.top;
  }
  SetWindowPos(local_c,(CWnd *)0x0,iVar3,iVar5,-1,-1,0x15);
  return;
}

