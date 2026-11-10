// rea decompile_all
// name: CMFCMenuBar::CalcSysButtonSize
// address: 0x100edbbf
// body: available
// range: 0x100edbbf-0x100edcad inclusive
// non_contiguous: false
// provider: Ghidra 12.1.2 (ghidra)
// analysis_profile: b075844f08879296d957518397cd0ddda73db81dce53d00d3f0e702766fc2af6
// limitations: The session serves operations only after Ghidra reports default auto-analysis complete; incomplete analysis does not expose partial results.; The imported Program and temporary project are ephemeral and deleted on close. Annotation operations edit session database metadata; original executable bytes are never written.; Cancelling an active Ghidra request terminates its ephemeral database and discards session annotations. The selected target remains open; the next provider query imports the original artifact again.; Default-space addresses use lowercase 0x-prefixed hexadecimal; other address spaces use <percent-encoded-space>:0x<hex>.; The Ghidra Program references PDB Comm.pdb (GUID c3062acb-498d-45fa-a233-c8b7e401bb13, age (hex) 1, signature unknown, version RSDS); Ghidra reports load state unknown. Original names and types may be missing; an empty name search does not prove a procedure is absent. Use list_procedures and address-based analysis to inspect recovered functions. REA does not admit a caller-selected PDB companion.; This session uses Ghidra 12.1.2. The bridge is verified against 12.1.4; other 12.1.x builds are accepted and the observed version is reported.; Pseudocode is Ghidra decompiler output, not original source and not text-equivalent to Hopper output.; External functions and functions without an analyzable body return null; other decompiler failures remain explicit.
// pseudocode: provider-specific; not original source


/* WARNING: Function: __EH_prolog3_GS replaced with injection: EH_prolog3 */
/* Library Function - Single Match
    protected: void __thiscall CMFCMenuBar::CalcSysButtonSize(void)
   
   Library: Visual Studio 2015 Release */

void __thiscall CMFCMenuBar::CalcSysButtonSize(CMFCMenuBar *this)

{
  HDC pHVar1;
  int cx;
  int cy;
  HBITMAP pHVar2;
  void *pvVar3;
  CWindowDC local_54 [4];
  HDC local_50;
  CDC local_40 [4];
  HDC__ *local_3c;
  CGdiObject *local_30;
  undefined **local_2c;
  void *local_28;
  tagRECT local_24;
  undefined4 local_8;
  undefined4 uStack_4;
  
  uStack_4 = 0x44;
  local_8 = 0x100edbcb;
  CWindowDC::CWindowDC(local_54,(CWnd *)0x0);
  local_8 = 0;
  CDC::CDC(local_40);
  local_8._0_1_ = 1;
  pHVar1 = CreateCompatibleDC((HDC)0x0);
  CDC::Attach(local_40,pHVar1);
  cx = GetSystemMetrics(0x36);
  cy = GetSystemMetrics(0x36);
  local_28 = (void *)0x0;
  local_2c = CBitmap::vftable;
  local_8 = CONCAT31(local_8._1_3_,2);
  pHVar2 = CreateCompatibleBitmap(local_50,cx,cy);
  CMenu::Attach((CMenu *)&local_2c,(HMENU__ *)pHVar2);
  local_30 = CDC::SelectGdiObject(local_3c,local_28);
  local_24.left = 0;
  local_24.top = 0;
  local_24.right = cx;
  local_24.bottom = cy;
  DrawFrameControl(local_3c,&local_24,1,0x2000);
  *(LONG *)(this + 0xd80) = local_24.bottom - local_24.top;
  *(LONG *)(this + 0xd7c) = local_24.right - local_24.left;
  pvVar3 = (void *)0x0;
  if (local_30 != (CGdiObject *)0x0) {
    pvVar3 = *(void **)(local_30 + 4);
  }
  CDC::SelectGdiObject(local_3c,pvVar3);
  local_2c = CBitmap::vftable;
  CImageList::~CImageList((CImageList *)&local_2c);
  CDC::~CDC(local_40);
  CWindowDC::~CWindowDC(local_54);
  FUN_101490fe();
  return;
}

