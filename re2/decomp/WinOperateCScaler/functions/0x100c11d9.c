// rea decompile_all
// name: OnCreate
// address: 0x100c11d9
// body: available
// range: 0x100c11d9-0x100c13dc inclusive
// non_contiguous: false
// provider: Ghidra 12.1.2 (ghidra)
// analysis_profile: b075844f08879296d957518397cd0ddda73db81dce53d00d3f0e702766fc2af6
// limitations: The session serves operations only after Ghidra reports default auto-analysis complete; incomplete analysis does not expose partial results.; The imported Program and temporary project are ephemeral and deleted on close. Annotation operations edit session database metadata; original executable bytes are never written.; Cancelling an active Ghidra request terminates its ephemeral database and discards session annotations. The selected target remains open; the next provider query imports the original artifact again.; Default-space addresses use lowercase 0x-prefixed hexadecimal; other address spaces use <percent-encoded-space>:0x<hex>.; The Ghidra Program references PDB WinOperateCScaler.pdb (GUID a6737962-efea-4805-8ae6-1fc1ef126554, age (hex) 1, signature unknown, version RSDS); Ghidra reports load state unknown. Original names and types may be missing; an empty name search does not prove a procedure is absent. Use list_procedures and address-based analysis to inspect recovered functions. REA does not admit a caller-selected PDB companion.; This session uses Ghidra 12.1.2. The bridge is verified against 12.1.4; other 12.1.x builds are accepted and the observed version is reported.; Pseudocode is Ghidra decompiler output, not original source and not text-equivalent to Hopper output.; External functions and functions without an analyzable body return null; other decompiler failures remain explicit.
// pseudocode: provider-specific; not original source


/* Library Function - Multiple Matches With Same Base Name
    protected: int __thiscall CMDIChildWndEx::OnCreate(struct tagCREATESTRUCTA *)
    protected: int __thiscall CMDIChildWndEx::OnCreate(struct tagCREATESTRUCTW *)
   
   Library: Visual Studio 2015 Release */

void OnCreate(int param_1)

{
  uint uVar1;
  code *pcVar2;
  CMDIFrameWnd *pCVar3;
  CObject *pCVar4;
  ulong uVar5;
  HWND pHVar6;
  CWnd *pCVar7;
  int iVar8;
  CMDIChildWnd *in_ECX;
  tagRECT local_38;
  tagRECT local_28;
  tagRECT local_18;
  uint local_8;
  
  local_8 = DAT_10201fec ^ (uint)&stack0xfffffffc;
  pCVar3 = CMDIChildWnd::GetMDIFrame(in_ECX);
  pCVar4 = AfxDynamicDownCast((CRuntimeClass *)&PTR_s_CMDIFrameWndEx_101bd3e8,(CObject *)pCVar3);
  *(CObject **)(in_ECX + 0x448) = pCVar4;
  uVar1 = *(uint *)(param_1 + 0x20);
  *(undefined4 *)(in_ECX + 0x14c) = 1;
  *(uint *)(in_ECX + 0x174) = uVar1 >> 0x17 & 1;
  uVar5 = CWnd::GetExStyle((CWnd *)in_ECX);
  if ((uVar5 & 0x80000) == 0) {
    pHVar6 = GetParent(*(HWND *)(in_ECX + 0x20));
    pCVar7 = CWnd::FromHandle(pHVar6);
    SendMessageW(*(HWND *)(pCVar7 + 0x20),0xb,0,0);
    local_18.left = *(int *)(param_1 + 0x1c);
    local_18.top = *(int *)(param_1 + 0x18);
    local_18.right = local_18.left + *(int *)(param_1 + 0x14);
    local_18.bottom = local_18.top + *(int *)(param_1 + 0x10);
    iVar8 = *(int *)(in_ECX + 0x448);
    *(LONG *)(in_ECX + 0x138) = local_18.left;
    *(LONG *)(in_ECX + 0x13c) = local_18.top;
    *(LONG *)(in_ECX + 0x140) = local_18.right;
    *(LONG *)(in_ECX + 0x144) = local_18.bottom;
    if ((iVar8 != 0) && (*(int *)(iVar8 + 0x2f88) == 0)) {
      local_28.left = 0;
      local_28.top = 0;
      local_28.right = 0;
      local_28.bottom = 0;
      GetClientRect(*(HWND *)(iVar8 + 0x478),&local_28);
      local_38.left = 0;
      local_38.top = 0;
      local_38.right = 0;
      local_38.bottom = 0;
      GetClientRect(*(HWND *)(in_ECX + 0x20),&local_38);
      CWnd::ClientToScreen((CWnd *)in_ECX,&local_38);
      local_18.left = 0;
      local_18.top = 0;
      local_18.right = 0;
      local_18.bottom = 0;
      GetWindowRect(*(HWND *)(in_ECX + 0x20),&local_18);
      local_28.left = local_28.left + (local_18.left - local_38.left);
      local_28.top = local_28.top + (local_18.top - local_38.top);
      local_28.right = local_28.right + (local_18.right - local_38.right);
      local_28.bottom = local_28.bottom + (local_18.bottom - local_38.bottom);
      CWnd::SetWindowPos((CWnd *)in_ECX,(CWnd *)0x0,local_28.left,local_28.top,
                         local_28.right - local_28.left,local_28.bottom - local_28.top,0x14);
    }
    pHVar6 = GetParent(*(HWND *)(in_ECX + 0x20));
    pCVar7 = CWnd::FromHandle(pHVar6);
    SendMessageW(*(HWND *)(pCVar7 + 0x20),0xb,1,0);
  }
  iVar8 = OnCreate(param_1);
  if (iVar8 != -1) {
    iVar8 = CFrameImpl::IsPrintPreview((CFrameImpl *)(*(int *)(in_ECX + 0x448) + 0x350));
    if (iVar8 != 0) {
      SendMessageW(*(HWND *)(*(int *)(in_ECX + 0x448) + 0x20),0x10,0,0);
    }
    CFrameImpl::AddFrame((CFrameWnd *)in_ECX);
    pcVar2 = *(code **)(*(int *)in_ECX + 0x1d8);
    guard_check_icall(0);
    (*pcVar2)();
    PostMessageW(*(HWND *)(in_ECX + 0x20),DAT_10209cac,0,0);
  }
  *(undefined4 *)(in_ECX + 0x14c) = 0;
  __security_check_cookie(local_8 ^ (uint)&stack0xfffffffc);
  return;
}

