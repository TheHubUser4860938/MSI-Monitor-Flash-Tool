// rea decompile_all
// name: CMFCVisualManagerOffice2007::OnDrawBarGripper
// address: 0x100cb47d
// body: available
// range: 0x100cb47d-0x100cb704 inclusive
// non_contiguous: false
// provider: Ghidra 12.1.2 (ghidra)
// analysis_profile: b075844f08879296d957518397cd0ddda73db81dce53d00d3f0e702766fc2af6
// limitations: The session serves operations only after Ghidra reports default auto-analysis complete; incomplete analysis does not expose partial results.; The imported Program and temporary project are ephemeral and deleted on close. Annotation operations edit session database metadata; original executable bytes are never written.; Cancelling an active Ghidra request terminates its ephemeral database and discards session annotations. The selected target remains open; the next provider query imports the original artifact again.; Default-space addresses use lowercase 0x-prefixed hexadecimal; other address spaces use <percent-encoded-space>:0x<hex>.; The Ghidra Program references PDB Comm_Aux.pdb (GUID ba7920cc-daa3-4461-a102-1f8f66c67a2a, age (hex) 1, signature unknown, version RSDS); Ghidra reports load state unknown. Original names and types may be missing; an empty name search does not prove a procedure is absent. Use list_procedures and address-based analysis to inspect recovered functions. REA does not admit a caller-selected PDB companion.; This session uses Ghidra 12.1.2. The bridge is verified against 12.1.4; other 12.1.x builds are accepted and the observed version is reported.; Pseudocode is Ghidra decompiler output, not original source and not text-equivalent to Hopper output.; External functions and functions without an analyzable body return null; other decompiler failures remain explicit.
// pseudocode: provider-specific; not original source


/* Library Function - Single Match
    public: virtual void __thiscall CMFCVisualManagerOffice2007::OnDrawBarGripper(class CDC *,class
   CRect,int,class CBasePane *)
   
   Library: Visual Studio 2015 Release */

void __thiscall
CMFCVisualManagerOffice2007::OnDrawBarGripper
          (CMFCVisualManagerOffice2007 *this,undefined4 param_1,int param_3,int param_4,int param_5,
          int param_6,int param_7,CObject *param_8)

{
  int iVar1;
  code *pcVar2;
  uint uVar3;
  int iVar4;
  CObject *pCVar5;
  int iVar6;
  int iVar7;
  int *piVar8;
  int iVar9;
  int local_18;
  
  pCVar5 = param_8;
  uVar3 = DAT_10206460 ^ (uint)&stack0xfffffffc;
  iVar4 = CanDrawImage(this);
  iVar9 = param_7;
  if ((iVar4 == 0) ||
     (((pCVar5 != (CObject *)0x0 && (*(int *)(pCVar5 + 0x8c) != 0)) || (*(int *)(this + 0x234) == 0)
      ))) {
    CMFCVisualManagerOffice2003::OnDrawBarGripper
              ((CMFCVisualManagerOffice2003 *)this,param_1,param_3,param_4,param_5,param_6,param_7,
               pCVar5);
  }
  else {
    iVar4 = *(int *)(this + 0x284);
    iVar1 = *(int *)(this + 0x288);
    if ((iVar4 != 0) || (iVar1 != 0)) {
      if (param_7 == 0) {
        param_4 = param_6 - iVar1;
      }
      else {
        param_3 = param_5 - iVar4;
      }
      pCVar5 = AfxDynamicDownCast((CRuntimeClass *)&PTR_s_CMFCToolBar_10205ab0,pCVar5);
      if (pCVar5 != (CObject *)0x0) {
        if (iVar9 == 0) {
          if (DAT_1020e508 == 0) {
            piVar8 = (int *)CMFCToolBar::GetButtonSize((CMFCToolBar *)pCVar5);
            iVar6 = *piVar8;
          }
          else {
            pcVar2 = *(code **)(*(int *)pCVar5 + 0x358);
            guard_check_icall();
            iVar6 = (*pcVar2)();
            iVar9 = param_7;
          }
          piVar8 = (int *)CMFCToolBar::GetImageSize((CMFCToolBar *)pCVar5);
          if ((iVar6 - *piVar8) / 2 < 0) {
            iVar6 = 0;
          }
          else {
            piVar8 = (int *)CMFCToolBar::GetImageSize((CMFCToolBar *)pCVar5);
            iVar6 = (iVar6 - *piVar8) / 2;
          }
          iVar7 = 0;
          iVar6 = -iVar6;
        }
        else {
          if (DAT_1020e508 == 0) {
            iVar6 = CMFCToolBar::GetButtonSize((CMFCToolBar *)pCVar5);
            iVar6 = *(int *)(iVar6 + 4);
          }
          else {
            pcVar2 = *(code **)(*(int *)pCVar5 + 0x354);
            guard_check_icall();
            iVar6 = (*pcVar2)();
            iVar9 = param_7;
          }
          iVar7 = CMFCToolBar::GetImageSize((CMFCToolBar *)pCVar5);
          if ((iVar6 - *(int *)(iVar7 + 4)) / 2 < 0) {
            iVar7 = 0;
          }
          else {
            iVar7 = CMFCToolBar::GetImageSize((CMFCToolBar *)pCVar5);
            iVar7 = (iVar6 - *(int *)(iVar7 + 4)) / 2;
          }
          iVar7 = -iVar7;
          iVar6 = 0;
        }
        InflateRect((LPRECT)&param_3,iVar6,iVar7);
      }
      if (iVar9 == 0) {
        local_18 = ((param_5 - param_3) - iVar4) / iVar4;
        iVar6 = (param_5 - local_18 * iVar4) - param_3;
      }
      else {
        local_18 = ((param_6 - param_4) - iVar1) / iVar1;
        iVar6 = (param_6 - local_18 * iVar1) - param_4;
      }
      iVar6 = iVar6 / 2;
      if (0 < local_18) {
        do {
          if (iVar9 == 0) {
            iVar9 = param_3 + iVar6;
            iVar7 = param_4;
          }
          else {
            iVar7 = param_4 + iVar6;
            iVar9 = param_3;
          }
          CMFCToolBarImages::DrawEx
                    ((CMFCToolBarImages *)(this + 0x230),param_1,iVar9,iVar7,iVar4 + iVar9,
                     iVar1 + iVar7,0,0,0,0,0,0,0,0xff);
          iVar9 = iVar1;
          if (param_7 == 0) {
            iVar9 = iVar4;
          }
          iVar6 = iVar6 + iVar9;
          local_18 = local_18 + -1;
          iVar9 = param_7;
        } while (local_18 != 0);
      }
    }
  }
  __security_check_cookie(uVar3 ^ (uint)&stack0xfffffffc);
  return;
}

