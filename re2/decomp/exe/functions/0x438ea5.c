// rea decompile_all
// name: FID_conflict:_IsolationAwareUnregisterClassW@8
// address: 0x438ea5
// body: available
// range: 0x438ea5-0x438ef9 inclusive
// non_contiguous: false
// provider: Ghidra 12.1.2 (ghidra)
// analysis_profile: ac6d50be2cdf54f7005df47d1ed7e7ef55dee595681eb1b7c2e0b00d70cd697d
// limitations: The session serves operations only after Ghidra reports default auto-analysis complete; incomplete analysis does not expose partial results.; The imported Program and temporary project are ephemeral and deleted on close. Annotation operations edit session database metadata; original executable bytes are never written.; Cancelling an active Ghidra request terminates its ephemeral database and discards session annotations. The selected target remains open; the next provider query imports the original artifact again.; Default-space addresses use lowercase 0x-prefixed hexadecimal; other address spaces use <percent-encoded-space>:0x<hex>.; The Ghidra Program references PDB ISPToolForMsi.pdb (GUID b8f2ac8f-1d6f-438d-800f-ed4a14426ac6, age (hex) 1, signature unknown, version RSDS); Ghidra reports load state unknown. Original names and types may be missing; an empty name search does not prove a procedure is absent. Use list_procedures and address-based analysis to inspect recovered functions. REA does not admit a caller-selected PDB companion.; This session uses Ghidra 12.1.2. The bridge is verified against 12.1.4; other 12.1.x builds are accepted and the observed version is reported.; Pseudocode is Ghidra decompiler output, not original source and not text-equivalent to Hopper output.; External functions and functions without an analyzable body return null; other decompiler failures remain explicit.
// pseudocode: provider-specific; not original source


/* WARNING: Function: __SEH_prolog4 replaced with injection: SEH_prolog4 */
/* WARNING: Function: __SEH_epilog4 replaced with injection: EH_epilog3 */
/* Library Function - Multiple Matches With Different Base Names
    _IsolationAwareUnregisterClassA@8
    _IsolationAwareUnregisterClassW@8
   
   Library: Visual Studio 2015 Release */

BOOL FID_conflict__IsolationAwareUnregisterClassW_8(LPCWSTR param_1,HINSTANCE param_2)

{
  int iVar1;
  BOOL BVar2;
  undefined4 local_24;
  BOOL local_20;
  undefined4 uStack_c;
  undefined *local_8;
  
  local_8 = &DAT_005f9a98;
  uStack_c = 0x438eb1;
  local_20 = 0;
  local_24 = 0;
  if ((DAT_00612d0c == 0) &&
     (iVar1 = _IsolationAwarePrivatenPgViNgRzlnPgpgk_4(&local_24), iVar1 == 0)) {
    return 0;
  }
  local_8 = (undefined *)0x0;
  BVar2 = UnregisterClassW(param_1,param_2);
  local_8 = (undefined *)0xfffffffe;
  local_20 = BVar2;
  FUN_00438efd();
  return BVar2;
}

