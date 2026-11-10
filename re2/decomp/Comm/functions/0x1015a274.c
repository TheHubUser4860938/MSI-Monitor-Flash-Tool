// rea decompile_all
// name: FUN_1015a274
// address: 0x1015a274
// body: available
// range: 0x1015a274-0x1015a6b5 inclusive
// non_contiguous: false
// provider: Ghidra 12.1.2 (ghidra)
// analysis_profile: b075844f08879296d957518397cd0ddda73db81dce53d00d3f0e702766fc2af6
// limitations: The session serves operations only after Ghidra reports default auto-analysis complete; incomplete analysis does not expose partial results.; The imported Program and temporary project are ephemeral and deleted on close. Annotation operations edit session database metadata; original executable bytes are never written.; Cancelling an active Ghidra request terminates its ephemeral database and discards session annotations. The selected target remains open; the next provider query imports the original artifact again.; Default-space addresses use lowercase 0x-prefixed hexadecimal; other address spaces use <percent-encoded-space>:0x<hex>.; Ghidra Listing reports a terminal call at 0x1015a6b5 with no resolved callee; its no-return basis is unknown.; The Ghidra Program references PDB Comm.pdb (GUID c3062acb-498d-45fa-a233-c8b7e401bb13, age (hex) 1, signature unknown, version RSDS); Ghidra reports load state unknown. Original names and types may be missing; an empty name search does not prove a procedure is absent. Use list_procedures and address-based analysis to inspect recovered functions. REA does not admit a caller-selected PDB companion.; This session uses Ghidra 12.1.2. The bridge is verified against 12.1.4; other 12.1.x builds are accepted and the observed version is reported.; Pseudocode is Ghidra decompiler output, not original source and not text-equivalent to Hopper output.; External functions and functions without an analyzable body return null; other decompiler failures remain explicit.
// pseudocode: provider-specific; not original source


void FUN_1015a274(uint *param_1,char param_2)

