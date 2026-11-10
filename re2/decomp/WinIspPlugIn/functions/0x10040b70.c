// rea decompile_all
// name: FUN_10040b70
// address: 0x10040b70
// body: available
// range: 0x10040b70-0x10040cea inclusive
// non_contiguous: false
// provider: Ghidra 12.1.2 (ghidra)
// analysis_profile: b075844f08879296d957518397cd0ddda73db81dce53d00d3f0e702766fc2af6
// limitations: The session serves operations only after Ghidra reports default auto-analysis complete; incomplete analysis does not expose partial results.; The imported Program and temporary project are ephemeral and deleted on close. Annotation operations edit session database metadata; original executable bytes are never written.; Cancelling an active Ghidra request terminates its ephemeral database and discards session annotations. The selected target remains open; the next provider query imports the original artifact again.; Default-space addresses use lowercase 0x-prefixed hexadecimal; other address spaces use <percent-encoded-space>:0x<hex>.; The Ghidra Program references PDB WinIspPlugIn.pdb (GUID d9f398c7-6c98-49a8-af25-a0659d5ad2f3, age (hex) 1, signature unknown, version RSDS); Ghidra reports load state unknown. Original names and types may be missing; an empty name search does not prove a procedure is absent. Use list_procedures and address-based analysis to inspect recovered functions. REA does not admit a caller-selected PDB companion.; This session uses Ghidra 12.1.2. The bridge is verified against 12.1.4; other 12.1.x builds are accepted and the observed version is reported.; Pseudocode is Ghidra decompiler output, not original source and not text-equivalent to Hopper output.; External functions and functions without an analyzable body return null; other decompiler failures remain explicit.
// pseudocode: provider-specific; not original source


void FUN_10040b70(void)

{
  short sVar1;
  uint uVar2;
  undefined ***pppuVar3;
  short *in_ECX;
  short ****ppppsVar4;
  undefined **local_48;
  short ***local_44 [4];
  uint local_34;
  uint local_30;
  undefined1 local_2c;
  undefined4 local_1c;
  undefined4 local_18;
  uint local_14;
  void *local_10;
  undefined1 *puStack_c;
  uint local_8;
  
  puStack_c = &LAB_101c3b84;
  local_10 = ExceptionList;
  uVar2 = DAT_1023dfec ^ (uint)&stack0xfffffffc;
  ExceptionList = &local_10;
  local_30 = 7;
  local_34 = 0;
  local_44[0] = (short ***)((uint)local_44[0] & 0xffff0000);
  local_48 = CCpRsString::vftable;
  local_18 = 0xf;
  local_1c = 0;
  local_2c = 0;
  local_8 = 0;
  local_14 = uVar2;
  GetModuleHandleW(L"WinOperateCScaler.dll");
  pppuVar3 = (undefined ***)FUN_10046750(uVar2);
  if (&local_48 != pppuVar3) {
    if (pppuVar3 == (undefined ***)0x0) {
      ppppsVar4 = (short ****)0x0;
    }
    else {
      ppppsVar4 = (short ****)(pppuVar3 + 1);
    }
    if (local_44 != ppppsVar4) {
      if (7 < local_30) {
        FUN_1000b5d0(local_44[0],local_30 + 1);
      }
      local_30 = 7;
      local_34 = 0;
      local_44[0] = (short ***)((uint)local_44[0] & 0xffff0000);
      FUN_10045640(ppppsVar4);
    }
    local_8 = local_8 & 0xffffff00;
  }
  FUN_10048130();
  pppuVar3 = (undefined ***)FUN_10047dc0(L"IspSetting.ini");
  if (&local_48 != pppuVar3) {
    if (pppuVar3 == (undefined ***)0x0) {
      ppppsVar4 = (short ****)0x0;
    }
    else {
      ppppsVar4 = (short ****)(pppuVar3 + 1);
    }
    if (local_44 != ppppsVar4) {
      if (7 < local_30) {
        FUN_1000b5d0(local_44[0],local_30 + 1);
      }
      local_30 = 7;
      local_34 = 0;
      local_44[0] = (short ***)((uint)local_44[0] & 0xffff0000);
      FUN_10045640(ppppsVar4);
    }
  }
  FUN_10048130();
  if (local_34 < 0x104) {
    ppppsVar4 = local_44;
    if (7 < local_30) {
      ppppsVar4 = (short ****)local_44[0];
    }
    do {
      sVar1 = *(short *)ppppsVar4;
      ppppsVar4 = (short ****)((int)ppppsVar4 + 2);
      *in_ECX = sVar1;
      in_ECX = in_ECX + 1;
    } while (sVar1 != 0);
  }
  else {
    *in_ECX = 0;
  }
  FUN_10048130();
  ExceptionList = local_10;
  __security_check_cookie(local_14 ^ (uint)&stack0xfffffffc);
  return;
}

