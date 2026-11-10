// rea decompile_all
// name: CMFCBaseTabCtrl::GetFirstVisibleTab
// address: 0x10074560
// body: available
// range: 0x10074560-0x100745d0 inclusive
// non_contiguous: false
// provider: Ghidra 12.1.2 (ghidra)
// analysis_profile: b075844f08879296d957518397cd0ddda73db81dce53d00d3f0e702766fc2af6
// limitations: The session serves operations only after Ghidra reports default auto-analysis complete; incomplete analysis does not expose partial results.; The imported Program and temporary project are ephemeral and deleted on close. Annotation operations edit session database metadata; original executable bytes are never written.; Cancelling an active Ghidra request terminates its ephemeral database and discards session annotations. The selected target remains open; the next provider query imports the original artifact again.; Default-space addresses use lowercase 0x-prefixed hexadecimal; other address spaces use <percent-encoded-space>:0x<hex>.; The Ghidra Program references PDB WinOperateCScaler.pdb (GUID a6737962-efea-4805-8ae6-1fc1ef126554, age (hex) 1, signature unknown, version RSDS); Ghidra reports load state unknown. Original names and types may be missing; an empty name search does not prove a procedure is absent. Use list_procedures and address-based analysis to inspect recovered functions. REA does not admit a caller-selected PDB companion.; This session uses Ghidra 12.1.2. The bridge is verified against 12.1.4; other 12.1.x builds are accepted and the observed version is reported.; Pseudocode is Ghidra decompiler output, not original source and not text-equivalent to Hopper output.; External functions and functions without an analyzable body return null; other decompiler failures remain explicit.
// pseudocode: provider-specific; not original source


/* Library Function - Single Match
    public: virtual class CWnd * __thiscall CMFCBaseTabCtrl::GetFirstVisibleTab(int,int &)
   
   Library: Visual Studio 2015 Release */

CWnd * __thiscall
CMFCBaseTabCtrl::GetFirstVisibleTab(CMFCBaseTabCtrl *this,int param_1,int *param_2)

{
  int iVar1;
  code *pcVar2;
  int *piVar3;
  CWnd *pCVar4;
  int iVar5;
  
  iVar5 = param_1;
  if (param_1 < *(int *)(this + 0xbc)) {
    do {
      piVar3 = (int *)FUN_1009f8c7(iVar5);
      iVar1 = *piVar3;
      if (*(int *)(iVar1 + 0x34) != 0) {
        *param_2 = iVar5;
        return *(CWnd **)(iVar1 + 0x20);
      }
      iVar5 = iVar5 + 1;
    } while (iVar5 < *(int *)(this + 0xbc));
  }
  if (param_1 < 1) {
    *param_2 = -1;
    pCVar4 = (CWnd *)0x0;
  }
  else {
    pcVar2 = *(code **)(*(int *)this + 0x254);
    guard_check_icall(0,param_2);
    pCVar4 = (CWnd *)(*pcVar2)();
  }
  return pCVar4;
}

