// rea decompile_all
// name: CMFCImagePaintArea::FloodFill
// address: 0x54414b
// body: available
// range: 0x54414b-0x544236 inclusive
// non_contiguous: false
// provider: Ghidra 12.1.2 (ghidra)
// analysis_profile: ac6d50be2cdf54f7005df47d1ed7e7ef55dee595681eb1b7c2e0b00d70cd697d
// limitations: The session serves operations only after Ghidra reports default auto-analysis complete; incomplete analysis does not expose partial results.; The imported Program and temporary project are ephemeral and deleted on close. Annotation operations edit session database metadata; original executable bytes are never written.; Cancelling an active Ghidra request terminates its ephemeral database and discards session annotations. The selected target remains open; the next provider query imports the original artifact again.; Default-space addresses use lowercase 0x-prefixed hexadecimal; other address spaces use <percent-encoded-space>:0x<hex>.; Ghidra Listing reports a terminal call at 0x544163 to 0x429127 FUN_00429127 (external=false, thunk=false, hasNoReturn=true); fallthrough is excluded by Ghidra's flow model. This records Ghidra's FunctionManager flag, not an independent verification that the callee cannot return.; The Ghidra Program references PDB ISPToolForMsi.pdb (GUID b8f2ac8f-1d6f-438d-800f-ed4a14426ac6, age (hex) 1, signature unknown, version RSDS); Ghidra reports load state unknown. Original names and types may be missing; an empty name search does not prove a procedure is absent. Use list_procedures and address-based analysis to inspect recovered functions. REA does not admit a caller-selected PDB companion.; This session uses Ghidra 12.1.2. The bridge is verified against 12.1.4; other 12.1.x builds are accepted and the observed version is reported.; Pseudocode is Ghidra decompiler output, not original source and not text-equivalent to Hopper output.; External functions and functions without an analyzable body return null; other decompiler failures remain explicit.
// pseudocode: provider-specific; not original source


/* WARNING: Function: __EH_prolog3 replaced with injection: EH_prolog3 */
/* WARNING: Function: __EH_epilog3 replaced with injection: EH_epilog3 */
/* Library Function - Single Match
    protected: void __thiscall CMFCImagePaintArea::FloodFill(class CPoint const &)
   
   Library: Visual Studio 2015 Release */

void __thiscall CMFCImagePaintArea::FloodFill(CMFCImagePaintArea *this,CPoint *param_1)

{
  CGdiObject *pCVar1;
  COLORREF color;
  void *pvVar2;
  HWND pHVar3;
  CWnd *pCVar4;
  undefined **local_1c [2];
  CPen *local_14;
  undefined4 local_8;
  undefined4 uStack_4;
  
  uStack_4 = 0xc;
  local_8 = 0x544157;
  if (*(int *)(this + 0xac) == 0) {
                    /* WARNING: Subroutine does not return */
    FUN_00429127();
  }
  pCVar1 = CDC::SelectGdiObject(*(HDC__ **)(this + 0x98),*(void **)(*(int *)(this + 0xac) + 4));
  CBrush::CBrush((CBrush *)local_1c,*(ulong *)(this + 0x90));
  local_8 = 0;
  local_14 = CDC::SelectObject((CDC *)(this + 0x94),(CPen *)local_1c);
  color = GetPixel(*(HDC *)(this + 0x98),*(int *)param_1,*(int *)(param_1 + 4));
  ExtFloodFill(*(HDC *)(this + 0x98),*(int *)param_1,*(int *)(param_1 + 4),color,1);
  if (pCVar1 == (CGdiObject *)0x0) {
    pvVar2 = (void *)0x0;
  }
  else {
    pvVar2 = *(void **)(pCVar1 + 4);
  }
  CDC::SelectGdiObject(*(HDC__ **)(this + 0x98),pvVar2);
  CDC::SelectObject((CDC *)(this + 0x94),local_14);
  InvalidateRect(*(HWND *)(this + 0x20),(RECT *)0x0,1);
  UpdateWindow(*(HWND *)(this + 0x20));
  pHVar3 = GetParent(*(HWND *)(this + 0x20));
  pCVar4 = CWnd::FromHandle(pHVar3);
  InvalidateRect(*(HWND *)(pCVar4 + 0x20),(RECT *)(this + 0x80),1);
  local_1c[0] = CBrush::vftable;
  FUN_0040ee80();
  return;
}

