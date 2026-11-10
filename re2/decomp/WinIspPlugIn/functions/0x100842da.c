// rea decompile_all
// name: CPane::RecalcLayout
// address: 0x100842da
// body: available
// range: 0x100842da-0x1008433e inclusive
// non_contiguous: false
// provider: Ghidra 12.1.2 (ghidra)
// analysis_profile: b075844f08879296d957518397cd0ddda73db81dce53d00d3f0e702766fc2af6
// limitations: The session serves operations only after Ghidra reports default auto-analysis complete; incomplete analysis does not expose partial results.; The imported Program and temporary project are ephemeral and deleted on close. Annotation operations edit session database metadata; original executable bytes are never written.; Cancelling an active Ghidra request terminates its ephemeral database and discards session annotations. The selected target remains open; the next provider query imports the original artifact again.; Default-space addresses use lowercase 0x-prefixed hexadecimal; other address spaces use <percent-encoded-space>:0x<hex>.; Ghidra Listing reports a terminal call at 0x100842e7 to 0x10084a3e CPane::UpdateVirtualRect (external=false, thunk=false, hasNoReturn=false); fallthrough is excluded by Ghidra's flow model. The reason for the terminal flow is not established by this observation.; The Ghidra Program references PDB WinIspPlugIn.pdb (GUID d9f398c7-6c98-49a8-af25-a0659d5ad2f3, age (hex) 1, signature unknown, version RSDS); Ghidra reports load state unknown. Original names and types may be missing; an empty name search does not prove a procedure is absent. Use list_procedures and address-based analysis to inspect recovered functions. REA does not admit a caller-selected PDB companion.; This session uses Ghidra 12.1.2. The bridge is verified against 12.1.4; other 12.1.x builds are accepted and the observed version is reported.; Pseudocode is Ghidra decompiler output, not original source and not text-equivalent to Hopper output.; External functions and functions without an analyzable body return null; other decompiler failures remain explicit.
// pseudocode: provider-specific; not original source


/* Library Function - Single Match
    public: virtual void __thiscall CPane::RecalcLayout(void)
   
   Library: Visual Studio 2015 Release */

void __thiscall CPane::RecalcLayout(CPane *this)

{
  code *pcVar1;
  int *piVar2;
  HWND pHVar3;
  int iVar4;
  
  if (*(int *)(this + 0xbc) != 0) {
    UpdateVirtualRect(this);
    return;
  }
  pcVar1 = *(code **)(*(int *)this + 0x228);
  guard_check_icall(0);
  piVar2 = (int *)(*pcVar1)();
  pHVar3 = GetParent(*(HWND *)(this + 0x20));
  CWnd::FromHandle(pHVar3);
  if (piVar2 != (int *)0x0) {
    iVar4 = FUN_10051e53(&PTR_s_CMFCTabCtrl_101e1714);
    if (iVar4 == 0) {
      pcVar1 = *(code **)(*piVar2 + 0x1cc);
      guard_check_icall();
      (*pcVar1)();
    }
  }
  return;
}

