// rea decompile_all
// name: CMDIClientAreaWnd::CalcWindowRect
// address: 0x1012eb3f
// body: available
// range: 0x1012eb3f-0x1012ef5b inclusive
// non_contiguous: false
// provider: Ghidra 12.1.2 (ghidra)
// analysis_profile: b075844f08879296d957518397cd0ddda73db81dce53d00d3f0e702766fc2af6
// limitations: The session serves operations only after Ghidra reports default auto-analysis complete; incomplete analysis does not expose partial results.; The imported Program and temporary project are ephemeral and deleted on close. Annotation operations edit session database metadata; original executable bytes are never written.; Cancelling an active Ghidra request terminates its ephemeral database and discards session annotations. The selected target remains open; the next provider query imports the original artifact again.; Default-space addresses use lowercase 0x-prefixed hexadecimal; other address spaces use <percent-encoded-space>:0x<hex>.; The Ghidra Program references PDB Comm_Aux.pdb (GUID ba7920cc-daa3-4461-a102-1f8f66c67a2a, age (hex) 1, signature unknown, version RSDS); Ghidra reports load state unknown. Original names and types may be missing; an empty name search does not prove a procedure is absent. Use list_procedures and address-based analysis to inspect recovered functions. REA does not admit a caller-selected PDB companion.; This session uses Ghidra 12.1.2. The bridge is verified against 12.1.4; other 12.1.x builds are accepted and the observed version is reported.; Pseudocode is Ghidra decompiler output, not original source and not text-equivalent to Hopper output.; External functions and functions without an analyzable body return null; other decompiler failures remain explicit.
// pseudocode: provider-specific; not original source


/* Library Function - Single Match
    protected: virtual void __thiscall CMDIClientAreaWnd::CalcWindowRect(struct tagRECT *,unsigned
   int)
   
   Library: Visual Studio 2015 Release */

void __thiscall
CMDIClientAreaWnd::CalcWindowRect(CMDIClientAreaWnd *this,tagRECT *param_1,uint param_2)

