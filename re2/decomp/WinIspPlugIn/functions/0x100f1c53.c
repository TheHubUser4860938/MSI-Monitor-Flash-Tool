// rea decompile_all
// name: CMFCPopupMenuBar::OnTimer
// address: 0x100f1c53
// body: available
// range: 0x100f1c53-0x100f1e70 inclusive
// non_contiguous: false
// provider: Ghidra 12.1.2 (ghidra)
// analysis_profile: b075844f08879296d957518397cd0ddda73db81dce53d00d3f0e702766fc2af6
// limitations: The session serves operations only after Ghidra reports default auto-analysis complete; incomplete analysis does not expose partial results.; The imported Program and temporary project are ephemeral and deleted on close. Annotation operations edit session database metadata; original executable bytes are never written.; Cancelling an active Ghidra request terminates its ephemeral database and discards session annotations. The selected target remains open; the next provider query imports the original artifact again.; Default-space addresses use lowercase 0x-prefixed hexadecimal; other address spaces use <percent-encoded-space>:0x<hex>.; The Ghidra Program references PDB WinIspPlugIn.pdb (GUID d9f398c7-6c98-49a8-af25-a0659d5ad2f3, age (hex) 1, signature unknown, version RSDS); Ghidra reports load state unknown. Original names and types may be missing; an empty name search does not prove a procedure is absent. Use list_procedures and address-based analysis to inspect recovered functions. REA does not admit a caller-selected PDB companion.; This session uses Ghidra 12.1.2. The bridge is verified against 12.1.4; other 12.1.x builds are accepted and the observed version is reported.; Pseudocode is Ghidra decompiler output, not original source and not text-equivalent to Hopper output.; External functions and functions without an analyzable body return null; other decompiler failures remain explicit.
// pseudocode: provider-specific; not original source


/* Library Function - Single Match
    protected: void __thiscall CMFCPopupMenuBar::OnTimer(unsigned int)
   
   Library: Visual Studio 2015 Release */

void __thiscall CMFCPopupMenuBar::OnTimer(CMFCPopupMenuBar *this,uint param_1)

{
  int *piVar1;
  POINT pt;
  POINT pt_00;
  POINT pt_01;
  BOOL BVar2;
  int *piVar3;
  HWND pHVar4;
  CWnd *pCVar5;
  CObject *pCVar6;
  CFrameWnd *pCVar7;
  int iVar8;
  code *pcVar9;
  tagPOINT local_20;
  tagRECT local_18;
  uint local_8;
  
  local_8 = DAT_1023dfec ^ (uint)&stack0xfffffffc;
  local_20.x = 0;
  local_20.y = 0;
  GetCursorPos(&local_20);
  ScreenToClient(*(HWND *)(this + 0x20),&local_20);
  if (param_1 == 0xec17) {
    KillTimer(*(HWND *)(this + 0x20),0xec17);
    pCVar5 = *(CWnd **)(this + 0xd08);
    if ((pCVar5 != (CWnd *)0x0) && (*(int *)(pCVar5 + 0x20) != 0)) {
      CWnd::ShowWindow(pCVar5,0);
    }
    if (*(int *)(this + 0xdb0) != 0) {
      pt.y = local_20.y;
      pt.x = local_20.x;
      BVar2 = PtInRect((RECT *)(*(int *)(this + 0xdb0) + 0x54),pt);
      if (BVar2 != 0) goto LAB_100f1e5e;
    }
    pcVar9 = *(code **)(*(int *)this + 0x440);
    guard_check_icall();
    (*pcVar9)();
    piVar1 = *(int **)(this + 0xdac);
    *(undefined4 *)(this + 0xdac) = 0;
    if (((piVar1 == (int *)0x0) || (iVar8 = *(int *)(this + 0xbf0), iVar8 < 0)) ||
       (*(int *)(this + 0xc48) <= iVar8)) goto LAB_100f1e5e;
    piVar3 = (int *)FUN_1009640a(iVar8);
    if (piVar3 != piVar1) goto LAB_100f1e5e;
    pcVar9 = *(code **)(*piVar1 + 0xcc);
    guard_check_icall(this);
  }
  else {
    if (param_1 == 0xec18) {
      KillTimer(*(HWND *)(this + 0x20),0xec18);
      if (*(int *)(this + 0xdb0) != 0) {
        pHVar4 = GetParent(*(HWND *)(this + 0x20));
        pCVar5 = CWnd::FromHandle(pHVar4);
        pCVar6 = AfxDynamicDownCast((CRuntimeClass *)&PTR_s_CMFCPopupMenu_1023d77c,(CObject *)pCVar5
                                   );
        pt_00.y = local_20.y;
        pt_00.x = local_20.x;
        BVar2 = PtInRect((RECT *)(*(int *)(this + 0xdb0) + 0x54),pt_00);
        if (BVar2 == 0) {
          pcVar9 = *(code **)(**(int **)(this + 0xdb0) + 0x58);
          guard_check_icall();
          (*pcVar9)();
          *(undefined4 *)(this + 0xdb0) = 0;
          if (pCVar6 != (CObject *)0x0) {
            pCVar7 = DAT_102471dc;
            if (DAT_102471dc == (CFrameWnd *)0x0) {
              pCVar7 = CWnd::GetTopLevelFrame((CWnd *)this);
            }
            CMFCPopupMenu::ActivatePopupMenu(pCVar7,(CMFCPopupMenu *)pCVar6);
          }
        }
      }
      goto LAB_100f1e5e;
    }
    if (param_1 != 0xec07) goto LAB_100f1e5e;
    KillTimer(*(HWND *)(this + 0x20),0xec07);
    local_18.left = 0;
    local_18.top = 0;
    local_18.right = 0;
    local_18.bottom = 0;
    GetClientRect(*(HWND *)(this + 0x20),&local_18);
    pt_01.y = local_20.y;
    pt_01.x = local_20.x;
    BVar2 = PtInRect(&local_18,pt_01);
    if (BVar2 == 0) goto LAB_100f1e5e;
    pcVar9 = *(code **)(*(int *)this + 0x390);
    guard_check_icall(local_20.x,local_20.y);
    iVar8 = (*pcVar9)();
    if ((*(int *)(this + 0xc0c) != iVar8) || (*(int *)(this + 0xc0c) == -1)) goto LAB_100f1e5e;
    pcVar9 = *(code **)(*(int *)this + 0x25c);
    guard_check_icall(iVar8);
  }
  (*pcVar9)();
LAB_100f1e5e:
  __security_check_cookie(local_8 ^ (uint)&stack0xfffffffc);
  return;
}

