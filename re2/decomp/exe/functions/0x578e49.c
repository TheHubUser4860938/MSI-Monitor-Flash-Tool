// rea decompile_all
// name: _setlocale
// address: 0x578e49
// body: available
// range: 0x578e49-0x578f99 inclusive
// non_contiguous: false
// provider: Ghidra 12.1.2 (ghidra)
// analysis_profile: ac6d50be2cdf54f7005df47d1ed7e7ef55dee595681eb1b7c2e0b00d70cd697d
// limitations: The session serves operations only after Ghidra reports default auto-analysis complete; incomplete analysis does not expose partial results.; The imported Program and temporary project are ephemeral and deleted on close. Annotation operations edit session database metadata; original executable bytes are never written.; Cancelling an active Ghidra request terminates its ephemeral database and discards session annotations. The selected target remains open; the next provider query imports the original artifact again.; Default-space addresses use lowercase 0x-prefixed hexadecimal; other address spaces use <percent-encoded-space>:0x<hex>.; The Ghidra Program references PDB ISPToolForMsi.pdb (GUID b8f2ac8f-1d6f-438d-800f-ed4a14426ac6, age (hex) 1, signature unknown, version RSDS); Ghidra reports load state unknown. Original names and types may be missing; an empty name search does not prove a procedure is absent. Use list_procedures and address-based analysis to inspect recovered functions. REA does not admit a caller-selected PDB companion.; This session uses Ghidra 12.1.2. The bridge is verified against 12.1.4; other 12.1.x builds are accepted and the observed version is reported.; Pseudocode is Ghidra decompiler output, not original source and not text-equivalent to Hopper output.; External functions and functions without an analyzable body return null; other decompiler failures remain explicit.
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
  
  local_8 = &DAT_00607b00;
  uStack_c = 0x578e55;
  pwVar2 = (wchar_t *)FUN_00578dac(_Category,_Locale);
  if (pwVar2 != (wchar_t *)0x0) {
    local_28 = FUN_0058c5ff();
    local_30.locinfo = *(pthreadlocinfo *)(local_28 + 0x4c);
    local_30.mbcinfo = *(pthreadmbcinfo *)(local_28 + 0x48);
    local_20[0] = 0;
    _Locale_00 = &local_30;
    uVar7 = 0;
    pwVar5 = (wchar_t *)0x0;
    pwVar6 = pwVar2;
    iVar3 = __wcstombs_s_l(local_20,(char *)0x0,0,pwVar2,0,_Locale_00);
    _Src = pwVar2;
    if (iVar3 == 0) goto LAB_00578eb9;
    if ((iVar3 != 0x16) && (iVar3 != 0x22)) goto LAB_00578eb5;
    _Locale_00 = (_locale_t)0x0;
    uVar7 = 0;
    pwVar6 = (wchar_t *)0x0;
    pwVar5 = (wchar_t *)0x0;
    do {
      __invoke_watson((wchar_t *)0x0,pwVar5,pwVar6,uVar7,(uintptr_t)_Locale_00);
      iVar3 = extraout_EAX;
LAB_00578eb5:
      _Src = pwVar2;
      if (iVar3 != 0) {
        return (char *)0x0;
      }
LAB_00578eb9:
      _Memory = (wchar_t *)__malloc_base(local_20[0] + 4);
      if (_Memory == (wchar_t *)0x0) {
        return (char *)0x0;
      }
      local_24 = _Memory + 2;
      pwVar2 = (wchar_t *)0x0;
      eVar4 = __wcstombs_s_l((size_t *)0x0,(char *)local_24,local_20[0],_Src,0xffffffff,&local_30);
      ptVar1 = local_30.locinfo;
      if (eVar4 == 0) goto LAB_00578f0d;
    } while ((eVar4 == 0x16) || (eVar4 == 0x22));
    if (eVar4 == 0) {
LAB_00578f0d:
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
      if ((((*(byte *)(local_28 + 0x350) & 2) == 0) && (((byte)DAT_0060d2c8 & 1) == 0)) &&
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
      FUN_00578f9d();
      return (char *)pwVar2;
    }
    FID_conflict__free(_Memory);
  }
  return (char *)0x0;
}

