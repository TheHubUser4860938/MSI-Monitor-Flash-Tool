// rea decompile_all
// name: __expand
// address: 0x1004acd9
// body: available
// range: 0x1004acd9-0x1004adbf inclusive
// range: 0x1004add1-0x1004ae18 inclusive
// non_contiguous: true
// provider: Ghidra 12.1.2 (ghidra)
// analysis_profile: b075844f08879296d957518397cd0ddda73db81dce53d00d3f0e702766fc2af6
// limitations: The session serves operations only after Ghidra reports default auto-analysis complete; incomplete analysis does not expose partial results.; The imported Program and temporary project are ephemeral and deleted on close. Annotation operations edit session database metadata; original executable bytes are never written.; Cancelling an active Ghidra request terminates its ephemeral database and discards session annotations. The selected target remains open; the next provider query imports the original artifact again.; Default-space addresses use lowercase 0x-prefixed hexadecimal; other address spaces use <percent-encoded-space>:0x<hex>.; The Ghidra Program references PDB Comm_GFXI2C.pdb (GUID d304cc6d-b3ee-4851-b468-0ab5e385ca92, age (hex) 1, signature unknown, version RSDS); Ghidra reports load state unknown. Original names and types may be missing; an empty name search does not prove a procedure is absent. Use list_procedures and address-based analysis to inspect recovered functions. REA does not admit a caller-selected PDB companion.; This session uses Ghidra 12.1.2. The bridge is verified against 12.1.4; other 12.1.x builds are accepted and the observed version is reported.; Pseudocode is Ghidra decompiler output, not original source and not text-equivalent to Hopper output.; External functions and functions without an analyzable body return null; other decompiler failures remain explicit.
// pseudocode: provider-specific; not original source


/* WARNING: Function: __SEH_prolog4 replaced with injection: SEH_prolog4 */
/* WARNING: Function: __SEH_epilog4 replaced with injection: EH_epilog3 */
/* Library Function - Single Match
    __expand
   
   Library: Visual Studio 2008 Release */

void * __cdecl __expand(void *_Memory,size_t _NewSize)

{
  int *piVar1;
  uint *puVar2;
  int iVar3;
  DWORD DVar4;
  SIZE_T SVar5;
  LPVOID pvVar6;
  void *local_20;
  
  if (_Memory == (void *)0x0) {
    piVar1 = __errno();
    *piVar1 = 0x16;
    __invalid_parameter((wchar_t *)0x0,(wchar_t *)0x0,(wchar_t *)0x0,0,0);
    return (void *)0x0;
  }
  if (0xffffffe0 < _NewSize) {
    piVar1 = __errno();
    *piVar1 = 0xc;
    return (void *)0x0;
  }
  if (DAT_1006ab60 == 3) {
    __lock(4);
    puVar2 = (uint *)___sbh_find_block((int)_Memory);
    if (((puVar2 != (uint *)0x0) && (local_20 = (void *)0x0, _NewSize <= DAT_1006ab6c)) &&
       (iVar3 = ___sbh_resize_block(puVar2,(int)_Memory,_NewSize), iVar3 != 0)) {
      local_20 = _Memory;
    }
    FUN_1004adc8();
    if (puVar2 != (uint *)0x0) {
      return local_20;
    }
    if (_NewSize == 0) {
      _NewSize = 1;
    }
    _Memory = HeapReAlloc(DAT_100690e4,0x10,_Memory,_NewSize + 0xf & 0xfffffff0);
    local_20 = _Memory;
    pvVar6 = _Memory;
  }
  else {
    if (_NewSize == 0) {
      _NewSize = 1;
    }
    SVar5 = HeapSize(DAT_100690e4,0,_Memory);
    pvVar6 = HeapReAlloc(DAT_100690e4,0x10,_Memory,_NewSize);
    if (pvVar6 != (LPVOID)0x0) {
      return pvVar6;
    }
    local_20 = (LPVOID)0x0;
    if ((0x4000 < SVar5) || (SVar5 < _NewSize)) goto LAB_1004ada1;
    pvVar6 = (LPVOID)__is_LFH_enabled();
  }
  if (pvVar6 != (LPVOID)0x0) {
    return _Memory;
  }
LAB_1004ada1:
  piVar1 = __errno();
  DVar4 = GetLastError();
  iVar3 = __get_errno_from_oserr(DVar4);
  *piVar1 = iVar3;
  return local_20;
}

