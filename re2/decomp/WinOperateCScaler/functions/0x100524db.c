// rea decompile_all
// name: FUN_100524db
// address: 0x100524db
// body: available
// range: 0x100524db-0x10052a12 inclusive
// non_contiguous: false
// provider: Ghidra 12.1.2 (ghidra)
// analysis_profile: b075844f08879296d957518397cd0ddda73db81dce53d00d3f0e702766fc2af6
// limitations: The session serves operations only after Ghidra reports default auto-analysis complete; incomplete analysis does not expose partial results.; The imported Program and temporary project are ephemeral and deleted on close. Annotation operations edit session database metadata; original executable bytes are never written.; Cancelling an active Ghidra request terminates its ephemeral database and discards session annotations. The selected target remains open; the next provider query imports the original artifact again.; Default-space addresses use lowercase 0x-prefixed hexadecimal; other address spaces use <percent-encoded-space>:0x<hex>.; Ghidra Listing reports a terminal call at 0x10052a0e to 0x1001d023 FUN_1001d023 (external=false, thunk=false, hasNoReturn=true); fallthrough is excluded by Ghidra's flow model. This records Ghidra's FunctionManager flag, not an independent verification that the callee cannot return.; The Ghidra Program references PDB WinOperateCScaler.pdb (GUID a6737962-efea-4805-8ae6-1fc1ef126554, age (hex) 1, signature unknown, version RSDS); Ghidra reports load state unknown. Original names and types may be missing; an empty name search does not prove a procedure is absent. Use list_procedures and address-based analysis to inspect recovered functions. REA does not admit a caller-selected PDB companion.; This session uses Ghidra 12.1.2. The bridge is verified against 12.1.4; other 12.1.x builds are accepted and the observed version is reported.; Pseudocode is Ghidra decompiler output, not original source and not text-equivalent to Hopper output.; External functions and functions without an analyzable body return null; other decompiler failures remain explicit.
// pseudocode: provider-specific; not original source


/* WARNING: Function: __EH_prolog3_GS replaced with injection: EH_prolog3 */

void FUN_100524db(void)

