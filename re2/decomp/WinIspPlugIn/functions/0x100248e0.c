// rea decompile_all
// name: FUN_100248e0
// address: 0x100248e0
// body: available
// range: 0x100248e0-0x10024b90 inclusive
// non_contiguous: false
// provider: Ghidra 12.1.2 (ghidra)
// analysis_profile: b075844f08879296d957518397cd0ddda73db81dce53d00d3f0e702766fc2af6
// limitations: The session serves operations only after Ghidra reports default auto-analysis complete; incomplete analysis does not expose partial results.; The imported Program and temporary project are ephemeral and deleted on close. Annotation operations edit session database metadata; original executable bytes are never written.; Cancelling an active Ghidra request terminates its ephemeral database and discards session annotations. The selected target remains open; the next provider query imports the original artifact again.; Default-space addresses use lowercase 0x-prefixed hexadecimal; other address spaces use <percent-encoded-space>:0x<hex>.; The Ghidra Program references PDB WinIspPlugIn.pdb (GUID d9f398c7-6c98-49a8-af25-a0659d5ad2f3, age (hex) 1, signature unknown, version RSDS); Ghidra reports load state unknown. Original names and types may be missing; an empty name search does not prove a procedure is absent. Use list_procedures and address-based analysis to inspect recovered functions. REA does not admit a caller-selected PDB companion.; This session uses Ghidra 12.1.2. The bridge is verified against 12.1.4; other 12.1.x builds are accepted and the observed version is reported.; Pseudocode is Ghidra decompiler output, not original source and not text-equivalent to Hopper output.; External functions and functions without an analyzable body return null; other decompiler failures remain explicit.
// pseudocode: provider-specific; not original source


/* WARNING: Function: __alloca_probe replaced with injection: alloca_probe */
/* WARNING: Removing unreachable block (ram,0x100249c5) */
/* WARNING: Removing unreachable block (ram,0x10024a1c) */

void FUN_100248e0(void)

{
  short sVar1;
  int iVar2;
  short *psVar3;
  int *piVar4;
  short *psVar5;
  int *piVar6;
  int iVar7;
  undefined **local_14ec [5];
  undefined4 local_14d8;
  undefined4 local_14d4;
  undefined4 uStack_14c8;
  undefined1 *puStack_14c4;
  undefined *local_14c0;
  int *local_14bc;
  uint uStack_14b8;
  uint local_14a0;
  int local_149c [3];
  int *local_1490;
  int *local_148c;
  int *local_1488;
  int *local_1484;
  undefined1 local_1480 [12];
  int local_1474;
  byte local_1470;
  short local_1464 [2600];
  uint local_14;
  void *local_10;
  undefined1 *puStack_c;
  undefined4 local_8;
  
  puStack_c = &LAB_101c2454;
  local_10 = ExceptionList;
  uStack_14b8 = DAT_1023dfec ^ (uint)&stack0xfffffffc;
  ExceptionList = &local_10;
  piVar6 = (int *)0x0;
  local_1490 = (int *)0x0;
  local_148c = (int *)0x0;
  local_1488 = (int *)0x0;
  iVar7 = 0;
  local_149c[0] = 0;
  local_149c[1] = 0;
  local_149c[2] = 0;
  local_14bc = (int *)0x146c;
  puStack_14c4 = local_1480;
  local_8 = 1;
  local_14c0 = &DAT_1024cb7c;
  uStack_14c8 = 0x1002495b;
  local_14 = uStack_14b8;
  FUN_10197c50();
  if ((local_1474 != 0) && (local_1470 < 0xb)) {
    local_14a0 = 0;
    if (local_1470 != 0) {
      psVar5 = local_1464;
      do {
        local_1484 = (int *)local_14ec;
        local_14d4 = 7;
        local_14d8 = 0;
        iVar2 = 0;
        if (*psVar5 != 0) {
          local_1484 = (int *)(psVar5 + 1);
          psVar3 = psVar5;
          do {
            sVar1 = *psVar3;
            psVar3 = psVar3 + 1;
          } while (sVar1 != 0);
          iVar2 = (int)psVar3 - (int)local_1484 >> 1;
        }
        local_149c[1] = iVar7;
        FUN_10045540(psVar5,iVar2);
        local_14ec[0] = CCpRsString::vftable;
        local_14bc = (int *)0xf;
        local_14c0 = (undefined *)0x0;
        iVar2 = FUN_10023fb0();
        iVar7 = local_149c[0];
        if (((iVar2 != 0) || ((uint)(local_149c[1] - local_149c[0]) < 4)) ||
           (piVar4 = (int *)(*(byte *)(local_149c[0] + 2) & 0x7f),
           piVar4 != (int *)((local_149c[1] - local_149c[0]) - 3U))) goto LAB_10024b56;
        if ((local_149c < piVar6) && (piVar4 = local_149c, local_1490 <= local_149c)) {
          piVar4 = (int *)((int)local_149c - (int)local_1490);
          if (piVar6 == local_1488) {
            local_14c0 = (undefined *)0x10024a9e;
            local_14bc = piVar4;
            FUN_1002c330();
            piVar6 = local_148c;
          }
          piVar4 = local_1490 + ((int)piVar4 / 0xc) * 3;
          local_8._0_1_ = 2;
          local_1484 = piVar6;
          if (piVar6 != (int *)0x0) {
LAB_10024afa:
            local_14c0 = (undefined *)0x10024b02;
            local_14bc = piVar4;
            local_1484 = piVar6;
            FUN_1002d350();
            iVar7 = local_149c[0];
          }
        }
        else {
          if (piVar6 == local_1488) {
            local_14c0 = (undefined *)0x10024ada;
            local_14bc = piVar4;
            FUN_1002c330();
            piVar6 = local_148c;
          }
          local_8._0_1_ = 3;
          local_1484 = piVar6;
          if (piVar6 != (int *)0x0) {
            piVar4 = local_149c;
            goto LAB_10024afa;
          }
        }
        piVar6 = piVar6 + 3;
        local_14a0 = local_14a0 + 1;
        local_8 = CONCAT31(local_8._1_3_,1);
        psVar5 = psVar5 + 0x104;
        local_148c = piVar6;
      } while (local_14a0 < local_1470);
    }
    local_14bc = (int *)0x10024b54;
    FUN_100246d0();
  }
LAB_10024b56:
  local_14bc = (int *)0x10024b61;
  FUN_1002c3c0();
  local_14bc = (int *)0x10024b6c;
  FUN_1002c2d0();
  ExceptionList = local_10;
  __security_check_cookie(local_14 ^ (uint)&stack0xfffffffc);
  return;
}

