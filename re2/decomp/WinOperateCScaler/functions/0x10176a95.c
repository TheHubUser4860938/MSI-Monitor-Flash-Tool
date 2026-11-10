// rea decompile_all
// name: common_vsscanf<wchar_t>
// address: 0x10176a95
// body: available
// range: 0x10176a95-0x10176b43 inclusive
// non_contiguous: false
// provider: Ghidra 12.1.2 (ghidra)
// analysis_profile: b075844f08879296d957518397cd0ddda73db81dce53d00d3f0e702766fc2af6
// limitations: The session serves operations only after Ghidra reports default auto-analysis complete; incomplete analysis does not expose partial results.; The imported Program and temporary project are ephemeral and deleted on close. Annotation operations edit session database metadata; original executable bytes are never written.; Cancelling an active Ghidra request terminates its ephemeral database and discards session annotations. The selected target remains open; the next provider query imports the original artifact again.; Default-space addresses use lowercase 0x-prefixed hexadecimal; other address spaces use <percent-encoded-space>:0x<hex>.; The Ghidra Program references PDB WinOperateCScaler.pdb (GUID a6737962-efea-4805-8ae6-1fc1ef126554, age (hex) 1, signature unknown, version RSDS); Ghidra reports load state unknown. Original names and types may be missing; an empty name search does not prove a procedure is absent. Use list_procedures and address-based analysis to inspect recovered functions. REA does not admit a caller-selected PDB companion.; This session uses Ghidra 12.1.2. The bridge is verified against 12.1.4; other 12.1.x builds are accepted and the observed version is reported.; Pseudocode is Ghidra decompiler output, not original source and not text-equivalent to Hopper output.; External functions and functions without an analyzable body return null; other decompiler failures remain explicit.
// pseudocode: provider-specific; not original source


/* Library Function - Single Match
    int __cdecl common_vsscanf<wchar_t>(unsigned __int64,wchar_t const * const,unsigned int,wchar_t
   const * const,struct __crt_locale_pointers * const,char * const)
   
   Library: Visual Studio 2015 Release */

int __cdecl
common_vsscanf<wchar_t>
          (__uint64 param_1,wchar_t *param_2,uint param_3,wchar_t *param_4,
          __crt_locale_pointers *param_5,char *param_6)

{
  wchar_t wVar1;
  int *piVar2;
  int iVar3;
  char *unaff_ESI;
  wchar_t *pwVar4;
  input_processor<wchar_t,__crt_stdio_input::string_input_adapter<wchar_t>_> local_80 [76];
  void *local_34;
  int local_20;
  wchar_t local_1c [4];
  char local_14;
  wchar_t *local_10;
  wchar_t *local_c;
  wchar_t *local_8;
  
  if ((param_2 == (wchar_t *)0x0) || (param_4 == (wchar_t *)0x0)) {
    piVar2 = __errno();
    *piVar2 = 0x16;
    FUN_1016ec41();
    iVar3 = -1;
  }
  else {
    if (param_3 == 0xffffffff) {
      pwVar4 = param_2;
      do {
        wVar1 = *pwVar4;
        pwVar4 = pwVar4 + 1;
      } while (wVar1 != L'\0');
      param_3 = (int)pwVar4 - (int)(param_2 + 1) >> 1;
    }
    _LocaleUpdate::_LocaleUpdate((_LocaleUpdate *)&local_20,param_5);
    local_c = param_2 + param_3;
    local_10 = param_2;
    local_8 = param_2;
    __crt_stdio_input::input_processor<wchar_t,__crt_stdio_input::string_input_adapter<wchar_t>_>::
    input_processor<wchar_t,__crt_stdio_input::string_input_adapter<wchar_t>_>
              (local_80,(string_input_adapter<wchar_t> *)&local_10,CONCAT44(param_4,param_1._4_4_),
               local_1c,(__crt_locale_pointers *)param_6,unaff_ESI);
    iVar3 = __crt_stdio_input::
            input_processor<wchar_t,__crt_stdio_input::string_input_adapter<wchar_t>_>::process
                      (local_80);
    FID_conflict__free(local_34);
    if (local_14 != '\0') {
      *(uint *)(local_20 + 0x350) = *(uint *)(local_20 + 0x350) & 0xfffffffd;
    }
  }
  return iVar3;
}

