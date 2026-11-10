// rea decompile_all
// name: FUN_0040a050
// address: 0x40a050
// body: available
// range: 0x40a050-0x40a28d inclusive
// non_contiguous: false
// provider: Ghidra 12.1.2 (ghidra)
// analysis_profile: ac6d50be2cdf54f7005df47d1ed7e7ef55dee595681eb1b7c2e0b00d70cd697d
// limitations: The session serves operations only after Ghidra reports default auto-analysis complete; incomplete analysis does not expose partial results.; The imported Program and temporary project are ephemeral and deleted on close. Annotation operations edit session database metadata; original executable bytes are never written.; Cancelling an active Ghidra request terminates its ephemeral database and discards session annotations. The selected target remains open; the next provider query imports the original artifact again.; Default-space addresses use lowercase 0x-prefixed hexadecimal; other address spaces use <percent-encoded-space>:0x<hex>.; The Ghidra Program references PDB ISPToolForMsi.pdb (GUID b8f2ac8f-1d6f-438d-800f-ed4a14426ac6, age (hex) 1, signature unknown, version RSDS); Ghidra reports load state unknown. Original names and types may be missing; an empty name search does not prove a procedure is absent. Use list_procedures and address-based analysis to inspect recovered functions. REA does not admit a caller-selected PDB companion.; This session uses Ghidra 12.1.2. The bridge is verified against 12.1.4; other 12.1.x builds are accepted and the observed version is reported.; Pseudocode is Ghidra decompiler output, not original source and not text-equivalent to Hopper output.; External functions and functions without an analyzable body return null; other decompiler failures remain explicit.
// pseudocode: provider-specific; not original source


void FUN_0040a050(wchar_t param_1)

{
  uint uVar1;
  wchar_t *pwVar2;
  int iVar3;
  uint uVar4;
  int iVar5;
  undefined4 ****ppppuVar6;
  size_t sVar7;
  int in_ECX;
  size_t _Count;
  undefined4 *local_38;
  int local_34;
  undefined4 ***local_30 [4];
  uint local_20;
  uint local_1c;
  undefined4 local_18;
  uint local_14;
  void *local_10;
  undefined1 *puStack_c;
  undefined4 local_8;
  
  local_8 = 0xffffffff;
  puStack_c = &LAB_0059c708;
  local_10 = ExceptionList;
  uVar4 = DAT_0060cff4 ^ (uint)&stack0xfffffffc;
  ExceptionList = &local_10;
  local_14 = uVar4;
  if (param_1 != L'\xffff') {
    uVar1 = **(uint **)(in_ECX + 0x20);
    if (uVar1 != 0) {
      iVar5 = **(int **)(in_ECX + 0x30);
      if (uVar1 < uVar1 + iVar5 * 2) {
        **(int **)(in_ECX + 0x30) = iVar5 + -1;
        pwVar2 = (wchar_t *)**(int **)(in_ECX + 0x20);
        **(int **)(in_ECX + 0x20) = (int)(pwVar2 + 1);
        *pwVar2 = param_1;
        goto LAB_0040a270;
      }
    }
    if (*(int *)(in_ECX + 0x4c) != 0) {
      if (**(int **)(in_ECX + 0xc) == in_ECX + 0x3c) {
        iVar5 = *(int *)(in_ECX + 0x54);
        iVar3 = *(int *)(in_ECX + 0x50);
        **(int **)(in_ECX + 0xc) = iVar3;
        **(int **)(in_ECX + 0x1c) = iVar3;
        **(int **)(in_ECX + 0x2c) = iVar5 - iVar3 >> 1;
      }
      if (*(int *)(in_ECX + 0x38) == 0) {
        _fputwc(param_1,*(FILE **)(in_ECX + 0x4c));
      }
      else {
        local_18 = (uint)(ushort)param_1;
        local_1c = 0xf;
        local_20 = 0;
        local_30[0] = (undefined4 ***)((uint)local_30[0] & 0xffffff00);
        FUN_00404310(8,0);
        local_8 = 0;
        while( true ) {
          ppppuVar6 = local_30;
          if (0xf < local_1c) {
            ppppuVar6 = (undefined4 ****)local_30[0];
          }
          iVar5 = (**(code **)(**(int **)(in_ECX + 0x38) + 0x1c))
                            (in_ECX + 0x40,&local_18,(int)&local_18 + 2,&local_38,ppppuVar6,
                             local_20 + (int)ppppuVar6,&local_34,uVar4);
          if (iVar5 < 0) goto LAB_0040a265;
          if (1 < iVar5) break;
          ppppuVar6 = local_30;
          if (0xf < local_1c) {
            ppppuVar6 = (undefined4 ****)local_30[0];
          }
          _Count = local_34 - (int)ppppuVar6;
          if (_Count != 0) {
            ppppuVar6 = local_30;
            if (0xf < local_1c) {
              ppppuVar6 = (undefined4 ****)local_30[0];
            }
            sVar7 = _fwrite(ppppuVar6,1,_Count,*(FILE **)(in_ECX + 0x4c));
            if (_Count != sVar7) goto LAB_0040a265;
          }
          *(undefined1 *)(in_ECX + 0x3e) = 1;
          if (local_38 != &local_18) goto LAB_0040a265;
          if (_Count == 0) {
            if (0x1f < local_20) goto LAB_0040a265;
            FUN_00405710(8,0);
          }
        }
        if (iVar5 == 3) {
          _fputwc((wchar_t)local_18,*(FILE **)(in_ECX + 0x4c));
        }
LAB_0040a265:
        FUN_004033e0();
      }
    }
  }
LAB_0040a270:
  ExceptionList = local_10;
  __security_check_cookie(local_14 ^ (uint)&stack0xfffffffc);
  return;
}

