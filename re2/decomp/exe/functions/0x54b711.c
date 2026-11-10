// rea decompile_all
// name: CSmartDockingStandaloneGuide::InitImages
// address: 0x54b711
// body: available
// range: 0x54b711-0x54b8bf inclusive
// non_contiguous: false
// provider: Ghidra 12.1.2 (ghidra)
// analysis_profile: ac6d50be2cdf54f7005df47d1ed7e7ef55dee595681eb1b7c2e0b00d70cd697d
// limitations: The session serves operations only after Ghidra reports default auto-analysis complete; incomplete analysis does not expose partial results.; The imported Program and temporary project are ephemeral and deleted on close. Annotation operations edit session database metadata; original executable bytes are never written.; Cancelling an active Ghidra request terminates its ephemeral database and discards session annotations. The selected target remains open; the next provider query imports the original artifact again.; Default-space addresses use lowercase 0x-prefixed hexadecimal; other address spaces use <percent-encoded-space>:0x<hex>.; The Ghidra Program references PDB ISPToolForMsi.pdb (GUID b8f2ac8f-1d6f-438d-800f-ed4a14426ac6, age (hex) 1, signature unknown, version RSDS); Ghidra reports load state unknown. Original names and types may be missing; an empty name search does not prove a procedure is absent. Use list_procedures and address-based analysis to inspect recovered functions. REA does not admit a caller-selected PDB companion.; This session uses Ghidra 12.1.2. The bridge is verified against 12.1.4; other 12.1.x builds are accepted and the observed version is reported.; Pseudocode is Ghidra decompiler output, not original source and not text-equivalent to Hopper output.; External functions and functions without an analyzable body return null; other decompiler failures remain explicit.
// pseudocode: provider-specific; not original source


/* Library Function - Single Match
    protected: virtual void __thiscall CSmartDockingStandaloneGuide::InitImages(class
   CSmartDockingInfo &)
   
   Library: Visual Studio 2015 Release */

void __thiscall
CSmartDockingStandaloneGuide::InitImages
          (CSmartDockingStandaloneGuide *this,CSmartDockingInfo *param_1)

{
  CMFCToolBarImages *pCVar1;
  code *pcVar2;
  HWND hwnd;
  AFX_SMARTDOCK_THEME AVar3;
  CMFCVisualManager *pCVar4;
  HBITMAP__ *pHVar5;
  uint uVar6;
  int iVar7;
  uint local_8;
  
  FUN_0044ad0b();
  *(undefined4 *)(this + 0xb0) = 0xffffffff;
  FUN_0044ad0b();
  switch(*(undefined4 *)(this + 4)) {
  case 0:
  case 4:
    iVar7 = 0;
    break;
  case 1:
  case 5:
    iVar7 = 1;
    break;
  case 2:
  case 6:
    iVar7 = 2;
    break;
  case 3:
  case 7:
    iVar7 = 3;
    break;
  case 8:
    iVar7 = 4;
    break;
  default:
    goto switchD_0054b743_default;
  }
  local_8 = *(uint *)(param_1 + iVar7 * 4 + 0x38);
  uVar6 = *(uint *)(param_1 + iVar7 * 4 + 0x24);
  *(uint *)(this + 0x2e8) = (uint)(uVar6 == 0);
  if ((uVar6 == 0) != 0) {
    AVar3 = GetVMTheme();
    if (AVar3 == 1) {
      uVar6 = *(uint *)(iVar7 * 4 + 0x60ccc8);
    }
    else if (AVar3 == 2) {
      local_8 = *(uint *)(iVar7 * 4 + 0x60ccf0);
      uVar6 = *(uint *)(iVar7 * 4 + 0x60ccdc);
    }
  }
  pCVar1 = (CMFCToolBarImages *)(this + 0xa0);
  *(undefined4 *)(this + 0xd4) = 0;
  *(uint *)(this + 0xd8) = (uint)(local_8 == 0);
  CMFCToolBarImages::Load(pCVar1,uVar6,(HINSTANCE__ *)0x0,0);
  CMFCToolBarImages::SetSingleImage(pCVar1);
  CMFCToolBarImages::SetTransparentColor(pCVar1,*(ulong *)(param_1 + 0x10));
  if (local_8 != 0) {
    pCVar1 = (CMFCToolBarImages *)(this + 0x1b8);
    *(undefined4 *)(this + 0x1ec) = 0;
    CMFCToolBarImages::Load(pCVar1,local_8,(HINSTANCE__ *)0x0,0);
    CMFCToolBarImages::SetSingleImage(pCVar1);
    CMFCToolBarImages::SetTransparentColor(pCVar1,*(ulong *)(param_1 + 0x10));
  }
  if (*(int *)(this + 0x2e8) == 0) {
    local_8 = *(uint *)(param_1 + 0x14);
LAB_0054b857:
    iVar7 = *(int *)(param_1 + 0x18);
  }
  else {
    local_8 = -1;
    if (*(int *)(param_1 + 0x18) != -1) goto LAB_0054b857;
    pCVar4 = CMFCVisualManager::GetInstance();
    pcVar2 = *(code **)(*(int *)pCVar4 + 0x1d4);
    guard_check_icall();
    iVar7 = (*pcVar2)();
  }
  if ((local_8 != -1) && (iVar7 != -1)) {
    FUN_0044a1b8(local_8,iVar7);
  }
  if (((CSmartDockingStandaloneGuideWnd *)(this + 8) != (CSmartDockingStandaloneGuideWnd *)0x0) &&
     (hwnd = *(HWND *)(this + 0x28), hwnd != (HWND)0x0)) {
    pHVar5 = *(HBITMAP__ **)(this + 0x130);
    if (pHVar5 == (HBITMAP__ *)0x0) {
      pHVar5 = *(HBITMAP__ **)(this + 300);
    }
    CSmartDockingStandaloneGuideWnd::Assign((CSmartDockingStandaloneGuideWnd *)(this + 8),pHVar5,0);
    if ((*(int *)(param_1 + 0x54) == 0) && (AVar3 = GetVMTheme(), AVar3 != 2)) {
      SetLayeredWindowAttributes(hwnd,*(COLORREF *)(param_1 + 0x10),'\0',1);
    }
  }
switchD_0054b743_default:
  return;
}