{
  CGdiObject *this;
  int *piVar1;
  code *pcVar2;
  float fVar3;
  LONG LVar4;
  BYTE BVar5;
  int iVar6;
  void *pvVar7;
  HFONT pHVar8;
  long lVar9;
  HGDIOBJ pvVar10;
  CGdiObject *pCVar11;
  CWnd *pCVar12;
  AFX_GLOBAL_DATA *in_ECX;
  undefined4 *puVar13;
  wchar_t *lpString2;
  CWindowDC local_484 [4];
  HDC local_480;
  HDC local_47c;
  undefined **local_470;
  HGDIOBJ local_46c;
  undefined8 local_468;
  undefined4 local_460 [83];
  LONG local_314;
  BYTE local_310;
  undefined4 local_268 [56];
  uint local_188;
  LONG local_178;
  BYTE local_174;
  byte local_171;
  WCHAR local_16c [126];
  LOGFONTW local_70;
  undefined4 local_8;
  undefined4 uStack_4;
  
  uStack_4 = 0x474;
  local_8 = 0x100524ea;
  CWindowDC::CWindowDC(local_484,(CWnd *)0x0);
  local_8 = 0;
  iVar6 = GetDeviceCaps(local_47c,0x58);
  local_468 = (double)CONCAT44((float)iVar6,(undefined4)local_468);
  fVar3 = (float)iVar6 / 96.0;
  *(double *)(in_ECX + 0x1e0) = (double)fVar3;
  if ((1.0 < fVar3) && (fVar3 < 1.1)) {
    *(undefined8 *)(in_ECX + 0x1e0) = 0x3ff0000000000000;
  }
  pCVar11 = (CGdiObject *)(in_ECX + 0x11c);
  if ((pCVar11 != (CGdiObject *)0x0) && (*(int *)(in_ECX + 0x120) != 0)) {
    pvVar7 = CGdiObject::Detach(pCVar11);
    DeleteObject(pvVar7);
  }
  if (((CGdiObject *)(in_ECX + 0x124) != (CGdiObject *)0x0) && (*(int *)(in_ECX + 0x128) != 0)) {
    pvVar7 = CGdiObject::Detach((CGdiObject *)(in_ECX + 0x124));
    DeleteObject(pvVar7);
  }
  if (((CGdiObject *)(in_ECX + 300) != (CGdiObject *)0x0) && (*(int *)(in_ECX + 0x130) != 0)) {
    pvVar7 = CGdiObject::Detach((CGdiObject *)(in_ECX + 300));
    DeleteObject(pvVar7);
  }
  if (((CGdiObject *)(in_ECX + 0x134) != (CGdiObject *)0x0) && (*(int *)(in_ECX + 0x138) != 0)) {
    pvVar7 = CGdiObject::Detach((CGdiObject *)(in_ECX + 0x134));
    DeleteObject(pvVar7);
  }
  if (((CGdiObject *)(in_ECX + 0x13c) != (CGdiObject *)0x0) && (*(int *)(in_ECX + 0x140) != 0)) {
    pvVar7 = CGdiObject::Detach((CGdiObject *)(in_ECX + 0x13c));
    DeleteObject(pvVar7);
  }
  if (((CGdiObject *)(in_ECX + 0x144) != (CGdiObject *)0x0) && (*(int *)(in_ECX + 0x148) != 0)) {
    pvVar7 = CGdiObject::Detach((CGdiObject *)(in_ECX + 0x144));
    DeleteObject(pvVar7);
  }
  if (((CGdiObject *)(in_ECX + 0x14c) != (CGdiObject *)0x0) && (*(int *)(in_ECX + 0x150) != 0)) {
    pvVar7 = CGdiObject::Detach((CGdiObject *)(in_ECX + 0x14c));
    DeleteObject(pvVar7);
  }
  if (((CGdiObject *)(in_ECX + 0x154) != (CGdiObject *)0x0) && (*(int *)(in_ECX + 0x158) != 0)) {
    pvVar7 = CGdiObject::Detach((CGdiObject *)(in_ECX + 0x154));
    DeleteObject(pvVar7);
  }
  if (((CGdiObject *)(in_ECX + 0x164) != (CGdiObject *)0x0) && (*(int *)(in_ECX + 0x168) != 0)) {
    pvVar7 = CGdiObject::Detach((CGdiObject *)(in_ECX + 0x164));
    DeleteObject(pvVar7);
  }
  this = (CGdiObject *)(in_ECX + 0x15c);
  if ((this != (CGdiObject *)0x0) && (*(int *)(in_ECX + 0x160) != 0)) {
    pvVar7 = CGdiObject::Detach(this);
    DeleteObject(pvVar7);
  }
  local_268[0] = 0x1f8;
  AFX_GLOBAL_DATA::GetNonClientMetrics(in_ECX,(tagNONCLIENTMETRICSW *)local_268);
  _memset(&local_70,0,0x5c);
  iVar6 = GetTextCharsetInfo(local_480,(LPFONTSIGNATURE)0x0,0);
  local_70.lfWeight = local_178;
  local_70.lfItalic = local_174;
  local_70.lfHeight = (local_188 ^ (int)local_188 >> 0x1f) - ((int)local_188 >> 0x1f);
  if (local_70.lfHeight < 0xd) {
    local_70.lfHeight = 0xb;
  }
  else if (*(int *)(in_ECX + 8) == 0) {
    local_70.lfHeight = local_70.lfHeight + -1;
  }
  if ((int)local_188 < 0) {
    local_70.lfHeight = -local_70.lfHeight;
  }
  local_70.lfCharSet = (BYTE)iVar6;
  lstrcpyW(local_70.lfFaceName,local_16c);
  if ((*(int *)(in_ECX + 4) == 0) && (local_171 < 3)) {
    iVar6 = EnumFontFamiliesW(local_480,(LPCWSTR)0x0,FUN_10051e77,0x101b2258);
    if (iVar6 == 0) {
      lstrcpyW(local_70.lfFaceName,L"Segoe UI");
      local_70.lfQuality = '\x05';
    }
    else {
      iVar6 = EnumFontFamiliesW(local_480,(LPCWSTR)0x0,FUN_10051e77,0x101b226c);
      if (iVar6 == 0) {
        lpString2 = L"Tahoma";
      }
      else {
        lpString2 = L"MS Sans Serif";
      }
      lstrcpyW(local_70.lfFaceName,lpString2);
    }
  }
  pHVar8 = CreateFontIndirectW(&local_70);
  CMenu::Attach((CMenu *)pCVar11,(HMENU__ *)pHVar8);
  LVar4 = local_70.lfHeight;
  lVar9 = _labs(local_70.lfHeight);
  local_468 = (double)lVar9;
  local_70.lfHeight = FUN_101548f0();
  if (LVar4 < 0) {
    local_70.lfHeight = -local_70.lfHeight;
  }
  pHVar8 = CreateFontIndirectW(&local_70);
  CMenu::Attach((CMenu *)this,(HMENU__ *)pHVar8);
  local_460[0] = 0x1f8;
  local_70.lfHeight = LVar4;
  AFX_GLOBAL_DATA::GetNonClientMetrics(in_ECX,(tagNONCLIENTMETRICSW *)local_460);
  local_70.lfItalic = local_310;
  local_70.lfWeight = local_314;
  pHVar8 = CreateFontIndirectW(&local_70);
  CMenu::Attach((CMenu *)(in_ECX + 0x124),(HMENU__ *)pHVar8);
  local_70.lfItalic = local_174;
  local_70.lfWeight = local_178;
  local_70.lfUnderline = '\x01';
  pHVar8 = CreateFontIndirectW(&local_70);
  CMenu::Attach((CMenu *)(in_ECX + 0x13c),(HMENU__ *)pHVar8);
  local_70.lfUnderline = '\0';
  local_70.lfWeight = 700;
  pHVar8 = CreateFontIndirectW(&local_70);
  CMenu::Attach((CMenu *)(in_ECX + 300),(HMENU__ *)pHVar8);
  BVar5 = local_70.lfCharSet;
  local_70.lfWeight = 0;
  local_70.lfCharSet = '\x02';
  iVar6 = GetSystemMetrics(0x48);
  local_70.lfHeight = iVar6 - 1;
  lstrcpyW(local_70.lfFaceName,L"Marlett");
  pHVar8 = CreateFontIndirectW(&local_70);
  CMenu::Attach((CMenu *)(in_ECX + 0x164),(HMENU__ *)pHVar8);
  local_46c = (HGDIOBJ)0x0;
  local_470 = CFont::vftable;
  local_8 = CONCAT31(local_8._1_3_,1);
  local_70.lfCharSet = BVar5;
  local_46c = GetStockObject(0x11);
  if ((local_46c != (HGDIOBJ)0x0) && (iVar6 = GetObjectW(local_46c,0x5c,&local_70), iVar6 != 0)) {
    local_70.lfHeight = local_188;
    local_70.lfWeight = local_178;
    local_70.lfItalic = local_174;
    local_70.lfOrientation = 900;
    local_70.lfEscapement = 0xa8c;
    lstrcpyW(local_70.lfFaceName,L"Arial");
    pHVar8 = CreateFontIndirectW(&local_70);
    CMenu::Attach((CMenu *)(in_ECX + 0x14c),(HMENU__ *)pHVar8);
    local_70.lfEscapement = 900;
    pHVar8 = CreateFontIndirectW(&local_70);
    CMenu::Attach((CMenu *)(in_ECX + 0x154),(HMENU__ *)pHVar8);
  }
  pvVar10 = GetStockObject(0x11);
  pCVar11 = CGdiObject::FromHandle(pvVar10);
  GetObjectW(*(HANDLE *)(pCVar11 + 4),0x5c,&local_70);
  local_70.lfUnderline = '\x01';
  pHVar8 = CreateFontIndirectW(&local_70);
  CMenu::Attach((CMenu *)(in_ECX + 0x144),(HMENU__ *)pHVar8);
  local_70.lfUnderline = '\0';
  local_70.lfWeight = 700;
  pHVar8 = CreateFontIndirectW(&local_70);
  CMenu::Attach((CMenu *)(in_ECX + 0x134),(HMENU__ *)pHVar8);
  AFX_GLOBAL_DATA::UpdateTextMetrics(in_ECX);
  puVar13 = DAT_10209d54;
  while( true ) {
    if (puVar13 == (undefined4 *)0x0) {
      local_470 = CFont::vftable;
      CImageList::~CImageList((CImageList *)&local_470);
      CWindowDC::~CWindowDC(local_484);
      FUN_10154478();
      return;
    }
    if (puVar13 == (undefined4 *)0x0) break;
    piVar1 = (int *)puVar13[2];
    puVar13 = (undefined4 *)*puVar13;
    if (piVar1 == (int *)0x0) break;
    pCVar12 = CWnd::FromHandlePermanent((HWND__ *)piVar1[8]);
    if (pCVar12 != (CWnd *)0x0) {
      pcVar2 = *(code **)(*piVar1 + 0x3a8);
      guard_check_icall();
      (*pcVar2)();
    }
  }
                    /* WARNING: Subroutine does not return */
  FUN_1001d023();
}

