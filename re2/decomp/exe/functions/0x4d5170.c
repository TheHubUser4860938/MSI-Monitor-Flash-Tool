// rea decompile_all
// name: CFrameWnd::NegotiateBorderSpace
// address: 0x4d5170
// body: available
// range: 0x4d5170-0x4d51ea inclusive
// non_contiguous: false
// provider: Ghidra 12.1.2 (ghidra)
// analysis_profile: ac6d50be2cdf54f7005df47d1ed7e7ef55dee595681eb1b7c2e0b00d70cd697d
// limitations: The session serves operations only after Ghidra reports default auto-analysis complete; incomplete analysis does not expose partial results.; The imported Program and temporary project are ephemeral and deleted on close. Annotation operations edit session database metadata; original executable bytes are never written.; Cancelling an active Ghidra request terminates its ephemeral database and discards session annotations. The selected target remains open; the next provider query imports the original artifact again.; Default-space addresses use lowercase 0x-prefixed hexadecimal; other address spaces use <percent-encoded-space>:0x<hex>.; The Ghidra Program references PDB ISPToolForMsi.pdb (GUID b8f2ac8f-1d6f-438d-800f-ed4a14426ac6, age (hex) 1, signature unknown, version RSDS); Ghidra reports load state unknown. Original names and types may be missing; an empty name search does not prove a procedure is absent. Use list_procedures and address-based analysis to inspect recovered functions. REA does not admit a caller-selected PDB companion.; This session uses Ghidra 12.1.2. The bridge is verified against 12.1.4; other 12.1.x builds are accepted and the observed version is reported.; Pseudocode is Ghidra decompiler output, not original source and not text-equivalent to Hopper output.; External functions and functions without an analyzable body return null; other decompiler failures remain explicit.
// pseudocode: provider-specific; not original source


/* Library Function - Single Match
    public: virtual int __thiscall CFrameWnd::NegotiateBorderSpace(unsigned int,struct tagRECT *)
   
   Library: Visual Studio 2015 Release */

int __thiscall CFrameWnd::NegotiateBorderSpace(CFrameWnd *this,uint param_1,tagRECT *param_2)

{
  int iVar1;
  BOOL BVar2;
  
  if (param_1 == 1) {
    CWnd::RepositionBars((CWnd *)this,0,0xffff,0xe900,1,param_2,(tagRECT *)0x0,1);
  }
  else if ((param_1 != 2) && (param_1 == 3)) {
    if (param_2 == (tagRECT *)0x0) {
      iVar1 = CRect::IsRectNull((CRect *)(this + 0x9c));
      if (iVar1 != 0) {
        return 0;
      }
      SetRectEmpty((LPRECT)(this + 0x9c));
    }
    else {
      BVar2 = EqualRect((RECT *)(this + 0x9c),param_2);
      if (BVar2 != 0) {
        return 0;
      }
      CopyRect((RECT *)(this + 0x9c),param_2);
    }
  }
  return 1;
}

