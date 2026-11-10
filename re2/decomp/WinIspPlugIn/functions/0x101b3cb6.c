// rea decompile_all
// name: __except1
// address: 0x101b3cb6
// body: available
// range: 0x101b3cb6-0x101b3d83 inclusive
// non_contiguous: false
// provider: Ghidra 12.1.2 (ghidra)
// analysis_profile: b075844f08879296d957518397cd0ddda73db81dce53d00d3f0e702766fc2af6
// limitations: The session serves operations only after Ghidra reports default auto-analysis complete; incomplete analysis does not expose partial results.; The imported Program and temporary project are ephemeral and deleted on close. Annotation operations edit session database metadata; original executable bytes are never written.; Cancelling an active Ghidra request terminates its ephemeral database and discards session annotations. The selected target remains open; the next provider query imports the original artifact again.; Default-space addresses use lowercase 0x-prefixed hexadecimal; other address spaces use <percent-encoded-space>:0x<hex>.; The Ghidra Program references PDB WinIspPlugIn.pdb (GUID d9f398c7-6c98-49a8-af25-a0659d5ad2f3, age (hex) 1, signature unknown, version RSDS); Ghidra reports load state unknown. Original names and types may be missing; an empty name search does not prove a procedure is absent. Use list_procedures and address-based analysis to inspect recovered functions. REA does not admit a caller-selected PDB companion.; This session uses Ghidra 12.1.2. The bridge is verified against 12.1.4; other 12.1.x builds are accepted and the observed version is reported.; Pseudocode is Ghidra decompiler output, not original source and not text-equivalent to Hopper output.; External functions and functions without an analyzable body return null; other decompiler failures remain explicit.
// pseudocode: provider-specific; not original source


/* Library Function - Single Match
    __except1
   
   Library: Visual Studio 2015 Release */

void __except1(undefined4 param_1,undefined4 param_2,undefined8 param_3,undefined8 param_4,
              undefined4 param_5)

{
  char cVar1;
  int iVar2;
  undefined4 uVar3;
  undefined1 local_90 [64];
  uint local_50;
  uint local_14;
  
  uVar3 = param_5;
  local_14 = DAT_1023dfec ^ (uint)&stack0xfffffff0;
  iVar2 = __handle_exc(param_1,&param_4,param_5);
  if (iVar2 == 0) {
    local_50 = local_50 & 0xfffffffe;
    __raise_exc_ex(local_90,&param_5,param_1,param_2,&param_3,&param_4,0);
    uVar3 = param_5;
  }
  iVar2 = __errcode(param_1);
  cVar1 = ___acrt_has_user_matherr();
  if ((cVar1 == '\0') || (iVar2 == 0)) {
    __set_errno_from_matherr(iVar2);
    __ctrlfp();
  }
  else {
    __umatherr(iVar2,param_2,param_3,0,param_4,uVar3);
  }
  __security_check_cookie(local_14 ^ (uint)&stack0xfffffff0);
  return;
}

