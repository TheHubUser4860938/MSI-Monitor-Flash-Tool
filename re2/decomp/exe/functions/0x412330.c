// rea decompile_all
// name: FUN_00412330
// address: 0x412330
// body: available
// range: 0x412330-0x4124e7 inclusive
// non_contiguous: false
// provider: Ghidra 12.1.2 (ghidra)
// analysis_profile: ac6d50be2cdf54f7005df47d1ed7e7ef55dee595681eb1b7c2e0b00d70cd697d
// limitations: The session serves operations only after Ghidra reports default auto-analysis complete; incomplete analysis does not expose partial results.; The imported Program and temporary project are ephemeral and deleted on close. Annotation operations edit session database metadata; original executable bytes are never written.; Cancelling an active Ghidra request terminates its ephemeral database and discards session annotations. The selected target remains open; the next provider query imports the original artifact again.; Default-space addresses use lowercase 0x-prefixed hexadecimal; other address spaces use <percent-encoded-space>:0x<hex>.; The Ghidra Program references PDB ISPToolForMsi.pdb (GUID b8f2ac8f-1d6f-438d-800f-ed4a14426ac6, age (hex) 1, signature unknown, version RSDS); Ghidra reports load state unknown. Original names and types may be missing; an empty name search does not prove a procedure is absent. Use list_procedures and address-based analysis to inspect recovered functions. REA does not admit a caller-selected PDB companion.; This session uses Ghidra 12.1.2. The bridge is verified against 12.1.4; other 12.1.x builds are accepted and the observed version is reported.; Pseudocode is Ghidra decompiler output, not original source and not text-equivalent to Hopper output.; External functions and functions without an analyzable body return null; other decompiler failures remain explicit.
// pseudocode: provider-specific; not original source


void FUN_00412330(undefined4 *param_1,int param_2,undefined4 param_3)

{
  char cVar1;
  uint uVar2;
  int iVar3;
  undefined4 *puVar4;
  int in_ECX;
  wchar_t *pwVar5;
  undefined4 uVar6;
  undefined **local_48;
  uint local_44;
  undefined4 local_34;
  uint local_30;
  undefined1 local_2c;
  undefined4 local_1c;
  undefined4 local_18;
  uint local_14;
  void *local_10;
  undefined1 *puStack_c;
  undefined4 local_8;
  
  puStack_c = &LAB_0059d078;
  local_10 = ExceptionList;
  uVar2 = DAT_0060cff4 ^ (uint)&stack0xfffffffc;
  ExceptionList = &local_10;
  local_30 = 7;
  local_34 = 0;
  local_44 = local_44 & 0xffff0000;
  local_48 = CCpRsString::vftable;
  local_18 = 0xf;
  local_1c = 0;
  local_2c = 0;
  local_8 = 0;
  local_14 = uVar2;
  if (*(int *)(in_ECX + 0x188) == 0) {
LAB_00412442:
    if (*(int *)(in_ECX + 0x18c) == 0) goto LAB_004124a4;
    iVar3 = FUN_004124f0(param_2,*(undefined4 *)(in_ECX + 0x198),param_3);
    if (iVar3 == 0) {
      puVar4 = (undefined4 *)(param_2 + 4);
      if (7 < *(uint *)(param_2 + 0x18)) {
        puVar4 = (undefined4 *)*puVar4;
      }
      FUN_00402f80(&local_48,L"Bin model name:%ls",puVar4);
      FUN_00408520();
      goto LAB_004124a4;
    }
    pwVar5 = L"Get bin model name fail, error code:0x%x";
  }
  else {
    iVar3 = FUN_004129b0(param_1,*(undefined4 *)(in_ECX + 0x180),param_3);
    if (iVar3 == 0) {
      uVar6 = param_1[3];
      FUN_00402f80(&local_48,L"Bin version:%d.%d.%d.%d",*param_1,param_1[1],param_1[2],uVar6);
      FUN_00408520();
      cVar1 = FUN_00413ff0(param_1,*(undefined1 *)(in_ECX + 0x178),uVar6);
      if (cVar1 == '\0') {
        FUN_00402f20(L"Convert bin version fail!");
        FUN_00408420();
        goto LAB_004124a4;
      }
      FUN_00402f80(&local_48,L"Bin version after convert:%d.%d.%d.%d",*param_1,param_1[1],param_1[2]
                   ,param_1[3]);
      FUN_00408420();
      goto LAB_00412442;
    }
    pwVar5 = L"Get bin version fail, error code:0x%x";
  }
  FUN_00402f80(&local_48,pwVar5,iVar3);
  FUN_00408520();
LAB_004124a4:
  local_48 = CCpRsString::vftable;
  FUN_004033e0(uVar2);
  if (7 < local_30) {
    FUN_004053c0(local_44,local_30 + 1);
  }
  ExceptionList = local_10;
  __security_check_cookie(local_14 ^ (uint)&stack0xfffffffc);
  return;
}

