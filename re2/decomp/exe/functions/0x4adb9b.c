// rea decompile_all
// name: CMFCRibbonPanelMenuBar::CalcSize
// address: 0x4adb9b
// body: available
// range: 0x4adb9b-0x4ae030 inclusive
// non_contiguous: false
// provider: Ghidra 12.1.2 (ghidra)
// analysis_profile: ac6d50be2cdf54f7005df47d1ed7e7ef55dee595681eb1b7c2e0b00d70cd697d
// limitations: The session serves operations only after Ghidra reports default auto-analysis complete; incomplete analysis does not expose partial results.; The imported Program and temporary project are ephemeral and deleted on close. Annotation operations edit session database metadata; original executable bytes are never written.; Cancelling an active Ghidra request terminates its ephemeral database and discards session annotations. The selected target remains open; the next provider query imports the original artifact again.; Default-space addresses use lowercase 0x-prefixed hexadecimal; other address spaces use <percent-encoded-space>:0x<hex>.; Ghidra Listing reports a terminal call at 0x4adc14 to 0x429127 FUN_00429127 (external=false, thunk=false, hasNoReturn=true); fallthrough is excluded by Ghidra's flow model. This records Ghidra's FunctionManager flag, not an independent verification that the callee cannot return.; The Ghidra Program references PDB ISPToolForMsi.pdb (GUID b8f2ac8f-1d6f-438d-800f-ed4a14426ac6, age (hex) 1, signature unknown, version RSDS); Ghidra reports load state unknown. Original names and types may be missing; an empty name search does not prove a procedure is absent. Use list_procedures and address-based analysis to inspect recovered functions. REA does not admit a caller-selected PDB companion.; This session uses Ghidra 12.1.2. The bridge is verified against 12.1.4; other 12.1.x builds are accepted and the observed version is reported.; Pseudocode is Ghidra decompiler output, not original source and not text-equivalent to Hopper output.; External functions and functions without an analyzable body return null; other decompiler failures remain explicit.
// pseudocode: provider-specific; not original source


/* WARNING: Function: __EH_prolog3_GS replaced with injection: EH_prolog3 */
/* Library Function - Single Match
    public: virtual class CSize __thiscall CMFCRibbonPanelMenuBar::CalcSize(int)
   
   Library: Visual Studio 2015 Release */

void __thiscall CMFCRibbonPanelMenuBar::CalcSize(CMFCRibbonPanelMenuBar *this,int param_1)

