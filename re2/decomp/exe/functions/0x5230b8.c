// rea decompile_all
// name: CMFCVisualManagerOffice2003::DrawCustomizeButton
// address: 0x5230b8
// body: available
// range: 0x5230b8-0x5233c7 inclusive
// non_contiguous: false
// provider: Ghidra 12.1.2 (ghidra)
// analysis_profile: ac6d50be2cdf54f7005df47d1ed7e7ef55dee595681eb1b7c2e0b00d70cd697d
// limitations: The session serves operations only after Ghidra reports default auto-analysis complete; incomplete analysis does not expose partial results.; The imported Program and temporary project are ephemeral and deleted on close. Annotation operations edit session database metadata; original executable bytes are never written.; Cancelling an active Ghidra request terminates its ephemeral database and discards session annotations. The selected target remains open; the next provider query imports the original artifact again.; Default-space addresses use lowercase 0x-prefixed hexadecimal; other address spaces use <percent-encoded-space>:0x<hex>.; The Ghidra Program references PDB ISPToolForMsi.pdb (GUID b8f2ac8f-1d6f-438d-800f-ed4a14426ac6, age (hex) 1, signature unknown, version RSDS); Ghidra reports load state unknown. Original names and types may be missing; an empty name search does not prove a procedure is absent. Use list_procedures and address-based analysis to inspect recovered functions. REA does not admit a caller-selected PDB companion.; This session uses Ghidra 12.1.2. The bridge is verified against 12.1.4; other 12.1.x builds are accepted and the observed version is reported.; Pseudocode is Ghidra decompiler output, not original source and not text-equivalent to Hopper output.; External functions and functions without an analyzable body return null; other decompiler failures remain explicit.
// pseudocode: provider-specific; not original source


/* WARNING: Function: __EH_prolog3_GS replaced with injection: EH_prolog3 */
/* Library Function - Single Match
    public: virtual void __thiscall CMFCVisualManagerOffice2003::DrawCustomizeButton(class CDC
   *,class CRect,int,enum CMFCVisualManager::AFX_BUTTON_STATE,int,int)
   
   Library: Visual Studio 2015 Release */

void __thiscall
CMFCVisualManagerOffice2003::DrawCustomizeButton
          (CMFCVisualManagerOffice2003 *this,CDC *param_1,int param_3,int param_4,int param_5,
          int param_6,int param_7,int param_8,int param_9,int param_10)

{
  code *pcVar1;
  int iVar2;
  HRGN pHVar3;
  IMAGES_IDS IVar4;
  CDC *pCVar5;
  CDrawingManager local_78 [8];
  undefined **local_70;
  undefined4 local_6c;
  undefined4 local_68;
  CDC *local_64;
  int local_60;
  int local_5c;
  int local_58;
  tagRECT local_54;
  POINT local_44;
  int local_3c;
  int local_38;
  int local_34;
  int local_30;
  int local_2c;
  int local_28;
  int local_24;
  int local_20;
  int local_1c;
  int local_18;
  undefined4 local_8;
  undefined4 uStack_4;
  
  uStack_4 = 0x68;
  local_64 = param_1;
  if (param_8 == 0) {
    local_68 = *(undefined4 *)(this + 0x178);
    local_58 = *(int *)(this + 0x17c);
  }
  else {
    local_68 = *(undefined4 *)(this + 0x194);
    local_58 = *(int *)(this + 400);
  }
  if (param_7 == 0) {
    local_3c = param_3 + 3;
    local_38 = param_4 + 2;
    local_34 = param_5 + -3;
    local_30 = param_4 + 3;
    local_2c = param_5;
    local_28 = param_4;
    local_1c = param_3;
    local_18 = param_6;
  }
  else {
    local_3c = param_3 + 2;
    local_38 = param_4 + 1;
    local_34 = param_3 + 3;
    local_30 = param_6 + -3;
    local_2c = param_3;
    local_28 = param_6;
    local_1c = param_5;
    local_18 = param_4;
  }
  local_20 = param_6;
  local_24 = param_5;
  local_44.y = param_4;
  local_44.x = param_3;
  local_6c = 0;
  local_70 = CRgn::vftable;
  local_8 = 0;
  pHVar3 = CreatePolygonRgn(&local_44,6,2);
  CMenu::Attach((CMenu *)&local_70,(HMENU__ *)pHVar3);
  pCVar5 = local_64;
  CDC::SelectClipRgn(local_64,(CRgn *)&local_70);
  CDrawingManager::CDrawingManager(local_78,pCVar5);
  local_8 = CONCAT31(local_8._1_3_,1);
  CDrawingManager::FillGradient
            (local_78,param_3,param_4,param_5,param_6,local_68,local_58,param_7,0,0);
  if (param_7 == 0) {
    InflateRect((LPRECT)&param_3,-2,0);
    param_4 = param_4 + 2;
  }
  else {
    InflateRect((LPRECT)&param_3,0,-2);
    param_3 = param_3 + 2;
  }
  pcVar1 = *(code **)(*(int *)this + 0x2e8);
  guard_check_icall();
  local_58 = (*pcVar1)();
  FUN_0045bc7e(&local_60);
  iVar2 = param_7;
  if (DAT_00614ee0 != 0) {
    local_60 = local_60 * 2;
    local_5c = local_5c * 2;
  }
  pCVar5 = local_64;
  if (param_9 != 0) {
    local_54.right = param_5;
    local_54.bottom = param_6;
    if (param_7 == 0) {
      local_54.top = param_4 + 1;
      local_54.left = (param_5 + local_58 * -2) - local_60;
    }
    else {
      local_54.top = (param_6 + local_58 * -2) - local_5c;
      local_54.left = param_3;
    }
    InflateRect(&local_54,-(((param_5 - local_54.left) - local_60) / 2),
                -(((param_6 - local_54.top) - local_5c) / 2));
    OffsetRect(&local_54,1,1);
    pCVar5 = local_64;
    IVar4 = 0x1e - (iVar2 != 0);
    CMenuImages::Draw(local_64,IVar4,(CPoint *)&local_54,3,(CSize *)&local_60);
    OffsetRect(&local_54,-1,-1);
    CMenuImages::Draw(pCVar5,IVar4,(CPoint *)&local_54,0,(CSize *)&local_60);
  }
  if (param_10 != 0) {
    local_54.left = param_3;
    if (iVar2 == 0) {
      local_54.right = local_60 + local_58 * 2 + param_3;
      local_54.top = param_4 + 1;
      local_54.bottom = param_6;
    }
    else {
      local_54.bottom = local_5c + local_58 * 2 + param_4;
      local_54.right = param_5;
      local_54.top = param_4;
    }
    InflateRect(&local_54,-(((local_54.right - param_3) - local_60) / 2),
                -(((local_54.bottom - local_54.top) - local_5c) / 2));
    IVar4 = 0x20 - (iVar2 != 0);
    OffsetRect(&local_54,1,1);
    pCVar5 = local_64;
    CMenuImages::Draw(local_64,IVar4,(CPoint *)&local_54,3,(CSize *)&local_60);
    OffsetRect(&local_54,-1,-1);
    CMenuImages::Draw(pCVar5,IVar4,(CPoint *)&local_54,0,(CSize *)&local_60);
  }
  CDC::SelectClipRgn(pCVar5,(CRgn *)0x0);
  FUN_00461ef9();
  local_70 = CRgn::vftable;
  FUN_0040ee80();
  FUN_0055bae6();
  return;
}

