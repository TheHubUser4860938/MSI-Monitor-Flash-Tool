// rea decompile_all
// name: __crt_strtox::divide
// address: 0x101a7980
// body: available
// range: 0x101a7980-0x101a7df9 inclusive
// range: 0x101a7e00-0x101a7e2d inclusive
// non_contiguous: true
// provider: Ghidra 12.1.2 (ghidra)
// analysis_profile: b075844f08879296d957518397cd0ddda73db81dce53d00d3f0e702766fc2af6
// limitations: The session serves operations only after Ghidra reports default auto-analysis complete; incomplete analysis does not expose partial results.; The imported Program and temporary project are ephemeral and deleted on close. Annotation operations edit session database metadata; original executable bytes are never written.; Cancelling an active Ghidra request terminates its ephemeral database and discards session annotations. The selected target remains open; the next provider query imports the original artifact again.; Default-space addresses use lowercase 0x-prefixed hexadecimal; other address spaces use <percent-encoded-space>:0x<hex>.; The Ghidra Program references PDB WinIspPlugIn.pdb (GUID d9f398c7-6c98-49a8-af25-a0659d5ad2f3, age (hex) 1, signature unknown, version RSDS); Ghidra reports load state unknown. Original names and types may be missing; an empty name search does not prove a procedure is absent. Use list_procedures and address-based analysis to inspect recovered functions. REA does not admit a caller-selected PDB companion.; This session uses Ghidra 12.1.2. The bridge is verified against 12.1.4; other 12.1.x builds are accepted and the observed version is reported.; Pseudocode is Ghidra decompiler output, not original source and not text-equivalent to Hopper output.; External functions and functions without an analyzable body return null; other decompiler failures remain explicit.
// pseudocode: provider-specific; not original source


/* WARNING: Removing unreachable block (ram,0x101a7ce7) */
/* WARNING: Removing unreachable block (ram,0x101a7cc2) */
/* Library Function - Single Match
    unsigned __int64 __cdecl __crt_strtox::divide(struct __crt_strtox::big_integer &,struct
   __crt_strtox::big_integer const &)
   
   Library: Visual Studio 2015 Release */

__uint64 __cdecl __crt_strtox::divide(big_integer *param_1,big_integer *param_2)

