// rea decompile_all
// name: CMFCRibbonBar::OnLButtonUp
// address: 0x10151f59
// body: available
// range: 0x10151f59-0x101520ae inclusive
// non_contiguous: false
// provider: Ghidra 12.1.2 (ghidra)
// analysis_profile: b075844f08879296d957518397cd0ddda73db81dce53d00d3f0e702766fc2af6
// limitations: The session serves operations only after Ghidra reports default auto-analysis complete; incomplete analysis does not expose partial results.; The imported Program and temporary project are ephemeral and deleted on close. Annotation operations edit session database metadata; original executable bytes are never written.; Cancelling an active Ghidra request terminates its ephemeral database and discards session annotations. The selected target remains open; the next provider query imports the original artifact again.; Default-space addresses use lowercase 0x-prefixed hexadecimal; other address spaces use <percent-encoded-space>:0x<hex>.; The Ghidra Program references PDB Comm_Aux.pdb (GUID ba7920cc-daa3-4461-a102-1f8f66c67a2a, age (hex) 1, signature unknown, version RSDS); Ghidra reports load state unknown. Original names and types may be missing; an empty name search does not prove a procedure is absent. Use list_procedures and address-based analysis to inspect recovered functions. REA does not admit a caller-selected PDB companion.; This session uses Ghidra 12.1.2. The bridge is verified against 12.1.4; other 12.1.x builds are accepted and the observed version is reported.; Pseudocode is Ghidra decompiler output, not original source and not text-equivalent to Hopper output.; External functions and functions without an analyzable body return null; other decompiler failures remain explicit.
// pseudocode: provider-specific; not original source


/* Library Function - Single Match
    protected: void __thiscall CMFCRibbonBar::OnLButtonUp(unsigned int,class CPoint)
   
   Library: Visual Studio 2015 Release */

void __thiscall
CMFCRibbonBar::OnLButtonUp(CMFCRibbonBar *this,undefined4 param_1,LONG param_3,LONG param_4)

{
  code *pcVar1;
  HWND hWnd;
  int iVar2;
  int *piVar3;
  BOOL BVar4;
  RECT local_18;
  uint local_8;
  
  local_8 = DAT_10206460 ^ (uint)&stack0xfffffffc;
  CPane::OnLButtonUp((CPane *)this,param_1,param_3,param_4);
  if (*(int *)(this + 0x300) != 0) {
    KillTimer(*(HWND *)(this + 0x20),0xec19);
    *(undefined4 *)(this + 0x300) = 0;
  }
  pcVar1 = *(code **)(*(int *)this + 0x330);
  guard_check_icall(param_3,param_4,0,0);
  piVar3 = (int *)(*pcVar1)();
  hWnd = *(HWND *)(this + 0x20);
  if (piVar3 != (int *)0x0) {
    pcVar1 = *(code **)(*piVar3 + 0x214);
    guard_check_icall(param_3,param_4);
    (*pcVar1)();
    BVar4 = IsWindow(hWnd);
    if (BVar4 == 0) goto LAB_1015209c;
    piVar3[0x34] = 0;
    local_18.left = piVar3[0x1d];
    local_18.top = piVar3[0x1e];
    local_18.right = piVar3[0x1f];
    local_18.bottom = piVar3[0x20];
    RedrawWindow(*(HWND *)(this + 0x20),&local_18,(HRGN)0x0,0x105);
  }
  if (*(int **)(this + 0x7a8) != (int *)0x0) {
    pcVar1 = *(code **)(**(int **)(this + 0x7a8) + 0xc0);
    guard_check_icall(param_3,param_4);
    (*pcVar1)();
    BVar4 = IsWindow(hWnd);
    if (BVar4 == 0) goto LAB_1015209c;
  }
  iVar2 = *(int *)(this + 0x33c);
  if (iVar2 != 0) {
    local_18.left = *(int *)(iVar2 + 0x74);
    local_18.top = *(int *)(iVar2 + 0x78);
    local_18.right = *(int *)(iVar2 + 0x7c);
    local_18.bottom = *(int *)(iVar2 + 0x80);
    *(undefined4 *)(iVar2 + 0xd0) = 0;
    *(undefined4 *)(this + 0x33c) = 0;
    RedrawWindow(*(HWND *)(this + 0x20),&local_18,(HRGN)0x0,0x105);
    GetCursorPos((LPPOINT)&param_3);
    ScreenToClient(*(HWND *)(this + 0x20),(LPPOINT)&param_3);
    OnMouseMove(this,param_1,param_3,param_4);
  }
LAB_1015209c:
  __security_check_cookie(local_8 ^ (uint)&stack0xfffffffc);
  return;
}

