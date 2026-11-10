// rea decompile_all
// name: CSmartDockingStandaloneGuideWnd::UpdateLayered
// address: 0x10139220
// body: available
// range: 0x10139220-0x10139365 inclusive
// non_contiguous: false
// provider: Ghidra 12.1.2 (ghidra)
// analysis_profile: b075844f08879296d957518397cd0ddda73db81dce53d00d3f0e702766fc2af6
// limitations: The session serves operations only after Ghidra reports default auto-analysis complete; incomplete analysis does not expose partial results.; The imported Program and temporary project are ephemeral and deleted on close. Annotation operations edit session database metadata; original executable bytes are never written.; Cancelling an active Ghidra request terminates its ephemeral database and discards session annotations. The selected target remains open; the next provider query imports the original artifact again.; Default-space addresses use lowercase 0x-prefixed hexadecimal; other address spaces use <percent-encoded-space>:0x<hex>.; The Ghidra Program references PDB WinOperateCScaler.pdb (GUID a6737962-efea-4805-8ae6-1fc1ef126554, age (hex) 1, signature unknown, version RSDS); Ghidra reports load state unknown. Original names and types may be missing; an empty name search does not prove a procedure is absent. Use list_procedures and address-based analysis to inspect recovered functions. REA does not admit a caller-selected PDB companion.; This session uses Ghidra 12.1.2. The bridge is verified against 12.1.4; other 12.1.x builds are accepted and the observed version is reported.; Pseudocode is Ghidra decompiler output, not original source and not text-equivalent to Hopper output.; External functions and functions without an analyzable body return null; other decompiler failures remain explicit.
// pseudocode: provider-specific; not original source


/* WARNING: Function: __EH_prolog3_GS replaced with injection: EH_prolog3 */
/* Library Function - Single Match
    public: void __thiscall CSmartDockingStandaloneGuideWnd::UpdateLayered(void)
   
   Library: Visual Studio 2015 Release */

void __thiscall
CSmartDockingStandaloneGuideWnd::UpdateLayered(CSmartDockingStandaloneGuideWnd *this)

{
  AFX_SMARTDOCK_THEME AVar1;
  HBITMAP__ *pHVar2;
  HDC pHVar3;
  CGdiObject *pCVar4;
  void *pvVar5;
  CClientDC local_68 [4];
  HDC local_64;
  CDC local_54 [4];
  HDC__ *local_50;
  void *local_44;
  POINT local_40;
  undefined **local_38;
  void *local_34;
  SIZE local_30;
  BLENDFUNCTION local_28;
  tagRECT local_24;
  undefined4 local_8;
  undefined4 uStack_4;
  
  uStack_4 = 0x58;
  local_8 = 0x1013922c;
  if (DAT_1020b5b4 == 0) {
    AVar1 = GetVMTheme();
    if (AVar1 != 2) goto LAB_10139360;
  }
  pvVar5 = (void *)0x0;
  local_24.left = 0;
  local_24.top = 0;
  local_24.right = 0;
  local_24.bottom = 0;
  GetClientRect(*(HWND *)(this + 0x20),&local_24);
  local_30.cx = local_24.right - local_24.left;
  local_30.cy = local_24.bottom - local_24.top;
  local_40.x = 0;
  local_40.y = 0;
  local_44 = (void *)0x0;
  pHVar2 = CDrawingManager::CreateBitmap_32((CSize *)&local_30,&local_44);
  if (pHVar2 != (HBITMAP__ *)0x0) {
    local_34 = (void *)0x0;
    local_38 = CBitmap::vftable;
    local_8 = 0;
    CMenu::Attach((CMenu *)&local_38,(HMENU__ *)pHVar2);
    CClientDC::CClientDC(local_68,(CWnd *)this);
    local_8._0_1_ = 1;
    CDC::CDC(local_54);
    local_8 = CONCAT31(local_8._1_3_,2);
    pHVar3 = CreateCompatibleDC(local_64);
    CDC::Attach(local_54,pHVar3);
    pCVar4 = CDC::SelectGdiObject(local_50,local_34);
    CDC::DrawState(local_54,local_40.x,local_40.y,local_30.cx,local_30.cy,
                   *(undefined4 *)(this + 0x80),0,0);
    local_28.BlendOp = '\0';
    local_28.BlendFlags = '\0';
    local_28.AlphaFormat = '\x01';
    local_28.SourceConstantAlpha = ((*(int *)(this + 0x8c) == 0) - 1U & 0x3f) - 0x40;
    UpdateLayeredWindow(*(HWND *)(this + 0x20),(HDC)0x0,(POINT *)0x0,&local_30,local_50,&local_40,0,
                        &local_28,2);
    if (pCVar4 != (CGdiObject *)0x0) {
      pvVar5 = *(void **)(pCVar4 + 4);
    }
    CDC::SelectGdiObject(local_50,pvVar5);
    CDC::~CDC(local_54);
    CClientDC::~CClientDC(local_68);
    local_38 = CBitmap::vftable;
    CImageList::~CImageList((CImageList *)&local_38);
  }
LAB_10139360:
  FUN_10154478();
  return;
}

