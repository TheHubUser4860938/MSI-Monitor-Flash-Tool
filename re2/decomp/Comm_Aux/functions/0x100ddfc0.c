// rea decompile_all
// name: CPaneFrameWnd::OnNcPaint
// address: 0x100ddfc0
// body: available
// range: 0x100ddfc0-0x100de599 inclusive
// non_contiguous: false
// provider: Ghidra 12.1.2 (ghidra)
// analysis_profile: b075844f08879296d957518397cd0ddda73db81dce53d00d3f0e702766fc2af6
// limitations: The session serves operations only after Ghidra reports default auto-analysis complete; incomplete analysis does not expose partial results.; The imported Program and temporary project are ephemeral and deleted on close. Annotation operations edit session database metadata; original executable bytes are never written.; Cancelling an active Ghidra request terminates its ephemeral database and discards session annotations. The selected target remains open; the next provider query imports the original artifact again.; Default-space addresses use lowercase 0x-prefixed hexadecimal; other address spaces use <percent-encoded-space>:0x<hex>.; The Ghidra Program references PDB Comm_Aux.pdb (GUID ba7920cc-daa3-4461-a102-1f8f66c67a2a, age (hex) 1, signature unknown, version RSDS); Ghidra reports load state unknown. Original names and types may be missing; an empty name search does not prove a procedure is absent. Use list_procedures and address-based analysis to inspect recovered functions. REA does not admit a caller-selected PDB companion.; This session uses Ghidra 12.1.2. The bridge is verified against 12.1.4; other 12.1.x builds are accepted and the observed version is reported.; Pseudocode is Ghidra decompiler output, not original source and not text-equivalent to Hopper output.; External functions and functions without an analyzable body return null; other decompiler failures remain explicit.
// pseudocode: provider-specific; not original source


/* WARNING: Function: __EH_prolog3_GS replaced with injection: EH_prolog3 */
/* Library Function - Single Match
    protected: void __thiscall CPaneFrameWnd::OnNcPaint(void)
   
   Library: Visual Studio 2015 Release */

void __thiscall CPaneFrameWnd::OnNcPaint(CPaneFrameWnd *this)

