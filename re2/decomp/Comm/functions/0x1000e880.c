// rea decompile_all
// name: FUN_1000e880
// address: 0x1000e880
// body: available
// range: 0x1000e880-0x1000ea71 inclusive
// non_contiguous: false
// provider: Ghidra 12.1.2 (ghidra)
// analysis_profile: b075844f08879296d957518397cd0ddda73db81dce53d00d3f0e702766fc2af6
// limitations: The session serves operations only after Ghidra reports default auto-analysis complete; incomplete analysis does not expose partial results.; The imported Program and temporary project are ephemeral and deleted on close. Annotation operations edit session database metadata; original executable bytes are never written.; Cancelling an active Ghidra request terminates its ephemeral database and discards session annotations. The selected target remains open; the next provider query imports the original artifact again.; Default-space addresses use lowercase 0x-prefixed hexadecimal; other address spaces use <percent-encoded-space>:0x<hex>.; The Ghidra Program references PDB Comm.pdb (GUID c3062acb-498d-45fa-a233-c8b7e401bb13, age (hex) 1, signature unknown, version RSDS); Ghidra reports load state unknown. Original names and types may be missing; an empty name search does not prove a procedure is absent. Use list_procedures and address-based analysis to inspect recovered functions. REA does not admit a caller-selected PDB companion.; This session uses Ghidra 12.1.2. The bridge is verified against 12.1.4; other 12.1.x builds are accepted and the observed version is reported.; Pseudocode is Ghidra decompiler output, not original source and not text-equivalent to Hopper output.; External functions and functions without an analyzable body return null; other decompiler failures remain explicit.
// pseudocode: provider-specific; not original source


/* WARNING: Removing unreachable block (ram,0x1000e8bf) */

void FUN_1000e880(int param_1)

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
  char *local_3c;
  size_t local_38;
  int local_34;
  char local_2d;
  undefined4 ***local_2c [4];
  uint local_1c;
  uint local_18;
  uint local_14;
  void *local_10;
  undefined1 *puStack_c;
  undefined4 local_8;
  
  local_8 = 0xffffffff;
  puStack_c = &LAB_1016d848;
  local_10 = ExceptionList;
  uVar5 = DAT_101d3fec ^ (uint)&stack0xfffffffc;
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
        goto LAB_1000ea54;
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
        local_18 = 0xf;
        local_1c = 0;
        local_2c[0] = (undefined4 ***)((uint)local_2c[0] & 0xffffff00);
        local_2d = cVar4;
        FUN_1000f3f0(8,0);
        local_8 = 0;
        while( true ) {
          ppppuVar7 = local_2c;
          if (0xf < local_18) {
            ppppuVar7 = (undefined4 ****)local_2c[0];
          }
          iVar6 = (**(code **)(**(int **)(in_ECX + 0x38) + 0x1c))
                            (in_ECX + 0x40,&local_2d,local_2c,&local_3c,ppppuVar7,
                             local_1c + (int)ppppuVar7,&local_34,uVar5);
          if (iVar6 < 0) goto LAB_1000ea4a;
          if (1 < iVar6) break;
          ppppuVar7 = local_2c;
          if (0xf < local_18) {
            ppppuVar7 = (undefined4 ****)local_2c[0];
          }
          local_38 = local_34 - (int)ppppuVar7;
          if (local_38 != 0) {
            ppppuVar7 = local_2c;
            if (0xf < local_18) {
              ppppuVar7 = (undefined4 ****)local_2c[0];
            }
            sVar8 = _fwrite(ppppuVar7,1,local_38,*(FILE **)(in_ECX + 0x4c));
            if (local_38 != sVar8) goto LAB_1000ea4a;
          }
          *(undefined1 *)(in_ECX + 0x3d) = 1;
          if (local_3c != &local_2d) goto LAB_1000ea4a;
          if (local_38 == 0) {
            if (0x1f < local_1c) goto LAB_1000ea4a;
            FUN_1000f6f0(8,0);
          }
        }
        if (iVar6 == 3) {
          _fputc((int)local_2d,*(FILE **)(in_ECX + 0x4c));
        }
LAB_1000ea4a:
        FUN_1000e140();
      }
    }
  }
LAB_1000ea54:
  ExceptionList = local_10;
  __security_check_cookie(local_14 ^ (uint)&stack0xfffffffc);
  return;
}

