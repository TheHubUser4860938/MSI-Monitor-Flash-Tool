// rea decompile_all
// name: FUN_0040acb0
// address: 0x40acb0
// body: available
// range: 0x40acb0-0x40aede inclusive
// non_contiguous: false
// provider: Ghidra 12.1.2 (ghidra)
// analysis_profile: ac6d50be2cdf54f7005df47d1ed7e7ef55dee595681eb1b7c2e0b00d70cd697d
// limitations: The session serves operations only after Ghidra reports default auto-analysis complete; incomplete analysis does not expose partial results.; The imported Program and temporary project are ephemeral and deleted on close. Annotation operations edit session database metadata; original executable bytes are never written.; Cancelling an active Ghidra request terminates its ephemeral database and discards session annotations. The selected target remains open; the next provider query imports the original artifact again.; Default-space addresses use lowercase 0x-prefixed hexadecimal; other address spaces use <percent-encoded-space>:0x<hex>.; Ghidra Listing reports a terminal call at 0x40ae4f to 0x57663d FUN_0057663d (external=false, thunk=false, hasNoReturn=true); fallthrough is excluded by Ghidra's flow model. This records Ghidra's FunctionManager flag, not an independent verification that the callee cannot return.; Ghidra Listing reports a terminal call at 0x40ae9b to 0x57663d FUN_0057663d (external=false, thunk=false, hasNoReturn=true); fallthrough is excluded by Ghidra's flow model. This records Ghidra's FunctionManager flag, not an independent verification that the callee cannot return.; Ghidra Listing reports a terminal call at 0x40aea7 to 0x57663d FUN_0057663d (external=false, thunk=false, hasNoReturn=true); fallthrough is excluded by Ghidra's flow model. This records Ghidra's FunctionManager flag, not an independent verification that the callee cannot return.; Ghidra Listing reports a terminal call at 0x40aeb1 to 0x57663d FUN_0057663d (external=false, thunk=false, hasNoReturn=true); fallthrough is excluded by Ghidra's flow model. This records Ghidra's FunctionManager flag, not an independent verification that the callee cannot return.; The Ghidra Program references PDB ISPToolForMsi.pdb (GUID b8f2ac8f-1d6f-438d-800f-ed4a14426ac6, age (hex) 1, signature unknown, version RSDS); Ghidra reports load state unknown. Original names and types may be missing; an empty name search does not prove a procedure is absent. Use list_procedures and address-based analysis to inspect recovered functions. REA does not admit a caller-selected PDB companion.; This session uses Ghidra 12.1.2. The bridge is verified against 12.1.4; other 12.1.x builds are accepted and the observed version is reported.; Pseudocode is Ghidra decompiler output, not original source and not text-equivalent to Hopper output.; External functions and functions without an analyzable body return null; other decompiler failures remain explicit.
// pseudocode: provider-specific; not original source


void FUN_0040acb0(void)

