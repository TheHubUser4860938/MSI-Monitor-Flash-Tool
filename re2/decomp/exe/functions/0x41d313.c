// rea decompile_all
// name: CMFCVisualManager::OnDrawRibbonSliderThumb
// address: 0x41d313
// body: available
// range: 0x41d313-0x41d474 inclusive
// non_contiguous: false
// provider: Ghidra 12.1.2 (ghidra)
// analysis_profile: ac6d50be2cdf54f7005df47d1ed7e7ef55dee595681eb1b7c2e0b00d70cd697d
// limitations: The session serves operations only after Ghidra reports default auto-analysis complete; incomplete analysis does not expose partial results.; The imported Program and temporary project are ephemeral and deleted on close. Annotation operations edit session database metadata; original executable bytes are never written.; Cancelling an active Ghidra request terminates its ephemeral database and discards session annotations. The selected target remains open; the next provider query imports the original artifact again.; Default-space addresses use lowercase 0x-prefixed hexadecimal; other address spaces use <percent-encoded-space>:0x<hex>.; The Ghidra Program references PDB ISPToolForMsi.pdb (GUID b8f2ac8f-1d6f-438d-800f-ed4a14426ac6, age (hex) 1, signature unknown, version RSDS); Ghidra reports load state unknown. Original names and types may be missing; an empty name search does not prove a procedure is absent. Use list_procedures and address-based analysis to inspect recovered functions. REA does not admit a caller-selected PDB companion.; This session uses Ghidra 12.1.2. The bridge is verified against 12.1.4; other 12.1.x builds are accepted and the observed version is reported.; Pseudocode is Ghidra decompiler output, not original source and not text-equivalent to Hopper output.; External functions and functions without an analyzable body return null; other decompiler failures remain explicit.
// pseudocode: provider-specific; not original source


/* WARNING: Function: __EH_prolog3_GS replaced with injection: EH_prolog3 */
/* Library Function - Single Match
    public: virtual void __thiscall CMFCVisualManager::OnDrawRibbonSliderThumb(class CDC *,class
   CMFCRibbonSlider *,class CRect,int,int,int)
   
   Library: Visual Studio 2015 Release */

void __thiscall
CMFCVisualManager::OnDrawRibbonSliderThumb
          (CMFCVisualManager *this,CDC *param_1,undefined4 param_2,int param_4,int param_5,
          int param_6,int param_7,undefined4 param_8,undefined4 param_9,undefined4 param_10)

{
  code *pcVar1;
  CDC *this_00;
  undefined **local_64 [2];
  undefined **local_5c [2];
  CPen *local_54;
  CDC *local_50;
  CDrawingManager local_4c [4];
  CPen *local_48;
  ulong local_44;
  ulong local_40;
  POINT local_3c;
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
  
  uStack_4 = 0x54;
  local_8 = 0x41d31f;
  pcVar1 = *(code **)(*(int *)this + 0x290);
  local_50 = param_1;
  guard_check_icall(param_2,param_8,param_9,param_10,&local_40,&local_44);
  (*pcVar1)();
  InflateRect((LPRECT)&param_4,-1,-2);
  param_5 = ((param_7 + param_5) / 2 - param_6) + param_4;
  param_7 = param_5 + (param_6 - param_4) * 2;
  if (DAT_00614e28 == 0) {
    CPen::CPen((CPen *)local_64,0,1,local_40);
    local_8 = 1;
    local_54 = CDC::SelectObject(param_1,(CPen *)local_64);
    CBrush::CBrush((CBrush *)local_5c,local_44);
    local_8 = CONCAT31(local_8._1_3_,2);
    local_48 = CDC::SelectObject(param_1,(CPen *)local_5c);
    this_00 = local_50;
    local_3c.x = param_4;
    local_34 = param_4;
    local_2c = (param_6 - param_4) / 2;
    local_30 = param_7 - local_2c;
    local_3c.y = param_5;
    local_2c = local_2c + param_4;
    local_28 = param_7;
    local_24 = param_6;
    local_1c = param_6;
    local_18 = param_5;
    local_20 = local_30;
    Polygon(*(HDC *)(local_50 + 4),&local_3c,5);
    CDC::SelectObject(this_00,local_54);
    CDC::SelectObject(this_00,local_48);
    local_5c[0] = CBrush::vftable;
    FUN_0040ee80();
    local_64[0] = CPen::vftable;
    FUN_0040ee80();
  }
  else {
    CDrawingManager::CDrawingManager(local_4c,param_1);
    local_8 = 0;
    CDrawingManager::DrawRect(local_4c,(CRect *)&param_4,local_44,local_40);
    FUN_00461ef9();
  }
  FUN_0055bae6();
  return;
}

