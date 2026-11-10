// rea decompile_all
// name: COccManager::UIDeactivateIfNecessary
// address: 0x44794a
// body: available
// range: 0x44794a-0x4479d5 inclusive
// non_contiguous: false
// provider: Ghidra 12.1.2 (ghidra)
// analysis_profile: ac6d50be2cdf54f7005df47d1ed7e7ef55dee595681eb1b7c2e0b00d70cd697d
// limitations: The session serves operations only after Ghidra reports default auto-analysis complete; incomplete analysis does not expose partial results.; The imported Program and temporary project are ephemeral and deleted on close. Annotation operations edit session database metadata; original executable bytes are never written.; Cancelling an active Ghidra request terminates its ephemeral database and discards session annotations. The selected target remains open; the next provider query imports the original artifact again.; Default-space addresses use lowercase 0x-prefixed hexadecimal; other address spaces use <percent-encoded-space>:0x<hex>.; The Ghidra Program references PDB ISPToolForMsi.pdb (GUID b8f2ac8f-1d6f-438d-800f-ed4a14426ac6, age (hex) 1, signature unknown, version RSDS); Ghidra reports load state unknown. Original names and types may be missing; an empty name search does not prove a procedure is absent. Use list_procedures and address-based analysis to inspect recovered functions. REA does not admit a caller-selected PDB companion.; This session uses Ghidra 12.1.2. The bridge is verified against 12.1.4; other 12.1.x builds are accepted and the observed version is reported.; Pseudocode is Ghidra decompiler output, not original source and not text-equivalent to Hopper output.; External functions and functions without an analyzable body return null; other decompiler failures remain explicit.
// pseudocode: provider-specific; not original source


/* Library Function - Single Match
    protected: static void __cdecl COccManager::UIDeactivateIfNecessary(class CWnd *,class CWnd *)
   
   Library: Visual Studio 2015 Release */

void __cdecl COccManager::UIDeactivateIfNecessary(CWnd *param_1,CWnd *param_2)

{
  int *piVar1;
  int iVar2;
  code *pcVar3;
  BOOL BVar4;
  HWND pHVar5;
  CWnd *pCVar6;
  
  if (((param_1 != (CWnd *)0x0) && (BVar4 = IsWindow(*(HWND *)(param_1 + 0x20)), BVar4 != 0)) &&
     (param_1 != param_2)) {
    do {
      piVar1 = *(int **)(param_1 + 0x70);
      if (piVar1 != (int *)0x0) {
        iVar2 = piVar1[0x1a];
        pCVar6 = (CWnd *)0x0;
        if (((iVar2 != 0) && (*(int *)(iVar2 + 0x74) == 0)) &&
           (pCVar6 = CWnd::FromHandle(*(HWND__ **)(iVar2 + 0x24)), pCVar6 == (CWnd *)0x0)) {
          return;
        }
        if ((param_2 != (CWnd *)0x0) && (pCVar6 != (CWnd *)0x0)) {
          if (param_2 == pCVar6) {
            return;
          }
          BVar4 = IsChild(*(HWND *)(pCVar6 + 0x20),*(HWND *)(param_2 + 0x20));
          if (BVar4 != 0) {
            return;
          }
        }
        pcVar3 = *(code **)(*piVar1 + 0x60);
        guard_check_icall(0);
        (*pcVar3)();
        return;
      }
      pHVar5 = GetParent(*(HWND *)(param_1 + 0x20));
      param_1 = CWnd::FromHandle(pHVar5);
    } while (param_1 != (CWnd *)0x0);
  }
  return;
}

