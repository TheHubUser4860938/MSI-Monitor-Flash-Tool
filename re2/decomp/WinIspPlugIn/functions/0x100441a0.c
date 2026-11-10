// rea decompile_all
// name: FUN_100441a0
// address: 0x100441a0
// body: available
// range: 0x100441a0-0x100443d0 inclusive
// non_contiguous: false
// provider: Ghidra 12.1.2 (ghidra)
// analysis_profile: b075844f08879296d957518397cd0ddda73db81dce53d00d3f0e702766fc2af6
// limitations: The session serves operations only after Ghidra reports default auto-analysis complete; incomplete analysis does not expose partial results.; The imported Program and temporary project are ephemeral and deleted on close. Annotation operations edit session database metadata; original executable bytes are never written.; Cancelling an active Ghidra request terminates its ephemeral database and discards session annotations. The selected target remains open; the next provider query imports the original artifact again.; Default-space addresses use lowercase 0x-prefixed hexadecimal; other address spaces use <percent-encoded-space>:0x<hex>.; The Ghidra Program references PDB WinIspPlugIn.pdb (GUID d9f398c7-6c98-49a8-af25-a0659d5ad2f3, age (hex) 1, signature unknown, version RSDS); Ghidra reports load state unknown. Original names and types may be missing; an empty name search does not prove a procedure is absent. Use list_procedures and address-based analysis to inspect recovered functions. REA does not admit a caller-selected PDB companion.; This session uses Ghidra 12.1.2. The bridge is verified against 12.1.4; other 12.1.x builds are accepted and the observed version is reported.; Pseudocode is Ghidra decompiler output, not original source and not text-equivalent to Hopper output.; External functions and functions without an analyzable body return null; other decompiler failures remain explicit.
// pseudocode: provider-specific; not original source


void FUN_100441a0(void)

{
  uint uVar1;
  int iVar2;
  uint uVar3;
  int iVar4;
  int *piVar5;
  undefined4 ******ppppppuVar6;
  int in_ECX;
  undefined2 *local_38;
  int local_34;
  undefined2 local_30;
  undefined1 local_2e [2];
  undefined4 *****local_2c [4];
  uint local_1c;
  uint local_18;
  uint local_14;
  void *local_10;
  undefined1 *puStack_c;
  undefined4 local_8;
  
  local_8 = 0xffffffff;
  puStack_c = &LAB_101c0e38;
  local_10 = ExceptionList;
  uVar3 = DAT_1023dfec ^ (uint)&stack0xfffffffc;
  ExceptionList = &local_10;
  uVar1 = **(uint **)(in_ECX + 0x1c);
  local_14 = uVar3;
  if (uVar1 != 0) {
    iVar4 = **(int **)(in_ECX + 0x2c);
    if (uVar1 < uVar1 + iVar4 * 2) {
      **(int **)(in_ECX + 0x2c) = iVar4 + -1;
      **(int **)(in_ECX + 0x1c) = **(int **)(in_ECX + 0x1c) + 2;
      goto LAB_10044365;
    }
  }
  if (*(int *)(in_ECX + 0x4c) != 0) {
    if (**(int **)(in_ECX + 0xc) == in_ECX + 0x3c) {
      iVar4 = *(int *)(in_ECX + 0x54);
      iVar2 = *(int *)(in_ECX + 0x50);
      **(int **)(in_ECX + 0xc) = iVar2;
      **(int **)(in_ECX + 0x1c) = iVar2;
      **(int **)(in_ECX + 0x2c) = iVar4 - iVar2 >> 1;
    }
    if (*(int *)(in_ECX + 0x38) != 0) {
      local_18 = 0xf;
      local_1c = 0;
      local_2c[0] = (undefined4 *****)((uint)local_2c[0] & 0xffffff00);
      local_8 = 0;
      iVar4 = _fgetc(*(FILE **)(in_ECX + 0x4c));
      do {
        if (iVar4 == -1) goto LAB_1004434d;
        FUN_1000ac90(1,iVar4);
        ppppppuVar6 = local_2c;
        if (0xf < local_18) {
          ppppppuVar6 = (undefined4 ******)local_2c[0];
        }
        iVar4 = (**(code **)(**(int **)(in_ECX + 0x38) + 0x18))
                          (in_ECX + 0x40,ppppppuVar6,local_1c + (int)ppppppuVar6,&local_34,&local_30
                           ,local_2e,&local_38,uVar3);
        if (iVar4 < 0) goto LAB_1004434d;
        if (iVar4 < 2) {
          if (local_38 != &local_30) {
            ppppppuVar6 = local_2c;
            if (0xf < local_18) {
              ppppppuVar6 = (undefined4 ******)local_2c[0];
            }
            for (iVar4 = (local_1c - local_34) + (int)ppppppuVar6; 0 < iVar4; iVar4 = iVar4 + -1) {
              _ungetc((int)*(char *)(iVar4 + -1 + local_34),*(FILE **)(in_ECX + 0x4c));
            }
LAB_1004434d:
            if (0xf < local_18) {
              FUN_1000b630(local_2c[0],local_18 + 1);
            }
            goto LAB_10044365;
          }
          ppppppuVar6 = local_2c;
          if (0xf < local_18) {
            ppppppuVar6 = (undefined4 ******)local_2c[0];
          }
          FUN_1000a8f0(0,local_34 - (int)ppppppuVar6);
        }
        else {
          if (iVar4 != 3) goto LAB_1004434d;
          if (1 < local_1c) {
            if (local_18 < 0x10) {
              ppppppuVar6 = local_2c;
            }
            else {
              ppppppuVar6 = (undefined4 ******)local_2c[0];
              if ((undefined4 ******)local_2c[0] == (undefined4 ******)0x0) {
                local_30 = 0;
                piVar5 = __errno();
                *piVar5 = 0x16;
                FUN_1019ab61();
                goto LAB_1004434d;
              }
            }
            local_30 = *(undefined2 *)ppppppuVar6;
            goto LAB_1004434d;
          }
        }
        iVar4 = _fgetc(*(FILE **)(in_ECX + 0x4c));
      } while( true );
    }
    _fgetwc(*(FILE **)(in_ECX + 0x4c));
  }
LAB_10044365:
  ExceptionList = local_10;
  __security_check_cookie(local_14 ^ (uint)&stack0xfffffffc);
  return;
}

