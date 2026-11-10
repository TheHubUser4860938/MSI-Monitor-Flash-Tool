// rea decompile_all
// name: common_fgets<wchar_t>
// address: 0x584d84
// body: available
// range: 0x584d84-0x584e3a inclusive
// non_contiguous: false
// provider: Ghidra 12.1.2 (ghidra)
// analysis_profile: ac6d50be2cdf54f7005df47d1ed7e7ef55dee595681eb1b7c2e0b00d70cd697d
// limitations: The session serves operations only after Ghidra reports default auto-analysis complete; incomplete analysis does not expose partial results.; The imported Program and temporary project are ephemeral and deleted on close. Annotation operations edit session database metadata; original executable bytes are never written.; Cancelling an active Ghidra request terminates its ephemeral database and discards session annotations. The selected target remains open; the next provider query imports the original artifact again.; Default-space addresses use lowercase 0x-prefixed hexadecimal; other address spaces use <percent-encoded-space>:0x<hex>.; The Ghidra Program references PDB ISPToolForMsi.pdb (GUID b8f2ac8f-1d6f-438d-800f-ed4a14426ac6, age (hex) 1, signature unknown, version RSDS); Ghidra reports load state unknown. Original names and types may be missing; an empty name search does not prove a procedure is absent. Use list_procedures and address-based analysis to inspect recovered functions. REA does not admit a caller-selected PDB companion.; This session uses Ghidra 12.1.2. The bridge is verified against 12.1.4; other 12.1.x builds are accepted and the observed version is reported.; Pseudocode is Ghidra decompiler output, not original source and not text-equivalent to Hopper output.; External functions and functions without an analyzable body return null; other decompiler failures remain explicit.
// pseudocode: provider-specific; not original source


/* WARNING: Function: __SEH_prolog4 replaced with injection: SEH_prolog4 */
/* WARNING: Function: __SEH_epilog4 replaced with injection: EH_epilog3 */
/* Library Function - Single Match
    wchar_t * __cdecl common_fgets<wchar_t>(wchar_t * const,int,class __crt_stdio_stream)
   
   Library: Visual Studio 2015 Release */

wchar_t * __cdecl common_fgets<wchar_t>(wchar_t *param_1,int param_2,FILE *param_3)

{
  wchar_t wVar1;
  int *piVar2;
  int iVar3;
  wchar_t *pwVar4;
  wchar_t *pwVar5;
  
  if ((((param_1 == (wchar_t *)0x0) && (param_2 != 0)) || (param_2 < 0)) || (param_3 == (FILE *)0x0)
     ) {
    piVar2 = __errno();
    *piVar2 = 0x16;
    FUN_0057662d();
  }
  else if (param_2 != 0) {
    __lock_file(param_3);
    iVar3 = 1;
    pwVar4 = param_1;
    do {
      if (iVar3 == param_2) {
LAB_00584e0b:
        *pwVar4 = L'\0';
        pwVar5 = param_1;
LAB_00584e16:
        FUN_00584e3e();
        return pwVar5;
      }
      wVar1 = FUN_0057a683(param_3);
      if (wVar1 == L'\xffff') {
        pwVar5 = (wchar_t *)0x0;
        if (pwVar4 == param_1) goto LAB_00584e16;
        goto LAB_00584e0b;
      }
      *pwVar4 = wVar1;
      pwVar4 = pwVar4 + 1;
      if (wVar1 == L'\n') goto LAB_00584e0b;
      iVar3 = iVar3 + 1;
    } while( true );
  }
  return (wchar_t *)0x0;
}

