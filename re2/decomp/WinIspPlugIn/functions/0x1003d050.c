// rea decompile_all
// name: FUN_1003d050
// address: 0x1003d050
// body: available
// range: 0x1003d050-0x1003d149 inclusive
// non_contiguous: false
// provider: Ghidra 12.1.2 (ghidra)
// analysis_profile: b075844f08879296d957518397cd0ddda73db81dce53d00d3f0e702766fc2af6
// limitations: The session serves operations only after Ghidra reports default auto-analysis complete; incomplete analysis does not expose partial results.; The imported Program and temporary project are ephemeral and deleted on close. Annotation operations edit session database metadata; original executable bytes are never written.; Cancelling an active Ghidra request terminates its ephemeral database and discards session annotations. The selected target remains open; the next provider query imports the original artifact again.; Default-space addresses use lowercase 0x-prefixed hexadecimal; other address spaces use <percent-encoded-space>:0x<hex>.; The Ghidra Program references PDB WinIspPlugIn.pdb (GUID d9f398c7-6c98-49a8-af25-a0659d5ad2f3, age (hex) 1, signature unknown, version RSDS); Ghidra reports load state unknown. Original names and types may be missing; an empty name search does not prove a procedure is absent. Use list_procedures and address-based analysis to inspect recovered functions. REA does not admit a caller-selected PDB companion.; This session uses Ghidra 12.1.2. The bridge is verified against 12.1.4; other 12.1.x builds are accepted and the observed version is reported.; Pseudocode is Ghidra decompiler output, not original source and not text-equivalent to Hopper output.; External functions and functions without an analyzable body return null; other decompiler failures remain explicit.
// pseudocode: provider-specific; not original source


void FUN_1003d050(undefined4 param_1,uint param_2)

{
  uint uVar1;
  uint uVar2;
  int iVar3;
  undefined4 in_stack_000004d0;
  undefined **local_48;
  undefined2 local_44;
  undefined4 local_34;
  undefined4 local_30;
  undefined1 local_2c;
  undefined4 local_1c;
  undefined4 local_18;
  uint local_14;
  void *local_10;
  undefined1 *puStack_c;
  undefined4 local_8;
  
  puStack_c = &LAB_101c3458;
  local_10 = ExceptionList;
  local_14 = DAT_1023dfec ^ (uint)&stack0xfffffffc;
  ExceptionList = &local_10;
  local_30 = 7;
  local_34 = 0;
  local_44 = 0;
  local_48 = CCpRsString::vftable;
  local_18 = 0xf;
  local_1c = 0;
  local_2c = 0;
  local_8 = 0;
  if (DAT_1024a360 == 0) {
    uVar2 = param_2;
    if (param_2 == 0) {
      FUN_10048350(&local_48,L"Flag Length is 0, Not Need To Write Flag",local_14);
      FUN_10016860();
    }
    else {
      do {
        uVar1 = uVar2;
        if (param_2 <= uVar1 - 1) break;
        uVar2 = uVar1 - 1;
      } while (*(char *)((int)&param_2 + uVar1 + 3) == -1);
      iVar3 = FUN_1003e2a0(in_stack_000004d0,uVar1,&stack0x0000000c,param_1,0);
      if (iVar3 != 0) {
        FUN_10048350(&local_48,L" WriteDataToFlash Fail! , Error Code:0x%x",iVar3);
        FUN_10016860();
      }
    }
  }
  FUN_10048130();
  ExceptionList = local_10;
  __security_check_cookie(local_14 ^ (uint)&stack0xfffffffc);
  return;
}

