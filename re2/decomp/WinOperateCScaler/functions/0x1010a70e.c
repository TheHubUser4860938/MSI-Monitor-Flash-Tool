// rea decompile_all
// name: CMFCOutlookBarTabCtrl::RebuildToolBar
// address: 0x1010a70e
// body: available
// range: 0x1010a70e-0x1010aa86 inclusive
// non_contiguous: false
// provider: Ghidra 12.1.2 (ghidra)
// analysis_profile: b075844f08879296d957518397cd0ddda73db81dce53d00d3f0e702766fc2af6
// limitations: The session serves operations only after Ghidra reports default auto-analysis complete; incomplete analysis does not expose partial results.; The imported Program and temporary project are ephemeral and deleted on close. Annotation operations edit session database metadata; original executable bytes are never written.; Cancelling an active Ghidra request terminates its ephemeral database and discards session annotations. The selected target remains open; the next provider query imports the original artifact again.; Default-space addresses use lowercase 0x-prefixed hexadecimal; other address spaces use <percent-encoded-space>:0x<hex>.; The Ghidra Program references PDB WinOperateCScaler.pdb (GUID a6737962-efea-4805-8ae6-1fc1ef126554, age (hex) 1, signature unknown, version RSDS); Ghidra reports load state unknown. Original names and types may be missing; an empty name search does not prove a procedure is absent. Use list_procedures and address-based analysis to inspect recovered functions. REA does not admit a caller-selected PDB companion.; This session uses Ghidra 12.1.2. The bridge is verified against 12.1.4; other 12.1.x builds are accepted and the observed version is reported.; Pseudocode is Ghidra decompiler output, not original source and not text-equivalent to Hopper output.; External functions and functions without an analyzable body return null; other decompiler failures remain explicit.
// pseudocode: provider-specific; not original source


/* WARNING: Function: __EH_prolog3_GS replaced with injection: EH_prolog3 */
/* Library Function - Single Match
    protected: void __thiscall CMFCOutlookBarTabCtrl::RebuildToolBar(void)
   
   Library: Visual Studio 2015 Release */

void __thiscall CMFCOutlookBarTabCtrl::RebuildToolBar(CMFCOutlookBarTabCtrl *this)

