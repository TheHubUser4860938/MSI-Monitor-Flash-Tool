// rea decompile_all
// name: CMFCTasksPane::OnDrawTasks
// address: 0x10179be1
// body: available
// range: 0x10179be1-0x10179fa4 inclusive
// non_contiguous: false
// provider: Ghidra 12.1.2 (ghidra)
// analysis_profile: b075844f08879296d957518397cd0ddda73db81dce53d00d3f0e702766fc2af6
// limitations: The session serves operations only after Ghidra reports default auto-analysis complete; incomplete analysis does not expose partial results.; The imported Program and temporary project are ephemeral and deleted on close. Annotation operations edit session database metadata; original executable bytes are never written.; Cancelling an active Ghidra request terminates its ephemeral database and discards session annotations. The selected target remains open; the next provider query imports the original artifact again.; Default-space addresses use lowercase 0x-prefixed hexadecimal; other address spaces use <percent-encoded-space>:0x<hex>.; Ghidra Listing reports a terminal call at 0x10179c57 to 0x1004a383 FUN_1004a383 (external=false, thunk=false, hasNoReturn=true); fallthrough is excluded by Ghidra's flow model. This records Ghidra's FunctionManager flag, not an independent verification that the callee cannot return.; The Ghidra Program references PDB WinIspPlugIn.pdb (GUID d9f398c7-6c98-49a8-af25-a0659d5ad2f3, age (hex) 1, signature unknown, version RSDS); Ghidra reports load state unknown. Original names and types may be missing; an empty name search does not prove a procedure is absent. Use list_procedures and address-based analysis to inspect recovered functions. REA does not admit a caller-selected PDB companion.; This session uses Ghidra 12.1.2. The bridge is verified against 12.1.4; other 12.1.x builds are accepted and the observed version is reported.; Pseudocode is Ghidra decompiler output, not original source and not text-equivalent to Hopper output.; External functions and functions without an analyzable body return null; other decompiler failures remain explicit.
// pseudocode: provider-specific; not original source


/* WARNING: Function: __EH_prolog3_GS replaced with injection: EH_prolog3 */
/* Library Function - Single Match
    protected: virtual void __thiscall CMFCTasksPane::OnDrawTasks(class CDC *,class CRect)
   
   Library: Visual Studio 2015 Release */

void __thiscall CMFCTasksPane::OnDrawTasks(CMFCTasksPane *this,CDC *param_1)

