// rea decompile_all
// name: CWnd::OnNcDestroy
// address: 0x4303fa
// body: available
// range: 0x4303fa-0x430549 inclusive
// non_contiguous: false
// provider: Ghidra 12.1.2 (ghidra)
// analysis_profile: ac6d50be2cdf54f7005df47d1ed7e7ef55dee595681eb1b7c2e0b00d70cd697d
// limitations: The session serves operations only after Ghidra reports default auto-analysis complete; incomplete analysis does not expose partial results.; The imported Program and temporary project are ephemeral and deleted on close. Annotation operations edit session database metadata; original executable bytes are never written.; Cancelling an active Ghidra request terminates its ephemeral database and discards session annotations. The selected target remains open; the next provider query imports the original artifact again.; Default-space addresses use lowercase 0x-prefixed hexadecimal; other address spaces use <percent-encoded-space>:0x<hex>.; The Ghidra Program references PDB ISPToolForMsi.pdb (GUID b8f2ac8f-1d6f-438d-800f-ed4a14426ac6, age (hex) 1, signature unknown, version RSDS); Ghidra reports load state unknown. Original names and types may be missing; an empty name search does not prove a procedure is absent. Use list_procedures and address-based analysis to inspect recovered functions. REA does not admit a caller-selected PDB companion.; This session uses Ghidra 12.1.2. The bridge is verified against 12.1.4; other 12.1.x builds are accepted and the observed version is reported.; Pseudocode is Ghidra decompiler output, not original source and not text-equivalent to Hopper output.; External functions and functions without an analyzable body return null; other decompiler failures remain explicit.
// pseudocode: provider-specific; not original source


/* Library Function - Single Match
    protected: void __thiscall CWnd::OnNcDestroy(void)
   
   Library: Visual Studio 2015 Release */

void __thiscall CWnd::OnNcDestroy(CWnd *this)

{
  code *pcVar1;
  int iVar2;
  AFX_MODULE_STATE *pAVar3;
  int iVar4;
  AFX_MODULE_THREAD_STATE *pAVar5;
  LONG LVar6;
  LONG LVar7;
  int *piVar8;
  undefined4 local_38;
  undefined4 local_34;
  undefined4 local_30;
  undefined4 local_2c;
  uint local_8;
  
  local_8 = DAT_0060cff4 ^ (uint)&stack0xfffffffc;
  iVar2 = FUN_0042bc8f();
  if (iVar2 == 0) goto LAB_0043044f;
  if (*(CWnd **)(iVar2 + 0x20) == this) {
    pAVar3 = AfxGetModuleState();
    if (pAVar3[0x14] == (AFX_MODULE_STATE)0x0) {
      pAVar3 = AfxGetModuleState();
      if (iVar2 == *(int *)(pAVar3 + 4)) {
        iVar4 = AfxOleCanExitApp();
        if (iVar4 == 0) goto LAB_00430444;
      }
      AfxPostQuitMessage(0);
    }
LAB_00430444:
    *(undefined4 *)(iVar2 + 0x20) = 0;
  }
  if (*(CWnd **)(iVar2 + 0x24) == this) {
    *(undefined4 *)(iVar2 + 0x24) = 0;
  }
LAB_0043044f:
  if (*(int **)(this + 0x6c) != (int *)0x0) {
    pcVar1 = *(code **)(**(int **)(this + 0x6c) + 0x50);
    guard_check_icall();
    (*pcVar1)();
    *(undefined4 *)(this + 0x6c) = 0;
  }
  if (*(int **)(this + 0x70) != (int *)0x0) {
    pcVar1 = *(code **)(**(int **)(this + 0x70) + 4);
    guard_check_icall(1);
    (*pcVar1)();
  }
  *(undefined4 *)(this + 0x70) = 0;
  if (((byte)this[0x60] & 1) != 0) {
    pAVar5 = AfxGetModuleThreadState();
    iVar2 = *(int *)(pAVar5 + 0x3c);
    if ((iVar2 != 0) && (*(int *)(iVar2 + 0x20) != 0)) {
      _memset(&local_38,0,0x30);
      local_30 = *(undefined4 *)(this + 0x20);
      local_38 = 0x2c;
      local_34 = 1;
      local_2c = local_30;
      SendMessageW(*(HWND *)(iVar2 + 0x20),0x433,0,(LPARAM)&local_38);
    }
  }
  LVar6 = GetWindowLongW(*(HWND *)(this + 0x20),-4);
  FUN_0042ec70();
  LVar7 = GetWindowLongW(*(HWND *)(this + 0x20),-4);
  if (LVar7 == LVar6) {
    pcVar1 = *(code **)(*(int *)this + 0xfc);
    guard_check_icall();
    piVar8 = (int *)(*pcVar1)();
    if (*piVar8 != 0) {
      SetWindowLongW(*(HWND *)(this + 0x20),-4,*piVar8);
    }
  }
  Detach(this);
  pcVar1 = *(code **)(*(int *)this + 0x120);
  guard_check_icall();
  (*pcVar1)();
  __security_check_cookie(local_8 ^ (uint)&stack0xfffffffc);
  return;
}

