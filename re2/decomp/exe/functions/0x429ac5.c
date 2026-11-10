// rea decompile_all
// name: AfxGetDitheredBitmap
// address: 0x429ac5
// body: available
// range: 0x429ac5-0x429db1 inclusive
// non_contiguous: false
// provider: Ghidra 12.1.2 (ghidra)
// analysis_profile: ac6d50be2cdf54f7005df47d1ed7e7ef55dee595681eb1b7c2e0b00d70cd697d
// limitations: The session serves operations only after Ghidra reports default auto-analysis complete; incomplete analysis does not expose partial results.; The imported Program and temporary project are ephemeral and deleted on close. Annotation operations edit session database metadata; original executable bytes are never written.; Cancelling an active Ghidra request terminates its ephemeral database and discards session annotations. The selected target remains open; the next provider query imports the original artifact again.; Default-space addresses use lowercase 0x-prefixed hexadecimal; other address spaces use <percent-encoded-space>:0x<hex>.; The Ghidra Program references PDB ISPToolForMsi.pdb (GUID b8f2ac8f-1d6f-438d-800f-ed4a14426ac6, age (hex) 1, signature unknown, version RSDS); Ghidra reports load state unknown. Original names and types may be missing; an empty name search does not prove a procedure is absent. Use list_procedures and address-based analysis to inspect recovered functions. REA does not admit a caller-selected PDB companion.; This session uses Ghidra 12.1.2. The bridge is verified against 12.1.4; other 12.1.x builds are accepted and the observed version is reported.; Pseudocode is Ghidra decompiler output, not original source and not text-equivalent to Hopper output.; External functions and functions without an analyzable body return null; other decompiler failures remain explicit.
// pseudocode: provider-specific; not original source


/* WARNING: Function: __EH_prolog3_GS replaced with injection: EH_prolog3 */
/* Library Function - Single Match
    void __stdcall AfxGetDitheredBitmap(class CBitmap const &,class CBitmap *,unsigned long,unsigned
   long)
   
   Library: Visual Studio 2015 Release */

void AfxGetDitheredBitmap(CBitmap *param_1,CBitmap *param_2,ulong param_3,ulong param_4)

