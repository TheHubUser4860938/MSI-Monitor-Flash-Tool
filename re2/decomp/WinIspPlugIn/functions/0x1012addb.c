// rea decompile_all
// name: CDockablePane::Dock
// address: 0x1012addb
// body: available
// range: 0x1012addb-0x1012b0f5 inclusive
// non_contiguous: false
// provider: Ghidra 12.1.2 (ghidra)
// analysis_profile: b075844f08879296d957518397cd0ddda73db81dce53d00d3f0e702766fc2af6
// limitations: The session serves operations only after Ghidra reports default auto-analysis complete; incomplete analysis does not expose partial results.; The imported Program and temporary project are ephemeral and deleted on close. Annotation operations edit session database metadata; original executable bytes are never written.; Cancelling an active Ghidra request terminates its ephemeral database and discards session annotations. The selected target remains open; the next provider query imports the original artifact again.; Default-space addresses use lowercase 0x-prefixed hexadecimal; other address spaces use <percent-encoded-space>:0x<hex>.; The Ghidra Program references PDB WinIspPlugIn.pdb (GUID d9f398c7-6c98-49a8-af25-a0659d5ad2f3, age (hex) 1, signature unknown, version RSDS); Ghidra reports load state unknown. Original names and types may be missing; an empty name search does not prove a procedure is absent. Use list_procedures and address-based analysis to inspect recovered functions. REA does not admit a caller-selected PDB companion.; This session uses Ghidra 12.1.2. The bridge is verified against 12.1.4; other 12.1.x builds are accepted and the observed version is reported.; Pseudocode is Ghidra decompiler output, not original source and not text-equivalent to Hopper output.; External functions and functions without an analyzable body return null; other decompiler failures remain explicit.
// pseudocode: provider-specific; not original source


/* Library Function - Single Match
    protected: virtual int __thiscall CDockablePane::Dock(class CBasePane *,struct tagRECT const
   *,enum AFX_DOCK_METHOD)
   
   Library: Visual Studio 2015 Release */

int __thiscall
CDockablePane::Dock(CDockablePane *this,CBasePane *param_1,tagRECT *param_2,AFX_DOCK_METHOD param_3)

