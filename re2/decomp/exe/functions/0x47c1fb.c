// rea decompile_all
// name: CMFCRibbonCategory::HitTestScrollButtons
// address: 0x47c1fb
// body: available
// range: 0x47c1fb-0x47c276 inclusive
// non_contiguous: false
// provider: Ghidra 12.1.2 (ghidra)
// analysis_profile: ac6d50be2cdf54f7005df47d1ed7e7ef55dee595681eb1b7c2e0b00d70cd697d
// limitations: The session serves operations only after Ghidra reports default auto-analysis complete; incomplete analysis does not expose partial results.; The imported Program and temporary project are ephemeral and deleted on close. Annotation operations edit session database metadata; original executable bytes are never written.; Cancelling an active Ghidra request terminates its ephemeral database and discards session annotations. The selected target remains open; the next provider query imports the original artifact again.; Default-space addresses use lowercase 0x-prefixed hexadecimal; other address spaces use <percent-encoded-space>:0x<hex>.; The Ghidra Program references PDB ISPToolForMsi.pdb (GUID b8f2ac8f-1d6f-438d-800f-ed4a14426ac6, age (hex) 1, signature unknown, version RSDS); Ghidra reports load state unknown. Original names and types may be missing; an empty name search does not prove a procedure is absent. Use list_procedures and address-based analysis to inspect recovered functions. REA does not admit a caller-selected PDB companion.; This session uses Ghidra 12.1.2. The bridge is verified against 12.1.4; other 12.1.x builds are accepted and the observed version is reported.; Pseudocode is Ghidra decompiler output, not original source and not text-equivalent to Hopper output.; External functions and functions without an analyzable body return null; other decompiler failures remain explicit.
// pseudocode: provider-specific; not original source


/* Library Function - Single Match
    public: class CMFCRibbonBaseElement * __thiscall CMFCRibbonCategory::HitTestScrollButtons(class
   CPoint)const 
   
   Library: Visual Studio 2015 Release */

CMFCRibbonBaseElement * __thiscall
CMFCRibbonCategory::HitTestScrollButtons(CMFCRibbonCategory *this,LONG param_2,LONG param_3)

{
  POINT pt;
  POINT pt_00;
  BOOL BVar1;
  CMFCRibbonBaseElement *pCVar2;
  RECT local_18;
  uint local_8;
  
  local_8 = DAT_0060cff4 ^ (uint)&stack0xfffffffc;
  local_18.left = *(LONG *)(this + 0x21c);
  local_18.top = *(LONG *)(this + 0x220);
  local_18.right = *(LONG *)(this + 0x224);
  local_18.bottom = *(LONG *)(this + 0x228);
  pt.y = param_3;
  pt.x = param_2;
  BVar1 = PtInRect(&local_18,pt);
  if (BVar1 == 0) {
    local_18.left = *(LONG *)(this + 0x3e4);
    local_18.top = *(LONG *)(this + 1000);
    local_18.right = *(LONG *)(this + 0x3ec);
    local_18.bottom = *(LONG *)(this + 0x3f0);
    pt_00.y = param_3;
    pt_00.x = param_2;
    PtInRect(&local_18,pt_00);
  }
  pCVar2 = (CMFCRibbonBaseElement *)__security_check_cookie(local_8 ^ (uint)&stack0xfffffffc);
  return pCVar2;
}

