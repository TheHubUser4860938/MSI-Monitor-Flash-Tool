// rea decompile_all
// name: COccManager::UIActivateControl
// address: 0x4478d0
// body: available
// range: 0x4478d0-0x447949 inclusive
// non_contiguous: false
// provider: Ghidra 12.1.2 (ghidra)
// analysis_profile: ac6d50be2cdf54f7005df47d1ed7e7ef55dee595681eb1b7c2e0b00d70cd697d
// limitations: The session serves operations only after Ghidra reports default auto-analysis complete; incomplete analysis does not expose partial results.; The imported Program and temporary project are ephemeral and deleted on close. Annotation operations edit session database metadata; original executable bytes are never written.; Cancelling an active Ghidra request terminates its ephemeral database and discards session annotations. The selected target remains open; the next provider query imports the original artifact again.; Default-space addresses use lowercase 0x-prefixed hexadecimal; other address spaces use <percent-encoded-space>:0x<hex>.; Ghidra Listing reports a terminal call at 0x447940 to 0x4348df CWnd::SetFocus (external=false, thunk=false, hasNoReturn=false); fallthrough is excluded by Ghidra's flow model. The reason for the terminal flow is not established by this observation.; The Ghidra Program references PDB ISPToolForMsi.pdb (GUID b8f2ac8f-1d6f-438d-800f-ed4a14426ac6, age (hex) 1, signature unknown, version RSDS); Ghidra reports load state unknown. Original names and types may be missing; an empty name search does not prove a procedure is absent. Use list_procedures and address-based analysis to inspect recovered functions. REA does not admit a caller-selected PDB companion.; This session uses Ghidra 12.1.2. The bridge is verified against 12.1.4; other 12.1.x builds are accepted and the observed version is reported.; Pseudocode is Ghidra decompiler output, not original source and not text-equivalent to Hopper output.; External functions and functions without an analyzable body return null; other decompiler failures remain explicit.
// pseudocode: provider-specific; not original source


/* Library Function - Single Match
    protected: static void __cdecl COccManager::UIActivateControl(class CWnd *)
   
   Library: Visual Studio 2015 Release */

void __cdecl COccManager::UIActivateControl(CWnd *param_1)

{
  int iVar1;
  code *pcVar2;
  HWND pHVar3;
  CWnd *pCVar4;
  BOOL BVar5;
  int *piVar6;
  
  if (param_1 != (CWnd *)0x0) {
    piVar6 = (int *)0x0;
    pCVar4 = param_1;
    do {
      iVar1 = *(int *)(pCVar4 + 0x70);
      if ((iVar1 != 0) || (piVar6 = *(int **)(pCVar4 + 0x74), piVar6 != (int *)0x0)) break;
      pHVar3 = GetParent(*(HWND *)(pCVar4 + 0x20));
      pCVar4 = CWnd::FromHandle(pHVar3);
    } while (pCVar4 != (CWnd *)0x0);
    if ((pCVar4 != (CWnd *)0x0) && (iVar1 == 0)) {
      pcVar2 = *(code **)(*piVar6 + 0xb0);
      guard_check_icall();
      (*pcVar2)();
      pHVar3 = GetFocus();
      pCVar4 = CWnd::FromHandle(pHVar3);
      if ((pCVar4 != param_1) && (BVar5 = IsWindow(*(HWND *)(param_1 + 0x20)), BVar5 != 0)) {
        CWnd::SetFocus(param_1);
        return;
      }
    }
  }
  return;
}