{
  CWnd *this_00;
  code *pcVar1;
  int iVar2;
  CFrameWnd *pCVar3;
  CObject *pCVar4;
  HWND hWnd;
  uint uVar5;
  CWnd *this_01;
  ulong uVar6;
  BOOL BVar7;
  int iVar8;
  uint local_60;
  int local_5c;
  tagRECT local_58;
  tagRECT local_48;
  tagRECT local_38;
  tagRECT local_28;
  tagRECT local_18;
  uint local_8;
  
  local_8 = DAT_10206460 ^ (uint)&stack0xfffffffc;
  if (*(int *)(this + 0x2b38) == 0) {
    if (*(int *)(this + 0x2b30) == 0) {
      this_00 = (CWnd *)(this + 0x80);
      if ((this_00 != (CWnd *)0x0) && (*(int *)(this + 0xa0) != 0)) {
        if (*(int *)(this + 0x2a98) == 0) {
          CWnd::ShowWindow(this_00,0);
        }
        else {
          local_58.left = 0;
          local_58.top = 0;
          local_58.right = 0;
          local_58.bottom = 0;
          GetWindowRect(*(HWND *)(this + 0xa0),&local_58);
          CWnd::SetWindowPos(this_00,(CWnd *)0x0,param_1->left,param_1->top,
                             param_1->right - param_1->left,param_1->bottom - param_1->top,0x14);
          local_28.left = 0;
          local_28.top = 0;
          local_28.right = 0;
          local_28.bottom = 0;
          GetClientRect(*(HWND *)(this + 0xa0),&local_28);
          local_48.left = *(LONG *)(this + 0x36c);
          local_48.top = *(LONG *)(this + 0x370);
          local_48.right = *(LONG *)(this + 0x374);
          local_48.bottom = *(LONG *)(this + 0x378);
          param_1->top = param_1->top + (local_48.top - local_28.top);
          param_1->bottom = param_1->bottom + (local_48.bottom - local_28.bottom);
          param_1->left = param_1->left + (local_48.left - local_28.left);
          param_1->right = param_1->right + (local_48.right - local_28.right);
          CWnd::ShowWindow((CWnd *)(this + 0x80),8);
          local_18.left = 0;
          local_18.top = 0;
          local_18.right = 0;
          local_18.bottom = 0;
          GetWindowRect(*(HWND *)(this + 0xa0),&local_18);
          EqualRect(&local_58,&local_18);
        }
        local_38.left = 0;
        local_38.top = 0;
        local_38.right = 0;
        local_38.bottom = 0;
        GetWindowRect(*(HWND *)(this + 0x20),&local_38);
        iVar2 = param_1->bottom - param_1->top;
        iVar8 = (iVar2 - local_38.bottom) + local_38.top;
        CWnd::SetWindowPos((CWnd *)this,(CWnd *)0x0,param_1->left,param_1->top,
                           param_1->right - param_1->left,iVar2,0x14);
        pCVar3 = CWnd::GetParentFrame((CWnd *)this);
        pCVar4 = AfxDynamicDownCast((CRuntimeClass *)&PTR_s_CMDIFrameWndEx_101c56b8,
                                    (CObject *)pCVar3);
        if (pCVar4 != (CObject *)0x0) {
          CopyRect(&local_48,param_1);
          pcVar1 = *(code **)(*(int *)pCVar4 + 0x200);
          guard_check_icall(&local_38,&local_48);
          (*pcVar1)();
        }
        if (*(int *)(this + 0x2a98) == 0) {
          local_18.left = 0;
          local_18.top = 0;
          local_18.right = 0;
          local_18.bottom = 0;
          GetClientRect(*(HWND *)(this + 0x20),&local_18);
          pCVar3 = CWnd::GetParentFrame((CWnd *)this);
          hWnd = GetWindow(*(HWND *)(pCVar3 + 0x120),5);
          while ((hWnd != (HWND)0x0 &&
                 (uVar5 = GetWindowLongW(hWnd,-0x10), (uVar5 & 0x1000000) == 0))) {
            if ((uVar5 & 0x20000000) != 0) {
              local_28.left = 0;
              local_28.top = 0;
              local_28.right = 0;
              local_28.bottom = 0;
              GetWindowRect(hWnd,&local_28);
              CWnd::ScreenToClient((CWnd *)this,&local_28);
              OffsetRect(&local_28,0,iVar8);
              if (local_28.top < local_18.top) {
                local_28.top = local_18.top;
              }
              SetWindowPos(hWnd,(HWND)0x0,local_28.left,local_28.top,0,0,0x15);
            }
            hWnd = GetWindow(hWnd,2);
          }
        }
      }
      CWnd::CalcWindowRect((CWnd *)this,param_1,param_2);
      pcVar1 = *(code **)(*(int *)this_00 + 0x20c);
      guard_check_icall();
      iVar2 = (*pcVar1)();
      local_5c = 0;
      pcVar1 = *(code **)(*(int *)this_00 + 0x1ac);
      guard_check_icall();
      iVar8 = (*pcVar1)();
      if (0 < iVar8) {
        do {
          pcVar1 = *(code **)(*(int *)this_00 + 0x1b0);
          guard_check_icall(local_5c);
          this_01 = (CWnd *)(*pcVar1)();
          if ((this_01 != (CWnd *)0x0) && (*(int *)(this_01 + 0x20) != 0)) {
            uVar6 = CWnd::GetExStyle(this_01);
            if (((uVar6 & 0x20000000) != 0) &&
               (uVar6 = CWnd::GetExStyle(this_01), (uVar6 & 0x80000) == 0)) {
              CWnd::ShowWindow(this_01,9);
            }
            local_60 = 0x10;
            if (local_5c != iVar2) {
              local_60 = 0x1c;
            }
            local_18.right = param_1->right - param_1->left;
            local_18.bottom = param_1->bottom - param_1->top;
            local_18.left = 0;
            local_18.top = 0;
            local_28.left = 0;
            local_28.top = 0;
            local_28.right = 0;
            local_28.bottom = 0;
            GetClientRect(*(HWND *)(this_01 + 0x20),&local_28);
            CWnd::ClientToScreen(this_01,&local_28);
            local_38.left = 0;
            local_38.top = 0;
            local_38.right = 0;
            local_38.bottom = 0;
            GetWindowRect(*(HWND *)(this_01 + 0x20),&local_38);
            local_18.left = local_18.left + (local_38.left - local_28.left);
            local_18.top = local_18.top + (local_38.top - local_28.top);
            local_18.right = local_18.right + (local_38.right - local_28.right);
            local_18.bottom = local_18.bottom + (local_38.bottom - local_28.bottom);
            BVar7 = EqualRect(&local_28,&local_18);
            if (BVar7 != 0) break;
            uVar6 = CWnd::GetExStyle(this_01);
            if ((uVar6 & 0x80000) == 0) {
              CWnd::SetWindowPos(this_01,(CWnd *)&DAT_1020d5f0,local_18.left,local_18.top,
                                 local_18.right - local_18.left,local_18.bottom - local_18.top,
                                 local_60);
            }
          }
          local_5c = local_5c + 1;
          pcVar1 = *(code **)(*(int *)this_00 + 0x1ac);
          guard_check_icall();
          iVar8 = (*pcVar1)();
        } while (local_5c < iVar8);
      }
    }
    else {
      CalcWindowRectForMDITabbedGroups(this,param_1,param_2);
      CWnd::CalcWindowRect((CWnd *)this,param_1,param_2);
    }
  }
  __security_check_cookie(local_8 ^ (uint)&stack0xfffffffc);
  return;
}

