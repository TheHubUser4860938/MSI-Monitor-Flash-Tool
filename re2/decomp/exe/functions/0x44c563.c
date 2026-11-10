// rea decompile_all
// name: CMFCToolBarImages::DrawEx
// address: 0x44c563
// body: available
// range: 0x44c563-0x44c8be inclusive
// non_contiguous: false
// provider: Ghidra 12.1.2 (ghidra)
// analysis_profile: ac6d50be2cdf54f7005df47d1ed7e7ef55dee595681eb1b7c2e0b00d70cd697d
// limitations: The session serves operations only after Ghidra reports default auto-analysis complete; incomplete analysis does not expose partial results.; The imported Program and temporary project are ephemeral and deleted on close. Annotation operations edit session database metadata; original executable bytes are never written.; Cancelling an active Ghidra request terminates its ephemeral database and discards session annotations. The selected target remains open; the next provider query imports the original artifact again.; Default-space addresses use lowercase 0x-prefixed hexadecimal; other address spaces use <percent-encoded-space>:0x<hex>.; The Ghidra Program references PDB ISPToolForMsi.pdb (GUID b8f2ac8f-1d6f-438d-800f-ed4a14426ac6, age (hex) 1, signature unknown, version RSDS); Ghidra reports load state unknown. Original names and types may be missing; an empty name search does not prove a procedure is absent. Use list_procedures and address-based analysis to inspect recovered functions. REA does not admit a caller-selected PDB companion.; This session uses Ghidra 12.1.2. The bridge is verified against 12.1.4; other 12.1.x builds are accepted and the observed version is reported.; Pseudocode is Ghidra decompiler output, not original source and not text-equivalent to Hopper output.; External functions and functions without an analyzable body return null; other decompiler failures remain explicit.
// pseudocode: provider-specific; not original source


/* Library Function - Single Match
    public: int __thiscall CMFCToolBarImages::DrawEx(class CDC *,class CRect,int,enum
   CMFCToolBarImages::ImageAlignHorz,enum CMFCToolBarImages::ImageAlignVert,class CRect,unsigned
   char)
   
   Library: Visual Studio 2015 Release */

int __thiscall
CMFCToolBarImages::DrawEx
          (CMFCToolBarImages *this,CDC *param_1,int param_3,int param_4,int param_5,int param_6,
          int param_7,int param_8,int param_9,int param_10,int param_11,int param_12,int param_13,
          undefined4 param_14)

