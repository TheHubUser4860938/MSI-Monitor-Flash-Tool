// rea decompile_all
// name: FUN_100452c0
// address: 0x100452c0
// body: available
// range: 0x100452c0-0x100454c1 inclusive
// non_contiguous: false
// provider: Ghidra 12.1.2 (ghidra)
// analysis_profile: b075844f08879296d957518397cd0ddda73db81dce53d00d3f0e702766fc2af6
// limitations: The session serves operations only after Ghidra reports default auto-analysis complete; incomplete analysis does not expose partial results.; The imported Program and temporary project are ephemeral and deleted on close. Annotation operations edit session database metadata; original executable bytes are never written.; Cancelling an active Ghidra request terminates its ephemeral database and discards session annotations. The selected target remains open; the next provider query imports the original artifact again.; Default-space addresses use lowercase 0x-prefixed hexadecimal; other address spaces use <percent-encoded-space>:0x<hex>.; The Ghidra Program references PDB Comm_Aux.pdb (GUID ba7920cc-daa3-4461-a102-1f8f66c67a2a, age (hex) 1, signature unknown, version RSDS); Ghidra reports load state unknown. Original names and types may be missing; an empty name search does not prove a procedure is absent. Use list_procedures and address-based analysis to inspect recovered functions. REA does not admit a caller-selected PDB companion.; This session uses Ghidra 12.1.2. The bridge is verified against 12.1.4; other 12.1.x builds are accepted and the observed version is reported.; Pseudocode is Ghidra decompiler output, not original source and not text-equivalent to Hopper output.; External functions and functions without an analyzable body return null; other decompiler failures remain explicit.
// pseudocode: provider-specific; not original source


void FUN_100452c0(byte param_1,undefined1 param_2,uint param_3,int param_4)

{
  int iVar1;
  int iVar2;
  undefined4 *in_ECX;
  uint uVar3;
  undefined4 *puVar4;
  undefined4 *local_1ac;
  uint local_1a8;
  undefined4 local_1a4;
  undefined4 local_1a0;
  undefined1 uStack_19c;
  uint3 uStack_19b;
  undefined4 uStack_198;
  undefined4 uStack_194;
  undefined4 *local_190;
  int iStack_18c;
  undefined4 uStack_188;
  undefined4 uStack_184;
  undefined8 local_180;
  undefined4 local_178;
  undefined4 local_174;
  undefined4 local_170;
  uint local_16c;
  undefined4 local_168;
  undefined4 uStack_164;
  undefined4 uStack_160;
  undefined4 uStack_15c;
  int local_158;
  undefined4 local_110;
  undefined4 auStack_10c [64];
  uint local_c;
  
  local_c = DAT_10206460 ^ (uint)&local_1ac;
  local_110._0_1_ = param_2;
  local_1ac = in_ECX;
  _memset((void *)((int)&local_110 + 1),0,0xff);
  if (param_4 != 0) {
    FUN_10181570((int)&local_110 + 1,param_4,param_3 & 0xffff);
  }
  if (DAT_1021ae90 == 0) {
    local_1a0 = in_ECX[1];
    local_190 = &local_110;
    iStack_18c = (param_3 & 0xffff) + 1;
    local_180 = 0;
    local_1a4 = 0x3002c;
    _uStack_19c = CONCAT31((uint3)param_1,1);
    uStack_198 = 0;
    uStack_194 = 0;
    uStack_188 = 0xffff;
    uStack_184 = 0;
    iVar1 = FUN_1000a920(*in_ECX,&local_1a4);
    if (iVar1 != 0) {
LAB_100453a4:
      __security_check_cookie(local_c ^ (uint)&local_1ac);
      return;
    }
    if (DAT_1021ae60 != 0) {
      Sleep(DAT_1021ae28);
    }
  }
  else {
    _memset(&local_174,0,100);
    local_178 = 0x20068;
    local_174 = in_ECX[1];
    uVar3 = (param_3 + 1 & 0xffff) >> 4;
    local_1a8 = param_3 + 1 & 0xf;
    iVar1 = 0;
    local_16c = (uint)param_1;
    local_170 = 2;
    local_158 = 0xf;
    if (uVar3 != 0) {
      puVar4 = &local_110;
      do {
        local_168 = *puVar4;
        uStack_164 = puVar4[1];
        uStack_160 = puVar4[2];
        uStack_15c = puVar4[3];
        iVar2 = FUN_10014c00(local_1ac[2],&local_178,0);
        if (iVar2 != 0) goto LAB_100453a4;
        iVar1 = iVar1 + 1;
        puVar4 = puVar4 + 4;
        in_ECX = local_1ac;
      } while (iVar1 < (int)uVar3);
    }
    if (local_1a8 != 0) {
      local_158 = local_1a8 - 1;
      FUN_10181570(&local_168,auStack_10c + iVar1 * 4 + -1,local_1a8);
      iVar1 = FUN_10014c00(in_ECX[2],&local_178,0);
      if (iVar1 != 0) goto LAB_100453a4;
    }
  }
  __security_check_cookie(local_c ^ (uint)&local_1ac);
  return;
}

