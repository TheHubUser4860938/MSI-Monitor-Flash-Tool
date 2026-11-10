// rea decompile_all
// name: CMFCToolBarButtonCustomizeDialog::OnAddImage
// address: 0x100f4832
// body: available
// range: 0x100f4832-0x100f4a61 inclusive
// non_contiguous: false
// provider: Ghidra 12.1.2 (ghidra)
// analysis_profile: b075844f08879296d957518397cd0ddda73db81dce53d00d3f0e702766fc2af6
// limitations: The session serves operations only after Ghidra reports default auto-analysis complete; incomplete analysis does not expose partial results.; The imported Program and temporary project are ephemeral and deleted on close. Annotation operations edit session database metadata; original executable bytes are never written.; Cancelling an active Ghidra request terminates its ephemeral database and discards session annotations. The selected target remains open; the next provider query imports the original artifact again.; Default-space addresses use lowercase 0x-prefixed hexadecimal; other address spaces use <percent-encoded-space>:0x<hex>.; Ghidra Listing reports a terminal call at 0x100f4874 to 0x1001d023 FUN_1001d023 (external=false, thunk=false, hasNoReturn=true); fallthrough is excluded by Ghidra's flow model. This records Ghidra's FunctionManager flag, not an independent verification that the callee cannot return.; The Ghidra Program references PDB WinOperateCScaler.pdb (GUID a6737962-efea-4805-8ae6-1fc1ef126554, age (hex) 1, signature unknown, version RSDS); Ghidra reports load state unknown. Original names and types may be missing; an empty name search does not prove a procedure is absent. Use list_procedures and address-based analysis to inspect recovered functions. REA does not admit a caller-selected PDB companion.; This session uses Ghidra 12.1.2. The bridge is verified against 12.1.4; other 12.1.x builds are accepted and the observed version is reported.; Pseudocode is Ghidra decompiler output, not original source and not text-equivalent to Hopper output.; External functions and functions without an analyzable body return null; other decompiler failures remain explicit.
// pseudocode: provider-specific; not original source


/* WARNING: Function: __alloca_probe replaced with injection: alloca_probe */
/* Library Function - Single Match
    protected: void __thiscall CMFCToolBarButtonCustomizeDialog::OnAddImage(void)
   
   Library: Visual Studio 2015 Release */

void __thiscall CMFCToolBarButtonCustomizeDialog::OnAddImage(CMFCToolBarButtonCustomizeDialog *this)

{
  code *pcVar1;
  HDC pHVar2;
  HBITMAP pHVar3;
  int iVar4;
  CGdiObject *pCVar5;
  AFX_GLOBAL_DATA *pAVar6;
  HBRUSH hbr;
  void *pvVar7;
  int iVar8;
  uint uStack_1fa0;
  undefined1 local_1f90 [18];
  ushort local_1f7e;
  CClientDC local_1f78 [4];
  HDC local_1f74;
  int local_1f64;
  CDC local_1f60 [4];
  HDC__ *local_1f5c;
  undefined **local_1f50;
  HBITMAP__ *local_1f4c;
  CMFCImageEditorDialog local_1f48 [7968];
  RECT local_28;
  uint local_18;
  undefined1 *local_14;
  void *local_10;
  undefined1 *puStack_c;
  undefined4 local_8;
  
  local_8 = 0xffffffff;
  puStack_c = &LAB_1019f0de;
  local_10 = ExceptionList;
  uStack_1fa0 = DAT_10201fec ^ (uint)&stack0xfffffffc;
  local_14 = (undefined1 *)&uStack_1fa0;
  ExceptionList = &local_10;
  iVar8 = *(int *)(this + 0x4f4);
  local_18 = uStack_1fa0;
  if (iVar8 == 0) {
    local_14 = (undefined1 *)&uStack_1fa0;
                    /* WARNING: Subroutine does not return */
    FUN_1001d023();
  }
  iVar4 = *(int *)(iVar8 + 0x58);
  iVar8 = *(int *)(iVar8 + 0x54);
  local_8 = 0;
  local_1f64 = iVar4;
  CClientDC::CClientDC(local_1f78,(CWnd *)(this + 0x328));
  local_1f4c = (HBITMAP__ *)0x0;
  local_1f50 = CBitmap::vftable;
  local_8._0_1_ = 2;
  CDC::CDC(local_1f60);
  local_8._0_1_ = 3;
  pHVar2 = CreateCompatibleDC(local_1f74);
  CDC::Attach(local_1f60,pHVar2);
  pHVar3 = CreateCompatibleBitmap(local_1f74,iVar8,iVar4);
  iVar4 = CMenu::Attach((CMenu *)&local_1f50,(HMENU__ *)pHVar3);
  if (iVar4 != 0) {
    pCVar5 = CDC::SelectGdiObject(local_1f5c,local_1f4c);
    local_28.left = 0;
    local_28.top = 0;
    local_28.bottom = local_1f64;
    local_28.right = iVar8;
    pAVar6 = GetGlobalData();
    hbr = (HBRUSH)0x0;
    if (pAVar6 != (AFX_GLOBAL_DATA *)0xffffff68) {
      hbr = *(HBRUSH *)(pAVar6 + 0x9c);
    }
    FillRect(local_1f5c,&local_28,hbr);
    if (pCVar5 == (CGdiObject *)0x0) {
      pvVar7 = (void *)0x0;
    }
    else {
      pvVar7 = *(void **)(pCVar5 + 4);
    }
    CDC::SelectGdiObject(local_1f5c,pvVar7);
    GetObjectW(*(HANDLE *)(*(int *)(this + 0x4f4) + 0x8c),0x18,local_1f90);
    if (DAT_1020bcd8 == (int *)0x0) {
      CMFCImageEditorDialog::CMFCImageEditorDialog
                (local_1f48,(CBitmap *)&local_1f50,(CWnd *)this,(uint)local_1f7e);
      local_8._0_1_ = 4;
      iVar8 = FUN_1002e0c8();
      if (iVar8 != 1) {
        CMFCImageEditorDialog::~CMFCImageEditorDialog(local_1f48);
        goto LAB_100f4a1b;
      }
      local_8._0_1_ = 3;
      CMFCImageEditorDialog::~CMFCImageEditorDialog(local_1f48);
    }
    else {
      pcVar1 = *(code **)(*DAT_1020bcd8 + 0x19c);
      guard_check_icall(this,(CBitmap *)&local_1f50);
      iVar8 = (*pcVar1)();
      if (iVar8 == 0) goto LAB_100f4a1b;
    }
    iVar8 = CMFCToolBarImages::AddImage(*(CMFCToolBarImages **)(this + 0x4f4),local_1f4c,0);
    if (-1 < iVar8) {
      RebuildImageList(this);
      FUN_1014041a(iVar8);
      goto LAB_100f4a1b;
    }
  }
  AfxMessageBox(0x3e83,0,0xffffffff);
LAB_100f4a1b:
  CDC::~CDC(local_1f60);
  local_1f50 = CBitmap::vftable;
  CImageList::~CImageList((CImageList *)&local_1f50);
  CClientDC::~CClientDC(local_1f78);
  ExceptionList = local_10;
  __security_check_cookie(local_18 ^ (uint)&stack0xfffffffc);
  return;
}

