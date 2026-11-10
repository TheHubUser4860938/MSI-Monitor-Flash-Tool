// rea decompile_all
// name: CFrameImpl::AddDefaultButtonsToCustomizePane
// address: 0x492274
// body: available
// range: 0x492274-0x4924b1 inclusive
// non_contiguous: false
// provider: Ghidra 12.1.2 (ghidra)
// analysis_profile: ac6d50be2cdf54f7005df47d1ed7e7ef55dee595681eb1b7c2e0b00d70cd697d
// limitations: The session serves operations only after Ghidra reports default auto-analysis complete; incomplete analysis does not expose partial results.; The imported Program and temporary project are ephemeral and deleted on close. Annotation operations edit session database metadata; original executable bytes are never written.; Cancelling an active Ghidra request terminates its ephemeral database and discards session annotations. The selected target remains open; the next provider query imports the original artifact again.; Default-space addresses use lowercase 0x-prefixed hexadecimal; other address spaces use <percent-encoded-space>:0x<hex>.; The Ghidra Program references PDB ISPToolForMsi.pdb (GUID b8f2ac8f-1d6f-438d-800f-ed4a14426ac6, age (hex) 1, signature unknown, version RSDS); Ghidra reports load state unknown. Original names and types may be missing; an empty name search does not prove a procedure is absent. Use list_procedures and address-based analysis to inspect recovered functions. REA does not admit a caller-selected PDB companion.; This session uses Ghidra 12.1.2. The bridge is verified against 12.1.4; other 12.1.x builds are accepted and the observed version is reported.; Pseudocode is Ghidra decompiler output, not original source and not text-equivalent to Hopper output.; External functions and functions without an analyzable body return null; other decompiler failures remain explicit.
// pseudocode: provider-specific; not original source


/* WARNING: Function: __EH_prolog3_GS replaced with injection: EH_prolog3 */
/* Library Function - Single Match
    protected: void __thiscall CFrameImpl::AddDefaultButtonsToCustomizePane(class CMFCPopupMenu
   *,unsigned int)
   
   Library: Visual Studio 2015 Release */

void __thiscall
CFrameImpl::AddDefaultButtonsToCustomizePane(CFrameImpl *this,CMFCPopupMenu *param_1,uint param_2)

{
  code *pcVar1;
  uint uVar2;
  CMFCToolBarsCustomizeDialog *this_00;
  CObject *pCVar3;
  int iVar4;
  CObject *pCVar5;
  undefined4 uVar6;
  int iVar7;
  undefined4 uVar8;
  int *piVar9;
  bool bVar10;
  int iVar11;
  int local_128;
  int *local_124;
  int local_120;
  uint local_11c;
  CMFCCustomizeMenuButton local_118 [272];
  undefined4 local_8;
  undefined4 uStack_4;
  
  iVar7 = DAT_00617774;
  uStack_4 = 0x120;
  local_8 = 0x492283;
  if (DAT_00617774 != 0) {
    this_00 = (CMFCToolBarsCustomizeDialog *)FUN_00416408(0x918);
    local_8 = 0;
    if (this_00 == (CMFCToolBarsCustomizeDialog *)0x0) {
      local_124 = (int *)0x0;
    }
    else {
      local_124 = (int *)CMFCToolBarsCustomizeDialog::CMFCToolBarsCustomizeDialog
                                   (this_00,*(CFrameWnd **)(this + 0xb0),1,0x40,
                                    (CList<CRuntimeClass*,CRuntimeClass*> *)0x0);
    }
    local_8 = 0xffffffff;
    local_128 = *(int *)(iVar7 + 0xc78);
    local_11c = 0;
    piVar9 = local_124;
    while (local_128 != 0) {
      pCVar3 = (CObject *)FUN_0043410a(&local_128);
      if (((((pCVar3 != (CObject *)0x0) &&
            (iVar7 = *(int *)(pCVar3 + 0x20), ((byte)pCVar3[0x24] & 1) == 0)) &&
           (iVar4 = FUN_0043970d(&PTR_s_CMFCCustomizeButton_0060c918), iVar4 == 0)) &&
          (iVar4 = CMap<int,int,int,int>::Lookup
                             ((CMap<int,int,int,int> *)&PTR_vftable_0060ca44,iVar7,&local_120),
          iVar4 == 0)) &&
         (((iVar4 = FUN_0043970d(&PTR_s_CMFCDropDownToolbarButton_0060c9b0), iVar4 == 0 ||
           (pCVar5 = AfxDynamicDownCast((CRuntimeClass *)&PTR_s_CMFCDropDownToolbarButton_0060c9b0,
                                        pCVar3), *(int *)(pCVar5 + 0x70) == 0)) ||
          (iVar4 = FUN_00451789(iVar7,0), iVar4 == -1)))) {
        iVar4 = FUN_0043970d(&PTR_s_CMFCToolBarMenuButton_0060c6d0);
        if ((iVar4 != 0) &&
           (pCVar5 = AfxDynamicDownCast((CRuntimeClass *)&PTR_s_CMFCToolBarMenuButton_0060c6d0,
                                        pCVar3), *(int *)(pCVar5 + 0xb0) != 0)) {
          bVar10 = false;
          local_120 = *(int *)(pCVar5 + 0x74);
          do {
            if (local_120 == 0) break;
            iVar4 = FUN_0043410a(&local_120);
            bVar10 = *(int *)(iVar4 + 0x20) == iVar7;
          } while (*(int *)(iVar4 + 0x20) != iVar7);
          piVar9 = local_124;
          if (bVar10) goto LAB_0049247b;
        }
        iVar4 = *(int *)(pCVar3 + 0x20);
        if ((iVar4 == 0) || (iVar4 == -1)) {
          iVar7 = -0x14;
        }
        iVar11 = *(int *)(pCVar3 + 4);
        if (iVar11 == 0) {
          uVar8 = *(undefined4 *)(pCVar3 + 0x34);
        }
        else {
          uVar8 = *(undefined4 *)(pCVar3 + 0x38);
        }
        uVar6 = FUN_004eac94(iVar4);
        CMFCCustomizeMenuButton(iVar7,0,uVar8,uVar6,iVar11);
        uVar2 = local_11c;
        local_8 = 1;
        CMFCCustomizeMenuButton::SetItemIndex(local_118,local_11c,0,0);
        iVar7 = CMFCPopupMenu::InsertItem(param_1,(CMFCToolBarMenuButton *)local_118,uVar2);
        if (iVar7 == -1) {
          CMFCPopupMenu::InsertItem(param_1,(CMFCToolBarMenuButton *)local_118,-1);
        }
        local_8 = 0xffffffff;
        FUN_00514700();
      }
LAB_0049247b:
      local_11c = local_11c + 1;
    }
    if (piVar9 != (int *)0x0) {
      pcVar1 = *(code **)(*piVar9 + 4);
      guard_check_icall(1);
      (*pcVar1)();
    }
  }
  FUN_0055bae6();
  return;
}

