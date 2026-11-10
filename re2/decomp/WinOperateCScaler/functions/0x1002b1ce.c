// rea decompile_all
// name: CWnd::RunModalLoop
// address: 0x1002b1ce
// body: available
// range: 0x1002b1ce-0x1002b33d inclusive
// non_contiguous: false
// provider: Ghidra 12.1.2 (ghidra)
// analysis_profile: b075844f08879296d957518397cd0ddda73db81dce53d00d3f0e702766fc2af6
// limitations: The session serves operations only after Ghidra reports default auto-analysis complete; incomplete analysis does not expose partial results.; The imported Program and temporary project are ephemeral and deleted on close. Annotation operations edit session database metadata; original executable bytes are never written.; Cancelling an active Ghidra request terminates its ephemeral database and discards session annotations. The selected target remains open; the next provider query imports the original artifact again.; Default-space addresses use lowercase 0x-prefixed hexadecimal; other address spaces use <percent-encoded-space>:0x<hex>.; The Ghidra Program references PDB WinOperateCScaler.pdb (GUID a6737962-efea-4805-8ae6-1fc1ef126554, age (hex) 1, signature unknown, version RSDS); Ghidra reports load state unknown. Original names and types may be missing; an empty name search does not prove a procedure is absent. Use list_procedures and address-based analysis to inspect recovered functions. REA does not admit a caller-selected PDB companion.; This session uses Ghidra 12.1.2. The bridge is verified against 12.1.4; other 12.1.x builds are accepted and the observed version is reported.; Pseudocode is Ghidra decompiler output, not original source and not text-equivalent to Hopper output.; External functions and functions without an analyzable body return null; other decompiler failures remain explicit.
// pseudocode: provider-specific; not original source


/* Library Function - Single Match
    public: int __thiscall CWnd::RunModalLoop(unsigned long)
   
   Library: Visual Studio 2015 Release */

int __thiscall CWnd::RunModalLoop(CWnd *this,ulong param_1)

{
  code *pcVar1;
  bool bVar2;
  bool bVar3;
  ulong uVar4;
  HWND hWnd;
  LPMSG lpMsg;
  BOOL BVar5;
  LRESULT LVar6;
  int iVar7;
  int local_10;
  
  bVar2 = true;
  bVar3 = true;
  local_10 = 0;
  if (((param_1 & 4) == 0) || (uVar4 = GetExStyle(this), (uVar4 & 0x10000000) != 0)) {
    bVar2 = false;
  }
  hWnd = GetParent(*(HWND *)(this + 0x20));
  *(uint *)(this + 0x60) = *(uint *)(this + 0x60) | 0x18;
  lpMsg = (LPMSG)FUN_10020ec6();
  do {
    if (bVar3) {
      do {
        BVar5 = PeekMessageW(lpMsg,(HWND)0x0,0,0,0);
        if (BVar5 != 0) break;
        if (bVar2) {
          ShowWindow(this,1);
          UpdateWindow(*(HWND *)(this + 0x20));
          bVar2 = false;
        }
        if ((((param_1 & 1) == 0) && (hWnd != (HWND)0x0)) && (local_10 == 0)) {
          SendMessageW(hWnd,0x121,0,*(LPARAM *)(this + 0x20));
        }
        if ((param_1 & 2) == 0) {
          LVar6 = SendMessageW(*(HWND *)(this + 0x20),0x36a,0,local_10);
          local_10 = local_10 + 1;
          if (LVar6 == 0) goto LAB_1002b27e;
        }
        else {
LAB_1002b27e:
          bVar3 = false;
        }
      } while (bVar3);
    }
    do {
      iVar7 = AfxPumpMessage();
      if (iVar7 == 0) {
        AfxPostQuitMessage(0);
        return -1;
      }
      if ((bVar2) && ((lpMsg->message == 0x118 || (lpMsg->message == 0x104)))) {
        ShowWindow(this,1);
        UpdateWindow(*(HWND *)(this + 0x20));
        bVar2 = false;
      }
      pcVar1 = *(code **)(*(int *)this + 0x88);
      guard_check_icall();
      iVar7 = (*pcVar1)();
      if (iVar7 == 0) {
        *(uint *)(this + 0x60) = *(uint *)(this + 0x60) & 0xffffffe7;
        return *(int *)(this + 0x68);
      }
      iVar7 = AfxIsIdleMessage(lpMsg);
      if (iVar7 != 0) {
        bVar3 = true;
        local_10 = 0;
      }
      BVar5 = PeekMessageW(lpMsg,(HWND)0x0,0,0,0);
    } while (BVar5 != 0);
  } while( true );
}

