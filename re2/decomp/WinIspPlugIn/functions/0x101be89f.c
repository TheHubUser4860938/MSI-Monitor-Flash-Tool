// rea decompile_all
// name: __87except
// address: 0x101be89f
// body: available
// range: 0x101be89f-0x101be9a9 inclusive
// non_contiguous: false
// provider: Ghidra 12.1.2 (ghidra)
// analysis_profile: b075844f08879296d957518397cd0ddda73db81dce53d00d3f0e702766fc2af6
// limitations: The session serves operations only after Ghidra reports default auto-analysis complete; incomplete analysis does not expose partial results.; The imported Program and temporary project are ephemeral and deleted on close. Annotation operations edit session database metadata; original executable bytes are never written.; Cancelling an active Ghidra request terminates its ephemeral database and discards session annotations. The selected target remains open; the next provider query imports the original artifact again.; Default-space addresses use lowercase 0x-prefixed hexadecimal; other address spaces use <percent-encoded-space>:0x<hex>.; The Ghidra Program references PDB WinIspPlugIn.pdb (GUID d9f398c7-6c98-49a8-af25-a0659d5ad2f3, age (hex) 1, signature unknown, version RSDS); Ghidra reports load state unknown. Original names and types may be missing; an empty name search does not prove a procedure is absent. Use list_procedures and address-based analysis to inspect recovered functions. REA does not admit a caller-selected PDB companion.; This session uses Ghidra 12.1.2. The bridge is verified against 12.1.4; other 12.1.x builds are accepted and the observed version is reported.; Pseudocode is Ghidra decompiler output, not original source and not text-equivalent to Hopper output.; External functions and functions without an analyzable body return null; other decompiler failures remain explicit.
// pseudocode: provider-specific; not original source


/* Library Function - Single Match
    __87except
   
   Library: Visual Studio 2015 Release */

void __87except(int param_1,int *param_2,ushort *param_3)

{
  char cVar1;
  int iVar2;
  undefined4 uVar3;
  uint local_94;
  undefined1 local_90 [48];
  undefined8 local_60;
  uint local_50;
  uint local_14;
  
  local_14 = DAT_1023dfec ^ (uint)&stack0xfffffff0;
  local_94 = (uint)*param_3;
  iVar2 = *param_2;
  if (iVar2 == 1) {
LAB_101be907:
    uVar3 = 8;
  }
  else if (iVar2 == 2) {
    uVar3 = 4;
  }
  else if (iVar2 == 3) {
    uVar3 = 0x11;
  }
  else if (iVar2 == 4) {
    uVar3 = 0x12;
  }
  else {
    if (iVar2 == 5) goto LAB_101be907;
    if (iVar2 != 8) goto LAB_101be969;
    uVar3 = 0x10;
  }
  iVar2 = __handle_exc(uVar3,param_2 + 6,local_94);
  if (iVar2 == 0) {
    if (((param_1 == 0x10) || (param_1 == 0x16)) || (param_1 == 0x1d)) {
      local_60 = *(undefined8 *)(param_2 + 4);
      local_50 = local_50 & 0xffffffe3 | 3;
    }
    else {
      local_50 = local_50 & 0xfffffffe;
    }
    __raise_exc(local_90,&local_94,uVar3,param_1,param_2 + 2,param_2 + 6);
  }
LAB_101be969:
  __ctrlfp(local_94,0xffff);
  if (((*param_2 == 8) || (cVar1 = ___acrt_has_user_matherr(), cVar1 == '\0')) ||
     (iVar2 = ___acrt_invoke_user_matherr(param_2), iVar2 == 0)) {
    __set_errno_from_matherr(*param_2);
  }
  __security_check_cookie(local_14 ^ (uint)&stack0xfffffff0);
  return;
}

