// rea decompile_all
// name: CControlBar::DrawBorders
// address: 0x50a08a
// body: available
// range: 0x50a08a-0x50a30d inclusive
// non_contiguous: false
// provider: Ghidra 12.1.2 (ghidra)
// analysis_profile: ac6d50be2cdf54f7005df47d1ed7e7ef55dee595681eb1b7c2e0b00d70cd697d
// limitations: The session serves operations only after Ghidra reports default auto-analysis complete; incomplete analysis does not expose partial results.; The imported Program and temporary project are ephemeral and deleted on close. Annotation operations edit session database metadata; original executable bytes are never written.; Cancelling an active Ghidra request terminates its ephemeral database and discards session annotations. The selected target remains open; the next provider query imports the original artifact again.; Default-space addresses use lowercase 0x-prefixed hexadecimal; other address spaces use <percent-encoded-space>:0x<hex>.; The Ghidra Program references PDB ISPToolForMsi.pdb (GUID b8f2ac8f-1d6f-438d-800f-ed4a14426ac6, age (hex) 1, signature unknown, version RSDS); Ghidra reports load state unknown. Original names and types may be missing; an empty name search does not prove a procedure is absent. Use list_procedures and address-based analysis to inspect recovered functions. REA does not admit a caller-selected PDB companion.; This session uses Ghidra 12.1.2. The bridge is verified against 12.1.4; other 12.1.x builds are accepted and the observed version is reported.; Pseudocode is Ghidra decompiler output, not original source and not text-equivalent to Hopper output.; External functions and functions without an analyzable body return null; other decompiler failures remain explicit.
// pseudocode: provider-specific; not original source


/* Library Function - Single Match
    public: virtual void __thiscall CControlBar::DrawBorders(class CDC *,class CRect &)
   
   Library: Visual Studio 2015 Release */

void __thiscall CControlBar::DrawBorders(CControlBar *this,CDC *param_1,CRect *param_2)

{
  uint uVar1;
  uint uVar2;
  ulong uVar3;
  int iVar4;
  BOOL BVar5;
  HRESULT HVar6;
  COLORREF CVar7;
  uint uVar8;
  int iVar9;
  uint uVar10;
  uint uVar11;
  int iVar12;
  int local_3c;
  int local_24;
  RECT local_18;
  uint local_8;
  
  uVar3 = DAT_006161e4;
  local_8 = DAT_0060cff4 ^ (uint)&stack0xfffffffc;
  uVar2 = *(uint *)(this + 0xb0);
  if ((uVar2 & 0xf00) == 0) goto LAB_0050a2fd;
  local_18.left = *(LONG *)param_2;
  local_18.top = *(LONG *)(param_2 + 4);
  local_18.right = *(LONG *)(param_2 + 8);
  local_18.bottom = *(LONG *)(param_2 + 0xc);
  iVar12 = *(int *)(param_2 + 4);
  local_24 = *(int *)(param_2 + 0xc);
  iVar9 = local_18.right;
  local_3c = local_18.bottom;
  if ((uVar2 & 0x80) != 0) {
    iVar9 = local_18.right + -1;
    local_3c = local_18.bottom + -1;
  }
  uVar10 = uVar2 & 0x200;
  if (uVar10 != 0) {
    iVar12 = iVar12 + DAT_006161cc;
  }
  uVar11 = uVar2 & 0x800;
  if (uVar11 != 0) {
    local_24 = local_24 - DAT_006161cc;
  }
  iVar4 = FUN_0043970d(&PTR_s_CToolBar_005cacd8);
  if ((iVar4 != 0) && (uVar11 != 0)) {
    local_18.right = *(LONG *)(param_2 + 8);
    local_18.left = 0;
    local_18.top = *(LONG *)(param_2 + 4);
    local_18.bottom = *(LONG *)(param_2 + 0xc);
    if (*(HTHEME *)(this + 0xa8) != (HTHEME)0x0) {
      BVar5 = IsThemeBackgroundPartiallyTransparent(*(HTHEME *)(this + 0xa8),6,0);
      if (BVar5 != 0) {
        DrawThemeParentBackground(*(HWND *)(this + 0x20),*(HDC *)(param_1 + 4),&local_18);
      }
      HVar6 = DrawThemeBackground(*(HTHEME *)(this + 0xa8),*(HDC *)(param_1 + 4),6,0,&local_18,
                                  (LPCRECT)0x0);
      if (-1 < HVar6) goto LAB_0050a1d7;
    }
    CVar7 = GetBkColor(*(HDC *)(param_1 + 8));
    FUN_0044847c(&local_18,CVar7);
  }
LAB_0050a1d7:
  uVar8 = uVar2 & 0x100;
  if (uVar8 != 0) {
    CDC::FillSolidRect(param_1,0,iVar12,1,local_24 - iVar12,uVar3);
  }
  if (uVar10 != 0) {
    CDC::FillSolidRect(param_1,0,0,*(int *)(param_2 + 8),1,uVar3);
  }
  uVar1 = uVar2 & 0x400;
  if (uVar1 != 0) {
    CDC::FillSolidRect(param_1,iVar9,iVar12,-1,local_24 - iVar12,uVar3);
  }
  if (uVar11 != 0) {
    CDC::FillSolidRect(param_1,0,local_3c,*(int *)(param_2 + 8),-1,uVar3);
  }
  uVar3 = DAT_006161e8;
  if ((uVar2 & 0x80) != 0) {
    if (uVar8 != 0) {
      CDC::FillSolidRect(param_1,1,iVar12,1,local_24 - iVar12,DAT_006161e8);
    }
    if (uVar10 != 0) {
      CDC::FillSolidRect(param_1,0,1,*(int *)(param_2 + 8),1,uVar3);
    }
    if (uVar1 != 0) {
      CDC::FillSolidRect(param_1,*(int *)(param_2 + 8),iVar12,-1,local_24 - iVar12,uVar3);
    }
    if (uVar11 != 0) {
      CDC::FillSolidRect(param_1,0,*(int *)(param_2 + 0xc),*(int *)(param_2 + 8),-1,uVar3);
    }
  }
  if (uVar8 != 0) {
    *(int *)param_2 = *(int *)param_2 + DAT_006161c8;
  }
  if (uVar10 != 0) {
    *(int *)(param_2 + 4) = *(int *)(param_2 + 4) + DAT_006161cc;
  }
  if (uVar1 != 0) {
    *(int *)(param_2 + 8) = *(int *)(param_2 + 8) - DAT_006161c8;
  }
  if (uVar11 != 0) {
    *(int *)(param_2 + 0xc) = *(int *)(param_2 + 0xc) - DAT_006161cc;
  }
LAB_0050a2fd:
  __security_check_cookie(local_8 ^ (uint)&stack0xfffffffc);
  return;
}