{
  code *pcVar1;
  longlong lVar2;
  uint uVar3;
  int *piVar4;
  uint uVar5;
  int iVar6;
  uint *puVar7;
  bool bVar8;
  __int64 _Var9;
  longlong lVar10;
  longlong lVar11;
  undefined8 local_3c;
  uint local_34;
  uint local_30;
  uint local_2c [8];
  int local_c;
  uint local_8;
  
  local_8 = DAT_101d3fec ^ (uint)&stack0xfffffffc;
  if (param_1 == (uint *)0x0) {
    piVar4 = __errno();
    *piVar4 = 0x16;
    FUN_1014f4c6();
    lVar2 = CONCAT44(local_3c._4_4_,(uint)local_3c);
    local_3c._4_4_ = 0xffffffff;
    goto LAB_1015a69c;
  }
  local_3c._0_4_ = param_1[5];
  local_3c._4_4_ = (int)(uint)local_3c >> 0x1f;
  if ((local_3c._4_4_ < 0) ||
     ((((-1 < (int)(uint)local_3c && ((uint)local_3c < 0x45)) || ((int)(uint)local_3c < 0)) ||
      (0x44d < (uint)local_3c)))) {
    piVar4 = __errno();
    lVar2 = CONCAT44(local_3c._4_4_,(uint)local_3c);
  }
  else {
    local_30 = param_1[4];
    if (((int)local_30 < 0) || (0xb < (int)local_30)) {
      uVar5 = (int)local_30 / 0xc;
      local_30 = (int)local_30 % 0xc;
      bVar8 = CARRY4((uint)local_3c,uVar5);
      local_3c._0_4_ = (uint)local_3c + uVar5;
      iVar6 = local_3c._4_4_ + ((int)uVar5 >> 0x1f) + (uint)bVar8;
      param_1[4] = local_30;
      if ((int)local_30 < 0) {
        bVar8 = (uint)local_3c != 0;
        local_3c._0_4_ = (uint)local_3c - 1;
        param_1[4] = local_30 + 0xc;
        iVar6 = iVar6 + -1 + (uint)bVar8;
      }
      lVar2 = CONCAT44(iVar6,(uint)local_3c);
      if ((((-1 < iVar6) &&
           ((0 < iVar6 || (lVar2 = CONCAT44(iVar6,(uint)local_3c), 0x44 < (uint)local_3c)))) &&
          (lVar2 = CONCAT44(iVar6,(uint)local_3c), iVar6 == 0)) &&
         (local_3c._4_4_ = 0, lVar2 = CONCAT44(iVar6,(uint)local_3c), (uint)local_3c < 0x44e))
      goto LAB_1015a35a;
    }
    else {
LAB_1015a35a:
      iVar6 = local_3c._4_4_;
      uVar3 = (uint)local_3c;
      uVar5 = param_1[4];
      local_34 = (&DAT_101ae8a4)[uVar5];
      local_30 = (int)local_34 >> 0x1f;
      bVar8 = __crt_time_is_leap_year<__int64>(CONCAT44(local_3c._4_4_,(uint)local_3c));
      if ((bVar8) && (1 < (int)uVar5)) {
        bVar8 = 0xfffffffe < local_34;
        local_34 = local_34 + 1;
        local_30 = local_30 + bVar8;
      }
      _Var9 = __crt_time_elapsed_leap_years<__int64>(CONCAT44(iVar6,uVar3));
      lVar2 = __allmul(uVar3 - 0x46,iVar6 - (uint)(uVar3 < 0x46),0x16d,0);
      lVar10 = _Var9 + lVar2 + CONCAT44(local_30,local_34);
      local_30 = param_1[3];
      iVar6 = (int)local_30 >> 0x1f;
      lVar2 = lVar10 + (int)local_30;
      if (lVar10 < 0) {
        if ((((int)local_30 < 0 && -1 < iVar6) || (-1 < iVar6)) || (lVar2 < 0)) goto LAB_1015a411;
      }
      else if ((iVar6 < 0) || (-1 < lVar2)) {
LAB_1015a411:
        local_3c = lVar2;
        lVar10 = __allmul(lVar2,0x18,0);
        local_34 = (uint)((ulonglong)lVar10 >> 0x20);
        local_30 = (uint)lVar10;
        if (lVar2 != 0) {
          lVar11 = __alldiv(lVar10,lVar2);
          lVar10 = CONCAT44(local_34,local_30);
          lVar2 = local_3c;
          if (lVar11 != 0x18) goto LAB_1015a499;
        }
        local_34 = (uint)((ulonglong)lVar10 >> 0x20);
        local_30 = (uint)lVar10;
        uVar5 = param_1[2];
        iVar6 = (int)uVar5 >> 0x1f;
        lVar11 = lVar10 + (int)uVar5;
        if (lVar10 < 0) {
          if ((((int)uVar5 < 0 && -1 < iVar6) || (-1 < iVar6)) || (lVar11 < 0)) goto LAB_1015a4b7;
          lVar2 = lVar10 + (int)uVar5;
          if (lVar11 < 0x100000000) {
            lVar2 = lVar10 + (int)uVar5;
          }
        }
        else if ((iVar6 < 0) || (lVar2 = lVar10 + (int)uVar5, -1 < lVar11)) {
LAB_1015a4b7:
          local_3c = lVar11;
          lVar10 = __allmul(lVar11,0x3c,0);
          local_34 = (uint)((ulonglong)lVar10 >> 0x20);
          local_30 = (uint)lVar10;
          if (lVar11 != 0) {
            lVar11 = __alldiv(lVar10,lVar11);
            lVar10 = CONCAT44(local_34,local_30);
            lVar2 = local_3c;
            if (lVar11 != 0x3c) goto LAB_1015a499;
          }
          local_34 = (uint)((ulonglong)lVar10 >> 0x20);
          local_30 = (uint)lVar10;
          uVar5 = param_1[1];
          iVar6 = (int)uVar5 >> 0x1f;
          lVar11 = lVar10 + (int)uVar5;
          if (lVar10 < 0) {
            if ((((int)uVar5 < 0 && -1 < iVar6) || (-1 < iVar6)) || (lVar11 < 0)) goto LAB_1015a54b;
            lVar2 = lVar10 + (int)uVar5;
            if (lVar11 < 0x100000000) {
              lVar2 = lVar10 + (int)uVar5;
            }
          }
          else if ((iVar6 < 0) || (lVar2 = lVar10 + (int)uVar5, -1 < lVar11)) {
LAB_1015a54b:
            local_3c = lVar11;
            lVar10 = __allmul(lVar11,0x3c,0);
            local_34 = (uint)((ulonglong)lVar10 >> 0x20);
            local_30 = (uint)lVar10;
            if (lVar11 != 0) {
              lVar11 = __alldiv(lVar10,lVar11);
              lVar10 = CONCAT44(local_34,local_30);
              lVar2 = local_3c;
              if (lVar11 != 0x3c) goto LAB_1015a499;
            }
            local_34 = (uint)((ulonglong)lVar10 >> 0x20);
            local_30 = (uint)lVar10;
            uVar5 = *param_1;
            iVar6 = (int)uVar5 >> 0x1f;
            local_3c = lVar10 + (int)uVar5;
            if (lVar10 < 0) {
              if ((((int)uVar5 < 0 && -1 < iVar6) || (-1 < iVar6)) || (local_3c < 0))
              goto LAB_1015a5dc;
              lVar2 = lVar10 + (int)uVar5;
              if (local_3c < 0x100000000) {
                lVar2 = lVar10 + (int)uVar5;
              }
            }
            else if ((iVar6 < 0) || (lVar2 = lVar10 + (int)uVar5, -1 < local_3c)) {
LAB_1015a5dc:
              if (param_2 == '\0') {
                iVar6 = FUN_1016326b(local_2c,&local_3c);
                lVar2 = local_3c;
LAB_1015a65d:
                if (iVar6 == 0) {
LAB_1015a667:
                  local_3c._4_4_ = (int)((ulonglong)lVar2 >> 0x20);
                  puVar7 = local_2c;
                  for (iVar6 = 9; iVar6 != 0; iVar6 = iVar6 + -1) {
                    *param_1 = *puVar7;
                    puVar7 = puVar7 + 1;
                    param_1 = param_1 + 1;
                  }
                  goto LAB_1015a69c;
                }
              }
              else {
                ___tzset();
                local_34 = 0;
                local_30 = 0;
                iVar6 = FUN_10163022(&local_34);
                if (iVar6 != 0) {
LAB_1015a6ab:
                  __invoke_watson((wchar_t *)0x0,(wchar_t *)0x0,(wchar_t *)0x0,0,0);
                  pcVar1 = (code *)swi(3);
                  (*pcVar1)();
                  return;
                }
                iVar6 = FUN_1016304e(&local_30);
                if (iVar6 != 0) goto LAB_1015a6ab;
                local_3c = local_3c + (int)local_30;
                iVar6 = FUN_1015a1b3(local_2c,&local_3c);
                lVar2 = local_3c;
                if (iVar6 == 0) {
                  if ((0 < (int)param_1[8]) || (((int)param_1[8] < 0 && (0 < local_c)))) {
                    local_3c = local_3c + (int)local_34;
                    iVar6 = FUN_1015a1b3(local_2c,&local_3c);
                    lVar2 = local_3c;
                    goto LAB_1015a65d;
                  }
                  goto LAB_1015a667;
                }
              }
            }
          }
        }
      }
    }
LAB_1015a499:
    local_3c = lVar2;
    piVar4 = __errno();
    lVar2 = local_3c;
  }
  *piVar4 = 0x16;
  local_3c._4_4_ = 0xffffffff;
LAB_1015a69c:
  __security_check_cookie(local_8 ^ (uint)&stack0xfffffffc,local_3c._4_4_);
  local_3c = lVar2;
  return;
}

