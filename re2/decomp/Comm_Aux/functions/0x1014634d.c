// rea decompile_all
// name: CMFCVisualManagerOfficeXP::OnFillBarBackground
// address: 0x1014634d
// body: available
// range: 0x1014634d-0x101465ba inclusive
// non_contiguous: false
// provider: Ghidra 12.1.2 (ghidra)
// analysis_profile: b075844f08879296d957518397cd0ddda73db81dce53d00d3f0e702766fc2af6
// limitations: The session serves operations only after Ghidra reports default auto-analysis complete; incomplete analysis does not expose partial results.; The imported Program and temporary project are ephemeral and deleted on close. Annotation operations edit session database metadata; original executable bytes are never written.; Cancelling an active Ghidra request terminates its ephemeral database and discards session annotations. The selected target remains open; the next provider query imports the original artifact again.; Default-space addresses use lowercase 0x-prefixed hexadecimal; other address spaces use <percent-encoded-space>:0x<hex>.; The Ghidra Program references PDB Comm_Aux.pdb (GUID ba7920cc-daa3-4461-a102-1f8f66c67a2a, age (hex) 1, signature unknown, version RSDS); Ghidra reports load state unknown. Original names and types may be missing; an empty name search does not prove a procedure is absent. Use list_procedures and address-based analysis to inspect recovered functions. REA does not admit a caller-selected PDB companion.; This session uses Ghidra 12.1.2. The bridge is verified against 12.1.4; other 12.1.x builds are accepted and the observed version is reported.; Pseudocode is Ghidra decompiler output, not original source and not text-equivalent to Hopper output.; External functions and functions without an analyzable body return null; other decompiler failures remain explicit.
// pseudocode: provider-specific; not original source


/* Library Function - Single Match
    protected: virtual void __thiscall CMFCVisualManagerOfficeXP::OnFillBarBackground(class CDC
   *,class CBasePane *,class CRect,class CRect,int)
   
   Library: Visual Studio 2015 Release */

void __thiscall
CMFCVisualManagerOfficeXP::OnFillBarBackground
          (CMFCVisualManagerOfficeXP *this,int param_1,CObject *param_2,int param_4,LONG param_5,
          LONG param_6,LONG param_7,int param_8,LONG param_9,LONG param_10,LONG param_11)

{
  code *pcVar1;
  CObject *pCVar2;
  HWND pHVar3;
  CWnd *pCVar4;
  BOOL BVar5;
  int iVar6;
  RECT *lprc;
  HBRUSH hbr;
  HBRUSH hbr_00;
  bool bVar7;
  tagRECT local_18;
  uint local_8;
  
  local_8 = DAT_10206460 ^ (uint)&stack0xfffffffc;
  pCVar2 = AfxDynamicDownCast((CRuntimeClass *)&PTR_s_CReBar_101ca558,param_2);
  if (pCVar2 == (CObject *)0x0) {
    pHVar3 = GetParent(*(HWND *)(param_2 + 0x20));
    pCVar4 = CWnd::FromHandle(pHVar3);
    pCVar2 = AfxDynamicDownCast((CRuntimeClass *)&PTR_s_CReBar_101ca558,(CObject *)pCVar4);
    if (pCVar2 == (CObject *)0x0) {
      BVar5 = IsRectEmpty((RECT *)&param_8);
      if (BVar5 != 0) {
        param_8 = param_4;
        param_9 = param_5;
        param_10 = param_6;
        param_11 = param_7;
      }
      pcVar1 = (code *)**(undefined4 **)param_2;
      guard_check_icall();
      iVar6 = (*pcVar1)();
      if ((iVar6 != 0) && (iVar6 = FUN_1004e561(&PTR_s_CMFCMenuBar_10205f48), iVar6 == 0)) {
        iVar6 = FUN_1004e561(&PTR_s_CMFCOutlookBarPane_10205af4);
        hbr_00 = (HBRUSH)0x0;
        if ((iVar6 == 0) ||
           (pCVar2 = AfxDynamicDownCast((CRuntimeClass *)&PTR_s_CMFCOutlookBarPane_10205af4,param_2)
           , *(int *)(pCVar2 + 0xd54) == 0)) {
          iVar6 = FUN_1004e561(&PTR_s_CMFCColorBar_10205c18);
          if (iVar6 == 0) {
            iVar6 = FUN_1004e561(&PTR_s_CMFCPopupMenuBar_10205d98);
            if (iVar6 != 0) {
              hbr = (HBRUSH)0x0;
              if (this != (CMFCVisualManagerOfficeXP *)0xfffffef4) {
                hbr = *(HBRUSH *)(this + 0x110);
              }
              FillRect(*(HDC *)(param_1 + 4),(RECT *)&param_8,hbr);
              pCVar2 = AfxDynamicDownCast((CRuntimeClass *)&PTR_s_CMFCPopupMenuBar_10205d98,param_2)
              ;
              if (*(int *)(pCVar2 + 0xd40) != 0) goto LAB_101465a8;
              local_18.left = param_4;
              local_18.top = param_5;
              local_18.right = param_6;
              local_18.bottom = param_7;
              local_18.right = CMFCPopupMenuBar::GetGutterWidth((CMFCPopupMenuBar *)pCVar2);
              local_18.right = local_18.right + local_18.left;
              InflateRect(&local_18,0,-1);
              if (this != (CMFCVisualManagerOfficeXP *)0xffffff04) {
                hbr_00 = *(HBRUSH *)(this + 0x100);
              }
              lprc = &local_18;
LAB_1014646c:
              FillRect(*(HDC *)(param_1 + 4),lprc,hbr_00);
              goto LAB_101465a8;
            }
            iVar6 = FUN_1004e561(&PTR_s_CMFCToolBar_10205ab0);
            if (iVar6 == 0) {
              iVar6 = FUN_1004e561(&PTR_s_CAutoHideDockSite_101d4ab8);
              if (iVar6 != 0) {
                this = this + 0x114;
                bVar7 = this == (CMFCVisualManagerOfficeXP *)0x0;
                goto LAB_10146464;
              }
            }
            else if (*(int *)(param_2 + 0x8c) == 0) {
              this = this + 0xfc;
              bVar7 = this == (CMFCVisualManagerOfficeXP *)0x0;
LAB_10146464:
              if (!bVar7) {
                hbr_00 = *(HBRUSH *)(this + 4);
              }
              lprc = (RECT *)&param_8;
              goto LAB_1014646c;
            }
          }
          else if (*(int *)(param_2 + 0x8c) == 0) {
            this = this + (-(uint)(*(int *)(param_2 + 0xdf8) != 0) & 0xfffffff0) + 0x10c;
            bVar7 = this == (CMFCVisualManagerOfficeXP *)0x0;
            goto LAB_10146464;
          }
        }
      }
      CMFCVisualManager::OnFillBarBackground
                ((CMFCVisualManager *)this,param_1,param_2,param_4,param_5,param_6,param_7,param_8,
                 param_9,param_10,param_11,0);
      goto LAB_101465a8;
    }
  }
  iVar6 = *(int *)this;
  guard_check_icall(param_1,param_2,param_4,param_5,param_6,param_7);
  (**(code **)(iVar6 + 0x1c))();
LAB_101465a8:
  __security_check_cookie(local_8 ^ (uint)&stack0xfffffffc);
  return;
}

