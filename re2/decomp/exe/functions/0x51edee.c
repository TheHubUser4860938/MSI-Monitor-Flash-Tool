// rea decompile_all
// name: CMFCColorDialog::OnInitDialog
// address: 0x51edee
// body: available
// range: 0x51edee-0x51f160 inclusive
// non_contiguous: false
// provider: Ghidra 12.1.2 (ghidra)
// analysis_profile: ac6d50be2cdf54f7005df47d1ed7e7ef55dee595681eb1b7c2e0b00d70cd697d
// limitations: The session serves operations only after Ghidra reports default auto-analysis complete; incomplete analysis does not expose partial results.; The imported Program and temporary project are ephemeral and deleted on close. Annotation operations edit session database metadata; original executable bytes are never written.; Cancelling an active Ghidra request terminates its ephemeral database and discards session annotations. The selected target remains open; the next provider query imports the original artifact again.; Default-space addresses use lowercase 0x-prefixed hexadecimal; other address spaces use <percent-encoded-space>:0x<hex>.; Ghidra Listing reports a terminal call at 0x51ef2b to 0x429127 FUN_00429127 (external=false, thunk=false, hasNoReturn=true); fallthrough is excluded by Ghidra's flow model. This records Ghidra's FunctionManager flag, not an independent verification that the callee cannot return.; The Ghidra Program references PDB ISPToolForMsi.pdb (GUID b8f2ac8f-1d6f-438d-800f-ed4a14426ac6, age (hex) 1, signature unknown, version RSDS); Ghidra reports load state unknown. Original names and types may be missing; an empty name search does not prove a procedure is absent. Use list_procedures and address-based analysis to inspect recovered functions. REA does not admit a caller-selected PDB companion.; This session uses Ghidra 12.1.2. The bridge is verified against 12.1.4; other 12.1.x builds are accepted and the observed version is reported.; Pseudocode is Ghidra decompiler output, not original source and not text-equivalent to Hopper output.; External functions and functions without an analyzable body return null; other decompiler failures remain explicit.
// pseudocode: provider-specific; not original source


/* WARNING: Function: __EH_prolog3_GS replaced with injection: EH_prolog3 */
/* Library Function - Single Match
    protected: virtual int __thiscall CMFCColorDialog::OnInitDialog(void)
   
   Library: Visual Studio 2015 Release */

int __thiscall CMFCColorDialog::OnInitDialog(CMFCColorDialog *this)

