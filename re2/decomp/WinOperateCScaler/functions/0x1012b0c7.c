// rea decompile_all
// name: CMFCRibbonPanelMenuBar::OnContextMenu
// address: 0x1012b0c7
// body: available
// range: 0x1012b0c7-0x1012b289 inclusive
// non_contiguous: false
// provider: Ghidra 12.1.2 (ghidra)
// analysis_profile: b075844f08879296d957518397cd0ddda73db81dce53d00d3f0e702766fc2af6
// limitations: The session serves operations only after Ghidra reports default auto-analysis complete; incomplete analysis does not expose partial results.; The imported Program and temporary project are ephemeral and deleted on close. Annotation operations edit session database metadata; original executable bytes are never written.; Cancelling an active Ghidra request terminates its ephemeral database and discards session annotations. The selected target remains open; the next provider query imports the original artifact again.; Default-space addresses use lowercase 0x-prefixed hexadecimal; other address spaces use <percent-encoded-space>:0x<hex>.; The Ghidra Program references PDB WinOperateCScaler.pdb (GUID a6737962-efea-4805-8ae6-1fc1ef126554, age (hex) 1, signature unknown, version RSDS); Ghidra reports load state unknown. Original names and types may be missing; an empty name search does not prove a procedure is absent. Use list_procedures and address-based analysis to inspect recovered functions. REA does not admit a caller-selected PDB companion.; This session uses Ghidra 12.1.2. The bridge is verified against 12.1.4; other 12.1.x builds are accepted and the observed version is reported.; Pseudocode is Ghidra decompiler output, not original source and not text-equivalent to Hopper output.; External functions and functions without an analyzable body return null; other decompiler failures remain explicit.
// pseudocode: provider-specific; not original source


/* Library Function - Single Match
    protected: void __thiscall CMFCRibbonPanelMenuBar::OnContextMenu(class CWnd *,class CPoint)
   
   Library: Visual Studio 2015 Release */

void __thiscall
CMFCRibbonPanelMenuBar::OnContextMenu
          (CMFCRibbonPanelMenuBar *this,undefined4 param_1,int param_3,int param_4)

{
  ushort uVar1;
  HWND pHVar2;
  CWnd *pCVar3;
  CObject *pCVar4;
  int iVar5;
  CMFCRibbonButton *pCVar6;
  CMFCRibbonBaseElement *pCVar7;
  code *pcVar8;
  tagPOINT local_20;
  tagRECT local_18;
  uint local_8;
  
  local_8 = DAT_10201fec ^ (uint)&stack0xfffffffc;
  pHVar2 = GetParent(*(HWND *)(this + 0x20));
  pCVar3 = CWnd::FromHandle(pHVar2);
  pCVar4 = AfxDynamicDownCast((CRuntimeClass *)&PTR_s_CMFCPopupMenu_10201784,(CObject *)pCVar3);
  if (((pCVar4 == (CObject *)0x0) || (*(int *)(pCVar4 + 0x116c) == 0)) ||
     (*(int *)(*(int *)(pCVar4 + 0x116c) + 0xc0) == 0)) {
    if (*(int *)(this + 0xdf4) != 0) {
      KillTimer(*(HWND *)(this + 0x20),0xec1d);
      *(undefined4 *)(this + 0xdf4) = 0;
      *(undefined4 *)(this + 0xeb8) = 0;
      SetRectEmpty((LPRECT)(this + 0xe08));
    }
    pcVar8 = *(code **)(*(int *)this + 0x448);
    guard_check_icall();
    iVar5 = (*pcVar8)();
    if (((iVar5 != 0) && (*(int *)(this + 0xde4) != 0)) &&
       ((*(int *)(this + 0xde8) == 0 || (*(int *)(this + 0xde0) != 0)))) {
      iVar5 = GetSystemMetrics(0x17);
      uVar1 = GetAsyncKeyState((iVar5 != 0) + 1);
      if ((uVar1 & 0x8000) == 0) {
        local_20.x = param_3;
        local_20.y = param_4;
        ScreenToClient(*(HWND *)(this + 0x20),&local_20);
        pCVar6 = GetDroppedDown(this);
        if (pCVar6 != (CMFCRibbonButton *)0x0) {
          pcVar8 = *(code **)(*(int *)pCVar6 + 0x198);
          guard_check_icall();
          (*pcVar8)();
        }
        if (*(int *)(this + 0xeb0) != 0) {
          KillTimer(*(HWND *)(this + 0x20),0xec1b);
        }
        if (((param_3 == -1) && (param_4 == -1)) &&
           (pCVar7 = GetFocused(this), pCVar7 != (CMFCRibbonBaseElement *)0x0)) {
          local_18.left = *(LONG *)(pCVar7 + 0x74);
          local_18.top = *(LONG *)(pCVar7 + 0x78);
          local_18.right = *(LONG *)(pCVar7 + 0x7c);
          local_18.bottom = *(LONG *)(pCVar7 + 0x80);
          CWnd::ClientToScreen((CWnd *)this,&local_18);
          pcVar8 = *(code **)(**(int **)(this + 0xea0) + 0x364);
          guard_check_icall(this,local_18.left,local_18.top,pCVar7);
        }
        else {
          iVar5 = **(int **)(this + 0xea0);
          pCVar7 = HitTest(this,local_20.x,local_20.y);
          pcVar8 = *(code **)(iVar5 + 0x364);
          guard_check_icall(this,param_3,param_4,pCVar7);
        }
        (*pcVar8)();
      }
    }
  }
  __security_check_cookie(local_8 ^ (uint)&stack0xfffffffc);
  return;
}

