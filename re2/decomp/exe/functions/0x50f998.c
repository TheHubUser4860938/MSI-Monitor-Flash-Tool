// rea decompile_all
// name: CMDIClientAreaWnd::AdjustMDIChildren
// address: 0x50f998
// body: available
// range: 0x50f998-0x50fb41 inclusive
// non_contiguous: false
// provider: Ghidra 12.1.2 (ghidra)
// analysis_profile: ac6d50be2cdf54f7005df47d1ed7e7ef55dee595681eb1b7c2e0b00d70cd697d
// limitations: The session serves operations only after Ghidra reports default auto-analysis complete; incomplete analysis does not expose partial results.; The imported Program and temporary project are ephemeral and deleted on close. Annotation operations edit session database metadata; original executable bytes are never written.; Cancelling an active Ghidra request terminates its ephemeral database and discards session annotations. The selected target remains open; the next provider query imports the original artifact again.; Default-space addresses use lowercase 0x-prefixed hexadecimal; other address spaces use <percent-encoded-space>:0x<hex>.; The Ghidra Program references PDB ISPToolForMsi.pdb (GUID b8f2ac8f-1d6f-438d-800f-ed4a14426ac6, age (hex) 1, signature unknown, version RSDS); Ghidra reports load state unknown. Original names and types may be missing; an empty name search does not prove a procedure is absent. Use list_procedures and address-based analysis to inspect recovered functions. REA does not admit a caller-selected PDB companion.; This session uses Ghidra 12.1.2. The bridge is verified against 12.1.4; other 12.1.x builds are accepted and the observed version is reported.; Pseudocode is Ghidra decompiler output, not original source and not text-equivalent to Hopper output.; External functions and functions without an analyzable body return null; other decompiler failures remain explicit.
// pseudocode: provider-specific; not original source


/* Library Function - Single Match
    private: void __thiscall CMDIClientAreaWnd::AdjustMDIChildren(class CMFCTabCtrl *)
   
   Library: Visual Studio 2015 Release */

void __thiscall CMDIClientAreaWnd::AdjustMDIChildren(CMDIClientAreaWnd *this,CMFCTabCtrl *param_1)

{
  code *pcVar1;
  BOOL BVar2;
  HWND hWndTo;
  int iVar3;
  int iVar4;
  CWnd *this_00;
  uint uVar5;
  CObject *this_01;
  int iVar6;
  AFX_MODULE_STATE *pAVar7;
  int *piVar8;
  int local_1c;
  tagPOINT local_18;
  int local_10;
  int local_c;
  uint local_8;
  
  local_8 = DAT_0060cff4 ^ (uint)&stack0xfffffffc;
  BVar2 = IsWindowVisible(*(HWND *)(param_1 + 0x20));
  if ((BVar2 != 0) || (DAT_0060c720 == 0)) {
    local_18.x = *(LONG *)(param_1 + 0x2ec);
    local_18.y = *(LONG *)(param_1 + 0x2f0);
    local_10 = *(int *)(param_1 + 0x2f4);
    local_c = *(int *)(param_1 + 0x2f8);
    hWndTo = (HWND)0x0;
    if (this != (CMDIClientAreaWnd *)0x0) {
      hWndTo = *(HWND *)(this + 0x20);
    }
    MapWindowPoints(*(HWND *)(param_1 + 0x20),hWndTo,&local_18,2);
    pcVar1 = *(code **)(*(int *)param_1 + 0x20c);
    guard_check_icall();
    iVar3 = (*pcVar1)();
    local_1c = 0;
    pcVar1 = *(code **)(*(int *)param_1 + 0x1ac);
    guard_check_icall();
    iVar4 = (*pcVar1)();
    if (0 < iVar4) {
      do {
        pcVar1 = *(code **)(*(int *)param_1 + 0x1b0);
        iVar4 = local_1c;
        guard_check_icall(local_1c);
        this_00 = (CWnd *)(*pcVar1)();
        if ((this_00 != (CWnd *)0x0) && (*(int *)(this_00 + 0x20) != 0)) {
          uVar5 = GetWindowLongW(*(HWND *)(this_00 + 0x20),-0x10);
          if ((uVar5 & 0x20000000) != 0) {
            CWnd::ShowWindow(this_00,9);
          }
          uVar5 = 0x10;
          if (local_1c != iVar3) {
            uVar5 = 0x1c;
          }
          CWnd::SetWindowPos(this_00,(CWnd *)&DAT_00614a70,local_18.x,local_18.y,
                             local_10 - local_18.x,local_c - local_18.y,uVar5);
          this_01 = AfxDynamicDownCast((CRuntimeClass *)&PTR_s_CMDIChildWndEx_005c1ebc,
                                       (CObject *)this_00);
          if (((this_01 != (CObject *)0x0) &&
              (iVar6 = CMDIChildWndEx::IsTaskbarTabsSupportEnabled((CMDIChildWndEx *)this_01),
              iVar6 != 0)) &&
             (iVar6 = CMDIChildWndEx::IsRegisteredWithTaskbarTabs((CMDIChildWndEx *)this_01),
             iVar6 != 0)) {
            pAVar7 = AfxGetModuleState();
            if (*(int **)(pAVar7 + 4) != (int *)0x0) {
              pcVar1 = *(code **)(**(int **)(pAVar7 + 4) + 0xfc);
              guard_check_icall();
              piVar8 = (int *)(*pcVar1)();
              if (piVar8 != (int *)0x0) {
                pcVar1 = *(code **)(*piVar8 + 0x30);
                guard_check_icall();
                iVar6 = (*pcVar1)();
                if (iVar6 != 0) goto LAB_0050fb0e;
              }
              CMDIChildWndEx::InvalidateIconicBitmaps((CMDIChildWndEx *)this_01);
              CMDIChildWndEx::SetTaskbarTabOrder((CMDIChildWndEx *)this_01,(CMDIChildWndEx *)0x0);
            }
          }
        }
LAB_0050fb0e:
        local_1c = local_1c + 1;
        pcVar1 = *(code **)(*(int *)param_1 + 0x1ac);
        guard_check_icall(iVar4);
        iVar4 = (*pcVar1)();
      } while (local_1c < iVar4);
    }
  }
  __security_check_cookie(local_8 ^ (uint)&stack0xfffffffc);
  return;
}

