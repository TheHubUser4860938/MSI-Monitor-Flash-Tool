// rea decompile_all
// name: FUN_1003cde0
// address: 0x1003cde0
// body: available
// range: 0x1003cde0-0x1003d047 inclusive
// non_contiguous: false
// provider: Ghidra 12.1.2 (ghidra)
// analysis_profile: b075844f08879296d957518397cd0ddda73db81dce53d00d3f0e702766fc2af6
// limitations: The session serves operations only after Ghidra reports default auto-analysis complete; incomplete analysis does not expose partial results.; The imported Program and temporary project are ephemeral and deleted on close. Annotation operations edit session database metadata; original executable bytes are never written.; Cancelling an active Ghidra request terminates its ephemeral database and discards session annotations. The selected target remains open; the next provider query imports the original artifact again.; Default-space addresses use lowercase 0x-prefixed hexadecimal; other address spaces use <percent-encoded-space>:0x<hex>.; The Ghidra Program references PDB WinIspPlugIn.pdb (GUID d9f398c7-6c98-49a8-af25-a0659d5ad2f3, age (hex) 1, signature unknown, version RSDS); Ghidra reports load state unknown. Original names and types may be missing; an empty name search does not prove a procedure is absent. Use list_procedures and address-based analysis to inspect recovered functions. REA does not admit a caller-selected PDB companion.; This session uses Ghidra 12.1.2. The bridge is verified against 12.1.4; other 12.1.x builds are accepted and the observed version is reported.; Pseudocode is Ghidra decompiler output, not original source and not text-equivalent to Hopper output.; External functions and functions without an analyzable body return null; other decompiler failures remain explicit.
// pseudocode: provider-specific; not original source


/* WARNING: Function: __alloca_probe replaced with injection: alloca_probe */

void FUN_1003cde0(undefined4 param_1,uint param_2)

{
  uint uVar1;
  int iVar2;
  uint uVar3;
  undefined4 *puVar4;
  uint in_stack_000004d0;
  undefined **local_1514;
  uint local_1510;
  undefined4 local_1500;
  uint local_14fc;
  uint local_14f8;
  undefined4 local_14e8;
  uint local_14e4;
  undefined4 local_14e0 [1024];
  char local_4e0 [1224];
  uint local_18;
  undefined4 uStack_14;
  void *local_10;
  undefined1 *puStack_c;
  undefined4 local_8;
  
  puStack_c = &LAB_101c395b;
  local_10 = ExceptionList;
  uStack_14 = 0x1003cdfb;
  uVar1 = DAT_1023dfec ^ (uint)&stack0xfffffffc;
  ExceptionList = &local_10;
  local_14fc = 7;
  local_1500 = 0;
  local_1510 = local_1510 & 0xffff0000;
  local_1514 = CCpRsString::vftable;
  local_14e4 = 0xf;
  local_14e8 = 0;
  local_14f8 = local_14f8 & 0xffffff00;
  local_8 = 0;
  uVar3 = in_stack_000004d0 >> 0x10;
  local_18 = uVar1;
  _memset(local_4e0,0,0x4c4);
  _memset(local_14e0,0,0x1000);
  if (DAT_1024a360 == 0) {
    if (param_2 == 0) {
      FUN_10048350(&local_1514,L"Flag Length is 0, Not Need To Clear Flag",uVar1);
      FUN_10016860();
    }
    else {
      iVar2 = FUN_1003eda0(uVar3,in_stack_000004d0 & 0xffff,param_2,local_4e0);
      if (iVar2 == 0) {
        uVar1 = 0;
        if (0 < (int)param_2) {
          do {
            if (local_4e0[uVar1] != -1) break;
            uVar1 = uVar1 + 1;
          } while ((int)uVar1 < (int)param_2);
        }
        if (uVar1 != param_2) {
          _memset(local_14e0,0xff,0x1000);
          iVar2 = FUN_1003eda0(uVar3,in_stack_000004d0 & 0xf000,0x1000,local_14e0);
          if (iVar2 == 0) {
            if (0 < (int)param_2) {
              puVar4 = (undefined4 *)((int)local_14e0 + (in_stack_000004d0 & 0xfff));
              for (uVar1 = param_2 >> 2; uVar1 != 0; uVar1 = uVar1 - 1) {
                *puVar4 = 0xffffffff;
                puVar4 = puVar4 + 1;
              }
              for (param_2 = param_2 & 3; param_2 != 0; param_2 = param_2 - 1) {
                *(undefined1 *)puVar4 = 0xff;
                puVar4 = (undefined4 *)((int)puVar4 + 1);
              }
            }
            iVar2 = FUN_1003e610(uVar3,in_stack_000004d0 >> 0xc & 0xf,param_1);
            if (iVar2 == 0) {
              FUN_1003e2a0(in_stack_000004d0 & 0xfffff000,0x1000,local_14e0,param_1,0);
            }
          }
        }
      }
    }
  }
  local_1514 = CCpRsString::vftable;
  if (0xf < local_14e4) {
    FUN_1000b630(local_14f8,local_14e4 + 1);
  }
  local_14e4 = 0xf;
  local_14e8 = 0;
  local_14f8 = local_14f8 & 0xffffff00;
  if (7 < local_14fc) {
    FUN_1000b5d0(local_1510,local_14fc + 1);
  }
  ExceptionList = local_10;
  __security_check_cookie(local_18 ^ (uint)&stack0xfffffffc);
  return;
}

