// rea decompile_all
// name: FUN_0045fd75
// address: 0x45fd75
// body: available
// range: 0x45fd75-0x45fe96 inclusive
// non_contiguous: false
// provider: Ghidra 12.1.2 (ghidra)
// analysis_profile: ac6d50be2cdf54f7005df47d1ed7e7ef55dee595681eb1b7c2e0b00d70cd697d
// limitations: The session serves operations only after Ghidra reports default auto-analysis complete; incomplete analysis does not expose partial results.; The imported Program and temporary project are ephemeral and deleted on close. Annotation operations edit session database metadata; original executable bytes are never written.; Cancelling an active Ghidra request terminates its ephemeral database and discards session annotations. The selected target remains open; the next provider query imports the original artifact again.; Default-space addresses use lowercase 0x-prefixed hexadecimal; other address spaces use <percent-encoded-space>:0x<hex>.; Ghidra Listing reports a terminal call at 0x45fe92 to 0x429127 FUN_00429127 (external=false, thunk=false, hasNoReturn=true); fallthrough is excluded by Ghidra's flow model. This records Ghidra's FunctionManager flag, not an independent verification that the callee cannot return.; The Ghidra Program references PDB ISPToolForMsi.pdb (GUID b8f2ac8f-1d6f-438d-800f-ed4a14426ac6, age (hex) 1, signature unknown, version RSDS); Ghidra reports load state unknown. Original names and types may be missing; an empty name search does not prove a procedure is absent. Use list_procedures and address-based analysis to inspect recovered functions. REA does not admit a caller-selected PDB companion.; This session uses Ghidra 12.1.2. The bridge is verified against 12.1.4; other 12.1.x builds are accepted and the observed version is reported.; Pseudocode is Ghidra decompiler output, not original source and not text-equivalent to Hopper output.; External functions and functions without an analyzable body return null; other decompiler failures remain explicit.
// pseudocode: provider-specific; not original source


undefined4 FUN_0045fd75(undefined4 param_1,int *param_2)

{
  int iVar1;
  __POSITION *p_Var2;
  uint uVar3;
  int iVar4;
  int in_ECX;
  undefined4 uVar5;
  
  if ((*(int *)(*(int *)((int)ThreadLocalStoragePointer + _tls_index * 4) + 4) < DAT_00615fb0) &&
     (FUN_0055b543(&DAT_00615fb0), DAT_00615fb0 == -1)) {
    uVar5 = FUN_004295fe();
    FUN_0040eb30(uVar5);
    _atexit((_func_4879 *)&LAB_005abf3b);
    FUN_0055b504(&DAT_00615fb0);
  }
  if (param_2 == (int *)0x0) {
LAB_0045fe92:
                    /* WARNING: Subroutine does not return */
    FUN_00429127();
  }
  iVar4 = *(int *)(in_ECX + 0x124);
  if ((iVar4 != 0) && (*(int *)(iVar4 + 0x20) != 0)) {
    iVar1 = 0;
    if (iVar4 != 0) {
      iVar1 = *(int *)(iVar4 + 0x20);
    }
    if (((((*param_2 == iVar1) && (DAT_00616b18 == 0)) && (iVar4 = param_2[1], iVar4 != 0)) &&
        ((iVar4 <= *(int *)(in_ECX + 0x114) &&
         (p_Var2 = CObList::FindIndex((CObList *)(in_ECX + 0x108),iVar4 + -1),
         p_Var2 != (__POSITION *)0x0)))) && (uVar3 = FUN_0056922d(), 7 < uVar3)) {
      if (uVar3 < 10) {
        uVar5 = 0x3ea1;
      }
      else if (uVar3 == 0x14) {
        uVar5 = 0x3ee9;
      }
      else {
        if (uVar3 != 0x19) {
          return 0;
        }
        uVar5 = 0x4279;
      }
      iVar4 = FUN_00435fce(uVar5);
      if ((iVar4 != 0) && (iVar4 = FUN_004160f0(iVar4,uVar5), iVar4 != 0)) {
        param_2[3] = DAT_00615fac;
        return 1;
      }
      goto LAB_0045fe92;
    }
  }
  return 0;
}

