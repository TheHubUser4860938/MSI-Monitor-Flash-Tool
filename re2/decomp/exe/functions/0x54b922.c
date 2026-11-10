// rea decompile_all
// name: CSmartDockingStandaloneGuide::IsPtIn
// address: 0x54b922
// body: available
// range: 0x54b922-0x54b9d3 inclusive
// non_contiguous: false
// provider: Ghidra 12.1.2 (ghidra)
// analysis_profile: ac6d50be2cdf54f7005df47d1ed7e7ef55dee595681eb1b7c2e0b00d70cd697d
// limitations: The session serves operations only after Ghidra reports default auto-analysis complete; incomplete analysis does not expose partial results.; The imported Program and temporary project are ephemeral and deleted on close. Annotation operations edit session database metadata; original executable bytes are never written.; Cancelling an active Ghidra request terminates its ephemeral database and discards session annotations. The selected target remains open; the next provider query imports the original artifact again.; Default-space addresses use lowercase 0x-prefixed hexadecimal; other address spaces use <percent-encoded-space>:0x<hex>.; The Ghidra Program references PDB ISPToolForMsi.pdb (GUID b8f2ac8f-1d6f-438d-800f-ed4a14426ac6, age (hex) 1, signature unknown, version RSDS); Ghidra reports load state unknown. Original names and types may be missing; an empty name search does not prove a procedure is absent. Use list_procedures and address-based analysis to inspect recovered functions. REA does not admit a caller-selected PDB companion.; This session uses Ghidra 12.1.2. The bridge is verified against 12.1.4; other 12.1.x builds are accepted and the observed version is reported.; Pseudocode is Ghidra decompiler output, not original source and not text-equivalent to Hopper output.; External functions and functions without an analyzable body return null; other decompiler failures remain explicit.
// pseudocode: provider-specific; not original source


/* WARNING: Function: __EH_prolog3 replaced with injection: EH_prolog3 */
/* WARNING: Function: __EH_epilog3 replaced with injection: EH_epilog3 */
/* Library Function - Single Match
    public: virtual int __thiscall CSmartDockingStandaloneGuide::IsPtIn(class CPoint)const 
   
   Library: Visual Studio 2015 Release */

int __thiscall
CSmartDockingStandaloneGuide::IsPtIn(CSmartDockingStandaloneGuide *this,int param_2,int param_3)

{
  BOOL BVar1;
  HRGN pHVar2;
  undefined **local_18;
  HRGN local_14;
  undefined4 local_8;
  undefined4 uStack_4;
  
  uStack_4 = 8;
  local_8 = 0x54b92e;
  if (((this != (CSmartDockingStandaloneGuide *)0xfffffff8) && (*(int *)(this + 0x28) != 0)) &&
     (BVar1 = IsWindowVisible(*(HWND *)(this + 0x28)), BVar1 != 0)) {
    ScreenToClient(*(HWND *)(this + 0x28),(LPPOINT)&param_2);
    if (*(int *)(this + 0x2e4) != 0) {
      BVar1 = PtInRegion(*(HRGN *)(this + 0x2d4),param_2,param_3);
      return BVar1;
    }
    local_14 = (HRGN)0x0;
    local_18 = CRgn::vftable;
    local_8 = 0;
    pHVar2 = CreateRectRgn(0,0,0,0);
    CMenu::Attach((CMenu *)&local_18,(HMENU__ *)pHVar2);
    GetWindowRgn(*(HWND *)(this + 0x28),local_14);
    BVar1 = PtInRegion(local_14,param_2,param_3);
    local_18 = CRgn::vftable;
    FUN_0040ee80();
    return BVar1;
  }
  return 0;
}

