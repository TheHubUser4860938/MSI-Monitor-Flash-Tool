// rea decompile_all
// name: CMFCRibbonPanelMenuBar::OnChangeHighlighted
// address: 0x1011f91c
// body: available
// range: 0x1011f91c-0x1011fc56 inclusive
// non_contiguous: false
// provider: Ghidra 12.1.2 (ghidra)
// analysis_profile: b075844f08879296d957518397cd0ddda73db81dce53d00d3f0e702766fc2af6
// limitations: The session serves operations only after Ghidra reports default auto-analysis complete; incomplete analysis does not expose partial results.; The imported Program and temporary project are ephemeral and deleted on close. Annotation operations edit session database metadata; original executable bytes are never written.; Cancelling an active Ghidra request terminates its ephemeral database and discards session annotations. The selected target remains open; the next provider query imports the original artifact again.; Default-space addresses use lowercase 0x-prefixed hexadecimal; other address spaces use <percent-encoded-space>:0x<hex>.; The Ghidra Program references PDB Comm.pdb (GUID c3062acb-498d-45fa-a233-c8b7e401bb13, age (hex) 1, signature unknown, version RSDS); Ghidra reports load state unknown. Original names and types may be missing; an empty name search does not prove a procedure is absent. Use list_procedures and address-based analysis to inspect recovered functions. REA does not admit a caller-selected PDB companion.; This session uses Ghidra 12.1.2. The bridge is verified against 12.1.4; other 12.1.x builds are accepted and the observed version is reported.; Pseudocode is Ghidra decompiler output, not original source and not text-equivalent to Hopper output.; External functions and functions without an analyzable body return null; other decompiler failures remain explicit.
// pseudocode: provider-specific; not original source


/* Library Function - Single Match
    public: virtual void __thiscall CMFCRibbonPanelMenuBar::OnChangeHighlighted(class
   CMFCRibbonBaseElement *)
   
   Library: Visual Studio 2015 Release */

void __thiscall
CMFCRibbonPanelMenuBar::OnChangeHighlighted
          (CMFCRibbonPanelMenuBar *this,CMFCRibbonBaseElement *param_1)

