// rea decompile_all
// name: CMFCVisualManagerOffice2007::OnFillButtonInterior
// address: 0x100d1c30
// body: available
// range: 0x100d1c30-0x100d1ed4 inclusive
// non_contiguous: false
// provider: Ghidra 12.1.2 (ghidra)
// analysis_profile: b075844f08879296d957518397cd0ddda73db81dce53d00d3f0e702766fc2af6
// limitations: The session serves operations only after Ghidra reports default auto-analysis complete; incomplete analysis does not expose partial results.; The imported Program and temporary project are ephemeral and deleted on close. Annotation operations edit session database metadata; original executable bytes are never written.; Cancelling an active Ghidra request terminates its ephemeral database and discards session annotations. The selected target remains open; the next provider query imports the original artifact again.; Default-space addresses use lowercase 0x-prefixed hexadecimal; other address spaces use <percent-encoded-space>:0x<hex>.; The Ghidra Program references PDB WinIspPlugIn.pdb (GUID d9f398c7-6c98-49a8-af25-a0659d5ad2f3, age (hex) 1, signature unknown, version RSDS); Ghidra reports load state unknown. Original names and types may be missing; an empty name search does not prove a procedure is absent. Use list_procedures and address-based analysis to inspect recovered functions. REA does not admit a caller-selected PDB companion.; This session uses Ghidra 12.1.2. The bridge is verified against 12.1.4; other 12.1.x builds are accepted and the observed version is reported.; Pseudocode is Ghidra decompiler output, not original source and not text-equivalent to Hopper output.; External functions and functions without an analyzable body return null; other decompiler failures remain explicit.
// pseudocode: provider-specific; not original source


/* Library Function - Single Match
    public: virtual void __thiscall CMFCVisualManagerOffice2007::OnFillButtonInterior(class CDC
   *,class CMFCToolBarButton *,class CRect,enum CMFCVisualManager::AFX_BUTTON_STATE)
   
   Library: Visual Studio 2015 Release */

void __thiscall
CMFCVisualManagerOffice2007::OnFillButtonInterior
          (CMFCVisualManagerOffice2007 *this,undefined4 param_1,CObject *param_2,undefined4 param_4,
          undefined4 param_5,undefined4 param_6,int param_7,int param_8)

{
  uint uVar1;
  code *pcVar2;
  int iVar3;
  CObject *pCVar4;
  uint uVar5;
  CObject *pCVar6;
  CMFCVisualManagerOffice2007 *pCVar7;
  uint uVar8;
  uint uVar9;
  
  iVar3 = CanDrawImage(this);
  if ((iVar3 == 0) ||
     (pCVar4 = AfxDynamicDownCast((CRuntimeClass *)&PTR_s_CMFCCustomizeButton_1023daac,param_2),
     pCVar4 != (CObject *)0x0)) goto LAB_100d1e51;
  if ((DAT_10245ca8 != 0) && ((DAT_10245cac == 0 && (*(int *)(param_2 + 0x3c) == 0)))) {
    return;
  }
  uVar1 = *(uint *)(param_2 + 0x24);
  uVar9 = 0;
  uVar5 = uVar1 >> 0x10 & 1;
  uVar8 = uVar1 >> 0x12 & 1;
  pCVar4 = AfxDynamicDownCast((CRuntimeClass *)&PTR_s_CBasePane_101de5b4,
                              *(CObject **)(param_2 + 0x6c));
  pCVar6 = AfxDynamicDownCast((CRuntimeClass *)&PTR_s_CMFCToolBarMenuButton_1023d9fc,param_2);
  if (pCVar6 == (CObject *)0x0) {
    if (pCVar4 != (CObject *)0x0) {
      iVar3 = FUN_10051e53(&PTR_s_CMFCColorBar_1023d7a8);
      if (iVar3 != 0) {
        if (uVar5 == 0) {
          pCVar7 = (CMFCVisualManagerOffice2007 *)0x0;
LAB_100d1e1d:
          if (uVar8 != 0) goto LAB_100d1eaa;
        }
        else {
          pCVar7 = this + 0x29b0;
          if (uVar8 != 0) {
            uVar9 = 1;
            goto LAB_100d1e1d;
          }
        }
        if (param_8 == 2) {
          pCVar7 = this + 0x2ca0;
          uVar9 = 0;
        }
        goto LAB_100d1eaa;
      }
      iVar3 = FUN_10051e53(&PTR_s_CMFCOutlookBarToolBar_101f1ddc);
      if (iVar3 != 0) goto LAB_100d1e51;
    }
LAB_100d1dd4:
    uVar9 = 0xffffffff;
    if (uVar5 != 0) {
      if (uVar8 == 0) {
        if ((param_8 == 1) || (param_8 == 2)) {
          uVar9 = 3;
        }
      }
      else {
        uVar9 = 0;
      }
    }
    if (uVar8 == 0) {
      if ((uVar1 & 0x20000) == 0) {
        if (param_8 == 2) {
          uVar9 = (uVar9 & -(uint)(uVar9 != 0xffffffff)) + 1;
        }
        goto LAB_100d1e9c;
      }
      uVar9 = 2;
    }
    else {
LAB_100d1e9c:
      if (uVar9 == 0xffffffff) {
        return;
      }
    }
    pCVar7 = this + 0x33f8;
  }
  else {
    if (pCVar4 == (CObject *)0x0) goto LAB_100d1dd4;
    iVar3 = FUN_10051e53(&PTR_s_CMFCMenuBar_1023dad8);
    if (iVar3 == 0) {
      iVar3 = FUN_10051e53(&PTR_s_CMFCPopupMenuBar_1023d928);
      if (iVar3 == 0) {
        iVar3 = FUN_10051e53(&PTR_s_CMFCToolBar_1023d640);
        if (iVar3 != 0) {
          pcVar2 = *(code **)(*(int *)pCVar6 + 0x70);
          guard_check_icall();
          iVar3 = (*pcVar2)();
          if (iVar3 != 0) {
            pcVar2 = *(code **)(*(int *)this + 0x30c);
            guard_check_icall(pCVar6,&param_4);
            (*pcVar2)();
          }
        }
        goto LAB_100d1dd4;
      }
      if (uVar5 == 0) {
        if ((param_8 != 1) && (param_8 != 2)) {
          return;
        }
        pCVar7 = this + uVar8 * 0x178 + 0x2ca0;
      }
      else {
        param_7 = param_7 + 1;
        pCVar7 = this + 0x29b0;
        uVar9 = uVar8;
      }
    }
    else {
      if ((param_8 != 1) && (param_8 != 2)) {
        return;
      }
      pcVar2 = *(code **)(*(int *)pCVar6 + 0x70);
      guard_check_icall();
      iVar3 = (*pcVar2)();
      if (iVar3 != 0) {
        pcVar2 = *(code **)(*(int *)this + 0x30c);
        guard_check_icall(pCVar6,&param_4);
        (*pcVar2)();
      }
      pCVar7 = this + 0x2838;
      uVar9 = (uint)(iVar3 != 0);
    }
  }
LAB_100d1eaa:
  if (pCVar7 != (CMFCVisualManagerOffice2007 *)0x0) {
    iVar3 = *(int *)pCVar7;
    guard_check_icall(param_1,param_4,param_5,param_6,param_7,uVar9,0xff);
    (**(code **)(iVar3 + 0x10))();
    return;
  }
LAB_100d1e51:
  CMFCVisualManagerOffice2003::OnFillButtonInterior
            ((CMFCVisualManagerOffice2003 *)this,param_1,param_2,param_4,param_5,param_6,param_7,
             param_8);
  return;
}

