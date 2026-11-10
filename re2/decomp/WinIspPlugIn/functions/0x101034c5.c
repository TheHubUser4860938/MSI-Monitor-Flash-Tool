// rea decompile_all
// name: CMFCRibbonButton::FillWindowList
// address: 0x101034c5
// body: available
// range: 0x101034c5-0x101037cf inclusive
// non_contiguous: false
// provider: Ghidra 12.1.2 (ghidra)
// analysis_profile: b075844f08879296d957518397cd0ddda73db81dce53d00d3f0e702766fc2af6
// limitations: The session serves operations only after Ghidra reports default auto-analysis complete; incomplete analysis does not expose partial results.; The imported Program and temporary project are ephemeral and deleted on close. Annotation operations edit session database metadata; original executable bytes are never written.; Cancelling an active Ghidra request terminates its ephemeral database and discards session annotations. The selected target remains open; the next provider query imports the original artifact again.; Default-space addresses use lowercase 0x-prefixed hexadecimal; other address spaces use <percent-encoded-space>:0x<hex>.; The Ghidra Program references PDB WinIspPlugIn.pdb (GUID d9f398c7-6c98-49a8-af25-a0659d5ad2f3, age (hex) 1, signature unknown, version RSDS); Ghidra reports load state unknown. Original names and types may be missing; an empty name search does not prove a procedure is absent. Use list_procedures and address-based analysis to inspect recovered functions. REA does not admit a caller-selected PDB companion.; This session uses Ghidra 12.1.2. The bridge is verified against 12.1.4; other 12.1.x builds are accepted and the observed version is reported.; Pseudocode is Ghidra decompiler output, not original source and not text-equivalent to Hopper output.; External functions and functions without an analyzable body return null; other decompiler failures remain explicit.
// pseudocode: provider-specific; not original source


/* WARNING: Function: __EH_prolog3_GS replaced with injection: EH_prolog3 */
/* Library Function - Single Match
    protected: void __thiscall CMFCRibbonButton::FillWindowList(void)
   
   Library: Visual Studio 2015 Release */

void __thiscall CMFCRibbonButton::FillWindowList(CMFCRibbonButton *this)

