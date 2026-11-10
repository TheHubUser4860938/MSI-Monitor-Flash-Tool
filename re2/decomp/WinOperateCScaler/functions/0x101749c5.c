// rea decompile_all
// name: _wcrtomb_s_l
// address: 0x101749c5
// body: available
// range: 0x101749c5-0x10174a6d inclusive
// non_contiguous: false
// provider: Ghidra 12.1.2 (ghidra)
// analysis_profile: b075844f08879296d957518397cd0ddda73db81dce53d00d3f0e702766fc2af6
// limitations: The session serves operations only after Ghidra reports default auto-analysis complete; incomplete analysis does not expose partial results.; The imported Program and temporary project are ephemeral and deleted on close. Annotation operations edit session database metadata; original executable bytes are never written.; Cancelling an active Ghidra request terminates its ephemeral database and discards session annotations. The selected target remains open; the next provider query imports the original artifact again.; Default-space addresses use lowercase 0x-prefixed hexadecimal; other address spaces use <percent-encoded-space>:0x<hex>.; The Ghidra Program references PDB WinOperateCScaler.pdb (GUID a6737962-efea-4805-8ae6-1fc1ef126554, age (hex) 1, signature unknown, version RSDS); Ghidra reports load state unknown. Original names and types may be missing; an empty name search does not prove a procedure is absent. Use list_procedures and address-based analysis to inspect recovered functions. REA does not admit a caller-selected PDB companion.; This session uses Ghidra 12.1.2. The bridge is verified against 12.1.4; other 12.1.x builds are accepted and the observed version is reported.; Pseudocode is Ghidra decompiler output, not original source and not text-equivalent to Hopper output.; External functions and functions without an analyzable body return null; other decompiler failures remain explicit.
// pseudocode: provider-specific; not original source


/* Library Function - Single Match
    int __cdecl _wcrtomb_s_l(int * const,char * const,unsigned int,wchar_t,struct _Mbstatet *
   const,struct __crt_locale_pointers * const)
   
   Library: Visual Studio 2015 Release */

int __cdecl
_wcrtomb_s_l(int *param_1,char *param_2,uint param_3,wchar_t param_4,_Mbstatet *param_5,
            __crt_locale_pointers *param_6)

{
  int iVar1;
  int *piVar2;
  int iVar3;
  int local_18;
  int local_14;
  char local_c;
  BOOL local_8;
  
  _LocaleUpdate::_LocaleUpdate((_LocaleUpdate *)&local_18,param_6);
  iVar3 = 0;
  if (param_5 != (_Mbstatet *)0x0) {
    *(undefined4 *)param_5 = 0;
  }
  if (*(int *)(local_14 + 0xa8) == 0) {
    if ((ushort)param_4 < 0x100) {
      *param_2 = (char)param_4;
      if (param_1 != (int *)0x0) {
        *param_1 = 1;
      }
      goto LAB_10174a57;
    }
  }
  else {
    local_8 = 0;
    iVar1 = WideCharToMultiByte(*(UINT *)(local_14 + 8),0,&param_4,1,param_2,param_3,(LPCSTR)0x0,
                                &local_8);
    if ((iVar1 != 0) && (local_8 == 0)) {
      if (param_1 != (int *)0x0) {
        *param_1 = iVar1;
      }
      goto LAB_10174a57;
    }
  }
  if (param_1 != (int *)0x0) {
    *param_1 = -1;
  }
  piVar2 = __errno();
  iVar3 = 0x2a;
  *piVar2 = 0x2a;
LAB_10174a57:
  if (local_c != '\0') {
    *(uint *)(local_18 + 0x350) = *(uint *)(local_18 + 0x350) & 0xfffffffd;
  }
  return iVar3;
}

