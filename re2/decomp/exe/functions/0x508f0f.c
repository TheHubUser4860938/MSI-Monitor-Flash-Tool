// rea decompile_all
// name: CMFCToolTipCtrl::OnDrawBorder
// address: 0x508f0f
// body: available
// range: 0x508f0f-0x508ffd inclusive
// non_contiguous: false
// provider: Ghidra 12.1.2 (ghidra)
// analysis_profile: ac6d50be2cdf54f7005df47d1ed7e7ef55dee595681eb1b7c2e0b00d70cd697d
// limitations: The session serves operations only after Ghidra reports default auto-analysis complete; incomplete analysis does not expose partial results.; The imported Program and temporary project are ephemeral and deleted on close. Annotation operations edit session database metadata; original executable bytes are never written.; Cancelling an active Ghidra request terminates its ephemeral database and discards session annotations. The selected target remains open; the next provider query imports the original artifact again.; Default-space addresses use lowercase 0x-prefixed hexadecimal; other address spaces use <percent-encoded-space>:0x<hex>.; The Ghidra Program references PDB ISPToolForMsi.pdb (GUID b8f2ac8f-1d6f-438d-800f-ed4a14426ac6, age (hex) 1, signature unknown, version RSDS); Ghidra reports load state unknown. Original names and types may be missing; an empty name search does not prove a procedure is absent. Use list_procedures and address-based analysis to inspect recovered functions. REA does not admit a caller-selected PDB companion.; This session uses Ghidra 12.1.2. The bridge is verified against 12.1.4; other 12.1.x builds are accepted and the observed version is reported.; Pseudocode is Ghidra decompiler output, not original source and not text-equivalent to Hopper output.; External functions and functions without an analyzable body return null; other decompiler failures remain explicit.
// pseudocode: provider-specific; not original source


/* Library Function - Single Match
    public: virtual void __thiscall CMFCToolTipCtrl::OnDrawBorder(class CDC *,class CRect,unsigned
   long)
   
   Library: Visual Studio 2015 Release */

void __thiscall
CMFCToolTipCtrl::OnDrawBorder
          (CMFCToolTipCtrl *this,CDC *param_1,int param_3,int param_4,int param_5,int param_6,
          ulong param_7)

{
  int iVar1;
  int iVar2;
  CMFCToolTipCtrl *local_c;
  CMFCToolTipCtrl *pCStack_8;
  
  iVar1 = *(int *)(this + 0xf8) / 2;
  iVar2 = *(int *)(this + 0xf4) / 2;
  local_c = this;
  pCStack_8 = this;
  if ((iVar2 == 0) || (iVar1 == 0)) {
    CDC::Draw3dRect(param_1,(tagRECT *)&param_3,param_7,param_7);
  }
  else {
    CDC::MoveTo(param_1,(int)&local_c,param_3 + iVar2);
    CDC::LineTo(param_1,(param_5 - iVar2) + -1,param_4);
    CDC::LineTo(param_1,param_5 + -1,param_4 + iVar1);
    CDC::LineTo(param_1,param_5 + -1,(param_6 - iVar1) + -1);
    CDC::LineTo(param_1,(param_5 - iVar2) + -1,param_6 + -1);
    CDC::LineTo(param_1,param_3 + iVar2,param_6 + -1);
    CDC::LineTo(param_1,param_3,(param_6 - iVar1) + -1);
    CDC::LineTo(param_1,param_3,param_4 + iVar1);
    CDC::LineTo(param_1,param_3 + iVar2,param_4);
  }
  return;
}

