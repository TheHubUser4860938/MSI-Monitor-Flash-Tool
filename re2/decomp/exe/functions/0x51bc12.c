// rea decompile_all
// name: CMFCToolBarEditBoxButton::GetInvalidateRect
// address: 0x51bc12
// body: available
// range: 0x51bc12-0x51bc7f inclusive
// non_contiguous: false
// provider: Ghidra 12.1.2 (ghidra)
// analysis_profile: ac6d50be2cdf54f7005df47d1ed7e7ef55dee595681eb1b7c2e0b00d70cd697d
// limitations: The session serves operations only after Ghidra reports default auto-analysis complete; incomplete analysis does not expose partial results.; The imported Program and temporary project are ephemeral and deleted on close. Annotation operations edit session database metadata; original executable bytes are never written.; Cancelling an active Ghidra request terminates its ephemeral database and discards session annotations. The selected target remains open; the next provider query imports the original artifact again.; Default-space addresses use lowercase 0x-prefixed hexadecimal; other address spaces use <percent-encoded-space>:0x<hex>.; The Ghidra Program references PDB ISPToolForMsi.pdb (GUID b8f2ac8f-1d6f-438d-800f-ed4a14426ac6, age (hex) 1, signature unknown, version RSDS); Ghidra reports load state unknown. Original names and types may be missing; an empty name search does not prove a procedure is absent. Use list_procedures and address-based analysis to inspect recovered functions. REA does not admit a caller-selected PDB companion.; This session uses Ghidra 12.1.2. The bridge is verified against 12.1.4; other 12.1.x builds are accepted and the observed version is reported.; Pseudocode is Ghidra decompiler output, not original source and not text-equivalent to Hopper output.; External functions and functions without an analyzable body return null; other decompiler failures remain explicit.
// pseudocode: provider-specific; not original source


/* Library Function - Single Match
    public: virtual class CRect const __thiscall
   CMFCToolBarEditBoxButton::GetInvalidateRect(void)const 
   
   Library: Visual Studio 2015 Release */

void __thiscall CMFCToolBarEditBoxButton::GetInvalidateRect(CMFCToolBarEditBoxButton *this)

{
  CMFCToolBarEditBoxButton *pCVar1;
  undefined4 *in_stack_00000004;
  int local_14;
  int local_10;
  int local_c;
  int local_8;
  
  if (((*(int *)(this + 0x18) == 0) || (*(int *)(this + 0x84) == 0)) ||
     (*(int *)(*(int *)(this + 0x2c) + -0xc) == 0)) {
    pCVar1 = this + 0x54;
  }
  else {
    local_14 = ((*(int *)(this + 0x54) - *(int *)(this + 100)) + *(int *)(this + 0x5c)) / 2;
    pCVar1 = (CMFCToolBarEditBoxButton *)&local_14;
    local_10 = *(int *)(this + 0x58);
    local_c = (*(int *)(this + 0x54) + *(int *)(this + 100) + *(int *)(this + 0x5c)) / 2;
    local_8 = *(int *)(this + 0x68) + *(int *)(this + 0x60) + *(int *)(this + 0x58);
  }
  *in_stack_00000004 = *(undefined4 *)pCVar1;
  in_stack_00000004[1] = *(undefined4 *)(pCVar1 + 4);
  in_stack_00000004[2] = *(undefined4 *)(pCVar1 + 8);
  in_stack_00000004[3] = *(undefined4 *)(pCVar1 + 0xc);
  return;
}

