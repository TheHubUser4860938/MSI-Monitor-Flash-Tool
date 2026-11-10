// rea decompile_all
// name: CMFCToolBarImages::CreateRegionFromImage
// address: 0x10086e83
// body: available
// range: 0x10086e83-0x10086fba inclusive
// non_contiguous: false
// provider: Ghidra 12.1.2 (ghidra)
// analysis_profile: b075844f08879296d957518397cd0ddda73db81dce53d00d3f0e702766fc2af6
// limitations: The session serves operations only after Ghidra reports default auto-analysis complete; incomplete analysis does not expose partial results.; The imported Program and temporary project are ephemeral and deleted on close. Annotation operations edit session database metadata; original executable bytes are never written.; Cancelling an active Ghidra request terminates its ephemeral database and discards session annotations. The selected target remains open; the next provider query imports the original artifact again.; Default-space addresses use lowercase 0x-prefixed hexadecimal; other address spaces use <percent-encoded-space>:0x<hex>.; The Ghidra Program references PDB WinIspPlugIn.pdb (GUID d9f398c7-6c98-49a8-af25-a0659d5ad2f3, age (hex) 1, signature unknown, version RSDS); Ghidra reports load state unknown. Original names and types may be missing; an empty name search does not prove a procedure is absent. Use list_procedures and address-based analysis to inspect recovered functions. REA does not admit a caller-selected PDB companion.; This session uses Ghidra 12.1.2. The bridge is verified against 12.1.4; other 12.1.x builds are accepted and the observed version is reported.; Pseudocode is Ghidra decompiler output, not original source and not text-equivalent to Hopper output.; External functions and functions without an analyzable body return null; other decompiler failures remain explicit.
// pseudocode: provider-specific; not original source


/* WARNING: Function: __EH_prolog3 replaced with injection: EH_prolog3 */
/* WARNING: Function: __EH_epilog3 replaced with injection: EH_epilog3 */
/* Library Function - Single Match
    public: static struct HRGN__ * __stdcall CMFCToolBarImages::CreateRegionFromImage(struct
   HBITMAP__ *,unsigned long)
   
   Library: Visual Studio 2015 Release */

HRGN__ * CMFCToolBarImages::CreateRegionFromImage(HBITMAP__ *param_1,ulong param_2)

{
  HRGN__ *pHVar1;
  int iVar2;
  HDC pHVar3;
  HGDIOBJ h;
  HRGN pHVar4;
  COLORREF CVar5;
  int x;
  int y;
  undefined1 local_54 [4];
  int local_50;
  int local_4c;
  CDC local_3c [4];
  HDC local_38;
  undefined **local_2c;
  HRGN local_28;
  undefined **local_24;
  HRGN local_20;
  HGDIOBJ local_1c;
  int local_18;
  int local_14;
  undefined4 local_8;
  undefined4 uStack_4;
  
  uStack_4 = 0x44;
  local_8 = 0x10086e8f;
  if ((param_1 == (HBITMAP__ *)0x0) || (iVar2 = GetObjectW(param_1,0x18,local_54), iVar2 == 0)) {
    pHVar1 = (HRGN__ *)0x0;
  }
  else {
    CDC::CDC(local_3c);
    y = 0;
    local_8 = 0;
    pHVar3 = CreateCompatibleDC((HDC)0x0);
    CDC::Attach(local_3c,pHVar3);
    h = SelectObject(local_38,param_1);
    local_18 = local_50;
    local_14 = local_4c;
    local_20 = (HRGN)0x0;
    local_24 = CRgn::vftable;
    local_8 = CONCAT31(local_8._1_3_,1);
    local_1c = h;
    pHVar4 = CreateRectRgn(0,0,local_50,local_4c);
    CMenu::Attach((CMenu *)&local_24,(HMENU__ *)pHVar4);
    iVar2 = local_18;
    if (0 < local_4c) {
      do {
        x = 0;
        if (0 < iVar2) {
          do {
            CVar5 = GetPixel(local_38,x,y);
            if (CVar5 == param_2) {
              local_28 = (HRGN)0x0;
              local_2c = CRgn::vftable;
              local_8._0_1_ = 2;
              pHVar4 = CreateRectRgn(x,y,x + 1,y + 1);
              CMenu::Attach((CMenu *)&local_2c,(HMENU__ *)pHVar4);
              CombineRgn(local_20,local_20,local_28,4);
              local_8 = CONCAT31(local_8._1_3_,1);
              local_2c = CRgn::vftable;
              CImageList::~CImageList((CImageList *)&local_2c);
            }
            x = x + 1;
            local_4c = local_14;
          } while (x < iVar2);
        }
        y = y + 1;
        h = local_1c;
      } while (y < local_4c);
    }
    if (h != (HGDIOBJ)0x0) {
      SelectObject(local_38,h);
    }
    pHVar1 = CGdiObject::Detach((CGdiObject *)&local_24);
    local_24 = CRgn::vftable;
    CImageList::~CImageList((CImageList *)&local_24);
    CDC::~CDC(local_3c);
  }
  return pHVar1;
}

