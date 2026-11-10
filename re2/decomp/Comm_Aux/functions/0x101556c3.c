// rea decompile_all
// name: CMFCRibbonPanelMenuBar::DoPaint
// address: 0x101556c3
// body: available
// range: 0x101556c3-0x10155970 inclusive
// non_contiguous: false
// provider: Ghidra 12.1.2 (ghidra)
// analysis_profile: b075844f08879296d957518397cd0ddda73db81dce53d00d3f0e702766fc2af6
// limitations: The session serves operations only after Ghidra reports default auto-analysis complete; incomplete analysis does not expose partial results.; The imported Program and temporary project are ephemeral and deleted on close. Annotation operations edit session database metadata; original executable bytes are never written.; Cancelling an active Ghidra request terminates its ephemeral database and discards session annotations. The selected target remains open; the next provider query imports the original artifact again.; Default-space addresses use lowercase 0x-prefixed hexadecimal; other address spaces use <percent-encoded-space>:0x<hex>.; Ghidra Listing reports a terminal call at 0x10155790 to 0x1004886a FUN_1004886a (external=false, thunk=false, hasNoReturn=true); fallthrough is excluded by Ghidra's flow model. This records Ghidra's FunctionManager flag, not an independent verification that the callee cannot return.; The Ghidra Program references PDB Comm_Aux.pdb (GUID ba7920cc-daa3-4461-a102-1f8f66c67a2a, age (hex) 1, signature unknown, version RSDS); Ghidra reports load state unknown. Original names and types may be missing; an empty name search does not prove a procedure is absent. Use list_procedures and address-based analysis to inspect recovered functions. REA does not admit a caller-selected PDB companion.; This session uses Ghidra 12.1.2. The bridge is verified against 12.1.4; other 12.1.x builds are accepted and the observed version is reported.; Pseudocode is Ghidra decompiler output, not original source and not text-equivalent to Hopper output.; External functions and functions without an analyzable body return null; other decompiler failures remain explicit.
// pseudocode: provider-specific; not original source


/* WARNING: Function: __EH_prolog3_GS replaced with injection: EH_prolog3 */
/* Library Function - Single Match
    public: virtual void __thiscall CMFCRibbonPanelMenuBar::DoPaint(class CDC *)
   
   Library: Visual Studio 2015 Release */

void __thiscall CMFCRibbonPanelMenuBar::DoPaint(CMFCRibbonPanelMenuBar *this,CDC *param_1)

