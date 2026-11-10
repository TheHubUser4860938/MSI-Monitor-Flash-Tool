// rea decompile_all
// name: FUN_1003ee40
// address: 0x1003ee40
// body: available
// range: 0x1003ee40-0x1003f1a6 inclusive
// non_contiguous: false
// provider: Ghidra 12.1.2 (ghidra)
// analysis_profile: b075844f08879296d957518397cd0ddda73db81dce53d00d3f0e702766fc2af6
// limitations: The session serves operations only after Ghidra reports default auto-analysis complete; incomplete analysis does not expose partial results.; The imported Program and temporary project are ephemeral and deleted on close. Annotation operations edit session database metadata; original executable bytes are never written.; Cancelling an active Ghidra request terminates its ephemeral database and discards session annotations. The selected target remains open; the next provider query imports the original artifact again.; Default-space addresses use lowercase 0x-prefixed hexadecimal; other address spaces use <percent-encoded-space>:0x<hex>.; The Ghidra Program references PDB WinIspPlugIn.pdb (GUID d9f398c7-6c98-49a8-af25-a0659d5ad2f3, age (hex) 1, signature unknown, version RSDS); Ghidra reports load state unknown. Original names and types may be missing; an empty name search does not prove a procedure is absent. Use list_procedures and address-based analysis to inspect recovered functions. REA does not admit a caller-selected PDB companion.; This session uses Ghidra 12.1.2. The bridge is verified against 12.1.4; other 12.1.x builds are accepted and the observed version is reported.; Pseudocode is Ghidra decompiler output, not original source and not text-equivalent to Hopper output.; External functions and functions without an analyzable body return null; other decompiler failures remain explicit.
// pseudocode: provider-specific; not original source


void FUN_1003ee40(uint param_1,uint param_2,int param_3,int param_4,int param_5)

{
  uint uVar1;
  uint uVar2;
  char cVar3;
  int iVar4;
  int *piVar5;
  uint uVar6;
  uint uVar7;
  int iVar8;
  int *piVar9;
  undefined4 local_138;
  int local_134;
  uint local_130;
  uint local_12c;
  uint local_128;
  int local_124;
  uint local_120;
  int local_11c;
  uint local_118;
  char local_111;
  undefined4 local_110;
  uint local_c;
  
  local_c = DAT_1023dfec ^ (uint)&stack0xfffffffc;
  local_124 = param_3;
  local_134 = param_4;
  _memset(&local_110,0,0x100);
  iVar8 = 0;
  local_11c = 0;
  if ((param_1 + param_2 < 0x1000000) && (local_124 != 0)) {
    if (param_2 != 0) {
      local_128 = 0x100 - (param_1 & 0xff) & 0xffff;
      if (param_2 < local_128) {
        local_128 = param_2 & 0xffff;
        local_120 = 0;
      }
      else {
        local_120 = param_2 - local_128;
      }
      local_118 = param_1;
      if ((char)local_120 == '\0') {
        local_130 = (local_120 >> 8) + 1 & 0xffff;
        local_120 = local_128;
        if (local_130 != 1) {
          local_120 = 0x100;
        }
      }
      else {
        local_130 = (local_120 >> 8) + 2 & 0xffff;
        local_120 = local_120 & 0xff;
      }
      uVar6 = local_130;
      iVar4 = (**(code **)(*DAT_10249d10 + 0xf0))(0x6d,2);
      if (iVar4 != 0) goto LAB_1003f194;
      local_12c = 0;
      uVar7 = 0;
      if ((short)uVar6 != 0) {
        do {
          if ((short)local_12c == 0) {
            uVar6 = local_128 & 0xffff;
          }
          else if ((uVar6 & 0xffff) - 1 == (local_12c & 0xffff)) {
            uVar6 = local_120 & 0xffff;
          }
          else {
            uVar6 = 0x100;
          }
          piVar9 = (int *)(iVar8 + local_124);
          uVar7 = uVar6;
          do {
            uVar7 = uVar7 - 1;
            if (uVar6 <= uVar7) break;
          } while (*(char *)(uVar7 + (int)piVar9) == -1);
          if ((short)uVar7 == -1) {
            local_118 = local_118 + uVar6;
            iVar8 = local_11c + uVar6;
            local_11c = iVar8;
          }
          else {
            if (*(int *)(local_134 + 0x58) != 0) {
              local_138 = *(undefined4 *)(local_134 + 0x50);
              iVar8 = FUN_1003cb60(&local_138,local_134);
              if (iVar8 != 0) goto LAB_1003f194;
            }
            iVar8 = (**(code **)(*DAT_10249d10 + 400))(local_118,uVar6,piVar9);
            if (iVar8 != 0) goto LAB_1003f194;
            uVar7 = local_118;
            if (DAT_1024a3e0 == 0) {
              _memset(&local_110,0,0x100);
              uVar7 = local_118;
              iVar8 = (**(code **)(*DAT_10249d10 + 0x194))(local_118,uVar6,&local_110);
              if (iVar8 != 0) goto LAB_1003f194;
              piVar5 = &local_110;
              uVar2 = uVar6;
              while (uVar1 = uVar2 - 4, 3 < uVar2) {
                if (*piVar9 != *piVar5) goto LAB_1003f07b;
                piVar9 = piVar9 + 1;
                piVar5 = piVar5 + 1;
                uVar2 = uVar1;
              }
              if (uVar1 != 0xfffffffc) {
LAB_1003f07b:
                if (((char)*piVar9 != (char)*piVar5) ||
                   ((uVar1 != 0xfffffffd &&
                    ((*(char *)((int)piVar9 + 1) != *(char *)((int)piVar5 + 1) ||
                     ((uVar1 != 0xfffffffe &&
                      ((*(char *)((int)piVar9 + 2) != *(char *)((int)piVar5 + 2) ||
                       ((uVar1 != 0xffffffff &&
                        (*(char *)((int)piVar9 + 3) != *(char *)((int)piVar5 + 3))))))))))))) {
                  __security_check_cookie(local_c ^ (uint)&stack0xfffffffc);
                  return;
                }
              }
            }
            local_118 = uVar7 + uVar6;
            iVar8 = local_11c + uVar6;
            local_11c = iVar8;
            if (param_5 != 0) {
              FUN_1002da20();
            }
          }
          local_12c = local_12c + 1;
          uVar6 = local_130;
          uVar7 = local_12c;
        } while ((ushort)local_12c < (ushort)local_130);
      }
      local_12c = uVar7;
      if (DAT_1024a3e0 != 0) {
        cVar3 = FUN_1001c910();
        local_111 = '\0';
        iVar8 = FUN_1001c530(&local_111);
        if (iVar8 != 0) goto LAB_1003f194;
        if (cVar3 != local_111) {
          FUN_10048350(&DAT_1024a13c,
                       L"First Page Check CRC Fail,ucClacCRC:0x%x, ucReadCRC:0x%x StartAddr: 0x%x ProLen: 0x%x"
                       ,cVar3,local_111,param_1,param_2);
          FUN_10016860();
          __security_check_cookie(local_c ^ (uint)&stack0xfffffffc);
          return;
        }
      }
    }
    __security_check_cookie(local_c ^ (uint)&stack0xfffffffc);
    return;
  }
LAB_1003f194:
  __security_check_cookie(local_c ^ (uint)&stack0xfffffffc);
  return;
}

