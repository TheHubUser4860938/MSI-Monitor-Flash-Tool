// rea decompile_all
// name: CPropertySheet::DoModal
// address: 0x10063e71
// body: available
// range: 0x10063e71-0x1006404b inclusive
// non_contiguous: false
// provider: Ghidra 12.1.2 (ghidra)
// analysis_profile: b075844f08879296d957518397cd0ddda73db81dce53d00d3f0e702766fc2af6
// limitations: The session serves operations only after Ghidra reports default auto-analysis complete; incomplete analysis does not expose partial results.; The imported Program and temporary project are ephemeral and deleted on close. Annotation operations edit session database metadata; original executable bytes are never written.; Cancelling an active Ghidra request terminates its ephemeral database and discards session annotations. The selected target remains open; the next provider query imports the original artifact again.; Default-space addresses use lowercase 0x-prefixed hexadecimal; other address spaces use <percent-encoded-space>:0x<hex>.; The Ghidra Program references PDB WinIspPlugIn.pdb (GUID d9f398c7-6c98-49a8-af25-a0659d5ad2f3, age (hex) 1, signature unknown, version RSDS); Ghidra reports load state unknown. Original names and types may be missing; an empty name search does not prove a procedure is absent. Use list_procedures and address-based analysis to inspect recovered functions. REA does not admit a caller-selected PDB companion.; This session uses Ghidra 12.1.2. The bridge is verified against 12.1.4; other 12.1.x builds are accepted and the observed version is reported.; Pseudocode is Ghidra decompiler output, not original source and not text-equivalent to Hopper output.; External functions and functions without an analyzable body return null; other decompiler failures remain explicit.
// pseudocode: provider-specific; not original source


/* Library Function - Single Match
    public: virtual int __thiscall CPropertySheet::DoModal(void)
   
   Library: Visual Studio 2015 Release */

int __thiscall CPropertySheet::DoModal(CPropertySheet *this)

{
  code *pcVar1;
  CWinApp *this_00;
  AFX_MODULE_STATE *pAVar2;
  HWND__ *pHVar3;
  BOOL BVar4;
  HWND pHVar5;
  int iVar6;
  ulong uVar7;
  HWND local_10;
  int local_c;
  int local_8;
  
  AfxEndDeferRegisterClass(0x10);
  AfxEndDeferRegisterClass(0xfc000);
  FUN_10052e9e();
  pcVar1 = *(code **)(*(int *)this + 0x170);
  guard_check_icall();
  (*pcVar1)();
  pAVar2 = AfxGetModuleState();
  this_00 = *(CWinApp **)(pAVar2 + 4);
  if (this_00 != (CWinApp *)0x0) {
    CWinApp::EnableModeless(this_00,0);
  }
  if (*(int *)(this + 0xcc) == 0) {
    pHVar3 = (HWND__ *)0x0;
  }
  else {
    pHVar3 = *(HWND__ **)(*(int *)(this + 0xcc) + 0x20);
  }
  pHVar3 = CWnd::GetSafeOwner_(pHVar3,&local_10);
  local_c = 0;
  *(HWND__ **)(this + 0x88) = pHVar3;
  if (pHVar3 != (HWND__ *)0x0) {
    BVar4 = IsWindowEnabled(pHVar3);
    if (BVar4 != 0) {
      EnableWindow(pHVar3,0);
      local_c = 1;
    }
  }
  pHVar5 = GetCapture();
  if (pHVar5 != (HWND)0x0) {
    SendMessageW(pHVar5,0x1f,0,0);
  }
  *(undefined4 *)(this + 0x68) = 0;
  if ((*(uint *)(this + 0x84) & 0x4000) == 0) {
    *(uint *)(this + 0x60) = *(uint *)(this + 0x60) | 0x10;
  }
  FUN_10052dbd(this);
  if ((*(uint *)(this + 0x84) & 0x4000) == 0) {
    *(uint *)(this + 0x84) = *(uint *)(this + 0x84) | 0x400;
    iVar6 = _IsolationAwarePropertySheetW_4(this + 0x80);
    *(uint *)(this + 0x84) = *(uint *)(this + 0x84) & 0xfffffbff;
    FUN_1005310a();
    if ((iVar6 == 0) || (iVar6 == -1)) {
      *(uint *)(this + 0x60) = *(uint *)(this + 0x60) & 0xffffffef;
    }
    local_8 = *(int *)(this + 0x68);
    pcVar1 = *(code **)(*(int *)this + 0x88);
    guard_check_icall();
    iVar6 = (*pcVar1)();
    if (iVar6 != 0) {
      uVar7 = CWnd::GetExStyle((CWnd *)this);
      local_8 = CWnd::RunModalLoop((CWnd *)this,(uVar7 & 0x100 | 0x400) >> 8);
    }
    if (*(int *)(this + 0x20) != 0) {
      CWnd::SetWindowPos((CWnd *)this,(CWnd *)0x0,0,0,0,0,0x97);
    }
  }
  else {
    local_8 = _IsolationAwarePropertySheetW_4(this + 0x80);
    FUN_1005310a();
    *(undefined4 *)(this + 0x20) = 0;
  }
  if (local_c != 0) {
    EnableWindow(pHVar3,1);
  }
  if (pHVar3 != (HWND__ *)0x0) {
    pHVar5 = GetActiveWindow();
    if (pHVar5 == *(HWND *)(this + 0x20)) {
      SetActiveWindow(pHVar3);
    }
  }
  if ((*(uint *)(this + 0x84) & 0x4000) == 0) {
    pcVar1 = *(code **)(*(int *)this + 0x60);
    guard_check_icall();
    (*pcVar1)();
  }
  if (this_00 != (CWinApp *)0x0) {
    CWinApp::EnableModeless(this_00,1);
  }
  if (local_10 != (HWND)0x0) {
    EnableWindow(local_10,1);
  }
  return local_8;
}

