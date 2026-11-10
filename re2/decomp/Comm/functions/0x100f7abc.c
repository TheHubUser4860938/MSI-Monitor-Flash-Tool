// rea decompile_all
// name: CDockablePane::Slide
// address: 0x100f7abc
// body: available
// range: 0x100f7abc-0x100f7dfb inclusive
// non_contiguous: false
// provider: Ghidra 12.1.2 (ghidra)
// analysis_profile: b075844f08879296d957518397cd0ddda73db81dce53d00d3f0e702766fc2af6
// limitations: The session serves operations only after Ghidra reports default auto-analysis complete; incomplete analysis does not expose partial results.; The imported Program and temporary project are ephemeral and deleted on close. Annotation operations edit session database metadata; original executable bytes are never written.; Cancelling an active Ghidra request terminates its ephemeral database and discards session annotations. The selected target remains open; the next provider query imports the original artifact again.; Default-space addresses use lowercase 0x-prefixed hexadecimal; other address spaces use <percent-encoded-space>:0x<hex>.; The Ghidra Program references PDB Comm.pdb (GUID c3062acb-498d-45fa-a233-c8b7e401bb13, age (hex) 1, signature unknown, version RSDS); Ghidra reports load state unknown. Original names and types may be missing; an empty name search does not prove a procedure is absent. Use list_procedures and address-based analysis to inspect recovered functions. REA does not admit a caller-selected PDB companion.; This session uses Ghidra 12.1.2. The bridge is verified against 12.1.4; other 12.1.x builds are accepted and the observed version is reported.; Pseudocode is Ghidra decompiler output, not original source and not text-equivalent to Hopper output.; External functions and functions without an analyzable body return null; other decompiler failures remain explicit.
// pseudocode: provider-specific; not original source


/* Library Function - Single Match
    public: virtual void __thiscall CDockablePane::Slide(int,int)
   
   Library: Visual Studio 2015 Release */

void __thiscall CDockablePane::Slide(CDockablePane *this,int param_1,int param_2)

