// rea decompile_all
// name: CMFCVisualManagerOffice2007::OnDrawTasksGroupCaption
// address: 0x4b9b13
// body: available
// range: 0x4b9b13-0x4b9fa4 inclusive
// non_contiguous: false
// provider: Ghidra 12.1.2 (ghidra)
// analysis_profile: ac6d50be2cdf54f7005df47d1ed7e7ef55dee595681eb1b7c2e0b00d70cd697d
// limitations: The session serves operations only after Ghidra reports default auto-analysis complete; incomplete analysis does not expose partial results.; The imported Program and temporary project are ephemeral and deleted on close. Annotation operations edit session database metadata; original executable bytes are never written.; Cancelling an active Ghidra request terminates its ephemeral database and discards session annotations. The selected target remains open; the next provider query imports the original artifact again.; Default-space addresses use lowercase 0x-prefixed hexadecimal; other address spaces use <percent-encoded-space>:0x<hex>.; The Ghidra Program references PDB ISPToolForMsi.pdb (GUID b8f2ac8f-1d6f-438d-800f-ed4a14426ac6, age (hex) 1, signature unknown, version RSDS); Ghidra reports load state unknown. Original names and types may be missing; an empty name search does not prove a procedure is absent. Use list_procedures and address-based analysis to inspect recovered functions. REA does not admit a caller-selected PDB companion.; This session uses Ghidra 12.1.2. The bridge is verified against 12.1.4; other 12.1.x builds are accepted and the observed version is reported.; Pseudocode is Ghidra decompiler output, not original source and not text-equivalent to Hopper output.; External functions and functions without an analyzable body return null; other decompiler failures remain explicit.
// pseudocode: provider-specific; not original source


/* WARNING: Function: __EH_prolog3_GS replaced with injection: EH_prolog3 */
/* Library Function - Single Match
    public: virtual void __thiscall CMFCVisualManagerOffice2007::OnDrawTasksGroupCaption(class CDC
   *,class CMFCTasksPaneTaskGroup *,int,int,int)
   
   Library: Visual Studio 2015 Release */

void __thiscall
CMFCVisualManagerOffice2007::OnDrawTasksGroupCaption
          (CMFCVisualManagerOffice2007 *this,CDC *param_1,CMFCTasksPaneTaskGroup *param_2,
          int param_3,int param_4,int param_5)

