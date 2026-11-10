// rea decompile_all
// name: CWnd::OnNcDestroy
// address: 0x100403f4
// body: available
// range: 0x100403f4-0x10040506 inclusive
// non_contiguous: false
// provider: Ghidra 12.1.2 (ghidra)
// analysis_profile: b075844f08879296d957518397cd0ddda73db81dce53d00d3f0e702766fc2af6
// limitations: The session serves operations only after Ghidra reports default auto-analysis complete; incomplete analysis does not expose partial results.; The imported Program and temporary project are ephemeral and deleted on close. Annotation operations edit session database metadata; original executable bytes are never written.; Cancelling an active Ghidra request terminates its ephemeral database and discards session annotations. The selected target remains open; the next provider query imports the original artifact again.; Default-space addresses use lowercase 0x-prefixed hexadecimal; other address spaces use <percent-encoded-space>:0x<hex>.; The Ghidra Program references PDB Comm_GFXI2C.pdb (GUID d304cc6d-b3ee-4851-b468-0ab5e385ca92, age (hex) 1, signature unknown, version RSDS); Ghidra reports load state unknown. Original names and types may be missing; an empty name search does not prove a procedure is absent. Use list_procedures and address-based analysis to inspect recovered functions. REA does not admit a caller-selected PDB companion.; This session uses Ghidra 12.1.2. The bridge is verified against 12.1.4; other 12.1.x builds are accepted and the observed version is reported.; Pseudocode is Ghidra decompiler output, not original source and not text-equivalent to Hopper output.; External functions and functions without an analyzable body return null; other decompiler failures remain explicit.
// pseudocode: provider-specific; not original source


/* Library Function - Single Match
    protected: void __thiscall CWnd::OnNcDestroy(void)
   
   Library: Visual Studio 2008 Release */

void __thiscall CWnd::OnNcDestroy(CWnd *this)

{
  int iVar1;
  AFX_MODULE_STATE *pAVar2;
  int iVar3;
  AFX_MODULE_THREAD_STATE *pAVar4;
  LONG LVar5;
  LONG LVar6;
  int *piVar7;
  undefined4 local_34;
  undefined4 local_30;
  undefined4 local_2c;
  undefined4 local_28;
  
  iVar1 = FUN_1003c99b();
  if (iVar1 == 0) goto LAB_10040441;
  if (*(CWnd **)(iVar1 + 0x20) == this) {
    pAVar2 = AfxGetModuleState();
    if (pAVar2[0x14] == (AFX_MODULE_STATE)0x0) {
      pAVar2 = AfxGetModuleState();
      if (iVar1 == *(int *)(pAVar2 + 4)) {
        iVar3 = AfxOleCanExitApp();
        if (iVar3 == 0) goto LAB_10040436;
      }
      AfxPostQuitMessage(0);
    }
LAB_10040436:
    *(undefined4 *)(iVar1 + 0x20) = 0;
  }
  if (*(CWnd **)(iVar1 + 0x24) == this) {
    *(undefined4 *)(iVar1 + 0x24) = 0;
  }
LAB_10040441:
  if (*(int **)(this + 0x48) != (int *)0x0) {
    (**(code **)(**(int **)(this + 0x48) + 0x50))();
    *(undefined4 *)(this + 0x48) = 0;
  }
  if (*(int **)(this + 0x4c) != (int *)0x0) {
    (**(code **)(**(int **)(this + 0x4c) + 4))(1);
  }
  *(undefined4 *)(this + 0x4c) = 0;
  if (((byte)this[0x3c] & 1) != 0) {
    pAVar4 = AfxGetModuleThreadState();
    iVar1 = *(int *)(pAVar4 + 0x3c);
    if ((iVar1 != 0) && (*(int *)(iVar1 + 0x20) != 0)) {
      _memset(&local_34,0,0x30);
      local_2c = *(undefined4 *)(this + 0x20);
      local_34 = 0x2c;
      local_30 = 1;
      local_28 = local_2c;
      SendMessageW(*(HWND *)(iVar1 + 0x20),0x433,0,(LPARAM)&local_34);
    }
  }
  LVar5 = GetWindowLongW(*(HWND *)(this + 0x20),-4);
  Default(this);
  LVar6 = GetWindowLongW(*(HWND *)(this + 0x20),-4);
  if (LVar6 == LVar5) {
    piVar7 = (int *)(**(code **)(*(int *)this + 0xf8))();
    if (*piVar7 != 0) {
      SetWindowLongW(*(HWND *)(this + 0x20),-4,*piVar7);
    }
  }
  Detach(this);
  (**(code **)(*(int *)this + 0x11c))();
  return;
}

