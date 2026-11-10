// rea decompile_all
// name: FUN_1000e650
// address: 0x1000e650
// body: available
// range: 0x1000e650-0x1000e79e inclusive
// non_contiguous: false
// provider: Ghidra 12.1.2 (ghidra)
// analysis_profile: b075844f08879296d957518397cd0ddda73db81dce53d00d3f0e702766fc2af6
// limitations: The session serves operations only after Ghidra reports default auto-analysis complete; incomplete analysis does not expose partial results.; The imported Program and temporary project are ephemeral and deleted on close. Annotation operations edit session database metadata; original executable bytes are never written.; Cancelling an active Ghidra request terminates its ephemeral database and discards session annotations. The selected target remains open; the next provider query imports the original artifact again.; Default-space addresses use lowercase 0x-prefixed hexadecimal; other address spaces use <percent-encoded-space>:0x<hex>.; The Ghidra Program references PDB WinIspPlugIn.pdb (GUID d9f398c7-6c98-49a8-af25-a0659d5ad2f3, age (hex) 1, signature unknown, version RSDS); Ghidra reports load state unknown. Original names and types may be missing; an empty name search does not prove a procedure is absent. Use list_procedures and address-based analysis to inspect recovered functions. REA does not admit a caller-selected PDB companion.; This session uses Ghidra 12.1.2. The bridge is verified against 12.1.4; other 12.1.x builds are accepted and the observed version is reported.; Pseudocode is Ghidra decompiler output, not original source and not text-equivalent to Hopper output.; External functions and functions without an analyzable body return null; other decompiler failures remain explicit.
// pseudocode: provider-specific; not original source


void FUN_1000e650(undefined4 param_1,undefined4 param_2,undefined4 param_3)

{
  char *pcVar1;
  undefined4 ****ppppuVar2;
  int iVar3;
  char *pcVar4;
  int iVar5;
  int iVar6;
  char *pcVar7;
  undefined1 uVar9;
  undefined4 ***local_30 [4];
  int local_20;
  uint local_1c;
  uint local_18;
  void *local_10;
  undefined1 *puStack_c;
  undefined4 local_8;
  undefined4 ****ppppuVar8;
  
  local_8 = 0xffffffff;
  puStack_c = &LAB_101c1388;
  local_10 = ExceptionList;
  local_18 = DAT_1023dfec ^ (uint)&stack0xfffffffc;
  ExceptionList = &local_10;
  local_1c = 0xf;
  local_20 = 0;
  local_30[0] = (undefined4 ***)((uint)local_30[0] & 0xffffff00);
  FUN_1000ab60(param_1,0,0xffffffff);
  iVar3 = local_20;
  local_8 = 0;
  ppppuVar8 = local_30;
  if (0xf < local_1c) {
    ppppuVar8 = (undefined4 ****)local_30[0];
  }
  pcVar7 = (char *)((int)ppppuVar8 + local_20);
  ppppuVar2 = local_30;
  if (0xf < local_1c) {
    ppppuVar2 = (undefined4 ****)local_30[0];
  }
  pcVar1 = _memchr(ppppuVar2,0x2c,(int)pcVar7 - (int)ppppuVar2);
  pcVar4 = pcVar7;
  if (pcVar1 != (char *)0x0) {
    pcVar4 = pcVar1;
  }
  if (pcVar4 != pcVar7) {
    pcVar1 = pcVar4 + 1;
    iVar5 = 0;
    iVar6 = (int)pcVar7 - (int)pcVar1;
    if (pcVar7 < pcVar1) {
      iVar6 = 0;
    }
    if (iVar6 != 0) {
      do {
        if (*pcVar1 != ',') {
          *pcVar4 = *pcVar1;
          pcVar4 = pcVar4 + 1;
        }
        iVar5 = iVar5 + 1;
        pcVar1 = pcVar1 + 1;
      } while (iVar5 != iVar6);
    }
  }
  ppppuVar2 = local_30;
  if (0xf < local_1c) {
    ppppuVar2 = (undefined4 ****)local_30[0];
  }
  FUN_1000a8f0((int)pcVar4 - (int)ppppuVar2,(int)ppppuVar8 + (iVar3 - (int)pcVar4));
  uVar9 = 0;
  FUN_1000ab60(local_30,0,0xffffffff);
  iVar3 = FUN_1000e5d0(uVar9);
  if (iVar3 != 0) {
    FUN_1000e460(local_30,param_2,param_3);
  }
  if (0xf < local_1c) {
    FUN_1000b630(local_30[0],local_1c + 1);
  }
  ExceptionList = local_10;
  __security_check_cookie(local_18 ^ (uint)&stack0xfffffffc);
  return;
}