{
  HGDIOBJ pvVar1;
  CMFCToolBarImages *pCVar2;
  BOOL BVar3;
  int hSrc;
  int iVar4;
  CDC *pCVar5;
  int iVar6;
  int iVar7;
  int iVar8;
  int iVar9;
  _BLENDFUNCTION _Var10;
  undefined1 local_50 [12];
  CMFCToolBarImages *local_44;
  int local_40;
  int local_3c;
  int local_38;
  int local_34;
  int local_30;
  int local_2c;
  int local_28;
  HGDIOBJ local_24;
  CDC *local_20;
  _BLENDFUNCTION local_1c;
  tagRECT local_18;
  uint local_8;
  
  local_8 = DAT_0060cff4 ^ (uint)&stack0xfffffffc;
  local_20 = param_1;
  local_44 = this;
  BVar3 = IsRectEmpty((RECT *)&param_10);
  if (BVar3 != 0) {
    local_40 = 0;
    local_3c = 0;
    param_12 = *(int *)(this + 0x54);
    param_13 = *(int *)(this + 0x58);
    param_10 = 0;
    param_11 = 0;
    local_38 = param_12;
    local_34 = param_13;
  }
  BVar3 = IsRectEmpty((RECT *)&param_10);
  if (BVar3 != 0) goto LAB_0044c862;
  local_18.left = param_3;
  local_18.top = param_4;
  local_18.right = param_5;
  local_18.bottom = param_6;
  if (param_8 != 3) {
    if (param_8 == 0) {
      local_18.right = (param_3 - param_10) + param_12;
    }
    else if (param_8 == 2) {
      local_18.left = (param_5 - param_12) + param_10;
    }
    else {
      if (param_8 != 1) goto LAB_0044c666;
      local_18.left = (((param_5 - param_3) - param_12) + param_10) / 2 + param_3;
      local_18.right = (param_12 - param_10) + local_18.left;
    }
    local_40 = local_18.left;
    local_3c = param_4;
    local_38 = local_18.right;
    local_34 = param_6;
    IntersectRect(&local_18,&local_18,(RECT *)&param_3);
    iVar6 = local_18.right - local_18.left;
    if ((0 < iVar6) && (iVar6 != param_12 - param_10)) {
      param_10 = param_10 + (local_18.left - local_40);
      if (param_12 - param_10 <= iVar6) {
        iVar6 = param_12 - param_10;
      }
      param_12 = iVar6 + param_10;
    }
  }
LAB_0044c666:
  if (param_9 != 3) {
    if (param_9 == 0) {
      local_18.bottom = (param_13 - param_11) + local_18.top;
    }
    else if (param_9 == 2) {
      local_18.top = (param_11 - param_13) + local_18.bottom;
    }
    else {
      if (param_9 != 1) goto LAB_0044c707;
      local_18.top = local_18.top + (((param_11 - param_13) - local_18.top) + local_18.bottom) / 2;
      local_18.bottom = (param_13 - param_11) + local_18.top;
    }
    local_40 = local_18.left;
    local_3c = local_18.top;
    local_38 = local_18.right;
    local_34 = local_18.bottom;
    IntersectRect(&local_18,&local_18,(RECT *)&param_3);
    iVar6 = local_18.bottom - local_18.top;
    if ((0 < iVar6) && (iVar6 != param_13 - param_11)) {
      param_11 = param_11 + (local_18.top - local_3c);
      if (param_13 - param_11 <= iVar6) {
        iVar6 = param_13 - param_11;
      }
      param_13 = iVar6 + param_11;
    }
  }
LAB_0044c707:
  BVar3 = IsRectEmpty((RECT *)&param_10);
  if ((BVar3 == 0) && (BVar3 = IsRectEmpty(&local_18), BVar3 == 0)) {
    local_24 = SelectObject(DAT_00614e50,*(HGDIOBJ *)(this + 0x8c));
    local_30 = param_10;
    local_2c = param_11;
    BVar3 = IsRectEmpty((RECT *)&param_10);
    if (BVar3 == 0) {
      iVar6 = param_12 - param_10;
    }
    else {
      iVar6 = *(int *)(this + 0x54);
    }
    local_28 = iVar6;
    BVar3 = IsRectEmpty((RECT *)&param_10);
    if (BVar3 == 0) {
      hSrc = param_13 - param_11;
    }
    else {
      hSrc = *(int *)(this + 0x58);
    }
    iVar8 = 0;
    if (*(int *)(this + 8) == 0x20) {
      iVar7 = local_18.right - local_18.left;
      iVar9 = local_18.bottom - local_18.top;
      local_1c._0_3_ = (uint3)(byte)param_14 << 0x10;
      local_1c.AlphaFormat = '\x01';
      iVar4 = *(int *)(this + 0x54) * param_7 + local_30;
      iVar6 = local_2c;
      iVar8 = local_28;
      _Var10 = local_1c;
      pCVar5 = CDC::FromHandle(DAT_00614e50);
      iVar8 = CDC::AlphaBlend(local_20,local_18.left,local_18.top,iVar7,iVar9,pCVar5,iVar4,iVar6,
                              iVar8,hSrc,_Var10);
    }
    else if (*(int *)(this + 0xa8) == -1) {
      iVar8 = StretchBlt(*(HDC *)(local_20 + 4),local_18.left,local_18.top,
                         local_18.right - local_18.left,local_18.bottom - local_18.top,DAT_00614e50,
                         *(int *)(this + 0x54) * param_7 + local_30,local_2c,iVar6,hSrc,0xcc0020);
    }
    SelectObject(DAT_00614e50,local_24);
    if (iVar8 == 0) {
      pvVar1 = *(HGDIOBJ *)(this + 0x40);
      *(undefined4 *)(this + 0x40) = 0;
      local_24 = pvVar1;
      iVar6 = PrepareDrawImage(this,local_50,local_18.right - local_18.left,
                               local_18.bottom - local_18.top,0);
      pCVar2 = local_44;
      if (iVar6 == 0) {
        *(HGDIOBJ *)(this + 0x40) = pvVar1;
      }
      else {
        ((LPRECT)(this + 0x7c))->left = param_10;
        *(int *)(this + 0x80) = param_11;
        *(int *)(this + 0x84) = param_12;
        *(int *)(this + 0x88) = param_13;
        Draw(local_44,local_20,local_18.left,local_18.top,param_7,0,0,0,0,0,(uchar)param_14);
        SetRectEmpty((LPRECT)(this + 0x7c));
        FUN_0044c977(local_50);
        *(HGDIOBJ *)(pCVar2 + 0x40) = local_24;
      }
    }
  }
LAB_0044c862:
  iVar6 = __security_check_cookie(local_8 ^ (uint)&stack0xfffffffc);
  return iVar6;
}

