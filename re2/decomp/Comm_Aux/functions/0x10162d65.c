// rea decompile_all
// name: CSmartDockingGroupGuidesManager::Create
// address: 0x10162d65
// body: available
// range: 0x10162d65-0x10162f95 inclusive
// non_contiguous: false
// provider: Ghidra 12.1.2 (ghidra)
// analysis_profile: b075844f08879296d957518397cd0ddda73db81dce53d00d3f0e702766fc2af6
// limitations: The session serves operations only after Ghidra reports default auto-analysis complete; incomplete analysis does not expose partial results.; The imported Program and temporary project are ephemeral and deleted on close. Annotation operations edit session database metadata; original executable bytes are never written.; Cancelling an active Ghidra request terminates its ephemeral database and discards session annotations. The selected target remains open; the next provider query imports the original artifact again.; Default-space addresses use lowercase 0x-prefixed hexadecimal; other address spaces use <percent-encoded-space>:0x<hex>.; The Ghidra Program references PDB Comm_Aux.pdb (GUID ba7920cc-daa3-4461-a102-1f8f66c67a2a, age (hex) 1, signature unknown, version RSDS); Ghidra reports load state unknown. Original names and types may be missing; an empty name search does not prove a procedure is absent. Use list_procedures and address-based analysis to inspect recovered functions. REA does not admit a caller-selected PDB companion.; This session uses Ghidra 12.1.2. The bridge is verified against 12.1.4; other 12.1.x builds are accepted and the observed version is reported.; Pseudocode is Ghidra decompiler output, not original source and not text-equivalent to Hopper output.; External functions and functions without an analyzable body return null; other decompiler failures remain explicit.
// pseudocode: provider-specific; not original source


/* WARNING: Function: __EH_prolog3_GS replaced with injection: EH_prolog3 */
/* Library Function - Single Match
    public: virtual void __thiscall CSmartDockingGroupGuidesManager::Create(class CWnd *)
   
   Library: Visual Studio 2015 Release */

void __thiscall
CSmartDockingGroupGuidesManager::Create(CSmartDockingGroupGuidesManager *this,CWnd *param_1)

{
  CWnd *this_00;
  CMFCToolBarImages *this_01;
  code *pcVar1;
  HRGN pHVar2;
  AFX_SMARTDOCK_THEME AVar3;
  uint uVar4;
  char *pcVar5;
  int iVar6;
  HWND__ *pHVar7;
  AFX_GLOBAL_DATA *this_02;
  CSmartDockingGroupGuidesManager *pCVar8;
  undefined *puVar9;
  undefined4 uVar10;
  tagRECT *ptVar11;
  ulong uVar12;
  uchar uVar13;
  undefined4 uVar14;
  undefined4 uVar15;
  ulong uVar16;
  int local_60;
  undefined **local_5c;
  HRGN local_58;
  tagRECT local_54;
  tagRECT local_44;
  POINT local_34;
  int local_2c;
  int local_28;
  int local_24;
  int local_20;
  int local_1c;
  int local_18;
  undefined4 local_8;
  undefined4 uStack_4;
  
  uStack_4 = 0x58;
  local_8 = 0x10162d71;
  if (*(int *)(this + 0x1138) != 0) goto LAB_10162f8e;
  local_58 = (HRGN)0x0;
  local_5c = CRgn::vftable;
  local_8 = 0;
  pHVar2 = CreateRectRgn(0,0,0,0);
  CMenu::Attach((CMenu *)&local_5c,(HMENU__ *)pHVar2);
  local_60 = 4;
  pCVar8 = this + 0xa0;
  do {
    pcVar1 = *(code **)(*(int *)pCVar8 + 0x28);
    guard_check_icall(local_60,this);
    (*pcVar1)();
    CRgn::CombineRgn((CRgn *)&local_5c,(CRgn *)&local_5c,(CRgn *)(pCVar8 + 0x2d0),2);
    pCVar8 = pCVar8 + 0x318;
    local_60 = local_60 + 1;
  } while (local_60 < 9);
  uVar4 = DAT_1020fdbc;
  if (DAT_1020fdbc == 0) {
    AVar3 = GetVMTheme();
    if (AVar3 == 2) {
      uVar4 = 0x42e7;
      goto LAB_10162e07;
    }
  }
  else {
LAB_10162e07:
    *(undefined4 *)(this + 0x1050) = 1;
    this_01 = (CMFCToolBarImages *)(this + 0x1018);
    *(undefined4 *)(this + 0x104c) = 0;
    CMFCToolBarImages::Load(this_01,uVar4,(HINSTANCE__ *)0x0,0);
    CMFCToolBarImages::SetSingleImage(this_01);
    CMFCToolBarImages::SetTransparentColor(this_01,DAT_1020fd80);
  }
  local_44.left = 0;
  local_44.top = 0;
  local_44.right = 0;
  local_44.bottom = 0;
  GetRgnBox(local_58,&local_44);
  InflateRect(&local_44,-DAT_1020fd7c,-DAT_1020fd7c);
  local_34.x = local_44.left;
  local_28 = local_44.bottom;
  local_34.y = (local_44.top + local_44.bottom) / 2;
  local_2c = (local_44.right + local_44.left) / 2;
  local_18 = local_44.top;
  local_24 = local_44.right;
  local_20 = local_34.y;
  local_1c = local_2c;
  pHVar2 = CreatePolygonRgn(&local_34,4,1);
  CMenu::Attach((CMenu *)(this + 0x1130),(HMENU__ *)pHVar2);
  CRgn::CombineRgn((CRgn *)&local_5c,(CRgn *)&local_5c,(CRgn *)(this + 0x1130),2);
  local_54.left = 0;
  local_54.top = 0;
  local_54.right = 0;
  local_54.bottom = 0;
  GetRgnBox(local_58,&local_54);
  uVar15 = 0;
  uVar14 = 0;
  ptVar11 = &local_54;
  uVar10 = 0x80000000;
  this_00 = (CWnd *)(this + 8);
  iVar6 = *(int *)this_00;
  puVar9 = &DAT_101e24d0;
  pcVar5 = GetSmartDockingWndClassName<2080>();
  guard_check_icall(8,pcVar5,puVar9,uVar10,ptVar11,param_1,uVar14,uVar15);
  iVar6 = (**(code **)(iVar6 + 0x58))();
  if (iVar6 != 0) {
    *(CSmartDockingGroupGuidesManager **)(this + 0x88) = this;
    CWnd::ModifyStyleEx(this_00,0,0x80000,0);
    if ((DAT_1020fdc4 == 0) && (AVar3 = GetVMTheme(), AVar3 != 2)) {
      pHVar7 = (HWND__ *)0x0;
      if (this_00 != (CWnd *)0x0) {
        pHVar7 = *(HWND__ **)(this + 0x28);
      }
      uVar16 = 1;
      uVar13 = '\0';
      uVar12 = DAT_1020fd80;
      this_02 = GetGlobalData();
      AFX_GLOBAL_DATA::SetLayeredAttrib(this_02,pHVar7,uVar12,uVar13,uVar16);
    }
    else {
      CSmartDockingGroupGuidesWnd::Update((CSmartDockingGroupGuidesWnd *)this_00);
    }
    *(undefined4 *)(this + 0x1140) = 1;
    *(undefined4 *)(this + 0x1138) = 1;
  }
  local_5c = CRgn::vftable;
  CImageList::~CImageList((CImageList *)&local_5c);
LAB_10162f8e:
  FUN_1017f5f4();
  return;
}

