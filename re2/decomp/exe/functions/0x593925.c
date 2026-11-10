// rea decompile_all
// name: ___acrt_update_thread_multibyte_data
// address: 0x593925
// body: available
// range: 0x593925-0x5939b2 inclusive
// range: 0x5939bf-0x5939c6 inclusive
// non_contiguous: true
// provider: Ghidra 12.1.2 (ghidra)
// analysis_profile: ac6d50be2cdf54f7005df47d1ed7e7ef55dee595681eb1b7c2e0b00d70cd697d
// limitations: The session serves operations only after Ghidra reports default auto-analysis complete; incomplete analysis does not expose partial results.; The imported Program and temporary project are ephemeral and deleted on close. Annotation operations edit session database metadata; original executable bytes are never written.; Cancelling an active Ghidra request terminates its ephemeral database and discards session annotations. The selected target remains open; the next provider query imports the original artifact again.; Default-space addresses use lowercase 0x-prefixed hexadecimal; other address spaces use <percent-encoded-space>:0x<hex>.; Ghidra Listing reports a terminal call at 0x593957 to 0x58b751 _abort (external=false, thunk=false, hasNoReturn=true); fallthrough is excluded by Ghidra's flow model. This records Ghidra's FunctionManager flag, not an independent verification that the callee cannot return.; The Ghidra Program references PDB ISPToolForMsi.pdb (GUID b8f2ac8f-1d6f-438d-800f-ed4a14426ac6, age (hex) 1, signature unknown, version RSDS); Ghidra reports load state unknown. Original names and types may be missing; an empty name search does not prove a procedure is absent. Use list_procedures and address-based analysis to inspect recovered functions. REA does not admit a caller-selected PDB companion.; This session uses Ghidra 12.1.2. The bridge is verified against 12.1.4; other 12.1.x builds are accepted and the observed version is reported.; Pseudocode is Ghidra decompiler output, not original source and not text-equivalent to Hopper output.; External functions and functions without an analyzable body return null; other decompiler failures remain explicit.
// pseudocode: provider-specific; not original source


/* WARNING: Function: __SEH_prolog4 replaced with injection: SEH_prolog4 */
/* WARNING: Function: __SEH_epilog4 replaced with injection: EH_epilog3 */
/* Library Function - Single Match
    ___acrt_update_thread_multibyte_data
   
   Library: Visual Studio 2015 Release */

int * ___acrt_update_thread_multibyte_data(void)

{
  int iVar1;
  int iVar2;
  int *_Memory;
  
  iVar2 = FUN_0058c5ff();
  if (((*(uint *)(iVar2 + 0x350) & DAT_0060d2c8) == 0) || (*(int *)(iVar2 + 0x4c) == 0)) {
    ___acrt_lock(5);
    _Memory = *(int **)(iVar2 + 0x48);
    if (_Memory != (int *)PTR_DAT_0060d990) {
      if (_Memory != (int *)0x0) {
        LOCK();
        iVar1 = *_Memory;
        *_Memory = iVar1 + -1;
        UNLOCK();
        if ((iVar1 + -1 == 0) && (_Memory != &DAT_0060d770)) {
          FID_conflict__free(_Memory);
        }
      }
      *(undefined **)(iVar2 + 0x48) = PTR_DAT_0060d990;
      _Memory = (int *)PTR_DAT_0060d990;
      LOCK();
      *(int *)PTR_DAT_0060d990 = *(int *)PTR_DAT_0060d990 + 1;
      UNLOCK();
    }
    FUN_005939b6();
  }
  else {
    _Memory = *(int **)(iVar2 + 0x48);
  }
  if (_Memory == (int *)0x0) {
                    /* WARNING: Subroutine does not return */
    _abort();
  }
  return _Memory;
}

