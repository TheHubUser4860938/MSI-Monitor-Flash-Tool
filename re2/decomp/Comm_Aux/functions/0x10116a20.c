// rea decompile_all
// name: CFrameImpl::OnChangeVisualManager
// address: 0x10116a20
// body: available
// range: 0x10116a20-0x10116d15 inclusive
// non_contiguous: false
// provider: Ghidra 12.1.2 (ghidra)
// analysis_profile: b075844f08879296d957518397cd0ddda73db81dce53d00d3f0e702766fc2af6
// limitations: The session serves operations only after Ghidra reports default auto-analysis complete; incomplete analysis does not expose partial results.; The imported Program and temporary project are ephemeral and deleted on close. Annotation operations edit session database metadata; original executable bytes are never written.; Cancelling an active Ghidra request terminates its ephemeral database and discards session annotations. The selected target remains open; the next provider query imports the original artifact again.; Default-space addresses use lowercase 0x-prefixed hexadecimal; other address spaces use <percent-encoded-space>:0x<hex>.; The Ghidra Program references PDB Comm_Aux.pdb (GUID ba7920cc-daa3-4461-a102-1f8f66c67a2a, age (hex) 1, signature unknown, version RSDS); Ghidra reports load state unknown. Original names and types may be missing; an empty name search does not prove a procedure is absent. Use list_procedures and address-based analysis to inspect recovered functions. REA does not admit a caller-selected PDB companion.; This session uses Ghidra 12.1.2. The bridge is verified against 12.1.4; other 12.1.x builds are accepted and the observed version is reported.; Pseudocode is Ghidra decompiler output, not original source and not text-equivalent to Hopper output.; External functions and functions without an analyzable body return null; other decompiler failures remain explicit.
// pseudocode: provider-specific; not original source


/* Library Function - Single Match
    public: void __thiscall CFrameImpl::OnChangeVisualManager(void)
   
   Library: Visual Studio 2015 Release */

void __thiscall CFrameImpl::OnChangeVisualManager(CFrameImpl *this)

