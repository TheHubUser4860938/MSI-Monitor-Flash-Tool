// rea decompile_all
// name: FUN_00417078
// address: 0x417078
// body: available
// range: 0x417078-0x417119 inclusive
// non_contiguous: false
// provider: Ghidra 12.1.2 (ghidra)
// analysis_profile: ac6d50be2cdf54f7005df47d1ed7e7ef55dee595681eb1b7c2e0b00d70cd697d
// limitations: The session serves operations only after Ghidra reports default auto-analysis complete; incomplete analysis does not expose partial results.; The imported Program and temporary project are ephemeral and deleted on close. Annotation operations edit session database metadata; original executable bytes are never written.; Cancelling an active Ghidra request terminates its ephemeral database and discards session annotations. The selected target remains open; the next provider query imports the original artifact again.; Default-space addresses use lowercase 0x-prefixed hexadecimal; other address spaces use <percent-encoded-space>:0x<hex>.; Ghidra Listing reports a terminal call at 0x417115 to 0x429127 FUN_00429127 (external=false, thunk=false, hasNoReturn=true); fallthrough is excluded by Ghidra's flow model. This records Ghidra's FunctionManager flag, not an independent verification that the callee cannot return.; The Ghidra Program references PDB ISPToolForMsi.pdb (GUID b8f2ac8f-1d6f-438d-800f-ed4a14426ac6, age (hex) 1, signature unknown, version RSDS); Ghidra reports load state unknown. Original names and types may be missing; an empty name search does not prove a procedure is absent. Use list_procedures and address-based analysis to inspect recovered functions. REA does not admit a caller-selected PDB companion.; This session uses Ghidra 12.1.2. The bridge is verified against 12.1.4; other 12.1.x builds are accepted and the observed version is reported.; Pseudocode is Ghidra decompiler output, not original source and not text-equivalent to Hopper output.; External functions and functions without an analyzable body return null; other decompiler failures remain explicit.
// pseudocode: provider-specific; not original source


uint FUN_00417078(int *param_1,int param_2)

{
  int iVar1;
  uint uVar2;
  int iVar3;
  code *pcVar4;
  bool bVar5;
  undefined4 uVar6;
  
  if ((param_1 != (int *)0x0) && (param_2 != 0)) {
    if ((*(int *)(param_2 + 4) == 1) || (*(int *)(param_2 + 4) == 0xf)) {
      uVar2 = FUN_0042c296(param_1,param_2);
    }
    else {
      bVar5 = *(int *)(param_2 + 4) == 0x111;
      iVar3 = 0xf108;
      if (bVar5) {
        iVar3 = 0xf109 - (uint)(*(int *)(param_2 + 0xc) != 0);
      }
      uVar2 = (uint)bVar5;
      iVar1 = FUN_0043970d(&PTR_s_CMemoryException_005b07d8);
      if (iVar1 == 0) {
        iVar1 = FUN_0043970d(&PTR_s_CUserException_005b0934);
        if (iVar1 != 0) {
          return uVar2;
        }
        uVar6 = 0x10;
        pcVar4 = *(code **)(*param_1 + 0x14);
      }
      else {
        uVar6 = 0x1030;
        pcVar4 = *(code **)(*param_1 + 0x14);
      }
      guard_check_icall(uVar6,iVar3);
      (*pcVar4)();
    }
    return uVar2;
  }
                    /* WARNING: Subroutine does not return */
  FUN_00429127();
}

