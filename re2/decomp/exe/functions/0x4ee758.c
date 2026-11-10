// rea decompile_all
// name: CDockingPanesRow::GetAvailableLength
// address: 0x4ee758
// body: available
// range: 0x4ee758-0x4ee83d inclusive
// non_contiguous: false
// provider: Ghidra 12.1.2 (ghidra)
// analysis_profile: ac6d50be2cdf54f7005df47d1ed7e7ef55dee595681eb1b7c2e0b00d70cd697d
// limitations: The session serves operations only after Ghidra reports default auto-analysis complete; incomplete analysis does not expose partial results.; The imported Program and temporary project are ephemeral and deleted on close. Annotation operations edit session database metadata; original executable bytes are never written.; Cancelling an active Ghidra request terminates its ephemeral database and discards session annotations. The selected target remains open; the next provider query imports the original artifact again.; Default-space addresses use lowercase 0x-prefixed hexadecimal; other address spaces use <percent-encoded-space>:0x<hex>.; The Ghidra Program references PDB ISPToolForMsi.pdb (GUID b8f2ac8f-1d6f-438d-800f-ed4a14426ac6, age (hex) 1, signature unknown, version RSDS); Ghidra reports load state unknown. Original names and types may be missing; an empty name search does not prove a procedure is absent. Use list_procedures and address-based analysis to inspect recovered functions. REA does not admit a caller-selected PDB companion.; This session uses Ghidra 12.1.2. The bridge is verified against 12.1.4; other 12.1.x builds are accepted and the observed version is reported.; Pseudocode is Ghidra decompiler output, not original source and not text-equivalent to Hopper output.; External functions and functions without an analyzable body return null; other decompiler failures remain explicit.
// pseudocode: provider-specific; not original source


/* Library Function - Single Match
    public: virtual int __thiscall CDockingPanesRow::GetAvailableLength(int)const 
   
   Library: Visual Studio 2015 Release */

int __thiscall CDockingPanesRow::GetAvailableLength(CDockingPanesRow *this,int param_1)

{
  code *pcVar1;
  int iVar2;
  int local_30;
  CPane *local_2c;
  undefined4 local_28;
  undefined4 local_24;
  undefined4 local_20;
  undefined4 local_1c;
  tagRECT local_18;
  uint local_8;
  
  local_8 = DAT_0060cff4 ^ (uint)&stack0xfffffffc;
  local_28 = 0;
  local_24 = 0;
  local_20 = 0;
  local_1c = 0;
  GetClientRect(this,(CRect *)&local_28);
  local_30 = *(int *)(this + 0x28);
  while (local_30 != 0) {
    local_2c = (CPane *)FUN_0043410a(&local_30);
    pcVar1 = *(code **)(*(int *)local_2c + 0x17c);
    guard_check_icall();
    iVar2 = (*pcVar1)();
    if ((iVar2 != 0) || (*(int *)(this + 4) != 0)) {
      local_18.left = 0;
      local_18.top = local_18.left;
      local_18.right = local_18.left;
      local_18.bottom = local_18.left;
      if (param_1 == 0) {
        ::GetWindowRect(*(HWND *)(local_2c + 0x20),&local_18);
      }
      else {
        CPane::GetVirtualRect(local_2c,(CRect *)&local_18);
      }
    }
  }
  iVar2 = __security_check_cookie(local_8 ^ (uint)&stack0xfffffffc);
  return iVar2;
}

