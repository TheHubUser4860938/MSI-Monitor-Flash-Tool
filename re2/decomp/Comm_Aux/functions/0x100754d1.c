// rea decompile_all
// name: CMFCPropertyGridCtrl::OnNcPaint
// address: 0x100754d1
// body: available
// range: 0x100754d1-0x1007553a inclusive
// non_contiguous: false
// provider: Ghidra 12.1.2 (ghidra)
// analysis_profile: b075844f08879296d957518397cd0ddda73db81dce53d00d3f0e702766fc2af6
// limitations: The session serves operations only after Ghidra reports default auto-analysis complete; incomplete analysis does not expose partial results.; The imported Program and temporary project are ephemeral and deleted on close. Annotation operations edit session database metadata; original executable bytes are never written.; Cancelling an active Ghidra request terminates its ephemeral database and discards session annotations. The selected target remains open; the next provider query imports the original artifact again.; Default-space addresses use lowercase 0x-prefixed hexadecimal; other address spaces use <percent-encoded-space>:0x<hex>.; The Ghidra Program references PDB Comm_Aux.pdb (GUID ba7920cc-daa3-4461-a102-1f8f66c67a2a, age (hex) 1, signature unknown, version RSDS); Ghidra reports load state unknown. Original names and types may be missing; an empty name search does not prove a procedure is absent. Use list_procedures and address-based analysis to inspect recovered functions. REA does not admit a caller-selected PDB companion.; This session uses Ghidra 12.1.2. The bridge is verified against 12.1.4; other 12.1.x builds are accepted and the observed version is reported.; Pseudocode is Ghidra decompiler output, not original source and not text-equivalent to Hopper output.; External functions and functions without an analyzable body return null; other decompiler failures remain explicit.
// pseudocode: provider-specific; not original source


/* Library Function - Single Match
    protected: void __thiscall CMFCPropertyGridCtrl::OnNcPaint(void)
   
   Library: Visual Studio 2015 Release */

void __thiscall CMFCPropertyGridCtrl::OnNcPaint(CMFCPropertyGridCtrl *this)

{
  code *pcVar1;
  ulong uVar2;
  CMFCVisualManager *pCVar3;
  
  if (*(int *)(this + 0x338) == -1) {
    *(int *)(this + 0x338) =
         *(int *)(this + 0x33c) * *(int *)(this + 0x354) + *(int *)(this + 0x354) / 2;
    pcVar1 = *(code **)(*(int *)this + 0x170);
    guard_check_icall();
    (*pcVar1)();
  }
  uVar2 = CWnd::GetExStyle((CWnd *)this);
  if ((uVar2 & 0x800000) != 0) {
    pCVar3 = CMFCVisualManager::GetInstance();
    pcVar1 = *(code **)(*(int *)pCVar3 + 0x1a8);
    guard_check_icall(this);
    (*pcVar1)();
  }
  return;
}