{
  CMFCRibbonPanel *this_00;
  code *pcVar1;
  POINT pt;
  CMFCRibbonBaseElement *pCVar2;
  CObject *pCVar3;
  CObject *pCVar4;
  BOOL BVar5;
  int iVar6;
  CMFCRibbonPanelMenu *pCVar7;
  HWND pHVar8;
  CWnd *pCVar9;
  CFrameWnd *pCVar10;
  tagPOINT local_28;
  CObject *local_20;
  CMFCRibbonPanelMenu *local_1c;
  RECT local_18;
  uint local_8;
  
  local_8 = DAT_101d3fec ^ (uint)&stack0xfffffffc;
  this_00 = *(CMFCRibbonPanel **)(this + 0xea4);
  if ((this_00 == (CMFCRibbonPanel *)0x0) || (*(int *)(this_00 + 0x78) == 0)) goto LAB_1011fc45;
  pCVar2 = CMFCRibbonPanel::GetDroppedDown(this_00);
  pCVar3 = AfxDynamicDownCast((CRuntimeClass *)&PTR_s_CMFCRibbonButton_101963ec,(CObject *)pCVar2);
  local_28.y = (LONG)pCVar3;
  pCVar4 = AfxDynamicDownCast((CRuntimeClass *)&PTR_s_CMFCRibbonButton_101963ec,(CObject *)param_1);
  local_20 = pCVar4;
  if ((pCVar3 != (CObject *)0x0) && (param_1 == (CMFCRibbonBaseElement *)0x0)) goto LAB_1011fc45;
  local_1c = (CMFCRibbonPanelMenu *)(uint)(pCVar3 != (CObject *)param_1);
  pCVar7 = local_1c;
  if ((pCVar4 != (CObject *)0x0) && (pCVar3 == pCVar4)) {
    local_18.left = *(LONG *)(pCVar4 + 0x124);
    local_18.top = *(LONG *)(pCVar4 + 0x128);
    local_18.right = *(LONG *)(pCVar4 + 300);
    local_18.bottom = *(LONG *)(pCVar4 + 0x130);
    BVar5 = IsRectEmpty(&local_18);
    pCVar4 = local_20;
    pCVar7 = local_1c;
    pCVar3 = (CObject *)local_28.y;
    if (BVar5 == 0) {
      pcVar1 = *(code **)(*(int *)local_20 + 600);
      guard_check_icall();
      iVar6 = (*pcVar1)();
      pCVar7 = local_1c;
      pCVar3 = (CObject *)local_28.y;
      if (iVar6 == 0) {
        pCVar7 = (CMFCRibbonPanelMenu *)0x1;
      }
    }
  }
  if (pCVar7 == (CMFCRibbonPanelMenu *)0x0) {
    if ((pCVar4 != (CObject *)0x0) && (pCVar4 == *(CObject **)(this + 0xeac))) {
      *(int *)(*(CObject **)(this + 0xeac) + 0x188) = 0;
      *(undefined4 *)(this + 0xeac) = 0;
      KillTimer(*(HWND *)(this + 0x20),0xec1c);
    }
  }
  else {
    pHVar8 = GetParent(*(HWND *)(this + 0x20));
    pCVar9 = CWnd::FromHandle(pHVar8);
    local_1c = (CMFCRibbonPanelMenu *)
               AfxDynamicDownCast((CRuntimeClass *)&PTR_s_CMFCRibbonPanelMenu_101a0984,
                                  (CObject *)pCVar9);
    if (pCVar3 != (CObject *)0x0) {
      iVar6 = FUN_1001d471();
      if ((DAT_101daf90 == 0) && ((iVar6 == 0 || (*(int *)(iVar6 + 4) != 0x100)))) {
        *(CObject **)(this + 0xeac) = pCVar3;
        *(int *)(pCVar3 + 0x188) = 1;
        SetTimer(*(HWND *)(this + 0x20),0xec1c,DAT_101d3920 - 1,(TIMERPROC)0x0);
        pcVar1 = *(code **)(*(int *)pCVar3 + 0x1b8);
        guard_check_icall();
        (*pcVar1)();
      }
      else {
        KillTimer(*(HWND *)(this + 0x20),0xec1c);
        *(undefined4 *)(this + 0xeac) = 0;
        pcVar1 = *(code **)(*(int *)pCVar3 + 0x198);
        guard_check_icall();
        (*pcVar1)();
        pCVar7 = local_1c;
        if (local_1c != (CMFCRibbonPanelMenu *)0x0) {
          pCVar10 = DAT_101dc4c4;
          if (DAT_101dc4c4 == (CFrameWnd *)0x0) {
            pCVar10 = CWnd::GetTopLevelFrame((CWnd *)this);
          }
          CMFCPopupMenu::ActivatePopupMenu(pCVar10,(CMFCPopupMenu *)pCVar7);
        }
      }
    }
    if (pCVar4 != (CObject *)0x0) {
      pcVar1 = *(code **)(*(int *)pCVar4 + 0x138);
      guard_check_icall();
      iVar6 = (*pcVar1)();
      if (iVar6 != 0) {
        if (*(int *)(this + 0xeb0) != 0) {
          KillTimer(*(HWND *)(this + 0x20),0xec1b);
        }
        *(CObject **)(this + 0xeb0) = pCVar4;
        if (pCVar4 == *(CObject **)(this + 0xeac)) {
          local_18.left = *(LONG *)(pCVar4 + 0x124);
          local_18.top = *(LONG *)(pCVar4 + 0x128);
          local_18.right = *(LONG *)(pCVar4 + 300);
          local_18.bottom = *(LONG *)(pCVar4 + 0x130);
          BVar5 = IsRectEmpty(&local_18);
          if (BVar5 == 0) {
            local_28.x = 0;
            local_28.y = 0;
            GetCursorPos(&local_28);
            ScreenToClient(*(HWND *)(this + 0x20),&local_28);
            pt.y = local_28.y;
            pt.x = local_28.x;
            BVar5 = PtInRect(&local_18,pt);
            pCVar4 = local_20;
            if (BVar5 == 0) goto LAB_1011fb5d;
          }
          pcVar1 = *(code **)(*(int *)this + 0x444);
          guard_check_icall();
          (*pcVar1)();
          *(undefined4 *)(this + 0xeb0) = 0;
          pCVar4 = local_20;
        }
        else {
          SetTimer(*(HWND *)(this + 0x20),0xec1b,DAT_101d3920,(TIMERPROC)0x0);
        }
      }
    }
LAB_1011fb5d:
    pCVar7 = local_1c;
    if (local_1c != (CMFCRibbonPanelMenu *)0x0) {
      local_20 = (CObject *)CMFCRibbonPanelMenu::GetParentRibbonMenuBar(local_1c);
      if ((local_20 != (CObject *)0x0) && (*(int *)(local_20 + 0xeac) == *(int *)(pCVar7 + 0x116c)))
      {
        pcVar1 = *(code **)(*(int *)local_20 + 0x444);
        guard_check_icall();
        (*pcVar1)();
        pCVar7 = local_1c;
      }
      local_1c = *(CMFCRibbonPanelMenu **)(pCVar7 + 0x116c);
      if (local_1c != (CMFCRibbonPanelMenu *)0x0) {
        pcVar1 = *(code **)(*(int *)local_1c + 0x1fc);
        guard_check_icall(this,pCVar4);
        (*pcVar1)();
      }
    }
  }
  if (param_1 == (CMFCRibbonBaseElement *)0x0) {
    pHVar8 = GetParent(*(HWND *)(this + 0x20));
    pCVar9 = CWnd::FromHandle(pHVar8);
    pCVar4 = AfxDynamicDownCast((CRuntimeClass *)&PTR_s_CMFCRibbonPanelMenu_101a0984,
                                (CObject *)pCVar9);
    if ((pCVar4 != (CObject *)0x0) && (*(int **)(pCVar4 + 0x116c) != (int *)0x0)) {
      pcVar1 = *(code **)(**(int **)(pCVar4 + 0x116c) + 0x1fc);
      guard_check_icall(this,0);
      (*pcVar1)();
    }
  }
LAB_1011fc45:
  __security_check_cookie(local_8 ^ (uint)&stack0xfffffffc);
  return;
}

