// rea decompile_all
// name: CFrameWnd::OnActivateTopLevel
// address: 0x100909e1
// body: available
// range: 0x100909e1-0x10090aa0 inclusive
// non_contiguous: false
// provider: Ghidra 12.1.2 (ghidra)
// analysis_profile: b075844f08879296d957518397cd0ddda73db81dce53d00d3f0e702766fc2af6
// limitations: The session serves operations only after Ghidra reports default auto-analysis complete; incomplete analysis does not expose partial results.; The imported Program and temporary project are ephemeral and deleted on close. Annotation operations edit session database metadata; original executable bytes are never written.; Cancelling an active Ghidra request terminates its ephemeral database and discards session annotations. The selected target remains open; the next provider query imports the original artifact again.; Default-space addresses use lowercase 0x-prefixed hexadecimal; other address spaces use <percent-encoded-space>:0x<hex>.; The Ghidra Program references PDB WinOperateCScaler.pdb (GUID a6737962-efea-4805-8ae6-1fc1ef126554, age (hex) 1, signature unknown, version RSDS); Ghidra reports load state unknown. Original names and types may be missing; an empty name search does not prove a procedure is absent. Use list_procedures and address-based analysis to inspect recovered functions. REA does not admit a caller-selected PDB companion.; This session uses Ghidra 12.1.2. The bridge is verified against 12.1.4; other 12.1.x builds are accepted and the observed version is reported.; Pseudocode is Ghidra decompiler output, not original source and not text-equivalent to Hopper output.; External functions and functions without an analyzable body return null; other decompiler failures remain explicit.
// pseudocode: provider-specific; not original source


/* Library Function - Single Match
    protected: long __thiscall CFrameWnd::OnActivateTopLevel(unsigned int,long)
   
   Library: Visual Studio 2015 Release */

long __thiscall CFrameWnd::OnActivateTopLevel(CFrameWnd *this,uint param_1,long param_2)

{
  code *pcVar1;
  int iVar2;
  undefined4 uVar3;
  int *piVar4;
  
  CWnd::OnActivateTopLevel((CWnd *)this,param_1,param_2);
  pcVar1 = *(code **)(*(int *)this + 0x1b4);
  guard_check_icall();
  (*pcVar1)();
  if (*(int **)(this + 0xac) != (int *)0x0) {
    if (((short)param_1 == 0) || ((short)(param_1 >> 0x10) != 0)) {
      uVar3 = 0;
    }
    else {
      uVar3 = 1;
    }
    pcVar1 = *(code **)(**(int **)(this + 0xac) + 0x58);
    guard_check_icall(uVar3);
    (*pcVar1)();
  }
  iVar2 = FUN_10020ecf();
  if (*(CFrameWnd **)(iVar2 + 0x20) == this) {
    piVar4 = *(int **)(this + 0xdc);
    if (piVar4 == (int *)0x0) {
      pcVar1 = *(code **)(*(int *)this + 0x170);
      guard_check_icall();
      iVar2 = (*pcVar1)();
      piVar4 = *(int **)(iVar2 + 0xdc);
      if (piVar4 == (int *)0x0) goto LAB_10090a84;
    }
    pcVar1 = *(code **)(*piVar4 + 400);
    guard_check_icall(0,piVar4,piVar4);
    (*pcVar1)();
  }
LAB_10090a84:
  PostMessageW(*(HWND *)(this + 0x20),0x36a,0,0);
  return 0;
}

