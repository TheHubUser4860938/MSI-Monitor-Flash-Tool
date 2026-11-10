// rea decompile_all
// name: FID_conflict:WinHelpW
// address: 0x100429e2
// body: available
// range: 0x100429e2-0x10042a51 inclusive
// non_contiguous: false
// provider: Ghidra 12.1.2 (ghidra)
// analysis_profile: b075844f08879296d957518397cd0ddda73db81dce53d00d3f0e702766fc2af6
// limitations: The session serves operations only after Ghidra reports default auto-analysis complete; incomplete analysis does not expose partial results.; The imported Program and temporary project are ephemeral and deleted on close. Annotation operations edit session database metadata; original executable bytes are never written.; Cancelling an active Ghidra request terminates its ephemeral database and discards session annotations. The selected target remains open; the next provider query imports the original artifact again.; Default-space addresses use lowercase 0x-prefixed hexadecimal; other address spaces use <percent-encoded-space>:0x<hex>.; Ghidra Listing reports a terminal call at 0x10042a16 to 0x10038e31 FUN_10038e31 (external=false, thunk=false, hasNoReturn=true); fallthrough is excluded by Ghidra's flow model. This records Ghidra's FunctionManager flag, not an independent verification that the callee cannot return.; The Ghidra Program references PDB Comm_GFXI2C.pdb (GUID d304cc6d-b3ee-4851-b468-0ab5e385ca92, age (hex) 1, signature unknown, version RSDS); Ghidra reports load state unknown. Original names and types may be missing; an empty name search does not prove a procedure is absent. Use list_procedures and address-based analysis to inspect recovered functions. REA does not admit a caller-selected PDB companion.; This session uses Ghidra 12.1.2. The bridge is verified against 12.1.4; other 12.1.x builds are accepted and the observed version is reported.; Pseudocode is Ghidra decompiler output, not original source and not text-equivalent to Hopper output.; External functions and functions without an analyzable body return null; other decompiler failures remain explicit.
// pseudocode: provider-specific; not original source


/* WARNING: Function: __EH_prolog3 replaced with injection: EH_prolog3 */
/* WARNING: Function: __EH_epilog3 replaced with injection: EH_epilog3 */
/* WARNING: Unable to track spacebase fully for stack */
/* Library Function - Multiple Matches With Different Base Names
    public: virtual void __thiscall CWnd::WinHelpA(unsigned long,unsigned int)
    public: virtual void __thiscall CWnd::WinHelpW(unsigned long,unsigned int)
   
   Library: Visual Studio 2008 Release */

BOOL FID_conflict_WinHelpW(HWND hWndMain,LPCWSTR lpszHelp,UINT uCommand,ULONG_PTR dwData)

{
  int iVar1;
  AFX_MODULE_STATE *pAVar2;
  CWnd *pCVar3;
  BOOL BVar4;
  BOOL extraout_EAX;
  CWnd *in_ECX;
  undefined4 *puVar5;
  undefined4 uStackY_34;
  
  pAVar2 = AfxGetModuleState();
  iVar1 = *(int *)(pAVar2 + 4);
  CWaitCursor::CWaitCursor((CWaitCursor *)((int)&hWndMain + 3));
  CWnd::PrepareForHelp(in_ECX);
  pCVar3 = CWnd::GetTopLevelParent(in_ECX);
  if (pCVar3 == (CWnd *)0x0) {
                    /* WARNING: Subroutine does not return */
    FUN_10038e31();
  }
  puVar5 = &uStackY_34;
  uStackY_34 = 0x10042a2d;
  BVar4 = WinHelpW(*(HWND *)(pCVar3 + 0x20),*(LPCWSTR *)(iVar1 + 100),(UINT)lpszHelp,
                   (ULONG_PTR)hWndMain);
  if (BVar4 == 0) {
    puVar5[-1] = 0xffffffff;
    puVar5[-2] = 0;
    puVar5[-3] = 0xf107;
    puVar5[-4] = 0x10042a3e;
    AfxMessageBox(puVar5[-3],puVar5[-2],puVar5[-1]);
  }
  puVar5[-1] = 0x10042a4a;
  CWaitCursor::~CWaitCursor((CWaitCursor *)((int)&hWndMain + 3));
  puVar5[-1] = 0x10042a4f;
  return extraout_EAX;
}

