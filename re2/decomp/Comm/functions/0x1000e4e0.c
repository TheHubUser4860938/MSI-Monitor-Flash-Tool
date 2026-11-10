// rea decompile_all
// name: FUN_1000e4e0
// address: 0x1000e4e0
// body: available
// range: 0x1000e4e0-0x1000e7a8 inclusive
// non_contiguous: false
// provider: Ghidra 12.1.2 (ghidra)
// analysis_profile: b075844f08879296d957518397cd0ddda73db81dce53d00d3f0e702766fc2af6
// limitations: The session serves operations only after Ghidra reports default auto-analysis complete; incomplete analysis does not expose partial results.; The imported Program and temporary project are ephemeral and deleted on close. Annotation operations edit session database metadata; original executable bytes are never written.; Cancelling an active Ghidra request terminates its ephemeral database and discards session annotations. The selected target remains open; the next provider query imports the original artifact again.; Default-space addresses use lowercase 0x-prefixed hexadecimal; other address spaces use <percent-encoded-space>:0x<hex>.; Ghidra Listing reports a terminal call at 0x1000e70d to 0x1014f4d6 FUN_1014f4d6 (external=false, thunk=false, hasNoReturn=true); fallthrough is excluded by Ghidra's flow model. This records Ghidra's FunctionManager flag, not an independent verification that the callee cannot return.; Ghidra Listing reports a terminal call at 0x1000e759 to 0x10149c21 FUN_10149c21 (external=false, thunk=false, hasNoReturn=true); fallthrough is excluded by Ghidra's flow model. This records Ghidra's FunctionManager flag, not an independent verification that the callee cannot return.; Ghidra Listing reports a terminal call at 0x1000e765 to 0x1014f4d6 FUN_1014f4d6 (external=false, thunk=false, hasNoReturn=true); fallthrough is excluded by Ghidra's flow model. This records Ghidra's FunctionManager flag, not an independent verification that the callee cannot return.; Ghidra Listing reports a terminal call at 0x1000e771 to 0x1014f4d6 FUN_1014f4d6 (external=false, thunk=false, hasNoReturn=true); fallthrough is excluded by Ghidra's flow model. This records Ghidra's FunctionManager flag, not an independent verification that the callee cannot return.; Ghidra Listing reports a terminal call at 0x1000e77b to 0x1014f4d6 FUN_1014f4d6 (external=false, thunk=false, hasNoReturn=true); fallthrough is excluded by Ghidra's flow model. This records Ghidra's FunctionManager flag, not an independent verification that the callee cannot return.; The Ghidra Program references PDB Comm.pdb (GUID c3062acb-498d-45fa-a233-c8b7e401bb13, age (hex) 1, signature unknown, version RSDS); Ghidra reports load state unknown. Original names and types may be missing; an empty name search does not prove a procedure is absent. Use list_procedures and address-based analysis to inspect recovered functions. REA does not admit a caller-selected PDB companion.; This session uses Ghidra 12.1.2. The bridge is verified against 12.1.4; other 12.1.x builds are accepted and the observed version is reported.; Pseudocode is Ghidra decompiler output, not original source and not text-equivalent to Hopper output.; External functions and functions without an analyzable body return null; other decompiler failures remain explicit.
// pseudocode: provider-specific; not original source


void FUN_1000e4e0(void)

