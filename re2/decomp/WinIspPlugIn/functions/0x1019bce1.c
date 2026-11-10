// rea decompile_all
// name: common_vsnprintf_s<wchar_t>
// address: 0x1019bce1
// body: available
// range: 0x1019bce1-0x1019bde8 inclusive
// non_contiguous: false
// provider: Ghidra 12.1.2 (ghidra)
// analysis_profile: b075844f08879296d957518397cd0ddda73db81dce53d00d3f0e702766fc2af6
// limitations: The session serves operations only after Ghidra reports default auto-analysis complete; incomplete analysis does not expose partial results.; The imported Program and temporary project are ephemeral and deleted on close. Annotation operations edit session database metadata; original executable bytes are never written.; Cancelling an active Ghidra request terminates its ephemeral database and discards session annotations. The selected target remains open; the next provider query imports the original artifact again.; Default-space addresses use lowercase 0x-prefixed hexadecimal; other address spaces use <percent-encoded-space>:0x<hex>.; The Ghidra Program references PDB WinIspPlugIn.pdb (GUID d9f398c7-6c98-49a8-af25-a0659d5ad2f3, age (hex) 1, signature unknown, version RSDS); Ghidra reports load state unknown. Original names and types may be missing; an empty name search does not prove a procedure is absent. Use list_procedures and address-based analysis to inspect recovered functions. REA does not admit a caller-selected PDB companion.; This session uses Ghidra 12.1.2. The bridge is verified against 12.1.4; other 12.1.x builds are accepted and the observed version is reported.; Pseudocode is Ghidra decompiler output, not original source and not text-equivalent to Hopper output.; External functions and functions without an analyzable body return null; other decompiler failures remain explicit.
// pseudocode: provider-specific; not original source


/* Library Function - Single Match
    int __cdecl common_vsnprintf_s<wchar_t>(unsigned __int64,wchar_t * const,unsigned int,unsigned
   int,wchar_t const * const,struct __crt_locale_pointers * const,char * const)
   
   Library: Visual Studio 2015 Release */

int __cdecl
common_vsnprintf_s<wchar_t>
          (__uint64 param_1,wchar_t *param_2,uint param_3,uint param_4,wchar_t *param_5,
          __crt_locale_pointers *param_6,char *param_7)

{
  int iVar1;
  int *piVar2;
  int iVar3;
  
  if (param_5 == (wchar_t *)0x0) {
    piVar2 = __errno();
    *piVar2 = 0x16;
    FUN_1019ab61();
    return -1;
  }
  if (param_4 == 0) {
    if (param_2 == (wchar_t *)0x0) {
      if (param_3 == 0) {
        return 0;
      }
    }
    else {
LAB_1019bd2e:
      if (param_3 != 0) {
        piVar2 = __errno();
        if (param_4 < param_3) {
          iVar1 = *piVar2;
          iVar3 = common_vsprintf<__crt_stdio_output::format_validation_base,wchar_t>
                            (param_1,param_2,param_4 + 1,param_5,param_6,param_7);
          if (iVar3 == -2) {
            piVar2 = __errno();
            if (*piVar2 != 0x22) {
              return -1;
            }
            piVar2 = __errno();
            *piVar2 = iVar1;
            return -1;
          }
LAB_1019bdb4:
          if (-1 < iVar3) {
            return iVar3;
          }
        }
        else {
          iVar1 = *piVar2;
          iVar3 = common_vsprintf<__crt_stdio_output::format_validation_base,wchar_t>
                            (param_1,param_2,param_3,param_5,param_6,param_7);
          param_2[param_3 - 1] = L'\0';
          if (iVar3 != -2) goto LAB_1019bdb4;
          if (param_4 == 0xffffffff) {
            piVar2 = __errno();
            if (*piVar2 != 0x22) {
              return -1;
            }
            piVar2 = __errno();
            *piVar2 = iVar1;
            return -1;
          }
        }
        *param_2 = L'\0';
        if (iVar3 != -2) {
          return -1;
        }
        piVar2 = __errno();
        *piVar2 = 0x22;
        goto LAB_1019bdda;
      }
    }
  }
  else if (param_2 != (wchar_t *)0x0) goto LAB_1019bd2e;
  piVar2 = __errno();
  *piVar2 = 0x16;
LAB_1019bdda:
  FUN_1019ab61();
  return -1;
}

