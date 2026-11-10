// rea decompile_all
// name: CMFCToolBarsKeyboardPropertyPage::OnSelchangeCategory
// address: 0x1013a1c0
// body: available
// range: 0x1013a1c0-0x1013a40e inclusive
// non_contiguous: false
// provider: Ghidra 12.1.2 (ghidra)
// analysis_profile: b075844f08879296d957518397cd0ddda73db81dce53d00d3f0e702766fc2af6
// limitations: The session serves operations only after Ghidra reports default auto-analysis complete; incomplete analysis does not expose partial results.; The imported Program and temporary project are ephemeral and deleted on close. Annotation operations edit session database metadata; original executable bytes are never written.; Cancelling an active Ghidra request terminates its ephemeral database and discards session annotations. The selected target remains open; the next provider query imports the original artifact again.; Default-space addresses use lowercase 0x-prefixed hexadecimal; other address spaces use <percent-encoded-space>:0x<hex>.; Ghidra Listing reports a terminal call at 0x1013a2b4 to 0x10012a3f FUN_10012a3f (external=false, thunk=false, hasNoReturn=true); fallthrough is excluded by Ghidra's flow model. This records Ghidra's FunctionManager flag, not an independent verification that the callee cannot return.; The Ghidra Program references PDB Comm.pdb (GUID c3062acb-498d-45fa-a233-c8b7e401bb13, age (hex) 1, signature unknown, version RSDS); Ghidra reports load state unknown. Original names and types may be missing; an empty name search does not prove a procedure is absent. Use list_procedures and address-based analysis to inspect recovered functions. REA does not admit a caller-selected PDB companion.; This session uses Ghidra 12.1.2. The bridge is verified against 12.1.4; other 12.1.x builds are accepted and the observed version is reported.; Pseudocode is Ghidra decompiler output, not original source and not text-equivalent to Hopper output.; External functions and functions without an analyzable body return null; other decompiler failures remain explicit.
// pseudocode: provider-specific; not original source


/* WARNING: Function: __EH_prolog3 replaced with injection: EH_prolog3 */
/* WARNING: Function: __EH_epilog3 replaced with injection: EH_epilog3 */
/* Library Function - Single Match
    protected: void __thiscall CMFCToolBarsKeyboardPropertyPage::OnSelchangeCategory(void)
   
   Library: Visual Studio 2015 Release */

void __thiscall
CMFCToolBarsKeyboardPropertyPage::OnSelchangeCategory(CMFCToolBarsKeyboardPropertyPage *this)

{
  WPARAM WVar1;
  LRESULT LVar2;
  undefined4 uVar3;
  int iVar4;
  CFont *pCVar5;
  HWND pHVar6;
  CWnd *pCVar7;
  int *piVar8;
  int iVar9;
  int iVar10;
  CClientDC local_54 [20];
  CStringT<wchar_t,StrTraitMFC<wchar_t,ATL::ChTraitsCRT<wchar_t>_>_> local_40 [8];
  CStringT<wchar_t,StrTraitMFC<wchar_t,ATL::ChTraitsCRT<wchar_t>_>_> local_38 [8];
  CPen *local_30;
  CObject *local_2c;
  uint local_28;
  LRESULT local_24;
  int local_20;
  CStringT<wchar_t,StrTraitMFC<wchar_t,ATL::ChTraitsCRT<wchar_t>_>_> local_1c [4];
  int local_18;
  int local_14;
  undefined4 local_8;
  undefined4 uStack_4;
  
  uStack_4 = 0x44;
  local_8 = 0x1013a1cc;
  FUN_1002044a(1);
  WVar1 = SendMessageW(*(HWND *)(this + 0x478),0x147,0,0);
  if (WVar1 != 0xffffffff) {
    SendMessageW(*(HWND *)(this + 0x3f8),0x184,0,0);
    SendMessageW(*(HWND *)(this + 0x378),0x184,0,0);
    LVar2 = SendMessageW(*(HWND *)(this + 0x478),0x150,WVar1,0);
    local_24 = LVar2;
    uVar3 = FUN_10013071();
    FUN_10003190(uVar3);
    local_8 = 0;
    CComboBox::GetLBText((CComboBox *)(this + 0x458),WVar1,local_1c);
    iVar4 = FUN_100257be(*(undefined4 *)(this + 0x580));
    local_28 = (uint)(iVar4 == 0);
    CClientDC::CClientDC(local_54,(CWnd *)(this + 0x3d8));
    local_8 = CONCAT31(local_8._1_3_,1);
    pCVar5 = CWnd::GetFont((CWnd *)(this + 0x3d8));
    local_30 = CDC::SelectObject((CDC *)local_54,(CPen *)pCVar5);
    pHVar6 = GetParent(*(HWND *)(this + 0x20));
    pCVar7 = CWnd::FromHandle(pHVar6);
    local_2c = AfxDynamicDownCast((CRuntimeClass *)&PTR_s_CMFCToolBarsCustomizeDialog_10198b98,
                                  (CObject *)pCVar7);
    if (local_2c == (CObject *)0x0) {
LAB_1013a2b4:
                    /* WARNING: Subroutine does not return */
      FUN_10012a3f();
    }
    local_20 = *(int *)(LVar2 + 4);
    local_18 = 0;
    iVar4 = local_18;
    while (local_18 = iVar4, local_20 != 0) {
      piVar8 = (int *)FUN_1002466e(&local_20);
      iVar10 = *piVar8;
      if (iVar10 == 0) goto LAB_1013a2b4;
      iVar4 = local_18;
      if ((*(int *)(iVar10 + 0x20) != 0) && (*(int *)(iVar10 + 0x20) != -1)) {
        iVar4 = FUN_10003060(*(int *)(iVar10 + 0x2c) + -0x10);
        iVar4 = iVar4 + 0x10;
        local_8 = CONCAT31(local_8._1_3_,2);
        local_14 = iVar4;
        if ((*(int *)(*(int *)(iVar10 + 0x30) + -0xc) != 0) &&
           ((local_28 != 0 || (iVar9 = FUN_100eb779(iVar4,local_24), 1 < iVar9)))) {
          FUN_100030d0(iVar10 + 0x30);
          iVar4 = local_14;
        }
        WVar1 = SendMessageW(*(HWND *)(this + 0x3f8),0x180,0,iVar4);
        SendMessageW(*(HWND *)(this + 0x3f8),0x19a,WVar1,iVar10);
        piVar8 = (int *)CDC::GetTextExtent((CDC *)local_54,local_38);
        if (local_18 <= *piVar8) {
          piVar8 = (int *)CDC::GetTextExtent((CDC *)local_54,local_40);
          local_18 = *piVar8;
        }
        local_8 = CONCAT31(local_8._1_3_,1);
        FUN_10003460();
        iVar4 = local_18;
      }
    }
    iVar10 = GetSystemMetrics(0x15);
    SendMessageW(*(HWND *)(this + 0x3f8),0x194,iVar10 + iVar4,0);
    CDC::SelectObject((CDC *)local_54,local_30);
    CWnd::EnableWindow((CWnd *)(this + 0x140),0);
    SendMessageW(*(HWND *)(this + 0x3f8),0x186,0,0);
    OnSelchangeCommandsList(this);
    CClientDC::~CClientDC(local_54);
    FUN_10003460();
  }
  return;
}

