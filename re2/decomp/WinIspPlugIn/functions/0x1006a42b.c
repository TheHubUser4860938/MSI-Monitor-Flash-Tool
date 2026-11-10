// rea decompile_all
// name: CMFCShellListCtrl::DoDefault
// address: 0x1006a42b
// body: available
// range: 0x1006a42b-0x1006a63e inclusive
// non_contiguous: false
// provider: Ghidra 12.1.2 (ghidra)
// analysis_profile: b075844f08879296d957518397cd0ddda73db81dce53d00d3f0e702766fc2af6
// limitations: The session serves operations only after Ghidra reports default auto-analysis complete; incomplete analysis does not expose partial results.; The imported Program and temporary project are ephemeral and deleted on close. Annotation operations edit session database metadata; original executable bytes are never written.; Cancelling an active Ghidra request terminates its ephemeral database and discards session annotations. The selected target remains open; the next provider query imports the original artifact again.; Default-space addresses use lowercase 0x-prefixed hexadecimal; other address spaces use <percent-encoded-space>:0x<hex>.; The Ghidra Program references PDB WinIspPlugIn.pdb (GUID d9f398c7-6c98-49a8-af25-a0659d5ad2f3, age (hex) 1, signature unknown, version RSDS); Ghidra reports load state unknown. Original names and types may be missing; an empty name search does not prove a procedure is absent. Use list_procedures and address-based analysis to inspect recovered functions. REA does not admit a caller-selected PDB companion.; This session uses Ghidra 12.1.2. The bridge is verified against 12.1.4; other 12.1.x builds are accepted and the observed version is reported.; Pseudocode is Ghidra decompiler output, not original source and not text-equivalent to Hopper output.; External functions and functions without an analyzable body return null; other decompiler failures remain explicit.
// pseudocode: provider-specific; not original source


/* Library Function - Single Match
    protected: virtual void __thiscall CMFCShellListCtrl::DoDefault(int)
   
   Library: Visual Studio 2015 Release */

void __thiscall CMFCShellListCtrl::DoDefault(CMFCShellListCtrl *this,int param_1)

{
  _func_12948 *p_Var1;
  IShellFolderVtbl *pIVar2;
  code *pcVar3;
  _func_12949 *p_Var4;
  LRESULT LVar5;
  HRESULT HVar6;
  HMENU hMenu;
  int iVar7;
  HWND pHVar8;
  CWnd *pCVar9;
  IShellFolder *pIVar10;
  LPCITEMIDLIST *ppIVar11;
  UINT UVar12;
  IID *riid;
  UINT *rgfReserved;
  SFGAOF *rgfInOut;
  int **ppv;
  undefined4 local_70;
  int local_6c;
  int *local_50;
  undefined4 local_34;
  undefined4 local_30;
  undefined4 local_2c;
  int local_28;
  undefined4 local_24;
  undefined4 local_20;
  undefined4 local_1c;
  undefined4 local_18;
  undefined4 local_14;
  SFGAOF local_10;
  int *local_c;
  IShellFolder *local_8;
  
  _memset(&local_70,0,0x3c);
  local_6c = param_1;
  local_70 = 4;
  LVar5 = SendMessageW(*(HWND *)(this + 0x20),0x104b,0,(LPARAM)&local_70);
  if ((((LVar5 != 0) && (local_50 != (int *)0x0)) &&
      (pIVar10 = (IShellFolder *)*local_50, pIVar10 != (IShellFolder *)0x0)) && (local_50[2] != 0))
  {
    local_8 = pIVar10;
    if (pIVar10 == (IShellFolder *)0x0) {
      HVar6 = SHGetDesktopFolder(&local_8);
      if (HVar6 < 0) {
        return;
      }
    }
    else {
      p_Var1 = pIVar10->lpVtbl->AddRef;
      guard_check_icall();
      (*p_Var1)(pIVar10);
    }
    if (local_8 != (IShellFolder *)0x0) {
      rgfInOut = &local_10;
      local_10 = 0x20000000;
      pIVar2 = local_8->lpVtbl;
      ppIVar11 = (LPCITEMIDLIST *)(local_50 + 2);
      UVar12 = 1;
      pIVar10 = local_8;
      guard_check_icall();
      (*pIVar2->GetAttributesOf)(pIVar10,UVar12,ppIVar11,rgfInOut);
      if ((local_10 & 0x20000000) == 0) {
        ppv = &local_c;
        rgfReserved = (UINT *)0x0;
        riid = (IID *)&DAT_10200a1c;
        pIVar2 = local_8->lpVtbl;
        ppIVar11 = (LPCITEMIDLIST *)(local_50 + 2);
        UVar12 = 1;
        pHVar8 = *(HWND *)(this + 0x20);
        pIVar10 = local_8;
        guard_check_icall();
        HVar6 = (*pIVar2->GetUIObjectOf)(pIVar10,pHVar8,UVar12,ppIVar11,riid,rgfReserved,ppv);
        if (-1 < HVar6) {
          hMenu = CreatePopupMenu();
          if (hMenu != (HMENU)0x0) {
            iVar7 = *local_c;
            guard_check_icall(local_c,hMenu,0,1,0x7fff,5);
            iVar7 = (**(code **)(iVar7 + 0xc))();
            if (((-1 < iVar7) && (UVar12 = GetMenuDefaultItem(hMenu,0,0), UVar12 != 0)) &&
               (UVar12 != 0xffffffff)) {
              local_34 = 0x24;
              local_30 = 0;
              pHVar8 = GetParent(*(HWND *)(this + 0x20));
              pCVar9 = CWnd::FromHandle(pHVar8);
              if (pCVar9 == (CWnd *)0x0) {
                local_2c = 0;
              }
              else {
                local_2c = *(undefined4 *)(pCVar9 + 0x20);
              }
              local_28 = UVar12 - 1;
              local_24 = 0;
              local_20 = 0;
              local_18 = 0;
              local_14 = 0;
              local_1c = 1;
              pcVar3 = *(code **)(*local_c + 0x10);
              guard_check_icall(local_c,&local_34);
              iVar7 = (*pcVar3)();
              if (-1 < iVar7) {
                pHVar8 = GetParent(*(HWND *)(this + 0x20));
                pCVar9 = CWnd::FromHandle(pHVar8);
                if (pCVar9 != (CWnd *)0x0) {
                  pHVar8 = GetParent(*(HWND *)(this + 0x20));
                  pCVar9 = CWnd::FromHandle(pHVar8);
                  SendMessageW(*(HWND *)(pCVar9 + 0x20),DAT_1024694c,UVar12,0);
                }
              }
            }
          }
          pcVar3 = *(code **)(*local_c + 8);
          guard_check_icall(local_c);
          (*pcVar3)();
        }
      }
      else {
        pcVar3 = *(code **)(*(int *)this + 0x188);
        guard_check_icall(local_50);
        (*pcVar3)();
      }
      p_Var4 = local_8->lpVtbl->Release;
      pIVar10 = local_8;
      guard_check_icall();
      (*p_Var4)(pIVar10);
    }
  }
  return;
}

