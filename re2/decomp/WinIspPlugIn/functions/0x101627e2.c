// rea decompile_all
// name: COleIPFrameWnd::OnIdleUpdateCmdUI
// address: 0x101627e2
// body: available
// range: 0x101627e2-0x10162803 inclusive
// non_contiguous: false
// provider: Ghidra 12.1.2 (ghidra)
// analysis_profile: b075844f08879296d957518397cd0ddda73db81dce53d00d3f0e702766fc2af6
// limitations: The session serves operations only after Ghidra reports default auto-analysis complete; incomplete analysis does not expose partial results.; The imported Program and temporary project are ephemeral and deleted on close. Annotation operations edit session database metadata; original executable bytes are never written.; Cancelling an active Ghidra request terminates its ephemeral database and discards session annotations. The selected target remains open; the next provider query imports the original artifact again.; Default-space addresses use lowercase 0x-prefixed hexadecimal; other address spaces use <percent-encoded-space>:0x<hex>.; The Ghidra Program references PDB WinIspPlugIn.pdb (GUID d9f398c7-6c98-49a8-af25-a0659d5ad2f3, age (hex) 1, signature unknown, version RSDS); Ghidra reports load state unknown. Original names and types may be missing; an empty name search does not prove a procedure is absent. Use list_procedures and address-based analysis to inspect recovered functions. REA does not admit a caller-selected PDB companion.; This session uses Ghidra 12.1.2. The bridge is verified against 12.1.4; other 12.1.x builds are accepted and the observed version is reported.; Pseudocode is Ghidra decompiler output, not original source and not text-equivalent to Hopper output.; External functions and functions without an analyzable body return null; other decompiler failures remain explicit.
// pseudocode: provider-specific; not original source


/* Library Function - Single Match
    protected: void __thiscall COleIPFrameWnd::OnIdleUpdateCmdUI(void)
   
   Library: Visual Studio 2015 Release */

void __thiscall COleIPFrameWnd::OnIdleUpdateCmdUI(COleIPFrameWnd *this)

{
  code *pcVar1;
  int *piVar2;
  undefined4 unaff_ESI;
  int *piStack_8;
  
  if (*(COleCntrFrameWnd **)(this + 0x140) != (COleCntrFrameWnd *)0x0) {
    piStack_8 = (int *)0x101627f4;
    COleCntrFrameWnd::OnIdleUpdateCmdUI(*(COleCntrFrameWnd **)(this + 0x140));
  }
  piVar2 = *(int **)(this + 0x144);
  if (piVar2 != (int *)0x0) {
    if ((piVar2[0x46] & 8U) != 0) {
      pcVar1 = *(code **)(*piVar2 + 0x178);
      piStack_8 = piVar2;
      guard_check_icall(piVar2[0x46] & 4,unaff_ESI);
      (*pcVar1)();
    }
    piStack_8 = (int *)piVar2[0x2d];
    while (piStack_8 != (int *)0x0) {
      piVar2 = (int *)FUN_100c321b(&piStack_8);
      FUN_1005292a(*piVar2,*(undefined4 *)(*piVar2 + 0x20),0x363,1,0);
    }
    return;
  }
  return;
}

