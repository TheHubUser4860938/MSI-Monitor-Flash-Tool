// rea decompile_all
// name: FID_conflict:WinHelpW
// address: 0x1005401a
// body: available
// range: 0x1005401a-0x1005408a inclusive
// non_contiguous: false
// provider: Ghidra 12.1.2 (ghidra)
// analysis_profile: b075844f08879296d957518397cd0ddda73db81dce53d00d3f0e702766fc2af6
// limitations: The session serves operations only after Ghidra reports default auto-analysis complete; incomplete analysis does not expose partial results.; The imported Program and temporary project are ephemeral and deleted on close. Annotation operations edit session database metadata; original executable bytes are never written.; Cancelling an active Ghidra request terminates its ephemeral database and discards session annotations. The selected target remains open; the next provider query imports the original artifact again.; Default-space addresses use lowercase 0x-prefixed hexadecimal; other address spaces use <percent-encoded-space>:0x<hex>.; Ghidra Listing reports a terminal call at 0x10054053 to 0x1004886a FUN_1004886a (external=false, thunk=false, hasNoReturn=true); fallthrough is excluded by Ghidra's flow model. This records Ghidra's FunctionManager flag, not an independent verification that the callee cannot return.; The Ghidra Program references PDB Comm_Aux.pdb (GUID ba7920cc-daa3-4461-a102-1f8f66c67a2a, age (hex) 1, signature unknown, version RSDS); Ghidra reports load state unknown. Original names and types may be missing; an empty name search does not prove a procedure is absent. Use list_procedures and address-based analysis to inspect recovered functions. REA does not admit a caller-selected PDB companion.; This session uses Ghidra 12.1.2. The bridge is verified against 12.1.4; other 12.1.x builds are accepted and the observed version is reported.; Pseudocode is Ghidra decompiler output, not original source and not text-equivalent to Hopper output.; External functions and functions without an analyzable body return null; other decompiler failures remain explicit.
// pseudocode: provider-specific; not original source


/* WARNING: Function: __EH_prolog3 replaced with injection: EH_prolog3 */
/* WARNING: Function: __EH_epilog3 replaced with injection: EH_epilog3 */
/* Library Function - Multiple Matches With Different Base Names
    public: virtual void __thiscall CWnd::WinHelpA(unsigned long,unsigned int)
    public: virtual void __thiscall CWnd::WinHelpW(unsigned long,unsigned int)
   
   Library: Visual Studio 2015 Release */

BOOL FID_conflict_WinHelpW(HWND hWndMain,LPCWSTR lpszHelp,UINT uCommand,ULONG_PTR dwData)

{
  int iVar1;
  AFX_MODULE_STATE *pAVar2;
  CWnd *pCVar3;
  BOOL BVar4;
  BOOL extraout_EAX;
  CWnd *in_ECX;
  CWaitCursor local_11 [9];
  undefined4 local_8;
  undefined4 uStack_4;
  
  uStack_4 = 4;
  local_8 = 0x10054026;
  pAVar2 = AfxGetModuleState();
  iVar1 = *(int *)(pAVar2 + 4);
  pAVar2 = AfxGetModuleState();
  CCmdTarget::BeginWaitCursor(*(CCmdTarget **)(pAVar2 + 4));
  local_8 = 0;
  FUN_10053174();
  pCVar3 = CWnd::GetTopLevelParent(in_ECX);
  if (pCVar3 == (CWnd *)0x0) {
                    /* WARNING: Subroutine does not return */
    FUN_1004886a();
  }
  BVar4 = WinHelpW(*(HWND *)(pCVar3 + 0x20),*(LPCWSTR *)(iVar1 + 0x68),(UINT)lpszHelp,
                   (ULONG_PTR)hWndMain);
  if (BVar4 == 0) {
    AfxMessageBox(0xf107,0,0xffffffff);
  }
  CWaitCursor::~CWaitCursor(local_11);
  return extraout_EAX;
}