{
  code *pcVar1;
  int iVar2;
  int *piVar3;
  BOOL BVar4;
  int *piVar5;
  HICON__ *hIcon;
  undefined4 uVar6;
  undefined1 local_1c4 [4];
  int local_1c0;
  uint local_1bc;
  int *local_1b8;
  int local_1b4;
  CMFCToolBarButton local_1b0 [112];
  undefined **local_140 [46];
  undefined4 local_88;
  CMFCOutlookBarTabCtrl *local_7c;
  undefined4 local_3c;
  undefined4 local_34;
  undefined4 local_8;
  undefined4 uStack_4;
  
  uStack_4 = 0x1b4;
  local_8 = 0x1010a71d;
  iVar2 = IsMode2003(this);
  if (iVar2 != 0) {
    pcVar1 = *(code **)(*(int *)(this + 0x2b0) + 0x350);
    guard_check_icall();
    (*pcVar1)();
    CMap<int,int,int,int>::RemoveAll((CMap<int,int,int,int> *)(this + 0xff0));
    FUN_100185a0(&DAT_101a63a8);
    local_8 = 0;
    EnableCustomizeButton(1,0,&local_1b8,0);
    local_8 = 0xffffffff;
    ATL::CStringData::Release((CStringData *)(local_1b8 + -4));
    if ((this == (CMFCOutlookBarTabCtrl *)0xfffffd5c) || (*(int *)(this + 0x2a8) == 0)) {
      pcVar1 = *(code **)(*(int *)this + 0x238);
      guard_check_icall(local_1c4);
      piVar3 = (int *)(*pcVar1)();
      iVar2 = *piVar3;
      local_1b4 = piVar3[1];
    }
    else {
      iVar2 = *(int *)(this + 0x29c);
      local_1b4 = *(int *)(this + 0x2a0);
    }
    if ((iVar2 == 0) && (local_1b4 == 0)) {
      iVar2 = 0x10;
      local_1b4 = 0x10;
    }
    FUN_100712a1(iVar2 + 6,local_1b4 + 0xe,iVar2,local_1b4,0);
    FUN_1005a0e1();
    *(int *)(this + 0x5bc) = iVar2;
    *(int *)(this + 0x5c0) = local_1b4;
    if (*(int *)(this + 0xfc4) != 0) {
      CMFCCustomizeButton::CMFCCustomizeButton((CMFCCustomizeButton *)local_140);
      local_140[0] = COutlookCustomizeButton::vftable;
      local_8 = 1;
      CMFCCustomizeButton::CopyFrom
                ((CMFCCustomizeButton *)local_140,*(CMFCToolBarButton **)(this + 0xfc4));
      local_3c = 0;
      local_34 = 0;
      local_88 = 1;
      local_7c = this;
      FUN_100350dd();
      local_1b8 = *(int **)(this + 0xfc4);
      if (local_1b8 != (int *)0x0) {
        pcVar1 = *(code **)(*local_1b8 + 4);
        guard_check_icall(1);
        (*pcVar1)();
      }
      *(undefined4 *)(this + 0xfc4) = 0;
      pcVar1 = *(code **)(*(int *)(this + 0x2b0) + 0x344);
      guard_check_icall(local_140,0xffffffff);
      (*pcVar1)();
      local_8 = 0xffffffff;
      *(undefined4 *)(this + 0xfc4) = *(undefined4 *)(*(int *)(this + 0xef0) + 8);
      CMFCCustomizeButton::~CMFCCustomizeButton((CMFCCustomizeButton *)local_140);
    }
    local_1b4 = 0;
    local_1b8 = (int *)0x0;
    if (0 < *(int *)(this + 0xbc)) {
      do {
        piVar3 = (int *)FUN_1009f8c7(local_1b8);
        iVar2 = *piVar3;
        if ((*(int *)(iVar2 + 0x34) != 0) &&
           (BVar4 = IsRectEmpty((RECT *)(iVar2 + 0x10)), BVar4 != 0)) {
          CMFCToolBarButton(local_1b4 + 0xf203,local_1b4,*(undefined4 *)(iVar2 + 4),0,0);
          local_8 = 2;
          pcVar1 = *(code **)(*(int *)(this + 0x2b0) + 0x344);
          guard_check_icall(local_1b0,0xffffffff);
          (*pcVar1)();
          piVar5 = (int *)FUN_100c3357(local_1b4);
          piVar3 = local_1b8;
          *piVar5 = (int)local_1b8;
          pcVar1 = *(code **)(*(int *)this + 0x1c4);
          guard_check_icall(local_1b8);
          local_1c0 = (*pcVar1)();
          local_1bc = 0;
          if ((this == (CMFCOutlookBarTabCtrl *)0xfffffd5c) || (*(int *)(this + 0x2a8) == 0)) {
            pcVar1 = *(code **)(*(int *)this + 0x1d8);
            guard_check_icall(piVar3);
            hIcon = (HICON__ *)(*pcVar1)();
            if (hIcon == (HICON__ *)0x0) {
              pcVar1 = *(code **)(*(int *)this + 0x23c);
              guard_check_icall();
              iVar2 = (*pcVar1)();
              if ((iVar2 != 0) && (local_1c0 != -1)) {
                uVar6 = *(undefined4 *)(iVar2 + 4);
                goto LAB_1010a9e9;
              }
            }
          }
          else {
            uVar6 = *(undefined4 *)(this + 0x2a8);
LAB_1010a9e9:
            hIcon = (HICON__ *)_IsolationAwareImageList_GetIcon_12(uVar6,local_1c0,0);
            local_1bc = (uint)(hIcon != (HICON__ *)0x0);
          }
          CMFCToolBarImages::AddIcon((CMFCToolBarImages *)(this + 0x568),hIcon,0);
          if ((local_1bc != 0) && (hIcon != (HICON__ *)0x0)) {
            DestroyIcon(hIcon);
          }
          local_1b4 = local_1b4 + 1;
          local_8 = 0xffffffff;
          CMFCToolBarButton::~CMFCToolBarButton(local_1b0);
        }
        local_1b8 = (int *)((int)local_1b8 + 1);
      } while ((int)local_1b8 < *(int *)(this + 0xbc));
    }
    pcVar1 = *(code **)(*(int *)(this + 0x2b0) + 0x3e4);
    guard_check_icall();
    (*pcVar1)();
    RedrawWindow(*(HWND *)(this + 0x2d0),(RECT *)0x0,(HRGN)0x0,0x105);
  }
  FUN_10154478();
  return;
}

