// rea decompile_all
// name: AfxGetGrayBitmap
// address: 0x100333de
// body: available
// range: 0x100333de-0x10033662 inclusive
// non_contiguous: false
// provider: Ghidra 12.1.2 (ghidra)
// analysis_profile: b075844f08879296d957518397cd0ddda73db81dce53d00d3f0e702766fc2af6
// limitations: The session serves operations only after Ghidra reports default auto-analysis complete; incomplete analysis does not expose partial results.; The imported Program and temporary project are ephemeral and deleted on close. Annotation operations edit session database metadata; original executable bytes are never written.; Cancelling an active Ghidra request terminates its ephemeral database and discards session annotations. The selected target remains open; the next provider query imports the original artifact again.; Default-space addresses use lowercase 0x-prefixed hexadecimal; other address spaces use <percent-encoded-space>:0x<hex>.; The Ghidra Program references PDB WinOperateCScaler.pdb (GUID a6737962-efea-4805-8ae6-1fc1ef126554, age (hex) 1, signature unknown, version RSDS); Ghidra reports load state unknown. Original names and types may be missing; an empty name search does not prove a procedure is absent. Use list_procedures and address-based analysis to inspect recovered functions. REA does not admit a caller-selected PDB companion.; This session uses Ghidra 12.1.2. The bridge is verified against 12.1.4; other 12.1.x builds are accepted and the observed version is reported.; Pseudocode is Ghidra decompiler output, not original source and not text-equivalent to Hopper output.; External functions and functions without an analyzable body return null; other decompiler failures remain explicit.
// pseudocode: provider-specific; not original source


/* WARNING: Function: __EH_prolog3 replaced with injection: EH_prolog3 */
/* WARNING: Function: __EH_epilog3 replaced with injection: EH_epilog3 */
/* Library Function - Single Match
    void __stdcall AfxGetGrayBitmap(class CBitmap const &,class CBitmap *,unsigned long)
   
   Library: Visual Studio 2015 Release */

void AfxGetGrayBitmap(CBitmap *param_1,CBitmap *param_2,ulong param_3)

{
  DWORD DVar1;
  HDC pHVar2;
  int iVar3;
  HBITMAP pHVar4;
  CGdiObject *pCVar5;
  CGdiObject *pCVar6;
  COLORREF CVar7;
  void *pvVar8;
  CGdiObject *pCVar9;
  CPen *pCVar10;
  undefined1 local_64 [4];
  int local_60;
  int local_5c;
  ushort local_54;
  ushort local_52;
  undefined **local_4c;
  HDC__ *local_48;
  undefined4 local_44;
  undefined4 local_40;
  undefined **local_3c;
  HDC__ *local_38;
  undefined4 local_34;
  undefined4 local_30;
  undefined **local_2c [2];
  undefined **local_24 [2];
  undefined **local_1c;
  void *local_18;
  ulong local_14;
  undefined1 local_8;
  undefined3 uStack_7;
  undefined4 uStack_4;
  
  uStack_4 = 0x54;
  local_3c = CDC::vftable;
  local_38 = (HDC__ *)0x0;
  local_34 = 0;
  local_30 = 0;
  local_4c = CDC::vftable;
  local_48 = (HDC__ *)0x0;
  local_44 = 0;
  local_40 = 0;
  local_18 = (void *)0x0;
  local_1c = CBitmap::vftable;
  local_8 = 2;
  uStack_7 = 0;
  DVar1 = GetSysColor(0x14);
  CBrush::CBrush((CBrush *)local_2c,DVar1);
  local_8 = 3;
  DVar1 = GetSysColor(0x10);
  CBrush::CBrush((CBrush *)local_24,DVar1);
  _local_8 = CONCAT31(uStack_7,4);
  pHVar2 = CreateCompatibleDC((HDC)0x0);
  iVar3 = CDC::Attach((CDC *)&local_3c,pHVar2);
  if (iVar3 != 0) {
    pHVar2 = CreateCompatibleDC((HDC)0x0);
    iVar3 = CDC::Attach((CDC *)&local_4c,pHVar2);
    if (iVar3 != 0) {
      GetObjectW(*(HANDLE *)(param_1 + 4),0x18,local_64);
      CGdiObject::DeleteObject((CGdiObject *)param_2);
      pHVar4 = CreateBitmap(local_60,local_5c,(uint)local_54,(uint)local_52,(void *)0x0);
      iVar3 = CMenu::Attach((CMenu *)param_2,(HMENU__ *)pHVar4);
      if (iVar3 != 0) {
        pHVar4 = CreateBitmap(local_60,local_5c,1,1,(void *)0x0);
        iVar3 = CMenu::Attach((CMenu *)&local_1c,(HMENU__ *)pHVar4);
        if (iVar3 != 0) {
          pCVar5 = CDC::SelectGdiObject(local_38,*(void **)(param_1 + 4));
          pCVar6 = CDC::SelectGdiObject(local_48,local_18);
          if ((pCVar5 != (CGdiObject *)0x0) && (pCVar6 != (CGdiObject *)0x0)) {
            CVar7 = GetPixel(local_38,0,0);
            local_14 = CDC::SetBkColor((CDC *)&local_3c,CVar7);
            BitBlt(local_48,0,0,local_60,local_5c,local_38,0,0,0xcc0020);
            CDC::SetBkColor((CDC *)&local_3c,0xffffff);
            BitBlt(local_48,0,0,local_60,local_5c,local_38,0,0,0x1100a6);
            if (param_2 == (CBitmap *)0x0) {
              pvVar8 = (void *)0x0;
            }
            else {
              pvVar8 = *(void **)(param_2 + 4);
            }
            pCVar9 = CDC::SelectGdiObject(local_38,pvVar8);
            if (pCVar9 != (CGdiObject *)0x0) {
              CDC::FillSolidRect((CDC *)&local_3c,0,0,local_60,local_5c,param_3);
              CDC::SetBkColor((CDC *)&local_3c,0xffffff);
              pCVar10 = CDC::SelectObject((CDC *)&local_3c,(CPen *)local_2c);
              BitBlt(local_38,1,1,local_60,local_5c,local_48,0,0,0xe20746);
              CDC::SelectObject((CDC *)&local_3c,(CPen *)local_24);
              BitBlt(local_38,0,0,local_60,local_5c,local_48,0,0,0xe20746);
              CDC::SelectObject((CDC *)&local_3c,pCVar10);
              CDC::SetBkColor((CDC *)&local_3c,local_14);
            }
            CDC::SelectGdiObject(local_48,*(void **)(pCVar6 + 4));
            CDC::SelectGdiObject(local_38,*(void **)(pCVar5 + 4));
          }
        }
      }
    }
  }
  local_24[0] = CBrush::vftable;
  CImageList::~CImageList((CImageList *)local_24);
  local_2c[0] = CBrush::vftable;
  CImageList::~CImageList((CImageList *)local_2c);
  local_1c = CBitmap::vftable;
  CImageList::~CImageList((CImageList *)&local_1c);
  CDC::~CDC((CDC *)&local_4c);
  CDC::~CDC((CDC *)&local_3c);
  return;
}

