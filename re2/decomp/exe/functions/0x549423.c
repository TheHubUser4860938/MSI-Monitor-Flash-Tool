// rea decompile_all
// name: CMFCToolBarsOptionsPropertyPage::DoDataExchange
// address: 0x549423
// body: available
// range: 0x549423-0x549509 inclusive
// non_contiguous: false
// provider: Ghidra 12.1.2 (ghidra)
// analysis_profile: ac6d50be2cdf54f7005df47d1ed7e7ef55dee595681eb1b7c2e0b00d70cd697d
// limitations: The session serves operations only after Ghidra reports default auto-analysis complete; incomplete analysis does not expose partial results.; The imported Program and temporary project are ephemeral and deleted on close. Annotation operations edit session database metadata; original executable bytes are never written.; Cancelling an active Ghidra request terminates its ephemeral database and discards session annotations. The selected target remains open; the next provider query imports the original artifact again.; Default-space addresses use lowercase 0x-prefixed hexadecimal; other address spaces use <percent-encoded-space>:0x<hex>.; The Ghidra Program references PDB ISPToolForMsi.pdb (GUID b8f2ac8f-1d6f-438d-800f-ed4a14426ac6, age (hex) 1, signature unknown, version RSDS); Ghidra reports load state unknown. Original names and types may be missing; an empty name search does not prove a procedure is absent. Use list_procedures and address-based analysis to inspect recovered functions. REA does not admit a caller-selected PDB companion.; This session uses Ghidra 12.1.2. The bridge is verified against 12.1.4; other 12.1.x builds are accepted and the observed version is reported.; Pseudocode is Ghidra decompiler output, not original source and not text-equivalent to Hopper output.; External functions and functions without an analyzable body return null; other decompiler failures remain explicit.
// pseudocode: provider-specific; not original source


/* Library Function - Single Match
    protected: virtual void __thiscall CMFCToolBarsOptionsPropertyPage::DoDataExchange(class
   CDataExchange *)
   
   Library: Visual Studio 2015 Release */

void __thiscall
CMFCToolBarsOptionsPropertyPage::DoDataExchange
          (CMFCToolBarsOptionsPropertyPage *this,CDataExchange *param_1)

{
  FUN_00434f14(param_1,0x410d,this + 0xc0);
  FUN_00434f14(param_1,0x410f,this + 0x140);
  FUN_00434f14(param_1,0x4111,this + 0x1c0);
  FUN_00434f14(param_1,0x409a,this + 0x240);
  FUN_00434f14(param_1,0x409b,this + 0x2c0);
  FUN_00434f14(param_1,0x4110,this + 0x340);
  FUN_00434f14(param_1,0x410c,this + 0x3c0);
  DDX_Check(param_1,0x410b,(int *)(this + 0x440));
  DDX_Check(param_1,0x410c,(int *)(this + 0x444));
  DDX_Check(param_1,0x410f,(int *)(this + 0x448));
  DDX_Check(param_1,0x4110,(int *)(this + 0x44c));
  DDX_Check(param_1,0x410d,(int *)(this + 0x450));
  return;
}

