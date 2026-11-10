// rea decompile_all
// name: CMFCVisualManager::OnDrawMenuSystemButton
// address: 0x41b3cf
// body: available
// range: 0x41b3cf-0x41b426 inclusive
// non_contiguous: false
// provider: Ghidra 12.1.2 (ghidra)
// analysis_profile: ac6d50be2cdf54f7005df47d1ed7e7ef55dee595681eb1b7c2e0b00d70cd697d
// limitations: The session serves operations only after Ghidra reports default auto-analysis complete; incomplete analysis does not expose partial results.; The imported Program and temporary project are ephemeral and deleted on close. Annotation operations edit session database metadata; original executable bytes are never written.; Cancelling an active Ghidra request terminates its ephemeral database and discards session annotations. The selected target remains open; the next provider query imports the original artifact again.; Default-space addresses use lowercase 0x-prefixed hexadecimal; other address spaces use <percent-encoded-space>:0x<hex>.; The Ghidra Program references PDB ISPToolForMsi.pdb (GUID b8f2ac8f-1d6f-438d-800f-ed4a14426ac6, age (hex) 1, signature unknown, version RSDS); Ghidra reports load state unknown. Original names and types may be missing; an empty name search does not prove a procedure is absent. Use list_procedures and address-based analysis to inspect recovered functions. REA does not admit a caller-selected PDB companion.; This session uses Ghidra 12.1.2. The bridge is verified against 12.1.4; other 12.1.x builds are accepted and the observed version is reported.; Pseudocode is Ghidra decompiler output, not original source and not text-equivalent to Hopper output.; External functions and functions without an analyzable body return null; other decompiler failures remain explicit.
// pseudocode: provider-specific; not original source


/* Library Function - Single Match
    public: virtual void __thiscall CMFCVisualManager::OnDrawMenuSystemButton(class CDC *,class
   CRect,unsigned int,unsigned int,int)
   
   Library: Visual Studio 2015 Release */

void __thiscall CMFCVisualManager::OnDrawMenuSystemButton(undefined4 param_1_00,int param_1)

{
  uint uVar1;
  int in_stack_00000018;
  uint in_stack_0000001c;
  
  uVar1 = 0;
  if (in_stack_00000018 == 0xf020) {
    uVar1 = 1;
  }
  else if (in_stack_00000018 != 0xf060) {
    if (in_stack_00000018 != 0xf120) {
      return;
    }
    uVar1 = 3;
  }
  if ((in_stack_0000001c & 0x20000) != 0) {
    uVar1 = uVar1 | 0x200;
  }
  if ((in_stack_0000001c & 0x40000) != 0) {
    uVar1 = uVar1 | 0x100;
  }
  DrawFrameControl(*(HDC *)(param_1 + 4),(LPRECT)&stack0x00000008,1,uVar1);
  return;
}

