// rea decompile_all
// name: FID_conflict:_wcsupr_s_l_stat
// address: 0x10191a3e
// body: available
// range: 0x10191a3e-0x10191bc6 inclusive
// non_contiguous: false
// provider: Ghidra 12.1.2 (ghidra)
// analysis_profile: b075844f08879296d957518397cd0ddda73db81dce53d00d3f0e702766fc2af6
// limitations: The session serves operations only after Ghidra reports default auto-analysis complete; incomplete analysis does not expose partial results.; The imported Program and temporary project are ephemeral and deleted on close. Annotation operations edit session database metadata; original executable bytes are never written.; Cancelling an active Ghidra request terminates its ephemeral database and discards session annotations. The selected target remains open; the next provider query imports the original artifact again.; Default-space addresses use lowercase 0x-prefixed hexadecimal; other address spaces use <percent-encoded-space>:0x<hex>.; The Ghidra Program references PDB Comm_Aux.pdb (GUID ba7920cc-daa3-4461-a102-1f8f66c67a2a, age (hex) 1, signature unknown, version RSDS); Ghidra reports load state unknown. Original names and types may be missing; an empty name search does not prove a procedure is absent. Use list_procedures and address-based analysis to inspect recovered functions. REA does not admit a caller-selected PDB companion.; This session uses Ghidra 12.1.2. The bridge is verified against 12.1.4; other 12.1.x builds are accepted and the observed version is reported.; Pseudocode is Ghidra decompiler output, not original source and not text-equivalent to Hopper output.; External functions and functions without an analyzable body return null; other decompiler failures remain explicit.
// pseudocode: provider-specific; not original source


/* WARNING: Function: __alloca_probe_16 replaced with injection: alloca_probe */
/* Library Function - Multiple Matches With Different Base Names
    int __cdecl _wcslwr_s_l_stat(wchar_t *,unsigned int,struct __crt_locale_pointers *)
    int __cdecl _wcsupr_s_l_stat(wchar_t * const,unsigned int,struct __crt_locale_pointers * const)
   
   Library: Visual Studio 2015 Release */

void FID_conflict__wcsupr_s_l_stat(wchar_t *param_1,uint param_2,int *param_3)

{
  wchar_t wVar1;
  uint uVar2;
  uint uVar3;
  int *piVar4;
  uint uVar5;
  undefined4 *puVar6;
  wchar_t *_Src;
  int iVar7;
  
  uVar3 = DAT_10206460 ^ (uint)&stack0xfffffffc;
  if (param_1 == (wchar_t *)0x0) {
LAB_10191a58:
    piVar4 = __errno();
    iVar7 = 0x16;
  }
  else {
    uVar5 = FUN_10187c15(param_1,param_2);
    if (param_2 <= uVar5) {
      *param_1 = L'\0';
      goto LAB_10191a58;
    }
    _Src = (wchar_t *)0x0;
    if (*(int *)(*param_3 + 0xa8) == 0) {
      for (; *param_1 != L'\0'; param_1 = param_1 + 1) {
        wVar1 = *param_1;
        if ((0x60 < (ushort)wVar1) && ((ushort)wVar1 < 0x7b)) {
          *param_1 = wVar1 + L'￠';
        }
      }
      goto LAB_10191bb4;
    }
    uVar5 = ___acrt_LCMapStringW(*(int *)(*param_3 + 0xa8),0x200,param_1,0xffffffff,0,0);
    if (uVar5 == 0) {
      piVar4 = __errno();
      *piVar4 = 0x2a;
      __errno();
      goto LAB_10191bb4;
    }
    if (uVar5 <= param_2) {
      uVar2 = uVar5 * 2;
      if ((uVar2 + 8 & -(uint)(uVar2 < uVar2 + 8)) == 0) {
LAB_10191b55:
        if (_Src == (wchar_t *)0x0) goto LAB_10191b59;
        iVar7 = ___acrt_LCMapStringW
                          (*(undefined4 *)(*param_3 + 0xa8),0x200,param_1,0xffffffff,_Src,uVar5);
        if (iVar7 == 0) {
          piVar4 = __errno();
          *piVar4 = 0x2a;
        }
        else {
          _wcscpy_s(param_1,param_2,_Src);
        }
      }
      else {
        if ((-(uint)(uVar2 < uVar2 + 8) & uVar2 + 8) < 0x401) {
          puVar6 = (undefined4 *)&stack0xffffffec;
          _Src = (wchar_t *)&stack0xffffffec;
          if (&stack0x00000000 != (undefined1 *)0x14) {
LAB_10191b52:
            _Src = (wchar_t *)(puVar6 + 2);
            goto LAB_10191b55;
          }
        }
        else {
          puVar6 = (undefined4 *)__malloc_base(-(uint)(uVar2 < uVar2 + 8) & uVar2 + 8);
          _Src = (wchar_t *)0x0;
          if (puVar6 != (undefined4 *)0x0) {
            *puVar6 = 0xdddd;
            goto LAB_10191b52;
          }
        }
LAB_10191b59:
        piVar4 = __errno();
        *piVar4 = 0xc;
        __errno();
      }
      __freea_crt(_Src);
      goto LAB_10191bb4;
    }
    *param_1 = L'\0';
    piVar4 = __errno();
    iVar7 = 0x22;
  }
  *piVar4 = iVar7;
  FUN_10184721();
LAB_10191bb4:
  __security_check_cookie(uVar3 ^ (uint)&stack0xfffffffc);
  return;
}

