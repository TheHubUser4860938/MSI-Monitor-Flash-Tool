// rea decompile_all
// name: CMFCPropertyGridCtrl::TrackHeader
// address: 0x1004c96a
// body: available
// range: 0x1004c96a-0x1004cad0 inclusive
// non_contiguous: false
// provider: Ghidra 12.1.2 (ghidra)
// analysis_profile: b075844f08879296d957518397cd0ddda73db81dce53d00d3f0e702766fc2af6
// limitations: The session serves operations only after Ghidra reports default auto-analysis complete; incomplete analysis does not expose partial results.; The imported Program and temporary project are ephemeral and deleted on close. Annotation operations edit session database metadata; original executable bytes are never written.; Cancelling an active Ghidra request terminates its ephemeral database and discards session annotations. The selected target remains open; the next provider query imports the original artifact again.; Default-space addresses use lowercase 0x-prefixed hexadecimal; other address spaces use <percent-encoded-space>:0x<hex>.; The Ghidra Program references PDB WinOperateCScaler.pdb (GUID a6737962-efea-4805-8ae6-1fc1ef126554, age (hex) 1, signature unknown, version RSDS); Ghidra reports load state unknown. Original names and types may be missing; an empty name search does not prove a procedure is absent. Use list_procedures and address-based analysis to inspect recovered functions. REA does not admit a caller-selected PDB companion.; This session uses Ghidra 12.1.2. The bridge is verified against 12.1.4; other 12.1.x builds are accepted and the observed version is reported.; Pseudocode is Ghidra decompiler output, not original source and not text-equivalent to Hopper output.; External functions and functions without an analyzable body return null; other decompiler failures remain explicit.
// pseudocode: provider-specific; not original source


/* WARNING: Function: __EH_prolog3_GS replaced with injection: EH_prolog3 */
/* Library Function - Single Match
    protected: void __thiscall CMFCPropertyGridCtrl::TrackHeader(int)
   
   Library: Visual Studio 2015 Release */

void __thiscall CMFCPropertyGridCtrl::TrackHeader(CMFCPropertyGridCtrl *this,int param_1)

{
  RECT *pRVar1;
  code *pcVar2;
  BOOL BVar3;
  int iVar4;
  int iVar5;
  undefined4 local_6c;
  int local_68;
  CClientDC local_3c [4];
  HDC local_38;
  int local_28;
  tagRECT local_24;
  undefined4 local_8;
  undefined4 uStack_4;
  
  uStack_4 = 0x5c;
  local_8 = 0x1004c976;
  CClientDC::CClientDC(local_3c,(CWnd *)this);
  local_8 = 0;
  pRVar1 = (RECT *)(this + 0x368);
  BVar3 = IsRectEmpty(pRVar1);
  if ((BVar3 == 0) && (*(int *)(this + 0x39c) == 0)) {
    InvertRect(local_38,pRVar1);
  }
  if (param_1 < 0) {
    SetRectEmpty(pRVar1);
  }
  else {
    pRVar1->left = *(LONG *)(this + 0x328);
    pRVar1 = (RECT *)(this + 0x368);
    *(undefined4 *)(this + 0x36c) = *(undefined4 *)(this + 0x32c);
    *(undefined4 *)(this + 0x370) = *(undefined4 *)(this + 0x330);
    *(undefined4 *)(this + 0x374) = *(undefined4 *)(this + 0x334);
    pRVar1->left = pRVar1->left + param_1;
    *(LONG *)(this + 0x370) = pRVar1->left + 1;
    if (*(int *)(this + 0x39c) == 0) {
      InvertRect(local_38,pRVar1);
    }
    else {
      local_24.left = 0;
      local_24.top = 0;
      local_24.right = 0;
      local_24.bottom = 0;
      GetClientRect(*(HWND *)(this + 0x20),&local_24);
      local_28 = *(int *)(this + 0x354);
      if (local_28 <= param_1) {
        local_28 = param_1;
      }
      iVar5 = local_24.right - local_24.left;
      iVar4 = GetSystemMetrics(0x15);
      if (local_28 < (iVar5 - iVar4) + -5) {
        iVar4 = *(int *)(this + 0x354);
        if (*(int *)(this + 0x354) <= param_1) {
          iVar4 = param_1;
        }
      }
      else {
        iVar5 = local_24.right - local_24.left;
        iVar4 = GetSystemMetrics(0x15);
        iVar4 = (iVar5 - iVar4) + -5;
      }
      local_68 = iVar4 + 2;
      *(int *)(this + 0x358) = iVar4;
      local_6c = 1;
      pcVar2 = *(code **)(*(int *)this + 0x164);
      guard_check_icall();
      iVar4 = (*pcVar2)();
      SendMessageW(*(HWND *)(iVar4 + 0x20),0x120c,0,(LPARAM)&local_6c);
      local_68 = (local_24.right - local_24.left) + 10;
      pcVar2 = *(code **)(*(int *)this + 0x164);
      guard_check_icall();
      iVar4 = (*pcVar2)();
      SendMessageW(*(HWND *)(iVar4 + 0x20),0x120c,1,(LPARAM)&local_6c);
    }
  }
  CClientDC::~CClientDC(local_3c);
  FUN_10154478();
  return;
}

