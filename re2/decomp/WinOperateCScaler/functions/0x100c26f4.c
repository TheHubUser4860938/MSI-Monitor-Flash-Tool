// rea decompile_all
// name: CMDIChildWndEx::RecalcLayout
// address: 0x100c26f4
// body: available
// range: 0x100c26f4-0x100c28fe inclusive
// non_contiguous: false
// provider: Ghidra 12.1.2 (ghidra)
// analysis_profile: b075844f08879296d957518397cd0ddda73db81dce53d00d3f0e702766fc2af6
// limitations: The session serves operations only after Ghidra reports default auto-analysis complete; incomplete analysis does not expose partial results.; The imported Program and temporary project are ephemeral and deleted on close. Annotation operations edit session database metadata; original executable bytes are never written.; Cancelling an active Ghidra request terminates its ephemeral database and discards session annotations. The selected target remains open; the next provider query imports the original artifact again.; Default-space addresses use lowercase 0x-prefixed hexadecimal; other address spaces use <percent-encoded-space>:0x<hex>.; The Ghidra Program references PDB WinOperateCScaler.pdb (GUID a6737962-efea-4805-8ae6-1fc1ef126554, age (hex) 1, signature unknown, version RSDS); Ghidra reports load state unknown. Original names and types may be missing; an empty name search does not prove a procedure is absent. Use list_procedures and address-based analysis to inspect recovered functions. REA does not admit a caller-selected PDB companion.; This session uses Ghidra 12.1.2. The bridge is verified against 12.1.4; other 12.1.x builds are accepted and the observed version is reported.; Pseudocode is Ghidra decompiler output, not original source and not text-equivalent to Hopper output.; External functions and functions without an analyzable body return null; other decompiler failures remain explicit.
// pseudocode: provider-specific; not original source


/* Library Function - Single Match
    public: virtual void __thiscall CMDIChildWndEx::RecalcLayout(int)
   
   Library: Visual Studio 2015 Release */

void __thiscall CMDIChildWndEx::RecalcLayout(CMDIChildWndEx *this,int param_1)

{
  code *pcVar1;
  CWnd *this_00;
  int iVar2;
  int iVar3;
  int iVar4;
  CWnd *this_01;
  CFrameWnd *pCVar5;
  CMDIChildWndEx *pCVar6;
  CObject *pCVar7;
  int iVar8;
  tagRECT local_18;
  uint local_8;
  
  local_8 = DAT_10201fec ^ (uint)&stack0xfffffffc;
  if (*(int *)(this + 0xf4) != 0) goto LAB_100c276c;
  *(undefined4 *)(this + 0xf4) = 1;
  if (*(int *)(this + 0x134) == 0) {
    this_00 = (CWnd *)FUN_100903fd();
    if (*(int *)(this + 900) == 0) {
      iVar2 = CDockingManager::IsOLEContainerMode((CDockingManager *)(this + 0x254));
      if (iVar2 != 0) goto LAB_100c277d;
      pcVar1 = *(code **)(*(int *)(this + 0x254) + 0x34);
      guard_check_icall(param_1);
      (*pcVar1)();
    }
    else {
LAB_100c277d:
      if ((this_00 != (CWnd *)0x0) &&
         (iVar2 = FUN_100250d6(&PTR_s_CPreviewViewEx_101cd000), iVar2 != 0)) {
        pcVar1 = *(code **)(*(int *)(this + 0x254) + 0x34);
        guard_check_icall(param_1);
        (*pcVar1)();
        iVar2 = *(int *)(this + 0x34c);
        iVar8 = *(int *)(this + 0x350);
        local_18.right = *(LONG *)(this + 0x354);
        local_18.bottom = *(LONG *)(this + 0x358);
        iVar3 = local_18.bottom - iVar8;
        iVar4 = local_18.right - iVar2;
        local_18.left = iVar2;
        local_18.top = iVar8;
LAB_100c28f5:
        CWnd::SetWindowPos(this_00,(CWnd *)0x0,iVar2,iVar8,iVar4,iVar3,0x14);
        goto LAB_100c2765;
      }
      this_01 = (CWnd *)FUN_100903fd();
      if (this_01 != (CWnd *)0x0) {
        pCVar5 = CWnd::GetParentFrame((CWnd *)this);
        pcVar1 = *(code **)(*(int *)pCVar5 + 0x170);
        guard_check_icall();
        pCVar6 = (CMDIChildWndEx *)(*pcVar1)();
        if ((pCVar6 == this) && (*(int *)(this + 0x148) != 0)) {
          pCVar7 = AfxDynamicDownCast((CRuntimeClass *)&PTR_s_COleDocument_101ccb74,
                                      *(CObject **)(this_01 + 0x80));
          if (pCVar7 != (CObject *)0x0) {
            pcVar1 = *(code **)(*(int *)pCVar7 + 0x110);
            guard_check_icall(this_01);
            iVar2 = (*pcVar1)();
            if (((param_1 != 0) && (iVar2 != 0)) && (*(int **)(iVar2 + 0x60) != (int *)0x0)) {
              pcVar1 = *(code **)(**(int **)(iVar2 + 0x60) + 0x50);
              guard_check_icall();
              (*pcVar1)();
            }
          }
          local_18.left = 0;
          local_18.top = 0;
          local_18.right = 0;
          local_18.bottom = 0;
          pCVar5 = CWnd::GetParentFrame(this_01);
          if ((pCVar5 == (CFrameWnd *)0x0) || (*(int *)(pCVar5 + 0x20) == 0)) goto LAB_100c2765;
          GetClientRect(*(HWND *)(pCVar5 + 0x20),&local_18);
          if (*(int *)(this + 900) == 0) {
            iVar2 = 0xe900;
          }
          else {
            iVar2 = 0xea21;
          }
          this_00 = CWnd::GetDlgItem((CWnd *)this,iVar2);
          if (((this_00 == (CWnd *)0x0) || (*(int *)(this_00 + 0x20) == 0)) ||
             (iVar2 = FUN_100250d6(&PTR_s_CSplitterWnd_101b5b30), iVar2 == 0)) {
            this_00 = this_01;
          }
          iVar3 = local_18.bottom - local_18.top;
          iVar4 = local_18.right - local_18.left;
          iVar8 = 0;
          iVar2 = 0;
          goto LAB_100c28f5;
        }
      }
    }
    AdjustClientArea(this);
  }
LAB_100c2765:
  *(undefined4 *)(this + 0xf4) = 0;
LAB_100c276c:
  __security_check_cookie(local_8 ^ (uint)&stack0xfffffffc);
  return;
}

