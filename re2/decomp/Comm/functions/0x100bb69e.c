// rea decompile_all
// name: COleCntrFrameWndEx::RecalcLayout
// address: 0x100bb69e
// body: available
// range: 0x100bb69e-0x100bb751 inclusive
// non_contiguous: false
// provider: Ghidra 12.1.2 (ghidra)
// analysis_profile: b075844f08879296d957518397cd0ddda73db81dce53d00d3f0e702766fc2af6
// limitations: The session serves operations only after Ghidra reports default auto-analysis complete; incomplete analysis does not expose partial results.; The imported Program and temporary project are ephemeral and deleted on close. Annotation operations edit session database metadata; original executable bytes are never written.; Cancelling an active Ghidra request terminates its ephemeral database and discards session annotations. The selected target remains open; the next provider query imports the original artifact again.; Default-space addresses use lowercase 0x-prefixed hexadecimal; other address spaces use <percent-encoded-space>:0x<hex>.; The Ghidra Program references PDB Comm.pdb (GUID c3062acb-498d-45fa-a233-c8b7e401bb13, age (hex) 1, signature unknown, version RSDS); Ghidra reports load state unknown. Original names and types may be missing; an empty name search does not prove a procedure is absent. Use list_procedures and address-based analysis to inspect recovered functions. REA does not admit a caller-selected PDB companion.; This session uses Ghidra 12.1.2. The bridge is verified against 12.1.4; other 12.1.x builds are accepted and the observed version is reported.; Pseudocode is Ghidra decompiler output, not original source and not text-equivalent to Hopper output.; External functions and functions without an analyzable body return null; other decompiler failures remain explicit.
// pseudocode: provider-specific; not original source


/* Library Function - Single Match
    public: virtual void __thiscall COleCntrFrameWndEx::RecalcLayout(int)
   
   Library: Visual Studio 2015 Release */

void __thiscall COleCntrFrameWndEx::RecalcLayout(COleCntrFrameWndEx *this,int param_1)

{
  code *pcVar1;
  CWnd *this_00;
  int iVar2;
  
  AdjustClientArea(this);
  pcVar1 = *(code **)(*(int *)(this + 0x128) + 0x38);
  guard_check_icall(0);
  (*pcVar1)();
  pcVar1 = *(code **)(*(int *)(this + 0x128) + 0x34);
  guard_check_icall(param_1);
  (*pcVar1)();
  this_00 = (CWnd *)FUN_10084f4b();
  if (this_00 != (CWnd *)0x0) {
    iVar2 = FUN_10019d4f(&PTR_s_CPreviewViewEx_101a2158);
    if ((iVar2 != 0) && (*(int *)(this + 600) != 0)) {
      CWnd::SetWindowPos(this_00,(CWnd *)0x0,*(int *)(this + 0x220),*(int *)(this + 0x224),
                         *(int *)(this + 0x228) - *(int *)(this + 0x220),
                         *(int *)(this + 0x22c) - *(int *)(this + 0x224),0x14);
    }
  }
  pcVar1 = *(code **)(**(int **)(this + 0x120) + 0x178);
  guard_check_icall(param_1);
  (*pcVar1)();
  return;
}

