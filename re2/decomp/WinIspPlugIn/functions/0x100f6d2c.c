// rea decompile_all
// name: CGlobalUtils::CheckAlignment
// address: 0x100f6d2c
// body: available
// range: 0x100f6d2c-0x100f705a inclusive
// non_contiguous: false
// provider: Ghidra 12.1.2 (ghidra)
// analysis_profile: b075844f08879296d957518397cd0ddda73db81dce53d00d3f0e702766fc2af6
// limitations: The session serves operations only after Ghidra reports default auto-analysis complete; incomplete analysis does not expose partial results.; The imported Program and temporary project are ephemeral and deleted on close. Annotation operations edit session database metadata; original executable bytes are never written.; Cancelling an active Ghidra request terminates its ephemeral database and discards session annotations. The selected target remains open; the next provider query imports the original artifact again.; Default-space addresses use lowercase 0x-prefixed hexadecimal; other address spaces use <percent-encoded-space>:0x<hex>.; The Ghidra Program references PDB WinIspPlugIn.pdb (GUID d9f398c7-6c98-49a8-af25-a0659d5ad2f3, age (hex) 1, signature unknown, version RSDS); Ghidra reports load state unknown. Original names and types may be missing; an empty name search does not prove a procedure is absent. Use list_procedures and address-based analysis to inspect recovered functions. REA does not admit a caller-selected PDB companion.; This session uses Ghidra 12.1.2. The bridge is verified against 12.1.4; other 12.1.x builds are accepted and the observed version is reported.; Pseudocode is Ghidra decompiler output, not original source and not text-equivalent to Hopper output.; External functions and functions without an analyzable body return null; other decompiler failures remain explicit.
// pseudocode: provider-specific; not original source


/* Library Function - Single Match
    public: int __thiscall CGlobalUtils::CheckAlignment(class CPoint,class CBasePane *,int,class
   CDockingManager const *,int,unsigned long &,unsigned long,struct tagRECT const *)const 
   
   Library: Visual Studio 2015 Release */

int __thiscall
CGlobalUtils::CheckAlignment
          (undefined4 param_1,LONG param_2,LONG param_3,CObject *param_4,int param_5,
          CDockingManager *param_6,int param_7,undefined4 *param_8,uint param_9,RECT *param_10)

