// rea decompile_all
// name: CPane::RemoveFromMiniframe
// address: 0x1004cef3
// body: available
// range: 0x1004cef3-0x1004cfc5 inclusive
// non_contiguous: false
// provider: Ghidra 12.1.2 (ghidra)
// analysis_profile: b075844f08879296d957518397cd0ddda73db81dce53d00d3f0e702766fc2af6
// limitations: The session serves operations only after Ghidra reports default auto-analysis complete; incomplete analysis does not expose partial results.; The imported Program and temporary project are ephemeral and deleted on close. Annotation operations edit session database metadata; original executable bytes are never written.; Cancelling an active Ghidra request terminates its ephemeral database and discards session annotations. The selected target remains open; the next provider query imports the original artifact again.; Default-space addresses use lowercase 0x-prefixed hexadecimal; other address spaces use <percent-encoded-space>:0x<hex>.; The Ghidra Program references PDB Comm.pdb (GUID c3062acb-498d-45fa-a233-c8b7e401bb13, age (hex) 1, signature unknown, version RSDS); Ghidra reports load state unknown. Original names and types may be missing; an empty name search does not prove a procedure is absent. Use list_procedures and address-based analysis to inspect recovered functions. REA does not admit a caller-selected PDB companion.; This session uses Ghidra 12.1.2. The bridge is verified against 12.1.4; other 12.1.x builds are accepted and the observed version is reported.; Pseudocode is Ghidra decompiler output, not original source and not text-equivalent to Hopper output.; External functions and functions without an analyzable body return null; other decompiler failures remain explicit.
// pseudocode: provider-specific; not original source


/* Library Function - Single Match
    protected: virtual void __thiscall CPane::RemoveFromMiniframe(class CWnd *,enum AFX_DOCK_METHOD)
   
   Library: Visual Studio 2015 Release */

void __thiscall CPane::RemoveFromMiniframe(CPane *this,CWnd *param_1,AFX_DOCK_METHOD param_2)

{
  code *pcVar1;
  int *piVar2;
  HWND pHVar3;
  CWnd *pCVar4;
  undefined4 uVar5;
  
  pcVar1 = *(code **)(*(int *)this + 0x228);
  guard_check_icall(0);
  piVar2 = (int *)(*pcVar1)();
  pHVar3 = GetParent(*(HWND *)(this + 0x20));
  pCVar4 = CWnd::FromHandle(pHVar3);
  pcVar1 = *(code **)(*(int *)this + 0x21c);
  guard_check_icall(param_1,0);
  (*pcVar1)();
  if (piVar2 != (int *)0x0) {
    if ((param_2 == 1) && (*(int *)(this + 0x184) == 0)) {
      uVar5 = 1;
    }
    else {
      uVar5 = 0;
    }
    pcVar1 = *(code **)(*piVar2 + 0x17c);
    guard_check_icall(this,0,uVar5);
    (*pcVar1)();
    if (param_2 == 1) {
      if (*(int *)(this + 0x184) == 0) {
        *(int *)(this + 0x184) = piVar2[8];
      }
      SendMessageW((HWND)piVar2[8],0x202,0,0);
    }
  }
  if (param_1 != (CWnd *)0x0) {
    CWnd::SetParent((CWnd *)this,param_1);
  }
  pcVar1 = *(code **)(*(int *)this + 0x220);
  guard_check_icall(pCVar4);
  (*pcVar1)();
  return;
}

