// rea decompile_all
// name: FUN_004057c0
// address: 0x4057c0
// body: available
// range: 0x4057c0-0x40588c inclusive
// non_contiguous: false
// provider: Ghidra 12.1.2 (ghidra)
// analysis_profile: ac6d50be2cdf54f7005df47d1ed7e7ef55dee595681eb1b7c2e0b00d70cd697d
// limitations: The session serves operations only after Ghidra reports default auto-analysis complete; incomplete analysis does not expose partial results.; The imported Program and temporary project are ephemeral and deleted on close. Annotation operations edit session database metadata; original executable bytes are never written.; Cancelling an active Ghidra request terminates its ephemeral database and discards session annotations. The selected target remains open; the next provider query imports the original artifact again.; Default-space addresses use lowercase 0x-prefixed hexadecimal; other address spaces use <percent-encoded-space>:0x<hex>.; The Ghidra Program references PDB ISPToolForMsi.pdb (GUID b8f2ac8f-1d6f-438d-800f-ed4a14426ac6, age (hex) 1, signature unknown, version RSDS); Ghidra reports load state unknown. Original names and types may be missing; an empty name search does not prove a procedure is absent. Use list_procedures and address-based analysis to inspect recovered functions. REA does not admit a caller-selected PDB companion.; This session uses Ghidra 12.1.2. The bridge is verified against 12.1.4; other 12.1.x builds are accepted and the observed version is reported.; Pseudocode is Ghidra decompiler output, not original source and not text-equivalent to Hopper output.; External functions and functions without an analyzable body return null; other decompiler failures remain explicit.
// pseudocode: provider-specific; not original source


void FUN_004057c0(void)

{
  int *piVar1;
  char cVar2;
  uint uVar3;
  int iVar4;
  int *in_ECX;
  uint uVar5;
  int *local_1c;
  char local_18;
  void *local_10;
  undefined1 *puStack_c;
  undefined4 local_8;
  
  local_8 = 0xffffffff;
  puStack_c = &LAB_0059c024;
  local_10 = ExceptionList;
  uVar3 = DAT_0060cff4 ^ (uint)&stack0xfffffffc;
  ExceptionList = &local_10;
  if (*(int *)(*(int *)(*in_ECX + 4) + 0x38 + (int)in_ECX) != 0) {
    uVar5 = uVar3;
    FUN_00403680(in_ECX);
    local_8 = 0;
    if (local_18 != '\0') {
      iVar4 = (**(code **)(**(int **)(*(int *)(*in_ECX + 4) + 0x38 + (int)in_ECX) + 0x34))(uVar5);
      if (iVar4 == -1) {
        iVar4 = *(int *)(*in_ECX + 4);
        uVar5 = *(uint *)((int)in_ECX + iVar4 + 0xc) | 4;
        if (*(int *)((int)in_ECX + iVar4 + 0x38) != 0) {
          uVar5 = *(uint *)((int)in_ECX + iVar4 + 0xc);
        }
        FUN_00402a10(uVar5 | 4,0);
      }
    }
    local_8 = 1;
    cVar2 = thunk_FUN_00572c70();
    if (cVar2 == '\0') {
      FUN_00405890();
    }
    local_8 = CONCAT31(local_8._1_3_,2);
    piVar1 = *(int **)(*(int *)(*local_1c + 4) + 0x38 + (int)local_1c);
    if (piVar1 != (int *)0x0) {
      (**(code **)(*piVar1 + 8))();
    }
  }
  ExceptionList = local_10;
  __security_check_cookie(uVar3 ^ (uint)&stack0xfffffffc);
  return;
}

