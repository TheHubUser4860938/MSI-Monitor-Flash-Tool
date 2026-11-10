// rea decompile_all
// name: CSmartDockingGroupGuide::Draw
// address: 0x54b0b6
// body: available
// range: 0x54b0b6-0x54b361 inclusive
// non_contiguous: false
// provider: Ghidra 12.1.2 (ghidra)
// analysis_profile: ac6d50be2cdf54f7005df47d1ed7e7ef55dee595681eb1b7c2e0b00d70cd697d
// limitations: The session serves operations only after Ghidra reports default auto-analysis complete; incomplete analysis does not expose partial results.; The imported Program and temporary project are ephemeral and deleted on close. Annotation operations edit session database metadata; original executable bytes are never written.; Cancelling an active Ghidra request terminates its ephemeral database and discards session annotations. The selected target remains open; the next provider query imports the original artifact again.; Default-space addresses use lowercase 0x-prefixed hexadecimal; other address spaces use <percent-encoded-space>:0x<hex>.; The Ghidra Program references PDB ISPToolForMsi.pdb (GUID b8f2ac8f-1d6f-438d-800f-ed4a14426ac6, age (hex) 1, signature unknown, version RSDS); Ghidra reports load state unknown. Original names and types may be missing; an empty name search does not prove a procedure is absent. Use list_procedures and address-based analysis to inspect recovered functions. REA does not admit a caller-selected PDB companion.; This session uses Ghidra 12.1.2. The bridge is verified against 12.1.4; other 12.1.x builds are accepted and the observed version is reported.; Pseudocode is Ghidra decompiler output, not original source and not text-equivalent to Hopper output.; External functions and functions without an analyzable body return null; other decompiler failures remain explicit.
// pseudocode: provider-specific; not original source


/* Library Function - Single Match
    protected: virtual void __thiscall CSmartDockingGroupGuide::Draw(class CDC &,int)
   
   Library: Visual Studio 2015 Release */

void __thiscall
CSmartDockingGroupGuide::Draw(CSmartDockingGroupGuide *this,CDC *param_1,int param_2)

{
  CMFCToolBarImages *this_00;
  int iVar1;
  AFX_SMARTDOCK_THEME AVar2;
  undefined4 uVar3;
  int iVar4;
  LONG LVar5;
  int local_30;
  int local_2c;
  int local_28;
  undefined1 local_24 [4];
  int local_20;
  CMFCToolBarImages *local_1c;
  tagRECT local_18;
  uint local_8;
  
  local_8 = DAT_0060cff4 ^ (uint)&stack0xfffffffc;
  iVar1 = *(int *)(this + 0x2e0);
  if (((iVar1 == 0) && (*(int *)(this + 0x2e8) == 0)) && (*(int *)(this + 0x244) == 0)) {
    uVar3 = 1;
    local_20 = 1;
  }
  else {
    uVar3 = 0;
    local_20 = 0;
  }
  if ((iVar1 == 0) || (iVar4 = 0x1b8, *(int *)(this + 0x244) == 0)) {
    iVar4 = 0xa0;
  }
  this_00 = (CMFCToolBarImages *)(this + iVar4);
  local_1c = this_00;
  if ((param_2 != 0) && (iVar1 == 0)) {
    local_30 = *(int *)(this + 0x30c);
    local_2c = *(int *)(this_00 + 0x54) + *(int *)(this + 0x308);
    local_28 = *(int *)(this_00 + 0x58) + local_30;
    local_18.left = iVar1;
    local_18.top = iVar1;
    local_18.right = iVar1;
    local_18.bottom = iVar1;
    CMFCToolBarImages::DrawEx
              (this_00,param_1,*(int *)(this + 0x308),local_30,local_2c,local_28,0,0,0,0,0,0,0,0xc0)
    ;
    goto LAB_0054b34f;
  }
  CMFCToolBarImages::PrepareDrawImage(this_00,&local_30,0,0,uVar3);
  CMFCToolBarImages::Draw
            (this_00,param_1,*(int *)(this + 0x308),*(int *)(this + 0x30c),0,0,0,0,0,local_20,0xff);
  FUN_0044c977(&local_30);
  if (*(int *)(this + 0x2e8) == 0) goto LAB_0054b34f;
  AVar2 = GetVMTheme();
  if (AVar2 == 2) goto LAB_0054b34f;
  local_18.left = 0;
  local_18.top = 0;
  local_18.right = 0;
  local_18.bottom = 0;
  GetRgnBox(*(HRGN *)(this + 0x2d4),&local_18);
  local_1c = (CMFCToolBarImages *)
             CDC::SelectObject(param_1,(CPen *)(this + (uint)(*(int *)(this + 0x2e0) != 0) * 8 +
                                                       0x2f8));
  iVar1 = *(int *)(this + 4);
  if (iVar1 == 4) {
    local_18.right = local_18.right + -7;
    CDC::MoveTo(param_1,(int)local_24,local_18.right);
    CDC::LineTo(param_1,local_18.left,local_18.top);
    CDC::LineTo(param_1,local_18.left,local_18.bottom);
    LVar5 = local_18.right;
LAB_0054b32b:
    CDC::LineTo(param_1,LVar5,local_18.bottom);
    uVar3 = 0;
LAB_0054b333:
    ShadeRect(param_1,local_18.left,local_18.top,local_18.right,local_18.bottom,uVar3);
  }
  else {
    if (iVar1 == 5) {
      local_18.left = local_18.left + 7;
      CDC::MoveTo(param_1,(int)local_24,local_18.left);
      CDC::LineTo(param_1,local_18.right + -1,local_18.top);
      CDC::LineTo(param_1,local_18.right + -1,local_18.bottom);
      LVar5 = local_18.left;
      goto LAB_0054b32b;
    }
    if (iVar1 == 6) {
      local_18.bottom = local_18.bottom + -7;
      CDC::MoveTo(param_1,(int)local_24,local_18.left);
      CDC::LineTo(param_1,local_18.left,local_18.top);
      CDC::LineTo(param_1,local_18.right,local_18.top);
      LVar5 = local_18.bottom;
LAB_0054b26d:
      CDC::LineTo(param_1,local_18.right,LVar5);
      uVar3 = 1;
      goto LAB_0054b333;
    }
    if (iVar1 == 7) {
      local_18.top = local_18.top + 7;
      CDC::MoveTo(param_1,(int)local_24,local_18.left);
      CDC::LineTo(param_1,local_18.left,local_18.bottom + -1);
      CDC::LineTo(param_1,local_18.right,local_18.bottom + -1);
      LVar5 = local_18.top;
      goto LAB_0054b26d;
    }
  }
  CDC::SelectObject(param_1,(CPen *)local_1c);
LAB_0054b34f:
  __security_check_cookie(local_8 ^ (uint)&stack0xfffffffc);
  return;
}

