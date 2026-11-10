// rea decompile_all
// name: CMFCPopupMenu::OnMouseMove
// address: 0x1008c7fd
// body: available
// range: 0x1008c7fd-0x1008c916 inclusive
// non_contiguous: false
// provider: Ghidra 12.1.2 (ghidra)
// analysis_profile: b075844f08879296d957518397cd0ddda73db81dce53d00d3f0e702766fc2af6
// limitations: The session serves operations only after Ghidra reports default auto-analysis complete; incomplete analysis does not expose partial results.; The imported Program and temporary project are ephemeral and deleted on close. Annotation operations edit session database metadata; original executable bytes are never written.; Cancelling an active Ghidra request terminates its ephemeral database and discards session annotations. The selected target remains open; the next provider query imports the original artifact again.; Default-space addresses use lowercase 0x-prefixed hexadecimal; other address spaces use <percent-encoded-space>:0x<hex>.; The Ghidra Program references PDB WinOperateCScaler.pdb (GUID a6737962-efea-4805-8ae6-1fc1ef126554, age (hex) 1, signature unknown, version RSDS); Ghidra reports load state unknown. Original names and types may be missing; an empty name search does not prove a procedure is absent. Use list_procedures and address-based analysis to inspect recovered functions. REA does not admit a caller-selected PDB companion.; This session uses Ghidra 12.1.2. The bridge is verified against 12.1.4; other 12.1.x builds are accepted and the observed version is reported.; Pseudocode is Ghidra decompiler output, not original source and not text-equivalent to Hopper output.; External functions and functions without an analyzable body return null; other decompiler failures remain explicit.
// pseudocode: provider-specific; not original source


/* Library Function - Single Match
    protected: void __thiscall CMFCPopupMenu::OnMouseMove(unsigned int,class CPoint)
   
   Library: Visual Studio 2015 Release */

void __thiscall
CMFCPopupMenu::OnMouseMove(CMFCPopupMenu *this,undefined4 param_1,LONG param_3,LONG param_4)

{
  code *pcVar1;
  POINT pt;
  POINT pt_00;
  POINT pt_01;
  BOOL BVar2;
  int iVar3;
  RECT *lprc;
  
  if (*(int *)(this + 0x1074) != 0) {
    pt.y = param_4;
    pt.x = param_3;
    BVar2 = PtInRect((RECT *)(this + 0x107c),pt);
    if (BVar2 != 0) {
      return;
    }
    ReleaseCapture();
    *(undefined4 *)(this + 0x1074) = 0;
    pcVar1 = *(code **)(*(int *)this + 0x1f8);
    guard_check_icall(param_3,param_4);
    (*pcVar1)();
    return;
  }
  FUN_100283ad();
  if (*(int *)(this + 0xf7c) == 0) {
    return;
  }
  if (*(int *)(this + 0xfa4) != 0) {
    return;
  }
  lprc = (RECT *)(this + 0xf84);
  pt_00.y = param_4;
  pt_00.x = param_3;
  BVar2 = PtInRect(lprc,pt_00);
  if (BVar2 == 0) {
LAB_1008c8aa:
    lprc = (RECT *)(this + 0xf94);
    pt_01.y = param_4;
    pt_01.x = param_3;
    BVar2 = PtInRect(lprc,pt_01);
    if (BVar2 != 0) {
      pcVar1 = *(code **)(*(int *)this + 0x1e8);
      guard_check_icall();
      iVar3 = (*pcVar1)();
      if (iVar3 != 0) {
        *(undefined4 *)(this + 0xfa4) = 1;
        goto LAB_1008c8e2;
      }
    }
    *(undefined4 *)(this + 0xfa4) = 0;
  }
  else {
    pcVar1 = *(code **)(*(int *)this + 0x1e4);
    guard_check_icall();
    iVar3 = (*pcVar1)();
    if (iVar3 == 0) goto LAB_1008c8aa;
    *(undefined4 *)(this + 0xfa4) = 0xffffffff;
LAB_1008c8e2:
    InvalidateRect(*(HWND *)(this + 0x20),lprc,1);
  }
  if (*(int *)(this + 0xfa4) != 0) {
    SetTimer(*(HWND *)(this + 0x20),0xec16,0x50,(TIMERPROC)0x0);
  }
  return;
}

