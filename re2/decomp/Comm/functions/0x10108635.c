// rea decompile_all
// name: CMFCRibbonColorMenuButton::OnDraw
// address: 0x10108635
// body: available
// range: 0x10108635-0x101088bc inclusive
// non_contiguous: false
// provider: Ghidra 12.1.2 (ghidra)
// analysis_profile: b075844f08879296d957518397cd0ddda73db81dce53d00d3f0e702766fc2af6
// limitations: The session serves operations only after Ghidra reports default auto-analysis complete; incomplete analysis does not expose partial results.; The imported Program and temporary project are ephemeral and deleted on close. Annotation operations edit session database metadata; original executable bytes are never written.; Cancelling an active Ghidra request terminates its ephemeral database and discards session annotations. The selected target remains open; the next provider query imports the original artifact again.; Default-space addresses use lowercase 0x-prefixed hexadecimal; other address spaces use <percent-encoded-space>:0x<hex>.; The Ghidra Program references PDB Comm.pdb (GUID c3062acb-498d-45fa-a233-c8b7e401bb13, age (hex) 1, signature unknown, version RSDS); Ghidra reports load state unknown. Original names and types may be missing; an empty name search does not prove a procedure is absent. Use list_procedures and address-based analysis to inspect recovered functions. REA does not admit a caller-selected PDB companion.; This session uses Ghidra 12.1.2. The bridge is verified against 12.1.4; other 12.1.x builds are accepted and the observed version is reported.; Pseudocode is Ghidra decompiler output, not original source and not text-equivalent to Hopper output.; External functions and functions without an analyzable body return null; other decompiler failures remain explicit.
// pseudocode: provider-specific; not original source


/* Library Function - Single Match
    public: virtual void __thiscall CMFCRibbonColorMenuButton::OnDraw(class CDC *)
   
   Library: Visual Studio 2015 Release */

void __thiscall CMFCRibbonColorMenuButton::OnDraw(CMFCRibbonColorMenuButton *this,CDC *param_1)

{
  code *pcVar1;
  HDC hdc;
  CMFCRibbonColorMenuButton *pCVar2;
  BOOL BVar3;
  CMFCVisualManager *pCVar4;
  int iVar5;
  int *piVar6;
  AFX_GLOBAL_DATA *pAVar7;
  AFX_MODULE_STATE *pAVar8;
  HANDLE pvVar9;
  int cxWidth;
  int cyWidth;
  UINT istepIfAniCur;
  HBRUSH hbrFlickerFreeDraw;
  CDC *pCVar10;
  UINT diFlags;
  int local_3c;
  int local_38;
  RECT *local_34;
  CMFCRibbonColorMenuButton *local_30;
  int local_2c;
  tagRECT local_28;
  tagRECT local_18;
  uint local_8;
  
  local_8 = DAT_101d3fec ^ (uint)&stack0xfffffffc;
  local_34 = (RECT *)(this + 0x74);
  local_30 = this;
  BVar3 = IsRectEmpty(local_34);
  if (BVar3 != 0) goto LAB_101088aa;
  pCVar4 = CMFCVisualManager::GetInstance();
  pcVar1 = *(code **)(*(int *)pCVar4 + 0x2dc);
  guard_check_icall();
  iVar5 = (*pcVar1)();
  piVar6 = (int *)FUN_1005f3ff(&local_3c);
  pCVar2 = local_30;
  local_38 = *piVar6 + iVar5 * 2 + 2;
  pcVar1 = *(code **)(*(int *)local_30 + 0x270);
  pCVar10 = param_1;
  guard_check_icall(param_1);
  iVar5 = (*pcVar1)();
  local_2c = -1;
  if (*(int *)(pCVar2 + 0xd4) == 0) {
    if (iVar5 != -1) goto LAB_101086e7;
  }
  else {
    if (iVar5 == -1) {
      pCVar4 = CMFCVisualManager::GetInstance();
      pcVar1 = *(code **)(*(int *)pCVar4 + 0xc4);
      guard_check_icall(pCVar10);
      iVar5 = (*pcVar1)();
    }
LAB_101086e7:
    pcVar1 = *(code **)(*(int *)param_1 + 0x30);
    guard_check_icall(iVar5);
    local_2c = (*pcVar1)();
  }
  pCVar2 = local_30;
  local_18.top = local_34->top;
  local_18.right = local_34->right;
  local_18.bottom = local_34->bottom;
  local_18.left = local_34->left + local_38 + 3;
  InflateRect(&local_18,-*(int *)(local_30 + 0x11c),-*(int *)(local_30 + 0x11c));
  iVar5 = *(int *)param_1;
  guard_check_icall(*(int *)(pCVar2 + 0x60),*(undefined4 *)(*(int *)(pCVar2 + 0x60) + -0xc),
                    &local_18,0x8024);
  (**(code **)(iVar5 + 0x68))();
  if (local_2c != -1) {
    pcVar1 = *(code **)(*(int *)param_1 + 0x30);
    guard_check_icall(local_2c);
    (*pcVar1)();
  }
  if (*(int *)(local_30 + 0x1c8) == 2) {
    iVar5 = local_34->left;
    local_28.top = local_34->top;
    local_28.right = local_34->right;
    local_28.bottom = local_34->bottom;
    local_2c = local_38 + iVar5;
    local_28.left = iVar5;
    pAVar7 = GetGlobalData();
    if (*(int *)(pAVar7 + 0x110) == 0) {
      pAVar8 = AfxGetModuleState();
      pvVar9 = LoadImageW(*(HINSTANCE *)(pAVar8 + 0xc),(LPCWSTR)0x42d1,1,0x10,0x10,0x8000);
      pAVar7 = GetGlobalData();
      *(HANDLE *)(pAVar7 + 0x110) = pvVar9;
    }
    local_2c = local_2c - iVar5;
    iVar5 = local_28.bottom - local_28.top;
    hdc = *(HDC *)(param_1 + 4);
    diFlags = 3;
    hbrFlickerFreeDraw = (HBRUSH)0x0;
    istepIfAniCur = 0;
    cyWidth = 0x10;
    cxWidth = 0x10;
    pAVar7 = GetGlobalData();
    DrawIconEx(hdc,(local_2c + -0x10) / 2 + local_28.left,(iVar5 + -0x10) / 2 + local_28.top,
               *(HICON *)(pAVar7 + 0x110),cxWidth,cyWidth,istepIfAniCur,hbrFlickerFreeDraw,diFlags);
  }
  else if (*(int *)(local_30 + 0x1c8) == 1) {
    local_28.left = local_34->left;
    local_28.top = local_34->top;
    local_28.bottom = local_34->bottom;
    local_28.right = local_28.left + local_38;
    InflateRect(&local_28,-2,-2);
    iVar5 = local_28.bottom - local_28.top;
    local_38 = local_28.right - local_28.left;
    if (iVar5 <= local_28.right - local_28.left) {
      local_38 = iVar5;
    }
    local_28.left = ((local_28.right - local_38) - local_28.left) / 2 + local_28.left;
    local_3c = local_28.left + local_38;
    local_28.top = (iVar5 - local_38) / 2 + local_28.top;
    local_38 = local_28.top + local_38;
    pcVar1 = *(code **)(**(int **)(local_30 + 0x1c4) + 0x2a4);
    local_28.right = local_3c;
    local_28.bottom = local_38;
    guard_check_icall(param_1,local_28.left,local_28.top,local_3c,local_38,0xffffffff,0,0xffffffff);
    (*pcVar1)();
  }
LAB_101088aa:
  __security_check_cookie(local_8 ^ (uint)&stack0xfffffffc);
  return;
}

