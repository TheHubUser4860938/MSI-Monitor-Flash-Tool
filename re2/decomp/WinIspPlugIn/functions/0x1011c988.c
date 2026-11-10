// rea decompile_all
// name: FUN_1011c988
// address: 0x1011c988
// body: available
// range: 0x1011c988-0x1011ca15 inclusive
// non_contiguous: false
// provider: Ghidra 12.1.2 (ghidra)
// analysis_profile: b075844f08879296d957518397cd0ddda73db81dce53d00d3f0e702766fc2af6
// limitations: The session serves operations only after Ghidra reports default auto-analysis complete; incomplete analysis does not expose partial results.; The imported Program and temporary project are ephemeral and deleted on close. Annotation operations edit session database metadata; original executable bytes are never written.; Cancelling an active Ghidra request terminates its ephemeral database and discards session annotations. The selected target remains open; the next provider query imports the original artifact again.; Default-space addresses use lowercase 0x-prefixed hexadecimal; other address spaces use <percent-encoded-space>:0x<hex>.; Ghidra Listing reports a terminal call at 0x1011ca14 to 0x1011ca27 FUN_1011ca27 (external=false, thunk=false, hasNoReturn=false); fallthrough is excluded by Ghidra's flow model. The reason for the terminal flow is not established by this observation.; The Ghidra Program references PDB WinIspPlugIn.pdb (GUID d9f398c7-6c98-49a8-af25-a0659d5ad2f3, age (hex) 1, signature unknown, version RSDS); Ghidra reports load state unknown. Original names and types may be missing; an empty name search does not prove a procedure is absent. Use list_procedures and address-based analysis to inspect recovered functions. REA does not admit a caller-selected PDB companion.; This session uses Ghidra 12.1.2. The bridge is verified against 12.1.4; other 12.1.x builds are accepted and the observed version is reported.; Pseudocode is Ghidra decompiler output, not original source and not text-equivalent to Hopper output.; External functions and functions without an analyzable body return null; other decompiler failures remain explicit.
// pseudocode: provider-specific; not original source


/* WARNING: Function: __EH_prolog3_catch replaced with injection: EH_prolog3 */
/* WARNING: Function: __EH_epilog3 replaced with injection: EH_epilog3 */

undefined4 FUN_1011c988(int param_1,uint param_2,int *param_3)

{
  tagFORMATETC *ptVar1;
  undefined4 uVar2;
  uint uVar3;
  tagFORMATETC local_34;
  undefined4 local_1c;
  CEnumFormatEtc *local_18;
  int local_8;
  undefined4 uStack_4;
  
  uStack_4 = 0x24;
  if (param_3 == (int *)0x0) {
    return 0x80004003;
  }
  local_1c = 0x8007000e;
  *param_3 = 0;
  local_8 = 0;
  local_18 = (CEnumFormatEtc *)FUN_100491ae(0x40);
  local_8._0_1_ = 1;
  if (local_18 == (CEnumFormatEtc *)0x0) {
    local_18 = (CEnumFormatEtc *)0x0;
  }
  else {
    local_18 = (CEnumFormatEtc *)CEnumFormatEtc::CEnumFormatEtc(local_18);
  }
  local_8 = (uint)local_8._1_3_ << 8;
  for (uVar3 = 0; uVar3 < *(uint *)(param_1 + -8); uVar3 = uVar3 + 1) {
    ptVar1 = (tagFORMATETC *)(uVar3 * 0x24 + *(int *)(param_1 + -0x10));
    if ((ptVar1[1].lindex & param_2) != 0) {
      _AfxOleCopyFormatEtc(&local_34,ptVar1);
      CEnumFormatEtc::AddFormat(local_18,&local_34);
    }
  }
  *param_3 = (int)(local_18 + 0x38);
  uVar2 = FUN_1011ca27();
  return uVar2;
}

