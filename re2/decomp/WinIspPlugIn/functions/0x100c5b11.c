// rea decompile_all
// name: FUN_100c5b11
// address: 0x100c5b11
// body: available
// range: 0x100c5b11-0x100c5bfb inclusive
// non_contiguous: false
// provider: Ghidra 12.1.2 (ghidra)
// analysis_profile: b075844f08879296d957518397cd0ddda73db81dce53d00d3f0e702766fc2af6
// limitations: The session serves operations only after Ghidra reports default auto-analysis complete; incomplete analysis does not expose partial results.; The imported Program and temporary project are ephemeral and deleted on close. Annotation operations edit session database metadata; original executable bytes are never written.; Cancelling an active Ghidra request terminates its ephemeral database and discards session annotations. The selected target remains open; the next provider query imports the original artifact again.; Default-space addresses use lowercase 0x-prefixed hexadecimal; other address spaces use <percent-encoded-space>:0x<hex>.; Ghidra Listing reports a terminal call at 0x100c5bf7 to 0x1004a383 FUN_1004a383 (external=false, thunk=false, hasNoReturn=true); fallthrough is excluded by Ghidra's flow model. This records Ghidra's FunctionManager flag, not an independent verification that the callee cannot return.; The Ghidra Program references PDB WinIspPlugIn.pdb (GUID d9f398c7-6c98-49a8-af25-a0659d5ad2f3, age (hex) 1, signature unknown, version RSDS); Ghidra reports load state unknown. Original names and types may be missing; an empty name search does not prove a procedure is absent. Use list_procedures and address-based analysis to inspect recovered functions. REA does not admit a caller-selected PDB companion.; This session uses Ghidra 12.1.2. The bridge is verified against 12.1.4; other 12.1.x builds are accepted and the observed version is reported.; Pseudocode is Ghidra decompiler output, not original source and not text-equivalent to Hopper output.; External functions and functions without an analyzable body return null; other decompiler failures remain explicit.
// pseudocode: provider-specific; not original source


/* WARNING: Function: __EH_prolog3 replaced with injection: EH_prolog3 */
/* WARNING: Function: __EH_epilog3 replaced with injection: EH_epilog3 */

void FUN_100c5b11(void)

{
  CMFCFontInfo *this;
  undefined4 *puVar1;
  code *pcVar2;
  int iVar3;
  int iVar4;
  int *piVar5;
  int *in_ECX;
  uint uVar6;
  int local_1c;
  int *local_18;
  uint local_14;
  uint local_8;
  undefined4 uStack_4;
  
  uStack_4 = 0x14;
  local_8 = 0x100c5b1d;
  uVar6 = 0;
  local_14 = 0;
  local_18 = in_ECX;
  puVar1 = DAT_102471c4;
  while( true ) {
    if (puVar1 == (undefined4 *)0x0) {
      return;
    }
    if (puVar1 == (undefined4 *)0x0) break;
    this = (CMFCFontInfo *)puVar1[2];
    puVar1 = (undefined4 *)*puVar1;
    if ((*(uint *)(this + 0x10) & in_ECX[0x3d]) != 0) {
      iVar3 = FUN_100c5873(*(undefined4 *)(this + 4));
      if (1 < iVar3) {
        piVar5 = (int *)CMFCFontInfo::GetFullName(this);
        local_8 = 1;
        uVar6 = uVar6 | 2;
      }
      else {
        iVar4 = FUN_10047580(*(int *)(this + 4) + -0x10);
        local_1c = iVar4 + 0x10;
        local_8 = 0;
        piVar5 = &local_1c;
        uVar6 = uVar6 | 1;
      }
      local_8 = (uint)(1 < iVar3);
      pcVar2 = *(code **)(*local_18 + 0xcc);
      local_14 = uVar6;
      guard_check_icall(*piVar5,this);
      (*pcVar2)();
      if ((uVar6 & 2) != 0) {
        uVar6 = uVar6 & 0xfffffffd;
        local_14 = uVar6;
        FUN_100476d0();
      }
      local_8 = 0xffffffff;
      in_ECX = local_18;
      if ((uVar6 & 1) != 0) {
        uVar6 = uVar6 & 0xfffffffe;
        local_14 = uVar6;
        FUN_100476d0();
        in_ECX = local_18;
      }
    }
  }
                    /* WARNING: Subroutine does not return */
  FUN_1004a383();
}

