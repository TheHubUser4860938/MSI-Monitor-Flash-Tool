// rea decompile_all
// name: CMFCVisualManagerOffice2007::OnEraseTabsButton
// address: 0x100a53c5
// body: available
// range: 0x100a53c5-0x100a55f7 inclusive
// non_contiguous: false
// provider: Ghidra 12.1.2 (ghidra)
// analysis_profile: b075844f08879296d957518397cd0ddda73db81dce53d00d3f0e702766fc2af6
// limitations: The session serves operations only after Ghidra reports default auto-analysis complete; incomplete analysis does not expose partial results.; The imported Program and temporary project are ephemeral and deleted on close. Annotation operations edit session database metadata; original executable bytes are never written.; Cancelling an active Ghidra request terminates its ephemeral database and discards session annotations. The selected target remains open; the next provider query imports the original artifact again.; Default-space addresses use lowercase 0x-prefixed hexadecimal; other address spaces use <percent-encoded-space>:0x<hex>.; The Ghidra Program references PDB WinOperateCScaler.pdb (GUID a6737962-efea-4805-8ae6-1fc1ef126554, age (hex) 1, signature unknown, version RSDS); Ghidra reports load state unknown. Original names and types may be missing; an empty name search does not prove a procedure is absent. Use list_procedures and address-based analysis to inspect recovered functions. REA does not admit a caller-selected PDB companion.; This session uses Ghidra 12.1.2. The bridge is verified against 12.1.4; other 12.1.x builds are accepted and the observed version is reported.; Pseudocode is Ghidra decompiler output, not original source and not text-equivalent to Hopper output.; External functions and functions without an analyzable body return null; other decompiler failures remain explicit.
// pseudocode: provider-specific; not original source


/* WARNING: Function: __EH_prolog3_GS replaced with injection: EH_prolog3 */
/* Library Function - Single Match
    public: virtual void __thiscall CMFCVisualManagerOffice2007::OnEraseTabsButton(class CDC *,class
   CRect,class CMFCButton *,class CMFCBaseTabCtrl *)
   
   Library: Visual Studio 2015 Release */

void __thiscall
CMFCVisualManagerOffice2007::OnEraseTabsButton
          (undefined4 param_1_00,CDC *param_1,LONG param_3,LONG param_4,LONG param_5,LONG param_6,
          CMFCButton *param_7,CObject *param_8)

{
  code *pcVar1;
  CMFCButton *this;
  CObject *pCVar2;
  CDC *this_00;
  CObject *pCVar3;
  int iVar4;
  HRGN pHVar5;
  HWND hWndTo;
  int iVar6;
  undefined4 uVar7;
  undefined **local_44;
  undefined4 local_40;
  CMFCVisualManagerOffice2007 *local_3c;
  CDC *local_38;
  undefined4 local_34;
  LONG local_30;
  undefined4 local_2c;
  LONG local_28;
  tagRECT local_24;
  undefined4 local_8;
  undefined4 uStack_4;
  
  pCVar2 = param_8;
  this = param_7;
  uStack_4 = 0x3c;
  local_8 = 0x100a53d1;
  local_38 = param_1;
  pCVar3 = AfxDynamicDownCast((CRuntimeClass *)&PTR_s_CMFCTabCtrl_101b54cc,param_8);
  iVar4 = CanDrawImage(local_3c);
  if (((iVar4 != 0) && (pCVar3 != (CObject *)0x0)) && (*(int *)(pCVar2 + 0x134) == 0)) {
    pcVar1 = *(code **)(*(int *)pCVar2 + 0x280);
    guard_check_icall();
    iVar4 = (*pcVar1)();
    if (iVar4 == 0) {
      pcVar1 = *(code **)(*(int *)pCVar2 + 0x288);
      guard_check_icall();
      iVar4 = (*pcVar1)();
      if (iVar4 == 0) {
        pcVar1 = *(code **)(*(int *)pCVar2 + 0x2a8);
        guard_check_icall();
        iVar4 = (*pcVar1)();
        if (iVar4 == 0) {
          pcVar1 = *(code **)(*(int *)pCVar2 + 0x28c);
          guard_check_icall();
          iVar4 = (*pcVar1)();
          if (iVar4 == 0) {
            pcVar1 = *(code **)(*(int *)pCVar2 + 0x290);
            guard_check_icall();
            iVar4 = (*pcVar1)();
            if (iVar4 == 0) {
              iVar4 = CMFCButton::IsPressed(this);
              if ((iVar4 != 0) || (*(int *)(this + 0xb4) != 0)) {
                local_44 = CRgn::vftable;
                local_40 = 0;
                local_8 = 0;
                pHVar5 = CreateRectRgnIndirect((RECT *)&param_3);
                CMenu::Attach((CMenu *)&local_44,(HMENU__ *)pHVar5);
                CDC::SelectClipRgn(local_38,(CRgn *)&local_44);
                local_24.left = 0;
                local_24.top = 0;
                local_24.right = 0;
                local_24.bottom = 0;
                GetClientRect(*(HWND *)(pCVar3 + 0x20),&local_24);
                local_34 = 0;
                local_30 = 0;
                local_2c = 0;
                local_28 = 0;
                pcVar1 = *(code **)(*(int *)pCVar3 + 0x180);
                guard_check_icall(&local_34);
                (*pcVar1)();
                if (*(int *)(pCVar3 + 0x90) == 0) {
                  local_24.top = local_30;
                }
                else {
                  local_24.bottom = local_28;
                }
                if (this == (CMFCButton *)0x0) {
                  hWndTo = (HWND)0x0;
                }
                else {
                  hWndTo = *(HWND *)(this + 0x20);
                }
                MapWindowPoints(*(HWND *)(pCVar3 + 0x20),hWndTo,(LPPOINT)&local_24,2);
                this_00 = local_38;
                pcVar1 = *(code **)(*(int *)local_3c + 0xf0);
                guard_check_icall(local_38,local_24.left,local_24.top,local_24.right,local_24.bottom
                                  ,pCVar3);
                (*pcVar1)();
                CDC::SelectClipRgn(this_00,(CRgn *)0x0);
                iVar4 = *(int *)(local_3c + 0x33f8);
                uVar7 = 0xff;
                iVar6 = CMFCButton::IsPressed(this);
                guard_check_icall(local_38,param_3,param_4,param_5,param_6,(iVar6 != 0) + '\x01',
                                  uVar7);
                (**(code **)(iVar4 + 0x10))();
                local_44 = CRgn::vftable;
                CImageList::~CImageList((CImageList *)&local_44);
                goto LAB_100a55f0;
              }
            }
          }
        }
      }
    }
  }
  CMFCVisualManagerOffice2003::OnEraseTabsButton
            ((CMFCVisualManagerOffice2003 *)local_3c,local_38,param_3,param_4,param_5,param_6,this,
             pCVar2);
LAB_100a55f0:
  FUN_10154478();
  return;
}

