// rea decompile_all
// name: CFrameWnd::OnContextHelp
// address: 0x10129f78
// body: available
// range: 0x10129f78-0x1012a18d inclusive
// non_contiguous: false
// provider: Ghidra 12.1.2 (ghidra)
// analysis_profile: b075844f08879296d957518397cd0ddda73db81dce53d00d3f0e702766fc2af6
// limitations: The session serves operations only after Ghidra reports default auto-analysis complete; incomplete analysis does not expose partial results.; The imported Program and temporary project are ephemeral and deleted on close. Annotation operations edit session database metadata; original executable bytes are never written.; Cancelling an active Ghidra request terminates its ephemeral database and discards session annotations. The selected target remains open; the next provider query imports the original artifact again.; Default-space addresses use lowercase 0x-prefixed hexadecimal; other address spaces use <percent-encoded-space>:0x<hex>.; The Ghidra Program references PDB Comm.pdb (GUID c3062acb-498d-45fa-a233-c8b7e401bb13, age (hex) 1, signature unknown, version RSDS); Ghidra reports load state unknown. Original names and types may be missing; an empty name search does not prove a procedure is absent. Use list_procedures and address-based analysis to inspect recovered functions. REA does not admit a caller-selected PDB companion.; This session uses Ghidra 12.1.2. The bridge is verified against 12.1.4; other 12.1.x builds are accepted and the observed version is reported.; Pseudocode is Ghidra decompiler output, not original source and not text-equivalent to Hopper output.; External functions and functions without an analyzable body return null; other decompiler failures remain explicit.
// pseudocode: provider-specific; not original source


/* Library Function - Single Match
    public: void __thiscall CFrameWnd::OnContextHelp(void)
   
   Library: Visual Studio 2015 Release */

void __thiscall CFrameWnd::OnContextHelp(CFrameWnd *this)

{
  code *pcVar1;
  tagPOINT tVar2;
  int iVar3;
  BOOL BVar4;
  int iVar5;
  AFX_MODULE_STATE *pAVar6;
  HWND pHVar7;
  tagMSG local_38;
  tagPOINT local_1c;
  int *local_14;
  int *local_10;
  int local_c;
  int *local_8;
  
  if (((*(int *)(this + 0x94) != 1) && (iVar3 = CanEnterHelpMode(this), iVar3 != 0)) &&
     (BVar4 = PeekMessageW(&local_38,*(HWND *)(this + 0x20),0x367,0x367,3), BVar4 == 0)) {
    iVar3 = *(int *)(this + 0x94);
    *(undefined4 *)(this + 0x94) = 1;
    if ((iVar3 != 2) && (local_14 = *(int **)(this + 0xac), local_14 != (int *)0x0)) {
      pcVar1 = *(code **)(*local_14 + 0x60);
      guard_check_icall(1);
      iVar5 = (*pcVar1)();
      if (iVar5 == 0) {
        pcVar1 = *(code **)(**(int **)(this + 0xac) + 0x60);
        guard_check_icall(0);
        (*pcVar1)();
        *(undefined4 *)(this + 0x94) = 0;
        return;
      }
    }
    if (iVar3 == 0) {
      PostMessageW(*(HWND *)(this + 0x20),0x111,0xe145,0);
      *(undefined4 *)(this + 0x94) = 2;
    }
    else {
      local_10 = (int *)SendMessageW(*(HWND *)(this + 0x20),0x362,0xe002,0);
      if (local_10 == (int *)0x0) {
        local_10 = (int *)0xe001;
      }
      local_14 = (int *)0x0;
      GetCursorPos(&local_1c);
      tVar2.y = local_1c.y;
      tVar2.x = local_1c.x;
      SetHelpCapture(this,tVar2,(int *)0x0);
      iVar3 = 0;
      local_c = 0;
      pAVar6 = AfxGetModuleState();
      local_8 = *(int **)(pAVar6 + 4);
      do {
        while( true ) {
          if (*(int *)(this + 0x94) == 0) goto LAB_1012a0e9;
          BVar4 = PeekMessageW(&local_38,(HWND)0x0,0,0,0);
          if (BVar4 != 0) break;
          pcVar1 = *(code **)(*local_8 + 0x60);
          guard_check_icall(iVar3);
          iVar5 = (*pcVar1)();
          iVar3 = local_c + 1;
          local_c = iVar3;
          if (iVar5 == 0) {
            iVar3 = 0;
            local_c = 0;
            WaitMessage();
          }
        }
        iVar5 = ProcessHelpMsg(this,&local_38,(ulong *)&local_14);
      } while (iVar5 != 0);
LAB_1012a0e9:
      *(undefined4 *)(this + 0x94) = 0;
      ReleaseCapture();
      pHVar7 = SetCapture(*(HWND *)(this + 0x20));
      CWnd::FromHandle(pHVar7);
      ReleaseCapture();
      SendMessageW(*(HWND *)(this + 0x20),0x362,(WPARAM)local_10,0);
      local_10 = *(int **)(this + 0xac);
      if (local_10 != (int *)0x0) {
        pcVar1 = *(code **)(*local_10 + 0x60);
        guard_check_icall(0);
        (*pcVar1)();
      }
      if (local_14 != (int *)0x0) {
        if (local_14 == (int *)0xffffffff) {
          SendMessageW(*(HWND *)(this + 0x20),0x111,0xe147,0);
        }
        else {
          pcVar1 = *(code **)(*local_8 + 200);
          guard_check_icall(local_14,1);
          (*pcVar1)();
        }
      }
      PostMessageW(*(HWND *)(this + 0x20),0x36a,0,0);
    }
  }
  return;
}

