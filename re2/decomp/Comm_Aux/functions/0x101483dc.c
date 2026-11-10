// rea decompile_all
// name: CMFCVisualManagerOffice2003::OnDrawBarGripper
// address: 0x101483dc
// body: available
// range: 0x101483dc-0x101485e4 inclusive
// non_contiguous: false
// provider: Ghidra 12.1.2 (ghidra)
// analysis_profile: b075844f08879296d957518397cd0ddda73db81dce53d00d3f0e702766fc2af6
// limitations: The session serves operations only after Ghidra reports default auto-analysis complete; incomplete analysis does not expose partial results.; The imported Program and temporary project are ephemeral and deleted on close. Annotation operations edit session database metadata; original executable bytes are never written.; Cancelling an active Ghidra request terminates its ephemeral database and discards session annotations. The selected target remains open; the next provider query imports the original artifact again.; Default-space addresses use lowercase 0x-prefixed hexadecimal; other address spaces use <percent-encoded-space>:0x<hex>.; The Ghidra Program references PDB Comm_Aux.pdb (GUID ba7920cc-daa3-4461-a102-1f8f66c67a2a, age (hex) 1, signature unknown, version RSDS); Ghidra reports load state unknown. Original names and types may be missing; an empty name search does not prove a procedure is absent. Use list_procedures and address-based analysis to inspect recovered functions. REA does not admit a caller-selected PDB companion.; This session uses Ghidra 12.1.2. The bridge is verified against 12.1.4; other 12.1.x builds are accepted and the observed version is reported.; Pseudocode is Ghidra decompiler output, not original source and not text-equivalent to Hopper output.; External functions and functions without an analyzable body return null; other decompiler failures remain explicit.
// pseudocode: provider-specific; not original source


/* Library Function - Single Match
    public: virtual void __thiscall CMFCVisualManagerOffice2003::OnDrawBarGripper(class CDC *,class
   CRect,int,class CBasePane *)
   
   Library: Visual Studio 2015 Release */

void __thiscall
CMFCVisualManagerOffice2003::OnDrawBarGripper
          (CMFCVisualManagerOffice2003 *this,CDC *param_1,int param_3,int param_4,int param_5,
          int param_6,int param_7,CObject *param_8)

{
  code *pcVar1;
  int iVar2;
  AFX_GLOBAL_DATA *pAVar3;
  CObject *pCVar4;
  int iVar5;
  int iVar6;
  int *piVar7;
  int iVar8;
  int local_10;
  
  pCVar4 = param_8;
  if (((param_8 == (CObject *)0x0) || (*(int *)(param_8 + 0x8c) == 0)) &&
     (pAVar3 = GetGlobalData(), iVar2 = param_7, 8 < *(int *)(pAVar3 + 0x1ac))) {
    if (param_7 == 0) {
      param_4 = param_6 + -4;
    }
    else {
      param_3 = param_5 + -4;
    }
    pCVar4 = AfxDynamicDownCast((CRuntimeClass *)&PTR_s_CMFCToolBar_10205ab0,pCVar4);
    if (pCVar4 != (CObject *)0x0) {
      if (iVar2 == 0) {
        if (DAT_1020e508 == 0) {
          piVar7 = (int *)CMFCToolBar::GetButtonSize((CMFCToolBar *)pCVar4);
          iVar5 = *piVar7;
        }
        else {
          pcVar1 = *(code **)(*(int *)pCVar4 + 0x358);
          guard_check_icall();
          iVar5 = (*pcVar1)();
        }
        piVar7 = (int *)CMFCToolBar::GetImageSize((CMFCToolBar *)pCVar4);
        if ((iVar5 - *piVar7) / 2 < 0) {
          iVar5 = 0;
        }
        else {
          piVar7 = (int *)CMFCToolBar::GetImageSize((CMFCToolBar *)pCVar4);
          iVar5 = (iVar5 - *piVar7) / 2;
        }
        iVar6 = 0;
        iVar5 = -iVar5;
      }
      else {
        if (DAT_1020e508 == 0) {
          iVar5 = CMFCToolBar::GetButtonSize((CMFCToolBar *)pCVar4);
          iVar5 = *(int *)(iVar5 + 4);
        }
        else {
          pcVar1 = *(code **)(*(int *)pCVar4 + 0x354);
          guard_check_icall();
          iVar5 = (*pcVar1)();
        }
        iVar6 = CMFCToolBar::GetImageSize((CMFCToolBar *)pCVar4);
        if ((iVar5 - *(int *)(iVar6 + 4)) / 2 < 0) {
          iVar6 = 0;
        }
        else {
          iVar6 = CMFCToolBar::GetImageSize((CMFCToolBar *)pCVar4);
          iVar6 = (iVar5 - *(int *)(iVar6 + 4)) / 2;
        }
        iVar6 = -iVar6;
        iVar5 = 0;
      }
      InflateRect((LPRECT)&param_3,iVar5,iVar6);
    }
    if (iVar2 == 0) {
      iVar5 = param_5 - param_3;
    }
    else {
      iVar5 = param_6 - param_4;
    }
    local_10 = (int)(iVar5 + -4 + (iVar5 + -4 >> 0x1f & 3U)) >> 2;
    if (iVar2 == 0) {
      iVar5 = (param_5 + local_10 * -4) - param_3;
    }
    else {
      iVar5 = (param_6 + local_10 * -4) - param_4;
    }
    iVar5 = iVar5 / 2;
    if (0 < local_10) {
      do {
        if (iVar2 == 0) {
          iVar6 = param_3 + iVar5;
          iVar8 = param_4;
        }
        else {
          iVar8 = param_4 + iVar5;
          iVar6 = param_3;
        }
        pAVar3 = GetGlobalData();
        CDC::FillSolidRect(param_1,iVar6 + 1,iVar8 + 1,2,2,*(ulong *)(pAVar3 + 0x24));
        CDC::FillSolidRect(param_1,iVar6,iVar8,2,2,*(ulong *)(this + 0x1a8));
        iVar5 = iVar5 + 4;
        local_10 = local_10 + -1;
      } while (local_10 != 0);
    }
  }
  else {
    CMFCVisualManagerOfficeXP::OnDrawBarGripper
              ((CMFCVisualManagerOfficeXP *)this,param_1,param_3,param_4,param_5,param_6,param_7,
               pCVar4);
  }
  return;
}

