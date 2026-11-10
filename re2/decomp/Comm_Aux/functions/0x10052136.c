// rea decompile_all
// name: CWnd::OnNcDestroy
// address: 0x10052136
// body: available
// range: 0x10052136-0x10052285 inclusive
// non_contiguous: false
// provider: Ghidra 12.1.2 (ghidra)
// analysis_profile: b075844f08879296d957518397cd0ddda73db81dce53d00d3f0e702766fc2af6
// limitations: The session serves operations only after Ghidra reports default auto-analysis complete; incomplete analysis does not expose partial results.; The imported Program and temporary project are ephemeral and deleted on close. Annotation operations edit session database metadata; original executable bytes are never written.; Cancelling an active Ghidra request terminates its ephemeral database and discards session annotations. The selected target remains open; the next provider query imports the original artifact again.; Default-space addresses use lowercase 0x-prefixed hexadecimal; other address spaces use <percent-encoded-space>:0x<hex>.; The Ghidra Program references PDB Comm_Aux.pdb (GUID ba7920cc-daa3-4461-a102-1f8f66c67a2a, age (hex) 1, signature unknown, version RSDS); Ghidra reports load state unknown. Original names and types may be missing; an empty name search does not prove a procedure is absent. Use list_procedures and address-based analysis to inspect recovered functions. REA does not admit a caller-selected PDB companion.; This session uses Ghidra 12.1.2. The bridge is verified against 12.1.4; other 12.1.x builds are accepted and the observed version is reported.; Pseudocode is Ghidra decompiler output, not original source and not text-equivalent to Hopper output.; External functions and functions without an analyzable body return null; other decompiler failures remain explicit.
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
  
  local_8 = DAT_10206460 ^ (uint)&stack0xfffffffc;
  iVar2 = FUN_10058939();
  if (iVar2 == 0) goto LAB_1005218b;
  if (*(CWnd **)(iVar2 + 0x20) == this) {
    pAVar3 = AfxGetModuleState();
    if (pAVar3[0x14] == (AFX_MODULE_STATE)0x0) {
      pAVar3 = AfxGetModuleState();
      if (iVar2 == *(int *)(pAVar3 + 4)) {
        iVar4 = AfxOleCanExitApp();
        if (iVar4 == 0) goto LAB_10052180;
      }
      AfxPostQuitMessage(0);
    }
LAB_10052180:
    *(undefined4 *)(iVar2 + 0x20) = 0;
  }
  if (*(CWnd **)(iVar2 + 0x24) == this) {
    *(undefined4 *)(iVar2 + 0x24) = 0;
  }
LAB_1005218b:
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
  FUN_100509af();
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

