// rea decompile_all
// name: CMDIClientAreaWnd::SetActiveTab
// address: 0x101075d8
// body: available
// range: 0x101075d8-0x10107766 inclusive
// non_contiguous: false
// provider: Ghidra 12.1.2 (ghidra)
// analysis_profile: b075844f08879296d957518397cd0ddda73db81dce53d00d3f0e702766fc2af6
// limitations: The session serves operations only after Ghidra reports default auto-analysis complete; incomplete analysis does not expose partial results.; The imported Program and temporary project are ephemeral and deleted on close. Annotation operations edit session database metadata; original executable bytes are never written.; Cancelling an active Ghidra request terminates its ephemeral database and discards session annotations. The selected target remains open; the next provider query imports the original artifact again.; Default-space addresses use lowercase 0x-prefixed hexadecimal; other address spaces use <percent-encoded-space>:0x<hex>.; The Ghidra Program references PDB WinOperateCScaler.pdb (GUID a6737962-efea-4805-8ae6-1fc1ef126554, age (hex) 1, signature unknown, version RSDS); Ghidra reports load state unknown. Original names and types may be missing; an empty name search does not prove a procedure is absent. Use list_procedures and address-based analysis to inspect recovered functions. REA does not admit a caller-selected PDB companion.; This session uses Ghidra 12.1.2. The bridge is verified against 12.1.4; other 12.1.x builds are accepted and the observed version is reported.; Pseudocode is Ghidra decompiler output, not original source and not text-equivalent to Hopper output.; External functions and functions without an analyzable body return null; other decompiler failures remain explicit.
// pseudocode: provider-specific; not original source


/* Library Function - Single Match
    public: void __thiscall CMDIClientAreaWnd::SetActiveTab(struct HWND__ *)
   
   Library: Visual Studio 2015 Release */

void __thiscall CMDIClientAreaWnd::SetActiveTab(CMDIClientAreaWnd *this,HWND__ *param_1)

{
  CMFCBaseTabCtrl *this_00;
  code *pcVar1;
  CWnd *pCVar2;
  CObject *this_01;
  int iVar3;
  BOOL BVar4;
  CFrameWnd *pCVar5;
  CMFCTabCtrl *this_02;
  int iVar6;
  tagRECT local_18;
  uint local_8;
  
  local_8 = DAT_10201fec ^ (uint)&stack0xfffffffc;
  if (*(int *)(this + 0x2b38) == 0) {
    if (*(int *)(this + 0x2b30) == 0) {
      if (*(int *)(this + 0x2a98) != 0) {
        pcVar1 = *(code **)(*(int *)(this + 0x80) + 0x21c);
        guard_check_icall(param_1);
        iVar3 = (*pcVar1)();
        if (-1 < iVar3) {
          pcVar1 = *(code **)(*(int *)(this + 0x80) + 0x214);
          guard_check_icall(iVar3);
          (*pcVar1)();
        }
      }
    }
    else {
      pCVar2 = CWnd::FromHandle(param_1);
      this_01 = AfxDynamicDownCast((CRuntimeClass *)&PTR_s_CMDIChildWndEx_101be2ec,(CObject *)pCVar2
                                  );
      if ((this_01 != (CObject *)0x0) &&
         (this_00 = *(CMFCBaseTabCtrl **)(this_01 + 0x128), this_00 != (CMFCBaseTabCtrl *)0x0)) {
        pcVar1 = *(code **)(*(int *)this_00 + 0x21c);
        guard_check_icall(param_1);
        iVar3 = (*pcVar1)();
        if (-1 < iVar3) {
          local_18.left = 0;
          local_18.top = 0;
          local_18.right = 0;
          local_18.bottom = 0;
          GetClientRect(*(HWND *)(this_00 + 0x20),&local_18);
          BVar4 = IsRectEmpty(&local_18);
          if (BVar4 != 0) {
            pCVar5 = CWnd::GetTopLevelFrame((CWnd *)this_01);
            if (pCVar5 != (CFrameWnd *)0x0) {
              pcVar1 = *(code **)(*(int *)pCVar5 + 0x178);
              guard_check_icall(1);
              (*pcVar1)();
            }
          }
          this_02 = FindActiveTabWnd(this);
          if (this_02 != (CMFCTabCtrl *)0x0) {
            *(undefined4 *)(this_02 + 0x298) = 0;
            pcVar1 = *(code **)(*(int *)this_02 + 0x20c);
            guard_check_icall();
            iVar6 = (*pcVar1)();
            CMFCBaseTabCtrl::InvalidateTab((CMFCBaseTabCtrl *)this_02,iVar6);
          }
          *(undefined4 *)(this_00 + 0x298) = 1;
          pcVar1 = *(code **)(*(int *)this_00 + 0x214);
          guard_check_icall(iVar3);
          (*pcVar1)();
          pcVar1 = *(code **)(*(int *)this_00 + 0x20c);
          guard_check_icall();
          iVar3 = (*pcVar1)();
          CMFCBaseTabCtrl::InvalidateTab(this_00,iVar3);
        }
      }
    }
  }
  __security_check_cookie(local_8 ^ (uint)&stack0xfffffffc);
  return;
}

