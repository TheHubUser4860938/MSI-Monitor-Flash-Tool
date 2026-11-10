// rea decompile_all
// name: CPaneFrameWnd::SetDockState
// address: 0x100dfbd9
// body: available
// range: 0x100dfbd9-0x100dff1f inclusive
// non_contiguous: false
// provider: Ghidra 12.1.2 (ghidra)
// analysis_profile: b075844f08879296d957518397cd0ddda73db81dce53d00d3f0e702766fc2af6
// limitations: The session serves operations only after Ghidra reports default auto-analysis complete; incomplete analysis does not expose partial results.; The imported Program and temporary project are ephemeral and deleted on close. Annotation operations edit session database metadata; original executable bytes are never written.; Cancelling an active Ghidra request terminates its ephemeral database and discards session annotations. The selected target remains open; the next provider query imports the original artifact again.; Default-space addresses use lowercase 0x-prefixed hexadecimal; other address spaces use <percent-encoded-space>:0x<hex>.; The Ghidra Program references PDB Comm_Aux.pdb (GUID ba7920cc-daa3-4461-a102-1f8f66c67a2a, age (hex) 1, signature unknown, version RSDS); Ghidra reports load state unknown. Original names and types may be missing; an empty name search does not prove a procedure is absent. Use list_procedures and address-based analysis to inspect recovered functions. REA does not admit a caller-selected PDB companion.; This session uses Ghidra 12.1.2. The bridge is verified against 12.1.4; other 12.1.x builds are accepted and the observed version is reported.; Pseudocode is Ghidra decompiler output, not original source and not text-equivalent to Hopper output.; External functions and functions without an analyzable body return null; other decompiler failures remain explicit.
// pseudocode: provider-specific; not original source


/* Library Function - Single Match
    public: virtual void __thiscall CPaneFrameWnd::SetDockState(class CDockingManager *)
   
   Library: Visual Studio 2015 Release */

void __thiscall CPaneFrameWnd::SetDockState(CPaneFrameWnd *this,CDockingManager *param_1)

