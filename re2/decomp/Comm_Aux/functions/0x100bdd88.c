// rea decompile_all
// name: CFrameWnd::SetActiveView
// address: 0x100bdd88
// body: available
// range: 0x100bdd88-0x100bddff inclusive
// non_contiguous: false
// provider: Ghidra 12.1.2 (ghidra)
// analysis_profile: b075844f08879296d957518397cd0ddda73db81dce53d00d3f0e702766fc2af6
// limitations: The session serves operations only after Ghidra reports default auto-analysis complete; incomplete analysis does not expose partial results.; The imported Program and temporary project are ephemeral and deleted on close. Annotation operations edit session database metadata; original executable bytes are never written.; Cancelling an active Ghidra request terminates its ephemeral database and discards session annotations. The selected target remains open; the next provider query imports the original artifact again.; Default-space addresses use lowercase 0x-prefixed hexadecimal; other address spaces use <percent-encoded-space>:0x<hex>.; The Ghidra Program references PDB Comm_Aux.pdb (GUID ba7920cc-daa3-4461-a102-1f8f66c67a2a, age (hex) 1, signature unknown, version RSDS); Ghidra reports load state unknown. Original names and types may be missing; an empty name search does not prove a procedure is absent. Use list_procedures and address-based analysis to inspect recovered functions. REA does not admit a caller-selected PDB companion.; This session uses Ghidra 12.1.2. The bridge is verified against 12.1.4; other 12.1.x builds are accepted and the observed version is reported.; Pseudocode is Ghidra decompiler output, not original source and not text-equivalent to Hopper output.; External functions and functions without an analyzable body return null; other decompiler failures remain explicit.
// pseudocode: provider-specific; not original source


/* Library Function - Single Match
    public: void __thiscall CFrameWnd::SetActiveView(class CView *,int)
   
   Library: Visual Studio 2015 Release */

void __thiscall CFrameWnd::SetActiveView(CFrameWnd *this,CView *param_1,int param_2)

{
  CView *pCVar1;
  code *pcVar2;
  
  pCVar1 = *(CView **)(this + 0xdc);
  if (param_1 != pCVar1) {
    *(undefined4 *)(this + 0xdc) = 0;
    if (pCVar1 != (CView *)0x0) {
      pcVar2 = *(code **)(*(int *)pCVar1 + 400);
      guard_check_icall(0,param_1,pCVar1);
      (*pcVar2)();
    }
    if (((*(int *)(this + 0xdc) == 0) &&
        (*(CView **)(this + 0xdc) = param_1, param_1 != (CView *)0x0)) && (param_2 != 0)) {
      pcVar2 = *(code **)(*(int *)param_1 + 400);
      guard_check_icall(1,param_1,pCVar1);
      (*pcVar2)();
    }
  }
  return;
}