{
  code *pcVar1;
  int *piVar2;
  __POSITION *p_Var3;
  HRGN pHVar4;
  BOOL BVar5;
  CMFCVisualManager *pCVar6;
  int iVar7;
  int iVar8;
  int iVar9;
  CDC *this_00;
  undefined **local_40;
  HRGN local_3c;
  int local_38;
  CMFCTasksPane *local_34;
  int local_30;
  int local_2c;
  CDC *local_28;
  RECT local_24;
  undefined4 local_8;
  undefined4 uStack_4;
  
  uStack_4 = 0x40;
  local_8 = 0x10179bed;
  local_28 = param_1;
  local_40 = *(undefined ***)(this + 0x44c);
  local_3c = *(HRGN *)(this + 0x450);
  pcVar1 = *(code **)(*(int *)this + 0x3c8);
  local_34 = this;
  guard_check_icall(param_1,*(undefined4 *)(this + 0x444),
                    *(int *)(this + 0x448) - *(int *)(this + 0x3a4) * *(int *)(this + 0x398),
                    local_40,local_3c);
  (*pcVar1)();
  piVar2 = (int *)FUN_100efaed(*(undefined4 *)(this + 0x38c));
  p_Var3 = CObList::FindIndex((CObList *)(this + 0x464),*piVar2);
  if (p_Var3 != (__POSITION *)0x0) {
    iVar7 = *(int *)(p_Var3 + 8);
    local_3c = (HRGN)0x0;
    local_40 = CRgn::vftable;
    local_8 = 0;
    local_24.left = 0;
    local_24.top = 0;
    local_24.right = 0;
    local_24.bottom = 0;
    local_30 = iVar7;
    pHVar4 = CreateRectRgnIndirect(&local_24);
    CMenu::Attach((CMenu *)&local_40,(HMENU__ *)pHVar4);
    local_38 = *(int *)(this + 0x484);
    iVar8 = local_2c;
    while (local_2c = iVar8, local_38 != 0) {
      piVar2 = (int *)FUN_100c321b(&local_38);
      iVar8 = *piVar2;
      if (*(int *)(iVar8 + 4) == iVar7) {
        local_2c = iVar8;
        if (((*(int *)(iVar8 + 0x30) == 0) || (*(int *)(*(int *)(iVar8 + 8) + -0xc) == 0)) ||
           ((*(int *)(this + 0x378) != 0 &&
            ((iVar8 == *(int *)(this + 0x544) && (0 < *(int *)(this + 0x410))))))) {
          BVar5 = IsRectEmpty((RECT *)(iVar8 + 0x44));
          if (BVar5 == 0) {
            pCVar6 = CMFCVisualManager::GetInstance();
            pcVar1 = *(code **)(*(int *)pCVar6 + 0x170);
            guard_check_icall(local_28,((RECT *)(iVar8 + 0x44))->left,*(undefined4 *)(iVar8 + 0x48),
                              *(undefined4 *)(iVar8 + 0x4c),*(undefined4 *)(iVar8 + 0x50),0);
            (*pcVar1)();
            this = local_34;
            iVar8 = local_2c;
          }
          BVar5 = IsRectEmpty((RECT *)(iVar8 + 0x34));
          iVar9 = iVar8;
          if (BVar5 == 0) {
            pCVar6 = CMFCVisualManager::GetInstance();
            pcVar1 = *(code **)(*(int *)pCVar6 + 0x168);
            guard_check_icall(local_28,local_2c,*(int *)(this + 0x53c) == local_2c,0,
                              *(int *)(this + 0x368));
            (*pcVar1)();
            iVar9 = local_2c;
          }
          BVar5 = IsRectEmpty((RECT *)(iVar9 + 0x44));
          iVar7 = local_30;
          iVar8 = local_2c;
          if (BVar5 == 0) {
            pcVar1 = *(code **)(*(int *)this + 0x3d8);
            guard_check_icall(&local_24.right);
            (*pcVar1)();
            if ((0 < local_24.right) || (this_00 = local_28, 0 < local_24.bottom)) {
              pCVar6 = CMFCVisualManager::GetInstance();
              this_00 = local_28;
              pcVar1 = *(code **)(*(int *)pCVar6 + 0x174);
              guard_check_icall(local_28,*(undefined4 *)(iVar9 + 0x44),*(undefined4 *)(iVar9 + 0x48)
                                ,*(undefined4 *)(iVar9 + 0x4c),*(undefined4 *)(iVar9 + 0x50),
                                *(undefined4 *)(iVar9 + 0x2c),
                                *(int *)(*(int *)(iVar9 + 8) + -0xc) == 0);
              (*pcVar1)();
              this = local_34;
            }
            local_2c = *(int *)(local_2c + 0x10);
            while (iVar7 = local_30, iVar8 = 0, local_2c != 0) {
              piVar2 = (int *)FUN_100c321b(&local_2c);
              iVar7 = *piVar2;
              if ((*(int *)(iVar7 + 0x34) != 0) && (*(int *)(iVar7 + 0x2c) == 0)) {
                SetRectRgn(local_3c,*(int *)(iVar7 + 0xc),*(int *)(iVar7 + 0x10),
                           *(int *)(iVar7 + 0x14),*(int *)(iVar7 + 0x18));
                CDC::SelectClipRgn(this_00,(CRgn *)&local_40);
                pCVar6 = CMFCVisualManager::GetInstance();
                pcVar1 = *(code **)(*(int *)pCVar6 + 0x178);
                guard_check_icall(local_28,iVar7,this + 0x520,iVar7 == *(int *)(this + 0x45c),0);
                (*pcVar1)();
                this_00 = local_28;
                CDC::SelectClipRgn(local_28,(CRgn *)0x0);
              }
            }
          }
        }
        else {
          BVar5 = IsRectEmpty((RECT *)(iVar8 + 0x34));
          iVar8 = local_2c;
          if (BVar5 == 0) {
            pCVar6 = CMFCVisualManager::GetInstance();
            pcVar1 = *(code **)(*(int *)pCVar6 + 0x168);
            guard_check_icall(local_28,local_2c,*(int *)(this + 0x53c) == local_2c,0,
                              *(undefined4 *)(this + 0x368));
            (*pcVar1)();
            iVar7 = local_30;
            iVar8 = local_2c;
          }
        }
      }
    }
    CGdiObject::DeleteObject((CGdiObject *)&local_40);
    if (*(int *)(this + 0x36c) != 0) {
      InvalidateRect(*(HWND *)(this + 0x568),(RECT *)0x0,1);
      UpdateWindow(*(HWND *)(this + 0x568));
    }
    if (*(int *)(this + 0x374) != 0) {
      if (0 < *(int *)(this + 0x398)) {
        pCVar6 = CMFCVisualManager::GetInstance();
        pcVar1 = *(code **)(*(int *)pCVar6 + 0x17c);
        guard_check_icall(local_28,this + 0x424,1,7,*(uint *)(this + 0x390) >> 0x1f);
        (*pcVar1)();
      }
      iVar7 = IsScrollDnAvailable(this);
      if (iVar7 != 0) {
        pCVar6 = CMFCVisualManager::GetInstance();
        pcVar1 = *(code **)(*(int *)pCVar6 + 0x17c);
        guard_check_icall(local_28,this + 0x434,1,0,0 < *(int *)(this + 0x390));
        (*pcVar1)();
      }
    }
    local_40 = CRgn::vftable;
    CImageList::~CImageList((CImageList *)&local_40);
    FUN_1018015d();
    return;
  }
                    /* WARNING: Subroutine does not return */
  FUN_1004a383();
}

