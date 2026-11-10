// rea decompile_all
// name: CPane::GetAvailableExpandSize
// address: 0x10080c64
// body: available
// range: 0x10080c64-0x10080d3d inclusive
// non_contiguous: false
// provider: Ghidra 12.1.2 (ghidra)
// analysis_profile: b075844f08879296d957518397cd0ddda73db81dce53d00d3f0e702766fc2af6
// limitations: The session serves operations only after Ghidra reports default auto-analysis complete; incomplete analysis does not expose partial results.; The imported Program and temporary project are ephemeral and deleted on close. Annotation operations edit session database metadata; original executable bytes are never written.; Cancelling an active Ghidra request terminates its ephemeral database and discards session annotations. The selected target remains open; the next provider query imports the original artifact again.; Default-space addresses use lowercase 0x-prefixed hexadecimal; other address spaces use <percent-encoded-space>:0x<hex>.; The Ghidra Program references PDB Comm_Aux.pdb (GUID ba7920cc-daa3-4461-a102-1f8f66c67a2a, age (hex) 1, signature unknown, version RSDS); Ghidra reports load state unknown. Original names and types may be missing; an empty name search does not prove a procedure is absent. Use list_procedures and address-based analysis to inspect recovered functions. REA does not admit a caller-selected PDB companion.; This session uses Ghidra 12.1.2. The bridge is verified against 12.1.4; other 12.1.x builds are accepted and the observed version is reported.; Pseudocode is Ghidra decompiler output, not original source and not text-equivalent to Hopper output.; External functions and functions without an analyzable body return null; other decompiler failures remain explicit.
// pseudocode: provider-specific; not original source


/* Library Function - Single Match
    public: virtual int __thiscall CPane::GetAvailableExpandSize(void)const 
   
   Library: Visual Studio 2015 Release */

int __thiscall CPane::GetAvailableExpandSize(CPane *this)

{
  code *pcVar1;
  int iVar2;
  tagRECT local_18;
  uint local_8;
  
  local_8 = DAT_10206460 ^ (uint)&stack0xfffffffc;
  local_18.left = 0;
  local_18.top = 0;
  local_18.right = 0;
  local_18.bottom = 0;
  GetWindowRect(*(HWND *)(this + 0x20),&local_18);
  pcVar1 = *(code **)(*(int *)this + 0x164);
  guard_check_icall();
  iVar2 = (*pcVar1)();
  if ((iVar2 == 0) ||
     (local_18.right - local_18.left < *(int *)(this + 0x148) - *(int *)(this + 0x140))) {
    pcVar1 = *(code **)(*(int *)this + 0x164);
    guard_check_icall();
    iVar2 = (*pcVar1)();
    if ((iVar2 != 0) ||
       (local_18.bottom - local_18.top < *(int *)(this + 0x14c) - *(int *)(this + 0x144))) {
      pcVar1 = *(code **)(*(int *)this + 0x164);
      guard_check_icall();
      (*pcVar1)();
    }
  }
  iVar2 = __security_check_cookie(local_8 ^ (uint)&stack0xfffffffc);
  return iVar2;
}

