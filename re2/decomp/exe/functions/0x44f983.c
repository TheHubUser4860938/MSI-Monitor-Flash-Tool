// rea decompile_all
// name: _IsolationAwareImageList_AddMasked@12
// address: 0x44f983
// body: available
// range: 0x44f983-0x44fa03 inclusive
// non_contiguous: false
// provider: Ghidra 12.1.2 (ghidra)
// analysis_profile: ac6d50be2cdf54f7005df47d1ed7e7ef55dee595681eb1b7c2e0b00d70cd697d
// limitations: The session serves operations only after Ghidra reports default auto-analysis complete; incomplete analysis does not expose partial results.; The imported Program and temporary project are ephemeral and deleted on close. Annotation operations edit session database metadata; original executable bytes are never written.; Cancelling an active Ghidra request terminates its ephemeral database and discards session annotations. The selected target remains open; the next provider query imports the original artifact again.; Default-space addresses use lowercase 0x-prefixed hexadecimal; other address spaces use <percent-encoded-space>:0x<hex>.; The Ghidra Program references PDB ISPToolForMsi.pdb (GUID b8f2ac8f-1d6f-438d-800f-ed4a14426ac6, age (hex) 1, signature unknown, version RSDS); Ghidra reports load state unknown. Original names and types may be missing; an empty name search does not prove a procedure is absent. Use list_procedures and address-based analysis to inspect recovered functions. REA does not admit a caller-selected PDB companion.; This session uses Ghidra 12.1.2. The bridge is verified against 12.1.4; other 12.1.x builds are accepted and the observed version is reported.; Pseudocode is Ghidra decompiler output, not original source and not text-equivalent to Hopper output.; External functions and functions without an analyzable body return null; other decompiler failures remain explicit.
// pseudocode: provider-specific; not original source


/* WARNING: Function: __SEH_prolog4 replaced with injection: SEH_prolog4 */
/* WARNING: Function: __SEH_epilog4 replaced with injection: EH_epilog3 */
/* Library Function - Single Match
    _IsolationAwareImageList_AddMasked@12
   
   Library: Visual Studio 2015 Release */

undefined4
_IsolationAwareImageList_AddMasked_12(undefined4 param_1,undefined4 param_2,undefined4 param_3)

{
  code *pcVar1;
  int iVar2;
  code *pcVar3;
  undefined4 uVar4;
  undefined4 local_24;
  undefined4 local_20;
  undefined4 uStack_c;
  undefined *local_8;
  
  pcVar3 = DAT_00614e84;
  local_8 = &DAT_005fab10;
  uStack_c = 0x44f98f;
  uVar4 = 0xffffffff;
  local_20 = 0xffffffff;
  local_24 = 0;
  if ((DAT_00612d0c == 0) &&
     (iVar2 = _IsolationAwarePrivatenPgViNgRzlnPgpgk_4(&local_24), iVar2 == 0)) {
    uVar4 = 0xffffffff;
  }
  else {
    local_8 = (undefined *)0x0;
    pcVar1 = DAT_00614e84;
    if ((pcVar3 != (code *)0x0) ||
       (pcVar3 = (code *)_CommctrlIsolationAwarePrivatetRgCebPnQQeRff_pbZPgYQP_QYY_4
                                   ("ImageList_AddMasked"), pcVar1 = pcVar3, pcVar3 != (code *)0x0))
    {
      DAT_00614e84 = pcVar1;
      guard_check_icall(param_1,param_2,param_3);
      uVar4 = (*pcVar3)();
      local_20 = uVar4;
    }
    local_8 = (undefined *)0xfffffffe;
    FUN_0044fa07();
  }
  return uVar4;
}

