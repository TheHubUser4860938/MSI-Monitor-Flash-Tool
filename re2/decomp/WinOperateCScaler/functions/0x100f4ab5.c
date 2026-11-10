// rea decompile_all
// name: CMFCToolBarButtonCustomizeDialog::OnEditImage
// address: 0x100f4ab5
// body: available
// range: 0x100f4ab5-0x100f4d49 inclusive
// non_contiguous: false
// provider: Ghidra 12.1.2 (ghidra)
// analysis_profile: b075844f08879296d957518397cd0ddda73db81dce53d00d3f0e702766fc2af6
// limitations: The session serves operations only after Ghidra reports default auto-analysis complete; incomplete analysis does not expose partial results.; The imported Program and temporary project are ephemeral and deleted on close. Annotation operations edit session database metadata; original executable bytes are never written.; Cancelling an active Ghidra request terminates its ephemeral database and discards session annotations. The selected target remains open; the next provider query imports the original artifact again.; Default-space addresses use lowercase 0x-prefixed hexadecimal; other address spaces use <percent-encoded-space>:0x<hex>.; Ghidra Listing reports a terminal call at 0x100f4af7 to 0x1001d023 FUN_1001d023 (external=false, thunk=false, hasNoReturn=true); fallthrough is excluded by Ghidra's flow model. This records Ghidra's FunctionManager flag, not an independent verification that the callee cannot return.; The Ghidra Program references PDB WinOperateCScaler.pdb (GUID a6737962-efea-4805-8ae6-1fc1ef126554, age (hex) 1, signature unknown, version RSDS); Ghidra reports load state unknown. Original names and types may be missing; an empty name search does not prove a procedure is absent. Use list_procedures and address-based analysis to inspect recovered functions. REA does not admit a caller-selected PDB companion.; This session uses Ghidra 12.1.2. The bridge is verified against 12.1.4; other 12.1.x builds are accepted and the observed version is reported.; Pseudocode is Ghidra decompiler output, not original source and not text-equivalent to Hopper output.; External functions and functions without an analyzable body return null; other decompiler failures remain explicit.
// pseudocode: provider-specific; not original source


/* WARNING: Function: __alloca_probe replaced with injection: alloca_probe */
/* Library Function - Single Match
    protected: void __thiscall CMFCToolBarButtonCustomizeDialog::OnEditImage(void)
   
   Library: Visual Studio 2015 Release */

void __thiscall
CMFCToolBarButtonCustomizeDialog::OnEditImage(CMFCToolBarButtonCustomizeDialog *this)

