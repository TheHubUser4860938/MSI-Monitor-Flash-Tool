// rea decompile_all
// name: CMDIChildWnd::OnMDIActivate
// address: 0x516739
// body: available
// range: 0x516739-0x516847 inclusive
// non_contiguous: false
// provider: Ghidra 12.1.2 (ghidra)
// analysis_profile: ac6d50be2cdf54f7005df47d1ed7e7ef55dee595681eb1b7c2e0b00d70cd697d
// limitations: The session serves operations only after Ghidra reports default auto-analysis complete; incomplete analysis does not expose partial results.; The imported Program and temporary project are ephemeral and deleted on close. Annotation operations edit session database metadata; original executable bytes are never written.; Cancelling an active Ghidra request terminates its ephemeral database and discards session annotations. The selected target remains open; the next provider query imports the original artifact again.; Default-space addresses use lowercase 0x-prefixed hexadecimal; other address spaces use <percent-encoded-space>:0x<hex>.; The Ghidra Program references PDB ISPToolForMsi.pdb (GUID b8f2ac8f-1d6f-438d-800f-ed4a14426ac6, age (hex) 1, signature unknown, version RSDS); Ghidra reports load state unknown. Original names and types may be missing; an empty name search does not prove a procedure is absent. Use list_procedures and address-based analysis to inspect recovered functions. REA does not admit a caller-selected PDB companion.; This session uses Ghidra 12.1.2. The bridge is verified against 12.1.4; other 12.1.x builds are accepted and the observed version is reported.; Pseudocode is Ghidra decompiler output, not original source and not text-equivalent to Hopper output.; External functions and functions without an analyzable body return null; other decompiler failures remain explicit.
// pseudocode: provider-specific; not original source


/* Library Function - Single Match
    protected: void __thiscall CMDIChildWnd::OnMDIActivate(int,class CWnd *,class CWnd *)
   
   Library: Visual Studio 2015 Release */

void __thiscall
CMDIChildWnd::OnMDIActivate(CMDIChildWnd *this,int param_1,CWnd *param_2,CWnd *param_3)

{
  code *pcVar1;
  bool bVar2;
  int *piVar3;
  int iVar4;
  HWND pHVar5;
  CWnd *pCVar6;
  CMDIFrameWnd *pCVar7;
  undefined4 uVar8;
  
  *(undefined4 *)(this + 0x124) = 0;
  UpdateClientEdge(this,(tagRECT *)0x0);
  piVar3 = (int *)FUN_004d4de7();
  if ((param_1 == 0) && (piVar3 != (int *)0x0)) {
    pcVar1 = *(code **)(*piVar3 + 400);
    guard_check_icall(0,piVar3,piVar3);
    (*pcVar1)();
  }
  bVar2 = false;
  if (*(int **)(this + 0xac) != (int *)0x0) {
    pcVar1 = *(code **)(**(int **)(this + 0xac) + 0x5c);
    guard_check_icall(param_1);
    iVar4 = (*pcVar1)();
    if (iVar4 != 0) {
      bVar2 = true;
      goto LAB_005167d4;
    }
  }
  if ((param_1 == 0) && (param_2 == (CWnd *)0x0)) {
    uVar8 = 0;
  }
  else {
    uVar8 = 1;
  }
  pcVar1 = *(code **)(*(int *)this + 0x1a4);
  guard_check_icall(uVar8);
  (*pcVar1)();
LAB_005167d4:
  if ((param_1 != 0) && (piVar3 != (int *)0x0)) {
    pHVar5 = GetActiveWindow();
    pCVar6 = CWnd::FromHandle(pHVar5);
    pCVar7 = GetMDIFrame(this);
    if (pCVar7 == (CMDIFrameWnd *)pCVar6) {
      pcVar1 = *(code **)(*piVar3 + 400);
      guard_check_icall(1,piVar3,piVar3);
      (*pcVar1)();
    }
  }
  if (!bVar2) {
    pcVar1 = *(code **)(*(int *)this + 0x1c4);
    guard_check_icall(param_1,param_2,0);
    (*pcVar1)();
    pCVar7 = GetMDIFrame(this);
    DrawMenuBar(*(HWND *)(pCVar7 + 0x20));
  }
  return;
}

