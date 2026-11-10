// rea decompile_all
// name: CFileDialog::DoModal
// address: 0x1004b358
// body: available
// range: 0x1004b358-0x1004b4ae inclusive
// non_contiguous: false
// provider: Ghidra 12.1.2 (ghidra)
// analysis_profile: b075844f08879296d957518397cd0ddda73db81dce53d00d3f0e702766fc2af6
// limitations: The session serves operations only after Ghidra reports default auto-analysis complete; incomplete analysis does not expose partial results.; The imported Program and temporary project are ephemeral and deleted on close. Annotation operations edit session database metadata; original executable bytes are never written.; Cancelling an active Ghidra request terminates its ephemeral database and discards session annotations. The selected target remains open; the next provider query imports the original artifact again.; Default-space addresses use lowercase 0x-prefixed hexadecimal; other address spaces use <percent-encoded-space>:0x<hex>.; The Ghidra Program references PDB Comm_Aux.pdb (GUID ba7920cc-daa3-4461-a102-1f8f66c67a2a, age (hex) 1, signature unknown, version RSDS); Ghidra reports load state unknown. Original names and types may be missing; an empty name search does not prove a procedure is absent. Use list_procedures and address-based analysis to inspect recovered functions. REA does not admit a caller-selected PDB companion.; This session uses Ghidra 12.1.2. The bridge is verified against 12.1.4; other 12.1.x builds are accepted and the observed version is reported.; Pseudocode is Ghidra decompiler output, not original source and not text-equivalent to Hopper output.; External functions and functions without an analyzable body return null; other decompiler failures remain explicit.
// pseudocode: provider-specific; not original source


/* Library Function - Single Match
    public: virtual int __thiscall CFileDialog::DoModal(void)
   
   Library: Visual Studio 2015 Release */

int __thiscall CFileDialog::DoModal(CFileDialog *this)

{
  code *pcVar1;
  bool bVar2;
  size_t sVar3;
  HWND hWnd;
  HWND__ *pHVar4;
  BOOL BVar5;
  _AFX_THREAD_STATE *p_Var6;
  int iVar7;
  
  sVar3 = _wcslen(*(wchar_t **)(*(int *)(this + 0xa8) + 0x1c));
  _memset((void *)(*(int *)(*(int *)(this + 0xa8) + 0x1c) + (sVar3 + 1) * 2),0,
          (*(int *)(*(int *)(this + 0xa8) + 0x20) - (sVar3 + 1)) * 2);
  hWnd = GetFocus();
  iVar7 = *(int *)(this + 0xa8);
  bVar2 = false;
  pHVar4 = CDialog::PreModal((CDialog *)this);
  *(HWND__ **)(iVar7 + 4) = pHVar4;
  FUN_1004f9c4();
  if ((*(int *)(*(int *)(this + 0xa8) + 4) != 0) &&
     (BVar5 = IsWindowEnabled(*(HWND *)(*(int *)(this + 0xa8) + 4)), BVar5 != 0)) {
    bVar2 = true;
    EnableWindow(*(HWND *)(*(int *)(this + 0xa8) + 4),0);
  }
  p_Var6 = AfxGetThreadState();
  if ((*(int *)(this + 0xac) == 1) || ((*(uint *)(*(int *)(this + 0xa8) + 0x34) & 0x80000) == 0)) {
    FUN_1004f656(this);
  }
  else {
    *(CFileDialog **)(p_Var6 + 0x18) = this;
  }
  if (*(int *)(this + 0xac) == 1) {
    ApplyOFNToShellDialog(this);
    pcVar1 = *(code **)(**(int **)(this + 0xbc) + 0xc);
    guard_check_icall(*(int **)(this + 0xbc),*(undefined4 *)(*(int *)(this + 0xa8) + 4));
    iVar7 = (*pcVar1)();
    iVar7 = (iVar7 != 0) + 1;
  }
  else if (*(int *)(this + 0xc4) == 0) {
    iVar7 = FID_conflict__IsolationAwareGetOpenFileNameW_4(*(undefined4 *)(this + 0xa8));
  }
  else {
    iVar7 = FID_conflict__IsolationAwareGetOpenFileNameW_4(*(undefined4 *)(this + 0xa8));
  }
  *(undefined4 *)(p_Var6 + 0x18) = 0;
  if (bVar2) {
    EnableWindow(*(HWND *)(*(int *)(this + 0xa8) + 4),1);
  }
  BVar5 = IsWindow(hWnd);
  if (BVar5 != 0) {
    SetFocus(hWnd);
  }
  CDialog::PostModal((CDialog *)this);
  if (iVar7 == 0) {
    iVar7 = 2;
  }
  return iVar7;
}

