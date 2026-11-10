// rea decompile_all
// name: CMFCVisualManager::OnDrawRibbonColorPaletteBox
// address: 0x100573c2
// body: available
// range: 0x100573c2-0x10057578 inclusive
// non_contiguous: false
// provider: Ghidra 12.1.2 (ghidra)
// analysis_profile: b075844f08879296d957518397cd0ddda73db81dce53d00d3f0e702766fc2af6
// limitations: The session serves operations only after Ghidra reports default auto-analysis complete; incomplete analysis does not expose partial results.; The imported Program and temporary project are ephemeral and deleted on close. Annotation operations edit session database metadata; original executable bytes are never written.; Cancelling an active Ghidra request terminates its ephemeral database and discards session annotations. The selected target remains open; the next provider query imports the original artifact again.; Default-space addresses use lowercase 0x-prefixed hexadecimal; other address spaces use <percent-encoded-space>:0x<hex>.; Ghidra Listing reports a terminal call at 0x1005748e to 0x10012a3f FUN_10012a3f (external=false, thunk=false, hasNoReturn=true); fallthrough is excluded by Ghidra's flow model. This records Ghidra's FunctionManager flag, not an independent verification that the callee cannot return.; The Ghidra Program references PDB Comm.pdb (GUID c3062acb-498d-45fa-a233-c8b7e401bb13, age (hex) 1, signature unknown, version RSDS); Ghidra reports load state unknown. Original names and types may be missing; an empty name search does not prove a procedure is absent. Use list_procedures and address-based analysis to inspect recovered functions. REA does not admit a caller-selected PDB companion.; This session uses Ghidra 12.1.2. The bridge is verified against 12.1.4; other 12.1.x builds are accepted and the observed version is reported.; Pseudocode is Ghidra decompiler output, not original source and not text-equivalent to Hopper output.; External functions and functions without an analyzable body return null; other decompiler failures remain explicit.
// pseudocode: provider-specific; not original source


/* WARNING: Function: __EH_prolog3_GS replaced with injection: EH_prolog3 */
/* Library Function - Single Match
    public: virtual void __thiscall CMFCVisualManager::OnDrawRibbonColorPaletteBox(class CDC *,class
   CMFCRibbonColorButton *,class CMFCRibbonGalleryIcon *,unsigned long,class
   CRect,int,int,int,int,int)
   
   Library: Visual Studio 2015 Release */

void __thiscall
CMFCVisualManager::OnDrawRibbonColorPaletteBox
          (undefined4 param_1_00,CDC *param_1,undefined4 param_2,undefined4 param_3,CPen *param_4,
          int param_6,int param_7,int param_8,int param_9,int param_10,int param_11,int param_12,
          int param_13)

{
  int iVar1;
  int iVar2;
  AFX_GLOBAL_DATA *pAVar3;
  ulong uVar4;
  ulong uVar5;
  undefined1 local_40 [8];
  undefined **local_38 [2];
  undefined **local_30;
  HBRUSH local_2c;
  CPen *local_28;
  tagRECT local_24;
  undefined4 local_8;
  undefined4 uStack_4;
  
  uStack_4 = 0x30;
  local_8 = 0x100573ce;
  local_24.left = param_6;
  local_28 = param_4;
  local_24.top = param_7;
  local_24.right = param_8;
  local_24.bottom = param_9;
  InflateRect(&local_24,-1,0);
  iVar2 = param_13;
  if ((param_12 != 0) || (param_13 != 0)) {
    CMFCToolBarImages::FillDitheredRect(param_1,(CRect *)&param_6);
    InflateRect(&local_24,-1,-2);
  }
  if (local_28 != (CPen *)0xffffffff) {
    CBrush::CBrush((CBrush *)&local_30,(ulong)local_28);
    FillRect(*(HDC *)(param_1 + 4),&local_24,local_2c);
    local_30 = CBrush::vftable;
    CImageList::~CImageList((CImageList *)&local_30);
  }
  pAVar3 = GetGlobalData();
  iVar1 = param_11;
  uVar5 = *(ulong *)(pAVar3 + 0x20);
  if ((param_10 == 0) || (param_11 == 0)) {
    CPen::CPen((CPen *)local_38,0,1,uVar5);
    local_8 = 0;
    local_28 = CDC::SelectObject(param_1,(CPen *)local_38);
    if (local_28 == (CPen *)0x0) {
                    /* WARNING: Subroutine does not return */
      FUN_10012a3f();
    }
    CDC::MoveTo(param_1,(int)local_40,param_6);
    CDC::LineTo(param_1,param_6,param_9);
    CDC::MoveTo(param_1,(int)local_40,param_8 + -1);
    CDC::LineTo(param_1,param_8 + -1,param_9);
    if (param_10 != 0) {
      CDC::MoveTo(param_1,(int)local_40,param_6);
      CDC::LineTo(param_1,param_8,param_7);
    }
    if (iVar1 != 0) {
      CDC::MoveTo(param_1,(int)local_40,param_6);
      CDC::LineTo(param_1,param_8,param_9 + -1);
    }
    CDC::SelectObject(param_1,local_28);
    local_8 = 0xffffffff;
    local_38[0] = CPen::vftable;
    CImageList::~CImageList((CImageList *)local_38);
  }
  else {
    CDC::Draw3dRect(param_1,(tagRECT *)&param_6,uVar5,uVar5);
  }
  if (param_12 == 0) {
    if (iVar2 == 0) goto LAB_10057571;
    pAVar3 = GetGlobalData();
    uVar5 = *(ulong *)(pAVar3 + 0x5c);
    pAVar3 = GetGlobalData();
    uVar4 = *(ulong *)(pAVar3 + 0x58);
  }
  else {
    pAVar3 = GetGlobalData();
    uVar5 = *(ulong *)(pAVar3 + 0x58);
    pAVar3 = GetGlobalData();
    uVar4 = *(ulong *)(pAVar3 + 0x5c);
  }
  CDC::Draw3dRect(param_1,(tagRECT *)&param_6,uVar4,uVar5);
LAB_10057571:
  FUN_101490fe();
  return;
}

