// rea decompile_all
// name: CMFCShellTreeCtrl::OnShowContextMenu
// address: 0x10078682
// body: available
// range: 0x10078682-0x1007897f inclusive
// non_contiguous: false
// provider: Ghidra 12.1.2 (ghidra)
// analysis_profile: b075844f08879296d957518397cd0ddda73db81dce53d00d3f0e702766fc2af6
// limitations: The session serves operations only after Ghidra reports default auto-analysis complete; incomplete analysis does not expose partial results.; The imported Program and temporary project are ephemeral and deleted on close. Annotation operations edit session database metadata; original executable bytes are never written.; Cancelling an active Ghidra request terminates its ephemeral database and discards session annotations. The selected target remains open; the next provider query imports the original artifact again.; Default-space addresses use lowercase 0x-prefixed hexadecimal; other address spaces use <percent-encoded-space>:0x<hex>.; Ghidra Listing reports a terminal call at 0x1007879c to 0x1004886a FUN_1004886a (external=false, thunk=false, hasNoReturn=true); fallthrough is excluded by Ghidra's flow model. This records Ghidra's FunctionManager flag, not an independent verification that the callee cannot return.; The Ghidra Program references PDB Comm_Aux.pdb (GUID ba7920cc-daa3-4461-a102-1f8f66c67a2a, age (hex) 1, signature unknown, version RSDS); Ghidra reports load state unknown. Original names and types may be missing; an empty name search does not prove a procedure is absent. Use list_procedures and address-based analysis to inspect recovered functions. REA does not admit a caller-selected PDB companion.; This session uses Ghidra 12.1.2. The bridge is verified against 12.1.4; other 12.1.x builds are accepted and the observed version is reported.; Pseudocode is Ghidra decompiler output, not original source and not text-equivalent to Hopper output.; External functions and functions without an analyzable body return null; other decompiler failures remain explicit.
// pseudocode: provider-specific; not original source


/* WARNING: Function: __EH_prolog3_GS replaced with injection: EH_prolog3 */
/* Library Function - Single Match
    protected: void __thiscall CMFCShellTreeCtrl::OnShowContextMenu(class CPoint)
   
   Library: Visual Studio 2015 Release */

void __thiscall
CMFCShellTreeCtrl::OnShowContextMenu(CMFCShellTreeCtrl *this,int param_2,int param_3)

