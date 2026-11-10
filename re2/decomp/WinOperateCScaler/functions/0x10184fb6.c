// rea decompile_all
// name: ___acrt_fp_format
// address: 0x10184fb6
// body: available
// range: 0x10184fb6-0x101850ff inclusive
// non_contiguous: false
// provider: Ghidra 12.1.2 (ghidra)
// analysis_profile: b075844f08879296d957518397cd0ddda73db81dce53d00d3f0e702766fc2af6
// limitations: The session serves operations only after Ghidra reports default auto-analysis complete; incomplete analysis does not expose partial results.; The imported Program and temporary project are ephemeral and deleted on close. Annotation operations edit session database metadata; original executable bytes are never written.; Cancelling an active Ghidra request terminates its ephemeral database and discards session annotations. The selected target remains open; the next provider query imports the original artifact again.; Default-space addresses use lowercase 0x-prefixed hexadecimal; other address spaces use <percent-encoded-space>:0x<hex>.; The Ghidra Program references PDB WinOperateCScaler.pdb (GUID a6737962-efea-4805-8ae6-1fc1ef126554, age (hex) 1, signature unknown, version RSDS); Ghidra reports load state unknown. Original names and types may be missing; an empty name search does not prove a procedure is absent. Use list_procedures and address-based analysis to inspect recovered functions. REA does not admit a caller-selected PDB companion.; This session uses Ghidra 12.1.2. The bridge is verified against 12.1.4; other 12.1.x builds are accepted and the observed version is reported.; Pseudocode is Ghidra decompiler output, not original source and not text-equivalent to Hopper output.; External functions and functions without an analyzable body return null; other decompiler failures remain explicit.
// pseudocode: provider-specific; not original source


/* Library Function - Single Match
    ___acrt_fp_format
   
   Library: Visual Studio 2015 Release */

int ___acrt_fp_format(double *param_1,char *param_2,uint param_3,char *param_4,uint param_5,
                     int param_6,int param_7,uint param_8,undefined4 param_9,
                     __crt_locale_pointers *param_10)

{
  bool bVar1;
  int *piVar2;
  __acrt_fp_class _Var3;
  int iVar4;
  uint uVar5;
  undefined4 local_8;
  
  if (param_2 == (char *)0x0) {
    piVar2 = __errno();
    iVar4 = 0x16;
    *piVar2 = 0x16;
    FUN_1016ec41();
  }
  else if (((param_3 == 0) || (param_4 == (char *)0x0)) || (param_5 == 0)) {
    piVar2 = __errno();
    iVar4 = 0x16;
    *piVar2 = 0x16;
    FUN_1016ec41();
  }
  else {
    if (((param_6 == 0x41) || (param_6 == 0x45)) ||
       ((param_6 == 0x46 || (local_8 = 0, param_6 == 0x47)))) {
      local_8 = 1;
    }
    if (((param_8 & 8) == 0) && (_Var3 = __acrt_fp_classify(param_1), _Var3 != 0)) {
      bVar1 = __acrt_fp_is_negative(param_1);
      iVar4 = FUN_10184e8a(_Var3,bVar1,param_2,param_3,local_8);
    }
    else {
      if ((param_8 & 0x10) == 0) {
        uVar5 = 2;
      }
      else {
        uVar5 = 3;
      }
      bVar1 = SUB41(local_8,0);
      if (param_6 < 0x62) {
        if ((param_6 == 0x61) || (param_6 == 0x41)) {
          iVar4 = fp_format_a(param_1,param_2,param_3,param_4,param_5,param_7,bVar1,uVar5,param_10);
          return iVar4;
        }
        param_6 = param_6 + -0x45;
      }
      else {
        param_6 = param_6 + -0x65;
      }
      if (param_6 == 0) {
        iVar4 = fp_format_e(param_1,param_2,param_3,param_4,param_5,param_7,bVar1,uVar5,param_10);
      }
      else if (param_6 == 1) {
        iVar4 = fp_format_f(param_1,param_2,param_3,param_4,param_5,param_7,param_10);
      }
      else {
        iVar4 = fp_format_g(param_1,param_2,param_3,param_4,param_5,param_7,bVar1,uVar5,param_10);
      }
    }
  }
  return iVar4;
}

