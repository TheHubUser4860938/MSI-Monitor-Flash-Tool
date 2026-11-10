// rea decompile_all
// name: FUN_004100d0
// address: 0x4100d0
// body: available
// range: 0x4100d0-0x410267 inclusive
// non_contiguous: false
// provider: Ghidra 12.1.2 (ghidra)
// analysis_profile: ac6d50be2cdf54f7005df47d1ed7e7ef55dee595681eb1b7c2e0b00d70cd697d
// limitations: The session serves operations only after Ghidra reports default auto-analysis complete; incomplete analysis does not expose partial results.; The imported Program and temporary project are ephemeral and deleted on close. Annotation operations edit session database metadata; original executable bytes are never written.; Cancelling an active Ghidra request terminates its ephemeral database and discards session annotations. The selected target remains open; the next provider query imports the original artifact again.; Default-space addresses use lowercase 0x-prefixed hexadecimal; other address spaces use <percent-encoded-space>:0x<hex>.; Ghidra Listing reports a terminal call at 0x410144 to 0x40ed80 FUN_0040ed80 (external=false, thunk=false, hasNoReturn=true); fallthrough is excluded by Ghidra's flow model. This records Ghidra's FunctionManager flag, not an independent verification that the callee cannot return.; The Ghidra Program references PDB ISPToolForMsi.pdb (GUID b8f2ac8f-1d6f-438d-800f-ed4a14426ac6, age (hex) 1, signature unknown, version RSDS); Ghidra reports load state unknown. Original names and types may be missing; an empty name search does not prove a procedure is absent. Use list_procedures and address-based analysis to inspect recovered functions. REA does not admit a caller-selected PDB companion.; This session uses Ghidra 12.1.2. The bridge is verified against 12.1.4; other 12.1.x builds are accepted and the observed version is reported.; Pseudocode is Ghidra decompiler output, not original source and not text-equivalent to Hopper output.; External functions and functions without an analyzable body return null; other decompiler failures remain explicit.
// pseudocode: provider-specific; not original source


void FUN_004100d0(int *param_1)

{
  WCHAR WVar1;
  int iVar2;
  uint uVar3;
  int *piVar4;
  int iVar5;
  WCHAR *pWVar6;
  int *piVar7;
  int local_228;
  int local_224;
  undefined4 local_220;
  WCHAR local_21c;
  undefined1 local_21a [518];
  uint local_14;
  void *local_10;
  undefined1 *puStack_c;
  uint local_8;
  
  puStack_c = &LAB_0059cd1d;
  local_10 = ExceptionList;
  uVar3 = DAT_0060cff4 ^ (uint)&stack0xfffffffc;
  ExceptionList = &local_10;
  local_8 = 0;
  local_220 = 0;
  local_14 = uVar3;
  _memset(&local_21c,0,0x208);
  *param_1 = 0;
  piVar4 = (int *)FUN_004295fe(uVar3);
  if (piVar4 == (int *)0x0) {
                    /* WARNING: Subroutine does not return */
    FUN_0040ed80(0x80004005);
  }
  iVar5 = (**(code **)(*piVar4 + 0xc))();
  *param_1 = iVar5 + 0x10;
  local_8 = 0;
  local_220 = 1;
  GetModuleFileNameW((HMODULE)0x0,&local_21c,0x104);
  pWVar6 = &local_21c;
  do {
    WVar1 = *pWVar6;
    pWVar6 = pWVar6 + 1;
  } while (WVar1 != L'\0');
  FUN_00415e30(&local_21c,(int)pWVar6 - (int)local_21a >> 1);
  iVar5 = FUN_0057335d(*param_1,0x5c);
  if (iVar5 == 0) {
    iVar5 = -1;
  }
  else {
    iVar5 = iVar5 - *param_1 >> 1;
  }
  piVar4 = (int *)FUN_004147d0(&local_228,iVar5 + 1);
  local_8 = 1;
  iVar5 = *piVar4;
  iVar2 = *param_1;
  piVar7 = (int *)(iVar2 + -0x10);
  piVar4 = (int *)(iVar5 + -0x10);
  if (piVar4 != piVar7) {
    if ((*(int *)(iVar2 + -4) < 0) || (*piVar4 != *piVar7)) {
      FUN_00415e30(iVar5,*(undefined4 *)(iVar5 + -0xc));
    }
    else {
      local_224 = FUN_00415ee0(piVar4);
      piVar4 = (int *)(iVar2 + -4);
      LOCK();
      iVar5 = *piVar4;
      *piVar4 = *piVar4 + -1;
      UNLOCK();
      if (iVar5 == 1 || iVar5 + -1 < 0) {
        (**(code **)(*(int *)*piVar7 + 4))(piVar7);
      }
      *param_1 = local_224 + 0x10;
    }
  }
  local_8 = local_8 & 0xffffff00;
  LOCK();
  piVar4 = (int *)(local_228 + -4);
  iVar5 = *piVar4;
  *piVar4 = *piVar4 + -1;
  UNLOCK();
  if (iVar5 == 1 || iVar5 + -1 < 0) {
    (**(code **)(**(int **)(local_228 + -0x10) + 4))((undefined4 *)(local_228 + -0x10));
  }
  ExceptionList = local_10;
  __security_check_cookie(local_14 ^ (uint)&stack0xfffffffc);
  return;
}