{
  int iVar1;
  ulonglong uVar2;
  uint uVar3;
  undefined4 extraout_ECX;
  uint uVar4;
  uint extraout_ECX_00;
  uint uVar5;
  uint uVar6;
  big_integer *pbVar7;
  undefined4 uVar8;
  big_integer *pbVar9;
  uint uVar10;
  bool bVar11;
  undefined8 uVar12;
  longlong lVar13;
  ulonglong uVar14;
  undefined1 local_21c [460];
  big_integer *local_50;
  uint local_4c;
  undefined8 local_48;
  int local_40;
  uint local_3c;
  uint local_38;
  uint local_34;
  uint local_2c;
  int local_28;
  uint local_24;
  int local_20;
  int local_1c;
  uint local_18;
  big_integer *local_14;
  uint local_10;
  uint local_c;
  uint local_8;
  
  iVar1 = *(int *)param_1;
  if (iVar1 == 0) {
    return 0;
  }
  local_3c = *(uint *)param_2;
  if (local_3c == 0) {
    return 0;
  }
  local_10 = iVar1 - 1;
  uVar4 = local_3c - 1;
  if (uVar4 == 0) {
    local_2c = *(uint *)(param_2 + 4);
    if (local_2c == 1) {
      uVar4 = *(uint *)(param_1 + 4);
      *(undefined4 *)param_1 = 0;
      _memcpy_s(param_1 + 4,0x1cc,local_21c,0);
      return (__uint64)uVar4;
    }
    if (local_10 == 0) {
      uVar4 = *(uint *)(param_1 + 4);
      *(undefined4 *)param_1 = 0;
      _memcpy_s(param_1 + 4,0x1cc,local_21c,0);
      uVar6 = uVar4 % local_2c;
      *(uint *)(param_1 + 4) = uVar6;
      *(uint *)param_1 = (uint)(uVar6 != 0);
      return (ulonglong)uVar4 / (ulonglong)local_2c;
    }
    uVar8 = 0;
    local_c = 0;
    local_8 = 0;
    local_14 = (big_integer *)0x0;
    if (local_10 != 0xffffffff) {
      pbVar7 = param_1 + iVar1 * 4;
      local_20 = iVar1;
      do {
        uVar12 = __aulldvrm(*(undefined4 *)pbVar7,uVar8,local_2c,0);
        local_48._4_4_ = (int)((ulonglong)uVar12 >> 0x20);
        pbVar7 = pbVar7 + -4;
        local_14 = param_1;
        local_8 = local_c;
        local_20 = local_20 + -1;
        uVar8 = extraout_ECX;
        local_c = (int)uVar12;
      } while (local_20 != 0);
      local_20 = 0;
    }
    *(undefined4 *)param_1 = 0;
    _memcpy_s(param_1 + 4,0x1cc,local_21c,0);
    *(undefined4 *)(param_1 + 4) = uVar8;
    *(big_integer **)(param_1 + 8) = local_14;
    *(uint *)param_1 = (local_14 != (big_integer *)0x0) + 1;
    return CONCAT44(local_8,local_c);
  }
  if (uVar4 <= local_10) {
    local_20 = local_10 - uVar4;
    if (local_20 <= (int)local_10) {
      pbVar7 = param_1 + iVar1 * 4;
      pbVar9 = param_2 + (local_10 - local_20) * 4 + 4;
      uVar4 = local_10;
      do {
        if (*(int *)pbVar9 != *(int *)pbVar7) {
          if (*(uint *)(param_1 + uVar4 * 4 + 4) <= *(uint *)(param_2 + (uVar4 - local_20) * 4 + 4))
          goto LAB_101a7b36;
          break;
        }
        uVar4 = uVar4 - 1;
        pbVar9 = pbVar9 + -4;
        pbVar7 = pbVar7 + -4;
      } while (local_20 <= (int)uVar4);
    }
    local_20 = local_20 + 1;
LAB_101a7b36:
    if (local_20 != 0) {
      local_38 = *(uint *)(param_2 + local_3c * 4);
      local_24 = *(uint *)(param_2 + local_3c * 4 + -4);
      local_28 = 0x1f;
      if (local_38 != 0) {
        for (; local_38 >> local_28 == 0; local_28 = local_28 + -1) {
        }
      }
      if (local_38 == 0) {
        local_28 = 0x20;
      }
      else {
        local_28 = 0x1f - local_28;
      }
      local_40 = 0x20 - local_28;
      if (local_28 != 0) {
        uVar4 = local_24 >> ((byte)local_40 & 0x1f);
        local_24 = local_24 << ((byte)local_28 & 0x1f);
        local_38 = local_38 << ((byte)local_28 & 0x1f) | uVar4;
        if (2 < local_3c) {
          local_24 = local_24 | *(uint *)(param_2 + local_3c * 4 + -8) >> ((byte)local_40 & 0x1f);
        }
      }
      local_4c = 0;
      local_20 = local_20 + -1;
      if (local_20 < 0) {
        local_8 = 0;
        local_4c = 0;
      }
      else {
        local_14 = param_1 + local_20 * 4 + 4;
        local_c = local_20 + local_3c;
        local_50 = param_1 + local_c * 4 + -4;
        uVar4 = local_4c;
        do {
          local_4c = uVar4;
          if (local_10 < local_c) {
            local_34 = 0;
          }
          else {
            local_34 = *(uint *)(local_50 + 8);
          }
          uVar4 = *(uint *)(local_50 + 4);
          local_18 = *(uint *)local_50;
          local_2c = 0;
          local_8 = local_34;
          if (local_28 != 0) {
            uVar4 = local_18 >> ((byte)local_40 & 0x1f);
            uVar12 = __allshl();
            local_8 = (uint)((ulonglong)uVar12 >> 0x20);
            uVar4 = uVar4 | (uint)uVar12;
            local_18 = local_18 << ((byte)local_28 & 0x1f);
            if (2 < local_c) {
              local_18 = local_18 |
                         *(uint *)(param_1 + (local_3c + local_20) * 4 + -8) >>
                         ((byte)local_40 & 0x1f);
            }
          }
          local_48 = __aulldvrm(uVar4,local_8,local_38,0);
          local_1c = (int)((ulonglong)local_48 >> 0x20);
          local_8 = (uint)local_48;
          local_2c = 0;
          uVar2 = (ulonglong)extraout_ECX_00;
          if (local_1c != 0) {
            lVar13 = __allmul(local_48 + -0xffffffff,local_38,0);
            uVar2 = lVar13 + (ulonglong)extraout_ECX_00;
            local_8 = 0xffffffff;
          }
          local_2c = (uint)(uVar2 >> 0x20);
          local_1c = 0;
          local_48._0_4_ = local_8;
          local_48._4_4_ = local_1c;
          if (local_2c == 0) {
            while( true ) {
              uVar4 = (uint)local_48;
              local_2c = (uint)(uVar2 >> 0x20);
              uVar6 = (uint)uVar2;
              local_8 = local_18;
              local_48._4_4_ = local_1c;
              uVar14 = __allmul(local_24,0,(uint)local_48,local_1c);
              uVar2 = CONCAT44(uVar6,local_8);
              local_8 = uVar4;
              if (uVar14 <= uVar2) break;
              local_48._0_4_ = uVar4 - 1;
              local_48._4_4_ = local_1c + -1 + (uint)(uVar4 != 0);
              local_1c = local_48._4_4_;
              local_8 = (uint)local_48;
              if (local_2c + CARRY4(uVar6,local_38) != 0) break;
              uVar2 = (ulonglong)(uVar6 + local_38);
            }
          }
          if ((local_1c != 0) || (local_8 != 0)) {
            uVar6 = 0;
            uVar4 = 0;
            if (local_3c != 0) {
              local_10 = local_3c;
              pbVar9 = local_14;
              pbVar7 = param_2;
              do {
                pbVar7 = pbVar7 + 4;
                lVar13 = (ulonglong)(uint)local_48 * (ulonglong)*(uint *)pbVar7;
                uVar3 = (uint)lVar13;
                uVar10 = uVar6 + uVar3;
                uVar6 = uVar4 + (int)((ulonglong)lVar13 >> 0x20) + local_48._4_4_ * *(uint *)pbVar7
                        + (uint)CARRY4(uVar6,uVar3);
                uVar4 = 0;
                if (*(uint *)pbVar9 < uVar10) {
                  bVar11 = 0xfffffffe < uVar6;
                  uVar6 = uVar6 + 1;
                  uVar4 = (uint)bVar11;
                }
                *(uint *)pbVar9 = *(uint *)pbVar9 - uVar10;
                pbVar9 = pbVar9 + 4;
                local_10 = local_10 - 1;
              } while (local_10 != 0);
            }
            if ((uVar4 != 0) || (local_34 < uVar6)) {
              if (local_3c != 0) {
                uVar6 = 0;
                pbVar9 = local_14;
                uVar4 = local_3c;
                pbVar7 = param_2;
                do {
                  pbVar7 = pbVar7 + 4;
                  uVar3 = *(uint *)pbVar9;
                  uVar10 = *(uint *)pbVar7;
                  uVar5 = uVar3 + *(uint *)pbVar7;
                  *(uint *)pbVar9 = uVar5 + uVar6;
                  uVar6 = (uint)CARRY4(uVar3,uVar10) + (uint)CARRY4(uVar5,uVar6);
                  uVar4 = uVar4 - 1;
                  pbVar9 = pbVar9 + 4;
                } while (uVar4 != 0);
              }
              bVar11 = local_8 != 0;
              local_8 = local_8 - 1;
              local_1c = local_1c + -1 + (uint)bVar11;
            }
            local_10 = local_c - 1;
          }
          local_14 = local_14 + -4;
          local_20 = local_20 + -1;
          local_50 = local_50 + -4;
          local_c = local_c - 1;
          uVar4 = local_8;
        } while (-1 < local_20);
      }
      uVar4 = local_10 + 1;
      if (uVar4 < *(uint *)param_1) {
        pbVar7 = param_1 + (local_10 + 2) * 4;
        uVar6 = uVar4;
        do {
          *(undefined4 *)pbVar7 = 0;
          pbVar7 = pbVar7 + 4;
          uVar6 = uVar6 + 1;
        } while (uVar6 < *(uint *)param_1);
      }
      *(uint *)param_1 = uVar4;
      while ((uVar4 != 0 && (*(int *)(param_1 + *(int *)param_1 * 4) == 0))) {
        uVar4 = *(int *)param_1 - 1;
        *(uint *)param_1 = uVar4;
      }
      return CONCAT44(local_4c,local_8);
    }
  }
  return 0;
}

