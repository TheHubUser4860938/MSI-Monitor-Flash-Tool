// rea decompile_all
// name: FUN_004a85ca
// address: 0x4a85ca
// body: available
// range: 0x4a85ca-0x4a86ec inclusive
// non_contiguous: false
// provider: Ghidra 12.1.2 (ghidra)
// analysis_profile: ac6d50be2cdf54f7005df47d1ed7e7ef55dee595681eb1b7c2e0b00d70cd697d
// limitations: The session serves operations only after Ghidra reports default auto-analysis complete; incomplete analysis does not expose partial results.; The imported Program and temporary project are ephemeral and deleted on close. Annotation operations edit session database metadata; original executable bytes are never written.; Cancelling an active Ghidra request terminates its ephemeral database and discards session annotations. The selected target remains open; the next provider query imports the original artifact again.; Default-space addresses use lowercase 0x-prefixed hexadecimal; other address spaces use <percent-encoded-space>:0x<hex>.; Ghidra Listing reports a terminal call at 0x4a86e8 to 0x429127 FUN_00429127 (external=false, thunk=false, hasNoReturn=true); fallthrough is excluded by Ghidra's flow model. This records Ghidra's FunctionManager flag, not an independent verification that the callee cannot return.; The Ghidra Program references PDB ISPToolForMsi.pdb (GUID b8f2ac8f-1d6f-438d-800f-ed4a14426ac6, age (hex) 1, signature unknown, version RSDS); Ghidra reports load state unknown. Original names and types may be missing; an empty name search does not prove a procedure is absent. Use list_procedures and address-based analysis to inspect recovered functions. REA does not admit a caller-selected PDB companion.; This session uses Ghidra 12.1.2. The bridge is verified against 12.1.4; other 12.1.x builds are accepted and the observed version is reported.; Pseudocode is Ghidra decompiler output, not original source and not text-equivalent to Hopper output.; External functions and functions without an analyzable body return null; other decompiler failures remain explicit.
// pseudocode: provider-specific; not original source


undefined4 FUN_004a85ca(undefined4 param_1,int *param_2)

{
  code *pcVar1;
  ushort uVar2;
  int iVar3;
  int iVar4;
  int *in_ECX;
  undefined4 uVar5;
  
  if ((*(int *)(*(int *)((int)ThreadLocalStoragePointer + _tls_index * 4) + 4) < DAT_0061674c) &&
     (FUN_0055b543(&DAT_0061674c), DAT_0061674c == -1)) {
    uVar5 = FUN_004295fe();
    FUN_0040eb30(uVar5);
    _atexit((_func_4879 *)&LAB_005abfd8);
    FUN_0055b504(&DAT_0061674c);
  }
  if (param_2 == (int *)0x0) {
LAB_004a86e8:
                    /* WARNING: Subroutine does not return */
    FUN_00429127();
  }
  iVar4 = in_ECX[0xd3];
  if ((iVar4 != 0) && (*(int *)(iVar4 + 0x20) != 0)) {
    iVar3 = 0;
    if (iVar4 != 0) {
      iVar3 = *(int *)(iVar4 + 0x20);
    }
    if (*param_2 == iVar3) {
      iVar4 = param_2[1];
      if (iVar4 == 1) {
        uVar5 = 0x3ea0;
      }
      else if (iVar4 == 2) {
        uVar5 = 0x3ea1;
        uVar2 = GetAsyncKeyState(0x11);
        if ((uVar2 & 0x8000) != 0) {
          pcVar1 = *(code **)(*in_ECX + 0x340);
          guard_check_icall();
          iVar4 = (*pcVar1)();
          if (iVar4 != 0) {
            uVar5 = 0x3ea4;
          }
        }
      }
      else {
        if (iVar4 != 3) {
          return 0;
        }
        uVar5 = 0x428e;
      }
      iVar4 = FUN_00435fce(uVar5);
      if ((iVar4 != 0) && (iVar4 = FUN_004160f0(iVar4,uVar5), iVar4 != 0)) {
        param_2[3] = DAT_00616748;
        return 1;
      }
      goto LAB_004a86e8;
    }
  }
  return 0;
}

