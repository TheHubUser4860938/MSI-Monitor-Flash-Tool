// rea decompile_all
// name: CDlgGroupRadioButtonIterator::GetFirstButton
// address: 0x434045
// body: available
// range: 0x434045-0x4340a4 inclusive
// non_contiguous: false
// provider: Ghidra 12.1.2 (ghidra)
// analysis_profile: ac6d50be2cdf54f7005df47d1ed7e7ef55dee595681eb1b7c2e0b00d70cd697d
// limitations: The session serves operations only after Ghidra reports default auto-analysis complete; incomplete analysis does not expose partial results.; The imported Program and temporary project are ephemeral and deleted on close. Annotation operations edit session database metadata; original executable bytes are never written.; Cancelling an active Ghidra request terminates its ephemeral database and discards session annotations. The selected target remains open; the next provider query imports the original artifact again.; Default-space addresses use lowercase 0x-prefixed hexadecimal; other address spaces use <percent-encoded-space>:0x<hex>.; The Ghidra Program references PDB ISPToolForMsi.pdb (GUID b8f2ac8f-1d6f-438d-800f-ed4a14426ac6, age (hex) 1, signature unknown, version RSDS); Ghidra reports load state unknown. Original names and types may be missing; an empty name search does not prove a procedure is absent. Use list_procedures and address-based analysis to inspect recovered functions. REA does not admit a caller-selected PDB companion.; This session uses Ghidra 12.1.2. The bridge is verified against 12.1.4; other 12.1.x builds are accepted and the observed version is reported.; Pseudocode is Ghidra decompiler output, not original source and not text-equivalent to Hopper output.; External functions and functions without an analyzable body return null; other decompiler failures remain explicit.
// pseudocode: provider-specific; not original source


/* Library Function - Single Match
    public: class CDlgControlIterator __thiscall
   CDlgGroupRadioButtonIterator::GetFirstButton(void)const 
   
   Library: Visual Studio 2015 Release */

undefined4 __thiscall
CDlgGroupRadioButtonIterator::GetFirstButton(CDlgGroupRadioButtonIterator *this)

{
  ulong uVar1;
  undefined4 in_stack_00000004;
  undefined1 *puVar2;
  undefined1 local_14 [8];
  undefined1 local_c [4];
  int local_8;
  
  FUN_00433d13(this);
  FUN_00433d13(local_c);
  while (local_8 != 0) {
    uVar1 = COleControlSiteOrWnd::GetStyle(*(COleControlSiteOrWnd **)(local_8 + 8));
    puVar2 = local_c;
    if ((uVar1 >> 0x11 & 1) != 0) goto LAB_00434094;
    FUN_00433d33(puVar2);
    FUN_00434322(&local_8);
  }
  puVar2 = local_14;
LAB_00434094:
  FUN_00433d13(puVar2);
  return in_stack_00000004;
}

