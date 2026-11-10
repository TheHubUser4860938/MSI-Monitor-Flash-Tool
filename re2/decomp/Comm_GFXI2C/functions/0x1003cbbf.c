// rea decompile_all
// name: CWinThread::DispatchThreadMessageEx
// address: 0x1003cbbf
// body: available
// range: 0x1003cbbf-0x1003cc3c inclusive
// non_contiguous: false
// provider: Ghidra 12.1.2 (ghidra)
// analysis_profile: b075844f08879296d957518397cd0ddda73db81dce53d00d3f0e702766fc2af6
// limitations: The session serves operations only after Ghidra reports default auto-analysis complete; incomplete analysis does not expose partial results.; The imported Program and temporary project are ephemeral and deleted on close. Annotation operations edit session database metadata; original executable bytes are never written.; Cancelling an active Ghidra request terminates its ephemeral database and discards session annotations. The selected target remains open; the next provider query imports the original artifact again.; Default-space addresses use lowercase 0x-prefixed hexadecimal; other address spaces use <percent-encoded-space>:0x<hex>.; The Ghidra Program references PDB Comm_GFXI2C.pdb (GUID d304cc6d-b3ee-4851-b468-0ab5e385ca92, age (hex) 1, signature unknown, version RSDS); Ghidra reports load state unknown. Original names and types may be missing; an empty name search does not prove a procedure is absent. Use list_procedures and address-based analysis to inspect recovered functions. REA does not admit a caller-selected PDB companion.; This session uses Ghidra 12.1.2. The bridge is verified against 12.1.4; other 12.1.x builds are accepted and the observed version is reported.; Pseudocode is Ghidra decompiler output, not original source and not text-equivalent to Hopper output.; External functions and functions without an analyzable body return null; other decompiler failures remain explicit.
// pseudocode: provider-specific; not original source


/* Library Function - Single Match
    protected: int __thiscall CWinThread::DispatchThreadMessageEx(struct tagMSG *)
   
   Libraries: Visual Studio 2008 Release, Visual Studio 2010 Release */

int __thiscall CWinThread::DispatchThreadMessageEx(CWinThread *this,tagMSG *param_1)

{
  int iVar1;
  int *piVar2;
  AFX_MSGMAP_ENTRY *pAVar3;
  
  piVar2 = (int *)(**(code **)(*(int *)this + 0x28))();
  iVar1 = *piVar2;
  do {
    if (iVar1 == 0) {
      return 0;
    }
    if (param_1->message < 0xc000) {
      pAVar3 = AfxFindMessageEntry((AFX_MSGMAP_ENTRY *)piVar2[1],param_1->message,0,0);
      if (pAVar3 != (AFX_MSGMAP_ENTRY *)0x0) {
LAB_1003cbf9:
        (**(code **)(pAVar3 + 0x14))(param_1->wParam,param_1->lParam);
        return 1;
      }
    }
    else {
      pAVar3 = (AFX_MSGMAP_ENTRY *)piVar2[1];
      while (pAVar3 = AfxFindMessageEntry(pAVar3,0xc000,0,0), pAVar3 != (AFX_MSGMAP_ENTRY *)0x0) {
        if (**(UINT **)(pAVar3 + 0x10) == param_1->message) goto LAB_1003cbf9;
        pAVar3 = pAVar3 + 0x18;
      }
    }
    piVar2 = (int *)(*(code *)*piVar2)();
    iVar1 = *piVar2;
  } while( true );
}

