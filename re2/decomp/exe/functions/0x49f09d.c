// rea decompile_all
// name: CMFCVisualManagerOfficeXP::OnDrawRibbonColorPaletteBox
// address: 0x49f09d
// body: available
// range: 0x49f09d-0x49f275 inclusive
// non_contiguous: false
// provider: Ghidra 12.1.2 (ghidra)
// analysis_profile: ac6d50be2cdf54f7005df47d1ed7e7ef55dee595681eb1b7c2e0b00d70cd697d
// limitations: The session serves operations only after Ghidra reports default auto-analysis complete; incomplete analysis does not expose partial results.; The imported Program and temporary project are ephemeral and deleted on close. Annotation operations edit session database metadata; original executable bytes are never written.; Cancelling an active Ghidra request terminates its ephemeral database and discards session annotations. The selected target remains open; the next provider query imports the original artifact again.; Default-space addresses use lowercase 0x-prefixed hexadecimal; other address spaces use <percent-encoded-space>:0x<hex>.; Ghidra Listing reports a terminal call at 0x49f195 to 0x429127 FUN_00429127 (external=false, thunk=false, hasNoReturn=true); fallthrough is excluded by Ghidra's flow model. This records Ghidra's FunctionManager flag, not an independent verification that the callee cannot return.; The Ghidra Program references PDB ISPToolForMsi.pdb (GUID b8f2ac8f-1d6f-438d-800f-ed4a14426ac6, age (hex) 1, signature unknown, version RSDS); Ghidra reports load state unknown. Original names and types may be missing; an empty name search does not prove a procedure is absent. Use list_procedures and address-based analysis to inspect recovered functions. REA does not admit a caller-selected PDB companion.; This session uses Ghidra 12.1.2. The bridge is verified against 12.1.4; other 12.1.x builds are accepted and the observed version is reported.; Pseudocode is Ghidra decompiler output, not original source and not text-equivalent to Hopper output.; External functions and functions without an analyzable body return null; other decompiler failures remain explicit.
// pseudocode: provider-specific; not original source


/* WARNING: Function: __EH_prolog3_GS replaced with injection: EH_prolog3 */
/* Library Function - Single Match
    protected: virtual void __thiscall CMFCVisualManagerOfficeXP::OnDrawRibbonColorPaletteBox(class
   CDC *,class CMFCRibbonColorButton *,class CMFCRibbonGalleryIcon *,unsigned long,class
   CRect,int,int,int,int,int)
   
   Library: Visual Studio 2015 Release */

void __thiscall
CMFCVisualManagerOfficeXP::OnDrawRibbonColorPaletteBox
          (undefined4 param_1_00,CDC *param_1,undefined4 param_2,undefined4 param_3,CPen *param_4,
          int param_6,int param_7,int param_8,int param_9,int param_10,int param_11,int param_12,
          int param_13)

{
  code *pcVar1;
  int iVar2;
  ulong uVar3;
  int *piVar4;
  undefined1 local_40 [8];
  undefined **local_38;
  HBRUSH local_34;
  CPen *local_30;
  undefined **local_2c;
  int *local_28;
  tagRECT local_24;
  undefined4 local_8;
  undefined4 uStack_4;
  
  uStack_4 = 0x30;
  local_8 = 0x49f0a9;
  local_24.left = param_6;
  local_30 = param_4;
  local_24.top = param_7;
  local_24.right = param_8;
  local_24.bottom = param_9;
  InflateRect(&local_24,-1,0);
  if ((param_12 != 0) || (piVar4 = local_28, param_13 != 0)) {
    pcVar1 = *(code **)(*local_28 + 0x314);
    guard_check_icall(param_1,param_6,param_7,param_8,param_9,local_28 + 0x47,0);
    (*pcVar1)();
    InflateRect(&local_24,-1,-2);
    piVar4 = local_28;
  }
  if (local_30 != (CPen *)0xffffffff) {
    CBrush::CBrush((CBrush *)&local_38,(ulong)local_30);
    FillRect(*(HDC *)(param_1 + 4),&local_24,local_34);
    local_38 = CBrush::vftable;
    FUN_0040ee80();
  }
  iVar2 = param_11;
  if ((param_10 == 0) || (param_11 == 0)) {
    CPen::CPen((CPen *)&local_2c,0,1,0xc5c5c5);
    local_8 = 0;
    local_30 = CDC::SelectObject(param_1,(CPen *)&local_2c);
    if (local_30 == (CPen *)0x0) {
                    /* WARNING: Subroutine does not return */
      FUN_00429127();
    }
    CDC::MoveTo(param_1,(int)local_40,param_6);
    CDC::LineTo(param_1,param_6,param_9);
    CDC::MoveTo(param_1,(int)local_40,param_8 + -1);
    CDC::LineTo(param_1,param_8 + -1,param_9);
    if (param_10 != 0) {
      CDC::MoveTo(param_1,(int)local_40,param_6);
      CDC::LineTo(param_1,param_8,param_7);
    }
    if (iVar2 != 0) {
      CDC::MoveTo(param_1,(int)local_40,param_6);
      CDC::LineTo(param_1,param_8,param_9 + -1);
    }
    CDC::SelectObject(param_1,local_30);
    local_8 = 0xffffffff;
    local_2c = CPen::vftable;
    FUN_0040ee80();
  }
  else {
    CDC::Draw3dRect(param_1,(tagRECT *)&param_6,0xc5c5c5,0xc5c5c5);
  }
  if ((param_12 != 0) || (param_13 != 0)) {
    if (param_13 == 0) {
      uVar3 = piVar4[0x3a];
    }
    else {
      uVar3 = piVar4[0x35];
    }
    CDC::Draw3dRect(param_1,(tagRECT *)&param_6,uVar3,uVar3);
  }
  FUN_0055bae6();
  return;
}

