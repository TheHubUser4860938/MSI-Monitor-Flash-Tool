// rea decompile_all
// name: CSmartDockingGroupGuidesWnd::Update
// address: 0x10164ccd
// body: available
// range: 0x10164ccd-0x10164e29 inclusive
// non_contiguous: false
// provider: Ghidra 12.1.2 (ghidra)
// analysis_profile: b075844f08879296d957518397cd0ddda73db81dce53d00d3f0e702766fc2af6
// limitations: The session serves operations only after Ghidra reports default auto-analysis complete; incomplete analysis does not expose partial results.; The imported Program and temporary project are ephemeral and deleted on close. Annotation operations edit session database metadata; original executable bytes are never written.; Cancelling an active Ghidra request terminates its ephemeral database and discards session annotations. The selected target remains open; the next provider query imports the original artifact again.; Default-space addresses use lowercase 0x-prefixed hexadecimal; other address spaces use <percent-encoded-space>:0x<hex>.; The Ghidra Program references PDB WinIspPlugIn.pdb (GUID d9f398c7-6c98-49a8-af25-a0659d5ad2f3, age (hex) 1, signature unknown, version RSDS); Ghidra reports load state unknown. Original names and types may be missing; an empty name search does not prove a procedure is absent. Use list_procedures and address-based analysis to inspect recovered functions. REA does not admit a caller-selected PDB companion.; This session uses Ghidra 12.1.2. The bridge is verified against 12.1.4; other 12.1.x builds are accepted and the observed version is reported.; Pseudocode is Ghidra decompiler output, not original source and not text-equivalent to Hopper output.; External functions and functions without an analyzable body return null; other decompiler failures remain explicit.
// pseudocode: provider-specific; not original source


/* WARNING: Function: __EH_prolog3_GS replaced with injection: EH_prolog3 */
/* Library Function - Single Match
    public: void __thiscall CSmartDockingGroupGuidesWnd::Update(void)
   
   Library: Visual Studio 2015 Release */

void __thiscall CSmartDockingGroupGuidesWnd::Update(CSmartDockingGroupGuidesWnd *this)

{
  CSmartDockingGroupGuidesWnd *pCVar1;
  AFX_SMARTDOCK_THEME AVar2;
  HBITMAP__ *pHVar3;
  HDC pHVar4;
  void *pvVar5;
  CClientDC local_70 [4];
  HDC local_6c;
  POINT local_5c;
  CDC local_54 [4];
  HDC__ *local_50;
  SIZE local_44;
  CGdiObject *local_3c;
  CSmartDockingGroupGuidesWnd *local_38;
  void *local_34;
  undefined **local_30;
  void *local_2c;
  BLENDFUNCTION local_28;
  tagRECT local_24;
  undefined4 local_8;
  undefined4 uStack_4;
  
  uStack_4 = 0x60;
  local_8 = 0x10164cd9;
  local_38 = this;
  if (DAT_1024756c == 0) {
    AVar2 = GetVMTheme();
    if (AVar2 != 2) {
      RedrawWindow(*(HWND *)(this + 0x20),(RECT *)0x0,(HRGN)0x0,0x105);
      goto LAB_10164e24;
    }
  }
  pvVar5 = (void *)0x0;
  local_24.left = 0;
  local_24.top = 0;
  local_24.right = 0;
  local_24.bottom = 0;
  GetClientRect(*(HWND *)(this + 0x20),&local_24);
  local_44.cx = local_24.right - local_24.left;
  local_44.cy = local_24.bottom - local_24.top;
  local_5c.x = 0;
  local_5c.y = 0;
  local_34 = (void *)0x0;
  pHVar3 = CDrawingManager::CreateBitmap_32((CSize *)&local_44,&local_34);
  if (pHVar3 != (HBITMAP__ *)0x0) {
    local_2c = (void *)0x0;
    local_30 = CBitmap::vftable;
    local_8 = 0;
    CMenu::Attach((CMenu *)&local_30,(HMENU__ *)pHVar3);
    CClientDC::CClientDC(local_70,(CWnd *)this);
    local_8._0_1_ = 1;
    CDC::CDC(local_54);
    local_8 = CONCAT31(local_8._1_3_,2);
    pHVar4 = CreateCompatibleDC(local_6c);
    CDC::Attach(local_54,pHVar4);
    local_3c = CDC::SelectGdiObject(local_50,local_2c);
    pCVar1 = local_38;
    CSmartDockingGroupGuidesManager::DrawCentralGroupGuides
              (*(CSmartDockingGroupGuidesManager **)(local_38 + 0x80),local_54,local_38 + 0x84,
               local_38 + 0x8c,local_24.left,local_24.top,local_24.right,local_24.bottom);
    local_28.BlendOp = '\0';
    local_28.BlendFlags = '\0';
    local_28.SourceConstantAlpha = 0xff;
    local_28.AlphaFormat = '\x01';
    UpdateLayeredWindow(*(HWND *)(pCVar1 + 0x20),(HDC)0x0,(POINT *)0x0,&local_44,local_50,&local_5c,
                        0,&local_28,2);
    if (local_3c != (CGdiObject *)0x0) {
      pvVar5 = *(void **)(local_3c + 4);
    }
    CDC::SelectGdiObject(local_50,pvVar5);
    CDC::~CDC(local_54);
    CClientDC::~CClientDC(local_70);
    local_30 = CBitmap::vftable;
    CImageList::~CImageList((CImageList *)&local_30);
  }
LAB_10164e24:
  FUN_1018015d();
  return;
}

