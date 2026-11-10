// rea decompile_all
// name: CWnd::RepositionBars
// address: 0x1001fcb2
// body: available
// range: 0x1001fcb2-0x1001fe27 inclusive
// non_contiguous: false
// provider: Ghidra 12.1.2 (ghidra)
// analysis_profile: b075844f08879296d957518397cd0ddda73db81dce53d00d3f0e702766fc2af6
// limitations: The session serves operations only after Ghidra reports default auto-analysis complete; incomplete analysis does not expose partial results.; The imported Program and temporary project are ephemeral and deleted on close. Annotation operations edit session database metadata; original executable bytes are never written.; Cancelling an active Ghidra request terminates its ephemeral database and discards session annotations. The selected target remains open; the next provider query imports the original artifact again.; Default-space addresses use lowercase 0x-prefixed hexadecimal; other address spaces use <percent-encoded-space>:0x<hex>.; The Ghidra Program references PDB Comm.pdb (GUID c3062acb-498d-45fa-a233-c8b7e401bb13, age (hex) 1, signature unknown, version RSDS); Ghidra reports load state unknown. Original names and types may be missing; an empty name search does not prove a procedure is absent. Use list_procedures and address-based analysis to inspect recovered functions. REA does not admit a caller-selected PDB companion.; This session uses Ghidra 12.1.2. The bridge is verified against 12.1.4; other 12.1.x builds are accepted and the observed version is reported.; Pseudocode is Ghidra decompiler output, not original source and not text-equivalent to Hopper output.; External functions and functions without an analyzable body return null; other decompiler failures remain explicit.
// pseudocode: provider-specific; not original source


/* Library Function - Single Match
    public: void __thiscall CWnd::RepositionBars(unsigned int,unsigned int,unsigned int,unsigned
   int,struct tagRECT *,struct tagRECT const *,int)
   
   Library: Visual Studio 2015 Release */

void __thiscall
CWnd::RepositionBars
          (CWnd *this,uint param_1,uint param_2,uint param_3,uint param_4,tagRECT *param_5,
          tagRECT *param_6,int param_7)

{
  code *pcVar1;
  HWND__ *pHVar2;
  HWND hWnd;
  uint uVar3;
  CWnd *pCVar4;
  uint uVar5;
  HWND__ *local_2c;
  HDWP local_28;
  tagRECT local_24;
  LONG local_14;
  LONG local_10;
  int local_c;
  uint local_8;
  
  local_8 = DAT_101d3fec ^ (uint)&stack0xfffffffc;
  local_10 = 0;
  local_14 = 0;
  local_2c = (HWND__ *)0x0;
  local_c = param_7;
  if (param_6 == (tagRECT *)0x0) {
    GetClientRect(*(HWND *)(this + 0x20),&local_24);
  }
  else {
    local_24.left = param_6->left;
    local_24.top = param_6->top;
    local_24.right = param_6->right;
    local_24.bottom = param_6->bottom;
  }
  uVar5 = param_4 & 0xffff7fff;
  if (uVar5 == 1) {
    local_28 = (HDWP)0x0;
  }
  else {
    local_28 = BeginDeferWindowPos(8);
  }
  for (hWnd = GetTopWindow(*(HWND *)(this + 0x20)); hWnd != (HWND)0x0; hWnd = GetWindow(hWnd,2)) {
    uVar3 = ::GetDlgCtrlID(hWnd);
    pCVar4 = FromHandlePermanent(hWnd);
    pHVar2 = hWnd;
    if ((((uVar3 != param_3) && (pHVar2 = local_2c, param_1 <= uVar3)) && (uVar3 <= param_2)) &&
       (pCVar4 != (CWnd *)0x0)) {
      SendMessageW(hWnd,0x361,0,(LPARAM)&local_28);
    }
    local_2c = pHVar2;
  }
  if (uVar5 == 1) {
    if (param_7 == 0) {
      param_5->top = 0;
      param_5->left = 0;
      param_5->right = local_14;
      param_5->bottom = local_10;
    }
    else {
      CopyRect(param_5,&local_24);
    }
  }
  else {
    if ((param_3 != 0) && (local_2c != (HWND__ *)0x0)) {
      pCVar4 = FromHandle(local_2c);
      if (uVar5 == 2) {
        local_24.left = local_24.left + param_5->left;
        local_24.top = local_24.top + param_5->top;
        local_24.right = local_24.right - param_5->right;
        local_24.bottom = local_24.bottom - param_5->bottom;
      }
      if ((param_4 & 0x8000) == 0) {
        pcVar1 = *(code **)(*(int *)pCVar4 + 0x68);
        guard_check_icall(&local_24,0);
        (*pcVar1)();
        AfxRepositionWindow((AFX_SIZEPARENTPARAMS *)&local_28,local_2c,&local_24);
      }
    }
    if (local_28 != (HDWP)0x0) {
      EndDeferWindowPos(local_28);
    }
  }
  __security_check_cookie(local_8 ^ (uint)&stack0xfffffffc);
  return;
}

