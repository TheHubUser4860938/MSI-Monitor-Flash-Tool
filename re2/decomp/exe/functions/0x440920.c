// rea decompile_all
// name: COleControlContainer::SetDlgItemInt
// address: 0x440920
// body: available
// range: 0x440920-0x440985 inclusive
// non_contiguous: false
// provider: Ghidra 12.1.2 (ghidra)
// analysis_profile: ac6d50be2cdf54f7005df47d1ed7e7ef55dee595681eb1b7c2e0b00d70cd697d
// limitations: The session serves operations only after Ghidra reports default auto-analysis complete; incomplete analysis does not expose partial results.; The imported Program and temporary project are ephemeral and deleted on close. Annotation operations edit session database metadata; original executable bytes are never written.; Cancelling an active Ghidra request terminates its ephemeral database and discards session annotations. The selected target remains open; the next provider query imports the original artifact again.; Default-space addresses use lowercase 0x-prefixed hexadecimal; other address spaces use <percent-encoded-space>:0x<hex>.; The Ghidra Program references PDB ISPToolForMsi.pdb (GUID b8f2ac8f-1d6f-438d-800f-ed4a14426ac6, age (hex) 1, signature unknown, version RSDS); Ghidra reports load state unknown. Original names and types may be missing; an empty name search does not prove a procedure is absent. Use list_procedures and address-based analysis to inspect recovered functions. REA does not admit a caller-selected PDB companion.; This session uses Ghidra 12.1.2. The bridge is verified against 12.1.4; other 12.1.x builds are accepted and the observed version is reported.; Pseudocode is Ghidra decompiler output, not original source and not text-equivalent to Hopper output.; External functions and functions without an analyzable body return null; other decompiler failures remain explicit.
// pseudocode: provider-specific; not original source


/* Library Function - Single Match
    public: virtual void __thiscall COleControlContainer::SetDlgItemInt(int,unsigned int,int)
   
   Library: Visual Studio 2015 Release */

void __thiscall
COleControlContainer::SetDlgItemInt(COleControlContainer *this,int param_1,uint param_2,int param_3)

{
  code *pcVar1;
  errno_t eVar2;
  wchar_t local_4c [34];
  uint local_8;
  
  local_8 = DAT_0060cff4 ^ (uint)&stack0xfffffffc;
  if (param_3 == 0) {
    eVar2 = __ultow_s(param_2,local_4c,0x22,10);
  }
  else {
    eVar2 = __itow_s(param_2,local_4c,0x22,10);
  }
  FUN_00416060(eVar2);
  pcVar1 = *(code **)(*(int *)this + 0x88);
  guard_check_icall(param_1,local_4c);
  (*pcVar1)();
  __security_check_cookie(local_8 ^ (uint)&stack0xfffffffc);
  return;
}

