// rea decompile_all
// name: CMDIClientAreaWnd::OnEraseBkgnd
// address: 0x100fa249
// body: available
// range: 0x100fa249-0x100fa330 inclusive
// non_contiguous: false
// provider: Ghidra 12.1.2 (ghidra)
// analysis_profile: b075844f08879296d957518397cd0ddda73db81dce53d00d3f0e702766fc2af6
// limitations: The session serves operations only after Ghidra reports default auto-analysis complete; incomplete analysis does not expose partial results.; The imported Program and temporary project are ephemeral and deleted on close. Annotation operations edit session database metadata; original executable bytes are never written.; Cancelling an active Ghidra request terminates its ephemeral database and discards session annotations. The selected target remains open; the next provider query imports the original artifact again.; Default-space addresses use lowercase 0x-prefixed hexadecimal; other address spaces use <percent-encoded-space>:0x<hex>.; The Ghidra Program references PDB Comm.pdb (GUID c3062acb-498d-45fa-a233-c8b7e401bb13, age (hex) 1, signature unknown, version RSDS); Ghidra reports load state unknown. Original names and types may be missing; an empty name search does not prove a procedure is absent. Use list_procedures and address-based analysis to inspect recovered functions. REA does not admit a caller-selected PDB companion.; This session uses Ghidra 12.1.2. The bridge is verified against 12.1.4; other 12.1.x builds are accepted and the observed version is reported.; Pseudocode is Ghidra decompiler output, not original source and not text-equivalent to Hopper output.; External functions and functions without an analyzable body return null; other decompiler failures remain explicit.
// pseudocode: provider-specific; not original source


/* Library Function - Single Match
    protected: int __thiscall CMDIClientAreaWnd::OnEraseBkgnd(class CDC *)
   
   Library: Visual Studio 2015 Release */

int __thiscall CMDIClientAreaWnd::OnEraseBkgnd(CMDIClientAreaWnd *this,CDC *param_1)

{
  code *pcVar1;
  HWND hWnd;
  BOOL BVar2;
  CFrameWnd *pCVar3;
  CObject *pCVar4;
  CMFCVisualManager *pCVar5;
  int iVar6;
  undefined4 extraout_EDX;
  undefined4 extraout_EDX_00;
  undefined4 uVar7;
  undefined8 uVar8;
  CMDIClientAreaWnd *pCVar9;
  tagRECT local_18;
  uint local_8;
  
  local_8 = DAT_101d3fec ^ (uint)&stack0xfffffffc;
  pCVar9 = this;
  if (((*(int *)(this + 0x2b30) == 0) ||
      (hWnd = (HWND)SendMessageW(*(HWND *)(this + 0x20),0x229,0,0), hWnd == (HWND)0x0)) ||
     (BVar2 = IsWindowVisible(hWnd), uVar7 = extraout_EDX, BVar2 == 0)) {
    pCVar3 = CWnd::GetParentFrame((CWnd *)this);
    pCVar4 = AfxDynamicDownCast((CRuntimeClass *)&PTR_s_CMDIFrameWndEx_10192540,(CObject *)pCVar3);
    if (pCVar4 != (CObject *)0x0) {
      pcVar1 = *(code **)(*(int *)pCVar4 + 0x1fc);
      guard_check_icall(param_1);
      uVar8 = (*pcVar1)();
      uVar7 = (undefined4)((ulonglong)uVar8 >> 0x20);
      if ((int)uVar8 != 0) goto LAB_100fa31e;
    }
    local_18.left = 0;
    local_18.top = 0;
    local_18.right = 0;
    local_18.bottom = 0;
    GetClientRect(*(HWND *)(this + 0x20),&local_18);
    pCVar5 = CMFCVisualManager::GetInstance();
    pcVar1 = *(code **)(*(int *)pCVar5 + 0x2d0);
    guard_check_icall(param_1,local_18.left,local_18.top,local_18.right,local_18.bottom);
    uVar8 = (*pcVar1)();
    uVar7 = (undefined4)((ulonglong)uVar8 >> 0x20);
    if ((int)uVar8 == 0) {
      FUN_1001d029();
      uVar7 = extraout_EDX_00;
    }
  }
LAB_100fa31e:
  iVar6 = __security_check_cookie(local_8 ^ (uint)&stack0xfffffffc,uVar7,pCVar9);
  return iVar6;
}

