// rea decompile_all
// name: common_sopen_dispatch<char>
// address: 0x101bef82
// body: available
// range: 0x101bef82-0x101bf01b inclusive
// non_contiguous: false
// provider: Ghidra 12.1.2 (ghidra)
// analysis_profile: b075844f08879296d957518397cd0ddda73db81dce53d00d3f0e702766fc2af6
// limitations: The session serves operations only after Ghidra reports default auto-analysis complete; incomplete analysis does not expose partial results.; The imported Program and temporary project are ephemeral and deleted on close. Annotation operations edit session database metadata; original executable bytes are never written.; Cancelling an active Ghidra request terminates its ephemeral database and discards session annotations. The selected target remains open; the next provider query imports the original artifact again.; Default-space addresses use lowercase 0x-prefixed hexadecimal; other address spaces use <percent-encoded-space>:0x<hex>.; The Ghidra Program references PDB WinIspPlugIn.pdb (GUID d9f398c7-6c98-49a8-af25-a0659d5ad2f3, age (hex) 1, signature unknown, version RSDS); Ghidra reports load state unknown. Original names and types may be missing; an empty name search does not prove a procedure is absent. Use list_procedures and address-based analysis to inspect recovered functions. REA does not admit a caller-selected PDB companion.; This session uses Ghidra 12.1.2. The bridge is verified against 12.1.4; other 12.1.x builds are accepted and the observed version is reported.; Pseudocode is Ghidra decompiler output, not original source and not text-equivalent to Hopper output.; External functions and functions without an analyzable body return null; other decompiler failures remain explicit.
// pseudocode: provider-specific; not original source


/* WARNING: Function: __SEH_prolog4 replaced with injection: SEH_prolog4 */
/* WARNING: Function: __SEH_epilog4 replaced with injection: EH_epilog3 */
/* Library Function - Single Match
    int __cdecl common_sopen_dispatch<char>(char const * const,int,int,int,int * const,int)
   
   Library: Visual Studio 2015 Release */

int __cdecl
common_sopen_dispatch<char>
          (char *param_1,int param_2,int param_3,int param_4,int *param_5,int param_6)

{
  int *piVar1;
  int iVar2;
  int local_24;
  errno_t local_20;
  undefined4 uStack_c;
  undefined *local_8;
  
  local_8 = &DAT_102388f0;
  uStack_c = 0x101bef8e;
  if (((param_5 == (int *)0x0) || (*param_5 = -1, param_1 == (char *)0x0)) ||
     ((param_6 != 0 && ((param_4 & 0xfffffe7fU) != 0)))) {
    piVar1 = __errno();
    iVar2 = 0x16;
    *piVar1 = 0x16;
    FUN_1019ab61();
  }
  else {
    local_24 = 0;
    local_20 = 0;
    local_8 = (undefined *)0x0;
    iVar2 = __sopen_nolock(&local_24,param_5,param_1,param_2,param_3,param_4,param_6);
    local_8 = (undefined *)0xfffffffe;
    local_20 = iVar2;
    FUN_101bf022();
    if (iVar2 != 0) {
      *param_5 = -1;
    }
  }
  return iVar2;
}

