// rea decompile_all
// name: CSmartDockingHighlighterWnd::ShowTabbedAt
// address: 0x101644b0
// body: available
// range: 0x101644b0-0x10164644 inclusive
// non_contiguous: false
// provider: Ghidra 12.1.2 (ghidra)
// analysis_profile: b075844f08879296d957518397cd0ddda73db81dce53d00d3f0e702766fc2af6
// limitations: The session serves operations only after Ghidra reports default auto-analysis complete; incomplete analysis does not expose partial results.; The imported Program and temporary project are ephemeral and deleted on close. Annotation operations edit session database metadata; original executable bytes are never written.; Cancelling an active Ghidra request terminates its ephemeral database and discards session annotations. The selected target remains open; the next provider query imports the original artifact again.; Default-space addresses use lowercase 0x-prefixed hexadecimal; other address spaces use <percent-encoded-space>:0x<hex>.; The Ghidra Program references PDB Comm_Aux.pdb (GUID ba7920cc-daa3-4461-a102-1f8f66c67a2a, age (hex) 1, signature unknown, version RSDS); Ghidra reports load state unknown. Original names and types may be missing; an empty name search does not prove a procedure is absent. Use list_procedures and address-based analysis to inspect recovered functions. REA does not admit a caller-selected PDB companion.; This session uses Ghidra 12.1.2. The bridge is verified against 12.1.4; other 12.1.x builds are accepted and the observed version is reported.; Pseudocode is Ghidra decompiler output, not original source and not text-equivalent to Hopper output.; External functions and functions without an analyzable body return null; other decompiler failures remain explicit.
// pseudocode: provider-specific; not original source


/* WARNING: Function: __EH_prolog3 replaced with injection: EH_prolog3 */
/* WARNING: Function: __EH_epilog3 replaced with injection: EH_epilog3 */
/* Library Function - Single Match
    public: void __thiscall CSmartDockingHighlighterWnd::ShowTabbedAt(class CRect,class CRect)
   
   Library: Visual Studio 2015 Release */

void __thiscall
CSmartDockingHighlighterWnd::ShowTabbedAt
          (CSmartDockingHighlighterWnd *this,int param_2,int param_3,int param_4,int param_5,
          int param_6,int param_7,int param_8,int param_9)

{
  BOOL BVar1;
  int iVar2;
  HRGN pHVar3;
  HMENU__ *pHVar4;
  int y1;
  undefined **local_20;
  HRGN local_1c;
  undefined **local_18;
  HRGN local_14;
  undefined4 local_8;
  undefined4 uStack_4;
  
  uStack_4 = 0x10;
  local_8 = 0x101644bc;
  if (((*(int *)(this + 0xa8) == 0) ||
      (BVar1 = EqualRect((RECT *)(this + 0x88),(RECT *)&param_2), BVar1 == 0)) ||
     (BVar1 = EqualRect((RECT *)(this + 0x98),(RECT *)&param_6), BVar1 == 0)) {
    Hide(this);
    local_14 = (HRGN)0x0;
    local_18 = CRgn::vftable;
    local_8 = 0;
    if (DAT_1021012c == 0) {
      iVar2 = param_5 - param_3;
      y1 = 0;
    }
    else {
      y1 = param_9 - param_7;
      iVar2 = (param_5 - param_3) + y1;
    }
    pHVar3 = CreateRectRgn(0,y1,param_4 - param_2,iVar2);
    CMenu::Attach((CMenu *)&local_18,(HMENU__ *)pHVar3);
    local_1c = (HRGN)0x0;
    local_20 = CRgn::vftable;
    local_8 = CONCAT31(local_8._1_3_,1);
    if (DAT_1021012c == 0) {
      pHVar4 = (HMENU__ *)CreateRectRgnIndirect((RECT *)&param_6);
    }
    else {
      pHVar4 = (HMENU__ *)CreateRectRgn(param_6,0,param_8 - param_6,param_9 - param_7);
    }
    CMenu::Attach((CMenu *)&local_20,pHVar4);
    CombineRgn(local_14,local_14,local_1c,2);
    SetWindowRgn(*(HWND *)(this + 0x20),local_14,0);
    *(undefined4 *)(this + 0xa8) = 1;
    *(int *)(this + 0x88) = param_2;
    *(int *)(this + 0x8c) = param_3;
    *(int *)(this + 0x90) = param_4;
    *(int *)(this + 0x94) = param_5;
    *(int *)(this + 0x98) = param_6;
    *(int *)(this + 0x9c) = param_7;
    *(int *)(this + 0xa0) = param_8;
    *(int *)(this + 0xa4) = param_9;
    iVar2 = param_3;
    if (DAT_1021012c != 0) {
      iVar2 = param_7;
    }
    CWnd::SetWindowPos((CWnd *)this,(CWnd *)&DAT_1020d5f0,param_2,iVar2,param_4 - param_2,
                       ((*(int *)(this + 0xa4) - *(int *)(this + 0x9c)) - param_3) + param_5,0x58);
    *(undefined4 *)(this + 0xac) = 1;
    RedrawWindow(*(HWND *)(this + 0x20),(RECT *)0x0,(HRGN)0x0,0x105);
    local_20 = CRgn::vftable;
    CImageList::~CImageList((CImageList *)&local_20);
    local_18 = CRgn::vftable;
    CImageList::~CImageList((CImageList *)&local_18);
  }
  return;
}