{
  HDC pHVar1;
  int iVar2;
  HBITMAP pHVar3;
  HBRUSH pHVar4;
  CGdiObject *pCVar5;
  CGdiObject *pCVar6;
  COLORREF CVar7;
  ulong uVar8;
  void *pvVar9;
  CGdiObject *pCVar10;
  ulong uVar11;
  void *pvVar12;
  undefined **local_7c;
  HDC__ *local_78;
  undefined4 local_74;
  undefined4 local_70;
  undefined **local_6c;
  HBRUSH local_68;
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
  undefined **local_2c;
  HBITMAP local_28;
  RECT local_24;
  undefined4 local_8;
  undefined4 uStack_4;
  
  uStack_4 = 0x78;
  pvVar12 = (void *)0x0;
  local_4c = CDC::vftable;
  local_48 = (HDC__ *)0x0;
  local_44 = 0;
  local_40 = 0;
  local_7c = CDC::vftable;
  local_78 = (HDC__ *)0x0;
  local_74 = 0;
  local_70 = 0;
  local_3c = CDC::vftable;
  local_38 = (HDC__ *)0x0;
  local_34 = 0;
  local_30 = 0;
  local_28 = (HBITMAP)0x0;
  local_2c = CBitmap::vftable;
  local_68 = (HBRUSH)0x0;
  local_6c = CBrush::vftable;
  local_8 = 4;
  pHVar1 = CreateCompatibleDC((HDC)0x0);
  iVar2 = CDC::Attach((CDC *)&local_4c,pHVar1);
  if (iVar2 != 0) {
    pHVar1 = CreateCompatibleDC((HDC)0x0);
    iVar2 = CDC::Attach((CDC *)&local_7c,pHVar1);
    if (iVar2 != 0) {
      pHVar1 = CreateCompatibleDC((HDC)0x0);
      iVar2 = CDC::Attach((CDC *)&local_3c,pHVar1);
      if (iVar2 != 0) {
        iVar2 = GetObjectW(*(HANDLE *)(param_1 + 4),0x18,local_64);
        if (iVar2 != 0) {
          CGdiObject::DeleteObject((CGdiObject *)param_2);
          pHVar3 = CreateBitmap(local_60,local_5c,(uint)local_54,(uint)local_52,(void *)0x0);
          iVar2 = CMenu::Attach((CMenu *)param_2,(HMENU__ *)pHVar3);
          if (iVar2 != 0) {
            pHVar3 = CreateBitmap(8,8,1,1,&DAT_005b0d1c);
            CMenu::Attach((CMenu *)&local_2c,(HMENU__ *)pHVar3);
            pHVar4 = CreatePatternBrush(local_28);
            CMenu::Attach((CMenu *)&local_6c,(HMENU__ *)pHVar4);
            CGdiObject::DeleteObject((CGdiObject *)&local_2c);
            pHVar3 = CreateBitmap(local_60,local_5c,1,1,(void *)0x0);
            CMenu::Attach((CMenu *)&local_2c,(HMENU__ *)pHVar3);
            pCVar5 = CDC::SelectGdiObject(local_48,*(void **)(param_1 + 4));
            pCVar6 = CDC::SelectGdiObject(local_78,local_28);
            if ((pCVar5 != (CGdiObject *)0x0) && (pCVar6 != (CGdiObject *)0x0)) {
              CVar7 = GetPixel(local_48,0,0);
              uVar8 = CDC::SetBkColor((CDC *)&local_4c,CVar7);
              BitBlt(local_78,0,0,local_60,local_5c,local_48,0,0,0xcc0020);
              CDC::SetBkColor((CDC *)&local_4c,0xffffff);
              BitBlt(local_78,0,0,local_60,local_5c,local_48,0,0,0xee0086);
              CDC::SetBkColor((CDC *)&local_4c,uVar8);
              pvVar9 = (void *)0x0;
              if (param_2 != (CBitmap *)0x0) {
                pvVar9 = *(void **)(param_2 + 4);
              }
              pCVar10 = CDC::SelectGdiObject(local_38,pvVar9);
              if (pCVar10 != (CGdiObject *)0x0) {
                uVar8 = CDC::SetTextColor((CDC *)&local_3c,param_3);
                uVar11 = CDC::SetBkColor((CDC *)&local_3c,param_4);
                local_24.right = local_60;
                local_24.left = 0;
                local_24.top = 0;
                local_24.bottom = local_5c;
                FillRect(local_38,&local_24,local_68);
                CDC::SetTextColor((CDC *)&local_3c,uVar8);
                CDC::SetBkColor((CDC *)&local_3c,uVar11);
                BitBlt(local_38,0,0,local_60,local_5c,local_48,0,0,0x660046);
                BitBlt(local_38,0,0,local_60,local_5c,local_78,0,0,0x8800c6);
                BitBlt(local_38,0,0,local_60,local_5c,local_48,0,0,0x660046);
                pvVar12 = *(void **)(pCVar10 + 4);
              }
              CDC::SelectGdiObject(local_38,pvVar12);
              CDC::SelectGdiObject(local_78,*(void **)(pCVar6 + 4));
              CDC::SelectGdiObject(local_48,*(void **)(pCVar5 + 4));
            }
          }
        }
      }
    }
  }
  local_6c = CBrush::vftable;
  FUN_0040ee80();
  local_2c = CBitmap::vftable;
  FUN_0040ee80();
  CDC::~CDC((CDC *)&local_3c);
  CDC::~CDC((CDC *)&local_7c);
  CDC::~CDC((CDC *)&local_4c);
  FUN_0055bae6();
  return;
}

