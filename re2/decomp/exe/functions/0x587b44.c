// rea decompile_all
// name: common_strtod_l<>
// address: 0x587b44
// body: available
// range: 0x587b44-0x587bd4 inclusive
// non_contiguous: false
// provider: Ghidra 12.1.2 (ghidra)
// analysis_profile: ac6d50be2cdf54f7005df47d1ed7e7ef55dee595681eb1b7c2e0b00d70cd697d
// limitations: The session serves operations only after Ghidra reports default auto-analysis complete; incomplete analysis does not expose partial results.; The imported Program and temporary project are ephemeral and deleted on close. Annotation operations edit session database metadata; original executable bytes are never written.; Cancelling an active Ghidra request terminates its ephemeral database and discards session annotations. The selected target remains open; the next provider query imports the original artifact again.; Default-space addresses use lowercase 0x-prefixed hexadecimal; other address spaces use <percent-encoded-space>:0x<hex>.; The Ghidra Program references PDB ISPToolForMsi.pdb (GUID b8f2ac8f-1d6f-438d-800f-ed4a14426ac6, age (hex) 1, signature unknown, version RSDS); Ghidra reports load state unknown. Original names and types may be missing; an empty name search does not prove a procedure is absent. Use list_procedures and address-based analysis to inspect recovered functions. REA does not admit a caller-selected PDB companion.; This session uses Ghidra 12.1.2. The bridge is verified against 12.1.4; other 12.1.x builds are accepted and the observed version is reported.; Pseudocode is Ghidra decompiler output, not original source and not text-equivalent to Hopper output.; External functions and functions without an analyzable body return null; other decompiler failures remain explicit.
// pseudocode: provider-specific; not original source


/* Library Function - Multiple Matches With Same Base Name
    float __cdecl common_strtod_l<float,char>(char const * const,char * * const,struct
   __crt_locale_pointers * const)
    float __cdecl common_strtod_l<float,wchar_t>(wchar_t const * const,wchar_t * * const,struct
   __crt_locale_pointers * const)
   
   Libraries: Visual Studio 2015 Release, Visual Studio 2017 Release */

float10 common_strtod_l<>(int param_1,int *param_2,__crt_locale_pointers *param_3)

{
  int *piVar1;
  SLD_STATUS SVar2;
  float10 fVar3;
  undefined1 auStack_30 [4];
  undefined4 uStack_2c;
  int local_1c;
  undefined1 local_18 [8];
  char local_10;
  float local_8;
  
  if (param_2 != (int *)0x0) {
    *param_2 = param_1;
  }
  if (param_1 == 0) {
    piVar1 = __errno();
    *piVar1 = 0x16;
    FUN_0057662d();
    fVar3 = (float10)0;
  }
  else {
    uStack_2c = 0x587b7d;
    _LocaleUpdate::_LocaleUpdate((_LocaleUpdate *)&local_1c,param_3);
    local_8 = 0.0;
    make_c_string_character_source<>(auStack_30,param_1,param_2);
    SVar2 = __crt_strtox::parse_floating_point<__crt_strtox::c_string_character_source<char>,float>
                      (local_18);
    if ((SVar2 == 3) || (SVar2 == 2)) {
      piVar1 = __errno();
      *piVar1 = 0x22;
    }
    if (local_10 != '\0') {
      *(uint *)(local_1c + 0x350) = *(uint *)(local_1c + 0x350) & 0xfffffffd;
    }
    fVar3 = (float10)local_8;
  }
  return fVar3;
}

