// rea decompile_all
// name: CMFCTasksPane::OnOK
// address: 0x10179c55
// body: available
// range: 0x10179c55-0x10179cd9 inclusive
// non_contiguous: false
// provider: Ghidra 12.1.2 (ghidra)
// analysis_profile: b075844f08879296d957518397cd0ddda73db81dce53d00d3f0e702766fc2af6
// limitations: The session serves operations only after Ghidra reports default auto-analysis complete; incomplete analysis does not expose partial results.; The imported Program and temporary project are ephemeral and deleted on close. Annotation operations edit session database metadata; original executable bytes are never written.; Cancelling an active Ghidra request terminates its ephemeral database and discards session annotations. The selected target remains open; the next provider query imports the original artifact again.; Default-space addresses use lowercase 0x-prefixed hexadecimal; other address spaces use <percent-encoded-space>:0x<hex>.; The Ghidra Program references PDB Comm_Aux.pdb (GUID ba7920cc-daa3-4461-a102-1f8f66c67a2a, age (hex) 1, signature unknown, version RSDS); Ghidra reports load state unknown. Original names and types may be missing; an empty name search does not prove a procedure is absent. Use list_procedures and address-based analysis to inspect recovered functions. REA does not admit a caller-selected PDB companion.; This session uses Ghidra 12.1.2. The bridge is verified against 12.1.4; other 12.1.x builds are accepted and the observed version is reported.; Pseudocode is Ghidra decompiler output, not original source and not text-equivalent to Hopper output.; External functions and functions without an analyzable body return null; other decompiler failures remain explicit.
// pseudocode: provider-specific; not original source


/* Library Function - Single Match
    public: virtual void __thiscall CMFCTasksPane::OnOK(void)
   
   Library: Visual Studio 2015 Release */

void __thiscall CMFCTasksPane::OnOK(CMFCTasksPane *this)

{
  code *pcVar1;
  int iVar2;
  HWND pHVar3;
  CWnd *pCVar4;
  BOOL BVar5;
  CWnd *pCVar6;
  
  pcVar1 = *(code **)(*(int *)this + 0x3c4);
  guard_check_icall();
  iVar2 = (*pcVar1)();
  if (iVar2 == 0) {
    pHVar3 = GetFocus();
    pCVar4 = CWnd::FromHandle(pHVar3);
    if ((pCVar4 != (CWnd *)0x0) &&
       (BVar5 = IsChild(*(HWND *)(this + 0x20),*(HWND *)(pCVar4 + 0x20)), BVar5 != 0)) {
      while (pCVar4 != (CWnd *)this) {
        pHVar3 = GetParent(*(HWND *)(pCVar4 + 0x20));
        pCVar6 = CWnd::FromHandle(pHVar3);
        if (pCVar6 == (CWnd *)this) {
          iVar2 = FUN_10050ddf();
          SendMessageW(*(HWND *)(pCVar4 + 0x20),0x111,*(WPARAM *)(iVar2 + 8),
                       *(LPARAM *)(iVar2 + 0xc));
          return;
        }
        pHVar3 = GetParent(*(HWND *)(pCVar4 + 0x20));
        pCVar4 = CWnd::FromHandle(pHVar3);
      }
    }
  }
  return;
}

