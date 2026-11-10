// rea decompile_all
// name: CWnd::RunModalLoop
// address: 0x1003fd99
// body: available
// range: 0x1003fd99-0x1003fedc inclusive
// non_contiguous: false
// provider: Ghidra 12.1.2 (ghidra)
// analysis_profile: b075844f08879296d957518397cd0ddda73db81dce53d00d3f0e702766fc2af6
// limitations: The session serves operations only after Ghidra reports default auto-analysis complete; incomplete analysis does not expose partial results.; The imported Program and temporary project are ephemeral and deleted on close. Annotation operations edit session database metadata; original executable bytes are never written.; Cancelling an active Ghidra request terminates its ephemeral database and discards session annotations. The selected target remains open; the next provider query imports the original artifact again.; Default-space addresses use lowercase 0x-prefixed hexadecimal; other address spaces use <percent-encoded-space>:0x<hex>.; The Ghidra Program references PDB Comm_GFXI2C.pdb (GUID d304cc6d-b3ee-4851-b468-0ab5e385ca92, age (hex) 1, signature unknown, version RSDS); Ghidra reports load state unknown. Original names and types may be missing; an empty name search does not prove a procedure is absent. Use list_procedures and address-based analysis to inspect recovered functions. REA does not admit a caller-selected PDB companion.; This session uses Ghidra 12.1.2. The bridge is verified against 12.1.4; other 12.1.x builds are accepted and the observed version is reported.; Pseudocode is Ghidra decompiler output, not original source and not text-equivalent to Hopper output.; External functions and functions without an analyzable body return null; other decompiler failures remain explicit.
// pseudocode: provider-specific; not original source


/* Library Function - Single Match
    public: int __thiscall CWnd::RunModalLoop(unsigned long)
   
   Libraries: Visual Studio 2008 Release, Visual Studio 2010 Release */

int __thiscall CWnd::RunModalLoop(CWnd *this,ulong param_1)

{
  bool bVar1;
  bool bVar2;
  ulong uVar3;
  HWND hWnd;
  LPMSG lpMsg;
  LRESULT LVar4;
  int iVar5;
  BOOL BVar6;
  int local_c;
  
  bVar2 = true;
  local_c = 0;
  if ((param_1 & 4) != 0) {
    uVar3 = GetExStyle(this);
    bVar1 = true;
    if ((uVar3 & 0x10000000) == 0) goto LAB_1003fdc9;
  }
  bVar1 = false;
LAB_1003fdc9:
  hWnd = GetParent(*(HWND *)(this + 0x20));
  *(uint *)(this + 0x3c) = *(uint *)(this + 0x3c) | 0x18;
  lpMsg = (LPMSG)FUN_1003c9a4();
LAB_1003fe54:
  while ((!bVar2 || (BVar6 = PeekMessageW(lpMsg,(HWND)0x0,0,0,0), BVar6 != 0))) {
    do {
      iVar5 = AfxPumpMessage();
      if (iVar5 == 0) {
        AfxPostQuitMessage(0);
        return -1;
      }
      if ((bVar1) && ((lpMsg->message == 0x118 || (lpMsg->message == 0x104)))) {
        ShowWindow(this,1);
        UpdateWindow(*(HWND *)(this + 0x20));
        bVar1 = false;
      }
      iVar5 = (**(code **)(*(int *)this + 0x88))();
      if (iVar5 == 0) {
        *(uint *)(this + 0x3c) = *(uint *)(this + 0x3c) & 0xffffffe7;
        return *(int *)(this + 0x44);
      }
      iVar5 = AfxIsIdleMessage(lpMsg);
      if (iVar5 != 0) {
        bVar2 = true;
        local_c = 0;
      }
      BVar6 = PeekMessageW(lpMsg,(HWND)0x0,0,0,0);
    } while (BVar6 != 0);
  }
  if (bVar1) {
    ShowWindow(this,1);
    UpdateWindow(*(HWND *)(this + 0x20));
    bVar1 = false;
  }
  if ((((param_1 & 1) == 0) && (hWnd != (HWND)0x0)) && (local_c == 0)) {
    SendMessageW(hWnd,0x121,0,*(LPARAM *)(this + 0x20));
  }
  if ((param_1 & 2) == 0) goto code_r0x1003fe38;
  goto LAB_1003fe51;
code_r0x1003fe38:
  LVar4 = SendMessageW(*(HWND *)(this + 0x20),0x36a,0,local_c);
  local_c = local_c + 1;
  if (LVar4 == 0) {
LAB_1003fe51:
    bVar2 = false;
  }
  goto LAB_1003fe54;
}

