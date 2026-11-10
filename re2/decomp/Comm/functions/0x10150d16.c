// rea decompile_all
// name: _setlocale
// address: 0x10150d16
// body: available
// range: 0x10150d16-0x10150e66 inclusive
// non_contiguous: false
// provider: Ghidra 12.1.2 (ghidra)
// analysis_profile: b075844f08879296d957518397cd0ddda73db81dce53d00d3f0e702766fc2af6
// limitations: The session serves operations only after Ghidra reports default auto-analysis complete; incomplete analysis does not expose partial results.; The imported Program and temporary project are ephemeral and deleted on close. Annotation operations edit session database metadata; original executable bytes are never written.; Cancelling an active Ghidra request terminates its ephemeral database and discards session annotations. The selected target remains open; the next provider query imports the original artifact again.; Default-space addresses use lowercase 0x-prefixed hexadecimal; other address spaces use <percent-encoded-space>:0x<hex>.; The Ghidra Program references PDB Comm.pdb (GUID c3062acb-498d-45fa-a233-c8b7e401bb13, age (hex) 1, signature unknown, version RSDS); Ghidra reports load state unknown. Original names and types may be missing; an empty name search does not prove a procedure is absent. Use list_procedures and address-based analysis to inspect recovered functions. REA does not admit a caller-selected PDB companion.; This session uses Ghidra 12.1.2. The bridge is verified against 12.1.4; other 12.1.x builds are accepted and the observed version is reported.; Pseudocode is Ghidra decompiler output, not original source and not text-equivalent to Hopper output.; External functions and functions without an analyzable body return null; other decompiler failures remain explicit.
// pseudocode: provider-specific; not original source


/* WARNING: Function: __SEH_prolog4 replaced with injection: SEH_prolog4 */
/* WARNING: Function: __SEH_epilog4 replaced with injection: EH_epilog3 */
/* Library Function - Single Match
    _setlocale
   
   Library: Visual Studio 2015 Release */

char * __cdecl _setlocale(int _Category,char *_Locale)

{
  pthreadlocinfo ptVar1;
  wchar_t *pwVar2;
  int iVar3;
  int extraout_EAX;
  wchar_t *_Memory;
  errno_t eVar4;
  wchar_t *_Src;
  wchar_t *pwVar5;
  wchar_t *pwVar6;
  uint uVar7;
  _locale_t _Locale_00;
  localeinfo_struct local_30;
  int local_28;
  wchar_t *local_24;
  size_t local_20 [5];
  undefined4 uStack_c;
  undefined *local_8;
  
  local_8 = &DAT_101ce0c8;
  uStack_c = 0x10150d22;
  pwVar2 = (wchar_t *)FUN_10150c79(_Category,_Locale);
  if (pwVar2 != (wchar_t *)0x0) {
    local_28 = FUN_1015ddfc();
    local_30.locinfo = *(pthreadlocinfo *)(local_28 + 0x4c);
    local_30.mbcinfo = *(pthreadmbcinfo *)(local_28 + 0x48);
    local_20[0] = 0;
    _Locale_00 = &local_30;
    uVar7 = 0;
    pwVar5 = (wchar_t *)0x0;
    pwVar6 = pwVar2;
    iVar3 = __wcstombs_s_l(local_20,(char *)0x0,0,pwVar2,0,_Locale_00);
    _Src = pwVar2;
    if (iVar3 == 0) goto LAB_10150d86;
    if ((iVar3 != 0x16) && (iVar3 != 0x22)) goto LAB_10150d82;
    _Locale_00 = (_locale_t)0x0;
    uVar7 = 0;
    pwVar6 = (wchar_t *)0x0;
    pwVar5 = (wchar_t *)0x0;
    do {
      __invoke_watson((wchar_t *)0x0,pwVar5,pwVar6,uVar7,(uintptr_t)_Locale_00);
      iVar3 = extraout_EAX;
LAB_10150d82:
      _Src = pwVar2;
      if (iVar3 != 0) {
        return (char *)0x0;
      }
LAB_10150d86:
      _Memory = (wchar_t *)__malloc_base(local_20[0] + 4);
      if (_Memory == (wchar_t *)0x0) {
        return (char *)0x0;
      }
      local_24 = _Memory + 2;
      pwVar2 = (wchar_t *)0x0;
      eVar4 = __wcstombs_s_l((size_t *)0x0,(char *)local_24,local_20[0],_Src,0xffffffff,&local_30);
      ptVar1 = local_30.locinfo;
      if (eVar4 == 0) goto LAB_10150dda;
    } while ((eVar4 == 0x16) || (eVar4 == 0x22));
    if (eVar4 == 0) {
LAB_10150dda:
      ___acrt_lock(4);
      local_8 = (undefined *)0x0;
      pwVar2 = ptVar1->lc_category[_Category + 1].wlocale;
      if (pwVar2 != (wchar_t *)0x0) {
        LOCK();
        iVar3 = *(int *)pwVar2;
        *(int *)pwVar2 = iVar3 + -1;
        UNLOCK();
        if (iVar3 + -1 == 0) {
          FID_conflict__free(ptVar1->lc_category[_Category + 1].wlocale);
          ptVar1->lc_category[_Category + 1].wlocale = (wchar_t *)0x0;
        }
      }
      if ((((*(byte *)(local_28 + 0x350) & 2) == 0) && (((byte)DAT_101d42b0 & 1) == 0)) &&
         (pwVar2 = ptVar1->lc_category[_Category + 1].wlocale, pwVar2 != (wchar_t *)0x0)) {
        LOCK();
        iVar3 = *(int *)pwVar2;
        *(int *)pwVar2 = *(int *)pwVar2 + -1;
        UNLOCK();
        if (iVar3 == 1) {
          FID_conflict__free(ptVar1->lc_category[_Category + 1].wlocale);
          ptVar1->lc_category[_Category + 1].wlocale = (wchar_t *)0x0;
        }
      }
      pwVar2 = local_24;
      *(uint *)_Memory = ptVar1->lc_time_cp;
      ptVar1->lc_category[_Category + 1].wlocale = _Memory;
      ptVar1->lc_category[_Category].wrefcount = (int *)local_24;
      local_8 = (undefined *)0xfffffffe;
      FUN_10150e6a();
      return (char *)pwVar2;
    }
    FID_conflict__free(_Memory);
  }
  return (char *)0x0;
}

