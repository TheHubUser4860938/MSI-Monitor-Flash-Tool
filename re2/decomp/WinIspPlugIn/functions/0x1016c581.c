// rea decompile_all
// name: CMFCImagePaintArea::DrawPixel
// address: 0x1016c581
// body: available
// range: 0x1016c581-0x1016c6ac inclusive
// non_contiguous: false
// provider: Ghidra 12.1.2 (ghidra)
// analysis_profile: b075844f08879296d957518397cd0ddda73db81dce53d00d3f0e702766fc2af6
// limitations: The session serves operations only after Ghidra reports default auto-analysis complete; incomplete analysis does not expose partial results.; The imported Program and temporary project are ephemeral and deleted on close. Annotation operations edit session database metadata; original executable bytes are never written.; Cancelling an active Ghidra request terminates its ephemeral database and discards session annotations. The selected target remains open; the next provider query imports the original artifact again.; Default-space addresses use lowercase 0x-prefixed hexadecimal; other address spaces use <percent-encoded-space>:0x<hex>.; The Ghidra Program references PDB WinIspPlugIn.pdb (GUID d9f398c7-6c98-49a8-af25-a0659d5ad2f3, age (hex) 1, signature unknown, version RSDS); Ghidra reports load state unknown. Original names and types may be missing; an empty name search does not prove a procedure is absent. Use list_procedures and address-based analysis to inspect recovered functions. REA does not admit a caller-selected PDB companion.; This session uses Ghidra 12.1.2. The bridge is verified against 12.1.4; other 12.1.x builds are accepted and the observed version is reported.; Pseudocode is Ghidra decompiler output, not original source and not text-equivalent to Hopper output.; External functions and functions without an analyzable body return null; other decompiler failures remain explicit.
// pseudocode: provider-specific; not original source


/* WARNING: Function: __EH_prolog3_GS replaced with injection: EH_prolog3 */
/* Library Function - Single Match
    protected: void __thiscall CMFCImagePaintArea::DrawPixel(struct tagPOINT)
   
   Library: Visual Studio 2015 Release */

void __thiscall CMFCImagePaintArea::DrawPixel(CMFCImagePaintArea *this,tagPOINT param_1)

{
  void *pvVar1;
  CGdiObject *pCVar2;
  ulong color;
  HWND pHVar3;
  CWnd *pCVar4;
  void *pvVar5;
  CClientDC local_50 [20];
  LONG local_3c;
  LONG local_38;
  tagRECT local_34;
  tagRECT local_24;
  undefined4 local_8;
  undefined4 uStack_4;
  
  uStack_4 = 0x40;
  local_8 = 0x1016c58d;
  pvVar5 = (void *)0x0;
  local_34.left = 0;
  local_34.top = 0;
  local_34.right = 0;
  local_34.bottom = 0;
  GetClientRect(*(HWND *)(this + 0x20),&local_34);
  InflateRect(&local_34,-1,-1);
  local_3c = param_1.x;
  local_38 = param_1.y;
  ScreenToBitmap(this,(CPoint *)&local_3c);
  local_24.left = *(int *)(this + 200) * local_3c + local_34.left;
  local_24.top = *(int *)(this + 0xcc) * local_38 + local_34.top;
  local_24.right = local_24.left + *(int *)(this + 200);
  local_24.bottom = *(int *)(this + 0xcc) + local_24.top;
  InflateRect(&local_24,-1,-1);
  CClientDC::CClientDC(local_50,(CWnd *)this);
  local_8 = 0;
  FUN_10067f3a(&local_24,*(undefined4 *)(this + 0x90));
  if (*(int *)(this + 0xac) == 0) {
    pvVar1 = (void *)0x0;
  }
  else {
    pvVar1 = *(void **)(*(int *)(this + 0xac) + 4);
  }
  pCVar2 = CDC::SelectGdiObject(*(HDC__ **)(this + 0x98),pvVar1);
  color = CMFCToolBarImages::MapToSysColor(*(ulong *)(this + 0x90),1);
  SetPixel(*(HDC *)(this + 0x98),local_3c,local_38,color);
  if (pCVar2 != (CGdiObject *)0x0) {
    pvVar5 = *(void **)(pCVar2 + 4);
  }
  CDC::SelectGdiObject(*(HDC__ **)(this + 0x98),pvVar5);
  pHVar3 = GetParent(*(HWND *)(this + 0x20));
  pCVar4 = CWnd::FromHandle(pHVar3);
  InvalidateRect(*(HWND *)(pCVar4 + 0x20),(RECT *)(this + 0x80),1);
  CClientDC::~CClientDC(local_50);
  FUN_1018015d();
  return;
}

