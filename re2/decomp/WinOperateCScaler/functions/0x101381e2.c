// rea decompile_all
// name: CSmartDockingStandaloneGuide::Create
// address: 0x101381e2
// body: available
// range: 0x101381e2-0x10138322 inclusive
// non_contiguous: false
// provider: Ghidra 12.1.2 (ghidra)
// analysis_profile: b075844f08879296d957518397cd0ddda73db81dce53d00d3f0e702766fc2af6
// limitations: The session serves operations only after Ghidra reports default auto-analysis complete; incomplete analysis does not expose partial results.; The imported Program and temporary project are ephemeral and deleted on close. Annotation operations edit session database metadata; original executable bytes are never written.; Cancelling an active Ghidra request terminates its ephemeral database and discards session annotations. The selected target remains open; the next provider query imports the original artifact again.; Default-space addresses use lowercase 0x-prefixed hexadecimal; other address spaces use <percent-encoded-space>:0x<hex>.; The Ghidra Program references PDB WinOperateCScaler.pdb (GUID a6737962-efea-4805-8ae6-1fc1ef126554, age (hex) 1, signature unknown, version RSDS); Ghidra reports load state unknown. Original names and types may be missing; an empty name search does not prove a procedure is absent. Use list_procedures and address-based analysis to inspect recovered functions. REA does not admit a caller-selected PDB companion.; This session uses Ghidra 12.1.2. The bridge is verified against 12.1.4; other 12.1.x builds are accepted and the observed version is reported.; Pseudocode is Ghidra decompiler output, not original source and not text-equivalent to Hopper output.; External functions and functions without an analyzable body return null; other decompiler failures remain explicit.
// pseudocode: provider-specific; not original source


/* Library Function - Single Match
    public: virtual void __thiscall CSmartDockingStandaloneGuide::Create(enum
   CSmartDockingStandaloneGuide::SDMarkerPlace,class CWnd *)
   
   Library: Visual Studio 2015 Release */

void __thiscall
CSmartDockingStandaloneGuide::Create
          (CSmartDockingStandaloneGuide *this,SDMarkerPlace param_1,CWnd *param_2)

{
  CSmartDockingStandaloneGuideWnd *this_00;
  code *pcVar1;
  bool bVar2;
  AFX_SMARTDOCK_THEME AVar3;
  HRGN__ *pHVar4;
  int iVar5;
  HWND__ *pHVar6;
  AFX_GLOBAL_DATA *this_01;
  HBITMAP__ *pHVar7;
  ulong uVar8;
  uchar uVar9;
  ulong uVar10;
  tagRECT local_18;
  uint local_8;
  
  local_8 = DAT_10201fec ^ (uint)&stack0xfffffffc;
  *(SDMarkerPlace *)(this + 4) = param_1;
  if (DAT_1020b5b4 == 0) {
    AVar3 = GetVMTheme();
    if (AVar3 != 2) {
      bVar2 = false;
      goto LAB_1013821d;
    }
  }
  bVar2 = true;
LAB_1013821d:
  pcVar1 = *(code **)(*(int *)this + 0x24);
  guard_check_icall(&DAT_1020b560);
  (*pcVar1)();
  pHVar4 = CMFCToolBarImages::CreateRegionFromImage(*(HBITMAP__ **)(this + 300),DAT_1020b570);
  CMenu::Attach((CMenu *)(this + 0x2d0),(HMENU__ *)pHVar4);
  local_18.left = 0;
  local_18.top = 0;
  local_18.right = 0;
  local_18.bottom = 0;
  GetRgnBox(*(HRGN *)(this + 0x2d4),&local_18);
  pHVar7 = *(HBITMAP__ **)(this + 0x130);
  *(LONG *)(this + 0x2d8) = local_18.right - local_18.left;
  *(LONG *)(this + 0x2dc) = local_18.bottom - local_18.top;
  if (pHVar7 == (HBITMAP__ *)0x0) {
    pHVar7 = *(HBITMAP__ **)(this + 300);
  }
  if ((*(int *)(this + 4) == 2) || (*(int *)(this + 4) == 3)) {
    iVar5 = 1;
  }
  else {
    iVar5 = 0;
  }
  this_00 = (CSmartDockingStandaloneGuideWnd *)(this + 8);
  CSmartDockingStandaloneGuideWnd::Create
            (this_00,&local_18,pHVar7,(HRGN__ *)0x0,param_2,*(int *)(this + 0x2e8),iVar5);
  CWnd::ModifyStyleEx((CWnd *)this_00,0,0x80000,0);
  if (!bVar2) {
    if (this_00 == (CSmartDockingStandaloneGuideWnd *)0x0) {
      pHVar6 = (HWND__ *)0x0;
    }
    else {
      pHVar6 = *(HWND__ **)(this + 0x28);
    }
    uVar10 = 1;
    uVar9 = '\0';
    uVar8 = DAT_1020b570;
    this_01 = GetGlobalData();
    AFX_GLOBAL_DATA::SetLayeredAttrib(this_01,pHVar6,uVar8,uVar9,uVar10);
  }
  *(undefined4 *)(this + 0x2e4) = 1;
  CWnd::ModifyStyleEx((CWnd *)this_00,0,8,0);
  __security_check_cookie(local_8 ^ (uint)&stack0xfffffffc);
  return;
}

