// rea decompile_all
// name: CMFCVisualManagerOfficeXP::OnDrawMenuShadow
// address: 0x10118fe3
// body: available
// range: 0x10118fe3-0x101191d5 inclusive
// non_contiguous: false
// provider: Ghidra 12.1.2 (ghidra)
// analysis_profile: b075844f08879296d957518397cd0ddda73db81dce53d00d3f0e702766fc2af6
// limitations: The session serves operations only after Ghidra reports default auto-analysis complete; incomplete analysis does not expose partial results.; The imported Program and temporary project are ephemeral and deleted on close. Annotation operations edit session database metadata; original executable bytes are never written.; Cancelling an active Ghidra request terminates its ephemeral database and discards session annotations. The selected target remains open; the next provider query imports the original artifact again.; Default-space addresses use lowercase 0x-prefixed hexadecimal; other address spaces use <percent-encoded-space>:0x<hex>.; Ghidra Listing reports a terminal call at 0x101190e5 to 0x1001d023 FUN_1001d023 (external=false, thunk=false, hasNoReturn=true); fallthrough is excluded by Ghidra's flow model. This records Ghidra's FunctionManager flag, not an independent verification that the callee cannot return.; The Ghidra Program references PDB WinOperateCScaler.pdb (GUID a6737962-efea-4805-8ae6-1fc1ef126554, age (hex) 1, signature unknown, version RSDS); Ghidra reports load state unknown. Original names and types may be missing; an empty name search does not prove a procedure is absent. Use list_procedures and address-based analysis to inspect recovered functions. REA does not admit a caller-selected PDB companion.; This session uses Ghidra 12.1.2. The bridge is verified against 12.1.4; other 12.1.x builds are accepted and the observed version is reported.; Pseudocode is Ghidra decompiler output, not original source and not text-equivalent to Hopper output.; External functions and functions without an analyzable body return null; other decompiler failures remain explicit.
// pseudocode: provider-specific; not original source


/* WARNING: Function: __EH_prolog3 replaced with injection: EH_prolog3 */
/* WARNING: Function: __EH_epilog3 replaced with injection: EH_epilog3 */
/* Library Function - Single Match
    protected: virtual void __thiscall CMFCVisualManagerOfficeXP::OnDrawMenuShadow(class CDC *,class
   CRect const &,class CRect const &,int,int,int,class CBitmap *,class CBitmap *,int)
   
   Library: Visual Studio 2015 Release */

void __thiscall
CMFCVisualManagerOfficeXP::OnDrawMenuShadow
          (CMFCVisualManagerOfficeXP *this,CDC *param_1,CRect *param_2,CRect *param_3,int param_4,
          int param_5,int param_6,CBitmap *param_7,CBitmap *param_8,int param_9)

{
  int iVar1;
  int iVar2;
  int iVar3;
  int iVar4;
  HDC pHVar5;
  HBITMAP pHVar6;
  int iVar7;
  void *pvVar8;
  CDC local_44 [4];
  HDC__ *local_40;
  CDrawingManager local_34 [8];
  undefined **local_2c;
  void *local_28;
  CDrawingManager local_24 [4];
  CGdiObject *local_20;
  CMFCVisualManagerOfficeXP *local_1c;
  int local_18;
  int local_14;
  undefined4 local_8;
  undefined4 uStack_4;
  
  uStack_4 = 0x44;
  local_8 = 0x10118fef;
  local_1c = this;
  iVar4 = CRect::IsRectNull(param_3);
  if (iVar4 == 0) {
    CDC::CDC(local_44);
    pvVar8 = (void *)0x0;
    local_8._0_1_ = 1;
    local_8._1_3_ = 0;
    pHVar5 = (HDC)0x0;
    if (param_1 != (CDC *)0x0) {
      pHVar5 = *(HDC *)(param_1 + 4);
    }
    pHVar5 = CreateCompatibleDC(pHVar5);
    iVar4 = CDC::Attach(local_44,pHVar5);
    if (iVar4 != 0) {
      local_28 = (void *)0x0;
      iVar4 = *(int *)(param_2 + 0xc);
      iVar1 = *(int *)(param_2 + 8);
      iVar2 = *(int *)(param_2 + 4);
      iVar3 = *(int *)param_2;
      local_18 = (iVar1 - iVar3) + param_4;
      local_14 = (iVar4 - iVar2) + param_4;
      local_2c = CBitmap::vftable;
      local_8._0_1_ = 2;
      pHVar6 = CreateCompatibleBitmap(*(HDC *)(param_1 + 4),local_18,local_14);
      iVar7 = CMenu::Attach((CMenu *)&local_2c,(HMENU__ *)pHVar6);
      if (iVar7 != 0) {
        local_20 = CDC::SelectGdiObject(local_40,local_28);
        if (local_20 == (CGdiObject *)0x0) {
                    /* WARNING: Subroutine does not return */
          FUN_1001d023();
        }
        BitBlt(local_40,0,0,local_18,local_14,*(HDC *)(param_1 + 4),*(int *)param_2,
               *(int *)(param_2 + 4),0xcc0020);
        CDrawingManager::CDrawingManager(local_34,local_44);
        local_8._0_1_ = 3;
        CDrawingManager::DrawShadow
                  (local_34,0,0,iVar1 - iVar3,iVar4 - iVar2,param_4,param_5,param_6,param_7,param_8,
                   *(undefined4 *)(local_1c + 0xa8),param_9 == 0);
        iVar4 = *(int *)(param_3 + 4);
        iVar1 = *(int *)param_3;
        CDC::BitBlt(local_44,iVar1 - *(int *)param_2,iVar4 - *(int *)(param_2 + 4),
                    *(int *)(param_3 + 8) - iVar1,*(int *)(param_3 + 0xc) - iVar4,param_1,iVar1,
                    iVar4,0xcc0020);
        BitBlt(*(HDC *)(param_1 + 4),*(int *)param_2,*(int *)(param_2 + 4),local_18,local_14,
               local_40,0,0,0xcc0020);
        if (local_20 != (CGdiObject *)0x0) {
          pvVar8 = *(void **)(local_20 + 4);
        }
        CDC::SelectGdiObject(local_40,pvVar8);
        FUN_10084c54();
      }
      local_2c = CBitmap::vftable;
      CImageList::~CImageList((CImageList *)&local_2c);
    }
    CDC::~CDC(local_44);
  }
  else {
    CDrawingManager::CDrawingManager(local_24,param_1);
    local_8 = 0;
    CDrawingManager::DrawShadow
              (local_24,*(undefined4 *)param_2,*(undefined4 *)(param_2 + 4),
               *(undefined4 *)(param_2 + 8),*(undefined4 *)(param_2 + 0xc),param_4,param_5,param_6,
               param_7,param_8,*(undefined4 *)(this + 0xa8),param_9 == 0);
    FUN_10084c54();
  }
  return;
}

