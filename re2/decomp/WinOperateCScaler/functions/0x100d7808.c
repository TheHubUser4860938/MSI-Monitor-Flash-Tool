// rea decompile_all
// name: CMFCRibbonButton::FillWindowList
// address: 0x100d7808
// body: available
// range: 0x100d7808-0x100d7b12 inclusive
// non_contiguous: false
// provider: Ghidra 12.1.2 (ghidra)
// analysis_profile: b075844f08879296d957518397cd0ddda73db81dce53d00d3f0e702766fc2af6
// limitations: The session serves operations only after Ghidra reports default auto-analysis complete; incomplete analysis does not expose partial results.; The imported Program and temporary project are ephemeral and deleted on close. Annotation operations edit session database metadata; original executable bytes are never written.; Cancelling an active Ghidra request terminates its ephemeral database and discards session annotations. The selected target remains open; the next provider query imports the original artifact again.; Default-space addresses use lowercase 0x-prefixed hexadecimal; other address spaces use <percent-encoded-space>:0x<hex>.; The Ghidra Program references PDB WinOperateCScaler.pdb (GUID a6737962-efea-4805-8ae6-1fc1ef126554, age (hex) 1, signature unknown, version RSDS); Ghidra reports load state unknown. Original names and types may be missing; an empty name search does not prove a procedure is absent. Use list_procedures and address-based analysis to inspect recovered functions. REA does not admit a caller-selected PDB companion.; This session uses Ghidra 12.1.2. The bridge is verified against 12.1.4; other 12.1.x builds are accepted and the observed version is reported.; Pseudocode is Ghidra decompiler output, not original source and not text-equivalent to Hopper output.; External functions and functions without an analyzable body return null; other decompiler failures remain explicit.
// pseudocode: provider-specific; not original source


/* WARNING: Function: __EH_prolog3_GS replaced with injection: EH_prolog3 */
/* Library Function - Single Match
    protected: void __thiscall CMFCRibbonButton::FillWindowList(void)
   
   Library: Visual Studio 2015 Release */

void __thiscall CMFCRibbonButton::FillWindowList(CMFCRibbonButton *this)

