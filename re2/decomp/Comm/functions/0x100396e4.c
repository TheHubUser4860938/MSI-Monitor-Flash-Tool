// rea decompile_all
// name: CMFCLinkCtrl::OnClicked
// address: 0x100396e4
// body: available
// range: 0x100396e4-0x100397d2 inclusive
// non_contiguous: false
// provider: Ghidra 12.1.2 (ghidra)
// analysis_profile: b075844f08879296d957518397cd0ddda73db81dce53d00d3f0e702766fc2af6
// limitations: The session serves operations only after Ghidra reports default auto-analysis complete; incomplete analysis does not expose partial results.; The imported Program and temporary project are ephemeral and deleted on close. Annotation operations edit session database metadata; original executable bytes are never written.; Cancelling an active Ghidra request terminates its ephemeral database and discards session annotations. The selected target remains open; the next provider query imports the original artifact again.; Default-space addresses use lowercase 0x-prefixed hexadecimal; other address spaces use <percent-encoded-space>:0x<hex>.; The Ghidra Program references PDB Comm.pdb (GUID c3062acb-498d-45fa-a233-c8b7e401bb13, age (hex) 1, signature unknown, version RSDS); Ghidra reports load state unknown. Original names and types may be missing; an empty name search does not prove a procedure is absent. Use list_procedures and address-based analysis to inspect recovered functions. REA does not admit a caller-selected PDB companion.; This session uses Ghidra 12.1.2. The bridge is verified against 12.1.4; other 12.1.x builds are accepted and the observed version is reported.; Pseudocode is Ghidra decompiler output, not original source and not text-equivalent to Hopper output.; External functions and functions without an analyzable body return null; other decompiler failures remain explicit.
// pseudocode: provider-specific; not original source


/* WARNING: Function: __EH_prolog3 replaced with injection: EH_prolog3 */
/* WARNING: Function: __EH_epilog3 replaced with injection: EH_epilog3 */
/* Library Function - Single Match
    protected: int __thiscall CMFCLinkCtrl::OnClicked(void)
   
   Library: Visual Studio 2015 Release */

int __thiscall CMFCLinkCtrl::OnClicked(CMFCLinkCtrl *this)

{
  int iVar1;
  int iVar2;
  AFX_MODULE_STATE *pAVar3;
  undefined4 *puVar4;
  undefined1 local_1c [4];
  int local_18;
  CWaitCursor local_11 [9];
  undefined4 local_8;
  undefined4 uStack_4;
  
  uStack_4 = 0xc;
  local_8 = 0x100396f0;
  iVar1 = CWnd::IsWindowEnabled((CWnd *)this);
  if (iVar1 == 0) {
    iVar2 = 1;
  }
  else if (*(int *)(this + 0x7b0) == 0) {
    pAVar3 = AfxGetModuleState();
    CCmdTarget::BeginWaitCursor(*(CCmdTarget **)(pAVar3 + 4));
    local_8 = 0;
    iVar1 = FUN_10003060(*(int *)(this + 0x7b8) + -0x10);
    local_18 = iVar1 + 0x10;
    iVar2 = 1;
    local_8 = CONCAT31(local_8._1_3_,1);
    if (*(int *)(iVar1 + 4) == 0) {
      CWnd::GetWindowTextW
                ((CWnd *)this,
                 (CStringT<wchar_t,StrTraitMFC<wchar_t,ATL::ChTraitsCRT<wchar_t>_>_> *)&local_18);
    }
    puVar4 = (undefined4 *)ATL__operator_(local_1c,this + 0x7bc,&local_18);
    ShellExecuteW((HWND)0x0,(LPCWSTR)0x0,(LPCWSTR)*puVar4,(LPCWSTR)0x0,(LPCWSTR)0x0,1);
    FUN_10003460();
    *(undefined4 *)(this + 0x7b4) = 1;
    *(undefined4 *)(this + 0xbc) = 0;
    InvalidateRect(*(HWND *)(this + 0x20),(RECT *)0x0,1);
    UpdateWindow(*(HWND *)(this + 0x20));
    FUN_10003460();
    CWaitCursor::~CWaitCursor(local_11);
  }
  else {
    *(undefined4 *)(this + 0xbc) = 0;
    InvalidateRect(*(HWND *)(this + 0x20),(RECT *)0x0,1);
    UpdateWindow(*(HWND *)(this + 0x20));
    iVar2 = 0;
  }
  return iVar2;
}

