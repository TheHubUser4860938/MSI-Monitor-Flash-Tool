// rea decompile_all
// name: CMFCTabCtrl::OnShowTabDocumentsMenu
// address: 0x1007dadf
// body: available
// range: 0x1007dadf-0x1007dd3d inclusive
// non_contiguous: false
// provider: Ghidra 12.1.2 (ghidra)
// analysis_profile: b075844f08879296d957518397cd0ddda73db81dce53d00d3f0e702766fc2af6
// limitations: The session serves operations only after Ghidra reports default auto-analysis complete; incomplete analysis does not expose partial results.; The imported Program and temporary project are ephemeral and deleted on close. Annotation operations edit session database metadata; original executable bytes are never written.; Cancelling an active Ghidra request terminates its ephemeral database and discards session annotations. The selected target remains open; the next provider query imports the original artifact again.; Default-space addresses use lowercase 0x-prefixed hexadecimal; other address spaces use <percent-encoded-space>:0x<hex>.; The Ghidra Program references PDB WinOperateCScaler.pdb (GUID a6737962-efea-4805-8ae6-1fc1ef126554, age (hex) 1, signature unknown, version RSDS); Ghidra reports load state unknown. Original names and types may be missing; an empty name search does not prove a procedure is absent. Use list_procedures and address-based analysis to inspect recovered functions. REA does not admit a caller-selected PDB companion.; This session uses Ghidra 12.1.2. The bridge is verified against 12.1.4; other 12.1.x builds are accepted and the observed version is reported.; Pseudocode is Ghidra decompiler output, not original source and not text-equivalent to Hopper output.; External functions and functions without an analyzable body return null; other decompiler failures remain explicit.
// pseudocode: provider-specific; not original source


/* WARNING: Function: __EH_prolog3 replaced with injection: EH_prolog3 */
/* WARNING: Function: __EH_epilog3 replaced with injection: EH_epilog3 */
/* Library Function - Single Match
    public: virtual void __thiscall CMFCTabCtrl::OnShowTabDocumentsMenu(class CPoint)
   
   Library: Visual Studio 2015 Release */

void __thiscall
CMFCTabCtrl::OnShowTabDocumentsMenu(CMFCTabCtrl *this,undefined4 param_2,undefined4 param_3)

