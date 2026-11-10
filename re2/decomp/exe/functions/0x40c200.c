// rea decompile_all
// name: FUN_0040c200
// address: 0x40c200
// body: available
// range: 0x40c200-0x40c358 inclusive
// non_contiguous: false
// provider: Ghidra 12.1.2 (ghidra)
// analysis_profile: ac6d50be2cdf54f7005df47d1ed7e7ef55dee595681eb1b7c2e0b00d70cd697d
// limitations: The session serves operations only after Ghidra reports default auto-analysis complete; incomplete analysis does not expose partial results.; The imported Program and temporary project are ephemeral and deleted on close. Annotation operations edit session database metadata; original executable bytes are never written.; Cancelling an active Ghidra request terminates its ephemeral database and discards session annotations. The selected target remains open; the next provider query imports the original artifact again.; Default-space addresses use lowercase 0x-prefixed hexadecimal; other address spaces use <percent-encoded-space>:0x<hex>.; The Ghidra Program references PDB ISPToolForMsi.pdb (GUID b8f2ac8f-1d6f-438d-800f-ed4a14426ac6, age (hex) 1, signature unknown, version RSDS); Ghidra reports load state unknown. Original names and types may be missing; an empty name search does not prove a procedure is absent. Use list_procedures and address-based analysis to inspect recovered functions. REA does not admit a caller-selected PDB companion.; This session uses Ghidra 12.1.2. The bridge is verified against 12.1.4; other 12.1.x builds are accepted and the observed version is reported.; Pseudocode is Ghidra decompiler output, not original source and not text-equivalent to Hopper output.; External functions and functions without an analyzable body return null; other decompiler failures remain explicit.
// pseudocode: provider-specific; not original source


void FUN_0040c200(void)

{
  short sVar1;
  int iVar2;
  undefined4 ****ppppuVar3;
  size_t sVar4;
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
  puStack_c = &LAB_0059c818;
  local_10 = ExceptionList;
  local_14 = DAT_0060cff4 ^ (uint)&stack0xfffffffc;
  ExceptionList = &local_10;
  if (((in_ECX[0xe] != 0) && (*(char *)((int)in_ECX + 0x3e) != '\0')) &&
     (sVar1 = (**(code **)(*in_ECX + 0xc))(0xffff,local_14), sVar1 != -1)) {
    local_18 = 0xf;
    local_1c = 0;
    local_2c[0] = (undefined4 ***)((uint)local_2c[0] & 0xffffff00);
    FUN_00404310(8,0);
    local_8 = 0;
    while( true ) {
      ppppuVar3 = local_2c;
      if (0xf < local_18) {
        ppppuVar3 = (undefined4 ****)local_2c[0];
      }
      iVar2 = (**(code **)(*(int *)in_ECX[0xe] + 0x20))
                        (in_ECX + 0x10,ppppuVar3,local_1c + (int)ppppuVar3,&local_30);
      if (iVar2 != 0) break;
      *(undefined1 *)((int)in_ECX + 0x3e) = 0;
LAB_0040c2d7:
      ppppuVar3 = local_2c;
      if (0xf < local_18) {
        ppppuVar3 = (undefined4 ****)local_2c[0];
      }
      _Count = local_30 - (int)ppppuVar3;
      if (_Count != 0) {
        ppppuVar3 = local_2c;
        if (0xf < local_18) {
          ppppuVar3 = (undefined4 ****)local_2c[0];
        }
        sVar4 = _fwrite(ppppuVar3,1,_Count,(FILE *)in_ECX[0x13]);
        if (_Count != sVar4) goto LAB_0040c2c5;
      }
      if (*(char *)((int)in_ECX + 0x3e) == '\0') goto LAB_0040c32d;
      if (_Count == 0) {
        FUN_00405710(8,0);
      }
    }
    if (iVar2 == 1) goto LAB_0040c2d7;
    if (iVar2 != 3) {
LAB_0040c2c5:
      FUN_004033e0();
      goto LAB_0040c33d;
    }
LAB_0040c32d:
    FUN_004033e0();
  }
LAB_0040c33d:
  ExceptionList = local_10;
  __security_check_cookie(local_14 ^ (uint)&stack0xfffffffc);
  return;
}

