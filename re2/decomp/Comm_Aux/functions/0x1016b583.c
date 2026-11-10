// rea decompile_all
// name: CMFCImagePaintArea::DrawItem
// address: 0x1016b583
// body: available
// range: 0x1016b583-0x1016b7ec inclusive
// non_contiguous: false
// provider: Ghidra 12.1.2 (ghidra)
// analysis_profile: b075844f08879296d957518397cd0ddda73db81dce53d00d3f0e702766fc2af6
// limitations: The session serves operations only after Ghidra reports default auto-analysis complete; incomplete analysis does not expose partial results.; The imported Program and temporary project are ephemeral and deleted on close. Annotation operations edit session database metadata; original executable bytes are never written.; Cancelling an active Ghidra request terminates its ephemeral database and discards session annotations. The selected target remains open; the next provider query imports the original artifact again.; Default-space addresses use lowercase 0x-prefixed hexadecimal; other address spaces use <percent-encoded-space>:0x<hex>.; The Ghidra Program references PDB Comm_Aux.pdb (GUID ba7920cc-daa3-4461-a102-1f8f66c67a2a, age (hex) 1, signature unknown, version RSDS); Ghidra reports load state unknown. Original names and types may be missing; an empty name search does not prove a procedure is absent. Use list_procedures and address-based analysis to inspect recovered functions. REA does not admit a caller-selected PDB companion.; This session uses Ghidra 12.1.2. The bridge is verified against 12.1.4; other 12.1.x builds are accepted and the observed version is reported.; Pseudocode is Ghidra decompiler output, not original source and not text-equivalent to Hopper output.; External functions and functions without an analyzable body return null; other decompiler failures remain explicit.
// pseudocode: provider-specific; not original source


/* WARNING: Function: __EH_prolog3_GS replaced with injection: EH_prolog3 */
/* Library Function - Single Match
    protected: virtual void __thiscall CMFCImagePaintArea::DrawItem(struct tagDRAWITEMSTRUCT *)
   
   Library: Visual Studio 2015 Release */

void __thiscall CMFCImagePaintArea::DrawItem(CMFCImagePaintArea *this,tagDRAWITEMSTRUCT *param_1)

{
  CDC *pCVar1;
  AFX_GLOBAL_DATA *pAVar2;
  HBRUSH hbr;
  COLORREF CVar3;
  void *pvVar4;
  int iVar5;
  CPen *x;
  ulong uVar6;
  undefined **local_64 [2];
  undefined1 local_5c [4];
  CGdiObject *local_58;
  ulong local_54;
  CPen *local_50;
  CDC *local_4c;
  int local_48;
  tagRECT local_44;
  tagRECT local_34;
  tagRECT local_24;
  undefined4 local_8;
  undefined4 uStack_4;
  
  uStack_4 = 0x54;
  local_8 = 0x1016b58f;
  pCVar1 = CDC::FromHandle(*(HDC__ **)(param_1 + 0x18));
  local_4c = pCVar1;
  CopyRect(&local_24,(RECT *)(param_1 + 0x1c));
  pAVar2 = GetGlobalData();
  hbr = (HBRUSH)0x0;
  if (pAVar2 != (AFX_GLOBAL_DATA *)0xffffff68) {
    hbr = *(HBRUSH *)(pAVar2 + 0x9c);
  }
  FillRect(*(HDC *)(pCVar1 + 4),&local_24,hbr);
  InflateRect(&local_24,-1,-1);
  local_44.left = local_24.left;
  local_44.right = *(int *)(this + 0xa4) * *(int *)(this + 200) + local_24.left;
  local_44.top = local_24.top;
  local_44.bottom = *(int *)(this + 0xa8) * *(int *)(this + 0xcc) + local_24.top;
  local_24.right = local_44.right;
  local_24.bottom = local_44.bottom;
  InflateRect(&local_24,1,1);
  pAVar2 = GetGlobalData();
  uVar6 = *(ulong *)(pAVar2 + 0x24);
  pAVar2 = GetGlobalData();
  pCVar1 = local_4c;
  CDC::Draw3dRect(local_4c,&local_44,*(ulong *)(pAVar2 + 0x30),uVar6);
  pAVar2 = GetGlobalData();
  CPen::CPen((CPen *)local_64,0,1,*(ulong *)(pAVar2 + 0x20));
  local_8 = 0;
  local_50 = CDC::SelectObject(pCVar1,(CPen *)local_64);
  local_48 = local_44.left + *(int *)(this + 200);
  iVar5 = local_44.top;
  if (local_48 <= local_44.right - *(int *)(this + 200)) {
    do {
      CDC::MoveTo(pCVar1,(int)local_5c,local_48);
      CDC::LineTo(pCVar1,local_48,local_44.bottom + -1);
      local_48 = local_48 + *(int *)(this + 200);
      iVar5 = local_44.top;
    } while (local_48 <= local_44.right - *(int *)(this + 200));
  }
  while (iVar5 = iVar5 + *(int *)(this + 0xcc), iVar5 <= local_44.bottom - *(int *)(this + 0xcc)) {
    CDC::MoveTo(local_4c,(int)local_5c,local_44.left + 1);
    CDC::LineTo(local_4c,local_44.right + -1,iVar5);
  }
  CDC::SelectObject(local_4c,local_50);
  if (*(int *)(this + 0xac) != 0) {
    local_58 = CDC::SelectGdiObject(*(HDC__ **)(this + 0x98),*(void **)(*(int *)(this + 0xac) + 4));
    local_50 = (CPen *)0x0;
    if (0 < *(int *)(this + 0xa4)) {
      do {
        local_48 = 0;
        x = local_50;
        if (0 < *(int *)(this + 0xa8)) {
          do {
            CVar3 = GetPixel(*(HDC *)(this + 0x98),(int)x,local_48);
            local_54 = CMFCToolBarImages::MapFromSysColor(CVar3,0);
            if (local_54 != 0xffffffff) {
              local_34.left = *(int *)(this + 200) * (int)local_50 + local_44.left;
              local_34.top = *(int *)(this + 0xcc) * local_48 + local_44.top;
              local_34.right = *(int *)(this + 200) + local_34.left;
              local_34.bottom = *(int *)(this + 0xcc) + local_34.top;
              InflateRect(&local_34,-1,-1);
              FUN_10069ae5(&local_34,local_54);
              x = local_50;
            }
            local_48 = local_48 + 1;
          } while (local_48 < *(int *)(this + 0xa8));
        }
        local_50 = x + 1;
      } while ((int)local_50 < *(int *)(this + 0xa4));
    }
    pvVar4 = (void *)0x0;
    if (local_58 != (CGdiObject *)0x0) {
      pvVar4 = *(void **)(local_58 + 4);
    }
    CDC::SelectGdiObject(*(HDC__ **)(this + 0x98),pvVar4);
  }
  local_64[0] = CPen::vftable;
  CImageList::~CImageList((CImageList *)local_64);
  FUN_1017f5f4();
  return;
}

