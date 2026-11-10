// rea decompile_all
// name: CMFCVisualManager::OnDrawRibbonSliderZoomButton
// address: 0x1008d955
// body: available
// range: 0x1008d955-0x1008daab inclusive
// non_contiguous: false
// provider: Ghidra 12.1.2 (ghidra)
// analysis_profile: b075844f08879296d957518397cd0ddda73db81dce53d00d3f0e702766fc2af6
// limitations: The session serves operations only after Ghidra reports default auto-analysis complete; incomplete analysis does not expose partial results.; The imported Program and temporary project are ephemeral and deleted on close. Annotation operations edit session database metadata; original executable bytes are never written.; Cancelling an active Ghidra request terminates its ephemeral database and discards session annotations. The selected target remains open; the next provider query imports the original artifact again.; Default-space addresses use lowercase 0x-prefixed hexadecimal; other address spaces use <percent-encoded-space>:0x<hex>.; The Ghidra Program references PDB Comm_Aux.pdb (GUID ba7920cc-daa3-4461-a102-1f8f66c67a2a, age (hex) 1, signature unknown, version RSDS); Ghidra reports load state unknown. Original names and types may be missing; an empty name search does not prove a procedure is absent. Use list_procedures and address-based analysis to inspect recovered functions. REA does not admit a caller-selected PDB companion.; This session uses Ghidra 12.1.2. The bridge is verified against 12.1.4; other 12.1.x builds are accepted and the observed version is reported.; Pseudocode is Ghidra decompiler output, not original source and not text-equivalent to Hopper output.; External functions and functions without an analyzable body return null; other decompiler failures remain explicit.
// pseudocode: provider-specific; not original source


/* WARNING: Function: __EH_prolog3_GS replaced with injection: EH_prolog3 */
/* Library Function - Single Match
    public: virtual void __thiscall CMFCVisualManager::OnDrawRibbonSliderZoomButton(class CDC
   *,class CMFCRibbonSlider *,class CRect,int,int,int,int)
   
   Library: Visual Studio 2015 Release */

void __thiscall
CMFCVisualManager::OnDrawRibbonSliderZoomButton
          (CMFCVisualManager *this,CDC *param_1,undefined4 param_2,int param_4,int param_5,
          int param_6,int param_7,int param_8,undefined4 param_9,undefined4 param_10,
          undefined4 param_11)

{
  code *pcVar1;
  int iVar2;
  int iVar3;
  undefined1 local_50 [8];
  undefined **local_48 [2];
  CPen *local_40;
  int local_3c;
  undefined4 local_38;
  CDrawingManager local_34 [8];
  int local_2c;
  ulong local_28;
  int local_24;
  int local_20;
  int local_1c;
  int local_18;
  undefined4 local_8;
  undefined4 uStack_4;
  
  uStack_4 = 0x40;
  local_8 = 0x1008d961;
  pcVar1 = *(code **)(*(int *)this + 0x290);
  guard_check_icall(param_2,param_9,param_10,param_11,&local_28,&local_38);
  (*pcVar1)();
  iVar3 = (param_5 + param_7) / 2;
  local_20 = iVar3 + -7;
  iVar2 = (param_6 + param_4) / 2;
  local_18 = iVar3 + 8;
  local_24 = iVar2 + -7;
  local_1c = iVar2 + 8;
  CDrawingManager::CDrawingManager(local_34,param_1);
  local_8 = 0;
  FUN_100b004e(&local_24,local_38,local_28);
  local_2c = iVar3 + 4;
  local_3c = iVar2 + 4;
  if (DAT_1020e40c == 0) {
    CPen::CPen((CPen *)local_48,0,1,local_28);
    local_8 = CONCAT31(local_8._1_3_,1);
    local_40 = CDC::SelectObject(param_1,(CPen *)local_48);
    CDC::MoveTo(param_1,(int)local_50,iVar2 + -3);
    CDC::LineTo(param_1,local_3c,iVar3);
    if (param_8 == 0) {
      CDC::MoveTo(param_1,(int)local_50,iVar2);
      CDC::LineTo(param_1,iVar2,local_2c);
    }
    CDC::SelectObject(param_1,local_40);
    local_48[0] = CPen::vftable;
    CImageList::~CImageList((CImageList *)local_48);
  }
  else {
    CDrawingManager::DrawLine(local_34,iVar2 + -3,iVar3,local_3c,iVar3,local_28);
    if (param_8 == 0) {
      CDrawingManager::DrawLine(local_34,iVar2,iVar3 + -3,iVar2,local_2c,local_28);
    }
  }
  FUN_100afd36();
  FUN_1017f5f4();
  return;
}

