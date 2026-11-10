// rea decompile_all
// name: CMFCImagePaintArea::OnLButtonUp
// address: 0x1016c8ab
// body: available
// range: 0x1016c8ab-0x1016cc4d inclusive
// non_contiguous: false
// provider: Ghidra 12.1.2 (ghidra)
// analysis_profile: b075844f08879296d957518397cd0ddda73db81dce53d00d3f0e702766fc2af6
// limitations: The session serves operations only after Ghidra reports default auto-analysis complete; incomplete analysis does not expose partial results.; The imported Program and temporary project are ephemeral and deleted on close. Annotation operations edit session database metadata; original executable bytes are never written.; Cancelling an active Ghidra request terminates its ephemeral database and discards session annotations. The selected target remains open; the next provider query imports the original artifact again.; Default-space addresses use lowercase 0x-prefixed hexadecimal; other address spaces use <percent-encoded-space>:0x<hex>.; The Ghidra Program references PDB WinIspPlugIn.pdb (GUID d9f398c7-6c98-49a8-af25-a0659d5ad2f3, age (hex) 1, signature unknown, version RSDS); Ghidra reports load state unknown. Original names and types may be missing; an empty name search does not prove a procedure is absent. Use list_procedures and address-based analysis to inspect recovered functions. REA does not admit a caller-selected PDB companion.; This session uses Ghidra 12.1.2. The bridge is verified against 12.1.4; other 12.1.x builds are accepted and the observed version is reported.; Pseudocode is Ghidra decompiler output, not original source and not text-equivalent to Hopper output.; External functions and functions without an analyzable body return null; other decompiler failures remain explicit.
// pseudocode: provider-specific; not original source


/* Library Function - Single Match
    protected: void __thiscall CMFCImagePaintArea::OnLButtonUp(unsigned int,class CPoint)
   
   Library: Visual Studio 2015 Release */

void __thiscall
CMFCImagePaintArea::OnLButtonUp
          (CMFCImagePaintArea *this,undefined4 param_1,LONG param_3,LONG param_4)

