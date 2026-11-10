// rea decompile_all
// name: __umatherr
// address: 0x1019aada
// body: available
// range: 0x1019aada-0x1019ab7b inclusive
// non_contiguous: false
// provider: Ghidra 12.1.2 (ghidra)
// analysis_profile: b075844f08879296d957518397cd0ddda73db81dce53d00d3f0e702766fc2af6
// limitations: The session serves operations only after Ghidra reports default auto-analysis complete; incomplete analysis does not expose partial results.; The imported Program and temporary project are ephemeral and deleted on close. Annotation operations edit session database metadata; original executable bytes are never written.; Cancelling an active Ghidra request terminates its ephemeral database and discards session annotations. The selected target remains open; the next provider query imports the original artifact again.; Default-space addresses use lowercase 0x-prefixed hexadecimal; other address spaces use <percent-encoded-space>:0x<hex>.; The Ghidra Program references PDB Comm_Aux.pdb (GUID ba7920cc-daa3-4461-a102-1f8f66c67a2a, age (hex) 1, signature unknown, version RSDS); Ghidra reports load state unknown. Original names and types may be missing; an empty name search does not prove a procedure is absent. Use list_procedures and address-based analysis to inspect recovered functions. REA does not admit a caller-selected PDB companion.; This session uses Ghidra 12.1.2. The bridge is verified against 12.1.4; other 12.1.x builds are accepted and the observed version is reported.; Pseudocode is Ghidra decompiler output, not original source and not text-equivalent to Hopper output.; External functions and functions without an analyzable body return null; other decompiler failures remain explicit.
// pseudocode: provider-specific; not original source


/* Library Function - Single Match
    __umatherr
   
   Library: Visual Studio 2015 Release */

float10 __umatherr(undefined4 param_1,int param_2,undefined4 param_3,undefined4 param_4,
                  undefined4 param_5,undefined4 param_6,undefined4 param_7,undefined4 param_8,
                  undefined4 param_9)

{
  double dVar1;
  int iVar2;
  undefined4 local_24;
  int local_20;
  undefined4 local_1c;
  undefined4 local_18;
  undefined4 local_14;
  undefined4 local_10;
  undefined4 local_c;
  undefined4 uStack_8;
  
  local_20 = 0;
  iVar2 = 0;
  do {
    if ((&DAT_101dfd30)[iVar2 * 2] == param_2) {
      local_20 = *(int *)(&UNK_101dfd34 + iVar2 * 8);
      break;
    }
    iVar2 = iVar2 + 1;
  } while (iVar2 < 0x1d);
  if (local_20 == 0) {
    __ctrlfp(param_9,0xffff);
    __set_errno_from_matherr(param_1);
    dVar1 = (double)CONCAT44(param_8,param_7);
  }
  else {
    local_1c = param_3;
    local_18 = param_4;
    local_14 = param_5;
    local_10 = param_6;
    local_c = param_7;
    local_24 = param_1;
    uStack_8 = param_8;
    __ctrlfp(param_9,0xffff);
    iVar2 = ___acrt_invoke_user_matherr(&local_24);
    if (iVar2 == 0) {
      __set_errno_from_matherr(param_1);
    }
    dVar1 = (double)CONCAT44(uStack_8,local_c);
  }
  return (float10)dVar1;
}