{
  code *pcVar1;
  HDC pHVar2;
  HBITMAP pHVar3;
  int iVar4;
  CGdiObject *pCVar5;
  int iVar6;
  void *pvVar7;
  uint uStack_1fb0;
  undefined1 local_1fa0 [18];
  ushort local_1f8e;
  undefined1 local_1f88 [12];
  CClientDC local_1f7c [4];
  HDC local_1f78;
  ulong local_1f68;
  int local_1f64;
  CDC local_1f60 [4];
  HDC__ *local_1f5c;
  undefined **local_1f50;
  HBITMAP__ *local_1f4c;
  CMFCImageEditorDialog local_1f48 [7968];
  undefined4 local_28;
  undefined4 local_24;
  int local_20;
  int local_1c;
  uint local_18;
  undefined1 *local_14;
  void *local_10;
  undefined1 *puStack_c;
  undefined4 local_8;
  
  local_8 = 0xffffffff;
  puStack_c = &LAB_1019f132;
  local_10 = ExceptionList;
  uStack_1fb0 = DAT_10201fec ^ (uint)&stack0xfffffffc;
  local_14 = (undefined1 *)&uStack_1fb0;
  ExceptionList = &local_10;
  iVar6 = *(int *)(this + 0x4f4);
  local_18 = uStack_1fb0;
  if ((iVar6 == 0) || (*(int *)(this + 0x4fc) < 0)) {
    local_14 = (undefined1 *)&uStack_1fb0;
                    /* WARNING: Subroutine does not return */
    FUN_1001d023();
  }
  iVar4 = *(int *)(iVar6 + 0x58);
  iVar6 = *(int *)(iVar6 + 0x54);
  local_8 = 0;
  local_1f64 = iVar4;
  CClientDC::CClientDC(local_1f7c,(CWnd *)(this + 0x328));
  local_1f4c = (HBITMAP__ *)0x0;
  local_1f50 = CBitmap::vftable;
  local_8._0_1_ = 2;
  CDC::CDC(local_1f60);
  local_8._0_1_ = 3;
  pHVar2 = CreateCompatibleDC(local_1f78);
  CDC::Attach(local_1f60,pHVar2);
  pHVar3 = CreateCompatibleBitmap(local_1f78,iVar6,iVar4);
  iVar4 = CMenu::Attach((CMenu *)&local_1f50,(HMENU__ *)pHVar3);
  if (iVar4 != 0) {
    pCVar5 = CDC::SelectGdiObject(local_1f5c,local_1f4c);
    local_1f68 = CMFCToolBarImages::SetTransparentColor
                           (*(CMFCToolBarImages **)(this + 0x4f4),0xc0c0c0);
    local_28 = 0;
    local_24 = 0;
    local_1c = local_1f64;
    local_20 = iVar6;
    FUN_1003c256(&local_28,0xc0c0c0);
    iVar6 = CMFCToolBarImages::PrepareDrawImage
                      (*(CMFCToolBarImages **)(this + 0x4f4),local_1f88,0,0,0);
    if (iVar6 != 0) {
      CMFCToolBarImages::Draw
                (*(CMFCToolBarImages **)(this + 0x4f4),local_1f60,0,0,*(int *)(this + 0x4fc),0,0,0,0
                 ,0,0xff);
      FUN_1005bd4d(local_1f88);
      CMFCToolBarImages::SetTransparentColor(*(CMFCToolBarImages **)(this + 0x4f4),local_1f68);
      pvVar7 = (void *)0x0;
      if (pCVar5 != (CGdiObject *)0x0) {
        pvVar7 = *(void **)(pCVar5 + 4);
      }
      CDC::SelectGdiObject(local_1f5c,pvVar7);
      GetObjectW(*(HANDLE *)(*(int *)(this + 0x4f4) + 0x8c),0x18,local_1fa0);
      if (DAT_1020bcd8 == (int *)0x0) {
        CMFCImageEditorDialog::CMFCImageEditorDialog
                  (local_1f48,(CBitmap *)&local_1f50,(CWnd *)this,(uint)local_1f8e);
        local_8._0_1_ = 4;
        iVar6 = FUN_1002e0c8();
        if (iVar6 != 1) {
          CMFCImageEditorDialog::~CMFCImageEditorDialog(local_1f48);
          goto LAB_100f4d03;
        }
        local_8._0_1_ = 3;
        CMFCImageEditorDialog::~CMFCImageEditorDialog(local_1f48);
      }
      else {
        pcVar1 = *(code **)(*DAT_1020bcd8 + 0x19c);
        guard_check_icall(this,(CBitmap *)&local_1f50);
        iVar6 = (*pcVar1)();
        if (iVar6 == 0) goto LAB_100f4d03;
      }
      CMFCToolBarImages::UpdateImage
                (*(CMFCToolBarImages **)(this + 0x4f4),*(int *)(this + 0x4fc),local_1f4c);
      InvalidateRect(*(HWND *)(this + 0x348),(RECT *)0x0,1);
    }
  }
LAB_100f4d03:
  CDC::~CDC(local_1f60);
  local_1f50 = CBitmap::vftable;
  CImageList::~CImageList((CImageList *)&local_1f50);
  CClientDC::~CClientDC(local_1f7c);
  ExceptionList = local_10;
  __security_check_cookie(local_18 ^ (uint)&stack0xfffffffc);
  return;
}