{
  int iVar1;
  BOOL BVar2;
  HRGN pHVar3;
  CFont *pCVar4;
  int iVar5;
  CMFCVisualManager *pCVar6;
  CDC *pCVar7;
  code *pcVar8;
  CMFCRibbonPanelMenuBar *pCVar9;
  undefined **local_98;
  undefined4 local_94;
  CMFCVisualManager *local_90;
  CDC *local_8c;
  CMFCRibbonPanelMenuBar *local_88;
  CDC *local_84;
  CMemDC local_80 [4];
  CDC *local_7c;
  int local_78;
  CDC local_70 [44];
  tagRECT local_44;
  RECT local_34;
  tagRECT local_24;
  undefined4 local_8;
  undefined4 uStack_4;
  
  uStack_4 = 0x8c;
  local_8 = 0x101556d2;
  local_8c = param_1;
  local_88 = this;
  CMemDC::CMemDC(local_80,param_1,(CWnd *)this);
  local_8 = 0;
  pCVar7 = local_70;
  if (local_78 == 0) {
    pCVar7 = local_7c;
  }
  local_34.left = 0;
  local_34.top = 0;
  local_34.right = 0;
  local_34.bottom = 0;
  pcVar8 = *(code **)(*(int *)param_1 + 0x50);
  local_84 = pCVar7;
  guard_check_icall(&local_34);
  (*pcVar8)();
  local_94 = 0;
  local_98 = CRgn::vftable;
  local_8 = CONCAT31(local_8._1_3_,1);
  BVar2 = IsRectEmpty(&local_34);
  if (BVar2 == 0) {
    pHVar3 = CreateRectRgnIndirect(&local_34);
    CMenu::Attach((CMenu *)&local_98,(HMENU__ *)pHVar3);
    CDC::SelectClipRgn(pCVar7,(CRgn *)&local_98);
  }
  iVar5 = *(int *)pCVar7;
  pCVar4 = CWnd::GetFont(*(CWnd **)(this + 0xea0));
  guard_check_icall(pCVar4);
  iVar5 = (**(code **)(iVar5 + 0x28))();
  if (iVar5 == 0) {
                    /* WARNING: Subroutine does not return */
    FUN_1004886a();
  }
  CDC::SetBkMode(pCVar7,1);
  pCVar9 = local_88;
  local_24.left = 0;
  local_24.top = 0;
  local_24.right = 0;
  local_24.bottom = 0;
  GetClientRect(*(HWND *)(local_88 + 0x20),&local_24);
  local_44.left = local_24.left;
  local_44.top = local_24.top;
  local_44.right = local_24.right;
  local_44.bottom = local_24.bottom;
  InflateRect(&local_44,3,3);
  if (*(int *)(pCVar9 + 0xeb4) == 0) {
    local_8c = *(CDC **)(*(int *)(pCVar9 + 0xea4) + 0x108);
    if (local_8c == (CDC *)0x0) {
      if (*(int *)(pCVar9 + 0xde0) == 0) {
        local_90 = CMFCVisualManager::GetInstance();
        pCVar9 = local_88;
        iVar1 = *(int *)local_90;
        guard_check_icall(local_84,local_88,local_24.left,local_24.top,local_24.right,
                          local_24.bottom,local_24.left,local_24.top,local_24.right,local_24.bottom,
                          0);
        (**(code **)(iVar1 + 0x34))();
      }
      else {
        pCVar6 = CMFCVisualManager::GetInstance();
        pCVar9 = local_88;
        pcVar8 = *(code **)(*(int *)pCVar6 + 0x2a4);
        guard_check_icall(local_84,local_88,local_24.left,local_24.top,local_24.right,
                          local_24.bottom);
        (*pcVar8)();
      }
    }
    else {
      local_90 = *(CMFCVisualManager **)(local_8c + 0x540);
      *(CMFCRibbonPanelMenuBar **)(local_8c + 0x540) = pCVar9;
      pCVar6 = CMFCVisualManager::GetInstance();
      pCVar7 = local_8c;
      pcVar8 = *(code **)(*(int *)pCVar6 + 0x214);
      guard_check_icall(local_84,local_8c,local_44.left,local_44.top,local_44.right,local_44.bottom)
      ;
      (*pcVar8)();
      *(CMFCVisualManager **)(pCVar7 + 0x540) = local_90;
      pCVar9 = local_88;
    }
    pcVar8 = *(code **)(**(int **)(pCVar9 + 0xea4) + 0xe8);
  }
  else {
    pCVar6 = CMFCVisualManager::GetInstance();
    pCVar9 = local_88;
    pcVar8 = *(code **)(*(int *)pCVar6 + 0x214);
    guard_check_icall(local_84,*(undefined4 *)(local_88 + 0xeb4),local_44.left,local_44.top,
                      local_44.right,local_44.bottom);
    (*pcVar8)();
    pcVar8 = *(code **)(**(int **)(pCVar9 + 0xeb4) + 0xb4);
  }
  pCVar7 = local_84;
  guard_check_icall(local_84);
  (*pcVar8)();
  pcVar8 = *(code **)(*(int *)pCVar7 + 0x28);
  guard_check_icall(iVar5);
  (*pcVar8)();
  CDC::SelectClipRgn(pCVar7,(CRgn *)0x0);
  local_98 = CRgn::vftable;
  CImageList::~CImageList((CImageList *)&local_98);
  CMemDC::~CMemDC(local_80);
  FUN_1017f5f4();
  return;
}

