// rea decompile_all
// name: COleControlContainer::FillListSitesOrWnds
// address: 0x43fe15
// body: available
// range: 0x43fe15-0x43ff9a inclusive
// non_contiguous: false
// provider: Ghidra 12.1.2 (ghidra)
// analysis_profile: ac6d50be2cdf54f7005df47d1ed7e7ef55dee595681eb1b7c2e0b00d70cd697d
// limitations: The session serves operations only after Ghidra reports default auto-analysis complete; incomplete analysis does not expose partial results.; The imported Program and temporary project are ephemeral and deleted on close. Annotation operations edit session database metadata; original executable bytes are never written.; Cancelling an active Ghidra request terminates its ephemeral database and discards session annotations. The selected target remains open; the next provider query imports the original artifact again.; Default-space addresses use lowercase 0x-prefixed hexadecimal; other address spaces use <percent-encoded-space>:0x<hex>.; The Ghidra Program references PDB ISPToolForMsi.pdb (GUID b8f2ac8f-1d6f-438d-800f-ed4a14426ac6, age (hex) 1, signature unknown, version RSDS); Ghidra reports load state unknown. Original names and types may be missing; an empty name search does not prove a procedure is absent. Use list_procedures and address-based analysis to inspect recovered functions. REA does not admit a caller-selected PDB companion.; This session uses Ghidra 12.1.2. The bridge is verified against 12.1.4; other 12.1.x builds are accepted and the observed version is reported.; Pseudocode is Ghidra decompiler output, not original source and not text-equivalent to Hopper output.; External functions and functions without an analyzable body return null; other decompiler failures remain explicit.
// pseudocode: provider-specific; not original source


/* Library Function - Single Match
    public: virtual int __thiscall COleControlContainer::FillListSitesOrWnds(struct
   _AFX_OCC_DIALOG_INFO *)
   
   Library: Visual Studio 2015 Release */

int __thiscall
COleControlContainer::FillListSitesOrWnds(COleControlContainer *this,_AFX_OCC_DIALOG_INFO *param_1)

{
  undefined4 uVar1;
  int iVar2;
  int *piVar3;
  HWND pHVar4;
  COleControlSiteOrWnd *pCVar5;
  BOOL BVar6;
  int iVar7;
  __POSITION *p_Var8;
  UINT uCmd;
  __POSITION *local_20;
  HWND__ *local_1c;
  HWND local_14;
  __POSITION *local_10;
  uint local_c;
  int local_8;
  
  if (param_1 == (_AFX_OCC_DIALOG_INFO *)0x0) {
    iVar2 = 0;
  }
  else {
    local_20 = *(__POSITION **)(this + 0x44);
    local_8 = 0;
    local_10 = local_20;
    if (local_20 != (__POSITION *)0x0) {
      piVar3 = (int *)FUN_004ead48(&local_10);
      local_8 = *piVar3;
    }
    local_14 = (HWND)0x0;
    local_c = 0;
    iVar2 = local_8;
    p_Var8 = local_10;
    if (*(int *)(param_1 + 8) != 0) {
      do {
        iVar7 = iVar2;
        if (((iVar2 == 0) || (*(int *)(iVar2 + 4) == 0)) ||
           (iVar7 = local_8,
           *(int *)(*(int *)(iVar2 + 4) + 0x2c) != *(int *)(*(int *)(param_1 + 0xc) + local_c * 8)))
        {
          iVar2 = iVar7;
          if (*(int *)(*(int *)(param_1 + 0xc) + local_c * 8) != 0) {
            if (local_14 == (HWND)0x0) {
              pHVar4 = (HWND)0x0;
              if (*(int *)(this + 0x20) != 0) {
                pHVar4 = *(HWND *)(*(int *)(this + 0x20) + 0x20);
              }
              uCmd = 5;
            }
            else {
              uCmd = 2;
              pHVar4 = local_14;
            }
            pHVar4 = GetWindow(pHVar4,uCmd);
            local_1c = AfxGetDlgItemStartFromHWND
                                 (*(int *)(*(int *)(param_1 + 0xc) + local_c * 8),pHVar4);
            if (local_1c == (HWND__ *)0x0) {
              if (*(int *)(this + 0x20) == 0) {
                pHVar4 = (HWND)0x0;
              }
              else {
                pHVar4 = *(HWND *)(*(int *)(this + 0x20) + 0x20);
              }
              local_1c = ::GetDlgItem(pHVar4,*(int *)(*(int *)(param_1 + 0xc) + local_c * 8));
            }
            pCVar5 = (COleControlSiteOrWnd *)FUN_00416408(0xc);
            if (pCVar5 == (COleControlSiteOrWnd *)0x0) {
              pCVar5 = (COleControlSiteOrWnd *)0x0;
            }
            else {
              uVar1 = *(undefined4 *)(*(int *)(param_1 + 0xc) + 4 + local_c * 8);
              *(undefined4 *)(pCVar5 + 4) = 0;
              *(HWND__ **)pCVar5 = local_1c;
              *(undefined4 *)(pCVar5 + 8) = uVar1;
            }
            BVar6 = IsWindow(*(HWND *)pCVar5);
            iVar2 = local_8;
            if (BVar6 != 0) {
              local_14 = *(HWND *)pCVar5;
              if (local_20 == (__POSITION *)0x0) {
                CTypedPtrList<CPtrList,COleControlSiteOrWnd*>::TransferAddTail
                          ((CTypedPtrList<CPtrList,COleControlSiteOrWnd*> *)(this + 0x40),pCVar5);
                iVar2 = local_8;
              }
              else {
                _CTypedPtrList<CPtrList,COleControlSiteOrWnd*>::TransferInsertBefore
                          ((_CTypedPtrList<CPtrList,COleControlSiteOrWnd*> *)(this + 0x40),local_20,
                           pCVar5);
                iVar2 = local_8;
              }
            }
          }
        }
        else {
          pHVar4 = *(HWND *)(*(int *)(local_8 + 4) + 0x24);
          if (pHVar4 != (HWND)0x0) {
            local_14 = pHVar4;
          }
          local_20 = p_Var8;
          if (p_Var8 == (__POSITION *)0x0) {
            local_8 = 0;
            iVar2 = 0;
          }
          else {
            piVar3 = (int *)FUN_004ead48(&local_10);
            local_8 = *piVar3;
            iVar2 = local_8;
            p_Var8 = local_10;
          }
        }
        local_c = local_c + 1;
      } while (local_c < *(uint *)(param_1 + 8));
    }
    iVar2 = 1;
  }
  return iVar2;
}

