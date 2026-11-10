// rea decompile_all
// name: CMFCPropertyGridCtrl::CalcEditMargin
// address: 0x537688
// body: available
// range: 0x537688-0x537767 inclusive
// non_contiguous: false
// provider: Ghidra 12.1.2 (ghidra)
// analysis_profile: ac6d50be2cdf54f7005df47d1ed7e7ef55dee595681eb1b7c2e0b00d70cd697d
// limitations: The session serves operations only after Ghidra reports default auto-analysis complete; incomplete analysis does not expose partial results.; The imported Program and temporary project are ephemeral and deleted on close. Annotation operations edit session database metadata; original executable bytes are never written.; Cancelling an active Ghidra request terminates its ephemeral database and discards session annotations. The selected target remains open; the next provider query imports the original artifact again.; Default-space addresses use lowercase 0x-prefixed hexadecimal; other address spaces use <percent-encoded-space>:0x<hex>.; The Ghidra Program references PDB ISPToolForMsi.pdb (GUID b8f2ac8f-1d6f-438d-800f-ed4a14426ac6, age (hex) 1, signature unknown, version RSDS); Ghidra reports load state unknown. Original names and types may be missing; an empty name search does not prove a procedure is absent. Use list_procedures and address-based analysis to inspect recovered functions. REA does not admit a caller-selected PDB companion.; This session uses Ghidra 12.1.2. The bridge is verified against 12.1.4; other 12.1.x builds are accepted and the observed version is reported.; Pseudocode is Ghidra decompiler output, not original source and not text-equivalent to Hopper output.; External functions and functions without an analyzable body return null; other decompiler failures remain explicit.
// pseudocode: provider-specific; not original source


/* WARNING: Function: __EH_prolog3_GS replaced with injection: EH_prolog3 */
/* Library Function - Single Match
    protected: void __thiscall CMFCPropertyGridCtrl::CalcEditMargin(void)
   
   Library: Visual Studio 2015 Release */

void __thiscall CMFCPropertyGridCtrl::CalcEditMargin(CMFCPropertyGridCtrl *this)

{
  CFont *pCVar1;
  WPARAM WVar2;
  uint uVar3;
  undefined **local_a4 [8];
  HWND local_84;
  tagRECT local_24;
  undefined4 local_8;
  undefined4 uStack_4;
  
  uStack_4 = 0x94;
  local_8 = 0x537697;
  CWnd::CWnd((CWnd *)local_a4);
  local_a4[0] = CEdit::vftable;
  local_24.right = 100;
  local_24.bottom = 0x14;
  local_8 = 0;
  local_24.left = 0;
  local_24.top = 0;
  CEdit::Create((CEdit *)local_a4,0x40000000,&local_24,(CWnd *)this,0xffffffff);
  pCVar1 = CWnd::GetFont((CWnd *)this);
  if (pCVar1 == (CFont *)0x0) {
    WVar2 = 0;
  }
  else {
    WVar2 = *(WPARAM *)(pCVar1 + 4);
  }
  SendMessageW(local_84,0x30,WVar2,1);
  uVar3 = SendMessageW(local_84,0xd4,0,0);
  *(uint *)(this + 0x344) = uVar3 & 0xffff;
  if (this == (CMFCPropertyGridCtrl *)0xfffffce0) {
    WVar2 = 0;
  }
  else {
    WVar2 = *(WPARAM *)(this + 0x324);
  }
  SendMessageW(local_84,0x30,WVar2,1);
  uVar3 = SendMessageW(local_84,0xd4,0,0);
  *(uint *)(this + 0x348) = uVar3 & 0xffff;
  FUN_0042ecae();
  CEdit::~CEdit((CEdit *)local_a4);
  FUN_0055bae6();
  return;
}