{
  uint uVar1;
  int iVar2;
  uint uVar3;
  int iVar4;
  undefined4 ******ppppppuVar5;
  int in_ECX;
  undefined1 *local_38;
  int local_34;
  undefined4 *****local_30 [4];
  int local_20;
  uint local_1c;
  undefined1 local_15;
  uint local_14;
  void *local_10;
  undefined1 *puStack_c;
  undefined4 local_8;
  
  local_8 = 0xffffffff;
  puStack_c = &LAB_0059c6d8;
  local_10 = ExceptionList;
  uVar3 = DAT_0060cff4 ^ (uint)&stack0xfffffffc;
  ExceptionList = &local_10;
  uVar1 = **(uint **)(in_ECX + 0x1c);
  local_14 = uVar3;
  if (uVar1 != 0) {
    iVar4 = **(int **)(in_ECX + 0x2c);
    if (uVar1 < iVar4 + uVar1) {
      **(int **)(in_ECX + 0x2c) = iVar4 + -1;
      **(int **)(in_ECX + 0x1c) = **(int **)(in_ECX + 0x1c) + 1;
      goto LAB_0040aec3;
    }
  }
  if (*(int *)(in_ECX + 0x4c) != 0) {
    if (**(int **)(in_ECX + 0xc) == in_ECX + 0x3c) {
      iVar4 = *(int *)(in_ECX + 0x54);
      iVar2 = *(int *)(in_ECX + 0x50);
      **(int **)(in_ECX + 0xc) = iVar2;
      **(int **)(in_ECX + 0x1c) = iVar2;
      **(int **)(in_ECX + 0x2c) = iVar4 - iVar2;
    }
    if (*(int *)(in_ECX + 0x38) != 0) {
      local_1c = 0xf;
      local_20 = 0;
      local_30[0] = (undefined4 *****)((uint)local_30[0] & 0xffffff00);
      local_8 = 0;
      iVar4 = _fgetc(*(FILE **)(in_ECX + 0x4c));
      do {
        if (iVar4 == -1) goto LAB_0040ae35;
        FUN_00405710(1,iVar4);
        ppppppuVar5 = local_30;
        if (0xf < local_1c) {
          ppppppuVar5 = (undefined4 ******)local_30[0];
        }
        iVar4 = (**(code **)(**(int **)(in_ECX + 0x38) + 0x18))
                          (in_ECX + 0x40,ppppppuVar5,local_20 + (int)ppppppuVar5,&local_34,&local_15
                           ,&local_14,&local_38,uVar3);
        if (iVar4 < 0) goto LAB_0040ae35;
        if (iVar4 < 2) {
          if (local_38 != &local_15) {
            ppppppuVar5 = local_30;
            if (0xf < local_1c) {
              ppppppuVar5 = (undefined4 ******)local_30[0];
            }
            for (iVar4 = (local_20 - local_34) + (int)ppppppuVar5; 0 < iVar4; iVar4 = iVar4 + -1) {
              _ungetc((int)*(char *)(iVar4 + -1 + local_34),*(FILE **)(in_ECX + 0x4c));
            }
LAB_0040ae35:
            if (0xf < local_1c) {
              ppppppuVar5 = (undefined4 ******)local_30[0];
              if (0xfff < local_1c + 1) {
                if (((uint)local_30[0] & 0x1f) != 0) {
                    /* WARNING: Subroutine does not return */
                  FUN_0057663d();
                }
                ppppppuVar5 = (undefined4 ******)local_30[0][-1];
                if (local_30[0] <= ppppppuVar5) {
                    /* WARNING: Subroutine does not return */
                  FUN_0057663d();
                }
                if ((uint)((int)local_30[0] - (int)ppppppuVar5) < 4) {
                    /* WARNING: Subroutine does not return */
                  FUN_0057663d();
                }
                if (0x23 < (uint)((int)local_30[0] - (int)ppppppuVar5)) {
                    /* WARNING: Subroutine does not return */
                  FUN_0057663d();
                }
              }
              FID_conflict__free(ppppppuVar5);
            }
            goto LAB_0040aec3;
          }
          ppppppuVar5 = local_30;
          if (0xf < local_1c) {
            ppppppuVar5 = (undefined4 ******)local_30[0];
          }
          FUN_00405630(0,local_34 - (int)ppppppuVar5);
        }
        else {
          if (iVar4 != 3) goto LAB_0040ae35;
          if (local_20 != 0) {
            ppppppuVar5 = local_30;
            if (0xf < local_1c) {
              ppppppuVar5 = (undefined4 ******)local_30[0];
            }
            FUN_0040e2a0(ppppppuVar5,1);
            goto LAB_0040ae35;
          }
        }
        iVar4 = _fgetc(*(FILE **)(in_ECX + 0x4c));
      } while( true );
    }
    _fgetc(*(FILE **)(in_ECX + 0x4c));
  }
LAB_0040aec3:
  ExceptionList = local_10;
  __security_check_cookie(local_14 ^ (uint)&stack0xfffffffc);
  return;
}

