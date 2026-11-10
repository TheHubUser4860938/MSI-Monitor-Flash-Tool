// rea decompile_all
// name: CDC::DrawDragRect
// address: 0x10067c20
// body: available
// range: 0x10067c20-0x10067ed7 inclusive
// non_contiguous: false
// provider: Ghidra 12.1.2 (ghidra)
// analysis_profile: b075844f08879296d957518397cd0ddda73db81dce53d00d3f0e702766fc2af6
// limitations: The session serves operations only after Ghidra reports default auto-analysis complete; incomplete analysis does not expose partial results.; The imported Program and temporary project are ephemeral and deleted on close. Annotation operations edit session database metadata; original executable bytes are never written.; Cancelling an active Ghidra request terminates its ephemeral database and discards session annotations. The selected target remains open; the next provider query imports the original artifact again.; Default-space addresses use lowercase 0x-prefixed hexadecimal; other address spaces use <percent-encoded-space>:0x<hex>.; Ghidra Listing reports a terminal call at 0x10067ceb to 0x1004a383 FUN_1004a383 (external=false, thunk=false, hasNoReturn=true); fallthrough is excluded by Ghidra's flow model. This records Ghidra's FunctionManager flag, not an independent verification that the callee cannot return.; The Ghidra Program references PDB WinIspPlugIn.pdb (GUID d9f398c7-6c98-49a8-af25-a0659d5ad2f3, age (hex) 1, signature unknown, version RSDS); Ghidra reports load state unknown. Original names and types may be missing; an empty name search does not prove a procedure is absent. Use list_procedures and address-based analysis to inspect recovered functions. REA does not admit a caller-selected PDB companion.; This session uses Ghidra 12.1.2. The bridge is verified against 12.1.4; other 12.1.x builds are accepted and the observed version is reported.; Pseudocode is Ghidra decompiler output, not original source and not text-equivalent to Hopper output.; External functions and functions without an analyzable body return null; other decompiler failures remain explicit.
// pseudocode: provider-specific; not original source


/* WARNING: Function: __EH_prolog3_GS replaced with injection: EH_prolog3 */
/* Library Function - Single Match
    public: void __thiscall CDC::DrawDragRect(struct tagRECT const *,struct tagSIZE,struct tagRECT
   const *,struct tagSIZE,class CBrush *,class CBrush *)
   
   Library: Visual Studio 2015 Release */

void __thiscall
CDC::DrawDragRect(CDC *this,tagRECT *param_1,tagSIZE param_2,tagRECT *param_3,tagSIZE param_4,
                 CBrush *param_5,CBrush *param_6)