{
  code *pcVar1;
  int iVar2;
  AFX_GLOBAL_DATA *pAVar3;
  CWnd *pCVar4;
  CDockingManager *this_00;
  CPaneDivider *pCVar5;
  UINT_PTR UVar6;
  uint uVar7;
  tagRECT *ptVar8;
  tagRECT local_18;
  uint local_8;
  
  local_8 = DAT_101d3fec ^ (uint)&stack0xfffffffc;
  pcVar1 = *(code **)(*(int *)this + 0x1dc);
  guard_check_icall();
  iVar2 = (*pcVar1)();
  if (iVar2 == 0) goto LAB_100f7dea;
  if (*(UINT_PTR *)(this + 0x300) != 0) {
    KillTimer(*(HWND *)(this + 0x20),*(UINT_PTR *)(this + 0x300));
  }
  if (*(UINT_PTR *)(this + 0x2fc) != 0) {
    KillTimer(*(HWND *)(this + 0x20),*(UINT_PTR *)(this + 0x2fc));
    *(undefined4 *)(this + 0x2fc) = 0;
  }
  local_18.left = 0;
  local_18.top = 0;
  local_18.right = 0;
  local_18.bottom = 0;
  GetWindowRect(*(HWND *)(this + 0x20),&local_18);
  if (((param_2 == 0) || (DAT_101dd0f0 != 0)) ||
     (pAVar3 = GetGlobalData(), *(int *)(pAVar3 + 0x180) != 0)) {
    pcVar1 = *(code **)(*(int *)this + 0x164);
    guard_check_icall();
    iVar2 = (*pcVar1)();
    if (iVar2 == 0) {
      iVar2 = local_18.right - local_18.left;
    }
    else {
      iVar2 = local_18.bottom - local_18.top;
    }
    *(int *)(this + 0x308) = iVar2;
  }
  if (param_2 == 0) {
    *(LONG *)(this + 0x30c) = local_18.left;
    *(LONG *)(this + 0x310) = local_18.top;
    *(LONG *)(this + 0x314) = local_18.right;
    *(LONG *)(this + 0x318) = local_18.bottom;
    pcVar1 = *(code **)(*(int *)this + 0x39c);
    guard_check_icall(0);
    (*pcVar1)();
    CWnd::ShowWindow((CWnd *)this,0);
    ShowWindow(*(HWND *)(this + 0x350),0);
    goto LAB_100f7dea;
  }
  pcVar1 = *(code **)(*(int *)this + 0x19c);
  guard_check_icall();
  pCVar4 = (CWnd *)(*pcVar1)();
  this_00 = CGlobalUtils::GetDockingManager((CGlobalUtils *)&PTR_vftable_101d3944,pCVar4);
  if (param_1 != 0) {
    CDockingManager::HideAutoHidePanes(this_00,this,0);
    iVar2 = 0;
    pCVar5 = GetDefaultPaneDivider(this);
    CDockingManager::AlignAutoHidePane(this_00,pCVar5,iVar2);
    CWnd::ShowWindow((CWnd *)this,5);
    ShowWindow(*(HWND *)(this + 0x350),5);
  }
  BringWindowToTop(*(HWND *)(this + 0x20));
  BringWindowToTop(*(HWND *)(this + 0x350));
  if (*(int *)(this + 0x328) == 1) {
    CDockingManager::BringBarsToTop(this_00,0,1);
  }
  UVar6 = SetTimer(*(HWND *)(this + 0x20),(param_1 != 0) + 0xec01,DAT_101d3b98,(TIMERPROC)0x0);
  *(UINT_PTR *)(this + 0x300) = UVar6;
  if ((DAT_101dd0f0 == 0) && (pAVar3 = GetGlobalData(), *(int *)(pAVar3 + 0x180) == 0)) {
    if (*(int *)(this + 0x328) == 1) {
      ptVar8 = &local_18;
      pcVar1 = *(code **)(*(int *)this + 0x19c);
      guard_check_icall();
      pCVar4 = (CWnd *)(*pcVar1)();
      CWnd::ScreenToClient(pCVar4,ptVar8);
      pcVar1 = *(code **)(*(int *)this + 0x194);
      guard_check_icall();
      uVar7 = (*pcVar1)();
      if ((uVar7 & 0xa000) == 0) {
        iVar2 = local_18.right - local_18.left;
      }
      else {
        iVar2 = local_18.bottom - local_18.top;
      }
      if (iVar2 / DAT_101d3b94 < 1) {
LAB_100f7d95:
        iVar2 = 1;
      }
      else {
        pcVar1 = *(code **)(*(int *)this + 0x194);
        guard_check_icall();
        uVar7 = (*pcVar1)();
        if ((uVar7 & 0xa000) == 0) {
          iVar2 = local_18.right - local_18.left;
        }
        else {
          iVar2 = local_18.bottom - local_18.top;
        }
LAB_100f7dcb:
        iVar2 = iVar2 / DAT_101d3b94;
      }
      *(int *)(this + 0x308) = iVar2;
    }
    else if (*(int *)(this + 0x328) == 2) {
      if ((param_1 == 0) && (*(int *)(this + 0x31c) == 0)) {
        ptVar8 = (tagRECT *)(this + 0x30c);
        iVar2 = *(int *)this;
        ptVar8->left = local_18.left;
        *(LONG *)(this + 0x310) = local_18.top;
        *(LONG *)(this + 0x314) = local_18.right;
        *(LONG *)(this + 0x318) = local_18.bottom;
        pcVar1 = *(code **)(iVar2 + 0x19c);
        guard_check_icall();
        pCVar4 = (CWnd *)(*pcVar1)();
        CWnd::ScreenToClient(pCVar4,ptVar8);
      }
      pcVar1 = *(code **)(*(int *)this + 0x194);
      guard_check_icall();
      uVar7 = (*pcVar1)();
      if ((uVar7 & 0xa000) == 0) {
        iVar2 = *(int *)(this + 0x314) - *(int *)(this + 0x30c);
      }
      else {
        iVar2 = *(int *)(this + 0x318) - *(int *)(this + 0x310);
      }
      if (iVar2 / DAT_101d3b94 < 1) goto LAB_100f7d95;
      pcVar1 = *(code **)(*(int *)this + 0x194);
      guard_check_icall();
      uVar7 = (*pcVar1)();
      if ((uVar7 & 0xa000) == 0) {
        iVar2 = *(int *)(this + 0x314) - *(int *)(this + 0x30c);
      }
      else {
        iVar2 = *(int *)(this + 0x318) - *(int *)(this + 0x310);
      }
      goto LAB_100f7dcb;
    }
  }
  *(undefined4 *)(this + 0x304) = 0;
  *(undefined4 *)(this + 0x31c) = 1;
LAB_100f7dea:
  __security_check_cookie(local_8 ^ (uint)&stack0xfffffffc);
  return;
}

