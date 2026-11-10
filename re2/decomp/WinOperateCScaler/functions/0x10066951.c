// rea decompile_all
// name: CMFCVisualManager::OnSetWindowRegion
// address: 0x10066951
// body: available
// range: 0x10066951-0x10066af2 inclusive
// non_contiguous: false
// provider: Ghidra 12.1.2 (ghidra)
// analysis_profile: b075844f08879296d957518397cd0ddda73db81dce53d00d3f0e702766fc2af6
// limitations: The session serves operations only after Ghidra reports default auto-analysis complete; incomplete analysis does not expose partial results.; The imported Program and temporary project are ephemeral and deleted on close. Annotation operations edit session database metadata; original executable bytes are never written.; Cancelling an active Ghidra request terminates its ephemeral database and discards session annotations. The selected target remains open; the next provider query imports the original artifact again.; Default-space addresses use lowercase 0x-prefixed hexadecimal; other address spaces use <percent-encoded-space>:0x<hex>.; The Ghidra Program references PDB WinOperateCScaler.pdb (GUID a6737962-efea-4805-8ae6-1fc1ef126554, age (hex) 1, signature unknown, version RSDS); Ghidra reports load state unknown. Original names and types may be missing; an empty name search does not prove a procedure is absent. Use list_procedures and address-based analysis to inspect recovered functions. REA does not admit a caller-selected PDB companion.; This session uses Ghidra 12.1.2. The bridge is verified against 12.1.4; other 12.1.x builds are accepted and the observed version is reported.; Pseudocode is Ghidra decompiler output, not original source and not text-equivalent to Hopper output.; External functions and functions without an analyzable body return null; other decompiler failures remain explicit.
// pseudocode: provider-specific; not original source


/* WARNING: Function: __EH_prolog3 replaced with injection: EH_prolog3 */
/* WARNING: Function: __EH_epilog3 replaced with injection: EH_epilog3 */
/* Library Function - Single Match
    public: virtual int __thiscall CMFCVisualManager::OnSetWindowRegion(class CWnd *,class CSize)
   
   Library: Visual Studio 2015 Release */

int __thiscall
CMFCVisualManager::OnSetWindowRegion(undefined4 param_1_00,int param_1,int param_3,int param_4)

{
  AFX_GLOBAL_DATA *this;
  int iVar1;
  BOOL BVar2;
  HRGN pHVar3;
  undefined **local_20;
  HRGN local_1c;
  undefined **local_18;
  HRGN local_14;
  undefined4 local_8;
  undefined4 uStack_4;
  
  uStack_4 = 0x10;
  local_8 = 0x1006695d;
  this = GetGlobalData();
  iVar1 = AFX_GLOBAL_DATA::IsDwmCompositionEnabled(this);
  if (iVar1 == 0) {
    iVar1 = FUN_100250d6(&PTR_s_CFrameWndEx_101bce58);
    if (iVar1 == 0) {
      iVar1 = FUN_100250d6(&PTR_s_CMDIFrameWndEx_101bd3e8);
      if (iVar1 == 0) {
        return 0;
      }
      iVar1 = *(int *)(param_1 + 0x44c);
    }
    else {
      iVar1 = *(int *)(param_1 + 0x230);
    }
    if (((iVar1 != 0) && (BVar2 = IsWindowVisible(*(HWND *)(iVar1 + 0x20)), BVar2 != 0)) &&
       (*(int *)(iVar1 + 0x328) != 0)) {
      local_1c = (HRGN)0x0;
      local_20 = CRgn::vftable;
      local_8 = 0;
      pHVar3 = CreateRectRgn(0,0,param_3,param_4);
      CMenu::Attach((CMenu *)&local_20,(HMENU__ *)pHVar3);
      local_14 = (HRGN)0x0;
      local_18 = CRgn::vftable;
      local_8 = CONCAT31(local_8._1_3_,1);
      pHVar3 = CreateRectRgn(0,0,5,5);
      CMenu::Attach((CMenu *)&local_18,(HMENU__ *)pHVar3);
      CombineRgn(local_1c,local_14,local_1c,3);
      CGdiObject::DeleteObject((CGdiObject *)&local_18);
      pHVar3 = CreateEllipticRgn(0,0,0xb,0xb);
      CMenu::Attach((CMenu *)&local_18,(HMENU__ *)pHVar3);
      CombineRgn(local_1c,local_14,local_1c,2);
      CGdiObject::DeleteObject((CGdiObject *)&local_18);
      pHVar3 = CreateRectRgn(param_3 + -5,0,param_3,5);
      CMenu::Attach((CMenu *)&local_18,(HMENU__ *)pHVar3);
      CombineRgn(local_1c,local_14,local_1c,3);
      CGdiObject::DeleteObject((CGdiObject *)&local_18);
      pHVar3 = CreateEllipticRgn(param_3 + -10,0,param_3 + 1,0xb);
      CMenu::Attach((CMenu *)&local_18,(HMENU__ *)pHVar3);
      CombineRgn(local_1c,local_14,local_1c,2);
      pHVar3 = CGdiObject::Detach((CGdiObject *)&local_20);
      SetWindowRgn(*(HWND *)(param_1 + 0x20),pHVar3,1);
      local_18 = CRgn::vftable;
      CImageList::~CImageList((CImageList *)&local_18);
      local_20 = CRgn::vftable;
      CImageList::~CImageList((CImageList *)&local_20);
      return 1;
    }
  }
  return 0;
}

