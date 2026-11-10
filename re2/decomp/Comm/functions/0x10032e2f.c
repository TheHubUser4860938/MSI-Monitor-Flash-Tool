// rea decompile_all
// name: CMFCShellListCtrl::DisplayFolder
// address: 0x10032e2f
// body: available
// range: 0x10032e2f-0x10032f82 inclusive
// non_contiguous: false
// provider: Ghidra 12.1.2 (ghidra)
// analysis_profile: b075844f08879296d957518397cd0ddda73db81dce53d00d3f0e702766fc2af6
// limitations: The session serves operations only after Ghidra reports default auto-analysis complete; incomplete analysis does not expose partial results.; The imported Program and temporary project are ephemeral and deleted on close. Annotation operations edit session database metadata; original executable bytes are never written.; Cancelling an active Ghidra request terminates its ephemeral database and discards session annotations. The selected target remains open; the next provider query imports the original artifact again.; Default-space addresses use lowercase 0x-prefixed hexadecimal; other address spaces use <percent-encoded-space>:0x<hex>.; The Ghidra Program references PDB Comm.pdb (GUID c3062acb-498d-45fa-a233-c8b7e401bb13, age (hex) 1, signature unknown, version RSDS); Ghidra reports load state unknown. Original names and types may be missing; an empty name search does not prove a procedure is absent. Use list_procedures and address-based analysis to inspect recovered functions. REA does not admit a caller-selected PDB companion.; This session uses Ghidra 12.1.2. The bridge is verified against 12.1.4; other 12.1.x builds are accepted and the observed version is reported.; Pseudocode is Ghidra decompiler output, not original source and not text-equivalent to Hopper output.; External functions and functions without an analyzable body return null; other decompiler failures remain explicit.
// pseudocode: provider-specific; not original source


/* WARNING: Function: __EH_prolog3 replaced with injection: EH_prolog3 */
/* WARNING: Function: __EH_epilog3 replaced with injection: EH_epilog3 */
/* Library Function - Single Match
    public: virtual long __thiscall CMFCShellListCtrl::DisplayFolder(struct _AFX_SHELLITEMINFO *)
   
   Library: Visual Studio 2015 Release */

long __thiscall
CMFCShellListCtrl::DisplayFolder(CMFCShellListCtrl *this,_AFX_SHELLITEMINFO *param_1)

{
  code *pcVar1;
  AFX_MODULE_STATE *pAVar2;
  ulong uVar3;
  CMFCShellTreeCtrl *this_00;
  HWND pHVar4;
  CWnd *pCVar5;
  long lVar6;
  CWaitCursor local_11 [9];
  undefined4 local_8;
  undefined4 uStack_4;
  
  uStack_4 = 4;
  local_8 = 0x10032e3b;
  lVar6 = -0x7fffbffb;
  if (DAT_101dbc30 != 0) {
    if (param_1 != (_AFX_SHELLITEMINFO *)0x0) {
      ReleaseCurrFolder(this);
      lVar6 = FUN_100336d1(param_1);
      if (lVar6 < 0) {
        return lVar6;
      }
    }
    SendMessageW(*(HWND *)(this + 0x20),0x1009,0,0);
    if (*(int *)(this + 0x154) != 0) {
      pAVar2 = AfxGetModuleState();
      CCmdTarget::BeginWaitCursor(*(CCmdTarget **)(pAVar2 + 4));
      local_8 = 0;
      SendMessageW(*(HWND *)(this + 0x20),0xb,0,0);
      pcVar1 = *(code **)(*(int *)this + 0x1a8);
      guard_check_icall(*(undefined4 *)(this + 0x154),*(undefined4 *)(this + 0x158));
      lVar6 = (*pcVar1)();
      uVar3 = CWnd::GetExStyle((CWnd *)this);
      if ((uVar3 & 1) != 0) {
        pcVar1 = *(code **)(*(int *)this + 0x16c);
        guard_check_icall(0,1,0);
        (*pcVar1)();
      }
      SendMessageW(*(HWND *)(this + 0x20),0xb,1,0);
      RedrawWindow(*(HWND *)(this + 0x20),(RECT *)0x0,(HRGN)0x0,0x105);
      local_8 = 0xffffffff;
      CWaitCursor::~CWaitCursor(local_11);
    }
    if ((-1 < lVar6) && (param_1 != (_AFX_SHELLITEMINFO *)0x0)) {
      this_00 = GetRelatedTree(this);
      if ((this_00 != (CMFCShellTreeCtrl *)0x0) && (*(int *)(this + 0x16c) == 0)) {
        CMFCShellTreeCtrl::SelectPath(this_00,*(_ITEMIDLIST **)(this + 0x158),1);
      }
      pHVar4 = GetParent(*(HWND *)(this + 0x20));
      pCVar5 = CWnd::FromHandle(pHVar4);
      if (pCVar5 != (CWnd *)0x0) {
        pHVar4 = GetParent(*(HWND *)(this + 0x20));
        pCVar5 = CWnd::FromHandle(pHVar4);
        SendMessageW(*(HWND *)(pCVar5 + 0x20),DAT_101da9b0,0,0);
      }
    }
  }
  return lVar6;
}

