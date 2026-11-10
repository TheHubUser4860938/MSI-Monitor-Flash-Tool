// rea decompile_all
// name: CMFCCustomColorsPropertyPage::DoDataExchange
// address: 0x1014a035
// body: available
// range: 0x1014a035-0x1014a0d4 inclusive
// non_contiguous: false
// provider: Ghidra 12.1.2 (ghidra)
// analysis_profile: b075844f08879296d957518397cd0ddda73db81dce53d00d3f0e702766fc2af6
// limitations: The session serves operations only after Ghidra reports default auto-analysis complete; incomplete analysis does not expose partial results.; The imported Program and temporary project are ephemeral and deleted on close. Annotation operations edit session database metadata; original executable bytes are never written.; Cancelling an active Ghidra request terminates its ephemeral database and discards session annotations. The selected target remains open; the next provider query imports the original artifact again.; Default-space addresses use lowercase 0x-prefixed hexadecimal; other address spaces use <percent-encoded-space>:0x<hex>.; The Ghidra Program references PDB WinOperateCScaler.pdb (GUID a6737962-efea-4805-8ae6-1fc1ef126554, age (hex) 1, signature unknown, version RSDS); Ghidra reports load state unknown. Original names and types may be missing; an empty name search does not prove a procedure is absent. Use list_procedures and address-based analysis to inspect recovered functions. REA does not admit a caller-selected PDB companion.; This session uses Ghidra 12.1.2. The bridge is verified against 12.1.4; other 12.1.x builds are accepted and the observed version is reported.; Pseudocode is Ghidra decompiler output, not original source and not text-equivalent to Hopper output.; External functions and functions without an analyzable body return null; other decompiler failures remain explicit.
// pseudocode: provider-specific; not original source


/* Library Function - Single Match
    protected: virtual void __thiscall CMFCCustomColorsPropertyPage::DoDataExchange(class
   CDataExchange *)
   
   Libraries: Visual Studio 2012 Release, Visual Studio 2015 Release */

void __thiscall
CMFCCustomColorsPropertyPage::DoDataExchange
          (CMFCCustomColorsPropertyPage *this,CDataExchange *param_1)

{
  FUN_100368a3(param_1,0x424d,this + 200);
  FUN_100368a3(param_1,0x4116,this + 0x198);
  DDX_Text(param_1,0x4244,this + 0x268);
  DDX_Text(param_1,0x4246,this + 0x26c);
  DDX_Text(param_1,0x4245,this + 0x270);
  DDX_Text(param_1,0x4247,this + 0x274);
  DDX_Text(param_1,0x4249,this + 0x278);
  DDX_Text(param_1,0x4248,this + 0x27c);
  return;
}

