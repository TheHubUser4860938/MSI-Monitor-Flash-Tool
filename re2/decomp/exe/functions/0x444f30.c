// rea decompile_all
// name: FUN_00444f30
// address: 0x444f30
// body: available
// range: 0x444f30-0x4450a1 inclusive
// non_contiguous: false
// provider: Ghidra 12.1.2 (ghidra)
// analysis_profile: ac6d50be2cdf54f7005df47d1ed7e7ef55dee595681eb1b7c2e0b00d70cd697d
// limitations: The session serves operations only after Ghidra reports default auto-analysis complete; incomplete analysis does not expose partial results.; The imported Program and temporary project are ephemeral and deleted on close. Annotation operations edit session database metadata; original executable bytes are never written.; Cancelling an active Ghidra request terminates its ephemeral database and discards session annotations. The selected target remains open; the next provider query imports the original artifact again.; Default-space addresses use lowercase 0x-prefixed hexadecimal; other address spaces use <percent-encoded-space>:0x<hex>.; Ghidra Listing reports a terminal call at 0x44509d to 0x429127 FUN_00429127 (external=false, thunk=false, hasNoReturn=true); fallthrough is excluded by Ghidra's flow model. This records Ghidra's FunctionManager flag, not an independent verification that the callee cannot return.; The Ghidra Program references PDB ISPToolForMsi.pdb (GUID b8f2ac8f-1d6f-438d-800f-ed4a14426ac6, age (hex) 1, signature unknown, version RSDS); Ghidra reports load state unknown. Original names and types may be missing; an empty name search does not prove a procedure is absent. Use list_procedures and address-based analysis to inspect recovered functions. REA does not admit a caller-selected PDB companion.; This session uses Ghidra 12.1.2. The bridge is verified against 12.1.4; other 12.1.x builds are accepted and the observed version is reported.; Pseudocode is Ghidra decompiler output, not original source and not text-equivalent to Hopper output.; External functions and functions without an analyzable body return null; other decompiler failures remain explicit.
// pseudocode: provider-specific; not original source


int FUN_00444f30(int param_1,int param_2)

{
  undefined4 *puVar1;
  undefined4 *puVar2;
  code *pcVar3;
  int iVar4;
  int iVar5;
  int iVar6;
  undefined4 local_68;
  int local_64;
  undefined4 local_60;
  undefined4 local_5c;
  undefined4 local_58;
  int local_50;
  undefined4 local_4c;
  undefined4 local_48;
  undefined1 local_44 [4];
  int local_40;
  int local_3c;
  int local_38;
  undefined1 local_24 [16];
  undefined1 local_14 [4];
  int local_10;
  int *local_c [2];
  
  FUN_00434a7a(*(undefined4 *)(param_1 + -0xc0));
  iVar5 = 0;
  iVar6 = iVar5;
  if (*(int *)(param_1 + -0x54) != 0) goto LAB_00445074;
  if (*(int *)(param_1 + -0x4c) == 0) {
    local_68 = 2;
    local_64 = param_2;
    local_60 = 0;
    local_5c = 0;
    local_58 = 0;
    local_50 = 0;
    local_4c = 0;
    local_48 = 0;
    FUN_004450e2(&local_68);
    iVar6 = local_50;
    if (local_50 != 0) goto LAB_00445074;
  }
  if (*(int *)(param_1 + -0x40) != param_2) {
LAB_0044508a:
    guard_check_icall();
    return 0;
  }
  Ordinal_9(param_1 + -0x2c);
  puVar1 = *(undefined4 **)(param_1 + -0x8c);
  local_c[0] = (int *)0x0;
  if (puVar1 != (undefined4 *)0x0) {
    puVar2 = (undefined4 *)*puVar1;
    guard_check_icall(puVar1,&DAT_005dba10,local_c);
    iVar4 = (*(code *)*puVar2)();
    iVar6 = iVar5;
    if (-1 < iVar4) {
      _memset(local_44,0,0x20);
      _memset(local_24,0,0x10);
      if (local_c[0] == (int *)0x0) goto LAB_0044509d;
      iVar6 = *local_c[0];
      guard_check_icall(local_c[0],param_2,&DAT_005db8c0,0,2,local_24,param_1 + -0x2c,local_44,
                        local_14);
      local_10 = (**(code **)(iVar6 + 0x18))();
      if (local_40 != 0) {
        Ordinal_6(local_40);
      }
      if (local_3c != 0) {
        Ordinal_6(local_3c);
      }
      if (local_38 != 0) {
        Ordinal_6(local_38);
      }
      pcVar3 = *(code **)(*local_c[0] + 8);
      guard_check_icall(local_c[0]);
      (*pcVar3)();
      iVar6 = iVar5;
      if (-1 < local_10) {
        *(undefined4 *)(param_1 + -0x34) = 1;
        goto LAB_0044508a;
      }
    }
LAB_00445074:
    guard_check_icall();
    return iVar6;
  }
LAB_0044509d:
                    /* WARNING: Subroutine does not return */
  FUN_00429127();
}

