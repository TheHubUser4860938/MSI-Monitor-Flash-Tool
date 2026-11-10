// rea decompile_all
// name: AFX_GLOBAL_DATA::UpdateSysColors
// address: 0x1007cdb6
// body: available
// range: 0x1007cdb6-0x1007d1d2 inclusive
// non_contiguous: false
// provider: Ghidra 12.1.2 (ghidra)
// analysis_profile: b075844f08879296d957518397cd0ddda73db81dce53d00d3f0e702766fc2af6
// limitations: The session serves operations only after Ghidra reports default auto-analysis complete; incomplete analysis does not expose partial results.; The imported Program and temporary project are ephemeral and deleted on close. Annotation operations edit session database metadata; original executable bytes are never written.; Cancelling an active Ghidra request terminates its ephemeral database and discards session annotations. The selected target remains open; the next provider query imports the original artifact again.; Default-space addresses use lowercase 0x-prefixed hexadecimal; other address spaces use <percent-encoded-space>:0x<hex>.; Ghidra Listing reports a terminal call at 0x1007cf79 to 0x1004886a FUN_1004886a (external=false, thunk=false, hasNoReturn=true); fallthrough is excluded by Ghidra's flow model. This records Ghidra's FunctionManager flag, not an independent verification that the callee cannot return.; The Ghidra Program references PDB Comm_Aux.pdb (GUID ba7920cc-daa3-4461-a102-1f8f66c67a2a, age (hex) 1, signature unknown, version RSDS); Ghidra reports load state unknown. Original names and types may be missing; an empty name search does not prove a procedure is absent. Use list_procedures and address-based analysis to inspect recovered functions. REA does not admit a caller-selected PDB companion.; This session uses Ghidra 12.1.2. The bridge is verified against 12.1.4; other 12.1.x builds are accepted and the observed version is reported.; Pseudocode is Ghidra decompiler output, not original source and not text-equivalent to Hopper output.; External functions and functions without an analyzable body return null; other decompiler failures remain explicit.
// pseudocode: provider-specific; not original source


/* WARNING: Function: __EH_prolog3 replaced with injection: EH_prolog3 */
/* WARNING: Function: __EH_epilog3 replaced with injection: EH_epilog3 */
/* Library Function - Single Match
    public: void __thiscall AFX_GLOBAL_DATA::UpdateSysColors(void)
   
   Library: Visual Studio 2015 Release */

void __thiscall AFX_GLOBAL_DATA::UpdateSysColors(AFX_GLOBAL_DATA *this)

