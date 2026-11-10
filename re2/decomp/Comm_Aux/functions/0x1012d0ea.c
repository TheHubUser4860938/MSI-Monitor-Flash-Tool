// rea decompile_all
// name: CDockablePane::PreTranslateMessage
// address: 0x1012d0ea
// body: available
// range: 0x1012d0ea-0x1012d2fb inclusive
// non_contiguous: false
// provider: Ghidra 12.1.2 (ghidra)
// analysis_profile: b075844f08879296d957518397cd0ddda73db81dce53d00d3f0e702766fc2af6
// limitations: The session serves operations only after Ghidra reports default auto-analysis complete; incomplete analysis does not expose partial results.; The imported Program and temporary project are ephemeral and deleted on close. Annotation operations edit session database metadata; original executable bytes are never written.; Cancelling an active Ghidra request terminates its ephemeral database and discards session annotations. The selected target remains open; the next provider query imports the original artifact again.; Default-space addresses use lowercase 0x-prefixed hexadecimal; other address spaces use <percent-encoded-space>:0x<hex>.; The Ghidra Program references PDB Comm_Aux.pdb (GUID ba7920cc-daa3-4461-a102-1f8f66c67a2a, age (hex) 1, signature unknown, version RSDS); Ghidra reports load state unknown. Original names and types may be missing; an empty name search does not prove a procedure is absent. Use list_procedures and address-based analysis to inspect recovered functions. REA does not admit a caller-selected PDB companion.; This session uses Ghidra 12.1.2. The bridge is verified against 12.1.4; other 12.1.x builds are accepted and the observed version is reported.; Pseudocode is Ghidra decompiler output, not original source and not text-equivalent to Hopper output.; External functions and functions without an analyzable body return null; other decompiler failures remain explicit.
// pseudocode: provider-specific; not original source


/* Library Function - Single Match
    public: virtual int __thiscall CDockablePane::PreTranslateMessage(struct tagMSG *)
   
   Library: Visual Studio 2015 Release */

int __thiscall CDockablePane::PreTranslateMessage(CDockablePane *this,tagMSG *param_1)

{
  code *pcVar1;
  char cVar2;
  uint uVar3;
  int iVar4;
  CBaseTabbedPane *pCVar5;
  HWND pHVar6;
  CWnd *pCVar7;
  CDockingManager *pCVar8;
  CObject *pCVar9;
  
  uVar3 = param_1->message;
  if (uVar3 < 0x105) {
    if ((uVar3 == 0x104) ||
       ((0xa0 < uVar3 &&
        ((uVar3 < 0xa3 ||
         ((0xa3 < uVar3 &&
          ((uVar3 < 0xa6 || ((0xa6 < uVar3 && ((uVar3 < 0xa9 || (uVar3 == 0x100)))))))))))))) {
LAB_1012d15d:
      iVar4 = *(int *)(this + 0x34c);
      if ((iVar4 != 0) && (*(int *)(iVar4 + 0x20) != 0)) {
        SendMessageW(*(HWND *)(iVar4 + 0x20),0x407,0,(LPARAM)param_1);
      }
    }
  }
  else if ((0x1ff < uVar3) &&
          ((uVar3 < 0x203 || ((0x203 < uVar3 && ((uVar3 < 0x206 || (uVar3 - 0x207 < 2))))))))
  goto LAB_1012d15d;
  if (param_1->message == 0x100) {
    pcVar1 = *(code **)(*(int *)this + 0x1b8);
    guard_check_icall();
    uVar3 = (*pcVar1)();
    if ((((uVar3 & 2) != 0) && (this[0x2c8] != (CDockablePane)0x0)) && (param_1->wParam == 0x1b)) {
      pHVar6 = *(HWND *)(this + 0x20);
LAB_1012d1ba:
      PostMessageW(pHVar6,0x1f,0,0);
      return 1;
    }
    if (param_1->message == 0x100) {
      pcVar1 = *(code **)(*(int *)this + 0x16c);
      guard_check_icall();
      iVar4 = (*pcVar1)();
      if (((iVar4 != 0) && (param_1->wParam == 0x1b)) &&
         (pCVar5 = CBasePane::GetParentTabbedPane((CBasePane *)this),
         pCVar5 != (CBaseTabbedPane *)0x0)) {
        pcVar1 = *(code **)(*(int *)pCVar5 + 0x228);
        guard_check_icall(0);
        iVar4 = (*pcVar1)();
        if ((pCVar5[0x2c8] != (CBaseTabbedPane)0x0) ||
           ((iVar4 != 0 && (*(char *)(iVar4 + 0xa5) != '\0')))) {
          if (iVar4 == 0) {
            pHVar6 = *(HWND *)(pCVar5 + 0x20);
          }
          else {
            pHVar6 = *(HWND *)(iVar4 + 0x20);
          }
          goto LAB_1012d1ba;
        }
      }
      if ((param_1->message == 0x100) && (param_1->wParam == 0x1b)) {
        pcVar1 = *(code **)(*(int *)this + 0x1b8);
        guard_check_icall();
        cVar2 = (*pcVar1)();
        if (cVar2 < '\0') {
          pHVar6 = GetParent(*(HWND *)(this + 0x20));
          pCVar7 = CWnd::FromHandle(pHVar6);
          pCVar8 = CGlobalUtils::GetDockingManager((CGlobalUtils *)&PTR_vftable_10205db4,pCVar7);
          if ((((pCVar8 != (CDockingManager *)0x0) && (iVar4 = *(int *)(pCVar8 + 0x1b8), iVar4 != 0)
               ) && (*(int *)(iVar4 + 8) != 0)) && (*(int *)(iVar4 + 4) != 0)) {
            pHVar6 = GetParent(*(HWND *)(this + 0x20));
            pCVar7 = CWnd::FromHandle(pHVar6);
            pCVar9 = AfxDynamicDownCast((CRuntimeClass *)&PTR_s_CPaneFrameWnd_10205d4c,
                                        (CObject *)pCVar7);
            if (pCVar9 != (CObject *)0x0) {
              pHVar6 = GetCapture();
              pCVar7 = CWnd::FromHandle(pHVar6);
              if (pCVar7 == (CWnd *)pCVar9) {
                pHVar6 = *(HWND *)(pCVar9 + 0x20);
                goto LAB_1012d1ba;
              }
            }
          }
        }
      }
    }
  }
  iVar4 = FUN_1007ef03(param_1);
  return iVar4;
}

