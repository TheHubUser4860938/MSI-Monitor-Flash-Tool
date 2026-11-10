// rea decompile_all
// name: COleControlContainer::IsDlgButtonChecked
// address: 0x44062a
// body: available
// range: 0x44062a-0x44068d inclusive
// non_contiguous: false
// provider: Ghidra 12.1.2 (ghidra)
// analysis_profile: ac6d50be2cdf54f7005df47d1ed7e7ef55dee595681eb1b7c2e0b00d70cd697d
// limitations: The session serves operations only after Ghidra reports default auto-analysis complete; incomplete analysis does not expose partial results.; The imported Program and temporary project are ephemeral and deleted on close. Annotation operations edit session database metadata; original executable bytes are never written.; Cancelling an active Ghidra request terminates its ephemeral database and discards session annotations. The selected target remains open; the next provider query imports the original artifact again.; Default-space addresses use lowercase 0x-prefixed hexadecimal; other address spaces use <percent-encoded-space>:0x<hex>.; The Ghidra Program references PDB ISPToolForMsi.pdb (GUID b8f2ac8f-1d6f-438d-800f-ed4a14426ac6, age (hex) 1, signature unknown, version RSDS); Ghidra reports load state unknown. Original names and types may be missing; an empty name search does not prove a procedure is absent. Use list_procedures and address-based analysis to inspect recovered functions. REA does not admit a caller-selected PDB companion.; This session uses Ghidra 12.1.2. The bridge is verified against 12.1.4; other 12.1.x builds are accepted and the observed version is reported.; Pseudocode is Ghidra decompiler output, not original source and not text-equivalent to Hopper output.; External functions and functions without an analyzable body return null; other decompiler failures remain explicit.
// pseudocode: provider-specific; not original source


/* WARNING: Function: __EH_prolog3_catch replaced with injection: EH_prolog3 */
/* WARNING: Function: __EH_epilog3 replaced with injection: EH_epilog3 */
/* Library Function - Single Match
    public: virtual unsigned int __thiscall COleControlContainer::IsDlgButtonChecked(int)const 
   
   Library: Visual Studio 2015 Release */

uint __thiscall COleControlContainer::IsDlgButtonChecked(COleControlContainer *this,int param_1)

{
  code *pcVar1;
  CWnd *this_00;
  uint uVar2;
  uint local_18 [4];
  undefined4 local_8;
  undefined4 uStack_4;
  
  uStack_4 = 0xc;
  local_8 = 0x440636;
  pcVar1 = *(code **)(*(int *)this + 0x74);
  guard_check_icall(param_1);
  this_00 = (CWnd *)(*pcVar1)();
  uVar2 = 0;
  if (this_00 != (CWnd *)0x0) {
    if (*(int *)(this_00 + 0x74) == 0) {
      uVar2 = SendMessageW(*(HWND *)(this_00 + 0x20),0xf0,0,0);
    }
    else {
      local_8 = 0;
      CWnd::GetProperty(this_00,0,3,local_18);
      uVar2 = local_18[0];
      if (local_18[0] == 0xffff) {
        uVar2 = 1;
      }
    }
  }
  return uVar2;
}

