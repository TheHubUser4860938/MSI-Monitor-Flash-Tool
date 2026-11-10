// rea decompile_all
// name: CHelpComboBoxButton
// address: 0x4a1f7f
// body: available
// range: 0x4a1f7f-0x4a1fdd inclusive
// non_contiguous: false
// provider: Ghidra 12.1.2 (ghidra)
// analysis_profile: ac6d50be2cdf54f7005df47d1ed7e7ef55dee595681eb1b7c2e0b00d70cd697d
// limitations: The session serves operations only after Ghidra reports default auto-analysis complete; incomplete analysis does not expose partial results.; The imported Program and temporary project are ephemeral and deleted on close. Annotation operations edit session database metadata; original executable bytes are never written.; Cancelling an active Ghidra request terminates its ephemeral database and discards session annotations. The selected target remains open; the next provider query imports the original artifact again.; Default-space addresses use lowercase 0x-prefixed hexadecimal; other address spaces use <percent-encoded-space>:0x<hex>.; The Ghidra Program references PDB ISPToolForMsi.pdb (GUID b8f2ac8f-1d6f-438d-800f-ed4a14426ac6, age (hex) 1, signature unknown, version RSDS); Ghidra reports load state unknown. Original names and types may be missing; an empty name search does not prove a procedure is absent. Use list_procedures and address-based analysis to inspect recovered functions. REA does not admit a caller-selected PDB companion.; This session uses Ghidra 12.1.2. The bridge is verified against 12.1.4; other 12.1.x builds are accepted and the observed version is reported.; Pseudocode is Ghidra decompiler output, not original source and not text-equivalent to Hopper output.; External functions and functions without an analyzable body return null; other decompiler failures remain explicit.
// pseudocode: provider-specific; not original source


/* WARNING: Function: __EH_prolog3 replaced with injection: EH_prolog3 */
/* WARNING: Function: __EH_epilog3 replaced with injection: EH_epilog3 */
/* Library Function - Multiple Matches With Same Base Name
    public: __thiscall CHelpComboBoxButton::CHelpComboBoxButton(unsigned int,int,char const *)
    public: __thiscall CHelpComboBoxButton::CHelpComboBoxButton(unsigned int,int,wchar_t const *)
   
   Library: Visual Studio 2015 Release */

void CHelpComboBoxButton(uint param_1,int param_2,undefined **param_3)

{
  undefined4 uVar1;
  CMFCToolBarComboBoxButton *in_ECX;
  
  CMFCToolBarComboBoxButton::CMFCToolBarComboBoxButton(in_ECX,param_1,-1,2,param_2);
  *(undefined ***)in_ECX = CHelpComboBoxButton::vftable;
  uVar1 = FUN_004295fe();
  FUN_0040eb30(uVar1);
  if (param_3 == (undefined **)0x0) {
    param_3 = &PTR_005e8934;
  }
  FUN_00415ad0(param_3);
  return;
}