{
  int iVar1;
  code *pcVar2;
  POINT pt;
  POINT pt_00;
  POINT pt_01;
  POINT pt_02;
  POINT pt_03;
  POINT pt_04;
  POINT pt_05;
  bool bVar3;
  HWND pHVar4;
  CWnd *pCVar5;
  CObject *pCVar6;
  BOOL BVar7;
  undefined4 uVar8;
  int iVar9;
  int local_48;
  int local_3c;
  undefined4 local_38;
  undefined4 local_34;
  undefined4 local_30;
  undefined4 local_2c;
  tagRECT local_28;
  RECT local_18;
  uint local_8;
  
  local_8 = DAT_1023dfec ^ (uint)&stack0xfffffffc;
  bVar3 = false;
  iVar9 = -1;
  if (param_6 == (CDockingManager *)0x0) {
    if (param_4 != (CObject *)0x0) {
      pHVar4 = GetParent(*(HWND *)(param_4 + 0x20));
      pCVar5 = CWnd::FromHandle(pHVar4);
      param_6 = GetDockingManager((CGlobalUtils *)&PTR_vftable_1023d944,pCVar5);
      if (param_6 != (CDockingManager *)0x0) goto LAB_100f6d7b;
    }
  }
  else {
LAB_100f6d7b:
    iVar1 = *(int *)(param_6 + 0x1b8);
    if (((iVar1 != 0) && (*(int *)(iVar1 + 8) != 0)) && (*(int *)(iVar1 + 4) != 0)) {
      iVar9 = *(int *)(iVar1 + 0x110);
      bVar3 = true;
    }
  }
  local_28.left = 0;
  local_28.top = 0;
  local_28.right = 0;
  local_28.bottom = 0;
  if (param_4 == (CObject *)0x0) {
    if (param_10 == (RECT *)0x0) goto LAB_100f6f71;
    CopyRect(&local_28,param_10);
  }
  else {
    GetWindowRect(*(HWND *)(param_4 + 0x20),&local_28);
  }
  local_48 = 0;
  local_3c = 0;
  pCVar6 = AfxDynamicDownCast((CRuntimeClass *)&PTR_s_CDockablePane_1023db9c,param_4);
  if (pCVar6 != (CObject *)0x0) {
    pcVar2 = *(code **)(*(int *)pCVar6 + 0x1a4);
    guard_check_icall();
    local_48 = (*pcVar2)();
    local_38 = 0;
    local_34 = 0;
    local_30 = 0;
    local_2c = 0;
    local_18.left = 0;
    local_18.top = 0;
    local_18.right = 0;
    local_18.bottom = 0;
    pcVar2 = *(code **)(*(int *)pCVar6 + 0x32c);
    guard_check_icall(&local_38,&local_18);
    (*pcVar2)();
    local_3c = local_18.bottom - local_18.top;
  }
  if (param_7 == 0) {
    if (bVar3) {
      iVar9 = iVar9 + -4;
      goto LAB_100f6e5d;
    }
    local_18.left = local_28.left - param_5;
    local_18.top = local_28.top - param_5;
    local_18.right = local_28.right + param_5;
    local_18.bottom = local_48 + local_28.top + param_5;
    pt_03.y = param_3;
    pt_03.x = param_2;
    BVar7 = PtInRect(&local_18,pt_03);
    if ((BVar7 == 0) || (uVar8 = 0x2000, (param_9 & 0x2000) == 0)) {
      local_18.right = local_28.left + param_5;
      local_18.bottom = local_28.bottom + param_5;
      pt_04.y = param_3;
      pt_04.x = param_2;
      BVar7 = PtInRect(&local_18,pt_04);
      if ((BVar7 == 0) || (uVar8 = 0x1000, (param_9 & 0x1000) == 0)) {
        local_18.left = local_28.left - param_5;
        local_18.top = (local_28.bottom - local_3c) - param_5;
        local_18.right = local_28.right + param_5;
        local_18.bottom = local_28.bottom + param_5;
        pt_05.y = param_3;
        pt_05.x = param_2;
        BVar7 = PtInRect(&local_18,pt_05);
        if ((BVar7 == 0) || (uVar8 = 0x8000, (param_9 & 0x8000) == 0)) {
          iVar9 = local_28.right - param_5;
          goto LAB_100f6f43;
        }
      }
    }
  }
  else {
    if (bVar3) {
LAB_100f6e5d:
      if (iVar9 == 0) {
        *param_8 = 0x1000;
      }
      else if (iVar9 == 1) {
        *param_8 = 0x4000;
      }
      else if (iVar9 == 2) {
        *param_8 = 0x2000;
      }
      else if (iVar9 == 3) {
        *param_8 = 0x8000;
      }
      goto LAB_100f6f71;
    }
    local_18.left = local_28.left - param_5;
    local_18.top = local_28.top - param_5;
    local_18.bottom = local_28.top;
    local_18.right = local_28.right + param_5;
    pt.y = param_3;
    pt.x = param_2;
    BVar7 = PtInRect(&local_18,pt);
    if ((BVar7 == 0) || (uVar8 = 0x2000, (param_9 & 0x2000) == 0)) {
      local_18.right = local_28.left;
      local_18.bottom = local_28.bottom + param_5;
      pt_00.y = param_3;
      pt_00.x = param_2;
      BVar7 = PtInRect(&local_18,pt_00);
      if ((BVar7 == 0) || (uVar8 = 0x1000, (param_9 & 0x1000) == 0)) {
        local_18.left = local_28.left - param_5;
        local_18.right = local_28.right + param_5;
        local_18.top = local_28.bottom;
        local_18.bottom = local_28.bottom + param_5;
        pt_01.y = param_3;
        pt_01.x = param_2;
        BVar7 = PtInRect(&local_18,pt_01);
        iVar9 = local_28.right;
        if ((BVar7 == 0) || (uVar8 = 0x8000, (param_9 & 0x8000) == 0)) {
LAB_100f6f43:
          local_18.top = local_28.top - param_5;
          pt_02.y = param_3;
          pt_02.x = param_2;
          local_18.left = iVar9;
          BVar7 = PtInRect(&local_18,pt_02);
          if ((BVar7 == 0) || (uVar8 = 0x4000, (param_9 & 0x4000) == 0)) goto LAB_100f6f71;
        }
      }
    }
  }
  *param_8 = uVar8;
LAB_100f6f71:
  iVar9 = __security_check_cookie(local_8 ^ (uint)&stack0xfffffffc);
  return iVar9;
}

