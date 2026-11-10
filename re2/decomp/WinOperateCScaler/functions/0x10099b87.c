// rea decompile_all
// name: FUN_10099b87
// address: 0x10099b87
// body: available
// range: 0x10099b87-0x10099c71 inclusive
// non_contiguous: false
// provider: Ghidra 12.1.2 (ghidra)
// analysis_profile: b075844f08879296d957518397cd0ddda73db81dce53d00d3f0e702766fc2af6
// limitations: The session serves operations only after Ghidra reports default auto-analysis complete; incomplete analysis does not expose partial results.; The imported Program and temporary project are ephemeral and deleted on close. Annotation operations edit session database metadata; original executable bytes are never written.; Cancelling an active Ghidra request terminates its ephemeral database and discards session annotations. The selected target remains open; the next provider query imports the original artifact again.; Default-space addresses use lowercase 0x-prefixed hexadecimal; other address spaces use <percent-encoded-space>:0x<hex>.; Ghidra Listing reports a terminal call at 0x10099c6d to 0x1001d023 FUN_1001d023 (external=false, thunk=false, hasNoReturn=true); fallthrough is excluded by Ghidra's flow model. This records Ghidra's FunctionManager flag, not an independent verification that the callee cannot return.; The Ghidra Program references PDB WinOperateCScaler.pdb (GUID a6737962-efea-4805-8ae6-1fc1ef126554, age (hex) 1, signature unknown, version RSDS); Ghidra reports load state unknown. Original names and types may be missing; an empty name search does not prove a procedure is absent. Use list_procedures and address-based analysis to inspect recovered functions. REA does not admit a caller-selected PDB companion.; This session uses Ghidra 12.1.2. The bridge is verified against 12.1.4; other 12.1.x builds are accepted and the observed version is reported.; Pseudocode is Ghidra decompiler output, not original source and not text-equivalent to Hopper output.; External functions and functions without an analyzable body return null; other decompiler failures remain explicit.
// pseudocode: provider-specific; not original source


/* WARNING: Function: __EH_prolog3 replaced with injection: EH_prolog3 */
/* WARNING: Function: __EH_epilog3 replaced with injection: EH_epilog3 */

void FUN_10099b87(void)

{
  CMFCFontInfo *this;
  undefined4 *puVar1;
  code *pcVar2;
  int iVar3;
  int iVar4;
  int *piVar5;
  int *in_ECX;
  uint uVar6;
  int local_20;
  int local_1c;
  int *local_18;
  uint local_14;
  uint local_8;
  undefined4 uStack_4;
  
  uStack_4 = 0x14;
  local_8 = 0x10099b93;
  uVar6 = 0;
  local_14 = 0;
  local_18 = in_ECX;
  puVar1 = DAT_1020b20c;
  iVar4 = local_1c;
  while( true ) {
    if (puVar1 == (undefined4 *)0x0) {
      return;
    }
    if (puVar1 == (undefined4 *)0x0) break;
    this = (CMFCFontInfo *)puVar1[2];
    puVar1 = (undefined4 *)*puVar1;
    if ((*(uint *)(this + 0x10) & in_ECX[0x3d]) != 0) {
      iVar3 = FUN_100998e9(*(undefined4 *)(this + 4));
      if (1 < iVar3) {
        piVar5 = (int *)CMFCFontInfo::GetFullName(this);
        local_8 = 1;
        uVar6 = uVar6 | 2;
      }
      else {
        iVar4 = FUN_100187a0(*(int *)(this + 4) + -0x10);
        iVar4 = iVar4 + 0x10;
        local_1c = iVar4;
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
        ATL::CStringData::Release((CStringData *)(local_20 + -0x10));
      }
      local_8 = 0xffffffff;
      in_ECX = local_18;
      if ((uVar6 & 1) != 0) {
        uVar6 = uVar6 & 0xfffffffe;
        local_14 = uVar6;
        ATL::CStringData::Release((CStringData *)(iVar4 + -0x10));
        in_ECX = local_18;
      }
    }
  }
                    /* WARNING: Subroutine does not return */
  FUN_1001d023();
}

