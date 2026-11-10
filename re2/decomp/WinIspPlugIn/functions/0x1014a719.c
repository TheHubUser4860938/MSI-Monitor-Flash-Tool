// rea decompile_all
// name: CMFCVisualManagerOffice2003::OnDrawRibbonSliderZoomButton
// address: 0x1014a719
// body: available
// range: 0x1014a719-0x1014a8e7 inclusive
// non_contiguous: false
// provider: Ghidra 12.1.2 (ghidra)
// analysis_profile: b075844f08879296d957518397cd0ddda73db81dce53d00d3f0e702766fc2af6
// limitations: The session serves operations only after Ghidra reports default auto-analysis complete; incomplete analysis does not expose partial results.; The imported Program and temporary project are ephemeral and deleted on close. Annotation operations edit session database metadata; original executable bytes are never written.; Cancelling an active Ghidra request terminates its ephemeral database and discards session annotations. The selected target remains open; the next provider query imports the original artifact again.; Default-space addresses use lowercase 0x-prefixed hexadecimal; other address spaces use <percent-encoded-space>:0x<hex>.; The Ghidra Program references PDB WinIspPlugIn.pdb (GUID d9f398c7-6c98-49a8-af25-a0659d5ad2f3, age (hex) 1, signature unknown, version RSDS); Ghidra reports load state unknown. Original names and types may be missing; an empty name search does not prove a procedure is absent. Use list_procedures and address-based analysis to inspect recovered functions. REA does not admit a caller-selected PDB companion.; This session uses Ghidra 12.1.2. The bridge is verified against 12.1.4; other 12.1.x builds are accepted and the observed version is reported.; Pseudocode is Ghidra decompiler output, not original source and not text-equivalent to Hopper output.; External functions and functions without an analyzable body return null; other decompiler failures remain explicit.
// pseudocode: provider-specific; not original source


/* WARNING: Function: __EH_prolog3_GS replaced with injection: EH_prolog3 */
/* Library Function - Single Match
    public: virtual void __thiscall CMFCVisualManagerOffice2003::OnDrawRibbonSliderZoomButton(class
   CDC *,class CMFCRibbonSlider *,class CRect,int,int,int,int)
   
   Library: Visual Studio 2015 Release */

void __thiscall
CMFCVisualManagerOffice2003::OnDrawRibbonSliderZoomButton
          (undefined4 param_1_00,CDC *param_1,int param_2,int param_4,int param_5,int param_6,
          int param_7,int param_8,int param_9,int param_10,undefined4 param_11)

{
  int iVar1;
  AFX_GLOBAL_DATA *pAVar2;
  int iVar3;
  undefined4 uVar4;
  ulong uVar5;
  undefined1 local_50 [8];
  undefined **local_48 [2];
  CDrawingManager local_40 [8];
  undefined1 local_38 [4];
  int local_34;
  int local_30;
  CPen *local_2c;
  CMFCVisualManager *local_28;
  int local_24;
  int local_20;
  int local_1c;
  int local_18;
  undefined4 local_8;
  undefined4 uStack_4;
  
  uStack_4 = 0x40;
  local_8 = 0x1014a725;
  local_30 = param_2;
  pAVar2 = GetGlobalData();
  if (8 < *(int *)(pAVar2 + 0x1ac)) {
    pAVar2 = GetGlobalData();
    iVar3 = AFX_GLOBAL_DATA::IsHighContrastMode(pAVar2);
    if (iVar3 == 0) {
      if ((param_10 == 0) && (param_9 == 0)) {
        pAVar2 = GetGlobalData();
        uVar5 = *(ulong *)(pAVar2 + 0x30);
      }
      else {
        pAVar2 = GetGlobalData();
        uVar5 = *(ulong *)(pAVar2 + 0x60);
      }
      local_34 = (param_5 + param_7) / 2;
      iVar3 = (param_6 + param_4) / 2;
      local_20 = local_34 + -7;
      local_18 = local_34 + 8;
      local_24 = iVar3 + -7;
      local_1c = iVar3 + 8;
      CDrawingManager::CDrawingManager(local_40,param_1);
      local_8 = 0;
      uVar4 = 0xffffffff;
      if (param_10 == 0) {
        if (param_9 != 0) {
          uVar4 = *(undefined4 *)(local_28 + 0x19c);
        }
      }
      else {
        uVar4 = *(undefined4 *)(local_28 + 0x198);
      }
      FUN_100b0e9b(&local_24,uVar4,uVar5);
      local_2c = (CPen *)(local_34 + -3);
      local_30 = iVar3 + 4;
      local_28 = (CMFCVisualManager *)(local_34 + 4);
      if (DAT_10245bb4 == 0) {
        CPen::CPen((CPen *)local_48,0,1,uVar5);
        local_8 = CONCAT31(local_8._1_3_,1);
        local_2c = CDC::SelectObject(param_1,(CPen *)local_48);
        iVar1 = local_34;
        CDC::MoveTo(param_1,(int)local_38,iVar3 + -3);
        CDC::LineTo(param_1,local_30,iVar1);
        if (param_8 == 0) {
          CDC::MoveTo(param_1,(int)local_50,iVar3);
          CDC::LineTo(param_1,iVar3,(int)local_28);
        }
        CDC::SelectObject(param_1,local_2c);
        local_48[0] = CPen::vftable;
        CImageList::~CImageList((CImageList *)local_48);
      }
      else {
        CDrawingManager::DrawLine(local_40,iVar3 + -3,local_34,iVar3 + 4,local_34,uVar5);
        if (param_8 == 0) {
          CDrawingManager::DrawLine(local_40,iVar3,(int)local_2c,iVar3,(int)local_28,uVar5);
        }
      }
      FUN_100b0b83();
      goto LAB_1014a8e0;
    }
  }
  CMFCVisualManager::OnDrawRibbonSliderZoomButton
            (local_28,param_1,local_30,param_4,param_5,param_6,param_7,param_8,param_9,param_10,
             param_11);
LAB_1014a8e0:
  FUN_1018015d();
  return;
}

