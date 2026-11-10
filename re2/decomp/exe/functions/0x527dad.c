// rea decompile_all
// name: CMFCVisualManagerOffice2003::OnHighlightQuickCustomizeMenuButton
// address: 0x527dad
// body: available
// range: 0x527dad-0x527e2d inclusive
// non_contiguous: false
// provider: Ghidra 12.1.2 (ghidra)
// analysis_profile: ac6d50be2cdf54f7005df47d1ed7e7ef55dee595681eb1b7c2e0b00d70cd697d
// limitations: The session serves operations only after Ghidra reports default auto-analysis complete; incomplete analysis does not expose partial results.; The imported Program and temporary project are ephemeral and deleted on close. Annotation operations edit session database metadata; original executable bytes are never written.; Cancelling an active Ghidra request terminates its ephemeral database and discards session annotations. The selected target remains open; the next provider query imports the original artifact again.; Default-space addresses use lowercase 0x-prefixed hexadecimal; other address spaces use <percent-encoded-space>:0x<hex>.; The Ghidra Program references PDB ISPToolForMsi.pdb (GUID b8f2ac8f-1d6f-438d-800f-ed4a14426ac6, age (hex) 1, signature unknown, version RSDS); Ghidra reports load state unknown. Original names and types may be missing; an empty name search does not prove a procedure is absent. Use list_procedures and address-based analysis to inspect recovered functions. REA does not admit a caller-selected PDB companion.; This session uses Ghidra 12.1.2. The bridge is verified against 12.1.4; other 12.1.x builds are accepted and the observed version is reported.; Pseudocode is Ghidra decompiler output, not original source and not text-equivalent to Hopper output.; External functions and functions without an analyzable body return null; other decompiler failures remain explicit.
// pseudocode: provider-specific; not original source


/* Library Function - Single Match
    public: virtual void __thiscall
   CMFCVisualManagerOffice2003::OnHighlightQuickCustomizeMenuButton(class CDC *,class
   CMFCToolBarMenuButton *,class CRect)
   
   Library: Visual Studio 2015 Release */

void __thiscall
CMFCVisualManagerOffice2003::OnHighlightQuickCustomizeMenuButton
          (CMFCVisualManagerOffice2003 *this,CDC *param_1)

{
  AFX_GLOBAL_DATA *this_00;
  int iVar1;
  HBRUSH hbr;
  CMFCVisualManagerOffice2003 *local_c;
  CMFCVisualManagerOffice2003 *local_8;
  
  local_c = this;
  local_8 = this;
  this_00 = GetGlobalData();
  iVar1 = AFX_GLOBAL_DATA::IsHighContrastMode(this_00);
  if (iVar1 == 0) {
    CBrush::CBrush((CBrush *)&local_c,*(ulong *)(this + 0x168));
    FillRect(*(HDC *)(param_1 + 4),(RECT *)&stack0x0000000c,(HBRUSH)local_8);
    local_c = (CMFCVisualManagerOffice2003 *)CBrush::vftable;
    FUN_0040ee80();
  }
  else {
    hbr = (HBRUSH)0x0;
    if (this != (CMFCVisualManagerOffice2003 *)0xffffff04) {
      hbr = *(HBRUSH *)(this + 0x100);
    }
    FillRect(*(HDC *)(param_1 + 4),(RECT *)&stack0x0000000c,hbr);
  }
  CDC::Draw3dRect(param_1,(tagRECT *)&stack0x0000000c,*(ulong *)(this + 0xe4),
                  *(ulong *)(this + 0xe4));
  return;
}