{
  _func_12948 *p_Var1;
  IShellFolderVtbl *pIVar2;
  code *pcVar3;
  _func_12949 *p_Var4;
  _TREEITEM *p_Var5;
  int iVar6;
  LRESULT LVar7;
  HRESULT HVar8;
  HWND pHVar9;
  CWnd *pCVar10;
  HMENU hMenu;
  WPARAM wParam;
  BOOL BVar11;
  AFX_MODULE_STATE *pAVar12;
  IShellFolder *pIVar13;
  UINT cidl;
  LPCITEMIDLIST *apidl;
  IID *riid;
  UINT *rgfReserved;
  int **ppv;
  undefined4 local_80;
  _TREEITEM *local_7c;
  int *local_5c;
  undefined4 local_58;
  undefined4 local_54;
  HWND local_50;
  int local_4c;
  undefined4 local_48;
  undefined4 local_44;
  undefined4 local_40;
  undefined4 local_3c;
  undefined4 local_38;
  CWaitCursor local_31;
  HWND local_30;
  IShellFolder *local_2c;
  int *local_28;
  undefined1 local_24 [12];
  int local_18;
  undefined4 local_8;
  undefined4 uStack_4;
  
  uStack_4 = 0x70;
  local_8 = 0x1007868e;
  if (DAT_1020e0b4 == (int *)0x0) {
    if (*(int *)(this + 0x80) == 0) {
      FUN_100509af();
    }
    else {
      if ((param_2 == -1) && (param_3 == -1)) {
        local_24._0_4_ = 0;
        local_24._4_4_ = 0;
        local_24._8_4_ = 0;
        local_18 = 0;
        p_Var5 = (_TREEITEM *)SendMessageW(*(HWND *)(this + 0x20),0x110a,9,0);
        if (p_Var5 == (_TREEITEM *)0x0) goto LAB_10078978;
        iVar6 = CTreeCtrl::GetItemRect((CTreeCtrl *)this,p_Var5,(tagRECT *)local_24,0);
        if (iVar6 != 0) {
          param_2 = local_24._0_4_;
          param_3 = local_18 + 1;
          ClientToScreen(*(HWND *)(this + 0x20),(LPPOINT)&param_2);
        }
      }
      else {
        local_18 = param_3;
        local_24._8_4_ = param_2;
        ScreenToClient(*(HWND *)(this + 0x20),(LPPOINT)(local_24 + 8));
        local_30 = (HWND)0x0;
        p_Var5 = CTreeCtrl::HitTest((CTreeCtrl *)this,local_24._8_4_,local_18,&local_30);
      }
      if (p_Var5 != (_TREEITEM *)0x0) {
        _memset(&local_80,0,0x28);
        local_80 = 4;
        local_7c = p_Var5;
        LVar7 = SendMessageW(*(HWND *)(this + 0x20),0x113e,0,(LPARAM)&local_80);
        if ((LVar7 != 0) && (local_5c != (int *)0x0)) {
          pIVar13 = (IShellFolder *)*local_5c;
          local_2c = pIVar13;
          if (pIVar13 == (IShellFolder *)0x0) {
            HVar8 = SHGetDesktopFolder(&local_2c);
            if (HVar8 < 0) {
                    /* WARNING: Subroutine does not return */
              FUN_1004886a();
            }
          }
          else {
            p_Var1 = pIVar13->lpVtbl->AddRef;
            guard_check_icall();
            (*p_Var1)(pIVar13);
          }
          if (local_2c != (IShellFolder *)0x0) {
            pHVar9 = GetParent(*(HWND *)(this + 0x20));
            pCVar10 = CWnd::FromHandle(pHVar9);
            if (pCVar10 == (CWnd *)0x0) {
              pHVar9 = (HWND)0x0;
            }
            else {
              pHVar9 = *(HWND *)(pCVar10 + 0x20);
            }
            ppv = &local_28;
            local_28 = (int *)0x0;
            rgfReserved = (UINT *)0x0;
            pIVar2 = local_2c->lpVtbl;
            apidl = (LPCITEMIDLIST *)(local_5c + 2);
            riid = (IID *)&DAT_101dca9c;
            cidl = 1;
            pIVar13 = local_2c;
            local_30 = pHVar9;
            guard_check_icall();
            HVar8 = (*pIVar2->GetUIObjectOf)(pIVar13,pHVar9,cidl,apidl,riid,rgfReserved,ppv);
            if (-1 < HVar8) {
              hMenu = CreatePopupMenu();
              if (hMenu != (HMENU)0x0) {
                iVar6 = *local_28;
                guard_check_icall(local_28,hMenu,0,1,0x7fff,4);
                iVar6 = (**(code **)(iVar6 + 0xc))();
                if (-1 < iVar6) {
                  pcVar3 = *(code **)*local_28;
                  guard_check_icall(local_28,&DAT_101dcabc,&DAT_1020e0b4);
                  (*pcVar3)();
                  pHVar9 = *(HWND *)(this + 0x20);
                  wParam = TrackPopupMenu(hMenu,0x102,param_2,param_3,0,pHVar9,(RECT *)0x0);
                  BVar11 = IsWindow(pHVar9);
                  if (BVar11 != 0) {
                    if (DAT_1020e0b4 != (int *)0x0) {
                      pcVar3 = *(code **)(*DAT_1020e0b4 + 8);
                      guard_check_icall(DAT_1020e0b4);
                      (*pcVar3)();
                      DAT_1020e0b4 = (int *)0x0;
                    }
                    if (wParam != 0) {
                      pAVar12 = AfxGetModuleState();
                      CCmdTarget::BeginWaitCursor(*(CCmdTarget **)(pAVar12 + 4));
                      local_50 = local_30;
                      local_4c = wParam - 1;
                      local_54 = 0;
                      local_48 = 0;
                      local_44 = 0;
                      local_3c = 0;
                      local_38 = 0;
                      local_58 = 0x24;
                      local_40 = 1;
                      local_8 = 0;
                      pcVar3 = *(code **)(*local_28 + 0x10);
                      guard_check_icall(local_28,&local_58);
                      iVar6 = (*pcVar3)();
                      if (-1 < iVar6) {
                        pHVar9 = GetParent(*(HWND *)(this + 0x20));
                        pCVar10 = CWnd::FromHandle(pHVar9);
                        if (pCVar10 != (CWnd *)0x0) {
                          pHVar9 = GetParent(*(HWND *)(this + 0x20));
                          pCVar10 = CWnd::FromHandle(pHVar9);
                          SendMessageW(*(HWND *)(pCVar10 + 0x20),DAT_1020f1a4,wParam,0);
                        }
                      }
                      CWnd::SetFocus((CWnd *)this);
                      local_8 = 0xffffffff;
                      CWaitCursor::~CWaitCursor(&local_31);
                    }
                  }
                }
              }
              if (local_28 != (int *)0x0) {
                pcVar3 = *(code **)(*local_28 + 8);
                guard_check_icall(local_28);
                (*pcVar3)();
                local_28 = (int *)0x0;
              }
            }
            if (local_2c != (IShellFolder *)0x0) {
              p_Var4 = local_2c->lpVtbl->Release;
              pIVar13 = local_2c;
              guard_check_icall();
              (*p_Var4)(pIVar13);
            }
          }
        }
      }
    }
  }
LAB_10078978:
  FUN_1017f5f4();
  return;
}

