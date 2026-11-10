// rea decompile_all
// name: CPaneContainer::CalcAvailablePaneSpace
// address: 0x10158d58
// body: available
// range: 0x10158d58-0x10158e69 inclusive
// non_contiguous: false
// provider: Ghidra 12.1.2 (ghidra)
// analysis_profile: b075844f08879296d957518397cd0ddda73db81dce53d00d3f0e702766fc2af6
// limitations: The session serves operations only after Ghidra reports default auto-analysis complete; incomplete analysis does not expose partial results.; The imported Program and temporary project are ephemeral and deleted on close. Annotation operations edit session database metadata; original executable bytes are never written.; Cancelling an active Ghidra request terminates its ephemeral database and discards session annotations. The selected target remains open; the next provider query imports the original artifact again.; Default-space addresses use lowercase 0x-prefixed hexadecimal; other address spaces use <percent-encoded-space>:0x<hex>.; The Ghidra Program references PDB Comm_Aux.pdb (GUID ba7920cc-daa3-4461-a102-1f8f66c67a2a, age (hex) 1, signature unknown, version RSDS); Ghidra reports load state unknown. Original names and types may be missing; an empty name search does not prove a procedure is absent. Use list_procedures and address-based analysis to inspect recovered functions. REA does not admit a caller-selected PDB companion.; This session uses Ghidra 12.1.2. The bridge is verified against 12.1.4; other 12.1.x builds are accepted and the observed version is reported.; Pseudocode is Ghidra decompiler output, not original source and not text-equivalent to Hopper output.; External functions and functions without an analyzable body return null; other decompiler failures remain explicit.
// pseudocode: provider-specific; not original source


/* Library Function - Single Match
    public: virtual int __thiscall CPaneContainer::CalcAvailablePaneSpace(int,class CPane *,class
   CPaneContainer *,int)
   
   Library: Visual Studio 2015 Release */

int __thiscall
CPaneContainer::CalcAvailablePaneSpace
          (CPaneContainer *this,int param_1,CPane *param_2,CPaneContainer *param_3,int param_4)

{
  code *pcVar1;
  int iVar2;
  int iVar3;
  undefined1 local_2c [4];
  CPane *local_28;
  undefined1 local_24 [4];
  CPaneContainer *local_20;
  CPaneContainer *local_1c;
  tagRECT local_18;
  uint local_8;
  
  local_8 = DAT_10206460 ^ (uint)&stack0xfffffffc;
  local_28 = param_2;
  local_18.left = 0;
  local_18.top = 0;
  local_18.right = 0;
  local_18.bottom = 0;
  local_1c = param_3;
  local_20 = this;
  if (param_2 == (CPane *)0x0) {
    if (param_3 != (CPaneContainer *)0x0) {
      iVar3 = IsPaneDividerHorz(this);
      iVar2 = *(int *)param_3;
      if (iVar3 == 0) {
        guard_check_icall(local_2c,param_1,0,param_4);
        (**(code **)(iVar2 + 0x44))();
      }
      else {
        guard_check_icall(local_24,0,param_1,param_4);
        (**(code **)(iVar2 + 0x44))();
      }
    }
  }
  else {
    ::GetWindowRect(*(HWND *)(param_2 + 0x20),&local_18);
    iVar2 = IsPaneDividerHorz(local_20);
    if (iVar2 == 0) {
      if (param_4 == 0) {
        local_18.left = local_18.left + param_1;
      }
      else {
        local_18.right = local_18.right + param_1;
      }
      pcVar1 = *(code **)(*(int *)local_28 + 0x2d0);
      guard_check_icall(local_24,local_18.left,local_18.top,local_18.right,local_18.bottom);
      (*pcVar1)();
    }
    else {
      if (param_4 == 0) {
        local_18.top = local_18.top + param_1;
      }
      else {
        local_18.bottom = local_18.bottom + param_1;
      }
      pcVar1 = *(code **)(*(int *)local_28 + 0x2d0);
      guard_check_icall(local_24,local_18.left,local_18.top,local_18.right,local_18.bottom);
      (*pcVar1)();
    }
  }
  iVar2 = __security_check_cookie(local_8 ^ (uint)&stack0xfffffffc);
  return iVar2;
}

