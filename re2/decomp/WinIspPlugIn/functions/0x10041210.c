// rea decompile_all
// name: FUN_10041210
// address: 0x10041210
// body: available
// range: 0x10041210-0x100415e4 inclusive
// non_contiguous: false
// provider: Ghidra 12.1.2 (ghidra)
// analysis_profile: b075844f08879296d957518397cd0ddda73db81dce53d00d3f0e702766fc2af6
// limitations: The session serves operations only after Ghidra reports default auto-analysis complete; incomplete analysis does not expose partial results.; The imported Program and temporary project are ephemeral and deleted on close. Annotation operations edit session database metadata; original executable bytes are never written.; Cancelling an active Ghidra request terminates its ephemeral database and discards session annotations. The selected target remains open; the next provider query imports the original artifact again.; Default-space addresses use lowercase 0x-prefixed hexadecimal; other address spaces use <percent-encoded-space>:0x<hex>.; The Ghidra Program references PDB WinIspPlugIn.pdb (GUID d9f398c7-6c98-49a8-af25-a0659d5ad2f3, age (hex) 1, signature unknown, version RSDS); Ghidra reports load state unknown. Original names and types may be missing; an empty name search does not prove a procedure is absent. Use list_procedures and address-based analysis to inspect recovered functions. REA does not admit a caller-selected PDB companion.; This session uses Ghidra 12.1.2. The bridge is verified against 12.1.4; other 12.1.x builds are accepted and the observed version is reported.; Pseudocode is Ghidra decompiler output, not original source and not text-equivalent to Hopper output.; External functions and functions without an analyzable body return null; other decompiler failures remain explicit.
// pseudocode: provider-specific; not original source


/* WARNING: Type propagation algorithm not settling */

void FUN_10041210(uint param_1,undefined4 param_2,undefined4 *param_3)

