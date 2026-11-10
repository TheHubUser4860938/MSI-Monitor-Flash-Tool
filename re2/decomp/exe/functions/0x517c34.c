// rea decompile_all
// name: CView::GetScrollBarCtrl
// address: 0x517c34
// body: available
// range: 0x517c34-0x517cab inclusive
// non_contiguous: false
// provider: Ghidra 12.1.2 (ghidra)
// analysis_profile: ac6d50be2cdf54f7005df47d1ed7e7ef55dee595681eb1b7c2e0b00d70cd697d
// limitations: The session serves operations only after Ghidra reports default auto-analysis complete; incomplete analysis does not expose partial results.; The imported Program and temporary project are ephemeral and deleted on close. Annotation operations edit session database metadata; original executable bytes are never written.; Cancelling an active Ghidra request terminates its ephemeral database and discards session annotations. The selected target remains open; the next provider query imports the original artifact again.; Default-space addresses use lowercase 0x-prefixed hexadecimal; other address spaces use <percent-encoded-space>:0x<hex>.; The Ghidra Program references PDB ISPToolForMsi.pdb (GUID b8f2ac8f-1d6f-438d-800f-ed4a14426ac6, age (hex) 1, signature unknown, version RSDS); Ghidra reports load state unknown. Original names and types may be missing; an empty name search does not prove a procedure is absent. Use list_procedures and address-based analysis to inspect recovered functions. REA does not admit a caller-selected PDB companion.; This session uses Ghidra 12.1.2. The bridge is verified against 12.1.4; other 12.1.x builds are accepted and the observed version is reported.; Pseudocode is Ghidra decompiler output, not original source and not text-equivalent to Hopper output.; External functions and functions without an analyzable body return null; other decompiler failures remain explicit.
// pseudocode: provider-specific; not original source


/* Library Function - Single Match
    public: virtual class CScrollBar * __thiscall CView::GetScrollBarCtrl(int)const 
   
   Library: Visual Studio 2015 Release */

CScrollBar * __thiscall CView::GetScrollBarCtrl(CView *this,int param_1)

{
  ulong uVar1;
  CScrollBar *pCVar2;
  CWnd *this_00;
  uint uVar3;
  int iVar4;
  
  uVar1 = CWnd::GetExStyle((CWnd *)this);
  if (((-(uint)(param_1 != 0) & 0x100000) + 0x100000 & uVar1) == 0) {
    this_00 = (CWnd *)FUN_00517bcb(this,1);
    if ((this_00 == (CWnd *)0x0) ||
       (uVar3 = GetDlgCtrlID(*(HWND *)(this + 0x20)), 0xff < uVar3 - 0xe900)) {
      pCVar2 = (CScrollBar *)0x0;
    }
    else {
      if (param_1 == 0) {
        iVar4 = (uVar3 & 0xf) + 0xea00;
      }
      else {
        iVar4 = (uVar3 - 0xe900 >> 4) + 0xea10;
      }
      pCVar2 = (CScrollBar *)CWnd::GetDlgItem(this_00,iVar4);
    }
  }
  else {
    pCVar2 = (CScrollBar *)0x0;
  }
  return pCVar2;
}

