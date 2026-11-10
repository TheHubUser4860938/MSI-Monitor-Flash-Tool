// rea decompile_all
// name: CMFCShellTreeCtrl::GetChildItems
// address: 0x10077f32
// body: available
// range: 0x10077f32-0x10078075 inclusive
// non_contiguous: false
// provider: Ghidra 12.1.2 (ghidra)
// analysis_profile: b075844f08879296d957518397cd0ddda73db81dce53d00d3f0e702766fc2af6
// limitations: The session serves operations only after Ghidra reports default auto-analysis complete; incomplete analysis does not expose partial results.; The imported Program and temporary project are ephemeral and deleted on close. Annotation operations edit session database metadata; original executable bytes are never written.; Cancelling an active Ghidra request terminates its ephemeral database and discards session annotations. The selected target remains open; the next provider query imports the original artifact again.; Default-space addresses use lowercase 0x-prefixed hexadecimal; other address spaces use <percent-encoded-space>:0x<hex>.; Ghidra Listing reports a terminal call at 0x10077fa8 to 0x1004886a FUN_1004886a (external=false, thunk=false, hasNoReturn=true); fallthrough is excluded by Ghidra's flow model. This records Ghidra's FunctionManager flag, not an independent verification that the callee cannot return.; The Ghidra Program references PDB Comm_Aux.pdb (GUID ba7920cc-daa3-4461-a102-1f8f66c67a2a, age (hex) 1, signature unknown, version RSDS); Ghidra reports load state unknown. Original names and types may be missing; an empty name search does not prove a procedure is absent. Use list_procedures and address-based analysis to inspect recovered functions. REA does not admit a caller-selected PDB companion.; This session uses Ghidra 12.1.2. The bridge is verified against 12.1.4; other 12.1.x builds are accepted and the observed version is reported.; Pseudocode is Ghidra decompiler output, not original source and not text-equivalent to Hopper output.; External functions and functions without an analyzable body return null; other decompiler failures remain explicit.
// pseudocode: provider-specific; not original source


/* WARNING: Function: __EH_prolog3 replaced with injection: EH_prolog3 */
/* WARNING: Function: __EH_epilog3 replaced with injection: EH_epilog3 */
/* Library Function - Single Match
    protected: int __thiscall CMFCShellTreeCtrl::GetChildItems(struct _TREEITEM *)
   
   Library: Visual Studio 2015 Release */

int __thiscall CMFCShellTreeCtrl::GetChildItems(CMFCShellTreeCtrl *this,_TREEITEM *param_1)

{
  int *piVar1;
  code *pcVar2;
  _func_12949 *p_Var3;
  AFX_MODULE_STATE *pAVar4;
  LRESULT LVar5;
  int iVar6;
  IShellFolder *This;
  undefined4 local_4c;
  _TREEITEM *local_48;
  int *local_28;
  _TREEITEM *local_24;
  code *local_20;
  undefined4 local_1c;
  IShellFolder *local_18;
  CWaitCursor local_11 [9];
  undefined4 local_8;
  undefined4 uStack_4;
  
  uStack_4 = 0x3c;
  local_8 = 0x10077f3e;
  pAVar4 = AfxGetModuleState();
  CCmdTarget::BeginWaitCursor(*(CCmdTarget **)(pAVar4 + 4));
  local_8 = 0;
  _memset(&local_4c,0,0x28);
  local_48 = param_1;
  local_4c = 4;
  LVar5 = SendMessageW(*(HWND *)(this + 0x20),0x113e,0,(LPARAM)&local_4c);
  if (LVar5 != 0) {
    SendMessageW(*(HWND *)(this + 0x20),0xb,0,0);
    if (local_28 == (int *)0x0) {
                    /* WARNING: Subroutine does not return */
      FUN_1004886a();
    }
    local_18 = (IShellFolder *)0x0;
    piVar1 = (int *)*local_28;
    if (piVar1 == (int *)0x0) {
      iVar6 = SHGetDesktopFolder(&local_18);
    }
    else {
      iVar6 = *piVar1;
      guard_check_icall(piVar1,local_28[2],0,&DAT_101dcacc,&local_18);
      iVar6 = (**(code **)(iVar6 + 0x14))();
    }
    if (-1 < iVar6) {
      pcVar2 = *(code **)(*(int *)this + 0x16c);
      guard_check_icall(param_1,local_18,local_28[1]);
      (*pcVar2)();
      local_24 = param_1;
      local_20 = CompareProc;
      local_1c = 0;
      SendMessageW(*(HWND *)(this + 0x20),0x1115,0,(LPARAM)&local_24);
      SendMessageW(*(HWND *)(this + 0x20),0xb,1,0);
      RedrawWindow(*(HWND *)(this + 0x20),(RECT *)0x0,(HRGN)0x0,0x105);
      p_Var3 = local_18->lpVtbl->Release;
      This = local_18;
      guard_check_icall();
      (*p_Var3)(This);
      CWaitCursor::~CWaitCursor(local_11);
      return 1;
    }
    SendMessageW(*(HWND *)(this + 0x20),0xb,1,0);
  }
  CWaitCursor::~CWaitCursor(local_11);
  return 0;
}