{
  ushort uVar1;
  short sVar2;
  uint uVar3;
  int iVar4;
  uint *puVar5;
  undefined4 uVar6;
  ushort *puVar7;
  undefined4 extraout_ECX;
  undefined4 extraout_ECX_00;
  undefined4 extraout_ECX_01;
  int iVar8;
  undefined4 extraout_ECX_02;
  undefined4 extraout_ECX_03;
  undefined4 extraout_ECX_04;
  undefined4 extraout_ECX_05;
  uint *in_EDX;
  undefined4 *puVar9;
  undefined1 local_498 [4];
  int local_494;
  undefined4 *local_490;
  uint local_48c;
  undefined4 *local_484;
  undefined4 local_480;
  undefined **local_47c;
  undefined2 local_478;
  undefined4 local_468;
  undefined4 local_464;
  undefined1 local_460;
  undefined4 local_450;
  undefined4 local_44c;
  undefined **local_448;
  undefined4 local_444;
  undefined4 local_434;
  uint local_430;
  undefined1 local_42c;
  undefined4 local_41c;
  undefined4 local_418;
  undefined4 local_414 [128];
  ushort local_214;
  ushort local_212 [255];
  uint local_14;
  void *local_10;
  undefined1 *puStack_c;
  undefined4 local_8;
  
  local_8 = 0xffffffff;
  puStack_c = &LAB_101c3c46;
  local_10 = ExceptionList;
  uVar3 = DAT_1023dfec ^ (uint)&stack0xfffffffc;
  ExceptionList = &local_10;
  local_484 = param_3;
  local_14 = uVar3;
  _memset(&local_214,0,0x200);
  _memset(local_414,0,0x200);
  local_464 = 7;
  local_468 = 0;
  local_478 = 0;
  local_47c = CCpRsString::vftable;
  local_44c = 0xf;
  local_450 = 0;
  local_460 = 0;
  local_430 = 7;
  local_434 = 0;
  local_444 = (undefined4 *)((uint)local_444._2_2_ << 0x10);
  local_448 = CCpRsString::vftable;
  local_418 = 0xf;
  local_41c = 0;
  local_42c = 0;
  local_8 = 1;
  local_480 = 0;
  if (*in_EDX < param_1) {
    iVar4 = FUN_100415f0(param_1,local_414,extraout_ECX,uVar3);
    uVar6 = extraout_ECX_00;
    while (local_494 = iVar4, iVar4 != 1) {
      if (((param_1 <= *in_EDX) || (iVar4 == 0)) || (iVar4 == 6)) goto LAB_100415b1;
      iVar4 = FUN_100415f0(param_1,local_414,uVar6,uVar3);
      uVar6 = extraout_ECX_01;
    }
    puVar9 = local_414;
    puVar7 = &local_214;
    for (iVar8 = 0x80; iVar8 != 0; iVar8 = iVar8 + -1) {
      *(undefined4 *)puVar7 = *puVar9;
      puVar9 = puVar9 + 1;
      puVar7 = puVar7 + 2;
    }
    if (((short)local_414[0] == 0x30) &&
       ((sVar2 = (short)((uint)local_414[0] >> 0x10), sVar2 == 0x78 || (sVar2 == 0x58)))) {
      FUN_10048240(&local_214);
      puVar9 = &local_444;
      if (7 < local_430) {
        puVar9 = local_444;
      }
      local_490 = puVar9;
      puVar5 = (uint *)FUN_100165c0(local_498);
      uVar3 = 0;
      local_48c = (uint)((int)*puVar5 + (1 - (int)local_490)) >> 1;
      if ((undefined4 *)*puVar5 < local_490) {
        local_48c = 0;
      }
      if (local_48c != 0) {
        iVar8 = (int)local_490 - (int)puVar9;
        do {
          iVar4 = _tolower((uint)*(ushort *)(iVar8 + (int)puVar9));
          uVar3 = uVar3 + 1;
          *(short *)puVar9 = (short)iVar4;
          puVar9 = (undefined4 *)((int)puVar9 + 2);
          iVar4 = local_494;
        } while (uVar3 != local_48c);
      }
      uVar6 = FUN_100486d0();
      FUN_10009140(uVar6);
      iVar8 = FUN_100406e0();
      if ((iVar8 != 0) && (*local_484 = local_480, iVar4 != 0)) {
        uVar6 = extraout_ECX_02;
        if (iVar4 == 1) {
LAB_10041539:
          iVar4 = FUN_100415f0(param_1,local_414,uVar6);
          uVar6 = extraout_ECX_04;
          while ((((iVar4 != 4 && (*in_EDX < param_1)) && (iVar4 != 0)) &&
                 ((iVar4 != 3 && (iVar4 != 6))))) {
            iVar4 = FUN_100415f0(param_1,local_414,uVar6);
            uVar6 = extraout_ECX_05;
          }
        }
        goto LAB_100415b1;
      }
    }
    puVar9 = local_484;
    uVar3 = 0;
    while( true ) {
      if ((0x39 < local_214) || ((&local_214)[uVar3] < 0x30)) goto LAB_100415b1;
      puVar7 = &local_214;
      uVar3 = uVar3 + 1;
      do {
        uVar1 = *puVar7;
        puVar7 = puVar7 + 1;
      } while (uVar1 != 0);
      if ((uint)((int)puVar7 - (int)local_212 >> 1) <= uVar3) break;
      local_214 = (&local_214)[uVar3];
    }
    FUN_10048240(&local_214);
    uVar6 = FUN_100486d0();
    FUN_10009140(uVar6);
    iVar4 = FUN_100406e0();
    if (iVar4 != 0) {
      *puVar9 = local_480;
      uVar6 = extraout_ECX_03;
      goto LAB_10041539;
    }
  }
LAB_100415b1:
  FUN_10048130();
  FUN_10048130();
  ExceptionList = local_10;
  __security_check_cookie(local_14 ^ (uint)&stack0xfffffffc);
  return;
}

