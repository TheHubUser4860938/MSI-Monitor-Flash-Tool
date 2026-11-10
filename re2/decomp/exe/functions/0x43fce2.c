// rea decompile_all
// name: FUN_0043fce2
// address: 0x43fce2
// body: available
// range: 0x43fce2-0x43fdb3 inclusive
// non_contiguous: false
// provider: Ghidra 12.1.2 (ghidra)
// analysis_profile: ac6d50be2cdf54f7005df47d1ed7e7ef55dee595681eb1b7c2e0b00d70cd697d
// limitations: The session serves operations only after Ghidra reports default auto-analysis complete; incomplete analysis does not expose partial results.; The imported Program and temporary project are ephemeral and deleted on close. Annotation operations edit session database metadata; original executable bytes are never written.; Cancelling an active Ghidra request terminates its ephemeral database and discards session annotations. The selected target remains open; the next provider query imports the original artifact again.; Default-space addresses use lowercase 0x-prefixed hexadecimal; other address spaces use <percent-encoded-space>:0x<hex>.; Ghidra Listing reports a terminal call at 0x43fdb2 to 0x43fdd8 FUN_0043fdd8 (external=false, thunk=false, hasNoReturn=false); fallthrough is excluded by Ghidra's flow model. The reason for the terminal flow is not established by this observation.; The Ghidra Program references PDB ISPToolForMsi.pdb (GUID b8f2ac8f-1d6f-438d-800f-ed4a14426ac6, age (hex) 1, signature unknown, version RSDS); Ghidra reports load state unknown. Original names and types may be missing; an empty name search does not prove a procedure is absent. Use list_procedures and address-based analysis to inspect recovered functions. REA does not admit a caller-selected PDB companion.; This session uses Ghidra 12.1.2. The bridge is verified against 12.1.4; other 12.1.x builds are accepted and the observed version is reported.; Pseudocode is Ghidra decompiler output, not original source and not text-equivalent to Hopper output.; External functions and functions without an analyzable body return null; other decompiler failures remain explicit.
// pseudocode: provider-specific; not original source


/* WARNING: Function: __EH_prolog3_catch replaced with injection: EH_prolog3 */

void FUN_0043fce2(int param_1,byte param_2,undefined4 *param_3)

{
  int iVar1;
  int iVar2;
  code *pcVar3;
  longlong lVar4;
  int *piVar5;
  CEnumArray *this;
  uint uVar6;
  int local_20 [2];
  void *local_18;
  undefined4 local_8;
  undefined4 uStack_4;
  
  uStack_4 = 0x24;
  uVar6 = 0;
  local_20[1] = 0;
  *param_3 = 0;
  local_18 = (void *)0x0;
  local_8 = 0;
  if ((param_2 & 1) != 0) {
    lVar4 = (ulonglong)*(uint *)(param_1 + -0x30) * 4;
    local_18 = (void *)FUN_00416444(-(uint)((int)((ulonglong)lVar4 >> 0x20) != 0) | (uint)lVar4);
    local_20[0] = *(int *)(param_1 + -0x38);
    while (local_20[0] != 0) {
      piVar5 = (int *)FUN_004ead48(local_20);
      iVar1 = *piVar5;
      iVar2 = *(int *)(iVar1 + 4);
      if (iVar2 != 0) {
        piVar5 = *(int **)(iVar2 + 0x50);
        pcVar3 = *(code **)(*piVar5 + 4);
        guard_check_icall(piVar5);
        (*pcVar3)();
        *(undefined4 *)((int)local_18 + uVar6 * 4) = *(undefined4 *)(*(int *)(iVar1 + 4) + 0x50);
        uVar6 = uVar6 + 1;
      }
    }
  }
  this = (CEnumArray *)FUN_00416408(0x3c);
  local_8 = CONCAT31(local_8._1_3_,1);
  if (this != (CEnumArray *)0x0) {
    CEnumArray::CEnumArray(this,4,local_18,uVar6,1);
    *(undefined ***)this = CEnumUnknown::vftable;
  }
  local_8 = 0xffffffff;
  FUN_0043fdd8();
  return;
}

