// rea decompile_all
// name: CDlgGroupRadioButtonIterator::GetLastButton
// address: 0x4340a5
// body: available
// range: 0x4340a5-0x434109 inclusive
// non_contiguous: false
// provider: Ghidra 12.1.2 (ghidra)
// analysis_profile: ac6d50be2cdf54f7005df47d1ed7e7ef55dee595681eb1b7c2e0b00d70cd697d
// limitations: The session serves operations only after Ghidra reports default auto-analysis complete; incomplete analysis does not expose partial results.; The imported Program and temporary project are ephemeral and deleted on close. Annotation operations edit session database metadata; original executable bytes are never written.; Cancelling an active Ghidra request terminates its ephemeral database and discards session annotations. The selected target remains open; the next provider query imports the original artifact again.; Default-space addresses use lowercase 0x-prefixed hexadecimal; other address spaces use <percent-encoded-space>:0x<hex>.; The Ghidra Program references PDB ISPToolForMsi.pdb (GUID b8f2ac8f-1d6f-438d-800f-ed4a14426ac6, age (hex) 1, signature unknown, version RSDS); Ghidra reports load state unknown. Original names and types may be missing; an empty name search does not prove a procedure is absent. Use list_procedures and address-based analysis to inspect recovered functions. REA does not admit a caller-selected PDB companion.; This session uses Ghidra 12.1.2. The bridge is verified against 12.1.4; other 12.1.x builds are accepted and the observed version is reported.; Pseudocode is Ghidra decompiler output, not original source and not text-equivalent to Hopper output.; External functions and functions without an analyzable body return null; other decompiler failures remain explicit.
// pseudocode: provider-specific; not original source


/* Library Function - Single Match
    public: class CDlgControlIterator __thiscall
   CDlgGroupRadioButtonIterator::GetLastButton(void)const 
   
   Library: Visual Studio 2015 Release */

CTypedPtrListIterator<CPtrList,COleControlSiteOrWnd*> * __thiscall
CDlgGroupRadioButtonIterator::GetLastButton(CDlgGroupRadioButtonIterator *this)

{
  undefined4 uVar1;
  ulong uVar2;
  CTypedPtrListIterator<CPtrList,COleControlSiteOrWnd*> *in_stack_00000004;
  undefined1 local_14 [12];
  int local_8;
  
  FUN_00433d13(this);
  uVar1 = CTypedPtrListIterator<CPtrList,COleControlSiteOrWnd*>::Skip
                    (in_stack_00000004,(int)local_14);
  FUN_00433d13(uVar1);
  while( true ) {
    if (local_8 == 0) {
      return in_stack_00000004;
    }
    uVar2 = COleControlSiteOrWnd::GetStyle(*(COleControlSiteOrWnd **)(local_8 + 8));
    if ((uVar2 >> 0x11 & 1) != 0) break;
    FUN_0043410a(&local_8);
    if (*(int *)(in_stack_00000004 + 4) != 0) {
      FUN_0043410a(in_stack_00000004 + 4);
    }
  }
  return in_stack_00000004;
}

