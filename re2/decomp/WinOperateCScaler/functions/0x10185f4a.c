// rea decompile_all
// name: FUN_10185f4a
// address: 0x10185f4a
// body: available
// range: 0x10185f4a-0x10186315 inclusive
// non_contiguous: false
// provider: Ghidra 12.1.2 (ghidra)
// analysis_profile: b075844f08879296d957518397cd0ddda73db81dce53d00d3f0e702766fc2af6
// limitations: The session serves operations only after Ghidra reports default auto-analysis complete; incomplete analysis does not expose partial results.; The imported Program and temporary project are ephemeral and deleted on close. Annotation operations edit session database metadata; original executable bytes are never written.; Cancelling an active Ghidra request terminates its ephemeral database and discards session annotations. The selected target remains open; the next provider query imports the original artifact again.; Default-space addresses use lowercase 0x-prefixed hexadecimal; other address spaces use <percent-encoded-space>:0x<hex>.; Ghidra Listing reports a terminal call at 0x10186315 with no resolved callee; its no-return basis is unknown.; The Ghidra Program references PDB WinOperateCScaler.pdb (GUID a6737962-efea-4805-8ae6-1fc1ef126554, age (hex) 1, signature unknown, version RSDS); Ghidra reports load state unknown. Original names and types may be missing; an empty name search does not prove a procedure is absent. Use list_procedures and address-based analysis to inspect recovered functions. REA does not admit a caller-selected PDB companion.; This session uses Ghidra 12.1.2. The bridge is verified against 12.1.4; other 12.1.x builds are accepted and the observed version is reported.; Pseudocode is Ghidra decompiler output, not original source and not text-equivalent to Hopper output.; External functions and functions without an analyzable body return null; other decompiler failures remain explicit.
// pseudocode: provider-specific; not original source


/* WARNING: Type propagation algorithm not settling */

void FUN_10185f4a(int param_1,int param_2,undefined4 param_3)

