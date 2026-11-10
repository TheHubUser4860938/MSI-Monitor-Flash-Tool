// rea decompile_all
// name: ___acrt_fp_strflt_to_string
// address: 0x597d95
// body: available
// range: 0x597d95-0x597e50 inclusive
// non_contiguous: false
// provider: Ghidra 12.1.2 (ghidra)
// analysis_profile: ac6d50be2cdf54f7005df47d1ed7e7ef55dee595681eb1b7c2e0b00d70cd697d
// limitations: The session serves operations only after Ghidra reports default auto-analysis complete; incomplete analysis does not expose partial results.; The imported Program and temporary project are ephemeral and deleted on close. Annotation operations edit session database metadata; original executable bytes are never written.; Cancelling an active Ghidra request terminates its ephemeral database and discards session annotations. The selected target remains open; the next provider query imports the original artifact again.; Default-space addresses use lowercase 0x-prefixed hexadecimal; other address spaces use <percent-encoded-space>:0x<hex>.; The Ghidra Program references PDB ISPToolForMsi.pdb (GUID b8f2ac8f-1d6f-438d-800f-ed4a14426ac6, age (hex) 1, signature unknown, version RSDS); Ghidra reports load state unknown. Original names and types may be missing; an empty name search does not prove a procedure is absent. Use list_procedures and address-based analysis to inspect recovered functions. REA does not admit a caller-selected PDB companion.; This session uses Ghidra 12.1.2. The bridge is verified against 12.1.4; other 12.1.x builds are accepted and the observed version is reported.; Pseudocode is Ghidra decompiler output, not original source and not text-equivalent to Hopper output.; External functions and functions without an analyzable body return null; other decompiler failures remain explicit.
// pseudocode: provider-specific; not original source


/* Library Function - Single Match
    ___acrt_fp_strflt_to_string
   
   Library: Visual Studio 2015 Release */

int ___acrt_fp_strflt_to_string(char *param_1,uint param_2,int param_3,int param_4)

{
  int *piVar1;
  char *pcVar2;
  char cVar3;
  char *pcVar4;
  int iVar5;
  
  if ((param_1 != (char *)0x0) && (param_2 != 0)) {
    *param_1 = '\0';
    iVar5 = param_3;
    if (param_3 < 1) {
      iVar5 = 0;
    }
    if (param_2 <= iVar5 + 1U) {
      piVar1 = __errno();
      iVar5 = 0x22;
      goto LAB_00597da9;
    }
    if (param_4 != 0) {
      pcVar4 = *(char **)(param_4 + 8);
      *param_1 = '0';
      pcVar2 = param_1;
      for (; pcVar2 = pcVar2 + 1, 0 < param_3; param_3 = param_3 + -1) {
        cVar3 = *pcVar4;
        if (cVar3 == '\0') {
          cVar3 = '0';
        }
        else {
          pcVar4 = pcVar4 + 1;
        }
        *pcVar2 = cVar3;
      }
      *pcVar2 = '\0';
      if ((-1 < param_3) && ('4' < *pcVar4)) {
        while (pcVar2 = pcVar2 + -1, *pcVar2 == '9') {
          *pcVar2 = '0';
        }
        *pcVar2 = *pcVar2 + '\x01';
      }
      if (*param_1 == '1') {
        *(int *)(param_4 + 4) = *(int *)(param_4 + 4) + 1;
      }
      else {
        pcVar4 = param_1 + 1;
        do {
          cVar3 = *pcVar4;
          pcVar4 = pcVar4 + 1;
        } while (cVar3 != '\0');
        FUN_00572d00(param_1,param_1 + 1,pcVar4 + (1 - (int)(param_1 + 2)));
      }
      return 0;
    }
  }
  piVar1 = __errno();
  iVar5 = 0x16;
LAB_00597da9:
  *piVar1 = iVar5;
  FUN_0057662d();
  return iVar5;
}

