// rea decompile_all
// name: CPaneFrameWnd::OnContextMenu
// address: 0x100b1747
// body: available
// range: 0x100b1747-0x100b1899 inclusive
// non_contiguous: false
// provider: Ghidra 12.1.2 (ghidra)
// analysis_profile: b075844f08879296d957518397cd0ddda73db81dce53d00d3f0e702766fc2af6
// limitations: The session serves operations only after Ghidra reports default auto-analysis complete; incomplete analysis does not expose partial results.; The imported Program and temporary project are ephemeral and deleted on close. Annotation operations edit session database metadata; original executable bytes are never written.; Cancelling an active Ghidra request terminates its ephemeral database and discards session annotations. The selected target remains open; the next provider query imports the original artifact again.; Default-space addresses use lowercase 0x-prefixed hexadecimal; other address spaces use <percent-encoded-space>:0x<hex>.; The Ghidra Program references PDB WinOperateCScaler.pdb (GUID a6737962-efea-4805-8ae6-1fc1ef126554, age (hex) 1, signature unknown, version RSDS); Ghidra reports load state unknown. Original names and types may be missing; an empty name search does not prove a procedure is absent. Use list_procedures and address-based analysis to inspect recovered functions. REA does not admit a caller-selected PDB companion.; This session uses Ghidra 12.1.2. The bridge is verified against 12.1.4; other 12.1.x builds are accepted and the observed version is reported.; Pseudocode is Ghidra decompiler output, not original source and not text-equivalent to Hopper output.; External functions and functions without an analyzable body return null; other decompiler failures remain explicit.
// pseudocode: provider-specific; not original source


/* Library Function - Single Match
    protected: void __thiscall CPaneFrameWnd::OnContextMenu(class CWnd *,class CPoint)
   
   Library: Visual Studio 2015 Release */

void __thiscall
CPaneFrameWnd::OnContextMenu(CPaneFrameWnd *this,undefined4 param_1,LONG param_3,LONG param_4)

{
  code *pcVar1;
  POINT pt;
  CObject *pCVar2;
  int iVar3;
  BOOL BVar4;
  CWnd *pCVar5;
  RECT local_38;
  int local_28;
  int local_24;
  int local_20;
  undefined4 local_1c;
  tagRECT local_18;
  uint local_8;
  
  local_8 = DAT_10201fec ^ (uint)&stack0xfffffffc;
  if (((DAT_10209cf0 == 0) && (this[0xa5] == (CPaneFrameWnd)0x0)) && (DAT_1020b0e4 == 0)) {
    pcVar1 = *(code **)(*(int *)this + 0x238);
    guard_check_icall();
    (*pcVar1)();
    pcVar1 = *(code **)(*(int *)this + 0x1ac);
    guard_check_icall();
    pCVar2 = (CObject *)(*pcVar1)();
    pCVar2 = AfxDynamicDownCast((CRuntimeClass *)&PTR_s_CPane_101b279c,pCVar2);
    if (pCVar2 != (CObject *)0x0) {
      pcVar1 = *(code **)(*(int *)pCVar2 + 0x2e4);
      guard_check_icall(param_3,param_4);
      iVar3 = (*pcVar1)();
      if (iVar3 == 0) {
        local_18.left = 0;
        local_18.top = 0;
        local_18.right = 0;
        local_18.bottom = 0;
        GetWindowRect(*(HWND *)(this + 0x20),&local_18);
        local_28 = 0;
        local_24 = 0;
        local_20 = 0;
        local_1c = 0;
        pcVar1 = *(code **)(*(int *)this + 0x1bc);
        guard_check_icall(&local_28);
        (*pcVar1)();
        local_38.left = local_28 + local_18.left;
        local_38.top = local_24 + local_18.top;
        local_38.right = local_18.right - local_20;
        local_38.bottom = *(int *)(this + 0xac) + local_24 + local_18.top;
        pt.y = param_4;
        pt.x = param_3;
        BVar4 = PtInRect(&local_38,pt);
        if ((BVar4 != 0) &&
           (pCVar5 = CWnd::FromHandlePermanent(*(HWND__ **)(this + 200)), pCVar5 != (CWnd *)0x0)) {
          pcVar1 = *(code **)(*(int *)pCVar2 + 0x248);
          guard_check_icall(this,param_3,param_4);
          (*pcVar1)();
        }
      }
    }
  }
  __security_check_cookie(local_8 ^ (uint)&stack0xfffffffc);
  return;
}

