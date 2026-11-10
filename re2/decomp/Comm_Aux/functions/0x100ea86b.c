// rea decompile_all
// name: COleIPFrameWndEx::RecalcLayout
// address: 0x100ea86b
// body: available
// range: 0x100ea86b-0x100ea923 inclusive
// non_contiguous: false
// provider: Ghidra 12.1.2 (ghidra)
// analysis_profile: b075844f08879296d957518397cd0ddda73db81dce53d00d3f0e702766fc2af6
// limitations: The session serves operations only after Ghidra reports default auto-analysis complete; incomplete analysis does not expose partial results.; The imported Program and temporary project are ephemeral and deleted on close. Annotation operations edit session database metadata; original executable bytes are never written.; Cancelling an active Ghidra request terminates its ephemeral database and discards session annotations. The selected target remains open; the next provider query imports the original artifact again.; Default-space addresses use lowercase 0x-prefixed hexadecimal; other address spaces use <percent-encoded-space>:0x<hex>.; The Ghidra Program references PDB Comm_Aux.pdb (GUID ba7920cc-daa3-4461-a102-1f8f66c67a2a, age (hex) 1, signature unknown, version RSDS); Ghidra reports load state unknown. Original names and types may be missing; an empty name search does not prove a procedure is absent. Use list_procedures and address-based analysis to inspect recovered functions. REA does not admit a caller-selected PDB companion.; This session uses Ghidra 12.1.2. The bridge is verified against 12.1.4; other 12.1.x builds are accepted and the observed version is reported.; Pseudocode is Ghidra decompiler output, not original source and not text-equivalent to Hopper output.; External functions and functions without an analyzable body return null; other decompiler failures remain explicit.
// pseudocode: provider-specific; not original source


/* Library Function - Single Match
    public: virtual void __thiscall COleIPFrameWndEx::RecalcLayout(int)
   
   Library: Visual Studio 2015 Release */

void __thiscall COleIPFrameWndEx::RecalcLayout(COleIPFrameWndEx *this,int param_1)

{
  code *pcVar1;
  CWnd *this_00;
  int iVar2;
  
  COleIPFrameWnd::RecalcLayout((COleIPFrameWnd *)this,param_1);
  if (*(int *)(this + 0xf4) == 0) {
    *(undefined4 *)(this + 0xf4) = 1;
    pcVar1 = *(code **)(*(int *)(this + 0x2ac) + 0x38);
    guard_check_icall(0);
    (*pcVar1)();
    pcVar1 = *(code **)(*(int *)(this + 0x2ac) + 0x34);
    guard_check_icall(param_1);
    (*pcVar1)();
    this_00 = (CWnd *)FUN_100bb521();
    if (this_00 != (CWnd *)0x0) {
      iVar2 = FUN_1004e58b(&PTR_s_CPreviewViewEx_101d52d0);
      if ((iVar2 != 0) && (*(int *)(this + 0x3dc) != 0)) {
        CWnd::SetWindowPos(this_00,(CWnd *)0x0,*(int *)(this + 0x3a4),*(int *)(this + 0x3a8),
                           *(int *)(this + 0x3ac) - *(int *)(this + 0x3a4),
                           *(int *)(this + 0x3b0) - *(int *)(this + 0x3a8),0x14);
      }
    }
    *(undefined4 *)(this + 0xf4) = 0;
  }
  return;
}

