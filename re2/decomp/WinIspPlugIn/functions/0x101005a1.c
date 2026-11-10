// rea decompile_all
// name: CMFCRibbonBaseElement::NotifyCommand
// address: 0x101005a1
// body: available
// range: 0x101005a1-0x1010072d inclusive
// non_contiguous: false
// provider: Ghidra 12.1.2 (ghidra)
// analysis_profile: b075844f08879296d957518397cd0ddda73db81dce53d00d3f0e702766fc2af6
// limitations: The session serves operations only after Ghidra reports default auto-analysis complete; incomplete analysis does not expose partial results.; The imported Program and temporary project are ephemeral and deleted on close. Annotation operations edit session database metadata; original executable bytes are never written.; Cancelling an active Ghidra request terminates its ephemeral database and discards session annotations. The selected target remains open; the next provider query imports the original artifact again.; Default-space addresses use lowercase 0x-prefixed hexadecimal; other address spaces use <percent-encoded-space>:0x<hex>.; The Ghidra Program references PDB WinIspPlugIn.pdb (GUID d9f398c7-6c98-49a8-af25-a0659d5ad2f3, age (hex) 1, signature unknown, version RSDS); Ghidra reports load state unknown. Original names and types may be missing; an empty name search does not prove a procedure is absent. Use list_procedures and address-based analysis to inspect recovered functions. REA does not admit a caller-selected PDB companion.; This session uses Ghidra 12.1.2. The bridge is verified against 12.1.4; other 12.1.x builds are accepted and the observed version is reported.; Pseudocode is Ghidra decompiler output, not original source and not text-equivalent to Hopper output.; External functions and functions without an analyzable body return null; other decompiler failures remain explicit.
// pseudocode: provider-specific; not original source


/* Library Function - Single Match
    public: int __thiscall CMFCRibbonBaseElement::NotifyCommand(int)
   
   Library: Visual Studio 2015 Release */

int __thiscall CMFCRibbonBaseElement::NotifyCommand(CMFCRibbonBaseElement *this,int param_1)

{
  code *pcVar1;
  HWND wParam;
  CMFCRibbonBar *pCVar2;
  HWND pHVar3;
  CWnd *pCVar4;
  BOOL BVar5;
  CFrameWnd *pCVar6;
  CObject *pCVar7;
  int iVar8;
  HWND hWnd;
  UINT Msg;
  WINDOWPLACEMENT local_34;
  uint local_8;
  
  local_8 = DAT_1023dfec ^ (uint)&stack0xfffffffc;
  for (; *(int *)(this + 0x8c) != 0; this = *(CMFCRibbonBaseElement **)(this + 0x8c)) {
    if ((*(int *)(this + 0xc4) != 0) &&
       (((*(int *)(this + 200) != 0 || (*(int *)(this + 0xd0) != 0)) || (*(int *)(this + 0xcc) != 0)
        ))) {
      *(undefined4 *)(this + 0xcc) = 0;
      *(undefined4 *)(this + 0xd0) = 0;
      *(undefined4 *)(this + 200) = 0;
      pcVar1 = *(code **)(*(int *)this + 0x1b8);
      guard_check_icall();
      (*pcVar1)();
    }
  }
  pcVar1 = *(code **)(*(int *)this + 0x148);
  guard_check_icall();
  wParam = (HWND)(*pcVar1)();
  if (((wParam == (HWND)0x0) || (wParam == (HWND)0xffffffff)) ||
     (pCVar2 = GetTopLevelRibbonBar(this), pCVar2 == (CMFCRibbonBar *)0x0)) goto LAB_1010071b;
  pHVar3 = GetParent(*(HWND *)(pCVar2 + 0x20));
  pCVar4 = CWnd::FromHandle(pHVar3);
  if (pCVar4 == (CWnd *)0x0) goto LAB_1010071b;
  *(undefined4 *)(this + 0xcc) = 0;
  *(undefined4 *)(this + 0xd0) = 0;
  *(undefined4 *)(this + 200) = 0;
  pcVar1 = *(code **)(*(int *)this + 0x1b8);
  guard_check_icall();
  (*pcVar1)();
  if (wParam == (HWND)0xff00) {
    pHVar3 = *(HWND *)(this + 0xa0);
    BVar5 = IsWindow(pHVar3);
    if ((BVar5 == 0) || (pCVar2 = GetTopLevelRibbonBar(this), pCVar2 == (CMFCRibbonBar *)0x0))
    goto LAB_10100709;
    pCVar6 = CWnd::GetTopLevelFrame((CWnd *)pCVar2);
    pCVar7 = AfxDynamicDownCast((CRuntimeClass *)&PTR_s_CMDIFrameWndEx_101e9630,(CObject *)pCVar6);
    if (pCVar7 == (CObject *)0x0) goto LAB_10100709;
    local_34.length = 0x2c;
    GetWindowPlacement(pHVar3,&local_34);
    if (local_34.showCmd == 2) {
      ShowWindow(pHVar3,9);
    }
    Msg = 0x222;
    hWnd = *(HWND *)(pCVar7 + 0x120);
    wParam = pHVar3;
  }
  else {
LAB_10100709:
    Msg = 0x111;
    hWnd = *(HWND *)(pCVar4 + 0x20);
  }
  if (param_1 == 0) {
    SendMessageW(hWnd,Msg,(WPARAM)wParam,0);
  }
  else {
    PostMessageW(hWnd,Msg,(WPARAM)wParam,0);
  }
LAB_1010071b:
  iVar8 = __security_check_cookie(local_8 ^ (uint)&stack0xfffffffc);
  return iVar8;
}