{
  code *pcVar1;
  CDC *pCVar2;
  int iVar3;
  undefined4 uVar4;
  undefined4 uVar5;
  AFX_GLOBAL_DATA *pAVar6;
  int iVar7;
  CPen *pCVar8;
  COLORREF CVar9;
  undefined4 uVar10;
  undefined4 uVar11;
  int iVar12;
  ulong uVar13;
  undefined4 local_68;
  undefined4 local_64;
  CDrawingManager local_60 [8];
  int local_58;
  COLORREF local_54;
  int local_50;
  int local_4c;
  int local_48;
  int local_44;
  CMFCTasksPaneTaskGroup *local_40;
  CDC *local_3c;
  CMFCTasksPaneTaskGroup *local_38;
  int local_34;
  int local_30;
  int local_2c;
  int iStack_28;
  tagRECT local_24;
  undefined4 local_8;
  undefined4 uStack_4;
  
  uStack_4 = 100;
  local_8 = 0x4b9b1f;
  local_3c = param_1;
  local_40 = param_2;
  iVar3 = CanDrawImage(this);
  if (iVar3 == 0) {
    CMFCVisualManagerOffice2003::OnDrawTasksGroupCaption
              ((CMFCVisualManagerOffice2003 *)this,param_1,param_2,param_3,param_4,param_5);
    goto LAB_004b9f9d;
  }
  local_38 = param_2 + 0x34;
  local_50 = *(int *)local_38;
  local_4c = *(int *)(param_2 + 0x38);
  local_48 = *(int *)(param_2 + 0x3c);
  local_44 = *(int *)(param_2 + 0x40);
  CDrawingManager::CDrawingManager(local_60,local_3c);
  local_8 = 0;
  if (*(int *)(local_40 + 0x2c) == 0) {
    if (0x13 < *(int *)(this + 0xc000)) {
      if (param_3 == 0) {
        uVar10 = *(undefined4 *)(this + 0x1bc);
        uVar4 = *(undefined4 *)(this + 0x1c0);
        uVar11 = *(undefined4 *)(this + 0x1c0);
        uVar5 = *(undefined4 *)(this + 0x1bc);
      }
      else {
        uVar10 = *(undefined4 *)(this + 0x9044);
        uVar4 = *(undefined4 *)(this + 0x9048);
        uVar11 = *(undefined4 *)(this + 0x9048);
        uVar5 = *(undefined4 *)(this + 0x9044);
      }
      goto LAB_004b9c8e;
    }
    if (param_3 == 0) {
      uVar10 = *(undefined4 *)(this + 0x1bc);
      uVar4 = *(undefined4 *)(this + 0x1c0);
    }
    else {
      uVar10 = *(undefined4 *)(this + 0x9044);
      uVar4 = *(undefined4 *)(this + 0x9048);
    }
LAB_004b9c2a:
    CDrawingManager::FillGradient
              (local_60,*(undefined4 *)local_38,*(undefined4 *)(local_38 + 4),
               *(undefined4 *)(local_38 + 8),*(undefined4 *)(local_38 + 0xc),uVar4,uVar10,1,0,0);
  }
  else {
    if (*(int *)(this + 0xc000) < 0x14) {
      if (param_3 == 0) {
        uVar10 = *(undefined4 *)(this + 0x1c4);
        uVar4 = *(undefined4 *)(this + 0x1c8);
      }
      else {
        uVar10 = *(undefined4 *)(this + 0x904c);
        uVar4 = *(undefined4 *)(this + 0x9050);
      }
      goto LAB_004b9c2a;
    }
    if (param_3 == 0) {
      uVar10 = *(undefined4 *)(this + 0x1c4);
      uVar4 = *(undefined4 *)(this + 0x1c8);
      uVar11 = *(undefined4 *)(this + 0x1c8);
      uVar5 = *(undefined4 *)(this + 0x1c4);
    }
    else {
      uVar10 = *(undefined4 *)(this + 0x904c);
      uVar4 = *(undefined4 *)(this + 0x9050);
      uVar11 = *(undefined4 *)(this + 0x9050);
      uVar5 = *(undefined4 *)(this + 0x904c);
    }
LAB_004b9c8e:
    CDrawingManager::Fill4ColorsGradient
              (local_60,*(undefined4 *)local_38,*(undefined4 *)(local_38 + 4),
               *(undefined4 *)(local_38 + 8),*(undefined4 *)(local_38 + 0xc),uVar5,uVar11,uVar4,
               uVar10,0,0x32);
  }
  if ((*(int *)(local_40 + 0x5c) == 0) ||
     (((local_4c - local_50) - local_44) + local_48 <= *(int *)(local_40 + 0x54))) {
    local_38 = (CMFCTasksPaneTaskGroup *)0x0;
  }
  else {
    pcVar1 = *(code **)(*(int *)this + 0x16c);
    local_38 = (CMFCTasksPaneTaskGroup *)0x1;
    guard_check_icall(local_3c,local_40,5,param_3,param_4,param_5);
    (*pcVar1)();
  }
  iVar3 = *(int *)local_3c;
  pAVar6 = GetGlobalData();
  guard_check_icall(pAVar6 + 300);
  local_64 = (**(code **)(iVar3 + 0x28))();
  pCVar2 = local_3c;
  local_54 = GetTextColor(*(HDC *)(local_3c + 8));
  if ((param_5 == 0) || (param_3 == 0)) {
    iVar3 = *(int *)(local_40 + 0x60);
    if (iVar3 == -1) {
      if (*(int *)(local_40 + 0x2c) == 0) {
        iVar3 = *(int *)(this + 0x905c);
      }
      else {
        iVar3 = *(int *)(this + 0x9054);
      }
    }
  }
  else {
    iVar3 = *(int *)(local_40 + 100);
    if (iVar3 == -1) {
      if (*(int *)(local_40 + 0x2c) == 0) {
        iVar3 = *(int *)(this + 0x9060);
      }
      else {
        iVar3 = *(int *)(this + 0x9058);
      }
    }
  }
  pcVar1 = *(code **)(*(int *)pCVar2 + 0x30);
  guard_check_icall(iVar3);
  (*pcVar1)();
  iVar7 = CDC::SetBkMode(local_3c,1);
  pCVar2 = local_3c;
  iVar3 = *(int *)(*(int *)(*(int *)(local_40 + 4) + 8) + 0x3bc);
  local_30 = *(int *)(*(int *)(*(int *)(local_40 + 4) + 8) + 0x3c0);
  if (iVar3 == -1) {
    iVar3 = *(int *)(this + 0x90);
  }
  iStack_28 = local_44;
  local_34 = iVar3;
  if (local_38 != (CMFCTasksPaneTaskGroup *)0x0) {
    local_34 = *(int *)(local_40 + 0x54) + 5;
  }
  local_34 = local_34 + local_50;
  if (local_30 == -1) {
    local_30 = *(int *)(this + 0x94);
  }
  local_30 = local_4c + local_30;
  iVar12 = iVar3;
  if (param_5 != 0) {
    iVar12 = local_44 - local_4c;
  }
  local_2c = local_34;
  if (local_34 <= local_48 - iVar12) {
    if (param_5 != 0) {
      iVar3 = local_44 - local_4c;
    }
    local_2c = local_48 - iVar3;
  }
  iVar3 = *(int *)local_3c;
  guard_check_icall(*(int *)(local_40 + 8),*(undefined4 *)(*(int *)(local_40 + 8) + -0xc),&local_34,
                    0x8024);
  (**(code **)(iVar3 + 0x68))();
  CDC::SetBkMode(pCVar2,iVar7);
  pcVar1 = *(code **)(*(int *)pCVar2 + 0x28);
  guard_check_icall(local_64);
  (*pcVar1)();
  pcVar1 = *(code **)(*(int *)pCVar2 + 0x30);
  guard_check_icall(local_54);
  (*pcVar1)();
  if ((param_5 != 0) && (*(int *)(*(int *)(local_40 + 8) + -0xc) != 0)) {
    FUN_0045bc7e(&local_58);
    local_24.left = local_50;
    iVar3 = (-(((local_44 - local_4c) + 1) / 2) - (local_58 + 1) / 2) + local_48;
    if (local_50 <= iVar3) {
      local_24.left = iVar3;
    }
    iVar3 = (-(((local_44 - local_4c) + 1) / 2) - (int)(local_54 + 1) / 2) + local_44;
    local_24.top = local_4c;
    if (local_4c <= iVar3) {
      local_24.top = iVar3;
    }
    local_24.right = local_24.left + local_58;
    local_24.bottom = local_54 + local_24.top;
    local_38 = (CMFCTasksPaneTaskGroup *)local_24.left;
    if ((local_24.right <= local_48) && (local_24.bottom <= local_44)) {
      if (param_3 != 0) {
        pAVar6 = GetGlobalData();
        pCVar8 = CDC::SelectObject(pCVar2,(CPen *)(pAVar6 + 0xd0));
        CVar9 = GetBkColor(*(HDC *)(pCVar2 + 8));
        pAVar6 = GetGlobalData();
        uVar13 = *(ulong *)(pAVar6 + 0x58);
        pAVar6 = GetGlobalData();
        CDC::Draw3dRect(pCVar2,&local_24,*(ulong *)(pAVar6 + 0x6c),uVar13);
        pcVar1 = *(code **)(*(int *)pCVar2 + 0x2c);
        guard_check_icall(CVar9);
        (*pcVar1)();
        CDC::SelectObject(pCVar2,pCVar8);
      }
      local_68 = 0;
      local_64 = 0;
      CMenuImages::Draw(pCVar2,(-(uint)(*(int *)(local_40 + 0x30) != 0) & 0xfffffff9) + 7,
                        (CPoint *)&local_24,0,(CSize *)&local_68);
    }
  }
  FUN_00461ef9();
LAB_004b9f9d:
  FUN_0055bae6();
  return;
}