{
  CGdiObject *this_00;
  AFX_GLOBAL_DATA AVar1;
  DWORD DVar2;
  undefined4 uVar3;
  int iVar4;
  HBRUSH pHVar5;
  HPEN pHVar6;
  HBITMAP__ *pHVar7;
  CWindowDC local_30 [4];
  HDC__ *local_2c;
  HDC local_28;
  undefined **local_1c;
  HBITMAP local_18;
  ushort local_14;
  AFX_GLOBAL_DATA local_11;
  int local_8;
  undefined4 uStack_4;
  
  uStack_4 = 0x20;
  local_8 = 0x1007cdc2;
  DVar2 = GetSysColor(0x16);
  if (DVar2 == 0xffffff) {
    DVar2 = GetSysColor(0xf);
    if (DVar2 != 0) goto LAB_1007cde6;
    uVar3 = 1;
  }
  else {
LAB_1007cde6:
    uVar3 = 0;
  }
  *(undefined4 *)(this + 0x184) = uVar3;
  DVar2 = GetSysColor(0x15);
  if (DVar2 == 0) {
    DVar2 = GetSysColor(0xf);
    if (DVar2 != 0xffffff) goto LAB_1007ce0b;
    uVar3 = 1;
  }
  else {
LAB_1007ce0b:
    uVar3 = 0;
  }
  *(undefined4 *)(this + 0x188) = uVar3;
  CWindowDC::CWindowDC(local_30,(CWnd *)0x0);
  local_8 = 0;
  iVar4 = GetDeviceCaps(local_28,0xc);
  *(int *)(this + 0x1ac) = iVar4;
  DVar2 = GetSysColor(0xf);
  *(DWORD *)(this + 0x1c) = DVar2;
  *(DWORD *)(this + 0x54) = DVar2;
  DVar2 = GetSysColor(0x10);
  *(DWORD *)(this + 0x20) = DVar2;
  *(DWORD *)(this + 0x58) = DVar2;
  DVar2 = GetSysColor(0x15);
  *(DWORD *)(this + 0x30) = DVar2;
  *(DWORD *)(this + 0x60) = DVar2;
  DVar2 = GetSysColor(0x16);
  *(DWORD *)(this + 0x34) = DVar2;
  *(DWORD *)(this + 100) = DVar2;
  DVar2 = GetSysColor(0x14);
  *(DWORD *)(this + 0x24) = DVar2;
  *(DWORD *)(this + 0x5c) = DVar2;
  DVar2 = GetSysColor(0x12);
  *(DWORD *)(this + 0x28) = DVar2;
  *(DWORD *)(this + 0x68) = DVar2;
  DVar2 = GetSysColor(0x11);
  *(DWORD *)(this + 0x38) = DVar2;
  DVar2 = GetSysColor(6);
  *(DWORD *)(this + 0x2c) = DVar2;
  DVar2 = GetSysColor(0xd);
  *(DWORD *)(this + 0x3c) = DVar2;
  DVar2 = GetSysColor(0xe);
  *(DWORD *)(this + 0x40) = DVar2;
  DVar2 = GetSysColor(5);
  *(DWORD *)(this + 0x6c) = DVar2;
  *(DWORD *)(this + 0x50) = DVar2;
  DVar2 = GetSysColor(8);
  *(DWORD *)(this + 0x70) = DVar2;
  DVar2 = GetSysColor(9);
  *(DWORD *)(this + 0x74) = DVar2;
  DVar2 = GetSysColor(7);
  *(DWORD *)(this + 0x78) = DVar2;
  DVar2 = GetSysColor(2);
  *(DWORD *)(this + 0x7c) = DVar2;
  DVar2 = GetSysColor(3);
  *(DWORD *)(this + 0x80) = DVar2;
  DVar2 = GetSysColor(0x1b);
  *(DWORD *)(this + 0x88) = DVar2;
  DVar2 = GetSysColor(0x1c);
  *(DWORD *)(this + 0x8c) = DVar2;
  DVar2 = GetSysColor(10);
  *(DWORD *)(this + 0x90) = DVar2;
  DVar2 = GetSysColor(0xb);
  *(DWORD *)(this + 0x94) = DVar2;
  DVar2 = GetSysColor(0x13);
  *(DWORD *)(this + 0x84) = DVar2;
  if (*(int *)(this + 0x184) == 0) {
    DVar2 = GetSysColor(0x1a);
    *(undefined4 *)(this + 0x48) = 0xff0000;
    *(undefined4 *)(this + 0x4c) = 0x800080;
  }
  else {
    DVar2 = *(DWORD *)(this + 0x70);
    *(DWORD *)(this + 0x48) = DVar2;
    *(DWORD *)(this + 0x4c) = DVar2;
  }
  *(DWORD *)(this + 0x44) = DVar2;
  pHVar5 = GetSysColorBrush(0x10);
  *(HBRUSH *)(this + 0x14) = pHVar5;
  if (pHVar5 != (HBRUSH)0x0) {
    pHVar5 = GetSysColorBrush(0x14);
    *(HBRUSH *)(this + 0x10) = pHVar5;
    if (pHVar5 != (HBRUSH)0x0) {
      pHVar5 = GetSysColorBrush(5);
      *(HBRUSH *)(this + 0x18) = pHVar5;
      if (pHVar5 != (HBRUSH)0x0) {
        CGdiObject::DeleteObject((CGdiObject *)(this + 0x98));
        pHVar5 = CreateSolidBrush(*(COLORREF *)(this + 0x1c));
        CMenu::Attach((CMenu *)(this + 0x98),(HMENU__ *)pHVar5);
        CGdiObject::DeleteObject((CGdiObject *)(this + 0xd0));
        pHVar5 = CreateSolidBrush(*(COLORREF *)(this + 0x54));
        CMenu::Attach((CMenu *)(this + 0xd0),(HMENU__ *)pHVar5);
        CGdiObject::DeleteObject((CGdiObject *)(this + 0xb8));
        pHVar5 = CreateSolidBrush(*(COLORREF *)(this + 0x7c));
        CMenu::Attach((CMenu *)(this + 0xb8),(HMENU__ *)pHVar5);
        CGdiObject::DeleteObject((CGdiObject *)(this + 0xc0));
        pHVar5 = CreateSolidBrush(*(COLORREF *)(this + 0x80));
        CMenu::Attach((CMenu *)(this + 0xc0),(HMENU__ *)pHVar5);
        CGdiObject::DeleteObject((CGdiObject *)(this + 0xa0));
        pHVar5 = CreateSolidBrush(*(COLORREF *)(this + 0x3c));
        CMenu::Attach((CMenu *)(this + 0xa0),(HMENU__ *)pHVar5);
        CGdiObject::DeleteObject((CGdiObject *)(this + 0xb0));
        pHVar5 = CreateSolidBrush(*(COLORREF *)(this + 0x30));
        CMenu::Attach((CMenu *)(this + 0xb0),(HMENU__ *)pHVar5);
        CGdiObject::DeleteObject((CGdiObject *)(this + 200));
        pHVar5 = CreateSolidBrush(*(COLORREF *)(this + 0x6c));
        CMenu::Attach((CMenu *)(this + 200),(HMENU__ *)pHVar5);
        CGdiObject::DeleteObject((CGdiObject *)(this + 0xd8));
        pHVar6 = CreatePen(0,1,DAT_1020e16c);
        CMenu::Attach((CMenu *)(this + 0xd8),(HMENU__ *)pHVar6);
        CGdiObject::DeleteObject((CGdiObject *)(this + 0xe0));
        pHVar6 = CreatePen(0,1,DAT_1020e184);
        CMenu::Attach((CMenu *)(this + 0xe0),(HMENU__ *)pHVar6);
        CGdiObject::DeleteObject((CGdiObject *)(this + 0xe8));
        pHVar6 = CreatePen(0,1,DAT_1020e188);
        CMenu::Attach((CMenu *)(this + 0xe8),(HMENU__ *)pHVar6);
        this_00 = (CGdiObject *)(this + 0xa8);
        if ((this_00 != (CGdiObject *)0x0) && (*(int *)(this + 0xac) != 0)) {
          CGdiObject::DeleteObject(this_00);
        }
        if (*(int *)(this + 0x1ac) < 9) {
          pHVar7 = CreateDitherBitmap(this,local_2c);
          if (pHVar7 == (HBITMAP__ *)0x0) goto LAB_1007cf79;
          local_18 = (HBITMAP)0x0;
          local_1c = CBitmap::vftable;
          local_8._0_1_ = 1;
          CMenu::Attach((CMenu *)&local_1c,(HMENU__ *)pHVar7);
          pHVar5 = CreatePatternBrush(local_18);
          CMenu::Attach((CMenu *)this_00,(HMENU__ *)pHVar5);
          local_8 = (uint)local_8._1_3_ << 8;
          local_1c = CBitmap::vftable;
          CImageList::~CImageList((CImageList *)&local_1c);
        }
        else {
          AVar1 = this[0x1d];
          local_14 = (ushort)(byte)AVar1;
          local_11 = this[0x1c];
          pHVar5 = CreateSolidBrush((uint)CONCAT21(CONCAT11((char)((int)((uint)(byte)this[0x26] -
                                                                        (uint)(byte)this[0x1e]) / 2)
                                                            + (char)this[0x1e],
                                                            (char)((int)((uint)(byte)this[0x25] -
                                                                        (uint)(byte)AVar1) / 2) +
                                                            (char)AVar1),
                                                   (char)((int)((uint)(byte)this[0x24] -
                                                               (uint)(byte)local_11) / 2) +
                                                   (char)local_11));
          CMenu::Attach((CMenu *)(this + 0xa8),(HMENU__ *)pHVar5);
        }
        CMenuImages::CleanUp();
        DAT_1020fd3c = 1;
        CWindowDC::~CWindowDC(local_30);
        return;
      }
    }
  }
LAB_1007cf79:
                    /* WARNING: Subroutine does not return */
  FUN_1004886a();
}