{
  CPaneFrameWnd *pCVar1;
  CWnd *pCVar2;
  CDockingManager *pCVar3;
  HDC pHVar4;
  int iVar5;
  HBITMAP pHVar6;
  BOOL BVar7;
  HRGN pHVar8;
  CMFCVisualManager *pCVar9;
  int iVar10;
  int *piVar11;
  int *piVar12;
  AFX_GLOBAL_DATA *pAVar13;
  tagRECT *ptVar14;
  undefined1 *puVar15;
  void *pvVar16;
  CWindowDC *pCVar17;
  code *pcVar18;
  CDC local_130 [4];
  HDC__ *local_12c;
  CWindowDC local_120 [4];
  HDC local_11c;
  undefined **local_10c;
  void *local_108;
  undefined **local_104;
  undefined4 local_100;
  int local_fc;
  CGdiObject *local_f8;
  int local_f4;
  int local_f0;
  int local_ec;
  CPaneFrameWnd *local_e8;
  CPaneFrameWnd *local_e4;
  int local_e0;
  CWindowDC *local_dc;
  int *local_d8;
  undefined1 local_d4 [16];
  undefined1 local_c4 [16];
  undefined1 local_b4 [16];
  tagRECT local_a4;
  undefined1 local_94 [16];
  tagRECT local_84;
  tagRECT local_74;
  tagRECT local_64;
  tagRECT local_54;
  tagRECT local_44;
  tagRECT local_34;
  tagRECT local_24;
  undefined4 local_8;
  undefined4 uStack_4;
  
  uStack_4 = 0x120;
  local_8 = 0x100ddfcf;
  pCVar3 = *(CDockingManager **)(this + 0x184);
  local_e4 = this;
  if (pCVar3 == (CDockingManager *)0x0) {
    pCVar2 = CWnd::FromHandlePermanent(*(HWND__ **)(this + 200));
    pCVar3 = CGlobalUtils::GetDockingManager((CGlobalUtils *)&PTR_vftable_10205db4,pCVar2);
    if (pCVar3 == (CDockingManager *)0x0) goto LAB_100de594;
  }
  if (*(int *)(pCVar3 + 8) == 0) {
    CWindowDC::CWindowDC(local_120,(CWnd *)this);
    pCVar17 = local_120;
    local_8 = 0;
    local_f4 = 0;
    local_dc = pCVar17;
    CDC::CDC(local_130);
    local_108 = (void *)0x0;
    local_10c = CBitmap::vftable;
    local_8 = CONCAT31(local_8._1_3_,2);
    local_f8 = (CGdiObject *)0x0;
    local_44.left = 0;
    local_44.top = 0;
    local_44.right = 0;
    local_44.bottom = 0;
    GetWindowRect(*(HWND *)(this + 0x20),&local_44);
    local_34.left = 0;
    local_34.top = 0;
    local_34.right = 0;
    local_34.bottom = 0;
    SetRect(&local_34,0,0,local_44.right - local_44.left,local_44.bottom - local_44.top);
    pHVar4 = CreateCompatibleDC(local_11c);
    iVar5 = CDC::Attach(local_130,pHVar4);
    if (iVar5 != 0) {
      pHVar6 = CreateCompatibleBitmap
                         (local_11c,local_34.right - local_34.left,local_34.bottom - local_34.top);
      iVar5 = CMenu::Attach((CMenu *)&local_10c,(HMENU__ *)pHVar6);
      if (iVar5 != 0) {
        local_f4 = 1;
        local_f8 = CDC::SelectGdiObject(local_12c,local_108);
        pCVar17 = (CWindowDC *)local_130;
        local_dc = pCVar17;
      }
    }
    local_64.left = 0;
    local_64.top = 0;
    local_64.right = 0;
    local_64.bottom = 0;
    local_74.left = 0;
    local_74.top = 0;
    local_74.right = 0;
    local_74.bottom = 0;
    GetWindowRect(*(HWND *)(this + 0x20),&local_74);
    GetClientRect(*(HWND *)(this + 0x20),&local_64);
    CWnd::ClientToScreen((CWnd *)this,&local_64);
    OffsetRect(&local_64,-local_74.left,-local_74.top);
    CDC::ExcludeClipRect((CDC *)local_120,&local_64);
    local_100 = 0;
    local_104 = CRgn::vftable;
    local_8 = CONCAT31(local_8._1_3_,3);
    BVar7 = IsRectEmpty((RECT *)(this + 0xf0));
    if (BVar7 == 0) {
      pHVar8 = CreateRectRgnIndirect((RECT *)(this + 0xf0));
      CMenu::Attach((CMenu *)&local_104,(HMENU__ *)pHVar8);
      CDC::SelectClipRgn((CDC *)local_120,(CRgn *)&local_104);
    }
    pcVar18 = *(code **)(*(int *)this + 0x214);
    guard_check_icall(pCVar17);
    (*pcVar18)();
    local_54.left = 0;
    local_54.top = 0;
    pcVar18 = *(code **)(*(int *)this + 0x1c8);
    local_54.right = 0;
    local_54.bottom = 0;
    guard_check_icall(&local_54);
    (*pcVar18)();
    pCVar3 = *(CDockingManager **)(this + 0x184);
    if (pCVar3 == (CDockingManager *)0x0) {
      pCVar2 = CWnd::FromHandlePermanent(*(HWND__ **)(this + 200));
      pCVar3 = CGlobalUtils::GetDockingManager((CGlobalUtils *)&PTR_vftable_10205db4,pCVar2);
    }
    if (*(int *)(pCVar3 + 8) != 0) {
      SetRectEmpty(&local_54);
    }
    pcVar18 = *(code **)(*(int *)this + 0x1c8);
    guard_check_icall(&local_54);
    (*pcVar18)();
    pCVar9 = CMFCVisualManager::GetInstance();
    pcVar18 = *(code **)(*(int *)pCVar9 + 0x148);
    guard_check_icall(local_dc,local_54.left,local_54.top,local_54.right,local_54.bottom,this,
                      *(undefined4 *)(this + 0x84));
    local_f0 = (*pcVar18)();
    iVar5 = -1;
    local_d8 = (int *)0xffffffff;
    pvVar16 = (void *)0x0;
    local_e0 = -1;
    local_ec = *(int *)(local_e4 + 0x10c);
    piVar12 = local_d8;
    if (local_ec != 0) {
      local_e8 = local_e4 + 0x108;
      piVar12 = (int *)0xffffffff;
      do {
        local_d8 = (int *)FUN_10034920(&local_ec);
        local_d8 = (int *)*local_d8;
        local_d8[8] = local_f0;
        if (local_d8[3] == 0) {
          if (local_d8[6] == 0) {
            pcVar18 = *(code **)(*local_d8 + 0xc);
            if (piVar12 == (int *)0xffffffff) {
              puVar15 = local_b4;
            }
            else {
              guard_check_icall(local_c4);
              piVar11 = (int *)(*pcVar18)();
              iVar5 = local_e0;
              if ((int)piVar12 < *piVar11) goto LAB_100de390;
              puVar15 = local_d4;
              pcVar18 = *(code **)(*local_d8 + 0xc);
            }
            guard_check_icall(puVar15);
            piVar12 = (int *)(*pcVar18)();
            piVar12 = (int *)*piVar12;
            iVar5 = local_e0;
          }
          else {
            pcVar18 = *(code **)(*local_d8 + 0xc);
            if (iVar5 == -1) {
              ptVar14 = &local_24;
            }
            else {
              guard_check_icall(local_94);
              iVar10 = (*pcVar18)();
              iVar5 = local_e0;
              if (*(int *)(iVar10 + 8) + 2 < local_e0) goto LAB_100de390;
              ptVar14 = &local_a4;
              pcVar18 = *(code **)(*local_d8 + 0xc);
            }
            guard_check_icall(ptVar14);
            iVar5 = (*pcVar18)();
            local_e0 = *(int *)(iVar5 + 8) + 2;
            iVar5 = local_e0;
          }
        }
LAB_100de390:
      } while (local_ec != 0);
    }
    local_d8 = piVar12;
    pCVar17 = local_dc;
    pCVar1 = local_e4;
    CDC::SetBkMode((CDC *)local_dc,1);
    pcVar18 = *(code **)(*(int *)pCVar17 + 0x30);
    guard_check_icall(local_f0);
    (*pcVar18)();
    iVar5 = *(int *)local_dc;
    pAVar13 = GetGlobalData();
    guard_check_icall(pAVar13 + 300);
    local_e8 = (CPaneFrameWnd *)(**(code **)(iVar5 + 0x28))();
    pcVar18 = *(code **)(*(int *)pCVar1 + 0x1b8);
    guard_check_icall(&local_fc);
    (*pcVar18)();
    local_8 = CONCAT31(local_8._1_3_,4);
    local_84.left = local_54.left;
    local_84.top = local_54.top;
    local_84.right = local_54.right;
    local_84.bottom = local_54.bottom;
    if (local_d8 != (int *)0xffffffff) {
      local_84.right = (LONG)local_d8;
    }
    if (local_e0 != -1) {
      local_84.left = local_e0;
    }
    InflateRect(&local_84,-2,0);
    pCVar17 = local_dc;
    iVar5 = *(int *)local_dc;
    guard_check_icall(local_fc,*(undefined4 *)(local_fc + -0xc),&local_84,0x8024);
    (**(code **)(iVar5 + 0x68))();
    pcVar18 = *(code **)(*(int *)pCVar17 + 0x28);
    guard_check_icall(local_e8);
    (*pcVar18)();
    CDC::SelectClipRgn((CDC *)pCVar17,(CRgn *)0x0);
    pcVar18 = *(code **)(*(int *)local_e4 + 0x218);
    guard_check_icall(local_dc);
    (*pcVar18)();
    if (local_f4 != 0) {
      local_24.left = 0;
      local_24.top = 0;
      local_24.right = 0;
      local_24.bottom = 0;
      iVar5 = CDC::GetClipBox((CDC *)local_120,&local_24);
      if (iVar5 != 1) {
        if (iVar5 != 2) {
          local_24.left = local_34.left;
          local_24.top = local_34.top;
          local_24.right = local_34.right;
          local_24.bottom = local_34.bottom;
        }
        BitBlt(local_11c,local_24.left,local_24.top,local_24.right - local_24.left,
               local_24.bottom - local_24.top,local_12c,local_24.left,local_24.top,0xcc0020);
      }
      if (local_f8 != (CGdiObject *)0x0) {
        pvVar16 = *(void **)(local_f8 + 4);
      }
      CDC::SelectGdiObject(local_12c,pvVar16);
    }
    FUN_100509af();
    FUN_10034f00();
    local_104 = CRgn::vftable;
    CImageList::~CImageList((CImageList *)&local_104);
    local_10c = CBitmap::vftable;
    CImageList::~CImageList((CImageList *)&local_10c);
    CDC::~CDC(local_130);
    CWindowDC::~CWindowDC(local_120);
  }
LAB_100de594:
  FUN_1017f5f4();
  return;
}

