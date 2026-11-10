// rea decompile_all
// name: CMFCTabCtrl::OnSize
// address: 0x100a9c46
// body: available
// range: 0x100a9c46-0x100a9d5c inclusive
// non_contiguous: false
// provider: Ghidra 12.1.2 (ghidra)
// analysis_profile: b075844f08879296d957518397cd0ddda73db81dce53d00d3f0e702766fc2af6
// limitations: The session serves operations only after Ghidra reports default auto-analysis complete; incomplete analysis does not expose partial results.; The imported Program and temporary project are ephemeral and deleted on close. Annotation operations edit session database metadata; original executable bytes are never written.; Cancelling an active Ghidra request terminates its ephemeral database and discards session annotations. The selected target remains open; the next provider query imports the original artifact again.; Default-space addresses use lowercase 0x-prefixed hexadecimal; other address spaces use <percent-encoded-space>:0x<hex>.; The Ghidra Program references PDB WinIspPlugIn.pdb (GUID d9f398c7-6c98-49a8-af25-a0659d5ad2f3, age (hex) 1, signature unknown, version RSDS); Ghidra reports load state unknown. Original names and types may be missing; an empty name search does not prove a procedure is absent. Use list_procedures and address-based analysis to inspect recovered functions. REA does not admit a caller-selected PDB companion.; This session uses Ghidra 12.1.2. The bridge is verified against 12.1.4; other 12.1.x builds are accepted and the observed version is reported.; Pseudocode is Ghidra decompiler output, not original source and not text-equivalent to Hopper output.; External functions and functions without an analyzable body return null; other decompiler failures remain explicit.
// pseudocode: provider-specific; not original source


/* Library Function - Single Match
    protected: void __thiscall CMFCTabCtrl::OnSize(unsigned int,int,int)
   
   Library: Visual Studio 2015 Release */

void __thiscall CMFCTabCtrl::OnSize(CMFCTabCtrl *this,uint param_1,int param_2,int param_3)

{
  code *pcVar1;
  int iVar2;
  int iVar3;
  
  FUN_100540e0();
  pcVar1 = *(code **)(*(int *)this + 0x248);
  guard_check_icall();
  iVar2 = (*pcVar1)();
  iVar3 = GetSystemMetrics(2);
  iVar3 = param_2 + (iVar2 + iVar3 * 2) * -2;
  iVar2 = GetSystemMetrics(0x15);
  if (iVar2 * 2 < iVar3) {
    iVar2 = GetSystemMetrics(0x15);
    if (iVar2 * 2 < iVar3 / 2) {
      *(int *)(this + 0x2b4) = iVar3 / 2;
    }
    else {
      *(int *)(this + 0x2b4) = iVar3;
    }
  }
  else {
    *(undefined4 *)(this + 0x2b4) = 0;
  }
  if (((*(int *)(this + 0x254) == 0) && (*(int *)(this + 600) == 0)) &&
     (*(int *)(this + 0x25c) == 0)) {
    pcVar1 = *(code **)(*(int *)this + 0x184);
    guard_check_icall();
    (*pcVar1)();
  }
  else {
    *(undefined4 *)(this + 0x2a4) = 0;
    *(undefined4 *)(this + 0x2b0) = 0;
    SendMessageW(*(HWND *)(this + 0x20),0xb,0,0);
    pcVar1 = *(code **)(*(int *)this + 0x184);
    guard_check_icall();
    (*pcVar1)();
    if (-1 < *(int *)(this + 0xc0)) {
      pcVar1 = *(code **)(*(int *)this + 0x224);
      guard_check_icall(*(int *)(this + 0xc0));
      (*pcVar1)();
    }
    SendMessageW(*(HWND *)(this + 0x20),0xb,1,0);
    RedrawWindow(*(HWND *)(this + 0x20),(RECT *)0x0,(HRGN)0x0,0x585);
  }
  SynchronizeScrollBar(this,(tagSCROLLINFO *)0x0);
  return;
}

