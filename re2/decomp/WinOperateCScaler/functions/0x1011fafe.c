// rea decompile_all
// name: CMFCVisualManagerOffice2003::OnDrawTasksGroupCaption
// address: 0x1011fafe
// body: available
// range: 0x1011fafe-0x1011ff72 inclusive
// non_contiguous: false
// provider: Ghidra 12.1.2 (ghidra)
// analysis_profile: b075844f08879296d957518397cd0ddda73db81dce53d00d3f0e702766fc2af6
// limitations: The session serves operations only after Ghidra reports default auto-analysis complete; incomplete analysis does not expose partial results.; The imported Program and temporary project are ephemeral and deleted on close. Annotation operations edit session database metadata; original executable bytes are never written.; Cancelling an active Ghidra request terminates its ephemeral database and discards session annotations. The selected target remains open; the next provider query imports the original artifact again.; Default-space addresses use lowercase 0x-prefixed hexadecimal; other address spaces use <percent-encoded-space>:0x<hex>.; The Ghidra Program references PDB WinOperateCScaler.pdb (GUID a6737962-efea-4805-8ae6-1fc1ef126554, age (hex) 1, signature unknown, version RSDS); Ghidra reports load state unknown. Original names and types may be missing; an empty name search does not prove a procedure is absent. Use list_procedures and address-based analysis to inspect recovered functions. REA does not admit a caller-selected PDB companion.; This session uses Ghidra 12.1.2. The bridge is verified against 12.1.4; other 12.1.x builds are accepted and the observed version is reported.; Pseudocode is Ghidra decompiler output, not original source and not text-equivalent to Hopper output.; External functions and functions without an analyzable body return null; other decompiler failures remain explicit.
// pseudocode: provider-specific; not original source


/* WARNING: Function: __EH_prolog3_GS replaced with injection: EH_prolog3 */
/* Library Function - Single Match
    public: virtual void __thiscall CMFCVisualManagerOffice2003::OnDrawTasksGroupCaption(class CDC
   *,class CMFCTasksPaneTaskGroup *,int,int,int)
   
   Library: Visual Studio 2015 Release */

void __thiscall
CMFCVisualManagerOffice2003::OnDrawTasksGroupCaption
          (CMFCVisualManagerOffice2003 *this,CDC *param_1,CMFCTasksPaneTaskGroup *param_2,
          int param_3,int param_4,int param_5)

