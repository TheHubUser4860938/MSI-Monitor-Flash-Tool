// rea decompile_all
// name: FID_conflict:_IsolationAwareCreatePropertySheetPageW@4
// address: 0x10064f8f
// body: available
// range: 0x10064f8f-0x1006503d inclusive
// non_contiguous: false
// provider: Ghidra 12.1.2 (ghidra)
// analysis_profile: b075844f08879296d957518397cd0ddda73db81dce53d00d3f0e702766fc2af6
// limitations: The session serves operations only after Ghidra reports default auto-analysis complete; incomplete analysis does not expose partial results.; The imported Program and temporary project are ephemeral and deleted on close. Annotation operations edit session database metadata; original executable bytes are never written.; Cancelling an active Ghidra request terminates its ephemeral database and discards session annotations. The selected target remains open; the next provider query imports the original artifact again.; Default-space addresses use lowercase 0x-prefixed hexadecimal; other address spaces use <percent-encoded-space>:0x<hex>.; The Ghidra Program references PDB WinIspPlugIn.pdb (GUID d9f398c7-6c98-49a8-af25-a0659d5ad2f3, age (hex) 1, signature unknown, version RSDS); Ghidra reports load state unknown. Original names and types may be missing; an empty name search does not prove a procedure is absent. Use list_procedures and address-based analysis to inspect recovered functions. REA does not admit a caller-selected PDB companion.; This session uses Ghidra 12.1.2. The bridge is verified against 12.1.4; other 12.1.x builds are accepted and the observed version is reported.; Pseudocode is Ghidra decompiler output, not original source and not text-equivalent to Hopper output.; External functions and functions without an analyzable body return null; other decompiler failures remain explicit.
// pseudocode: provider-specific; not original source


/* WARNING: Function: __SEH_prolog4 replaced with injection: SEH_prolog4 */
/* WARNING: Function: __SEH_epilog4 replaced with injection: EH_epilog3 */
/* Library Function - Multiple Matches With Different Base Names
    _IsolationAwareCreatePropertySheetPageA@4
    _IsolationAwareCreatePropertySheetPageW@4
   
   Library: Visual Studio 2015 Release */

undefined4 FID_conflict__IsolationAwareCreatePropertySheetPageW_4(uint *param_1)

{
  uint uVar1;
  code *pcVar2;
  int iVar3;
  code *pcVar4;
  undefined4 uVar5;
  undefined4 local_24;
  undefined4 local_20;
  undefined4 uStack_c;
  undefined *local_8;
  
  pcVar2 = DAT_102455c8;
  local_8 = &DAT_1022abb0;
  uStack_c = 0x10064f9b;
  uVar5 = 0;
  local_20 = 0;
  local_24 = 0;
  if ((DAT_10243548 == 0) &&
     (iVar3 = _IsolationAwarePrivatenPgViNgRzlnPgpgk_4(&local_24), iVar3 == 0)) {
    return 0;
  }
  local_8 = (undefined *)0x0;
  pcVar4 = DAT_102455c8;
  if ((pcVar2 != (code *)0x0) ||
     (pcVar4 = (code *)_PrshtIsolationAwarePrivatetRgCebPnQQeRff_pbZPgYQP_QYY_4
                                 ("CreatePropertySheetPageW"), pcVar4 != (code *)0x0)) {
    DAT_102455c8 = pcVar4;
    uVar1 = param_1[1];
    if (DAT_10243548 == 0) {
      if (((uVar1 & 0x4000) == 0) && (0x33 < *param_1)) {
        param_1[1] = uVar1 | 0x4000;
        param_1[0xc] = DAT_1023d368;
      }
    }
    else if ((uVar1 & 0x4000) != 0) {
      param_1[1] = uVar1 & 0xffffbfff;
    }
    pcVar2 = DAT_102455c8;
    guard_check_icall(param_1);
    uVar5 = (*pcVar2)();
    local_20 = uVar5;
  }
  local_8 = (undefined *)0xfffffffe;
  FUN_10065041();
  return uVar5;
}