{
  code *pcVar1;
  CMFCRibbonBar *this_00;
  CFrameWnd *pCVar2;
  CObject *pCVar3;
  CWnd *pCVar4;
  CObject *pCVar5;
  int iVar6;
  CMFCRibbonSeparator *this_01;
  CMFCRibbonBaseElement *pCVar7;
  undefined4 uVar8;
  int iVar9;
  CMFCRibbonBaseElement *pCVar10;
  CStringT<wchar_t,StrTraitMFC<wchar_t,ATL::ChTraitsCRT<wchar_t>_>_> *this_02;
  HWND__ *hWnd;
  int *local_220;
  int local_21c;
  HWND__ *local_218;
  WCHAR local_214 [262];
  undefined4 local_8;
  undefined4 uStack_4;
  
  uStack_4 = 0x220;
  local_8 = 0x101034d4;
  if (0 < *(int *)(this + 0x150)) {
    local_21c = 0;
    do {
      iVar9 = local_21c;
      local_218 = (HWND__ *)(*(int *)(this + 0x1b8) + -1);
      local_220 = (int *)FUN_100efaed(local_218);
      local_220 = (int *)*local_220;
      if (local_220 != (int *)0x0) {
        pcVar1 = *(code **)(*local_220 + 4);
        guard_check_icall(1);
        (*pcVar1)();
        iVar9 = local_21c;
      }
      FUN_1010631c(local_218,1);
      local_21c = iVar9 + 1;
    } while (local_21c < *(int *)(this + 0x150));
  }
  pCVar10 = (CMFCRibbonBaseElement *)0x0;
  *(undefined4 *)(this + 0x150) = 0;
  this_00 = CMFCRibbonBaseElement::GetTopLevelRibbonBar((CMFCRibbonBaseElement *)this);
  if (this_00 != (CMFCRibbonBar *)0x0) {
    pCVar2 = CWnd::GetTopLevelFrame((CWnd *)this_00);
    pCVar3 = AfxDynamicDownCast((CRuntimeClass *)&PTR_s_CMDIFrameWndEx_101e9630,(CObject *)pCVar2);
    if (pCVar3 != (CObject *)0x0) {
      local_218 = GetWindow(*(HWND *)(pCVar3 + 0x120),5);
      for (local_21c = 0; (hWnd = local_218, local_218 != (HWND__ *)0x0 && (local_21c < 9));
          local_21c = local_21c + 1) {
        pCVar4 = CWnd::FromHandle(local_218);
        pCVar5 = AfxDynamicDownCast((CRuntimeClass *)&PTR_s_CMDIChildWndEx_101ea534,
                                    (CObject *)pCVar4);
        if (pCVar5 == (CObject *)0x0) {
LAB_101035d0:
          local_218 = GetWindow(hWnd,2);
        }
        else {
          pcVar1 = *(code **)(*(int *)pCVar5 + 0x1e8);
          guard_check_icall();
          iVar6 = (*pcVar1)();
          iVar9 = local_21c;
          hWnd = local_218;
          if (iVar6 == 0) goto LAB_101035d0;
          if (local_21c == 0) {
            this_01 = (CMFCRibbonSeparator *)FUN_100491ae(0x110);
            local_8 = 0;
            if (this_01 == (CMFCRibbonSeparator *)0x0) {
              pCVar7 = (CMFCRibbonBaseElement *)0x0;
            }
            else {
              pCVar7 = (CMFCRibbonBaseElement *)CMFCRibbonSeparator::CMFCRibbonSeparator(this_01,1);
            }
            local_8 = 0xffffffff;
            *(undefined4 *)(pCVar7 + 0xec) = 1;
            AddSubItem(this,pCVar7,-1);
            *(undefined4 *)(this + 0x150) = 1;
          }
          GetWindowTextW(local_218,local_214,0x100);
          uVar8 = FUN_10049868();
          FUN_100476a0(uVar8);
          local_8 = 1;
          ATL::CStringT<wchar_t,StrTraitMFC<wchar_t,ATL::ChTraitsCRT<wchar_t>_>_>::Format
                    (this_02,(wchar_t *)&local_220,L"&%d %Ts",iVar9 + 1,local_214);
          iVar9 = FUN_100491ae(0x1c4);
          local_8._0_1_ = 2;
          if (iVar9 == 0) {
            pCVar7 = (CMFCRibbonBaseElement *)0x0;
          }
          else {
            pCVar7 = (CMFCRibbonBaseElement *)
                     ::CMFCRibbonButton(0xff00,local_220,0xffffffff,0xffffffff,0);
          }
          *(HWND__ **)(pCVar7 + 0xa0) = local_218;
          *(undefined4 *)(pCVar7 + 0xec) = 1;
          *(undefined4 *)(pCVar7 + 0x84) = *(undefined4 *)(this + 0x84);
          local_8 = CONCAT31(local_8._1_3_,1);
          AddSubItem(this,pCVar7,-1);
          local_218 = GetWindow(local_218,2);
          *(int *)(this + 0x150) = *(int *)(this + 0x150) + 1;
          local_8 = 0xffffffff;
          FUN_100476d0();
        }
      }
      if ((*(int *)(pCVar3 + 0x130) != 0) && ((local_21c == 9 || (*(int *)(pCVar3 + 0x140) != 0))))
      {
        iVar9 = FUN_100491ae(0x1c4);
        local_8 = 3;
        if (iVar9 != 0) {
          pCVar10 = (CMFCRibbonBaseElement *)
                    ::CMFCRibbonButton(*(undefined4 *)(pCVar3 + 0x130),
                                       *(undefined4 *)(pCVar3 + 0x128),0xffffffff,0xffffffff,0);
        }
        local_8 = 0xffffffff;
        *(undefined4 *)(pCVar10 + 0xec) = 1;
        *(undefined4 *)(pCVar10 + 0x84) = *(undefined4 *)(this + 0x84);
        AddSubItem(this,pCVar10,-1);
        *(int *)(this + 0x150) = *(int *)(this + 0x150) + 1;
      }
    }
  }
  FUN_1018015d();
  return;
}

