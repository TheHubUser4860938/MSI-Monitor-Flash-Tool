// rea decompile_all
// name: CPaneContainer::CalcAvailableSpace
// address: 0x10158e6a
// body: available
// range: 0x10158e6a-0x10158f6e inclusive
// non_contiguous: false
// provider: Ghidra 12.1.2 (ghidra)
// analysis_profile: b075844f08879296d957518397cd0ddda73db81dce53d00d3f0e702766fc2af6
// limitations: The session serves operations only after Ghidra reports default auto-analysis complete; incomplete analysis does not expose partial results.; The imported Program and temporary project are ephemeral and deleted on close. Annotation operations edit session database metadata; original executable bytes are never written.; Cancelling an active Ghidra request terminates its ephemeral database and discards session annotations. The selected target remains open; the next provider query imports the original artifact again.; Default-space addresses use lowercase 0x-prefixed hexadecimal; other address spaces use <percent-encoded-space>:0x<hex>.; The Ghidra Program references PDB Comm_Aux.pdb (GUID ba7920cc-daa3-4461-a102-1f8f66c67a2a, age (hex) 1, signature unknown, version RSDS); Ghidra reports load state unknown. Original names and types may be missing; an empty name search does not prove a procedure is absent. Use list_procedures and address-based analysis to inspect recovered functions. REA does not admit a caller-selected PDB companion.; This session uses Ghidra 12.1.2. The bridge is verified against 12.1.4; other 12.1.x builds are accepted and the observed version is reported.; Pseudocode is Ghidra decompiler output, not original source and not text-equivalent to Hopper output.; External functions and functions without an analyzable body return null; other decompiler failures remain explicit.
// pseudocode: provider-specific; not original source


/* Library Function - Single Match
    public: virtual class CSize __thiscall CPaneContainer::CalcAvailableSpace(class CSize,int)
   
   Library: Visual Studio 2015 Release */

void __thiscall
CPaneContainer::CalcAvailableSpace
          (CPaneContainer *this,int *param_2,int param_3,int param_4,int param_5)

{
  code *pcVar1;
  int iVar2;
  int iVar3;
  int local_30;
  int local_2c;
  int local_28;
  int local_20;
  int local_1c;
  int local_18;
  int local_14;
  int local_10;
  int local_c;
  uint local_8;
  
  local_8 = DAT_10206460 ^ (uint)&stack0xfffffffc;
  local_18 = 0;
  local_14 = 0;
  local_10 = 0;
  local_c = 0;
  pcVar1 = *(code **)(*(int *)this + 0xc);
  guard_check_icall(&local_18,0);
  (*pcVar1)();
  if (param_5 == 0) {
    local_2c = local_18 + param_3;
    local_30 = local_14 + param_4;
    local_28 = local_10;
    iVar3 = local_c;
  }
  else {
    local_28 = local_10 + param_3;
    local_30 = local_14;
    local_2c = local_18;
    iVar3 = local_c + param_4;
  }
  local_20 = 0;
  local_1c = 0;
  pcVar1 = *(code **)(*(int *)this + 0x10);
  guard_check_icall(&local_20);
  (*pcVar1)();
  *param_2 = param_3;
  param_2[1] = param_4;
  if (local_28 - local_2c < local_20) {
    iVar2 = (local_10 - local_18) - local_20;
    *param_2 = iVar2;
    if (iVar2 < 0) {
      *param_2 = 0;
    }
    if (param_3 < 0) {
      *param_2 = -*param_2;
    }
  }
  if (iVar3 - local_30 < local_1c) {
    local_30 = (iVar3 - local_1c) - local_30;
    param_2[1] = local_30;
    if (local_30 < 0) {
      param_2[1] = 0;
    }
    if (param_4 < 0) {
      param_2[1] = -param_2[1];
    }
  }
  __security_check_cookie(local_8 ^ (uint)&stack0xfffffffc);
  return;
}

