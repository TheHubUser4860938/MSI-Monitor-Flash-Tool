// rea decompile_all
// name: FUN_1000fb10
// address: 0x1000fb10
// body: available
// range: 0x1000fb10-0x1000fc5c inclusive
// non_contiguous: false
// provider: Ghidra 12.1.2 (ghidra)
// analysis_profile: b075844f08879296d957518397cd0ddda73db81dce53d00d3f0e702766fc2af6
// limitations: The session serves operations only after Ghidra reports default auto-analysis complete; incomplete analysis does not expose partial results.; The imported Program and temporary project are ephemeral and deleted on close. Annotation operations edit session database metadata; original executable bytes are never written.; Cancelling an active Ghidra request terminates its ephemeral database and discards session annotations. The selected target remains open; the next provider query imports the original artifact again.; Default-space addresses use lowercase 0x-prefixed hexadecimal; other address spaces use <percent-encoded-space>:0x<hex>.; The Ghidra Program references PDB Comm.pdb (GUID c3062acb-498d-45fa-a233-c8b7e401bb13, age (hex) 1, signature unknown, version RSDS); Ghidra reports load state unknown. Original names and types may be missing; an empty name search does not prove a procedure is absent. Use list_procedures and address-based analysis to inspect recovered functions. REA does not admit a caller-selected PDB companion.; This session uses Ghidra 12.1.2. The bridge is verified against 12.1.4; other 12.1.x builds are accepted and the observed version is reported.; Pseudocode is Ghidra decompiler output, not original source and not text-equivalent to Hopper output.; External functions and functions without an analyzable body return null; other decompiler failures remain explicit.
// pseudocode: provider-specific; not original source


void FUN_1000fb10(void)

{
  int iVar1;
  undefined4 ****ppppuVar2;
  size_t sVar3;
  int *in_ECX;
  size_t _Count;
  int local_30;
  undefined4 ***local_2c [4];
  int local_1c;
  uint local_18;
  uint local_14;
  void *local_10;
  undefined1 *puStack_c;
  undefined4 local_8;
  
  local_8 = 0xffffffff;
  puStack_c = &LAB_1016d8d8;
  local_10 = ExceptionList;
  local_14 = DAT_101d3fec ^ (uint)&stack0xfffffffc;
  ExceptionList = &local_10;
  if (((in_ECX[0xe] != 0) && (*(char *)((int)in_ECX + 0x3d) != '\0')) &&
     (iVar1 = (**(code **)(*in_ECX + 0xc))(0xffffffff,local_14), iVar1 != -1)) {
    local_18 = 0xf;
    local_1c = 0;
    local_2c[0] = (undefined4 ***)((uint)local_2c[0] & 0xffffff00);
    FUN_1000f3f0(8,0);
    local_8 = 0;
    while( true ) {
      ppppuVar2 = local_2c;
      if (0xf < local_18) {
        ppppuVar2 = (undefined4 ****)local_2c[0];
      }
      iVar1 = (**(code **)(*(int *)in_ECX[0xe] + 0x20))
                        (in_ECX + 0x10,ppppuVar2,local_1c + (int)ppppuVar2,&local_30);
      if (iVar1 != 0) break;
      *(undefined1 *)((int)in_ECX + 0x3d) = 0;
LAB_1000fbdb:
      ppppuVar2 = local_2c;
      if (0xf < local_18) {
        ppppuVar2 = (undefined4 ****)local_2c[0];
      }
      _Count = local_30 - (int)ppppuVar2;
      if (_Count != 0) {
        ppppuVar2 = local_2c;
        if (0xf < local_18) {
          ppppuVar2 = (undefined4 ****)local_2c[0];
        }
        sVar3 = _fwrite(ppppuVar2,1,_Count,(FILE *)in_ECX[0x13]);
        if (_Count != sVar3) goto LAB_1000fbc9;
      }
      if (*(char *)((int)in_ECX + 0x3d) == '\0') goto LAB_1000fc31;
      if (_Count == 0) {
        FUN_1000f6f0(8,0);
      }
    }
    if (iVar1 == 1) goto LAB_1000fbdb;
    if (iVar1 != 3) {
LAB_1000fbc9:
      FUN_1000e140();
      goto LAB_1000fc41;
    }
LAB_1000fc31:
    FUN_1000e140();
  }
LAB_1000fc41:
  ExceptionList = local_10;
  __security_check_cookie(local_14 ^ (uint)&stack0xfffffffc);
  return;
}

