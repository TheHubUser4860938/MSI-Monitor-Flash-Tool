// rea decompile_all
// name: CMFCToolBarImages::TransparentBlt
// address: 0x1008a1b0
// body: available
// range: 0x1008a1b0-0x1008a440 inclusive
// non_contiguous: false
// provider: Ghidra 12.1.2 (ghidra)
// analysis_profile: b075844f08879296d957518397cd0ddda73db81dce53d00d3f0e702766fc2af6
// limitations: The session serves operations only after Ghidra reports default auto-analysis complete; incomplete analysis does not expose partial results.; The imported Program and temporary project are ephemeral and deleted on close. Annotation operations edit session database metadata; original executable bytes are never written.; Cancelling an active Ghidra request terminates its ephemeral database and discards session annotations. The selected target remains open; the next provider query imports the original artifact again.; Default-space addresses use lowercase 0x-prefixed hexadecimal; other address spaces use <percent-encoded-space>:0x<hex>.; The Ghidra Program references PDB WinIspPlugIn.pdb (GUID d9f398c7-6c98-49a8-af25-a0659d5ad2f3, age (hex) 1, signature unknown, version RSDS); Ghidra reports load state unknown. Original names and types may be missing; an empty name search does not prove a procedure is absent. Use list_procedures and address-based analysis to inspect recovered functions. REA does not admit a caller-selected PDB companion.; This session uses Ghidra 12.1.2. The bridge is verified against 12.1.4; other 12.1.x builds are accepted and the observed version is reported.; Pseudocode is Ghidra decompiler output, not original source and not text-equivalent to Hopper output.; External functions and functions without an analyzable body return null; other decompiler failures remain explicit.
// pseudocode: provider-specific; not original source


/* WARNING: Function: __EH_prolog3 replaced with injection: EH_prolog3 */
/* WARNING: Function: __EH_epilog3 replaced with injection: EH_epilog3 */
/* Library Function - Single Match
    protected: static void __stdcall CMFCToolBarImages::TransparentBlt(struct HDC__
   *,int,int,int,int,class CDC *,int,int,unsigned long,int,int)
   
   Library: Visual Studio 2015 Release */

void CMFCToolBarImages::TransparentBlt
               (HDC__ *param_1,int param_2,int param_3,int param_4,int param_5,CDC *param_6,
               int param_7,int param_8,ulong param_9,int param_10,int param_11)

{
  CGdiObject *cy;
  BOOL BVar1;
  HBITMAP pHVar2;
  HDC pHVar3;
  int wDest;
  CDC local_58 [4];
  HDC__ *local_54;
  CDC local_48 [4];
  HDC local_44;
  CDC local_38 [4];
  HDC__ *local_34;
  undefined **local_28;
  void *local_24;
  undefined **local_20;
  void *local_1c;
  CGdiObject *local_18;
  CGdiObject *local_14;
  undefined4 local_8;
  undefined4 uStack_4;
  
  uStack_4 = 0x48;
  local_8 = 0x1008a1bc;
  wDest = param_4;
  if (param_10 != -1) {
    wDest = param_10;
  }
  local_14 = (CGdiObject *)param_11;
  if (param_11 == -1) {
    local_14 = (CGdiObject *)param_5;
  }
  if (DAT_10245be4 == 0) {
    if (param_6 == (CDC *)0x0) {
      pHVar3 = (HDC)0x0;
    }
    else {
      pHVar3 = *(HDC *)(param_6 + 4);
    }
    BVar1 = ::TransparentBlt(param_1,param_2,param_3,wDest,(int)local_14,pHVar3,param_7,param_8,
                             param_4,param_5,param_9);
    if (BVar1 != 0) {
      return;
    }
  }
  CDC::CDC(local_48);
  local_8 = 0;
  CDC::CDC(local_38);
  local_8._0_1_ = 1;
  CDC::CDC(local_58);
  local_8._0_1_ = 2;
  CDC::Attach(local_48,param_1);
  pHVar3 = CreateCompatibleDC(local_44);
  CDC::Attach(local_58,pHVar3);
  local_24 = (void *)0x0;
  local_28 = CBitmap::vftable;
  local_8._0_1_ = 3;
  pHVar3 = CreateCompatibleDC(local_44);
  CDC::Attach(local_38,pHVar3);
  local_1c = (void *)0x0;
  local_20 = CBitmap::vftable;
  local_8 = CONCAT31(local_8._1_3_,4);
  pHVar2 = CreateCompatibleBitmap(local_44,wDest,(int)local_14);
  CMenu::Attach((CMenu *)&local_20,(HMENU__ *)pHVar2);
  local_18 = CDC::SelectGdiObject(local_34,local_1c);
  if ((param_10 == -1) || ((param_10 == param_4 && (param_11 == param_5)))) {
    if (param_6 == (CDC *)0x0) {
      pHVar3 = (HDC)0x0;
    }
    else {
      pHVar3 = *(HDC *)(param_6 + 4);
    }
    BitBlt(local_34,0,0,param_4,param_5,pHVar3,param_7,param_8,0xcc0020);
  }
  else {
    if (param_6 == (CDC *)0x0) {
      pHVar3 = (HDC)0x0;
    }
    else {
      pHVar3 = *(HDC *)(param_6 + 4);
    }
    StretchBlt(local_34,0,0,param_10,param_11,pHVar3,param_7,param_8,param_4,param_5,0xcc0020);
  }
  cy = local_14;
  pHVar2 = CreateBitmap(wDest,(int)local_14,1,1,(void *)0x0);
  CMenu::Attach((CMenu *)&local_28,(HMENU__ *)pHVar2);
  local_14 = CDC::SelectGdiObject(local_54,local_24);
  CDC::SetBkColor(local_38,param_9);
  BitBlt(local_54,0,0,wDest,(int)cy,local_34,0,0,0xcc0020);
  CDC::SetBkColor(local_38,0);
  CDC::SetTextColor(local_38,0xffffff);
  BitBlt(local_34,0,0,wDest,(int)cy,local_54,0,0,0x8800c6);
  CDC::SetBkColor(local_48,0xffffff);
  CDC::SetTextColor(local_48,0);
  BitBlt(local_44,param_2,param_3,wDest,(int)cy,local_54,0,0,0x8800c6);
  BitBlt(local_44,param_2,param_3,wDest,(int)cy,local_34,0,0,0xee0086);
  if (local_14 != (CGdiObject *)0x0) {
    CDC::SelectGdiObject(local_54,*(void **)(local_14 + 4));
  }
  if (local_18 != (CGdiObject *)0x0) {
    CDC::SelectGdiObject(local_34,*(void **)(local_18 + 4));
  }
  CDC::Detach(local_48);
  local_20 = CBitmap::vftable;
  CImageList::~CImageList((CImageList *)&local_20);
  local_28 = CBitmap::vftable;
  CImageList::~CImageList((CImageList *)&local_28);
  CDC::~CDC(local_58);
  CDC::~CDC(local_38);
  CDC::~CDC(local_48);
  return;
}

