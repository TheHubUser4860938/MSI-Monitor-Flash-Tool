// rea decompile_all
// name: CMFCToolBarImages::AddIcon
// address: 0x100859fc
// body: available
// range: 0x100859fc-0x10085b9a inclusive
// non_contiguous: false
// provider: Ghidra 12.1.2 (ghidra)
// analysis_profile: b075844f08879296d957518397cd0ddda73db81dce53d00d3f0e702766fc2af6
// limitations: The session serves operations only after Ghidra reports default auto-analysis complete; incomplete analysis does not expose partial results.; The imported Program and temporary project are ephemeral and deleted on close. Annotation operations edit session database metadata; original executable bytes are never written.; Cancelling an active Ghidra request terminates its ephemeral database and discards session annotations. The selected target remains open; the next provider query imports the original artifact again.; Default-space addresses use lowercase 0x-prefixed hexadecimal; other address spaces use <percent-encoded-space>:0x<hex>.; The Ghidra Program references PDB WinIspPlugIn.pdb (GUID d9f398c7-6c98-49a8-af25-a0659d5ad2f3, age (hex) 1, signature unknown, version RSDS); Ghidra reports load state unknown. Original names and types may be missing; an empty name search does not prove a procedure is absent. Use list_procedures and address-based analysis to inspect recovered functions. REA does not admit a caller-selected PDB companion.; This session uses Ghidra 12.1.2. The bridge is verified against 12.1.4; other 12.1.x builds are accepted and the observed version is reported.; Pseudocode is Ghidra decompiler output, not original source and not text-equivalent to Hopper output.; External functions and functions without an analyzable body return null; other decompiler failures remain explicit.
// pseudocode: provider-specific; not original source


/* WARNING: Function: __EH_prolog3_GS replaced with injection: EH_prolog3 */
/* Library Function - Single Match
    public: int __thiscall CMFCToolBarImages::AddIcon(struct HICON__ *,int)
   
   Library: Visual Studio 2015 Release */

int __thiscall CMFCToolBarImages::AddIcon(CMFCToolBarImages *this,HICON__ *param_1,int param_2)

{
  HDC pHVar1;
  int iVar2;
  HMENU__ *pHVar3;
  AFX_GLOBAL_DATA *pAVar4;
  HBRUSH hbr;
  void *pvVar5;
  int iVar6;
  int cy;
  CWindowDC local_88 [4];
  HDC local_84;
  CDC local_74 [4];
  HDC local_70;
  HICON__ *local_64;
  CGdiObject *local_60;
  uint local_5c;
  undefined **local_58;
  HBITMAP__ *local_54;
  BITMAPINFO local_50;
  RECT local_24;
  undefined4 local_8;
  undefined4 uStack_4;
  
  uStack_4 = 0x78;
  local_8 = 0x10085a08;
  local_64 = param_1;
  CWindowDC::CWindowDC(local_88,(CWnd *)0x0);
  local_8 = 0;
  local_5c = -(uint)(param_1 != (HICON__ *)0x0) & param_2;
  CDC::CDC(local_74);
  local_8._0_1_ = 1;
  pHVar1 = CreateCompatibleDC((HDC)0x0);
  CDC::Attach(local_74,pHVar1);
  local_54 = (HBITMAP__ *)0x0;
  local_58 = CBitmap::vftable;
  iVar6 = *(int *)(this + 0x54);
  cy = *(int *)(this + 0x58);
  local_8 = CONCAT31(local_8._1_3_,2);
  iVar2 = IsScaled(this);
  if (iVar2 != 0) {
    iVar6 = *(int *)(this + 0x5c);
    cy = *(int *)(this + 0x60);
  }
  if (local_5c == 0) {
    pHVar3 = (HMENU__ *)CreateCompatibleBitmap(local_84,iVar6,cy);
  }
  else {
    local_50.bmiHeader.biBitCount = 0x20;
    local_50.bmiHeader.biSize = 0x28;
    local_50.bmiHeader.biPlanes = 1;
    local_50.bmiHeader.biSizeImage = cy * iVar6;
    local_50.bmiHeader.biCompression = 0;
    local_50.bmiHeader.biXPelsPerMeter = 0;
    local_50.bmiHeader.biYPelsPerMeter = 0;
    local_50.bmiHeader.biClrUsed = 0;
    local_50.bmiHeader.biClrImportant = 0;
    local_60 = (CGdiObject *)0x0;
    local_50.bmiHeader.biWidth = iVar6;
    local_50.bmiHeader.biHeight = cy;
    pHVar3 = (HMENU__ *)CreateDIBSection(local_70,&local_50,0,&local_60,(HANDLE)0x0,0);
    if (pHVar3 == (HMENU__ *)0x0) goto LAB_10085b6f;
  }
  CMenu::Attach((CMenu *)&local_58,pHVar3);
  local_60 = CDC::SelectGdiObject(local_70,local_54);
  if (local_5c == 0) {
    local_24.left = 0;
    local_24.top = 0;
    local_24.right = iVar6;
    local_24.bottom = cy;
    pAVar4 = GetGlobalData();
    hbr = (HBRUSH)0x0;
    if (pAVar4 != (AFX_GLOBAL_DATA *)0xffffff68) {
      hbr = *(HBRUSH *)(pAVar4 + 0x9c);
    }
    FillRect(local_70,&local_24,hbr);
  }
  if (local_64 != (HICON__ *)0x0) {
    CDC::DrawState(local_74,0,0,iVar6,cy,local_64,0,0);
  }
  pvVar5 = (void *)0x0;
  if (local_60 != (CGdiObject *)0x0) {
    pvVar5 = *(void **)(local_60 + 4);
  }
  CDC::SelectGdiObject(local_70,pvVar5);
  if (local_5c != 0) {
    *(undefined4 *)(this + 8) = 0x20;
    PreMultiplyAlpha(local_54,*(int *)(this + 0x3c));
  }
  AddImage(this,local_54,0);
LAB_10085b6f:
  local_58 = CBitmap::vftable;
  CImageList::~CImageList((CImageList *)&local_58);
  CDC::~CDC(local_74);
  CWindowDC::~CWindowDC(local_88);
  iVar6 = FUN_1018015d();
  return iVar6;
}

