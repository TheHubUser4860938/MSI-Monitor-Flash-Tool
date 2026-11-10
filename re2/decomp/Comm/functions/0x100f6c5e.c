// rea decompile_all
// name: CDockablePane::OnTimer
// address: 0x100f6c5e
// body: available
// range: 0x100f6c5e-0x100f6da3 inclusive
// non_contiguous: false
// provider: Ghidra 12.1.2 (ghidra)
// analysis_profile: b075844f08879296d957518397cd0ddda73db81dce53d00d3f0e702766fc2af6
// limitations: The session serves operations only after Ghidra reports default auto-analysis complete; incomplete analysis does not expose partial results.; The imported Program and temporary project are ephemeral and deleted on close. Annotation operations edit session database metadata; original executable bytes are never written.; Cancelling an active Ghidra request terminates its ephemeral database and discards session annotations. The selected target remains open; the next provider query imports the original artifact again.; Default-space addresses use lowercase 0x-prefixed hexadecimal; other address spaces use <percent-encoded-space>:0x<hex>.; The Ghidra Program references PDB Comm.pdb (GUID c3062acb-498d-45fa-a233-c8b7e401bb13, age (hex) 1, signature unknown, version RSDS); Ghidra reports load state unknown. Original names and types may be missing; an empty name search does not prove a procedure is absent. Use list_procedures and address-based analysis to inspect recovered functions. REA does not admit a caller-selected PDB companion.; This session uses Ghidra 12.1.2. The bridge is verified against 12.1.4; other 12.1.x builds are accepted and the observed version is reported.; Pseudocode is Ghidra decompiler output, not original source and not text-equivalent to Hopper output.; External functions and functions without an analyzable body return null; other decompiler failures remain explicit.
// pseudocode: provider-specific; not original source


/* Library Function - Single Match
    protected: void __thiscall CDockablePane::OnTimer(unsigned int)
   
   Library: Visual Studio 2015 Release */

void __thiscall CDockablePane::OnTimer(CDockablePane *this,uint param_1)

{
  code *pcVar1;
  int iVar2;
  int iVar3;
  UINT_PTR UVar4;
  
  if (param_1 == 0xec01) {
    *(undefined4 *)(this + 0x324) = 1;
    iVar2 = 0;
  }
  else {
    if (param_1 != 0xec02) {
      if (param_1 == 0xec03) {
        pcVar1 = *(code **)(*(int *)this + 0x394);
        guard_check_icall();
        iVar2 = (*pcVar1)();
        if (iVar2 == 0) {
          return;
        }
        KillTimer(*(HWND *)(this + 0x20),*(UINT_PTR *)(this + 0x2fc));
        *(undefined4 *)(this + 0x2fc) = 0;
        return;
      }
      goto LAB_100f6d96;
    }
    iVar2 = 1;
    *(undefined4 *)(this + 0x324) = 0;
  }
  pcVar1 = *(code **)(*(int *)this + 0x39c);
  guard_check_icall(iVar2);
  (*pcVar1)();
  pcVar1 = *(code **)(*(int *)this + 0x398);
  guard_check_icall(iVar2);
  iVar3 = (*pcVar1)();
  if (iVar3 != 0) {
    KillTimer(*(HWND *)(this + 0x20),*(UINT_PTR *)(this + 0x300));
    *(undefined4 *)(this + 0x31c) = 0;
    *(undefined4 *)(this + 0x300) = 0;
    *(undefined4 *)(this + 0x304) = 0;
    if (iVar2 == 0) {
      CWnd::ShowWindow((CWnd *)this,0);
      GetDefaultPaneDivider(this);
      FUN_10127484(0);
    }
    else {
      RedrawWindow(*(HWND *)(this + 0x20),(RECT *)0x0,(HRGN)0x0,0x585);
      RedrawWindow(*(HWND *)(this + 0x350),(RECT *)0x0,(HRGN)0x0,1);
      if (*(UINT_PTR *)(this + 0x2fc) != 0) {
        KillTimer(*(HWND *)(this + 0x20),*(UINT_PTR *)(this + 0x2fc));
      }
      UVar4 = SetTimer(*(HWND *)(this + 0x20),0xec03,DAT_101d3b90,(TIMERPROC)0x0);
      *(UINT_PTR *)(this + 0x2fc) = UVar4;
    }
  }
LAB_100f6d96:
  FUN_1001d029();
  return;
}

