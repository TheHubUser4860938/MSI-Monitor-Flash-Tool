// rea decompile_all
// name: CDockingPanesRow::GetAvailableSpace
// address: 0x100c80ce
// body: available
// range: 0x100c80ce-0x100c8181 inclusive
// non_contiguous: false
// provider: Ghidra 12.1.2 (ghidra)
// analysis_profile: b075844f08879296d957518397cd0ddda73db81dce53d00d3f0e702766fc2af6
// limitations: The session serves operations only after Ghidra reports default auto-analysis complete; incomplete analysis does not expose partial results.; The imported Program and temporary project are ephemeral and deleted on close. Annotation operations edit session database metadata; original executable bytes are never written.; Cancelling an active Ghidra request terminates its ephemeral database and discards session annotations. The selected target remains open; the next provider query imports the original artifact again.; Default-space addresses use lowercase 0x-prefixed hexadecimal; other address spaces use <percent-encoded-space>:0x<hex>.; The Ghidra Program references PDB WinOperateCScaler.pdb (GUID a6737962-efea-4805-8ae6-1fc1ef126554, age (hex) 1, signature unknown, version RSDS); Ghidra reports load state unknown. Original names and types may be missing; an empty name search does not prove a procedure is absent. Use list_procedures and address-based analysis to inspect recovered functions. REA does not admit a caller-selected PDB companion.; This session uses Ghidra 12.1.2. The bridge is verified against 12.1.4; other 12.1.x builds are accepted and the observed version is reported.; Pseudocode is Ghidra decompiler output, not original source and not text-equivalent to Hopper output.; External functions and functions without an analyzable body return null; other decompiler failures remain explicit.
// pseudocode: provider-specific; not original source


/* Library Function - Single Match
    public: virtual void __thiscall CDockingPanesRow::GetAvailableSpace(class CRect &)
   
   Library: Visual Studio 2015 Release */

void __thiscall CDockingPanesRow::GetAvailableSpace(CDockingPanesRow *this,CRect *param_1)

{
  code *pcVar1;
  undefined4 *puVar2;
  int iVar3;
  int dy;
  int local_20;
  int *local_1c;
  tagRECT local_18;
  uint local_8;
  
  local_8 = DAT_10201fec ^ (uint)&stack0xfffffffc;
  GetWindowRect(this,param_1);
  local_20 = *(int *)(this + 0x28);
  while (local_20 != 0) {
    puVar2 = (undefined4 *)FUN_100972dc(&local_20);
    local_1c = (int *)*puVar2;
    pcVar1 = *(code **)(*local_1c + 0x17c);
    guard_check_icall();
    iVar3 = (*pcVar1)();
    if ((iVar3 != 0) || (*(int *)(this + 4) != 0)) {
      local_18.left = 0;
      local_18.top = 0;
      local_18.right = 0;
      local_18.bottom = 0;
      ::GetWindowRect((HWND)local_1c[8],&local_18);
      if ((*(uint *)(this + 0x40) & 0xa000) == 0) {
        dy = local_18.top - local_18.bottom;
        iVar3 = 0;
      }
      else {
        iVar3 = local_18.left - local_18.right;
        dy = 0;
      }
      InflateRect((LPRECT)param_1,iVar3,dy);
    }
  }
  __security_check_cookie(local_8 ^ (uint)&stack0xfffffffc);
  return;
}

