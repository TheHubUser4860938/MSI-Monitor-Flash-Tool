// rea decompile_all
// name: FUN_1001c4e0
// address: 0x1001c4e0
// body: available
// range: 0x1001c4e0-0x1001c616 inclusive
// non_contiguous: false
// provider: Ghidra 12.1.2 (ghidra)
// analysis_profile: b075844f08879296d957518397cd0ddda73db81dce53d00d3f0e702766fc2af6
// limitations: The session serves operations only after Ghidra reports default auto-analysis complete; incomplete analysis does not expose partial results.; The imported Program and temporary project are ephemeral and deleted on close. Annotation operations edit session database metadata; original executable bytes are never written.; Cancelling an active Ghidra request terminates its ephemeral database and discards session annotations. The selected target remains open; the next provider query imports the original artifact again.; Default-space addresses use lowercase 0x-prefixed hexadecimal; other address spaces use <percent-encoded-space>:0x<hex>.; Ghidra Listing reports a terminal call at 0x1001c542 to 0x10018780 FUN_10018780 (external=false, thunk=false, hasNoReturn=true); fallthrough is excluded by Ghidra's flow model. This records Ghidra's FunctionManager flag, not an independent verification that the callee cannot return.; The Ghidra Program references PDB WinOperateCScaler.pdb (GUID a6737962-efea-4805-8ae6-1fc1ef126554, age (hex) 1, signature unknown, version RSDS); Ghidra reports load state unknown. Original names and types may be missing; an empty name search does not prove a procedure is absent. Use list_procedures and address-based analysis to inspect recovered functions. REA does not admit a caller-selected PDB companion.; This session uses Ghidra 12.1.2. The bridge is verified against 12.1.4; other 12.1.x builds are accepted and the observed version is reported.; Pseudocode is Ghidra decompiler output, not original source and not text-equivalent to Hopper output.; External functions and functions without an analyzable body return null; other decompiler failures remain explicit.
// pseudocode: provider-specific; not original source


void FUN_1001c4e0(undefined4 param_1,undefined4 param_2,undefined4 param_3)

{
  int *piVar1;
  undefined4 *puVar2;
  int iVar3;
  undefined4 uVar4;
  undefined1 local_7c [52];
  undefined1 local_48 [4];
  undefined1 local_44 [48];
  uint local_14;
  void *local_10;
  undefined1 *puStack_c;
  undefined4 local_8;
  
  local_8 = 0xffffffff;
  puStack_c = &LAB_10196208;
  local_10 = ExceptionList;
  local_14 = DAT_10201fec ^ (uint)&stack0xfffffffc;
  ExceptionList = &local_10;
  FUN_10019660(local_14);
  local_8 = 0;
  FUN_10019660();
  local_8._0_1_ = 1;
  piVar1 = (int *)FUN_1001e20a();
  if (piVar1 == (int *)0x0) {
                    /* WARNING: Subroutine does not return */
    FUN_10018780(0x80004005);
  }
  puVar2 = (undefined4 *)(**(code **)(*piVar1 + 0xc))();
  local_8 = CONCAT31(local_8._1_3_,2);
  FUN_100198c0(PTR_u_PlugIn_WinIspPlugIn_dll_10201000);
  FUN_100198c0(PTR_u_WinSignatureVerify_dll_10201004);
  iVar3 = FUN_100047b0(param_1,param_2,local_48,local_7c,param_3);
  if (iVar3 == 0) {
    uVar4 = FUN_100128d0(&DAT_1020d240,L"Success!");
    FUN_10012d40(uVar4);
  }
  else {
    FUN_10019cd0(local_48,L"Fail, Error code:0x%X!!",iVar3);
    uVar4 = FUN_1001c030(&DAT_1020d240,local_44);
    FUN_10012d40(uVar4);
  }
  local_8 = CONCAT31(local_8._1_3_,1);
  LOCK();
  piVar1 = puVar2 + 3;
  iVar3 = *piVar1;
  *piVar1 = *piVar1 + -1;
  UNLOCK();
  if (iVar3 == 1 || iVar3 + -1 < 0) {
    (**(code **)(*(int *)*puVar2 + 4))(puVar2);
  }
  FUN_100196a0();
  FUN_100196a0();
  ExceptionList = local_10;
  __security_check_cookie(local_14 ^ (uint)&stack0xfffffffc);
  return;
}

