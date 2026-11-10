// rea decompile_all
// name: CDockSite::AdjustDockingLayout
// address: 0x100c5b83
// body: available
// range: 0x100c5b83-0x100c5c6e inclusive
// non_contiguous: false
// provider: Ghidra 12.1.2 (ghidra)
// analysis_profile: b075844f08879296d957518397cd0ddda73db81dce53d00d3f0e702766fc2af6
// limitations: The session serves operations only after Ghidra reports default auto-analysis complete; incomplete analysis does not expose partial results.; The imported Program and temporary project are ephemeral and deleted on close. Annotation operations edit session database metadata; original executable bytes are never written.; Cancelling an active Ghidra request terminates its ephemeral database and discards session annotations. The selected target remains open; the next provider query imports the original artifact again.; Default-space addresses use lowercase 0x-prefixed hexadecimal; other address spaces use <percent-encoded-space>:0x<hex>.; The Ghidra Program references PDB Comm.pdb (GUID c3062acb-498d-45fa-a233-c8b7e401bb13, age (hex) 1, signature unknown, version RSDS); Ghidra reports load state unknown. Original names and types may be missing; an empty name search does not prove a procedure is absent. Use list_procedures and address-based analysis to inspect recovered functions. REA does not admit a caller-selected PDB companion.; This session uses Ghidra 12.1.2. The bridge is verified against 12.1.4; other 12.1.x builds are accepted and the observed version is reported.; Pseudocode is Ghidra decompiler output, not original source and not text-equivalent to Hopper output.; External functions and functions without an analyzable body return null; other decompiler failures remain explicit.
// pseudocode: provider-specific; not original source


/* Library Function - Single Match
    public: virtual void __thiscall CDockSite::AdjustDockingLayout(void)
   
   Library: Visual Studio 2015 Release */

void __thiscall CDockSite::AdjustDockingLayout(CDockSite *this)

{
  HWND pHVar1;
  CWnd *pCVar2;
  int iVar3;
  code *pcVar4;
  int iVar5;
  
  pHVar1 = GetParent(*(HWND *)(this + 0x20));
  pCVar2 = CWnd::FromHandle(pHVar1);
  iVar3 = FUN_10019d4f(&PTR_s_CFrameWndEx_10191fb0);
  if (iVar3 == 0) {
    iVar3 = FUN_10019d4f(&PTR_s_CMDIFrameWndEx_10192540);
    if (iVar3 == 0) {
      iVar3 = FUN_10019d4f(&PTR_s_COleIPFrameWndEx_10192b50);
      if ((iVar3 == 0) && (iVar3 = FUN_10019d4f(&PTR_s_COleDocIPFrameWndEx_10192f08), iVar3 == 0)) {
        iVar3 = FUN_10019d4f(&PTR_s_COleCntrFrameWndEx_1019408c);
        if (iVar3 == 0) {
          iVar3 = FUN_10019d4f(&PTR_s_CMDIChildWndEx_10193444);
          if (iVar3 == 0) {
            iVar3 = FUN_10019d4f(&PTR_s_CDialog_10180a68);
            if (iVar3 == 0) {
              return;
            }
            iVar3 = 0;
            if (pCVar2 == (CWnd *)0x0) {
              iVar5 = 0;
            }
            else {
              iVar5 = *(int *)(pCVar2 + 0x20);
            }
            pCVar2 = AfxGetMainWnd();
            if (pCVar2 != (CWnd *)0x0) {
              iVar3 = *(int *)(pCVar2 + 0x20);
            }
            if (iVar5 != iVar3) {
              return;
            }
            DAT_101d3948 = 1;
            return;
          }
          pcVar4 = *(code **)(*(int *)pCVar2 + 0x1cc);
        }
        else {
          pcVar4 = *(code **)(*(int *)pCVar2 + 0x1c4);
        }
      }
      else {
        pcVar4 = *(code **)(*(int *)pCVar2 + 0x1e4);
      }
    }
    else {
      pcVar4 = *(code **)(*(int *)pCVar2 + 0x1c8);
    }
  }
  else {
    pcVar4 = *(code **)(*(int *)pCVar2 + 0x1c0);
  }
  guard_check_icall(0);
  (*pcVar4)();
  return;
}

