// rea decompile_all
// name: fp_format_e
// address: 0x101b24c2
// body: available
// range: 0x101b24c2-0x101b255c inclusive
// non_contiguous: false
// provider: Ghidra 12.1.2 (ghidra)
// analysis_profile: b075844f08879296d957518397cd0ddda73db81dce53d00d3f0e702766fc2af6
// limitations: The session serves operations only after Ghidra reports default auto-analysis complete; incomplete analysis does not expose partial results.; The imported Program and temporary project are ephemeral and deleted on close. Annotation operations edit session database metadata; original executable bytes are never written.; Cancelling an active Ghidra request terminates its ephemeral database and discards session annotations. The selected target remains open; the next provider query imports the original artifact again.; Default-space addresses use lowercase 0x-prefixed hexadecimal; other address spaces use <percent-encoded-space>:0x<hex>.; The Ghidra Program references PDB WinIspPlugIn.pdb (GUID d9f398c7-6c98-49a8-af25-a0659d5ad2f3, age (hex) 1, signature unknown, version RSDS); Ghidra reports load state unknown. Original names and types may be missing; an empty name search does not prove a procedure is absent. Use list_procedures and address-based analysis to inspect recovered functions. REA does not admit a caller-selected PDB companion.; This session uses Ghidra 12.1.2. The bridge is verified against 12.1.4; other 12.1.x builds are accepted and the observed version is reported.; Pseudocode is Ghidra decompiler output, not original source and not text-equivalent to Hopper output.; External functions and functions without an analyzable body return null; other decompiler failures remain explicit.
// pseudocode: provider-specific; not original source


/* Library Function - Single Match
    int __cdecl fp_format_e(double const * const,char * const,unsigned int,char * const,unsigned
   int,int,bool,unsigned int,struct __crt_locale_pointers * const)
   
   Library: Visual Studio 2015 Release */

int __cdecl
fp_format_e(double *param_1,char *param_2,uint param_3,char *param_4,uint param_5,int param_6,
           bool param_7,uint param_8,__crt_locale_pointers *param_9)

{
  int iVar1;
  undefined3 in_stack_0000001d;
  int local_10 [3];
  
  FUN_101bb089(*(undefined4 *)param_1,*(undefined4 *)((int)param_1 + 4),param_6 + 1,local_10,param_4
               ,param_5);
  iVar1 = -1;
  if (param_3 != 0xffffffff) {
    iVar1 = (param_3 - (local_10[0] == 0x2d)) - (uint)(0 < param_6);
  }
  iVar1 = ___acrt_fp_strflt_to_string
                    (param_2 + (uint)(0 < param_6) + (uint)(local_10[0] == 0x2d),iVar1,param_6 + 1,
                     local_10);
  if (iVar1 == 0) {
    iVar1 = FUN_101b255d(param_2,param_3,param_6,_param_7,param_8,local_10,0,param_9);
  }
  else {
    *param_2 = '\0';
  }
  return iVar1;
}