{
  CDC *this_00;
  int iVar1;
  code *pcVar2;
  tagPOINT tVar3;
  tagPOINT tVar4;
  HWND pHVar5;
  CWnd *pCVar6;
  void *pvVar7;
  CGdiObject *pCVar8;
  CPen *pCVar9;
  CPen *pCVar10;
  void *pvVar11;
  undefined1 local_c [4];
  CGdiObject *local_8;
  
  pHVar5 = GetCapture();
  pCVar6 = CWnd::FromHandle(pHVar5);
  if (pCVar6 == (CWnd *)this) {
    ReleaseCapture();
  }
  iVar1 = *(int *)(this + 0xf4);
  if ((iVar1 == 3) || (iVar1 == 4)) {
    if (*(int *)(this + 0xec) != *(int *)(this + 0xe4)) {
      if (*(int *)(this + 0xe4) < *(int *)(this + 0xec)) {
        *(int *)(this + 0xec) = *(int *)(this + 0xec) + 1;
      }
      else {
        *(int *)(this + 0xe4) = *(int *)(this + 0xe4) + 1;
      }
    }
    if (*(int *)(this + 0xe8) != *(int *)(this + 0xe0)) {
      if (*(int *)(this + 0xe0) < *(int *)(this + 0xe8)) {
        *(int *)(this + 0xe8) = *(int *)(this + 0xe8) + 1;
      }
      else {
        *(int *)(this + 0xe0) = *(int *)(this + 0xe0) + 1;
      }
    }
  }
  pvVar11 = (void *)0x0;
  if (iVar1 == 0) {
LAB_1016cc2b:
    tVar4.y = param_4;
    tVar4.x = param_3;
    DrawPixel(this,tVar4);
  }
  else {
    if (iVar1 == 1) {
      ScreenToBitmap(this,(CPoint *)&param_3);
      FloodFill(this,(CPoint *)&param_3);
      goto LAB_1016cc38;
    }
    if (iVar1 == 2) {
      if ((*(int *)(this + 0xec) == *(int *)(this + 0xe4)) &&
         (*(int *)(this + 0xe8) == *(int *)(this + 0xe0))) goto LAB_1016cc2b;
      if (*(int *)(this + 0xac) == 0) {
        pvVar11 = (void *)0x0;
      }
      else {
        pvVar11 = *(void **)(*(int *)(this + 0xac) + 4);
      }
      pCVar8 = CDC::SelectGdiObject(*(HDC__ **)(this + 0x98),pvVar11);
      this_00 = (CDC *)(this + 0x94);
      pCVar10 = CDC::SelectObject(this_00,(CPen *)(this + 0xd0));
      CDC::MoveTo(this_00,(int)local_c,*(int *)(this + 0xe0));
      CDC::LineTo(this_00,*(int *)(this + 0xe8),*(int *)(this + 0xec));
      tVar3.y = param_4;
      tVar3.x = param_3;
      DrawPixel(this,tVar3);
      if (pCVar8 == (CGdiObject *)0x0) {
        pvVar11 = (void *)0x0;
      }
      else {
        pvVar11 = *(void **)(pCVar8 + 4);
      }
      CDC::SelectGdiObject(*(HDC__ **)(this + 0x98),pvVar11);
      CDC::SelectObject(this_00,pCVar10);
    }
    else {
      if (iVar1 == 3) {
        if ((*(int *)(this + 0xec) == *(int *)(this + 0xe4)) &&
           (*(int *)(this + 0xe8) == *(int *)(this + 0xe0))) goto LAB_1016cc2b;
        if (*(int *)(this + 0xac) == 0) {
          pvVar11 = (void *)0x0;
        }
        else {
          pvVar11 = *(void **)(*(int *)(this + 0xac) + 4);
        }
        pCVar8 = CDC::SelectGdiObject(*(HDC__ **)(this + 0x98),pvVar11);
        pCVar10 = CDC::SelectObject((CDC *)(this + 0x94),(CPen *)(this + 0xd0));
        pcVar2 = *(code **)(*(int *)(this + 0x94) + 0x24);
        guard_check_icall(5);
        local_8 = (CGdiObject *)(*pcVar2)();
        CDC::Rectangle((CDC *)(this + 0x94),(tagRECT *)(this + 0xe0));
        pvVar11 = (void *)0x0;
        if (pCVar8 != (CGdiObject *)0x0) {
          pvVar11 = *(void **)(pCVar8 + 4);
        }
        CDC::SelectGdiObject(*(HDC__ **)(this + 0x98),pvVar11);
        CDC::SelectObject((CDC *)(this + 0x94),pCVar10);
        pCVar10 = (CPen *)local_8;
      }
      else {
        if (iVar1 != 4) {
          if (iVar1 == 5) {
            ScreenToBitmap(this,(CPoint *)&param_3);
            if (*(int *)(this + 0xac) == 0) {
              pvVar7 = (void *)0x0;
            }
            else {
              pvVar7 = *(void **)(*(int *)(this + 0xac) + 4);
            }
            pCVar8 = CDC::SelectGdiObject(*(HDC__ **)(this + 0x98),pvVar7);
            local_8 = (CGdiObject *)GetPixel(*(HDC *)(this + 0x98),param_3,param_4);
            if (pCVar8 != (CGdiObject *)0x0) {
              pvVar11 = *(void **)(pCVar8 + 4);
            }
            CDC::SelectGdiObject(*(HDC__ **)(this + 0x98),pvVar11);
            CMFCImageEditorDialog::OnPickColor
                      (*(CMFCImageEditorDialog **)(this + 0xf0),(ulong)local_8);
          }
          goto LAB_1016cc38;
        }
        if ((*(int *)(this + 0xec) == *(int *)(this + 0xe4)) &&
           (*(int *)(this + 0xe8) == *(int *)(this + 0xe0))) goto LAB_1016cc2b;
        if (*(int *)(this + 0xac) == 0) {
          pvVar11 = (void *)0x0;
        }
        else {
          pvVar11 = *(void **)(*(int *)(this + 0xac) + 4);
        }
        local_8 = CDC::SelectGdiObject(*(HDC__ **)(this + 0x98),pvVar11);
        pCVar9 = CDC::SelectObject((CDC *)(this + 0x94),(CPen *)(this + 0xd0));
        pcVar2 = *(code **)(*(int *)(this + 0x94) + 0x24);
        guard_check_icall(5);
        pCVar10 = (CPen *)(*pcVar2)();
        CDC::Ellipse((CDC *)(this + 0x94),(tagRECT *)(this + 0xe0));
        pvVar11 = (void *)0x0;
        if (local_8 != (CGdiObject *)0x0) {
          pvVar11 = *(void **)(local_8 + 4);
        }
        CDC::SelectGdiObject(*(HDC__ **)(this + 0x98),pvVar11);
        CDC::SelectObject((CDC *)(this + 0x94),pCVar9);
      }
      CDC::SelectObject((CDC *)(this + 0x94),pCVar10);
    }
    InvalidateRect(*(HWND *)(this + 0x20),(RECT *)0x0,1);
    UpdateWindow(*(HWND *)(this + 0x20));
    pHVar5 = GetParent(*(HWND *)(this + 0x20));
    pCVar6 = CWnd::FromHandle(pHVar5);
    InvalidateRect(*(HWND *)(pCVar6 + 0x20),(RECT *)(this + 0x80),1);
  }
LAB_1016cc38:
  SetRectEmpty((LPRECT)(this + 0xe0));
  return;
}

