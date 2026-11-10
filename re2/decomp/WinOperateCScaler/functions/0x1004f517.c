// rea decompile_all
// name: CVSListBoxBase::OnEnable
// address: 0x1004f517
// body: available
// range: 0x1004f517-0x1004f597 inclusive
// non_contiguous: false
// provider: Ghidra 12.1.2 (ghidra)
// analysis_profile: b075844f08879296d957518397cd0ddda73db81dce53d00d3f0e702766fc2af6
// limitations: The session serves operations only after Ghidra reports default auto-analysis complete; incomplete analysis does not expose partial results.; The imported Program and temporary project are ephemeral and deleted on close. Annotation operations edit session database metadata; original executable bytes are never written.; Cancelling an active Ghidra request terminates its ephemeral database and discards session annotations. The selected target remains open; the next provider query imports the original artifact again.; Default-space addresses use lowercase 0x-prefixed hexadecimal; other address spaces use <percent-encoded-space>:0x<hex>.; The Ghidra Program references PDB WinOperateCScaler.pdb (GUID a6737962-efea-4805-8ae6-1fc1ef126554, age (hex) 1, signature unknown, version RSDS); Ghidra reports load state unknown. Original names and types may be missing; an empty name search does not prove a procedure is absent. Use list_procedures and address-based analysis to inspect recovered functions. REA does not admit a caller-selected PDB companion.; This session uses Ghidra 12.1.2. The bridge is verified against 12.1.4; other 12.1.x builds are accepted and the observed version is reported.; Pseudocode is Ghidra decompiler output, not original source and not text-equivalent to Hopper output.; External functions and functions without an analyzable body return null; other decompiler failures remain explicit.
// pseudocode: provider-specific; not original source


/* Library Function - Single Match
    protected: void __thiscall CVSListBoxBase::OnEnable(int)
   
   Library: Visual Studio 2015 Release */

void __thiscall CVSListBoxBase::OnEnable(CVSListBoxBase *this,int param_1)

{
  code *pcVar1;
  undefined4 uVar2;
  HWND__ *pHVar3;
  CWnd *pCVar4;
  int iVar5;
  
  FUN_100283ad();
  iVar5 = *(int *)(this + 0x88);
  while (iVar5 != 0) {
    pCVar4 = *(CWnd **)(iVar5 + 8);
    iVar5 = *(int *)(iVar5 + 4);
    if ((param_1 == 0) || (*(int *)(this + 0xe4) != 0)) {
      uVar2 = 1;
    }
    else {
      uVar2 = 0;
    }
    *(undefined4 *)(pCVar4 + 0x9c) = uVar2;
    CWnd::EnableWindow(pCVar4,param_1);
  }
  pcVar1 = *(code **)(*(int *)this + 0x1c4);
  guard_check_icall();
  pHVar3 = (HWND__ *)(*pcVar1)();
  pCVar4 = CWnd::FromHandle(pHVar3);
  if (pCVar4 != (CWnd *)0x0) {
    CWnd::EnableWindow(pCVar4,param_1);
  }
  RedrawWindow(*(HWND *)(this + 0x20),(RECT *)0x0,(HRGN)0x0,0x105);
  return;
}

