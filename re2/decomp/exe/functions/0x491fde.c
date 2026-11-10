// rea decompile_all
// name: CFrameImpl::CFrameImpl
// address: 0x491fde
// body: available
// range: 0x491fde-0x4920d6 inclusive
// non_contiguous: false
// provider: Ghidra 12.1.2 (ghidra)
// analysis_profile: ac6d50be2cdf54f7005df47d1ed7e7ef55dee595681eb1b7c2e0b00d70cd697d
// limitations: The session serves operations only after Ghidra reports default auto-analysis complete; incomplete analysis does not expose partial results.; The imported Program and temporary project are ephemeral and deleted on close. Annotation operations edit session database metadata; original executable bytes are never written.; Cancelling an active Ghidra request terminates its ephemeral database and discards session annotations. The selected target remains open; the next provider query imports the original artifact again.; Default-space addresses use lowercase 0x-prefixed hexadecimal; other address spaces use <percent-encoded-space>:0x<hex>.; The Ghidra Program references PDB ISPToolForMsi.pdb (GUID b8f2ac8f-1d6f-438d-800f-ed4a14426ac6, age (hex) 1, signature unknown, version RSDS); Ghidra reports load state unknown. Original names and types may be missing; an empty name search does not prove a procedure is absent. Use list_procedures and address-based analysis to inspect recovered functions. REA does not admit a caller-selected PDB companion.; This session uses Ghidra 12.1.2. The bridge is verified against 12.1.4; other 12.1.x builds are accepted and the observed version is reported.; Pseudocode is Ghidra decompiler output, not original source and not text-equivalent to Hopper output.; External functions and functions without an analyzable body return null; other decompiler failures remain explicit.
// pseudocode: provider-specific; not original source


/* WARNING: Function: __EH_prolog3 replaced with injection: EH_prolog3 */
/* WARNING: Function: __EH_epilog3 replaced with injection: EH_epilog3 */
/* Library Function - Single Match
    public: __thiscall CFrameImpl::CFrameImpl(class CFrameWnd *)
   
   Library: Visual Studio 2015 Release */

CFrameImpl * __thiscall CFrameImpl::CFrameImpl(CFrameImpl *this,CFrameWnd *param_1)

{
  undefined4 uVar1;
  
  *(undefined4 *)(this + 4) = 0xffffffff;
  *(undefined4 *)(this + 8) = 0xffffffff;
  *(undefined ***)this = vftable;
  *(undefined4 *)(this + 0xc) = 0;
  *(undefined4 *)(this + 0x10) = 0;
  *(undefined4 *)(this + 0x14) = 0;
  *(undefined4 *)(this + 0x18) = 0;
  *(undefined4 *)(this + 0x1c) = 0;
  *(undefined4 *)(this + 0x20) = 0;
  *(undefined4 *)(this + 0x24) = 0;
  *(undefined4 *)(this + 0x2c) = 0;
  *(undefined4 *)(this + 0x30) = 1;
  *(undefined4 *)(this + 0x34) = 1;
  *(undefined4 *)(this + 0x38) = 0;
  *(undefined4 *)(this + 0x3c) = 0;
  *(undefined4 *)(this + 0x40) = 0;
  ((LPRECT)(this + 0x44))->left = 0;
  *(undefined4 *)(this + 0x48) = 0;
  *(undefined4 *)(this + 0x4c) = 0;
  *(undefined4 *)(this + 0x50) = 0;
  CObList::CObList((CObList *)(this + 0x54),10);
  CObList::CObList((CObList *)(this + 0x70),10);
  CObList::CObList((CObList *)(this + 0x8c),10);
  uVar1 = FUN_004295fe();
  FUN_0040eb30(uVar1);
  *(undefined4 *)(this + 0xac) = 0;
  *(CFrameWnd **)(this + 0xb0) = param_1;
  *(undefined4 *)(this + 0xb4) = 0;
  CFullScreenImpl::CFullScreenImpl((CFullScreenImpl *)(this + 0xb8),this);
  *(undefined4 *)(this + 0xfc) = 0;
  *(undefined4 *)(this + 0x100) = 0;
  *(undefined ***)(this + 0xf8) = &PTR_s_CMFCToolBar_0060c580;
  SetRectEmpty((LPRECT)(this + 0x44));
  uVar1 = FUN_0043970d(&PTR_s_CMDIChildWnd_005cc0b4);
  *(undefined4 *)(this + 0x28) = uVar1;
  return this;
}

