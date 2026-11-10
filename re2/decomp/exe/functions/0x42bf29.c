// rea decompile_all
// name: CWinThread::DispatchThreadMessageEx
// address: 0x42bf29
// body: available
// range: 0x42bf29-0x42bfcf inclusive
// non_contiguous: false
// provider: Ghidra 12.1.2 (ghidra)
// analysis_profile: ac6d50be2cdf54f7005df47d1ed7e7ef55dee595681eb1b7c2e0b00d70cd697d
// limitations: The session serves operations only after Ghidra reports default auto-analysis complete; incomplete analysis does not expose partial results.; The imported Program and temporary project are ephemeral and deleted on close. Annotation operations edit session database metadata; original executable bytes are never written.; Cancelling an active Ghidra request terminates its ephemeral database and discards session annotations. The selected target remains open; the next provider query imports the original artifact again.; Default-space addresses use lowercase 0x-prefixed hexadecimal; other address spaces use <percent-encoded-space>:0x<hex>.; The Ghidra Program references PDB ISPToolForMsi.pdb (GUID b8f2ac8f-1d6f-438d-800f-ed4a14426ac6, age (hex) 1, signature unknown, version RSDS); Ghidra reports load state unknown. Original names and types may be missing; an empty name search does not prove a procedure is absent. Use list_procedures and address-based analysis to inspect recovered functions. REA does not admit a caller-selected PDB companion.; This session uses Ghidra 12.1.2. The bridge is verified against 12.1.4; other 12.1.x builds are accepted and the observed version is reported.; Pseudocode is Ghidra decompiler output, not original source and not text-equivalent to Hopper output.; External functions and functions without an analyzable body return null; other decompiler failures remain explicit.
// pseudocode: provider-specific; not original source


/* Library Function - Single Match
    protected: int __thiscall CWinThread::DispatchThreadMessageEx(struct tagMSG *)
   
   Library: Visual Studio 2015 Release */

int __thiscall CWinThread::DispatchThreadMessageEx(CWinThread *this,tagMSG *param_1)

{
  code *pcVar1;
  int iVar2;
  int *piVar3;
  AFX_MSGMAP_ENTRY *pAVar4;
  
  pcVar1 = *(code **)(*(int *)this + 0x28);
  guard_check_icall();
  piVar3 = (int *)(*pcVar1)();
  iVar2 = *piVar3;
  do {
    if (iVar2 == 0) {
      return 0;
    }
    if (param_1->message < 0xc000) {
      pAVar4 = AfxFindMessageEntry((AFX_MSGMAP_ENTRY *)piVar3[1],param_1->message,0,0);
      if (pAVar4 != (AFX_MSGMAP_ENTRY *)0x0) {
LAB_0042bf6c:
        pcVar1 = *(code **)(pAVar4 + 0x14);
        guard_check_icall(param_1->wParam,param_1->lParam);
        (*pcVar1)();
        return 1;
      }
    }
    else {
      pAVar4 = (AFX_MSGMAP_ENTRY *)piVar3[1];
      while (pAVar4 = AfxFindMessageEntry(pAVar4,0xc000,0,0), pAVar4 != (AFX_MSGMAP_ENTRY *)0x0) {
        if (**(UINT **)(pAVar4 + 0x10) == param_1->message) goto LAB_0042bf6c;
        pAVar4 = pAVar4 + 0x18;
      }
    }
    pcVar1 = (code *)*piVar3;
    guard_check_icall();
    piVar3 = (int *)(*pcVar1)();
    iVar2 = *piVar3;
  } while( true );
}

