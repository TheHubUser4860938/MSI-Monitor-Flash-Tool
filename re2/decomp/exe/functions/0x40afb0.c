// rea decompile_all
// name: FUN_0040afb0
// address: 0x40afb0
// body: available
// range: 0x40afb0-0x40b1a1 inclusive
// non_contiguous: false
// provider: Ghidra 12.1.2 (ghidra)
// analysis_profile: ac6d50be2cdf54f7005df47d1ed7e7ef55dee595681eb1b7c2e0b00d70cd697d
// limitations: The session serves operations only after Ghidra reports default auto-analysis complete; incomplete analysis does not expose partial results.; The imported Program and temporary project are ephemeral and deleted on close. Annotation operations edit session database metadata; original executable bytes are never written.; Cancelling an active Ghidra request terminates its ephemeral database and discards session annotations. The selected target remains open; the next provider query imports the original artifact again.; Default-space addresses use lowercase 0x-prefixed hexadecimal; other address spaces use <percent-encoded-space>:0x<hex>.; The Ghidra Program references PDB ISPToolForMsi.pdb (GUID b8f2ac8f-1d6f-438d-800f-ed4a14426ac6, age (hex) 1, signature unknown, version RSDS); Ghidra reports load state unknown. Original names and types may be missing; an empty name search does not prove a procedure is absent. Use list_procedures and address-based analysis to inspect recovered functions. REA does not admit a caller-selected PDB companion.; This session uses Ghidra 12.1.2. The bridge is verified against 12.1.4; other 12.1.x builds are accepted and the observed version is reported.; Pseudocode is Ghidra decompiler output, not original source and not text-equivalent to Hopper output.; External functions and functions without an analyzable body return null; other decompiler failures remain explicit.
// pseudocode: provider-specific; not original source


/* WARNING: Removing unreachable block (ram,0x0040afef) */

void FUN_0040afb0(int param_1)

{
  uint uVar1;
  char *pcVar2;
  int iVar3;
  char cVar4;
  uint uVar5;
  int iVar6;
  undefined4 ****ppppuVar7;
  size_t sVar8;
  int in_ECX;
  size_t _Count;
  char *local_38;
  int local_34;
  undefined4 ***local_30 [4];
  uint local_20;
  uint local_1c;
  char local_15;
  uint local_14;
  void *local_10;
  undefined1 *puStack_c;
  undefined4 local_8;
  
  local_8 = 0xffffffff;
  puStack_c = &LAB_0059c708;
  local_10 = ExceptionList;
  uVar5 = DAT_0060cff4 ^ (uint)&stack0xfffffffc;
  ExceptionList = &local_10;
  local_14 = uVar5;
  if (param_1 != -1) {
    uVar1 = **(uint **)(in_ECX + 0x20);
    cVar4 = (char)param_1;
    if (uVar1 != 0) {
      iVar6 = **(int **)(in_ECX + 0x30);
      if (uVar1 < iVar6 + uVar1) {
        **(int **)(in_ECX + 0x30) = iVar6 + -1;
        pcVar2 = (char *)**(int **)(in_ECX + 0x20);
        **(int **)(in_ECX + 0x20) = (int)(pcVar2 + 1);
        *pcVar2 = cVar4;
        goto LAB_0040b184;
      }
    }
    if (*(int *)(in_ECX + 0x4c) != 0) {
      if (**(int **)(in_ECX + 0xc) == in_ECX + 0x3c) {
        iVar6 = *(int *)(in_ECX + 0x50);
        iVar3 = *(int *)(in_ECX + 0x54);
        **(int **)(in_ECX + 0xc) = iVar6;
        **(int **)(in_ECX + 0x1c) = iVar6;
        **(int **)(in_ECX + 0x2c) = iVar3 - iVar6;
      }
      if (*(int *)(in_ECX + 0x38) == 0) {
        _fputc((int)cVar4,*(FILE **)(in_ECX + 0x4c));
      }
      else {
        local_1c = 0xf;
        local_20 = 0;
        local_30[0] = (undefined4 ***)((uint)local_30[0] & 0xffffff00);
        local_15 = cVar4;
        FUN_00404310(8,0);
        local_8 = 0;
        while( true ) {
          ppppuVar7 = local_30;
          if (0xf < local_1c) {
            ppppuVar7 = (undefined4 ****)local_30[0];
          }
          iVar6 = (**(code **)(**(int **)(in_ECX + 0x38) + 0x1c))
                            (in_ECX + 0x40,&local_15,&local_14,&local_38,ppppuVar7,
                             local_20 + (int)ppppuVar7,&local_34,uVar5);
          if (iVar6 < 0) goto LAB_0040b17a;
          if (1 < iVar6) break;
          ppppuVar7 = local_30;
          if (0xf < local_1c) {
            ppppuVar7 = (undefined4 ****)local_30[0];
          }
          _Count = local_34 - (int)ppppuVar7;
          if (_Count != 0) {
            ppppuVar7 = local_30;
            if (0xf < local_1c) {
              ppppuVar7 = (undefined4 ****)local_30[0];
            }
            sVar8 = _fwrite(ppppuVar7,1,_Count,*(FILE **)(in_ECX + 0x4c));
            if (_Count != sVar8) goto LAB_0040b17a;
          }
          *(undefined1 *)(in_ECX + 0x3d) = 1;
          if (local_38 != &local_15) goto LAB_0040b17a;
          if (_Count == 0) {
            if (0x1f < local_20) goto LAB_0040b17a;
            FUN_00405710(8,0);
          }
        }
        if (iVar6 == 3) {
          _fputc((int)local_15,*(FILE **)(in_ECX + 0x4c));
        }
LAB_0040b17a:
        FUN_004033e0();
      }
    }
  }
LAB_0040b184:
  ExceptionList = local_10;
  __security_check_cookie(local_14 ^ (uint)&stack0xfffffffc);
  return;
}