{
  code *pcVar1;
  CBrush *pCVar2;
  HRGN pHVar3;
  CPen *pCVar4;
  CRgn *pCVar5;
  undefined **local_54;
  HRGN local_50;
  undefined **local_4c;
  HRGN local_48;
  undefined **local_44;
  HRGN local_40;
  undefined **local_3c;
  HRGN local_38;
  undefined **local_34;
  HRGN local_30;
  CBrush *local_2c;
  CBrush *local_28;
  tagRECT local_24;
  undefined4 local_8;
  undefined4 uStack_4;
  
  uStack_4 = 0x44;
  local_2c = param_5;
  local_28 = param_6;
  local_50 = (HRGN)0x0;
  local_54 = CRgn::vftable;
  local_48 = (HRGN)0x0;
  local_4c = CRgn::vftable;
  local_40 = (HRGN)0x0;
  local_44 = CRgn::vftable;
  local_8 = 2;
  pHVar3 = CreateRectRgnIndirect(param_1);
  CMenu::Attach((CMenu *)&local_4c,(HMENU__ *)pHVar3);
  CopyRect(&local_24,param_1);
  InflateRect(&local_24,-param_2.cx,-param_2.cy);
  IntersectRect(&local_24,&local_24,param_1);
  pHVar3 = CreateRectRgnIndirect(&local_24);
  CMenu::Attach((CMenu *)&local_44,(HMENU__ *)pHVar3);
  pHVar3 = CreateRectRgn(0,0,0,0);
  CMenu::Attach((CMenu *)&local_54,(HMENU__ *)pHVar3);
  CombineRgn(local_50,local_48,local_40,3);
  if (local_2c == (CBrush *)0x0) {
    local_2c = GetHalftoneBrush();
    if (local_2c == (CBrush *)0x0) {
                    /* WARNING: Subroutine does not return */
      FUN_1004a383();
    }
  }
  pCVar2 = local_2c;
  if (local_28 == (CBrush *)0x0) {
    local_28 = local_2c;
  }
  local_38 = (HRGN)0x0;
  local_3c = CRgn::vftable;
  local_30 = (HRGN)0x0;
  local_34 = CRgn::vftable;
  local_8 = CONCAT31(local_8._1_3_,4);
  if (param_3 != (tagRECT *)0x0) {
    pHVar3 = CreateRectRgn(0,0,0,0);
    CMenu::Attach((CMenu *)&local_3c,(HMENU__ *)pHVar3);
    SetRectRgn(local_48,param_3->left,param_3->top,param_3->right,param_3->bottom);
    CopyRect(&local_24,param_3);
    InflateRect(&local_24,-param_4.cx,-param_4.cy);
    IntersectRect(&local_24,&local_24,param_3);
    SetRectRgn(local_40,local_24.left,local_24.top,local_24.right,local_24.bottom);
    CombineRgn(local_38,local_48,local_40,3);
    if (*(int *)(pCVar2 + 4) == *(int *)(local_28 + 4)) {
      pHVar3 = CreateRectRgn(0,0,0,0);
      CMenu::Attach((CMenu *)&local_34,(HMENU__ *)pHVar3);
      CombineRgn(local_30,local_38,local_50,3);
    }
  }
  if ((*(int *)(pCVar2 + 4) != *(int *)(local_28 + 4)) && (param_3 != (tagRECT *)0x0)) {
    SelectClipRgn(this,(CRgn *)&local_3c);
    pcVar1 = *(code **)(*(int *)this + 0x50);
    guard_check_icall(&local_24);
    (*pcVar1)();
    pCVar4 = SelectObject(this,(CPen *)local_28);
    PatBlt(*(HDC *)(this + 4),local_24.left,local_24.top,local_24.right - local_24.left,
           local_24.bottom - local_24.top,0x5a0049);
    SelectObject(this,pCVar4);
  }
  pCVar5 = (CRgn *)&local_34;
  if (local_30 == (HRGN)0x0) {
    pCVar5 = (CRgn *)&local_54;
  }
  SelectClipRgn(this,pCVar5);
  pcVar1 = *(code **)(*(int *)this + 0x50);
  guard_check_icall(&local_24);
  (*pcVar1)();
  pCVar4 = SelectObject(this,(CPen *)local_2c);
  PatBlt(*(HDC *)(this + 4),local_24.left,local_24.top,local_24.right - local_24.left,
         local_24.bottom - local_24.top,0x5a0049);
  if (pCVar4 != (CPen *)0x0) {
    SelectObject(this,pCVar4);
  }
  SelectClipRgn(this,(CRgn *)0x0);
  local_34 = CRgn::vftable;
  CImageList::~CImageList((CImageList *)&local_34);
  local_3c = CRgn::vftable;
  CImageList::~CImageList((CImageList *)&local_3c);
  local_44 = CRgn::vftable;
  CImageList::~CImageList((CImageList *)&local_44);
  local_4c = CRgn::vftable;
  CImageList::~CImageList((CImageList *)&local_4c);
  local_54 = CRgn::vftable;
  CImageList::~CImageList((CImageList *)&local_54);
  FUN_1018015d();
  return;
}