{
  code *pcVar1;
  CMFCTasksPaneTaskGroup *pCVar2;
  AFX_GLOBAL_DATA *pAVar3;
  int iVar4;
  HRGN pHVar5;
  CPen *pCVar6;
  COLORREF CVar7;
  int iVar8;
  CMFCTasksPaneTaskGroup *pCVar9;
  IMAGES_IDS IVar10;
  ulong uVar11;
  CDrawingManager local_b0 [8];
  int local_a8;
  undefined **local_a4;
  undefined4 local_a0;
  int local_9c;
  int local_98;
  COLORREF local_94;
  undefined4 local_90;
  undefined4 local_8c;
  int local_88;
  int local_84;
  int local_80;
  int local_7c;
  CMFCTasksPaneTaskGroup *local_78;
  CMFCTasksPaneTaskGroup *local_74;
  CMFCVisualManagerOffice2003 *local_70;
  int local_6c;
  int local_68;
  int local_64;
  int iStack_60;
  tagRECT local_5c;
  POINT local_4c;
  int local_44;
  int local_40;
  int local_3c;
  int local_38;
  int local_34;
  int local_30;
  int local_2c;
  int local_28;
  undefined4 local_24;
  int local_20;
  undefined4 local_1c;
  LONG local_18;
  undefined4 local_8;
  undefined4 uStack_4;
  
  uStack_4 = 0xa0;
  local_8 = 0x1011fb0d;
  local_78 = param_2;
  local_70 = this;
  pAVar3 = GetGlobalData();
  if (8 < *(int *)(pAVar3 + 0x1ac)) {
    pAVar3 = GetGlobalData();
    iVar4 = AFX_GLOBAL_DATA::IsHighContrastMode(pAVar3);
    pCVar9 = local_78;
    if (iVar4 == 0) {
      local_74 = param_2 + 0x34;
      local_a4 = CRgn::vftable;
      local_4c.x = *(LONG *)local_74;
      local_88 = *(int *)local_74;
      local_84 = *(int *)(param_2 + 0x38);
      local_80 = *(int *)(param_2 + 0x3c);
      local_7c = *(int *)(param_2 + 0x40);
      local_28 = *(int *)(local_78 + 0x38);
      local_4c.y = *(LONG *)(local_78 + 0x40);
      local_40 = local_28 + 4;
      local_3c = local_4c.x + 1;
      local_38 = local_28 + 2;
      local_34 = local_4c.x + 2;
      local_30 = local_28 + 1;
      local_2c = local_4c.x + 4;
      local_24 = *(undefined4 *)(local_78 + 0x3c);
      local_a0 = 0;
      local_8 = 0;
      local_44 = local_4c.x;
      local_20 = local_28;
      local_1c = local_24;
      local_18 = local_4c.y;
      pHVar5 = CreatePolygonRgn(&local_4c,7,2);
      CMenu::Attach((CMenu *)&local_a4,(HMENU__ *)pHVar5);
      CDC::SelectClipRgn(param_1,(CRgn *)&local_a4);
      CDrawingManager::CDrawingManager(local_b0,param_1);
      local_8 = CONCAT31(local_8._1_3_,1);
      if (*(int *)(pCVar9 + 0x2c) == 0) {
        iVar4 = *(int *)(local_70 + 0x1bc);
        iVar8 = *(int *)(local_70 + 0x1c0);
        pCVar9 = local_74;
      }
      else {
        iVar4 = *(int *)(local_70 + 0x1c8);
        iVar8 = *(int *)(local_70 + 0x1c4);
        pCVar9 = pCVar9 + 0x34;
      }
      CDrawingManager::FillGradient
                (local_b0,*(int *)pCVar9,*(int *)(pCVar9 + 4),*(int *)(pCVar9 + 8),
                 *(int *)(pCVar9 + 0xc),iVar8,iVar4,0,0,0);
      CDC::SelectClipRgn(param_1,(CRgn *)0x0);
      pCVar9 = local_78;
      if ((*(int *)(local_78 + 0x5c) == 0) ||
         (((local_84 - local_88) - local_7c) + local_80 <= *(int *)(local_78 + 0x54))) {
        local_9c = 0;
      }
      else {
        local_9c = 1;
        pcVar1 = *(code **)(*(int *)local_70 + 0x16c);
        guard_check_icall(param_1,local_78,5,param_3,param_4,param_5);
        (*pcVar1)();
      }
      iVar4 = *(int *)param_1;
      pAVar3 = GetGlobalData();
      guard_check_icall(pAVar3 + 300);
      local_8c = (**(code **)(iVar4 + 0x28))();
      local_94 = GetTextColor(*(HDC *)(param_1 + 8));
      if ((param_5 == 0) || (param_3 == 0)) {
        iVar4 = *(int *)(pCVar9 + 0x60);
      }
      else {
        iVar4 = *(int *)(pCVar9 + 100);
      }
      if (iVar4 == -1) {
        if (*(int *)(pCVar9 + 0x2c) == 0) {
          pAVar3 = GetGlobalData();
          iVar4 = *(int *)(pAVar3 + 0x3c);
        }
        else {
          iVar4 = *(int *)(local_70 + 0x1dc);
        }
      }
      pcVar1 = *(code **)(*(int *)param_1 + 0x30);
      guard_check_icall(iVar4);
      (*pcVar1)();
      local_a8 = CDC::SetBkMode(param_1,1);
      pCVar2 = local_78;
      local_74 = *(CMFCTasksPaneTaskGroup **)(*(int *)(*(int *)(pCVar9 + 4) + 8) + 0x3c0);
      iVar4 = *(int *)(*(int *)(*(int *)(pCVar9 + 4) + 8) + 0x3bc);
      if (iVar4 == -1) {
        iVar4 = *(int *)(local_70 + 0x90);
      }
      iStack_60 = local_7c;
      local_6c = iVar4;
      if (local_9c != 0) {
        local_6c = *(int *)(local_78 + 0x54) + 5;
      }
      local_6c = local_6c + local_88;
      local_68 = (int)local_74;
      if (local_74 == (CMFCTasksPaneTaskGroup *)0xffffffff) {
        local_68 = *(int *)(local_70 + 0x94);
      }
      local_68 = local_84 + local_68;
      iVar8 = iVar4;
      if (param_5 != 0) {
        iVar8 = local_7c - local_84;
      }
      local_64 = local_6c;
      if (local_6c <= local_80 - iVar8) {
        if (param_5 != 0) {
          iVar4 = local_7c - local_84;
        }
        local_64 = local_80 - iVar4;
      }
      iVar4 = *(int *)param_1;
      guard_check_icall(*(int *)(local_78 + 8),*(undefined4 *)(*(int *)(local_78 + 8) + -0xc),
                        &local_6c,0x8024);
      (**(code **)(iVar4 + 0x68))();
      CDC::SetBkMode(param_1,local_a8);
      pcVar1 = *(code **)(*(int *)param_1 + 0x28);
      guard_check_icall(local_8c);
      (*pcVar1)();
      pcVar1 = *(code **)(*(int *)param_1 + 0x30);
      guard_check_icall(local_94);
      (*pcVar1)();
      if ((param_5 != 0) && (*(int *)(*(int *)(pCVar2 + 8) + -0xc) != 0)) {
        FUN_10084bc5(&local_98);
        local_5c.left = local_88;
        iVar4 = (-(((local_7c - local_84) + 1) / 2) - (local_98 + 1) / 2) + local_80;
        if (local_88 <= iVar4) {
          local_5c.left = iVar4;
        }
        iVar4 = (-(((local_7c - local_84) + 1) / 2) - (int)(local_94 + 1) / 2) + local_7c;
        local_5c.top = local_84;
        if (local_84 <= iVar4) {
          local_5c.top = iVar4;
        }
        local_5c.right = local_5c.left + local_98;
        local_5c.bottom = local_94 + local_5c.top;
        local_74 = (CMFCTasksPaneTaskGroup *)local_5c.left;
        if ((local_5c.right <= local_80) && (local_5c.bottom <= local_7c)) {
          if (param_3 != 0) {
            pAVar3 = GetGlobalData();
            pCVar6 = CDC::SelectObject(param_1,(CPen *)(pAVar3 + 0xd0));
            CVar7 = GetBkColor(*(HDC *)(param_1 + 8));
            pAVar3 = GetGlobalData();
            uVar11 = *(ulong *)(pAVar3 + 0x58);
            pAVar3 = GetGlobalData();
            CDC::Draw3dRect(param_1,&local_5c,*(ulong *)(pAVar3 + 0x6c),uVar11);
            pcVar1 = *(code **)(*(int *)param_1 + 0x2c);
            guard_check_icall(CVar7);
            (*pcVar1)();
            CDC::SelectObject(param_1,pCVar6);
          }
          local_90 = 0;
          local_8c = 0;
          if (*(int *)(local_78 + 0x30) == 0) {
            IVar10 = 7;
          }
          else {
            IVar10 = 0;
          }
          CMenuImages::Draw(param_1,IVar10,(CPoint *)&local_5c,0,(CSize *)&local_90);
        }
      }
      FUN_10084c54();
      local_a4 = CRgn::vftable;
      CImageList::~CImageList((CImageList *)&local_a4);
      goto LAB_1011ff6b;
    }
  }
  FUN_1011ad2b(param_1,param_2,param_3,param_4,param_5);
LAB_1011ff6b:
  FUN_10154478();
  return;
}

