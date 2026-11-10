// rea decompile_all
// name: CMFCOutlookBarToolBar::CMFCOutlookBarToolBar
// address: 0x52b974
// body: available
// range: 0x52b974-0x52b9b1 inclusive
// non_contiguous: false
// provider: Ghidra 12.1.2 (ghidra)
// analysis_profile: ac6d50be2cdf54f7005df47d1ed7e7ef55dee595681eb1b7c2e0b00d70cd697d
// limitations: The session serves operations only after Ghidra reports default auto-analysis complete; incomplete analysis does not expose partial results.; The imported Program and temporary project are ephemeral and deleted on close. Annotation operations edit session database metadata; original executable bytes are never written.; Cancelling an active Ghidra request terminates its ephemeral database and discards session annotations. The selected target remains open; the next provider query imports the original artifact again.; Default-space addresses use lowercase 0x-prefixed hexadecimal; other address spaces use <percent-encoded-space>:0x<hex>.; The Ghidra Program references PDB ISPToolForMsi.pdb (GUID b8f2ac8f-1d6f-438d-800f-ed4a14426ac6, age (hex) 1, signature unknown, version RSDS); Ghidra reports load state unknown. Original names and types may be missing; an empty name search does not prove a procedure is absent. Use list_procedures and address-based analysis to inspect recovered functions. REA does not admit a caller-selected PDB companion.; This session uses Ghidra 12.1.2. The bridge is verified against 12.1.4; other 12.1.x builds are accepted and the observed version is reported.; Pseudocode is Ghidra decompiler output, not original source and not text-equivalent to Hopper output.; External functions and functions without an analyzable body return null; other decompiler failures remain explicit.
// pseudocode: provider-specific; not original source


/* Library Function - Single Match
    public: __thiscall CMFCOutlookBarToolBar::CMFCOutlookBarToolBar(class CMFCOutlookBarTabCtrl *)
   
   Library: Visual Studio 2015 Release */

CMFCOutlookBarToolBar * __thiscall
CMFCOutlookBarToolBar::CMFCOutlookBarToolBar
          (CMFCOutlookBarToolBar *this,CMFCOutlookBarTabCtrl *param_1)

{
  CMFCToolBar::CMFCToolBar((CMFCToolBar *)this);
  *(undefined ***)this = vftable;
  CMap<int,int,int,int>::CMap<int,int,int,int>((CMap<int,int,int,int> *)(this + 0xd40),10);
  *(CMFCOutlookBarTabCtrl **)(this + 0xd5c) = param_1;
  *(undefined4 *)(this + 0xb78) = 1;
  return this;
}