{
  code *pcVar1;
  CFont *pCVar2;
  int iVar3;
  HWND pHVar4;
  CWnd *pCVar5;
  CObject *pCVar6;
  AFX_MODULE_STATE *pAVar7;
  int iVar8;
  int *piVar9;
  CMFCRibbonBaseElement *pCVar10;
  int *piVar11;
  int iVar12;
  CPen *pCVar13;
  CClientDC local_54 [20];
  CPen *local_40;
  int local_3c;
  CWaitCursor local_35;
  int *local_34;
  int local_30;
  int *local_2c;
  CPen *local_28;
  CPen *local_24;
  CPen *local_20;
  int local_1c;
  int local_18;
  int local_8;
  undefined4 uStack_4;
  
  uStack_4 = 0x44;
  local_8 = 0x4adba7;
  local_34 = (int *)param_1;
  local_3c = 0;
  if (*(int *)(this + 0xeb4) != 0) {
    *(undefined4 *)param_1 = *(undefined4 *)(this + 0xe00);
    *(undefined4 *)(param_1 + 4) = *(undefined4 *)(this + 0xe04);
    goto LAB_004ae027;
  }
  *(undefined4 *)(*(int *)(this + 0xea4) + 0x84) = *(undefined4 *)(this + 0xde0);
  CClientDC::CClientDC(local_54,*(CWnd **)(this + 0xea0));
  local_8 = 0;
  pCVar2 = CWnd::GetFont(*(CWnd **)(this + 0xea0));
  local_28 = CDC::SelectObject((CDC *)local_54,(CPen *)pCVar2);
  if (local_28 == (CPen *)0x0) goto LAB_004adc14;
  if (*(int *)(this + 0xdd8) == 0) {
    local_40 = (CPen *)0x7fff;
    if ((*(int *)(this + 0xdd4) != 0) && (*(int *)(*(int *)(this + 0xea4) + 0x4d0) == 0)) {
      pAVar7 = AfxGetModuleState();
      CCmdTarget::BeginWaitCursor(*(CCmdTarget **)(pAVar7 + 4));
      local_8._0_1_ = 1;
      pcVar1 = *(code **)(**(int **)(this + 0xea4) + 200);
      guard_check_icall(local_54,0x7fff);
      (*pcVar1)();
      local_8 = (uint)local_8._1_3_ << 8;
      CWaitCursor::~CWaitCursor(&local_35);
    }
    piVar11 = local_34;
    local_2c = *(int **)(this + 0xea4);
    local_30 = local_2c[0x134];
    if (local_30 == 0) {
      CDC::SelectObject((CDC *)local_54,local_28);
      *piVar11 = 10;
      iVar8 = 10;
    }
    else {
      if ((local_2c[0x1c] == 0) || (local_2c[0x20] != 0)) {
LAB_004ade1c:
        if (*(int *)(this + 0xde0) == 0) {
          piVar11 = *(int **)(this + 0xea4);
          if (piVar11[0x20] == 0) {
            if (piVar11[0x134] < 1) goto LAB_004adc14;
            local_1c = *(int *)piVar11[0x133] + piVar11[0x2c] * 4;
            local_18 = *(int *)(*(int *)(this + 0xea0) + 700) + piVar11[0x2d] * -2;
          }
          else {
            piVar9 = (int *)FUN_004ab4cd(2 < local_30);
            piVar11 = *(int **)(this + 0xea4);
            local_1c = *piVar9 + piVar11[0x2c] * 4;
            local_18 = 0x7fff;
          }
          goto LAB_004adef0;
        }
        local_2c = *(int **)(this + 0xea4);
        if (local_2c[0x134] < 1) {
LAB_004adc14:
                    /* WARNING: Subroutine does not return */
          FUN_00429127();
        }
        local_24 = (CPen *)0x0;
        local_20 = (CPen *)0x0;
        local_18 = 0x7fff;
        local_1c = *(int *)local_2c[0x133] + local_2c[0x2c] * 2;
        pcVar1 = *(code **)(*local_2c + 0xec);
        guard_check_icall(local_54,&local_24);
        (*pcVar1)();
      }
      else {
        pcVar1 = *(code **)(*local_2c + 0xe4);
        guard_check_icall();
        iVar8 = (*pcVar1)();
        if (iVar8 != 0) goto LAB_004ade1c;
        local_1c = 0x7fff;
        piVar11 = *(int **)(this + 0xea4);
        local_18 = *(int *)(*(int *)(this + 0xea0) + 700) + piVar11[0x2d] * -2;
LAB_004adef0:
        local_20 = (CPen *)0x0;
        pcVar1 = *(code **)(*piVar11 + 0xec);
        local_24 = local_20;
        guard_check_icall(local_54,&local_24);
        (*pcVar1)();
      }
      pCVar13 = (CPen *)0x7fff;
      iVar8 = *(int *)(this + 0xea4);
      local_2c = (int *)(*(int *)(iVar8 + 0xd4) - *(int *)(iVar8 + 0xcc));
      local_30 = *(int *)(iVar8 + 0xd8) - *(int *)(iVar8 + 0xd0);
      CDC::SelectObject((CDC *)local_54,local_28);
      if (((*(int *)(this + 0xdd4) != 0) && (iVar8 = FUN_00474f05(), 0 < iVar8)) &&
         (*(int *)(this + 0xde0) == 0)) {
        piVar11 = (int *)0x0;
        local_28 = (CPen *)0x7fff;
        local_30 = 0;
        local_2c = (int *)0x0;
        iVar8 = FUN_00474f05();
        if (0 < iVar8) {
          do {
            pCVar10 = CMFCRibbonPanel::GetElement(*(CMFCRibbonPanel **)(this + 0xea4),(int)piVar11);
            local_24 = *(CPen **)(pCVar10 + 0x74);
            local_20 = *(CPen **)(pCVar10 + 0x78);
            local_1c = *(int *)(pCVar10 + 0x7c);
            local_18 = *(int *)(pCVar10 + 0x80);
            if ((int)local_24 <= (int)local_40) {
              local_40 = local_24;
            }
            pCVar13 = local_40;
            if ((int)local_20 <= (int)local_28) {
              local_28 = local_20;
            }
            if (local_3c <= local_1c) {
              local_3c = local_1c;
            }
            if (local_30 <= local_18) {
              local_30 = local_18;
            }
            piVar11 = (int *)((int)local_2c + 1);
            local_2c = piVar11;
            iVar8 = FUN_00474f05();
          } while ((int)piVar11 < iVar8);
        }
        iVar8 = *(int *)(*(int *)(this + 0xea4) + 0xb4);
        *local_34 = (*(int *)(*(int *)(this + 0xea4) + 0xb0) * 2 - (int)pCVar13) + local_3c;
        local_34[1] = (iVar8 * 2 - (int)local_28) + local_30;
        goto LAB_004ae01f;
      }
      *local_34 = (int)local_2c;
      iVar8 = local_30;
      piVar11 = local_34;
    }
    piVar11[1] = iVar8;
  }
  else {
    local_24 = (CPen *)0x0;
    local_20 = (CPen *)0x0;
    *(undefined4 *)(*(int *)(this + 0xea4) + 0x78) = 1;
    *(undefined4 *)(*(int *)(this + 0xea4) + 0x7c) = *(undefined4 *)(this + 0xddc);
    local_1c = *(int *)(this + 0xdf8);
    local_18 = *(int *)(this + 0xdfc);
    pcVar1 = *(code **)(**(int **)(this + 0xea4) + 0xec);
    guard_check_icall(local_54,&local_24);
    (*pcVar1)();
    CDC::SelectObject((CDC *)local_54,local_28);
    iVar8 = *(int *)(this + 0xea4);
    local_28 = (CPen *)(*(int *)(iVar8 + 0xd4) - *(int *)(iVar8 + 0xcc));
    iVar12 = *(int *)(iVar8 + 0xd8) - *(int *)(iVar8 + 0xd0);
    iVar3 = CSize::operator!=((CSize *)(this + 0xdf8),(tagSIZE)0x0);
    if (iVar3 != 0) {
      if ((int)local_28 < (int)*(CPen **)(this + 0xdf8)) {
        local_28 = *(CPen **)(this + 0xdf8);
      }
      iVar3 = *(int *)(this + 0xdfc);
      if (iVar3 < 1) {
        iVar12 = *(int *)(iVar8 + 0xd8) - *(int *)(iVar8 + 0xd0);
      }
      else if (*(int *)(iVar8 + 0x110) == 0) {
        if (iVar3 < iVar12) {
          pHVar4 = GetParent(*(HWND *)(this + 0x20));
          pCVar5 = CWnd::FromHandle(pHVar4);
          pCVar6 = AfxDynamicDownCast((CRuntimeClass *)&PTR_s_CMFCPopupMenu_0060c808,
                                      (CObject *)pCVar5);
          if (pCVar6 != (CObject *)0x0) {
            *(undefined4 *)(pCVar6 + 0xf7c) = 1;
          }
        }
        iVar12 = *(int *)(this + 0xdfc);
      }
      else if (iVar12 <= iVar3) {
        iVar12 = iVar3;
      }
    }
    *local_34 = (int)local_28;
    local_34[1] = iVar12;
  }
LAB_004ae01f:
  CClientDC::~CClientDC(local_54);
LAB_004ae027:
  FUN_0055bae6();
  return;
}