{
  code *pcVar1;
  CPaneFrameWnd *this_00;
  CWnd *this_01;
  int iVar2;
  BOOL BVar3;
  HWND pHVar4;
  CWnd *pCVar5;
  CWnd *pCVar6;
  int *piVar7;
  CPaneFrameWnd *pCVar8;
  AFX_MODULE_STATE *pAVar9;
  CObject *pCVar10;
  uint uVar11;
  undefined1 local_30 [4];
  CPaneFrameWnd *local_2c;
  tagRECT local_28;
  tagRECT local_18;
  uint local_8;
  
  local_8 = DAT_10206460 ^ (uint)&stack0xfffffffc;
  local_2c = this;
  if (*(int *)(this + 0xc0) != 0) {
    pcVar1 = *(code **)(*(int *)param_1 + 0x24);
    guard_check_icall(*(int *)(this + 0xc0),1);
    this_01 = (CWnd *)(*pcVar1)();
    if (this_01 != (CWnd *)0x0) {
      pcVar1 = *(code **)(*(int *)this_01 + 0x1cc);
      guard_check_icall();
      iVar2 = (*pcVar1)();
      if ((iVar2 != 0) && (BVar3 = IsWindow(*(HWND *)(this_01 + 0x20)), BVar3 != 0)) {
        pcVar1 = *(code **)(*(int *)this_01 + 0x16c);
        guard_check_icall();
        iVar2 = (*pcVar1)();
        if (iVar2 != 0) {
          pHVar4 = GetParent(*(HWND *)(this_01 + 0x20));
          pCVar5 = CWnd::FromHandle(pHVar4);
          pHVar4 = GetParent(*(HWND *)(pCVar5 + 0x20));
          pCVar5 = CWnd::FromHandle(pHVar4);
          pCVar6 = CWnd::FromHandlePermanent(*(HWND__ **)(local_2c + 200));
          CWnd::SetParent(this_01,pCVar6);
          pcVar1 = *(code **)(*(int *)pCVar5 + 0x3c0);
          guard_check_icall(this_01);
          (*pcVar1)();
          iVar2 = FUN_1004e58b(&PTR_s_CDockablePane_1020600c);
          if (iVar2 != 0) {
            pcVar1 = *(code **)(*(int *)this_01 + 0x1f0);
            guard_check_icall(1);
            (*pcVar1)();
          }
          CWnd::ShowWindow(this_01,5);
        }
        iVar2 = FUN_1004e58b(&PTR_s_CDockablePane_1020600c);
        if (iVar2 != 0) {
          pcVar1 = *(code **)(*(int *)this_01 + 0x1dc);
          guard_check_icall();
          iVar2 = (*pcVar1)();
          if (iVar2 != 0) {
            pcVar1 = *(code **)(*(int *)this_01 + 0x368);
            guard_check_icall(0,0xf000,0,1);
            (*pcVar1)();
          }
        }
        local_28.left = 0;
        local_28.top = 0;
        local_28.right = 0;
        local_28.bottom = 0;
        GetWindowRect(*(HWND *)(this_01 + 0x20),&local_28);
        pcVar1 = *(code **)(*(int *)this_01 + 0x228);
        guard_check_icall(0);
        iVar2 = (*pcVar1)();
        if (iVar2 == 0) {
          pcVar1 = *(code **)(*(int *)this_01 + 0x1fc);
          guard_check_icall(local_28.left,local_28.top,local_28.right,local_28.bottom,3,0);
          (*pcVar1)();
        }
        pcVar1 = *(code **)(*(int *)this_01 + 0x228);
        guard_check_icall(0);
        piVar7 = (int *)(*pcVar1)();
        this = local_2c;
        if (piVar7 != (int *)0x0) {
          pcVar1 = *(code **)(*piVar7 + 0x17c);
          guard_check_icall(this_01,0,0);
          (*pcVar1)();
          this_00 = local_2c;
          CWnd::SetParent(this_01,(CWnd *)local_2c);
          pcVar1 = *(code **)(*(int *)this_01 + 0x268);
          guard_check_icall(0);
          (*pcVar1)();
          local_18.left = 0;
          local_18.top = 0;
          local_18.right = 0;
          local_18.bottom = 0;
          GetClientRect(*(HWND *)(this_00 + 0x20),&local_18);
          pcVar1 = *(code **)(*(int *)this_00 + 0x178);
          guard_check_icall(this_01);
          (*pcVar1)();
          pcVar1 = *(code **)(*(int *)this_01 + 0x238);
          guard_check_icall(&DAT_1020d5f0,0,0,0,0,0x11,0);
          (*pcVar1)();
          pcVar1 = *(code **)(*(int *)this_01 + 0x208);
          guard_check_icall(local_30,local_18.bottom - local_18.top,1);
          (*pcVar1)();
          pcVar1 = *(code **)(*(int *)this_01 + 0x210);
          guard_check_icall();
          (*pcVar1)();
          pcVar1 = *(code **)(*(int *)this_00 + 0x1b4);
          guard_check_icall();
          (*pcVar1)();
          CWnd::SetWindowPos((CWnd *)this_00,(CWnd *)0x0,0,0,0,0,0x37);
          pcVar1 = *(code **)(*(int *)this_01 + 0x1ac);
          guard_check_icall();
          pCVar8 = (CPaneFrameWnd *)(*pcVar1)();
          local_2c = pCVar8;
          pAVar9 = AfxGetModuleState();
          pCVar10 = AfxDynamicDownCast((CRuntimeClass *)&PTR_s_CWinAppEx_101c1080,
                                       *(CObject **)(pAVar9 + 4));
          if ((pCVar10 == (CObject *)0x0) || (*(int *)(pCVar10 + 0xd0) == 0)) {
            uVar11 = 0;
          }
          else {
            uVar11 = 1;
          }
          if ((pCVar8 != (CPaneFrameWnd *)0x0) && (uVar11 == 0)) {
            *(undefined4 *)(this_00 + 0xa0) = 1;
          }
          pcVar1 = *(code **)(*(int *)this_01 + 0x224);
          guard_check_icall(local_2c,uVar11 ^ 1,0);
          (*pcVar1)();
          pcVar1 = *(code **)(*(int *)this_00 + 0x18c);
          guard_check_icall(*(undefined4 *)(this_00 + 0xc4));
          (*pcVar1)();
          goto LAB_100dff0d;
        }
      }
    }
  }
  pcVar1 = *(code **)(*(int *)this + 0x60);
  guard_check_icall();
  (*pcVar1)();
LAB_100dff0d:
  __security_check_cookie(local_8 ^ (uint)&stack0xfffffffc);
  return;
}

