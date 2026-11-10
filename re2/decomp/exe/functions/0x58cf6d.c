// rea decompile_all
// name: fp_format_f
// address: 0x58cf6d
// body: available
// range: 0x58cf6d-0x58cff9 inclusive
// non_contiguous: false
// provider: Ghidra 12.1.2 (ghidra)
// analysis_profile: ac6d50be2cdf54f7005df47d1ed7e7ef55dee595681eb1b7c2e0b00d70cd697d
// limitations: The session serves operations only after Ghidra reports default auto-analysis complete; incomplete analysis does not expose partial results.; The imported Program and temporary project are ephemeral and deleted on close. Annotation operations edit session database metadata; original executable bytes are never written.; Cancelling an active Ghidra request terminates its ephemeral database and discards session annotations. The selected target remains open; the next provider query imports the original artifact again.; Default-space addresses use lowercase 0x-prefixed hexadecimal; other address spaces use <percent-encoded-space>:0x<hex>.; The Ghidra Program references PDB ISPToolForMsi.pdb (GUID b8f2ac8f-1d6f-438d-800f-ed4a14426ac6, age (hex) 1, signature unknown, version RSDS); Ghidra reports load state unknown. Original names and types may be missing; an empty name search does not prove a procedure is absent. Use list_procedures and address-based analysis to inspect recovered functions. REA does not admit a caller-selected PDB companion.; This session uses Ghidra 12.1.2. The bridge is verified against 12.1.4; other 12.1.x builds are accepted and the observed version is reported.; Pseudocode is Ghidra decompiler output, not original source and not text-equivalent to Hopper output.; External functions and functions without an analyzable body return null; other decompiler failures remain explicit.
// pseudocode: provider-specific; not original source


/* Library Function - Single Match
    int __cdecl fp_format_f(double const * const,char * const,unsigned int,char * const,unsigned
   int,int,struct __crt_locale_pointers * const)
   
   Library: Visual Studio 2015 Release */

int __cdecl
fp_format_f(double *param_1,char *param_2,uint param_3,char *param_4,uint param_5,int param_6,
           __crt_locale_pointers *param_7)

{
  int iVar1;
  int local_10;
  int local_c;
  undefined4 uStack_8;
  
  local_10 = 0;
  local_c = 0;
  uStack_8 = 0;
  FUN_00597e7b(*(undefined4 *)param_1,*(undefined4 *)((int)param_1 + 4),param_6,&local_10,param_4,
               param_5);
  iVar1 = -1;
  if (param_3 != 0xffffffff) {
    iVar1 = param_3 - (local_10 == 0x2d);
  }
  iVar1 = ___acrt_fp_strflt_to_string
                    (param_2 + (local_10 == 0x2d),iVar1,local_c + param_6,&local_10);
  if (iVar1 == 0) {
    iVar1 = fp_format_f_internal(param_2,param_3,param_6,(_strflt *)&local_10,false,param_7);
  }
  else {
    *param_2 = '\0';
  }
  return iVar1;
}