{
  rsize_t _SizeInWords;
  wchar_t wVar1;
  undefined2 *puVar2;
  undefined4 uVar3;
  undefined4 uVar4;
  int iVar5;
  code *pcVar6;
  int iVar7;
  int *piVar8;
  int iVar9;
  uint uVar10;
  undefined4 *_Memory;
  errno_t eVar11;
  undefined4 uVar12;
  int iVar13;
  wchar_t *pwVar14;
  int *piVar15;
  wchar_t *pwVar16;
  bool bVar17;
  int local_2d0;
  int local_2c4;
  wchar_t *local_2c0;
  undefined1 local_2bc [172];
  ushort local_210 [128];
  wchar_t local_110 [132];
  uint local_8;
  
  local_8 = DAT_10201fec ^ (uint)&stack0xfffffffc;
  iVar7 = FUN_101835a3();
  piVar8 = (int *)(iVar7 + 0x278);
  iVar9 = FUN_10185694(param_3,local_110,0x83,local_2bc,0x55,&local_2c4);
  if (iVar9 != 0) {
    iVar9 = (param_2 + 2) * 0x10;
    pwVar16 = local_110;
    pwVar14 = *(wchar_t **)(iVar9 + param_1);
    do {
      local_2c0 = (wchar_t *)0x0;
      bVar17 = (ushort)*pwVar16 < (ushort)*pwVar14;
      if (*pwVar16 != *pwVar14) {
LAB_1018601e:
        uVar10 = -(uint)bVar17 | 1;
        goto LAB_10186023;
      }
      if (*pwVar16 == L'\0') break;
      wVar1 = pwVar16[1];
      bVar17 = (ushort)wVar1 < (ushort)pwVar14[1];
      if (wVar1 != pwVar14[1]) goto LAB_1018601e;
      pwVar16 = pwVar16 + 2;
      pwVar14 = pwVar14 + 2;
    } while (wVar1 != L'\0');
    uVar10 = 0;
LAB_10186023:
    if (uVar10 != 0) {
      pwVar16 = local_110;
      do {
        wVar1 = *pwVar16;
        pwVar16 = pwVar16 + 1;
      } while (wVar1 != L'\0');
      _SizeInWords = ((int)pwVar16 - (int)(local_110 + 1) >> 1) + 1;
      _Memory = (undefined4 *)__malloc_base(_SizeInWords * 2 + 4);
      if (_Memory != (undefined4 *)0x0) {
        puVar2 = *(undefined2 **)(iVar9 + param_1);
        uVar3 = *(undefined4 *)(param_1 + 0xa0 + param_2 * 4);
        uVar4 = *(undefined4 *)(param_1 + 8);
        eVar11 = _wcscpy_s((wchar_t *)(_Memory + 1),_SizeInWords,local_110);
        if (eVar11 != 0) {
          __invoke_watson(local_2c0,local_2c0,local_2c0,(uint)local_2c0,(uintptr_t)local_2c0);
          pcVar6 = (code *)swi(3);
          (*pcVar6)();
          return;
        }
        *(undefined4 **)(iVar9 + param_1) = _Memory + 1;
        if ((local_110[0] == L'C') && (local_110[1] == 0)) {
          *(wchar_t **)(param_1 + 0xa0 + param_2 * 4) = local_2c0;
        }
        else {
          uVar12 = FUN_10185403(local_2bc);
          *(undefined4 *)(param_1 + 0xa0 + param_2 * 4) = uVar12;
        }
        if (param_2 == 2) {
          *(int *)(param_1 + 8) = local_2c4;
          piVar15 = piVar8;
          pwVar16 = local_2c0;
          local_2d0 = *(int *)(iVar7 + 0x298);
          local_2c4 = *(int *)(iVar7 + 0x29c);
          do {
            if (*(int *)(param_1 + 8) == *piVar15) {
              if (pwVar16 != (wchar_t *)0x0) {
                *piVar8 = piVar8[(int)pwVar16 * 2];
                *(undefined4 *)(iVar7 + 0x27c) = *(undefined4 *)(iVar7 + 0x27c + (int)pwVar16 * 8);
                piVar8[(int)pwVar16 * 2] = local_2d0;
                *(int *)(iVar7 + 0x27c + (int)pwVar16 * 8) = local_2c4;
              }
              break;
            }
            pwVar16 = (wchar_t *)((int)pwVar16 + 1);
            iVar13 = *piVar15;
            iVar5 = piVar15[1];
            *piVar15 = local_2d0;
            piVar15[1] = local_2c4;
            piVar15 = piVar15 + 2;
            local_2d0 = iVar13;
            local_2c4 = iVar5;
          } while ((int)pwVar16 < 5);
          if (pwVar16 == (wchar_t *)&DAT_00000005) {
            iVar13 = ___acrt_GetStringTypeA
                               (local_2c0,1,&DAT_101d9b90,0x7f,local_210,
                                *(undefined4 *)(param_1 + 8),1);
            pwVar16 = local_2c0;
            if (iVar13 == 0) {
              *(wchar_t **)(iVar7 + 0x27c) = local_2c0;
            }
            else {
              do {
                local_210[(int)pwVar16] = local_210[(int)pwVar16] & 0x1ff;
                pwVar16 = (wchar_t *)((int)pwVar16 + 1);
              } while (pwVar16 < (wchar_t *)0x7f);
              iVar13 = _memcmp(local_210,PTR_DAT_102021e8,0xfe);
              *(uint *)(iVar7 + 0x27c) = (uint)(iVar13 == 0);
            }
            *piVar8 = *(int *)(param_1 + 8);
          }
          *(undefined4 *)(param_1 + 0x18) = *(undefined4 *)(iVar7 + 0x27c);
        }
        else if (param_2 == 1) {
          *(int *)(param_1 + 0x10) = local_2c4;
        }
        else if (param_2 == 5) {
          *(int *)(param_1 + 0x14) = local_2c4;
        }
        pcVar6 = (code *)(&PTR_FUN_101d9ad0)[param_2 * 3];
        guard_check_icall(param_1);
        iVar7 = (*pcVar6)();
        if (iVar7 == 0) {
          if (puVar2 != &DAT_102022b0) {
            piVar8 = *(int **)(param_1 + 0x28 + param_2 * 0x10);
            LOCK();
            iVar7 = *piVar8 + -1;
            *piVar8 = iVar7;
            UNLOCK();
            if (iVar7 == 0) {
              FID_conflict__free(*(void **)(param_1 + 0x28 + param_2 * 0x10));
              FID_conflict__free(*(void **)(param_1 + 0x24 + param_2 * 0x10));
              FID_conflict__free(*(void **)(param_1 + 0xa0 + param_2 * 4));
              *(wchar_t **)(iVar9 + param_1) = local_2c0;
              *(wchar_t **)(param_1 + 0xa0 + param_2 * 4) = local_2c0;
            }
          }
          *_Memory = 1;
          *(undefined4 **)(param_1 + 0x28 + param_2 * 0x10) = _Memory;
        }
        else {
          *(undefined2 **)(iVar9 + param_1) = puVar2;
          FID_conflict__free(*(void **)(param_1 + 0xa0 + param_2 * 4));
          *(undefined4 *)(param_1 + 0xa0 + param_2 * 4) = uVar3;
          FID_conflict__free(_Memory);
          *(undefined4 *)(param_1 + 8) = uVar4;
        }
      }
    }
  }
  __security_check_cookie(local_8 ^ (uint)&stack0xfffffffc);
  return;
}

