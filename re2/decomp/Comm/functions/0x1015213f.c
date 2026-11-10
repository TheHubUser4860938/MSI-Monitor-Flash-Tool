// rea decompile_all
// name: common_vsprintf<__crt_stdio_output::standard_base,wchar_t>
// address: 0x1015213f
// body: available
// range: 0x1015213f-0x101522c3 inclusive
// non_contiguous: false
// provider: Ghidra 12.1.2 (ghidra)
// analysis_profile: b075844f08879296d957518397cd0ddda73db81dce53d00d3f0e702766fc2af6
// limitations: The session serves operations only after Ghidra reports default auto-analysis complete; incomplete analysis does not expose partial results.; The imported Program and temporary project are ephemeral and deleted on close. Annotation operations edit session database metadata; original executable bytes are never written.; Cancelling an active Ghidra request terminates its ephemeral database and discards session annotations. The selected target remains open; the next provider query imports the original artifact again.; Default-space addresses use lowercase 0x-prefixed hexadecimal; other address spaces use <percent-encoded-space>:0x<hex>.; The Ghidra Program references PDB Comm.pdb (GUID c3062acb-498d-45fa-a233-c8b7e401bb13, age (hex) 1, signature unknown, version RSDS); Ghidra reports load state unknown. Original names and types may be missing; an empty name search does not prove a procedure is absent. Use list_procedures and address-based analysis to inspect recovered functions. REA does not admit a caller-selected PDB companion.; This session uses Ghidra 12.1.2. The bridge is verified against 12.1.4; other 12.1.x builds are accepted and the observed version is reported.; Pseudocode is Ghidra decompiler output, not original source and not text-equivalent to Hopper output.; External functions and functions without an analyzable body return null; other decompiler failures remain explicit.
// pseudocode: provider-specific; not original source


/* WARNING: Type propagation algorithm not settling */
/* Library Function - Single Match
    int __cdecl common_vsprintf<class __crt_stdio_output::standard_base,wchar_t>(unsigned
   __int64,wchar_t * const,unsigned int,wchar_t const * const,struct __crt_locale_pointers *
   const,char * const)
   
   Library: Visual Studio 2015 Release */

int __cdecl
common_vsprintf<__crt_stdio_output::standard_base,wchar_t>
          (__uint64 param_1,wchar_t *param_2,uint param_3,wchar_t *param_4,
          __crt_locale_pointers *param_5,char *param_6)

{
  wchar_t *******pppppppwVar1;
  int *piVar2;
  int iVar3;
  int local_488;
  undefined1 local_484 [8];
  char local_47c;
  uint local_478;
  wchar_t *******local_474;
  uint local_470;
  uint local_46c;
  undefined4 local_468;
  wchar_t *******local_464;
  output_processor<wchar_t,__crt_stdio_output::string_output_adapter<wchar_t>,__crt_stdio_output::standard_base<wchar_t,__crt_stdio_output::string_output_adapter<wchar_t>_>_>
  local_460 [64];
  formatting_buffer local_420 [1048];
  uint local_8;
  
  local_8 = DAT_101d3fec ^ (uint)&stack0xfffffffc;
  local_464 = (wchar_t *******)param_2;
  if ((param_4 == (wchar_t *)0x0) || ((param_3 != 0 && (param_2 == (wchar_t *)0x0)))) {
    piVar2 = __errno();
    *piVar2 = 0x16;
    FUN_1014f4c6();
    goto LAB_10152296;
  }
  _LocaleUpdate::_LocaleUpdate((_LocaleUpdate *)&local_488,param_5);
  pppppppwVar1 = local_464;
  local_478 = (uint)param_1 & 2;
  local_474 = local_464;
  local_470 = param_3;
  local_46c = 0;
  if (((param_1 & 2) != 0) || (local_468 = 0, local_464 == (wchar_t *******)0x0)) {
    local_468 = 1;
  }
  local_464 = (wchar_t *******)&local_474;
  output_processor<>(&local_464,param_1,param_4,local_484,param_6);
  iVar3 = __crt_stdio_output::
          output_processor<wchar_t,__crt_stdio_output::string_output_adapter<wchar_t>,__crt_stdio_output::standard_base<wchar_t,__crt_stdio_output::string_output_adapter<wchar_t>_>_>
          ::process(local_460);
  if (pppppppwVar1 != (wchar_t *******)0x0) {
    if ((param_1 & 1) == 0) {
      if (local_478 == 0) {
        if (param_3 != 0) {
          if (local_46c != param_3) goto LAB_1015226b;
LAB_101522bb:
          *(undefined2 *)((int)pppppppwVar1 + (param_3 - 1) * 2) = 0;
        }
      }
      else if (param_3 != 0) {
        if (-1 < iVar3) {
          if (local_46c == param_3) goto LAB_101522bb;
          goto LAB_1015226b;
        }
        *(undefined2 *)pppppppwVar1 = 0;
      }
    }
    else if (((param_3 != 0) || (iVar3 == 0)) && (local_46c != param_3)) {
LAB_1015226b:
      *(undefined2 *)((int)pppppppwVar1 + local_46c * 2) = 0;
    }
  }
  __crt_stdio_output::formatting_buffer::~formatting_buffer(local_420);
  if (local_47c != '\0') {
    *(uint *)(local_488 + 0x350) = *(uint *)(local_488 + 0x350) & 0xfffffffd;
  }
LAB_10152296:
  iVar3 = __security_check_cookie(local_8 ^ (uint)&stack0xfffffffc);
  return iVar3;
}

