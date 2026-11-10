// rea decompile_all
// name: CMDIChildWndEx::AdjustClientArea
// address: 0x100b53a8
// body: available
// range: 0x100b53a8-0x100b54aa inclusive
// non_contiguous: false
// provider: Ghidra 12.1.2 (ghidra)
// analysis_profile: b075844f08879296d957518397cd0ddda73db81dce53d00d3f0e702766fc2af6
// limitations: The session serves operations only after Ghidra reports default auto-analysis complete; incomplete analysis does not expose partial results.; The imported Program and temporary project are ephemeral and deleted on close. Annotation operations edit session database metadata; original executable bytes are never written.; Cancelling an active Ghidra request terminates its ephemeral database and discards session annotations. The selected target remains open; the next provider query imports the original artifact again.; Default-space addresses use lowercase 0x-prefixed hexadecimal; other address spaces use <percent-encoded-space>:0x<hex>.; The Ghidra Program references PDB Comm.pdb (GUID c3062acb-498d-45fa-a233-c8b7e401bb13, age (hex) 1, signature unknown, version RSDS); Ghidra reports load state unknown. Original names and types may be missing; an empty name search does not prove a procedure is absent. Use list_procedures and address-based analysis to inspect recovered functions. REA does not admit a caller-selected PDB companion.; This session uses Ghidra 12.1.2. The bridge is verified against 12.1.4; other 12.1.x builds are accepted and the observed version is reported.; Pseudocode is Ghidra decompiler output, not original source and not text-equivalent to Hopper output.; External functions and functions without an analyzable body return null; other decompiler failures remain explicit.
// pseudocode: provider-specific; not original source


/* Library Function - Single Match
    protected: void __thiscall CMDIChildWndEx::AdjustClientArea(void)
   
   Library: Visual Studio 2015 Release */

void __thiscall CMDIChildWndEx::AdjustClientArea(CMDIChildWndEx *this)

{
  code *pcVar1;
  int iVar2;
  HWND pHVar3;
  CWnd *pCVar4;
  ulong uVar5;
  
  if (*(int **)(this + 0x444) != (int *)0x0) {
    pcVar1 = *(code **)(**(int **)(this + 0x444) + 0x174);
    guard_check_icall();
    iVar2 = (*pcVar1)();
    if (iVar2 != 0) {
      pHVar3 = GetParent(*(HWND *)(*(int *)(this + 0x444) + 0x20));
      pCVar4 = CWnd::FromHandle(pHVar3);
      if (pCVar4 == (CWnd *)this) {
        pCVar4 = *(CWnd **)(this + 0x444);
        goto LAB_100b5409;
      }
    }
  }
  pCVar4 = CWnd::GetDlgItem((CWnd *)this,0xe900);
LAB_100b5409:
  if (pCVar4 != (CWnd *)0x0) {
    iVar2 = FUN_10019d4f(&PTR_s_CSplitterWnd_1018ac88);
    if ((iVar2 == 0) && (iVar2 = FUN_10019d4f(&PTR_s_CFormView_10182ca8), iVar2 == 0)) {
      uVar5 = 0x6000000;
    }
    else {
      uVar5 = 0x4000000;
    }
    CWnd::ModifyStyle(pCVar4,0,uVar5,0);
    if ((*(int *)(this + 0x14c) == 0) && (DAT_101dc7c4 == 0)) {
      CWnd::SetWindowPos(pCVar4,(CWnd *)&DAT_101da3a8,*(int *)(this + 0x34c) + *(int *)(this + 0x9c)
                         ,*(int *)(this + 0x350) + *(int *)(this + 0xa0),
                         (*(int *)(this + 0x354) - *(int *)(this + 0xa4)) -
                         (*(int *)(this + 0x34c) + *(int *)(this + 0x9c)),
                         (*(int *)(this + 0x358) - *(int *)(this + 0xa8)) -
                         (*(int *)(this + 0x350) + *(int *)(this + 0xa0)),0x10);
    }
    return;
  }
  return;
}

