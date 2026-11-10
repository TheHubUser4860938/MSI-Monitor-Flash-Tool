// rea decompile_all
// name: CMFCVisualManagerOffice2003::OnEraseTabsButton
// address: 0x10114fcc
// body: available
// range: 0x10114fcc-0x101151f7 inclusive
// non_contiguous: false
// provider: Ghidra 12.1.2 (ghidra)
// analysis_profile: b075844f08879296d957518397cd0ddda73db81dce53d00d3f0e702766fc2af6
// limitations: The session serves operations only after Ghidra reports default auto-analysis complete; incomplete analysis does not expose partial results.; The imported Program and temporary project are ephemeral and deleted on close. Annotation operations edit session database metadata; original executable bytes are never written.; Cancelling an active Ghidra request terminates its ephemeral database and discards session annotations. The selected target remains open; the next provider query imports the original artifact again.; Default-space addresses use lowercase 0x-prefixed hexadecimal; other address spaces use <percent-encoded-space>:0x<hex>.; The Ghidra Program references PDB Comm.pdb (GUID c3062acb-498d-45fa-a233-c8b7e401bb13, age (hex) 1, signature unknown, version RSDS); Ghidra reports load state unknown. Original names and types may be missing; an empty name search does not prove a procedure is absent. Use list_procedures and address-based analysis to inspect recovered functions. REA does not admit a caller-selected PDB companion.; This session uses Ghidra 12.1.2. The bridge is verified against 12.1.4; other 12.1.x builds are accepted and the observed version is reported.; Pseudocode is Ghidra decompiler output, not original source and not text-equivalent to Hopper output.; External functions and functions without an analyzable body return null; other decompiler failures remain explicit.
// pseudocode: provider-specific; not original source


/* WARNING: Function: __EH_prolog3_GS replaced with injection: EH_prolog3 */
/* Library Function - Single Match
    public: virtual void __thiscall CMFCVisualManagerOffice2003::OnEraseTabsButton(class CDC *,class
   CRect,class CMFCButton *,class CMFCBaseTabCtrl *)
   
   Library: Visual Studio 2015 Release */

void __thiscall
CMFCVisualManagerOffice2003::OnEraseTabsButton
          (undefined4 param_1_00,CDC *param_1,LONG param_3,LONG param_4,LONG param_5,LONG param_6,
          CMFCButton *param_7,CObject *param_8)

{
  code *pcVar1;
  CMFCButton *this;
  CObject *pCVar2;
  CDC *this_00;
  int iVar3;
  AFX_GLOBAL_DATA *pAVar4;
  HRGN pHVar5;
  HWND hWndTo;
  int iVar6;
  undefined **local_50;
  undefined4 local_4c;
  CDrawingManager local_48 [4];
  CObject *local_44;
  CMFCButton *local_40;
  CDC *local_3c;
  CMFCVisualManagerOfficeXP *local_38;
  undefined4 local_34;
  LONG local_30;
  undefined4 local_2c;
  LONG local_28;
  tagRECT local_24;
  undefined4 local_8;
  undefined4 uStack_4;
  
  pCVar2 = param_8;
  this = param_7;
  uStack_4 = 0x40;
  local_8 = 0x10114fd8;
  local_3c = param_1;
  local_40 = param_7;
  local_44 = AfxDynamicDownCast((CRuntimeClass *)&PTR_s_CMFCTabCtrl_1018a624,param_8);
  if (local_44 != (CObject *)0x0) {
    pcVar1 = *(code **)(*(int *)pCVar2 + 0x280);
    guard_check_icall();
    iVar3 = (*pcVar1)();
    if (iVar3 == 0) {
      pAVar4 = GetGlobalData();
      if (8 < *(int *)(pAVar4 + 0x1ac)) {
        pAVar4 = GetGlobalData();
        iVar3 = AFX_GLOBAL_DATA::IsHighContrastMode(pAVar4);
        if ((iVar3 == 0) && (*(int *)(pCVar2 + 0x134) == 0)) {
          pcVar1 = *(code **)(*(int *)pCVar2 + 0x288);
          guard_check_icall();
          iVar3 = (*pcVar1)();
          if (iVar3 == 0) {
            pcVar1 = *(code **)(*(int *)pCVar2 + 0x28c);
            guard_check_icall();
            iVar3 = (*pcVar1)();
            if (iVar3 != 0) goto LAB_1011507d;
          }
          else {
LAB_1011507d:
            iVar3 = CMFCButton::IsPressed(this);
            if ((iVar3 != 0) || (*(int *)(this + 0xb4) != 0)) {
              CDrawingManager::CDrawingManager(local_48,local_3c);
              local_8 = 0;
              iVar3 = CMFCButton::IsPressed(local_40);
              if (iVar3 == 0) {
                iVar3 = *(int *)(local_38 + 400);
                iVar6 = *(int *)(local_38 + 0x194);
              }
              else {
                iVar3 = *(int *)(local_38 + 0x198);
                iVar6 = *(int *)(local_38 + 0x19c);
              }
              CDrawingManager::FillGradient
                        (local_48,param_3,param_4,param_5,param_6,iVar6,iVar3,1,0,0);
              FUN_10079775();
              goto LAB_101151f0;
            }
          }
          local_50 = CRgn::vftable;
          local_4c = 0;
          local_8 = 1;
          pHVar5 = CreateRectRgnIndirect((RECT *)&param_3);
          CMenu::Attach((CMenu *)&local_50,(HMENU__ *)pHVar5);
          CDC::SelectClipRgn(local_3c,(CRgn *)&local_50);
          pCVar2 = local_44;
          local_24.left = 0;
          local_24.top = 0;
          local_24.right = 0;
          local_24.bottom = 0;
          GetClientRect(*(HWND *)(local_44 + 0x20),&local_24);
          local_34 = 0;
          local_30 = 0;
          local_2c = 0;
          local_28 = 0;
          pcVar1 = *(code **)(*(int *)pCVar2 + 0x180);
          guard_check_icall(&local_34);
          (*pcVar1)();
          if (*(int *)(pCVar2 + 0x90) == 0) {
            local_24.top = local_30;
          }
          else {
            local_24.bottom = local_28;
          }
          hWndTo = (HWND)0x0;
          if (local_40 != (CMFCButton *)0x0) {
            hWndTo = *(HWND *)(local_40 + 0x20);
          }
          MapWindowPoints(*(HWND *)(pCVar2 + 0x20),hWndTo,(LPPOINT)&local_24,2);
          this_00 = local_3c;
          pcVar1 = *(code **)(*(int *)local_38 + 0xf0);
          guard_check_icall(local_3c,local_24.left,local_24.top,local_24.right,local_24.bottom,
                            pCVar2);
          (*pcVar1)();
          CDC::SelectClipRgn(this_00,(CRgn *)0x0);
          local_50 = CRgn::vftable;
          CImageList::~CImageList((CImageList *)&local_50);
          goto LAB_101151f0;
        }
      }
    }
  }
  CMFCVisualManagerOfficeXP::OnEraseTabsButton
            (local_38,local_3c,param_3,param_4,param_5,param_6,this,pCVar2);
LAB_101151f0:
  FUN_101490fe();
  return;
}

