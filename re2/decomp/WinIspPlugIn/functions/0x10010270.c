// rea decompile_all
// name: FUN_10010270
// address: 0x10010270
// body: available
// range: 0x10010270-0x10010469 inclusive
// non_contiguous: false
// provider: Ghidra 12.1.2 (ghidra)
// analysis_profile: b075844f08879296d957518397cd0ddda73db81dce53d00d3f0e702766fc2af6
// limitations: The session serves operations only after Ghidra reports default auto-analysis complete; incomplete analysis does not expose partial results.; The imported Program and temporary project are ephemeral and deleted on close. Annotation operations edit session database metadata; original executable bytes are never written.; Cancelling an active Ghidra request terminates its ephemeral database and discards session annotations. The selected target remains open; the next provider query imports the original artifact again.; Default-space addresses use lowercase 0x-prefixed hexadecimal; other address spaces use <percent-encoded-space>:0x<hex>.; The Ghidra Program references PDB WinIspPlugIn.pdb (GUID d9f398c7-6c98-49a8-af25-a0659d5ad2f3, age (hex) 1, signature unknown, version RSDS); Ghidra reports load state unknown. Original names and types may be missing; an empty name search does not prove a procedure is absent. Use list_procedures and address-based analysis to inspect recovered functions. REA does not admit a caller-selected PDB companion.; This session uses Ghidra 12.1.2. The bridge is verified against 12.1.4; other 12.1.x builds are accepted and the observed version is reported.; Pseudocode is Ghidra decompiler output, not original source and not text-equivalent to Hopper output.; External functions and functions without an analyzable body return null; other decompiler failures remain explicit.
// pseudocode: provider-specific; not original source


void FUN_10010270(undefined4 param_1,undefined4 param_2,int *param_3,int param_4,undefined1 param_5,
                 char param_6)

{
  num_put<char,std::ostreambuf_iterator<char,std::char_traits<char>_>_> *pnVar1;
  undefined4 uVar2;
  undefined4 *puVar3;
  undefined4 ****ppppuVar4;
  int *in_ECX;
  int iVar5;
  undefined1 local_54 [4];
  int *local_50;
  int *local_4c;
  undefined4 local_48;
  undefined4 local_44 [5];
  uint local_30;
  undefined4 ***local_2c [4];
  num_put<char,std::ostreambuf_iterator<char,std::char_traits<char>_>_> *local_1c;
  uint local_18;
  uint local_14;
  void *local_10;
  undefined1 *puStack_c;
  undefined4 local_8;
  
  local_8 = 0xffffffff;
  puStack_c = &LAB_101c1602;
  local_10 = ExceptionList;
  local_14 = DAT_1023dfec ^ (uint)&stack0xfffffffc;
  ExceptionList = &local_10;
  local_48 = CONCAT31(local_48._1_3_,param_5);
  if ((*(uint *)(param_4 + 0x14) & 0x4000) == 0) {
    (**(code **)(*in_ECX + 0x24))(param_1,param_2,param_3,param_4,local_48,param_6,local_14);
  }
  else {
    local_4c = in_ECX;
    uVar2 = FUN_100072b0(local_54);
    local_8 = 0;
    FUN_10012020(uVar2);
    local_8 = 1;
    if ((local_50 != (int *)0x0) &&
       (puVar3 = (undefined4 *)(**(code **)(*local_50 + 8))(), puVar3 != (undefined4 *)0x0)) {
      (**(code **)*puVar3)(1);
    }
    local_18 = 0xf;
    local_1c = (num_put<char,std::ostreambuf_iterator<char,std::char_traits<char>_>_> *)0x0;
    local_2c[0] = (undefined4 ***)((uint)local_2c[0] & 0xffffff00);
    local_8 = 2;
    if (param_6 == '\0') {
      ppppuVar4 = (undefined4 ****)FUN_10010780(local_44);
    }
    else {
      ppppuVar4 = (undefined4 ****)FUN_10010760(local_44);
    }
    if (local_2c != ppppuVar4) {
      if (0xf < local_18) {
        FUN_1000b630(local_2c[0],local_18 + 1);
      }
      local_18 = 0xf;
      local_1c = (num_put<char,std::ostreambuf_iterator<char,std::char_traits<char>_>_> *)0x0;
      local_2c[0] = (undefined4 ***)((uint)local_2c[0] & 0xffffff00);
      FUN_1000af70(ppppuVar4);
    }
    local_8 = CONCAT31(local_8._1_3_,2);
    if (0xf < local_30) {
      FUN_1000b630(local_44[0],local_30 + 1);
    }
    if ((*(int *)(param_4 + 0x24) < 0) ||
       (((*(int *)(param_4 + 0x24) < 1 && (*(int *)(param_4 + 0x20) == 0)) ||
        (*(num_put<char,std::ostreambuf_iterator<char,std::char_traits<char>_>_> **)(param_4 + 0x20)
         <= local_1c)))) {
      iVar5 = 0;
    }
    else {
      iVar5 = (int)*(num_put<char,std::ostreambuf_iterator<char,std::char_traits<char>_>_> **)
                    (param_4 + 0x20) - (int)local_1c;
    }
    if ((*(uint *)(param_4 + 0x14) & 0x1c0) != 0x40) {
      puVar3 = (undefined4 *)
               std::num_put<char,std::ostreambuf_iterator<char,std::char_traits<char>_>_>::_Rep
                         (local_1c,local_4c,local_54,param_2,param_3,local_48,iVar5);
      iVar5 = 0;
      param_2 = *puVar3;
      param_3 = (int *)puVar3[1];
    }
    ppppuVar4 = local_2c;
    if (0xf < local_18) {
      ppppuVar4 = (undefined4 ****)local_2c[0];
    }
    local_50 = param_3;
    puVar3 = (undefined4 *)FUN_10010a90(local_4c,local_54,param_2,param_3,ppppuVar4,local_1c);
    pnVar1 = (num_put<char,std::ostreambuf_iterator<char,std::char_traits<char>_>_> *)*puVar3;
    uVar2 = puVar3[1];
    *(undefined4 *)(param_4 + 0x20) = 0;
    *(undefined4 *)(param_4 + 0x24) = 0;
    std::num_put<char,std::ostreambuf_iterator<char,std::char_traits<char>_>_>::_Rep
              (pnVar1,local_4c,param_1,pnVar1,uVar2,local_48,iVar5);
    if (0xf < local_18) {
      FUN_1000b630(local_2c[0],local_18 + 1);
    }
  }
  ExceptionList = local_10;
  __security_check_cookie(local_14 ^ (uint)&stack0xfffffffc);
  return;
}

