// rea decompile_all
// name: CMFCVisualManagerOffice2007::OnSetWindowRegion
// address: 0x1009ca5a
// body: available
// range: 0x1009ca5a-0x1009cbb6 inclusive
// non_contiguous: false
// provider: Ghidra 12.1.2 (ghidra)
// analysis_profile: b075844f08879296d957518397cd0ddda73db81dce53d00d3f0e702766fc2af6
// limitations: The session serves operations only after Ghidra reports default auto-analysis complete; incomplete analysis does not expose partial results.; The imported Program and temporary project are ephemeral and deleted on close. Annotation operations edit session database metadata; original executable bytes are never written.; Cancelling an active Ghidra request terminates its ephemeral database and discards session annotations. The selected target remains open; the next provider query imports the original artifact again.; Default-space addresses use lowercase 0x-prefixed hexadecimal; other address spaces use <percent-encoded-space>:0x<hex>.; The Ghidra Program references PDB Comm.pdb (GUID c3062acb-498d-45fa-a233-c8b7e401bb13, age (hex) 1, signature unknown, version RSDS); Ghidra reports load state unknown. Original names and types may be missing; an empty name search does not prove a procedure is absent. Use list_procedures and address-based analysis to inspect recovered functions. REA does not admit a caller-selected PDB companion.; This session uses Ghidra 12.1.2. The bridge is verified against 12.1.4; other 12.1.x builds are accepted and the observed version is reported.; Pseudocode is Ghidra decompiler output, not original source and not text-equivalent to Hopper output.; External functions and functions without an analyzable body return null; other decompiler failures remain explicit.
// pseudocode: provider-specific; not original source


/* WARNING: Function: __EH_prolog3 replaced with injection: EH_prolog3 */
/* WARNING: Function: __EH_epilog3 replaced with injection: EH_epilog3 */
/* Library Function - Single Match
    public: virtual int __thiscall CMFCVisualManagerOffice2007::OnSetWindowRegion(class CWnd *,class
   CSize)
   
   Library: Visual Studio 2015 Release */

int __thiscall
CMFCVisualManagerOffice2007::OnSetWindowRegion
          (CMFCVisualManagerOffice2007 *this,CWnd *param_1,int param_3,int param_4)

{
  int iVar1;
  AFX_GLOBAL_DATA *this_00;
  CObject *pCVar2;
  ulong uVar3;
  HRGN pHVar4;
  int iVar5;
  undefined **local_20;
  HRGN local_1c;
  undefined **local_18;
  HRGN local_14;
  int local_8;
  undefined4 uStack_4;
  
  uStack_4 = 0x10;
  local_8 = 0x1009ca66;
  if (((param_1 != (CWnd *)0x0) && (*(int *)(param_1 + 0x20) != 0)) &&
     (iVar1 = CanDrawImage(this), iVar1 != 0)) {
    this_00 = GetGlobalData();
    iVar1 = AFX_GLOBAL_DATA::IsDwmCompositionEnabled(this_00);
    if (iVar1 != 0) {
      return 0;
    }
    pCVar2 = AfxDynamicDownCast((CRuntimeClass *)&PTR_s_CMFCPopupMenu_101d377c,(CObject *)param_1);
    if (pCVar2 == (CObject *)0x0) {
      pCVar2 = AfxDynamicDownCast((CRuntimeClass *)&PTR_s_CMFCRibbonBar_1019ff44,(CObject *)param_1)
      ;
      if (pCVar2 != (CObject *)0x0) {
        return 0;
      }
      uVar3 = CWnd::GetExStyle(param_1);
      if ((uVar3 & 0x1000000) != 0) {
        SetWindowRgn(*(HWND *)(param_1 + 0x20),(HRGN)0x0,1);
        return 1;
      }
      iVar1 = 9;
    }
    else {
      iVar1 = 3;
    }
    if (iVar1 != 0) {
      local_14 = (HRGN)0x0;
      local_18 = CRgn::vftable;
      local_8 = 0;
      pHVar4 = CreateRoundRectRgn(0,0,param_3 + 1,param_4 + 1,iVar1,iVar1);
      iVar5 = CMenu::Attach((CMenu *)&local_18,(HMENU__ *)pHVar4);
      if (iVar5 != 0) {
        iVar5 = FUN_10019d4f(&PTR_s_CMDIChildWnd_1019e19c);
        if (iVar5 != 0) {
          local_1c = (HRGN)0x0;
          local_20 = CRgn::vftable;
          local_8._0_1_ = 1;
          pHVar4 = CreateRectRgn(0,iVar1,param_3,param_4);
          CMenu::Attach((CMenu *)&local_20,(HMENU__ *)pHVar4);
          CombineRgn(local_14,local_14,local_1c,2);
          local_8 = (uint)local_8._1_3_ << 8;
          local_20 = CRgn::vftable;
          CImageList::~CImageList((CImageList *)&local_20);
        }
        pHVar4 = CGdiObject::Detach((CGdiObject *)&local_18);
        SetWindowRgn(*(HWND *)(param_1 + 0x20),pHVar4,1);
        local_18 = CRgn::vftable;
        CImageList::~CImageList((CImageList *)&local_18);
        return 1;
      }
      local_18 = CRgn::vftable;
      CImageList::~CImageList((CImageList *)&local_18);
    }
  }
  return 0;
}

