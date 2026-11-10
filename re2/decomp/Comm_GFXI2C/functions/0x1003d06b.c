// rea decompile_all
// name: CWinThread::OnIdle
// address: 0x1003d06b
// body: available
// range: 0x1003d06b-0x1003d16c inclusive
// non_contiguous: false
// provider: Ghidra 12.1.2 (ghidra)
// analysis_profile: b075844f08879296d957518397cd0ddda73db81dce53d00d3f0e702766fc2af6
// limitations: The session serves operations only after Ghidra reports default auto-analysis complete; incomplete analysis does not expose partial results.; The imported Program and temporary project are ephemeral and deleted on close. Annotation operations edit session database metadata; original executable bytes are never written.; Cancelling an active Ghidra request terminates its ephemeral database and discards session annotations. The selected target remains open; the next provider query imports the original artifact again.; Default-space addresses use lowercase 0x-prefixed hexadecimal; other address spaces use <percent-encoded-space>:0x<hex>.; The Ghidra Program references PDB Comm_GFXI2C.pdb (GUID d304cc6d-b3ee-4851-b468-0ab5e385ca92, age (hex) 1, signature unknown, version RSDS); Ghidra reports load state unknown. Original names and types may be missing; an empty name search does not prove a procedure is absent. Use list_procedures and address-based analysis to inspect recovered functions. REA does not admit a caller-selected PDB companion.; This session uses Ghidra 12.1.2. The bridge is verified against 12.1.4; other 12.1.x builds are accepted and the observed version is reported.; Pseudocode is Ghidra decompiler output, not original source and not text-equivalent to Hopper output.; External functions and functions without an analyzable body return null; other decompiler failures remain explicit.
// pseudocode: provider-specific; not original source


/* Library Function - Single Match
    public: virtual int __thiscall CWinThread::OnIdle(long)
   
   Library: Visual Studio 2008 Release */

int __thiscall CWinThread::OnIdle(CWinThread *this,long param_1)

{
  CWnd *pCVar1;
  BOOL BVar2;
  AFX_MODULE_STATE *pAVar3;
  AFX_MODULE_THREAD_STATE *pAVar4;
  CWnd *this_00;
  
  if (param_1 < 1) {
    pCVar1 = *(CWnd **)(this + 0x20);
    if (((pCVar1 != (CWnd *)0x0) && (*(HWND *)(pCVar1 + 0x20) != (HWND)0x0)) &&
       (BVar2 = IsWindowVisible(*(HWND *)(pCVar1 + 0x20)), BVar2 != 0)) {
      FUN_10040f0b(pCVar1,*(undefined4 *)(pCVar1 + 0x20),0x363,1,0);
      CWnd::SendMessageToDescendants(*(HWND__ **)(pCVar1 + 0x20),0x363,1,0,1,1);
    }
    pAVar3 = AfxGetModuleState();
    pAVar4 = CThreadLocal<AFX_MODULE_THREAD_STATE>::GetData
                       ((CThreadLocal<AFX_MODULE_THREAD_STATE> *)(pAVar3 + 0x74));
    for (this_00 = *(CWnd **)(pAVar4 + 8); this_00 != (CWnd *)0x0;
        this_00 = *(CWnd **)(this_00 + 0x6c)) {
      if ((*(int *)(this_00 + 0x20) != 0) && (this_00 != pCVar1)) {
        if (*(int *)(this_00 + 0xa0) == 0) {
          CWnd::ShowWindow(this_00,0);
        }
        BVar2 = IsWindowVisible(*(HWND *)(this_00 + 0x20));
        if ((BVar2 != 0) || (-1 < *(int *)(this_00 + 0xa0))) {
          FUN_10040f0b(this_00,*(undefined4 *)(this_00 + 0x20),0x363,1,0);
          CWnd::SendMessageToDescendants(*(HWND__ **)(this_00 + 0x20),0x363,1,0,1,1);
        }
        if (0 < *(int *)(this_00 + 0xa0)) {
          CWnd::ShowWindow(this_00,*(int *)(this_00 + 0xa0));
        }
        *(undefined4 *)(this_00 + 0xa0) = 0xffffffff;
      }
    }
  }
  else {
    pAVar3 = AfxGetModuleState();
    pAVar4 = CThreadLocal<AFX_MODULE_THREAD_STATE>::GetData
                       ((CThreadLocal<AFX_MODULE_THREAD_STATE> *)(pAVar3 + 0x74));
    if (*(int *)(pAVar4 + 0x10) == 0) {
      FUN_10043ac8();
      AfxUnlockTempMaps(1);
    }
  }
  return (uint)(param_1 < 1);
}

