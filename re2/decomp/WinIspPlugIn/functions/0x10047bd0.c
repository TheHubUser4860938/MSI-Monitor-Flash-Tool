// rea decompile_all
// name: FUN_10047bd0
// address: 0x10047bd0
// body: available
// range: 0x10047bd0-0x10047dba inclusive
// non_contiguous: false
// provider: Ghidra 12.1.2 (ghidra)
// analysis_profile: b075844f08879296d957518397cd0ddda73db81dce53d00d3f0e702766fc2af6
// limitations: The session serves operations only after Ghidra reports default auto-analysis complete; incomplete analysis does not expose partial results.; The imported Program and temporary project are ephemeral and deleted on close. Annotation operations edit session database metadata; original executable bytes are never written.; Cancelling an active Ghidra request terminates its ephemeral database and discards session annotations. The selected target remains open; the next provider query imports the original artifact again.; Default-space addresses use lowercase 0x-prefixed hexadecimal; other address spaces use <percent-encoded-space>:0x<hex>.; The Ghidra Program references PDB WinIspPlugIn.pdb (GUID d9f398c7-6c98-49a8-af25-a0659d5ad2f3, age (hex) 1, signature unknown, version RSDS); Ghidra reports load state unknown. Original names and types may be missing; an empty name search does not prove a procedure is absent. Use list_procedures and address-based analysis to inspect recovered functions. REA does not admit a caller-selected PDB companion.; This session uses Ghidra 12.1.2. The bridge is verified against 12.1.4; other 12.1.x builds are accepted and the observed version is reported.; Pseudocode is Ghidra decompiler output, not original source and not text-equivalent to Hopper output.; External functions and functions without an analyzable body return null; other decompiler failures remain explicit.
// pseudocode: provider-specific; not original source


void FUN_10047bd0(int param_1)

{
  short sVar1;
  uint uVar2;
  short ****ppppsVar3;
  int iVar4;
  short ****ppppsVar5;
  undefined4 *in_ECX;
  int in_EDX;
  undefined4 local_78;
  uint local_64;
  uint local_60 [4];
  undefined4 local_50;
  uint local_4c;
  undefined4 local_48;
  undefined4 local_38;
  uint local_34;
  short ***local_30 [4];
  undefined4 local_20;
  uint local_1c;
  uint local_18;
  void *local_10;
  undefined1 *puStack_c;
  uint local_8;
  
  puStack_c = &LAB_101c407e;
  local_10 = ExceptionList;
  uVar2 = DAT_1023dfec ^ (uint)&stack0xfffffffc;
  ExceptionList = &local_10;
  local_1c = 7;
  local_20 = 0;
  local_30[0] = (short ***)((uint)local_30[0] & 0xffff0000);
  local_8 = 0;
  local_50 = 0;
  local_60[0] = local_60[0] & 0xffff0000;
  local_4c = 7;
  local_18 = uVar2;
  FUN_10046260(-(uint)(param_1 != 0) & param_1 + 4U,0,0xffffffff);
  local_8._0_1_ = 1;
  local_48 = (uint)local_48._2_2_ << 0x10;
  local_34 = 7;
  local_38 = 0;
  FUN_10046260(-(uint)(in_EDX != 0) & in_EDX + 4U,0,0xffffffff);
  local_8 = CONCAT31(local_8._1_3_,2);
  ppppsVar3 = (short ****)FUN_100488a0(local_60,uVar2);
  if (local_30 != ppppsVar3) {
    if (7 < local_1c) {
      FUN_1000b5d0(local_30[0],local_1c + 1);
    }
    local_1c = 7;
    local_20 = 0;
    local_30[0] = (short ***)((uint)local_30[0] & 0xffff0000);
    FUN_10045640(ppppsVar3);
  }
  if (7 < local_64) {
    FUN_1000b5d0(local_78,local_64 + 1);
  }
  if (7 < local_34) {
    FUN_1000b5d0(local_48,local_34 + 1);
  }
  local_34 = 7;
  local_48 = local_48 & 0xffff0000;
  local_8 = local_8 & 0xffffff00;
  local_38 = 0;
  if (7 < local_4c) {
    FUN_1000b5d0(local_60[0],local_4c + 1);
  }
  in_ECX[6] = 7;
  ppppsVar3 = local_30;
  if (7 < local_1c) {
    ppppsVar3 = (short ****)local_30[0];
  }
  iVar4 = 0;
  in_ECX[5] = 0;
  *(undefined2 *)(in_ECX + 1) = 0;
  if (*(short *)ppppsVar3 != 0) {
    ppppsVar5 = ppppsVar3;
    do {
      sVar1 = *(short *)ppppsVar5;
      ppppsVar5 = (short ****)((int)ppppsVar5 + 2);
    } while (sVar1 != 0);
    iVar4 = (int)ppppsVar5 - (int)((int)ppppsVar3 + 2) >> 1;
  }
  FUN_10045540(ppppsVar3,iVar4);
  *in_ECX = CCpRsString::vftable;
  in_ECX[0xc] = 0xf;
  in_ECX[0xb] = 0;
  *(undefined1 *)(in_ECX + 7) = 0;
  if (7 < local_1c) {
    FUN_1000b5d0(local_30[0],local_1c + 1);
  }
  ExceptionList = local_10;
  __security_check_cookie(local_18 ^ (uint)&stack0xfffffffc);
  return;
}

