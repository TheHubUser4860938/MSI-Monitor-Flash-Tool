// rea decompile_all
// name: FUN_10122f77
// address: 0x10122f77
// body: available
// range: 0x10122f77-0x1012309c inclusive
// non_contiguous: false
// provider: Ghidra 12.1.2 (ghidra)
// analysis_profile: b075844f08879296d957518397cd0ddda73db81dce53d00d3f0e702766fc2af6
// limitations: The session serves operations only after Ghidra reports default auto-analysis complete; incomplete analysis does not expose partial results.; The imported Program and temporary project are ephemeral and deleted on close. Annotation operations edit session database metadata; original executable bytes are never written.; Cancelling an active Ghidra request terminates its ephemeral database and discards session annotations. The selected target remains open; the next provider query imports the original artifact again.; Default-space addresses use lowercase 0x-prefixed hexadecimal; other address spaces use <percent-encoded-space>:0x<hex>.; Ghidra Listing reports a terminal call at 0x10123098 to 0x1001d023 FUN_1001d023 (external=false, thunk=false, hasNoReturn=true); fallthrough is excluded by Ghidra's flow model. This records Ghidra's FunctionManager flag, not an independent verification that the callee cannot return.; The Ghidra Program references PDB WinOperateCScaler.pdb (GUID a6737962-efea-4805-8ae6-1fc1ef126554, age (hex) 1, signature unknown, version RSDS); Ghidra reports load state unknown. Original names and types may be missing; an empty name search does not prove a procedure is absent. Use list_procedures and address-based analysis to inspect recovered functions. REA does not admit a caller-selected PDB companion.; This session uses Ghidra 12.1.2. The bridge is verified against 12.1.4; other 12.1.x builds are accepted and the observed version is reported.; Pseudocode is Ghidra decompiler output, not original source and not text-equivalent to Hopper output.; External functions and functions without an analyzable body return null; other decompiler failures remain explicit.
// pseudocode: provider-specific; not original source


/* WARNING: Function: __EH_prolog3 replaced with injection: EH_prolog3 */
/* WARNING: Function: __EH_epilog3 replaced with injection: EH_epilog3 */

int * FUN_10122f77(int *param_1,int param_2)

{
  undefined4 uVar1;
  int iVar2;
  int *piVar3;
  int in_ECX;
  CStringData *this;
  int local_14 [3];
  undefined4 local_8;
  undefined4 uStack_4;
  
  uStack_4 = 8;
  local_8 = 0x10122f83;
  iVar2 = *(int *)(param_2 + 0x1c8);
  uVar1 = FUN_1001e20a();
  FUN_1001d224(uVar1);
  local_8 = 0;
  if (iVar2 == -3) {
    iVar2 = FUN_1001de45(0x42d3);
    if ((iVar2 == 0) || (iVar2 = FUN_10018c20(iVar2,0x42d3), iVar2 == 0)) {
                    /* WARNING: Subroutine does not return */
      FUN_1001d023();
    }
  }
  else {
    if (1 < iVar2 + 2U) {
      if ((iVar2 < 0) || (*(int *)(in_ECX + 800) <= iVar2)) {
        FUN_100185a0(&DAT_101a63a8);
        ATL::CStringData::Release((CStringData *)(local_14[0] + -0x10));
        return param_1;
      }
      piVar3 = (int *)FUN_1009f8c7(iVar2);
      iVar2 = FUN_100187a0(*piVar3 + -0x10);
      this = (CStringData *)(local_14[0] + -0x10);
      goto LAB_10123017;
    }
    iVar2 = *(int *)(in_ECX + 0x338);
    if (iVar2 == 1) {
      FUN_1006a4ab(local_14,0x42d4,*(int *)(in_ECX + 0x33c) + 1,*(int *)(in_ECX + 0x340) + 1);
    }
    else {
      FUN_1006a4ab(local_14,0x42d5,*(int *)(in_ECX + 0x33c) + 1,*(int *)(in_ECX + 0x33c) + iVar2,
                   *(int *)(in_ECX + 0x340) + iVar2);
    }
  }
  this = (CStringData *)(local_14[0] + -0x10);
  iVar2 = FUN_100187a0(this);
LAB_10123017:
  *param_1 = iVar2 + 0x10;
  ATL::CStringData::Release(this);
  return param_1;
}

