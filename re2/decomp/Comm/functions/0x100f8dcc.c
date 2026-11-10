// rea decompile_all
// name: CMDIClientAreaWnd::CalcWindowRectForMDITabbedGroups
// address: 0x100f8dcc
// body: available
// range: 0x100f8dcc-0x100f904d inclusive
// non_contiguous: false
// provider: Ghidra 12.1.2 (ghidra)
// analysis_profile: b075844f08879296d957518397cd0ddda73db81dce53d00d3f0e702766fc2af6
// limitations: The session serves operations only after Ghidra reports default auto-analysis complete; incomplete analysis does not expose partial results.; The imported Program and temporary project are ephemeral and deleted on close. Annotation operations edit session database metadata; original executable bytes are never written.; Cancelling an active Ghidra request terminates its ephemeral database and discards session annotations. The selected target remains open; the next provider query imports the original artifact again.; Default-space addresses use lowercase 0x-prefixed hexadecimal; other address spaces use <percent-encoded-space>:0x<hex>.; The Ghidra Program references PDB Comm.pdb (GUID c3062acb-498d-45fa-a233-c8b7e401bb13, age (hex) 1, signature unknown, version RSDS); Ghidra reports load state unknown. Original names and types may be missing; an empty name search does not prove a procedure is absent. Use list_procedures and address-based analysis to inspect recovered functions. REA does not admit a caller-selected PDB companion.; This session uses Ghidra 12.1.2. The bridge is verified against 12.1.4; other 12.1.x builds are accepted and the observed version is reported.; Pseudocode is Ghidra decompiler output, not original source and not text-equivalent to Hopper output.; External functions and functions without an analyzable body return null; other decompiler failures remain explicit.
// pseudocode: provider-specific; not original source


/* Library Function - Single Match
    public: void __thiscall CMDIClientAreaWnd::CalcWindowRectForMDITabbedGroups(struct tagRECT
   *,unsigned int)
   
   Library: Visual Studio 2015 Release */

void __thiscall
CMDIClientAreaWnd::CalcWindowRectForMDITabbedGroups
          (CMDIClientAreaWnd *this,tagRECT *param_1,uint param_2)

{
  int iVar1;
  CObject *pCVar2;
  undefined4 *puVar3;
  int iVar4;
  int iVar5;
  int iVar6;
  int iVar7;
  int iVar8;
  int iVar9;
  int iVar10;
  int iStack_34;
  int local_2c;
  tagRECT local_28;
  tagRECT local_18;
  uint local_8;
  
  local_8 = DAT_101d3fec ^ (uint)&stack0xfffffffc;
  if (*(int *)(this + 0x2b94) == 0) {
    CWnd::SetWindowPos((CWnd *)this,(CWnd *)&DAT_101da3a8,param_1->left,param_1->top,
                       param_1->right - param_1->left,param_1->bottom - param_1->top,0x10);
    if (*(int *)(this + 0x2b04) != 0) {
      iVar8 = *(int *)(this + 0x2afc);
      if (*(int *)(this + 0x2b04) == 1) {
        pCVar2 = AfxDynamicDownCast((CRuntimeClass *)&PTR_s_CMFCTabCtrl_1018a624,
                                    *(CObject **)(iVar8 + 8));
        CWnd::ShowWindow((CWnd *)pCVar2,8);
        CWnd::SetWindowPos((CWnd *)pCVar2,(CWnd *)0x0,0,0,param_1->right - param_1->left,
                           param_1->bottom - param_1->top,0x14);
        AdjustMDIChildren(this,(CMFCTabCtrl *)pCVar2);
      }
      else {
        iVar7 = 0;
        while (iVar8 != 0) {
          puVar3 = (undefined4 *)FUN_1002466e();
          pCVar2 = AfxDynamicDownCast((CRuntimeClass *)&PTR_s_CMFCTabCtrl_1018a624,
                                      (CObject *)*puVar3);
          local_18.left = 0;
          local_18.top = 0;
          local_18.right = 0;
          local_18.bottom = 0;
          GetWindowRect(*(HWND *)(pCVar2 + 0x20),&local_18);
          if (*(int *)(this + 0x2b90) == 1) {
            iVar4 = local_18.right - local_18.left;
          }
          else {
            iVar4 = local_18.bottom - local_18.top;
          }
          iVar7 = iVar7 + iVar4;
        }
        if (*(int *)(this + 0x2b90) == 1) {
          iVar8 = param_1->right - param_1->left;
        }
        else {
          iVar8 = param_1->bottom - param_1->top;
        }
        iVar4 = *(int *)(this + 0x2b58);
        local_2c = 0;
        iVar1 = *(int *)(this + 0x2afc);
        while (iVar1 != 0) {
          puVar3 = (undefined4 *)FUN_1002466e();
          pCVar2 = AfxDynamicDownCast((CRuntimeClass *)&PTR_s_CMFCTabCtrl_1018a624,
                                      (CObject *)*puVar3);
          if ((pCVar2 != (CObject *)0x0) && (*(int *)(pCVar2 + 0x20) != 0)) {
            local_28.left = 0;
            local_28.top = 0;
            local_28.right = 0;
            local_28.bottom = 0;
            GetWindowRect(*(HWND *)(pCVar2 + 0x20),&local_28);
            if (*(int *)(this + 0x2b90) == 1) {
              iVar5 = local_28.right - local_28.left;
            }
            else {
              iVar5 = local_28.bottom - local_28.top;
            }
            FUN_1015afb0(((double)iVar5 / (double)iVar7) * 100.0);
            iStack_34 = FUN_10149490();
            if ((iVar1 == 0) && ((iStack_34 - local_2c) + iVar8 != 0)) {
              iStack_34 = iVar8 - local_2c;
            }
            if (iStack_34 < iVar4) {
              iStack_34 = iVar4;
            }
            if (*(int *)(this + 0x2b90) == 1) {
              iVar9 = local_2c;
              iVar10 = 0;
              iVar6 = iStack_34;
              iVar5 = param_1->bottom - param_1->top;
            }
            else {
              iVar6 = param_1->right - param_1->left;
              iVar9 = 0;
              iVar10 = local_2c;
              iVar5 = iStack_34;
            }
            CWnd::SetWindowPos((CWnd *)pCVar2,(CWnd *)0x0,iVar9,iVar10,iVar6,iVar5,0x14);
            local_2c = local_2c + iStack_34;
            AdjustMDIChildren(this,(CMFCTabCtrl *)pCVar2);
            RedrawWindow(*(HWND *)(pCVar2 + 0x20),(RECT *)0x0,(HRGN)0x0,0x105);
          }
        }
      }
    }
  }
  __security_check_cookie(local_8 ^ (uint)&stack0xfffffffc);
  return;
}