{
  code *pcVar1;
  CMFCTabCtrl *pCVar2;
  HMENU pHVar3;
  int *piVar4;
  int iVar5;
  undefined4 uVar6;
  HWND pHVar7;
  DWORD *pDVar8;
  BOOL BVar9;
  LPCWSTR pWVar10;
  int iVar11;
  int in_stack_ffffffc0;
  UINT in_stack_ffffffc4;
  undefined **local_30;
  HMENU local_2c;
  CMFCTabCtrl *local_28;
  int local_24;
  HMENU local_20;
  UINT_PTR local_1c;
  int local_18;
  LPCWSTR local_14 [3];
  uint local_8;
  undefined4 uStack_4;
  
  uStack_4 = 0x20;
  if (DAT_1020b26c != (int *)0x0) {
    local_2c = (HMENU)0x0;
    local_30 = CMenu::vftable;
    local_8 = 0;
    local_28 = this;
    pHVar3 = CreatePopupMenu();
    CMenu::Attach((CMenu *)&local_30,pHVar3);
    iVar11 = 0;
    if (0 < *(int *)(this + 0xbc)) {
      do {
        piVar4 = (int *)FUN_1009f8c7(iVar11);
        local_24 = *piVar4;
        if (*(int *)(local_24 + 0x34) != 0) {
          local_1c = -iVar11 - 100;
          iVar5 = FUN_100187a0(*(int *)(local_24 + 4) + -0x10);
          local_14[0] = (LPCWSTR)(iVar5 + 0x10);
          local_8 = CONCAT31(local_8._1_3_,1);
          ATL::CStringT<wchar_t,StrTraitMFC<wchar_t,ATL::ChTraitsCRT<wchar_t>_>_>::Replace
                    ((CStringT<wchar_t,StrTraitMFC<wchar_t,ATL::ChTraitsCRT<wchar_t>_>_> *)local_14,
                     L"&&",L"\x01\x01");
          ATL::CStringT<wchar_t,StrTraitMFC<wchar_t,ATL::ChTraitsCRT<wchar_t>_>_>::Replace
                    ((CStringT<wchar_t,StrTraitMFC<wchar_t,ATL::ChTraitsCRT<wchar_t>_>_> *)local_14,
                     L"&",L"&&");
          ATL::CStringT<wchar_t,StrTraitMFC<wchar_t,ATL::ChTraitsCRT<wchar_t>_>_>::Replace
                    ((CStringT<wchar_t,StrTraitMFC<wchar_t,ATL::ChTraitsCRT<wchar_t>_>_> *)local_14,
                     L"\x01\x01",L"&&");
          pHVar3 = (HMENU)0x0;
          local_20 = (HMENU)0x0;
          iVar5 = GetMenuItemCount(local_2c);
          if (0 < iVar5) {
            do {
              uVar6 = FUN_1001e20a();
              FUN_1001d224(uVar6);
              local_8._0_1_ = 2;
              FID_conflict_GetMenuStringA
                        (pHVar3,(UINT)&local_18,(LPSTR)0x400,in_stack_ffffffc0,in_stack_ffffffc4);
              iVar5 = FUN_10030af2(local_18);
              pWVar10 = local_14[0];
              if (iVar5 < 0) {
                InsertMenuW(local_2c,(UINT)local_20,0x400,local_1c,local_14[0]);
                local_8 = CONCAT31(local_8._1_3_,1);
                ATL::CStringData::Release((CStringData *)(local_18 + -0x10));
                goto LAB_1007dc0c;
              }
              local_8 = CONCAT31(local_8._1_3_,1);
              ATL::CStringData::Release((CStringData *)(local_18 + -0x10));
              pHVar3 = (HMENU)((int)&pHVar3->unused + 1);
              local_20 = pHVar3;
              iVar5 = GetMenuItemCount(local_2c);
            } while ((int)pHVar3 < iVar5);
          }
          pWVar10 = local_14[0];
          AppendMenuW(local_2c,0,local_1c,local_14[0]);
LAB_1007dc0c:
          iVar5 = *(int *)(local_24 + 0x20);
          if ((iVar5 != 0) && (*(int *)(iVar5 + 0x20) != 0)) {
            local_20 = (HMENU)SendMessageW(*(HWND *)(iVar5 + 0x20),0x7f,0,0);
            if (local_20 == (HMENU)0x0) {
              if (*(int *)(local_24 + 0x20) == 0) {
                pHVar7 = (HWND)0x0;
              }
              else {
                pHVar7 = *(HWND *)(*(int *)(local_24 + 0x20) + 0x20);
              }
              local_20 = (HMENU)GetClassLongW(pHVar7,-0x22);
            }
            pDVar8 = (DWORD *)FUN_100c3357(local_1c);
            *pDVar8 = (DWORD)local_20;
          }
          local_8 = local_8 & 0xffffff00;
          ATL::CStringData::Release((CStringData *)(pWVar10 + -8));
        }
        iVar11 = iVar11 + 1;
      } while (iVar11 < *(int *)(this + 0xbc));
    }
    pHVar7 = *(HWND *)(this + 0x20);
    iVar11 = *DAT_1020b26c;
    guard_check_icall(local_2c,param_2,param_3,local_28,0);
    iVar11 = (**(code **)(iVar11 + 0x14))();
    BVar9 = IsWindow(pHVar7);
    pCVar2 = local_28;
    if (BVar9 != 0) {
      iVar11 = -100 - iVar11;
      if ((-1 < iVar11) && (iVar11 < *(int *)(local_28 + 0xbc))) {
        *(int *)(local_28 + 0x24c) = 1;
        pcVar1 = *(code **)(*(int *)local_28 + 0x214);
        guard_check_icall(iVar11);
        (*pcVar1)();
        *(int *)(pCVar2 + 0x24c) = 0;
      }
      CMap<int,int,int,int>::RemoveAll((CMap<int,int,int,int> *)&PTR_vftable_102016ac);
    }
    local_8 = 4;
    local_30 = CMenu::vftable;
    CMenu::DestroyMenu((CMenu *)&local_30);
  }
  return;
}

