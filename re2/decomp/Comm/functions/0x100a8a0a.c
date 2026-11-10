// rea decompile_all
// name: CPaneFrameWnd::OnSizing
// address: 0x100a8a0a
// body: available
// range: 0x100a8a0a-0x100a8c75 inclusive
// non_contiguous: false
// provider: Ghidra 12.1.2 (ghidra)
// analysis_profile: b075844f08879296d957518397cd0ddda73db81dce53d00d3f0e702766fc2af6
// limitations: The session serves operations only after Ghidra reports default auto-analysis complete; incomplete analysis does not expose partial results.; The imported Program and temporary project are ephemeral and deleted on close. Annotation operations edit session database metadata; original executable bytes are never written.; Cancelling an active Ghidra request terminates its ephemeral database and discards session annotations. The selected target remains open; the next provider query imports the original artifact again.; Default-space addresses use lowercase 0x-prefixed hexadecimal; other address spaces use <percent-encoded-space>:0x<hex>.; The Ghidra Program references PDB Comm.pdb (GUID c3062acb-498d-45fa-a233-c8b7e401bb13, age (hex) 1, signature unknown, version RSDS); Ghidra reports load state unknown. Original names and types may be missing; an empty name search does not prove a procedure is absent. Use list_procedures and address-based analysis to inspect recovered functions. REA does not admit a caller-selected PDB companion.; This session uses Ghidra 12.1.2. The bridge is verified against 12.1.4; other 12.1.x builds are accepted and the observed version is reported.; Pseudocode is Ghidra decompiler output, not original source and not text-equivalent to Hopper output.; External functions and functions without an analyzable body return null; other decompiler failures remain explicit.
// pseudocode: provider-specific; not original source


/* Library Function - Single Match
    protected: void __thiscall CPaneFrameWnd::OnSizing(unsigned int,struct tagRECT *)
   
   Library: Visual Studio 2015 Release */

void __thiscall CPaneFrameWnd::OnSizing(CPaneFrameWnd *this,uint param_1,tagRECT *param_2)

{
  code *pcVar1;
  int iVar2;
  CWnd *pCVar3;
  int iVar4;
  int local_70;
  int local_6c;
  int local_68;
  int local_64;
  int local_60;
  int local_5c;
  int local_58;
  uint local_54;
  CPaneFrameWnd *local_50;
  CObject *local_4c;
  tagRECT local_48;
  int local_38;
  int local_34;
  int local_30;
  int local_2c;
  tagRECT local_28;
  tagRECT local_18;
  uint local_8;
  
  local_8 = DAT_101d3fec ^ (uint)&stack0xfffffffc;
  local_50 = this;
  FUN_1001d029();
  if (*(int *)(this + 0x90) != 0) goto LAB_100a8c63;
  local_18.left = 0;
  local_18.top = 0;
  local_18.right = 0;
  local_18.bottom = 0;
  GetWindowRect(*(HWND *)(this + 0x20),&local_18);
  CopyRect(&local_28,param_2);
  local_48.left = 0;
  local_48.top = 0;
  local_48.right = 0;
  local_48.bottom = 0;
  GetClientRect(*(HWND *)(this + 0x20),&local_48);
  if ((param_1 == 1) || (param_1 == 2)) {
    iVar4 = local_28.right - local_28.left;
    local_54 = 1;
    iVar2 = local_18.right - local_18.left;
  }
  else {
    iVar4 = local_28.bottom - local_28.top;
    local_54 = 0;
    iVar2 = local_18.bottom - local_18.top;
  }
  if (iVar4 == iVar2) goto LAB_100a8c63;
  pCVar3 = CWnd::FromHandlePermanent(*(HWND__ **)(this + 0xd4));
  local_4c = AfxDynamicDownCast((CRuntimeClass *)&PTR_s_CMFCToolBar_101d3640,(CObject *)pCVar3);
  if (local_4c == (CObject *)0x0) goto LAB_100a8c63;
  local_38 = 0;
  local_34 = 0;
  local_30 = 0;
  pcVar1 = *(code **)(*(int *)this + 0x1bc);
  local_2c = 0;
  guard_check_icall(&local_38);
  (*pcVar1)();
  local_5c = ((local_28.right - local_28.left) - local_30) - local_38;
  local_60 = (((local_28.bottom - *(int *)(local_50 + 0xac)) - local_28.top) - local_2c) - local_34;
  pcVar1 = *(code **)(*(int *)local_4c + 0x2a4);
  guard_check_icall(&local_70,0);
  (*pcVar1)();
  iVar2 = local_5c;
  if (local_54 == 0) {
    iVar2 = local_60;
  }
  pcVar1 = *(code **)(*(int *)local_4c + 0x208);
  guard_check_icall(&local_68,iVar2,local_54 ^ 1);
  (*pcVar1)();
  local_64 = local_64 - local_6c;
  local_68 = local_68 - local_70;
  if (local_68 == 0) {
    if ((local_64 == 0) && (iVar2 = FUN_10019d4f(&PTR_s_CMFCBaseToolBar_10188558), iVar2 != 0)) {
      param_2->left = local_18.left;
      param_2->top = local_18.top;
      param_2->right = local_18.right;
      param_2->bottom = local_18.bottom;
      goto LAB_100a8c63;
    }
    iVar2 = local_18.left;
    iVar4 = local_18.right;
    if (param_1 == 2) goto LAB_100a8ba0;
LAB_100a8bc6:
    param_2->left = iVar2;
  }
  else {
    if (param_1 != 2) {
      iVar2 = ((param_2->right - local_18.right) - local_68) + local_18.left;
      goto LAB_100a8bc6;
    }
    iVar4 = (param_2->left - local_18.left) + local_18.right + local_68;
LAB_100a8ba0:
    param_2->right = iVar4;
  }
  if (local_64 == 0) {
    iVar2 = local_18.top;
    iVar4 = local_18.bottom;
    if (param_1 != 6) goto LAB_100a8c05;
LAB_100a8bfd:
    param_2->bottom = iVar4;
  }
  else {
    if (((param_1 == 6) || (param_1 == 2)) || (param_1 == 1)) {
      iVar4 = (param_2->top - local_18.top) + local_18.bottom + local_64;
      goto LAB_100a8bfd;
    }
    iVar2 = ((param_2->bottom - local_18.bottom) - local_64) + local_18.top;
LAB_100a8c05:
    param_2->top = iVar2;
  }
  pcVar1 = *(code **)(*(int *)local_4c + 0x210);
  guard_check_icall();
  (*pcVar1)();
  local_58 = 0;
  SystemParametersInfoW(0x26,0,&local_58,0);
  if ((local_58 == 0) && (iVar2 = FUN_10019d4f(&PTR_s_CMFCBaseToolBar_10188558), iVar2 != 0)) {
    CWnd::SetWindowPos((CWnd *)local_50,(CWnd *)0x0,param_2->left,param_2->top,
                       param_2->right - param_2->left,param_2->bottom - param_2->top,0x14);
  }
LAB_100a8c63:
  __security_check_cookie(local_8 ^ (uint)&stack0xfffffffc);
  return;
}