{
  code *pcVar1;
  CFrameWnd *pCVar2;
  int iVar3;
  CPaneDivider *pCVar4;
  undefined4 uVar5;
  tagPOINT local_1c;
  CPaneDivider *local_14;
  tagPOINT local_10;
  undefined4 local_8;
  
  pCVar2 = AFXGetParentFrame((CWnd *)this);
  AfxDynamicDownCast((CRuntimeClass *)&PTR_s_CFrameWnd_101e3440,(CObject *)pCVar2);
  if (param_1 != (CBasePane *)0x0) {
    pcVar1 = *(code **)(*(int *)param_1 + 0x184);
    guard_check_icall(this);
    iVar3 = (*pcVar1)();
    if ((iVar3 == 0) && (param_1 != (CBasePane *)this)) {
      return 0;
    }
  }
  if ((param_3 != 4) || (param_2 != (tagRECT *)0x0)) {
    this[0x2c8] = (CDockablePane)0x0;
    if ((param_3 == 2) || (param_3 == 3)) {
      local_10.y = (LONG)CRecentDockSiteInfo::GetRecentTabContainer
                                   ((CRecentDockSiteInfo *)(this + 0x1e4),1);
      CWnd::ShowWindow((CWnd *)this,0);
      iVar3 = *(int *)this;
      pCVar2 = AFXGetParentFrame((CWnd *)this);
      pcVar1 = *(code **)(iVar3 + 0x308);
      guard_check_icall(pCVar2,param_3);
      (*pcVar1)();
      pcVar1 = *(code **)(*(int *)this + 0x1e0);
      guard_check_icall(*(undefined4 *)(this + 0x1f8));
      (*pcVar1)();
      pCVar4 = CRecentDockSiteInfo::GetRecentDefaultPaneDivider
                         ((CRecentDockSiteInfo *)(this + 0x1e4));
      local_14 = pCVar4;
      if (pCVar4 != (CPaneDivider *)0x0) {
        SetDefaultPaneDivider(this,*(HWND__ **)(pCVar4 + 0x20));
      }
      if ((CPaneContainer *)local_10.y != (CPaneContainer *)0x0) {
        iVar3 = CRecentDockSiteInfo::IsRecentLeftPane((CRecentDockSiteInfo *)(this + 0x1e4),1);
        if (iVar3 == 0) {
          iVar3 = *(int *)(local_10.y + 8);
        }
        else {
          iVar3 = *(int *)(local_10.y + 4);
        }
        if (iVar3 != 0) {
          pcVar1 = *(code **)(*(int *)this + 0x34c);
          guard_check_icall(iVar3,2,1,0);
          iVar3 = (*pcVar1)();
          local_14 = (CPaneDivider *)(uint)(iVar3 != 0);
          if (local_14 != (CPaneDivider *)0x0) {
            pcVar1 = *(code **)(*(int *)this + 0x224);
            guard_check_icall(1,0,1);
            (*pcVar1)();
          }
          pcVar1 = *(code **)(*(int *)this + 0x268);
          guard_check_icall(0);
          (*pcVar1)();
          return (int)local_14;
        }
      }
      if (pCVar4 == (CPaneDivider *)0x0) {
        CWnd::ShowWindow((CWnd *)this,5);
        if (param_2 == (tagRECT *)0x0) {
          param_2 = (tagRECT *)(this + 0x218);
        }
        pCVar4 = (CPaneDivider *)0x0;
        uVar5 = *(undefined4 *)(this + 0x1f8);
LAB_1012b0da:
        pcVar1 = *(code **)(*(int *)this + 0x200);
        guard_check_icall(uVar5,param_2,1,0,0xffffffff,pCVar4);
        iVar3 = (*pcVar1)();
        return iVar3;
      }
      pcVar1 = *(code **)(*(int *)this + 0x1f0);
      guard_check_icall(1);
      (*pcVar1)();
      pcVar1 = *(code **)(*(int *)this + 900);
      guard_check_icall(local_14);
      (*pcVar1)();
      pCVar4 = local_14;
      CBasePane::InsertPane((CBasePane *)this,(CBasePane *)this,(CBasePane *)local_14,0);
      CWnd::ShowWindow((CWnd *)this,5);
      pcVar1 = *(code **)(*(int *)pCVar4 + 0x274);
      guard_check_icall(this);
      local_14 = (CPaneDivider *)(*pcVar1)();
      if (local_14 == (CPaneDivider *)this) {
        pcVar1 = *(code **)(*(int *)this + 0x268);
        guard_check_icall(0);
        (*pcVar1)();
        return 1;
      }
      if (local_14 != (CPaneDivider *)0x0) {
        pcVar1 = *(code **)(*(int *)local_14 + 0x268);
        guard_check_icall(0);
        (*pcVar1)();
      }
    }
    else {
      local_1c.x = 0;
      local_1c.y = 0;
      if ((param_3 == 1) || (param_3 == 5)) {
        GetCursorPos(&local_1c);
      }
      local_8 = 0;
      if (param_1 == (CBasePane *)0x0) {
        local_14 = (CPaneDivider *)0x0;
        if ((param_3 == 1) || (param_3 == 5)) {
          local_10.x = 0;
          local_10.y = 0;
          GetCursorPos(&local_10);
          iVar3 = CBasePane::IsPointNearDockSite
                            ((CBasePane *)this,local_10.x,local_10.y,&local_8,&local_14);
          if (iVar3 != 0) {
            param_2 = (tagRECT *)0x0;
            uVar5 = local_8;
            pCVar4 = local_14;
            goto LAB_1012b0da;
          }
        }
      }
      else if ((param_3 == 1) || (param_3 == 5)) {
        iVar3 = CGlobalUtils::CheckAlignment
                          ((CGlobalUtils *)&PTR_vftable_1023d944,local_1c.x,local_1c.y,param_1,
                           DAT_1023d904,0,0,&local_8,0xf000,0);
        if (iVar3 != 0) {
          param_2 = (tagRECT *)0x0;
          goto LAB_1012af15;
        }
      }
      else if (param_2 != (tagRECT *)0x0) {
LAB_1012af15:
        pcVar1 = *(code **)(*(int *)this + 0x354);
        guard_check_icall(param_1,local_8,param_2);
        iVar3 = (*pcVar1)();
        return iVar3;
      }
    }
  }
  return 0;
}

