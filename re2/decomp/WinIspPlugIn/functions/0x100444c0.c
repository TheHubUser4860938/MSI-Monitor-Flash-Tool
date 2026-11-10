// rea decompile_all
// name: FUN_100444c0
// address: 0x100444c0
// body: available
// range: 0x100444c0-0x1004470b inclusive
// non_contiguous: false
// provider: Ghidra 12.1.2 (ghidra)
// analysis_profile: b075844f08879296d957518397cd0ddda73db81dce53d00d3f0e702766fc2af6
// limitations: The session serves operations only after Ghidra reports default auto-analysis complete; incomplete analysis does not expose partial results.; The imported Program and temporary project are ephemeral and deleted on close. Annotation operations edit session database metadata; original executable bytes are never written.; Cancelling an active Ghidra request terminates its ephemeral database and discards session annotations. The selected target remains open; the next provider query imports the original artifact again.; Default-space addresses use lowercase 0x-prefixed hexadecimal; other address spaces use <percent-encoded-space>:0x<hex>.; The Ghidra Program references PDB WinIspPlugIn.pdb (GUID d9f398c7-6c98-49a8-af25-a0659d5ad2f3, age (hex) 1, signature unknown, version RSDS); Ghidra reports load state unknown. Original names and types may be missing; an empty name search does not prove a procedure is absent. Use list_procedures and address-based analysis to inspect recovered functions. REA does not admit a caller-selected PDB companion.; This session uses Ghidra 12.1.2. The bridge is verified against 12.1.4; other 12.1.x builds are accepted and the observed version is reported.; Pseudocode is Ghidra decompiler output, not original source and not text-equivalent to Hopper output.; External functions and functions without an analyzable body return null; other decompiler failures remain explicit.
// pseudocode: provider-specific; not original source


void FUN_100444c0(wchar_t param_1)

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
  undefined4 local_30;
  undefined4 ***local_2c [4];
  uint local_1c;
  uint local_18;
  uint local_14;
  void *local_10;
  undefined1 *puStack_c;
  undefined4 local_8;
  
  local_8 = 0xffffffff;
  puStack_c = &LAB_101c0e38;
  local_10 = ExceptionList;
  uVar4 = DAT_1023dfec ^ (uint)&stack0xfffffffc;
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
        goto LAB_100446ee;
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
        local_30 = (uint)(ushort)param_1;
        local_18 = 0xf;
        local_1c = 0;
        local_2c[0] = (undefined4 ***)((uint)local_2c[0] & 0xffffff00);
        FUN_1000a990(8,0);
        local_8 = 0;
        while( true ) {
          ppppuVar6 = local_2c;
          if (0xf < local_18) {
            ppppuVar6 = (undefined4 ****)local_2c[0];
          }
          iVar5 = (**(code **)(**(int **)(in_ECX + 0x38) + 0x1c))
                            (in_ECX + 0x40,&local_30,(int)&local_30 + 2,&local_38,ppppuVar6,
                             local_1c + (int)ppppuVar6,&local_34,uVar4);
          if (iVar5 < 0) goto LAB_100446d7;
          if (1 < iVar5) break;
          ppppuVar6 = local_2c;
          if (0xf < local_18) {
            ppppuVar6 = (undefined4 ****)local_2c[0];
          }
          _Count = local_34 - (int)ppppuVar6;
          if (_Count != 0) {
            ppppuVar6 = local_2c;
            if (0xf < local_18) {
              ppppuVar6 = (undefined4 ****)local_2c[0];
            }
            sVar7 = _fwrite(ppppuVar6,1,_Count,*(FILE **)(in_ECX + 0x4c));
            if (_Count != sVar7) goto LAB_100446d7;
          }
          *(undefined1 *)(in_ECX + 0x3e) = 1;
          if (local_38 != &local_30) goto LAB_100446d7;
          if (_Count == 0) {
            if (0x1f < local_1c) goto LAB_100446d7;
            FUN_1000ac90(8,0);
          }
        }
        if (iVar5 == 3) {
          _fputwc((wchar_t)local_30,*(FILE **)(in_ECX + 0x4c));
        }
LAB_100446d7:
        if (0xf < local_18) {
          FUN_1000b630(local_2c[0],local_18 + 1);
        }
      }
    }
  }
LAB_100446ee:
  ExceptionList = local_10;
  __security_check_cookie(local_14 ^ (uint)&stack0xfffffffc);
  return;
}