{
  uint uVar1;
  int iVar2;
  uint uVar3;
  int iVar4;
  undefined4 ******ppppppuVar5;
  int in_ECX;
  undefined1 uVar6;
  undefined1 *puVar7;
  undefined1 *local_40;
  int local_3c;
  int local_38;
  int local_34;
  undefined1 local_2d;
  undefined4 *****local_2c [4];
  uint local_1c;
  uint local_18;
  uint local_14;
  void *local_10;
  undefined1 *puStack_c;
  undefined4 local_8;
  
  local_8 = 0xffffffff;
  puStack_c = &LAB_1016d818;
  local_10 = ExceptionList;
  uVar3 = DAT_101d3fec ^ (uint)&stack0xfffffffc;
  ExceptionList = &local_10;
  uVar1 = **(uint **)(in_ECX + 0x1c);
  local_14 = uVar3;
  if (uVar1 != 0) {
    iVar2 = **(int **)(in_ECX + 0x2c);
    if (uVar1 < iVar2 + uVar1) {
      **(int **)(in_ECX + 0x2c) = iVar2 + -1;
      **(int **)(in_ECX + 0x1c) = **(int **)(in_ECX + 0x1c) + 1;
      goto LAB_1000e78d;
    }
  }
  if (*(int *)(in_ECX + 0x4c) != 0) {
    if (**(int **)(in_ECX + 0xc) == in_ECX + 0x3c) {
      iVar2 = *(int *)(in_ECX + 0x54);
      iVar4 = *(int *)(in_ECX + 0x50);
      **(int **)(in_ECX + 0xc) = iVar4;
      **(int **)(in_ECX + 0x1c) = iVar4;
      **(int **)(in_ECX + 0x2c) = iVar2 - iVar4;
    }
    if (*(int *)(in_ECX + 0x38) != 0) {
      local_18 = 0xf;
      local_1c = 0;
      local_2c[0] = (undefined4 *****)((uint)local_2c[0] & 0xffffff00);
      local_8 = 0;
      local_38 = in_ECX;
      local_3c = _fgetc(*(FILE **)(in_ECX + 0x4c));
      do {
        if (local_3c == -1) goto LAB_1000e6f3;
        uVar6 = (undefined1)local_3c;
        if ((-local_1c - 1 < 2) || (uVar1 = local_1c + 1, uVar1 == 0xffffffff)) {
                    /* WARNING: Subroutine does not return */
          FUN_10149c21("string too long",uVar3);
        }
        if (local_18 < uVar1) {
          FUN_10010540(uVar1,local_1c);
          uVar6 = (undefined1)local_3c;
          if (uVar1 != 0) {
LAB_1000e5f7:
            ppppppuVar5 = local_2c;
            if (0xf < local_18) {
              ppppppuVar5 = (undefined4 ******)local_2c[0];
            }
            *(undefined1 *)((int)ppppppuVar5 + local_1c) = uVar6;
            ppppppuVar5 = local_2c;
            if (0xf < local_18) {
              ppppppuVar5 = (undefined4 ******)local_2c[0];
            }
            local_1c = uVar1;
            *(undefined1 *)((int)ppppppuVar5 + uVar1) = 0;
          }
        }
        else {
          if (uVar1 != 0) goto LAB_1000e5f7;
          ppppppuVar5 = local_2c;
          if (0xf < local_18) {
            ppppppuVar5 = (undefined4 ******)local_2c[0];
          }
          local_1c = uVar1;
          *(undefined1 *)ppppppuVar5 = 0;
        }
        iVar2 = local_38;
        ppppppuVar5 = local_2c;
        if (0xf < local_18) {
          ppppppuVar5 = (undefined4 ******)local_2c[0];
        }
        iVar4 = (**(code **)(**(int **)(local_38 + 0x38) + 0x18))
                          (local_38 + 0x40,ppppppuVar5,(undefined1 *)(local_1c + (int)ppppppuVar5),
                           &local_34,&local_2d,local_2c,&local_40);
        if (iVar4 < 0) goto LAB_1000e6f3;
        if (iVar4 < 2) {
          if (local_40 != &local_2d) {
            ppppppuVar5 = local_2c;
            if (0xf < local_18) {
              ppppppuVar5 = (undefined4 ******)local_2c[0];
            }
            for (puVar7 = (undefined1 *)((local_1c - local_34) + (int)ppppppuVar5); 0 < (int)puVar7;
                puVar7 = puVar7 + -1) {
              _ungetc((int)(char)puVar7[local_34 + -1],*(FILE **)(iVar2 + 0x4c));
            }
LAB_1000e6f3:
            if (0xf < local_18) {
              ppppppuVar5 = (undefined4 ******)local_2c[0];
              if (0xfff < local_18 + 1) {
                if (((uint)local_2c[0] & 0x1f) != 0) {
                    /* WARNING: Subroutine does not return */
                  FUN_1014f4d6();
                }
                ppppppuVar5 = (undefined4 ******)local_2c[0][-1];
                if (local_2c[0] <= ppppppuVar5) {
                    /* WARNING: Subroutine does not return */
                  FUN_1014f4d6();
                }
                if ((uint)((int)local_2c[0] - (int)ppppppuVar5) < 4) {
                    /* WARNING: Subroutine does not return */
                  FUN_1014f4d6();
                }
                if (0x23 < (uint)((int)local_2c[0] - (int)ppppppuVar5)) {
                    /* WARNING: Subroutine does not return */
                  FUN_1014f4d6();
                }
              }
              FID_conflict__free(ppppppuVar5);
            }
            goto LAB_1000e78d;
          }
          ppppppuVar5 = local_2c;
          if (0xf < local_18) {
            ppppppuVar5 = (undefined4 ******)local_2c[0];
          }
          FUN_1000e0a0(0,local_34 - (int)ppppppuVar5);
        }
        else {
          if (iVar4 != 3) goto LAB_1000e6f3;
          if (local_1c != 0) {
            ppppppuVar5 = local_2c;
            if (0xf < local_18) {
              ppppppuVar5 = (undefined4 ******)local_2c[0];
            }
            FUN_10010c10(ppppppuVar5,1);
            goto LAB_1000e6f3;
          }
        }
        local_3c = _fgetc(*(FILE **)(iVar2 + 0x4c));
      } while( true );
    }
    _fgetc(*(FILE **)(in_ECX + 0x4c));
  }
LAB_1000e78d:
  ExceptionList = local_10;
  __security_check_cookie(local_14 ^ (uint)&stack0xfffffffc);
  return;
}