{
  code *pcVar1;
  int *piVar2;
  CMFCRibbonBar *this_00;
  CFrameWnd *pCVar3;
  CObject *pCVar4;
  CWnd *pCVar5;
  CObject *pCVar6;
  int iVar7;
  CMFCRibbonSeparator *this_01;
  CMFCRibbonBaseElement *pCVar8;
  undefined4 uVar9;
  int iVar10;
  CMFCRibbonBaseElement *pCVar11;
  CStringT<wchar_t,StrTraitMFC<wchar_t,ATL::ChTraitsCRT<wchar_t>_>_> *this_02;
  HWND__ *hWnd;
  int *local_220;
  int local_21c;
  HWND__ *local_218;
  WCHAR local_214 [262];
  undefined4 local_8;
  undefined4 uStack_4;
  
  uStack_4 = 0x220;
  local_8 = 0x100d7817;
  if (0 < *(int *)(this + 0x150)) {
    local_21c = 0;
    do {
      iVar10 = local_21c;
      local_218 = (HWND__ *)(*(int *)(this + 0x1b8) + -1);
      local_220 = (int *)FUN_1009f8c7(local_218);
      local_220 = (int *)*local_220;
      if (local_220 != (int *)0x0) {
        pcVar1 = *(code **)(*local_220 + 4);
        guard_check_icall(1);
        (*pcVar1)();
        iVar10 = local_21c;
      }
      FUN_100da58b(local_218,1);
      local_21c = iVar10 + 1;
    } while (local_21c < *(int *)(this + 0x150));
  }
  pCVar11 = (CMFCRibbonBaseElement *)0x0;
  *(undefined4 *)(this + 0x150) = 0;
  this_00 = CMFCRibbonBaseElement::GetTopLevelRibbonBar((CMFCRibbonBaseElement *)this);
  if (this_00 != (CMFCRibbonBar *)0x0) {
    pCVar3 = CWnd::GetTopLevelFrame((CWnd *)this_00);
    pCVar4 = AfxDynamicDownCast((CRuntimeClass *)&PTR_s_CMDIFrameWndEx_101bd3e8,(CObject *)pCVar3);
    if (pCVar4 != (CObject *)0x0) {
      local_218 = GetWindow(*(HWND *)(pCVar4 + 0x120),5);
      for (local_21c = 0; (hWnd = local_218, local_218 != (HWND__ *)0x0 && (local_21c < 9));
          local_21c = local_21c + 1) {
        pCVar5 = CWnd::FromHandle(local_218);
        pCVar6 = AfxDynamicDownCast((CRuntimeClass *)&PTR_s_CMDIChildWndEx_101be2ec,
                                    (CObject *)pCVar5);
        if (pCVar6 == (CObject *)0x0) {
LAB_100d7913:
          local_218 = GetWindow(hWnd,2);
        }
        else {
          pcVar1 = *(code **)(*(int *)pCVar6 + 0x1e8);
          guard_check_icall();
          iVar7 = (*pcVar1)();
          iVar10 = local_21c;
          hWnd = local_218;
          if (iVar7 == 0) goto LAB_100d7913;
          if (local_21c == 0) {
            this_01 = (CMFCRibbonSeparator *)FUN_1001cfa0(0x110);
            local_8 = 0;
            if (this_01 == (CMFCRibbonSeparator *)0x0) {
              pCVar8 = (CMFCRibbonBaseElement *)0x0;
            }
            else {
              pCVar8 = (CMFCRibbonBaseElement *)CMFCRibbonSeparator::CMFCRibbonSeparator(this_01,1);
            }
            local_8 = 0xffffffff;
            *(undefined4 *)(pCVar8 + 0xec) = 1;
            AddSubItem(this,pCVar8,-1);
            *(undefined4 *)(this + 0x150) = 1;
          }
          GetWindowTextW(local_218,local_214,0x100);
          uVar9 = FUN_1001e20a();
          FUN_1001d224(uVar9);
          local_8 = 1;
          ATL::CStringT<wchar_t,StrTraitMFC<wchar_t,ATL::ChTraitsCRT<wchar_t>_>_>::Format
                    (this_02,(wchar_t *)&local_220,L"&%d %Ts",iVar10 + 1,local_214);
          iVar10 = FUN_1001cfa0(0x1c4);
          piVar2 = local_220;
          local_8._0_1_ = 2;
          if (iVar10 == 0) {
            pCVar8 = (CMFCRibbonBaseElement *)0x0;
          }
          else {
            pCVar8 = (CMFCRibbonBaseElement *)
                     ::CMFCRibbonButton(0xff00,local_220,0xffffffff,0xffffffff,0);
          }
          *(HWND__ **)(pCVar8 + 0xa0) = local_218;
          *(undefined4 *)(pCVar8 + 0xec) = 1;
          *(undefined4 *)(pCVar8 + 0x84) = *(undefined4 *)(this + 0x84);
          local_8 = CONCAT31(local_8._1_3_,1);
          AddSubItem(this,pCVar8,-1);
          local_218 = GetWindow(local_218,2);
          *(int *)(this + 0x150) = *(int *)(this + 0x150) + 1;
          local_8 = 0xffffffff;
          ATL::CStringData::Release((CStringData *)(piVar2 + -4));
        }
      }
      if ((*(int *)(pCVar4 + 0x130) != 0) && ((local_21c == 9 || (*(int *)(pCVar4 + 0x140) != 0))))
      {
        iVar10 = FUN_1001cfa0(0x1c4);
        local_8 = 3;
        if (iVar10 != 0) {
          pCVar11 = (CMFCRibbonBaseElement *)
                    ::CMFCRibbonButton(*(undefined4 *)(pCVar4 + 0x130),
                                       *(undefined4 *)(pCVar4 + 0x128),0xffffffff,0xffffffff,0);
        }
        local_8 = 0xffffffff;
        *(undefined4 *)(pCVar11 + 0xec) = 1;
        *(undefined4 *)(pCVar11 + 0x84) = *(undefined4 *)(this + 0x84);
        AddSubItem(this,pCVar11,-1);
        *(int *)(this + 0x150) = *(int *)(this + 0x150) + 1;
      }
    }
  }
  FUN_10154478();
  return;
}

