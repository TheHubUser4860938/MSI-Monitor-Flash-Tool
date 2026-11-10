// rea decompile_all
// name: CMDIChildWnd::OnUpdateFrameMenu
// address: 0x10116d03
// body: available
// range: 0x10116d03-0x10116db8 inclusive
// non_contiguous: false
// provider: Ghidra 12.1.2 (ghidra)
// analysis_profile: b075844f08879296d957518397cd0ddda73db81dce53d00d3f0e702766fc2af6
// limitations: The session serves operations only after Ghidra reports default auto-analysis complete; incomplete analysis does not expose partial results.; The imported Program and temporary project are ephemeral and deleted on close. Annotation operations edit session database metadata; original executable bytes are never written.; Cancelling an active Ghidra request terminates its ephemeral database and discards session annotations. The selected target remains open; the next provider query imports the original artifact again.; Default-space addresses use lowercase 0x-prefixed hexadecimal; other address spaces use <percent-encoded-space>:0x<hex>.; The Ghidra Program references PDB WinOperateCScaler.pdb (GUID a6737962-efea-4805-8ae6-1fc1ef126554, age (hex) 1, signature unknown, version RSDS); Ghidra reports load state unknown. Original names and types may be missing; an empty name search does not prove a procedure is absent. Use list_procedures and address-based analysis to inspect recovered functions. REA does not admit a caller-selected PDB companion.; This session uses Ghidra 12.1.2. The bridge is verified against 12.1.4; other 12.1.x builds are accepted and the observed version is reported.; Pseudocode is Ghidra decompiler output, not original source and not text-equivalent to Hopper output.; External functions and functions without an analyzable body return null; other decompiler failures remain explicit.
// pseudocode: provider-specific; not original source


/* Library Function - Single Match
    public: virtual void __thiscall CMDIChildWnd::OnUpdateFrameMenu(int,class CWnd *,struct HMENU__
   *)
   
   Library: Visual Studio 2015 Release */

void __thiscall
CMDIChildWnd::OnUpdateFrameMenu(CMDIChildWnd *this,int param_1,CWnd *param_2,HMENU__ *param_3)

{
  code *pcVar1;
  CMDIFrameWnd *pCVar2;
  int *piVar3;
  LPARAM lParam;
  UINT Msg;
  
  pCVar2 = GetMDIFrame(this);
  if (param_3 == (HMENU__ *)0x0) {
    if (param_1 != 0) {
      pcVar1 = *(code **)(*(int *)this + 0x16c);
      guard_check_icall();
      piVar3 = (int *)(*pcVar1)();
      if (piVar3 != (int *)0x0) {
        pcVar1 = *(code **)(*piVar3 + 0xec);
        guard_check_icall();
        param_3 = (HMENU__ *)(*pcVar1)();
        if (param_3 != (HMENU__ *)0x0) goto LAB_10116d64;
      }
    }
    param_3 = *(HMENU__ **)(this + 0x120);
    if (param_3 != (HMENU__ *)0x0) goto LAB_10116d64;
LAB_10116d9b:
    lParam = 0;
    param_3 = (HMENU__ *)0x0;
    Msg = 0x234;
  }
  else {
LAB_10116d64:
    if (param_1 == 0) {
      if ((param_3 == (HMENU__ *)0x0) || (param_2 != (CWnd *)0x0)) goto LAB_10116d9b;
      lParam = 0;
      param_3 = *(HMENU__ **)(pCVar2 + 0x88);
    }
    else {
      pcVar1 = *(code **)(*(int *)pCVar2 + 0x1c4);
      guard_check_icall(param_3);
      lParam = (*pcVar1)();
    }
    Msg = 0x230;
  }
  SendMessageW(*(HWND *)(pCVar2 + 0x120),Msg,(WPARAM)param_3,lParam);
  return;
}

