// rea decompile_all
// name: FUN_00559026
// address: 0x559026
// body: available
// range: 0x559026-0x559110 inclusive
// non_contiguous: false
// provider: Ghidra 12.1.2 (ghidra)
// analysis_profile: ac6d50be2cdf54f7005df47d1ed7e7ef55dee595681eb1b7c2e0b00d70cd697d
// limitations: The session serves operations only after Ghidra reports default auto-analysis complete; incomplete analysis does not expose partial results.; The imported Program and temporary project are ephemeral and deleted on close. Annotation operations edit session database metadata; original executable bytes are never written.; Cancelling an active Ghidra request terminates its ephemeral database and discards session annotations. The selected target remains open; the next provider query imports the original artifact again.; Default-space addresses use lowercase 0x-prefixed hexadecimal; other address spaces use <percent-encoded-space>:0x<hex>.; Ghidra Listing reports a terminal call at 0x55910c to 0x429127 FUN_00429127 (external=false, thunk=false, hasNoReturn=true); fallthrough is excluded by Ghidra's flow model. This records Ghidra's FunctionManager flag, not an independent verification that the callee cannot return.; The Ghidra Program references PDB ISPToolForMsi.pdb (GUID b8f2ac8f-1d6f-438d-800f-ed4a14426ac6, age (hex) 1, signature unknown, version RSDS); Ghidra reports load state unknown. Original names and types may be missing; an empty name search does not prove a procedure is absent. Use list_procedures and address-based analysis to inspect recovered functions. REA does not admit a caller-selected PDB companion.; This session uses Ghidra 12.1.2. The bridge is verified against 12.1.4; other 12.1.x builds are accepted and the observed version is reported.; Pseudocode is Ghidra decompiler output, not original source and not text-equivalent to Hopper output.; External functions and functions without an analyzable body return null; other decompiler failures remain explicit.
// pseudocode: provider-specific; not original source


/* WARNING: Function: __EH_prolog3 replaced with injection: EH_prolog3 */
/* WARNING: Function: __EH_epilog3 replaced with injection: EH_epilog3 */

void FUN_00559026(void)

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
  local_8 = 0x559032;
  uVar6 = 0;
  local_14 = 0;
  local_18 = in_ECX;
  puVar1 = DAT_00618264;
  while( true ) {
    if (puVar1 == (undefined4 *)0x0) {
      return;
    }
    if (puVar1 == (undefined4 *)0x0) break;
    this = (CMFCFontInfo *)puVar1[2];
    puVar1 = (undefined4 *)*puVar1;
    if ((*(uint *)(this + 0x10) & in_ECX[0x3d]) != 0) {
      iVar3 = FUN_00558d88(*(undefined4 *)(this + 4));
      if (1 < iVar3) {
        piVar5 = (int *)CMFCFontInfo::GetFullName(this);
        local_8 = 1;
        uVar6 = uVar6 | 2;
      }
      else {
        iVar4 = FUN_00415ee0(*(int *)(this + 4) + -0x10);
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
        FUN_0040efa0();
      }
      local_8 = 0xffffffff;
      in_ECX = local_18;
      if ((uVar6 & 1) != 0) {
        uVar6 = uVar6 & 0xfffffffe;
        local_14 = uVar6;
        FUN_0040efa0();
        in_ECX = local_18;
      }
    }
  }
                    /* WARNING: Subroutine does not return */
  FUN_00429127();
}