{
  CMFCColorPickerCtrl *this_00;
  code *pcVar1;
  CWnd *pCVar2;
  ulong uVar3;
  AFX_GLOBAL_DATA *pAVar4;
  int iVar5;
  CMFCCustomColorsPropertyPage *pCVar6;
  undefined4 uVar7;
  AFX_MODULE_STATE *pAVar8;
  HCURSOR pHVar9;
  undefined **local_128 [45];
  undefined4 local_74;
  CMFCCustomColorsPropertyPage *local_58;
  tagRECT local_54;
  tagRECT local_44;
  tagRECT local_34;
  tagRECT local_24;
  undefined4 local_8;
  undefined4 uStack_4;
  
  uStack_4 = 0x118;
  local_8 = 0x51edfd;
  CDialog::OnInitDialog((CDialog *)this);
  pCVar2 = AfxGetMainWnd();
  if (pCVar2 != (CWnd *)0x0) {
    pCVar2 = AfxGetMainWnd();
    uVar3 = CWnd::GetExStyle(pCVar2);
    if ((uVar3 & 0x400000) != 0) {
      CWnd::ModifyStyleEx((CWnd *)this,0,0x400000,0);
    }
  }
  pAVar4 = GetGlobalData();
  if (*(int *)(pAVar4 + 0x1ac) < 8) {
    CColorDialog::CColorDialog((CColorDialog *)local_128,*(ulong *)(this + 0xe0),0x102,(CWnd *)0x0);
    local_8 = 0;
    iVar5 = CColorDialog::DoModal((CColorDialog *)local_128);
    *(undefined4 *)(this + 0xe4) = local_74;
    CDialog::EndDialog((CDialog *)this,iVar5);
    local_128[0] = CCommonDialog::vftable;
    CDialog::~CDialog((CDialog *)local_128);
  }
  else {
    if (*(int *)(this + 0xdc) == 0) {
      local_58 = (CMFCCustomColorsPropertyPage *)FUN_00416408(8);
      if (local_58 == (CMFCCustomColorsPropertyPage *)0x0) {
        pCVar6 = (CMFCCustomColorsPropertyPage *)0x0;
      }
      else {
        *(undefined4 *)(local_58 + 4) = 0;
        *(undefined ***)local_58 = CPalette::vftable;
        pCVar6 = local_58;
      }
      *(CMFCCustomColorsPropertyPage **)(this + 0xdc) = pCVar6;
      RebuildPalette(this);
    }
    this_00 = (CMFCColorPickerCtrl *)(this + 0x920);
    CMFCColorPickerCtrl::SetType(this_00,0);
    CMFCColorPickerCtrl::SetPalette(this_00,*(CPalette **)(this + 0xdc));
    CMFCColorPickerCtrl::SetOriginalColor(this_00,*(ulong *)(this + 0xe0));
    CMFCColorPickerCtrl::SetColor(this_00,*(ulong *)(this + 0xe4));
    local_58 = (CMFCCustomColorsPropertyPage *)FUN_00416408(0xe8);
    local_8 = 1;
    if (local_58 == (CMFCCustomColorsPropertyPage *)0x0) {
      iVar5 = 0;
    }
    else {
      iVar5 = CMFCColorPropertySheet(&PTR_005e8934,this,0);
    }
    local_8 = 0xffffffff;
    *(int *)(this + 0xd0) = iVar5;
    if (iVar5 == 0) {
                    /* WARNING: Subroutine does not return */
      FUN_00429127();
    }
    local_58 = (CMFCCustomColorsPropertyPage *)FUN_00416408(0x270);
    local_8 = 2;
    if (local_58 == (CMFCCustomColorsPropertyPage *)0x0) {
      uVar7 = 0;
    }
    else {
      uVar7 = CMFCStandardColorsPropertyPage::CMFCStandardColorsPropertyPage
                        ((CMFCStandardColorsPropertyPage *)local_58);
    }
    local_8 = 0xffffffff;
    *(undefined4 *)(this + 0xd4) = uVar7;
    local_58 = (CMFCCustomColorsPropertyPage *)FUN_00416408(0x288);
    local_8 = 3;
    if (local_58 == (CMFCCustomColorsPropertyPage *)0x0) {
      uVar7 = 0;
    }
    else {
      uVar7 = CMFCCustomColorsPropertyPage::CMFCCustomColorsPropertyPage(local_58);
    }
    local_8 = 0xffffffff;
    *(undefined4 *)(this + 0xd8) = uVar7;
    *(CMFCColorDialog **)(*(int *)(this + 0xd4) + 0xc0) = this;
    *(CMFCColorDialog **)(*(int *)(this + 0xd8) + 0xc0) = this;
    FUN_004d0a88(*(undefined4 *)(this + 0xd4));
    FUN_004d0a88(*(undefined4 *)(this + 0xd8));
    local_24.left = 0;
    local_24.top = 0;
    local_24.right = 0;
    local_24.bottom = 0;
    GetWindowRect(*(HWND *)(this + 0x8c0),&local_24);
    CWnd::ScreenToClient((CWnd *)this,&local_24);
    pcVar1 = *(code **)(**(int **)(this + 0xd0) + 0x164);
    guard_check_icall(this,0x54000000,0);
    (*pcVar1)();
    CPropertySheet::SetActivePage(*(CPropertySheet **)(this + 0xd0),0);
    local_54.left = 0;
    local_54.top = 0;
    local_54.right = 0;
    local_54.bottom = 0;
    GetWindowRect(*(HWND *)(*(int *)(this + 0xd0) + 0x20),&local_54);
    CWnd::SetWindowPos(*(CWnd **)(this + 0xd0),(CWnd *)0x0,local_24.left,local_24.top,
                       local_24.right - local_24.left,local_24.bottom - local_24.top,0x14);
    SetPageOne(this,(uchar)this[0xe0],(uchar)this[0xe1],(uchar)this[0xe2]);
    CMFCCustomColorsPropertyPage::Setup
              (*(CMFCCustomColorsPropertyPage **)(this + 0xd8),(uchar)this[0xe0],(uchar)this[0xe1],
               (uchar)this[0xe2]);
    CMFCButton::SetImage((CMFCButton *)(this + 0xf8),0x4296,0,0);
    local_44.left = 0;
    local_44.top = 0;
    local_44.right = 0;
    local_44.bottom = 0;
    GetWindowRect(*(HWND *)(*(int *)(this + 0xd0) + 0x20),&local_44);
    iVar5 = ((local_44.top - local_44.bottom) - local_54.top) + local_54.bottom;
    if (0 < iVar5) {
      local_34.left = 0;
      local_34.top = 0;
      local_34.right = 0;
      local_34.bottom = 0;
      GetWindowRect(*(HWND *)(this + 0x20),&local_34);
      CWnd::SetWindowPos((CWnd *)this,(CWnd *)0x0,-1,-1,local_34.right - local_34.left,
                         (local_34.bottom - local_34.top) + iVar5,0x16);
      CWnd::SetWindowPos(*(CWnd **)(this + 0xd0),(CWnd *)0x0,-1,-1,local_24.right - local_24.left,
                         (local_24.bottom - local_24.top) + iVar5,0x16);
    }
    AfxGetModuleState();
    pAVar8 = AfxGetModuleState();
    pHVar9 = LoadCursorW(*(HINSTANCE *)(pAVar8 + 0xc),(LPCWSTR)0x3f11);
    *(HCURSOR *)(this + 0xe8) = pHVar9;
  }
  iVar5 = FUN_0055bae6();
  return iVar5;
}