{
  code *pcVar1;
  bool bVar2;
  BOOL BVar3;
  AFX_GLOBAL_DATA *this_00;
  int iVar4;
  ulong uVar5;
  int iVar6;
  CMFCVisualManager *pCVar7;
  undefined4 uVar8;
  uint uVar9;
  int local_4c;
  int local_48;
  int local_44;
  int local_40 [2];
  int local_38;
  int local_34;
  int local_30;
  int local_2c;
  tagRECT local_18;
  uint local_8;
  
  local_8 = DAT_10206460 ^ (uint)&stack0xfffffffc;
  bVar2 = false;
  if ((*(int *)(this + 0xfc) != 0) &&
     (((BVar3 = IsWindowVisible(*(HWND *)(*(int *)(this + 0xfc) + 0x20)), BVar3 != 0 ||
       (BVar3 = IsWindowVisible(*(HWND *)(*(int *)(this + 0xb0) + 0x20)), BVar3 == 0)) &&
      ((*(int **)(this + 0xfc))[0xca] != 0)))) {
    pcVar1 = *(code **)(**(int **)(this + 0xfc) + 0x210);
    guard_check_icall();
    (*pcVar1)();
    this_00 = GetGlobalData();
    iVar4 = AFX_GLOBAL_DATA::IsDwmCompositionEnabled(this_00);
    if (iVar4 != 0) goto LAB_10116d05;
    bVar2 = true;
  }
  local_18.left = 0;
  local_18.top = 0;
  local_18.right = 0;
  local_18.bottom = 0;
  GetWindowRect(*(HWND *)(*(int *)(this + 0xb0) + 0x20),&local_18);
  BVar3 = IsZoomed(*(HWND *)(*(int *)(this + 0xb0) + 0x20));
  if ((bVar2) || (iVar4 = IsOwnerDrawCaption(this), iVar4 != 0)) {
    bVar2 = false;
    uVar5 = CWnd::GetExStyle(*(CWnd **)(this + 0xb0));
    if (((uVar5 & 0x800000) != 0) && ((*(int *)(this + 0x24) != 0 && (*(int *)(this + 0x28) == 0))))
    {
      bVar2 = true;
      *(undefined4 *)(this + 0x3c) = 1;
      CWnd::ModifyStyle(*(CWnd **)(this + 0xb0),0x800000,0,0x20);
      *(undefined4 *)(this + 0x3c) = 0;
    }
    pCVar7 = CMFCVisualManager::GetInstance();
    pcVar1 = *(code **)(*(int *)pCVar7 + 0x1f8);
    guard_check_icall(*(undefined4 *)(this + 0xb0),local_18.right - local_18.left,
                      local_18.bottom - local_18.top);
    uVar8 = (*pcVar1)();
    *(undefined4 *)(this + 0x20) = uVar8;
    if (((BVar3 != 0) && (bVar2)) && (*(int *)(this + 0x28) == 0)) {
      _memset(local_40,0,0x28);
      FUN_10116dde(local_40);
      local_18.right = local_38 + local_30;
      local_18.bottom = local_34 + local_2c;
      iVar4 = local_18.bottom - local_2c;
      iVar6 = local_18.right - local_30;
      local_18.left = local_30;
      uVar9 = 0x14;
      local_18.top = local_2c;
      goto LAB_10116cf1;
    }
  }
  else {
    uVar5 = CWnd::GetExStyle(*(CWnd **)(this + 0xb0));
    bVar2 = false;
    if ((((uVar5 & 0x800000) == 0) && (*(int *)(this + 0x24) != 0)) && (*(int *)(this + 0x28) == 0))
    {
      bVar2 = true;
      *(undefined4 *)(this + 0x3c) = 1;
      CWnd::ModifyStyle(*(CWnd **)(this + 0xb0),0,0x800000,0x20);
      *(undefined4 *)(this + 0x3c) = 0;
    }
    if (*(int *)(this + 0x20) != 0) {
      *(undefined4 *)(this + 0x20) = 0;
      SetWindowRgn(*(HWND *)(*(int *)(this + 0xb0) + 0x20),(HRGN)0x0,1);
    }
    if (((BVar3 == 0) || (!bVar2)) || (*(int *)(this + 0x28) != 0)) {
      CWnd::SetWindowPos(*(CWnd **)(this + 0xb0),(CWnd *)0x0,-1,-1,
                         (local_18.right - local_18.left) + 1,(local_18.bottom - local_18.top) + 1,
                         0x16);
      iVar4 = local_18.bottom - local_18.top;
      uVar9 = 0x16;
      iVar6 = local_18.right - local_18.left;
      local_2c = -1;
      local_30 = -1;
    }
    else {
      _memset(&local_4c,0,0x34);
      local_4c = local_18.left;
      local_48 = local_18.top;
      local_44 = local_18.right;
      local_40[0] = local_18.bottom;
      pcVar1 = *(code **)(**(int **)(this + 0xb0) + 0x68);
      guard_check_icall(&local_4c,0);
      (*pcVar1)();
      uVar5 = CWnd::GetExStyle(*(CWnd **)(this + 0xb0));
      if ((uVar5 & 0xc00000) == 0xc00000) {
        iVar4 = GetSystemMetrics(4);
        local_48 = local_48 + iVar4;
      }
      uVar9 = 0x14;
      iVar4 = local_40[0] - local_48;
      iVar6 = local_44 - local_4c;
      local_30 = local_4c;
      local_2c = local_48;
    }
LAB_10116cf1:
    CWnd::SetWindowPos(*(CWnd **)(this + 0xb0),(CWnd *)0x0,local_30,local_2c,iVar6,iVar4,uVar9);
  }
  UpdateCaption(this);
LAB_10116d05:
  __security_check_cookie(local_8 ^ (uint)&stack0xfffffffc);
  return;
}

