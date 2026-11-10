// rea decompile_all
// name: CMFCToolBar::InvalidateButton
// address: 0x453940
// body: available
// range: 0x453940-0x453a2d inclusive
// non_contiguous: false
// provider: Ghidra 12.1.2 (ghidra)
// analysis_profile: ac6d50be2cdf54f7005df47d1ed7e7ef55dee595681eb1b7c2e0b00d70cd697d
// limitations: The session serves operations only after Ghidra reports default auto-analysis complete; incomplete analysis does not expose partial results.; The imported Program and temporary project are ephemeral and deleted on close. Annotation operations edit session database metadata; original executable bytes are never written.; Cancelling an active Ghidra request terminates its ephemeral database and discards session annotations. The selected target remains open; the next provider query imports the original artifact again.; Default-space addresses use lowercase 0x-prefixed hexadecimal; other address spaces use <percent-encoded-space>:0x<hex>.; The Ghidra Program references PDB ISPToolForMsi.pdb (GUID b8f2ac8f-1d6f-438d-800f-ed4a14426ac6, age (hex) 1, signature unknown, version RSDS); Ghidra reports load state unknown. Original names and types may be missing; an empty name search does not prove a procedure is absent. Use list_procedures and address-based analysis to inspect recovered functions. REA does not admit a caller-selected PDB companion.; This session uses Ghidra 12.1.2. The bridge is verified against 12.1.4; other 12.1.x builds are accepted and the observed version is reported.; Pseudocode is Ghidra decompiler output, not original source and not text-equivalent to Hopper output.; External functions and functions without an analyzable body return null; other decompiler failures remain explicit.
// pseudocode: provider-specific; not original source


/* Library Function - Single Match
    public: class CMFCToolBarButton * __thiscall CMFCToolBar::InvalidateButton(int)
   
   Library: Visual Studio 2015 Release */

CMFCToolBarButton * __thiscall CMFCToolBar::InvalidateButton(CMFCToolBar *this,int param_1)

{
  code *pcVar1;
  CMFCCustomizeButton *this_00;
  tagSIZE tVar2;
  CMFCCustomizeButton *pCVar3;
  CSize *this_01;
  int iVar4;
  int *piVar5;
  CMFCToolBarButton *pCVar6;
  LONG LVar7;
  LONG LVar8;
  RECT local_18;
  uint local_8;
  
  local_8 = DAT_0060cff4 ^ (uint)&stack0xfffffffc;
  if ((-1 < param_1) && (param_1 < *(int *)(this + 0xc48))) {
    local_18.left = 0;
    local_18.top = 0;
    local_18.right = 0;
    local_18.bottom = 0;
    pcVar1 = *(code **)(*(int *)this + 0x370);
    guard_check_icall(param_1,&local_18);
    (*pcVar1)();
    pCVar3 = (CMFCCustomizeButton *)FUN_00452f94(param_1);
    if ((pCVar3 != (CMFCCustomizeButton *)0x0) &&
       (pCVar3 == *(CMFCCustomizeButton **)(this + 0xd14))) {
      local_18.right = local_18.right + 10;
      local_18.bottom = local_18.bottom + 10;
    }
    InvalidateRect(*(HWND *)(this + 0x20),&local_18,1);
    if ((pCVar3 != (CMFCCustomizeButton *)0x0) &&
       (this_00 = *(CMFCCustomizeButton **)(this + 0xd14), pCVar3 == this_00)) {
      LVar8 = 0;
      LVar7 = 0;
      this_01 = (CSize *)CMFCCustomizeButton::GetExtraSize(this_00);
      tVar2.cy = LVar8;
      tVar2.cx = LVar7;
      iVar4 = CSize::operator!=(this_01,tVar2);
      if (iVar4 != 0) {
        piVar5 = (int *)CMFCCustomizeButton::GetExtraSize(this_00);
        InflateRect(&local_18,*piVar5,piVar5[1]);
        RedrawWindow(*(HWND *)(this + 0x20),&local_18,(HRGN)0x0,0x401);
      }
    }
  }
  pCVar6 = (CMFCToolBarButton *)__security_check_cookie(local_8 ^ (uint)&stack0xfffffffc);
  return pCVar6;
}

