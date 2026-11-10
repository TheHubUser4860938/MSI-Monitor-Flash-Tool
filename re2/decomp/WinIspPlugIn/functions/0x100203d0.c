// rea decompile_all
// name: FUN_100203d0
// address: 0x100203d0
// body: available
// range: 0x100203d0-0x100209ac inclusive
// non_contiguous: false
// provider: Ghidra 12.1.2 (ghidra)
// analysis_profile: b075844f08879296d957518397cd0ddda73db81dce53d00d3f0e702766fc2af6
// limitations: The session serves operations only after Ghidra reports default auto-analysis complete; incomplete analysis does not expose partial results.; The imported Program and temporary project are ephemeral and deleted on close. Annotation operations edit session database metadata; original executable bytes are never written.; Cancelling an active Ghidra request terminates its ephemeral database and discards session annotations. The selected target remains open; the next provider query imports the original artifact again.; Default-space addresses use lowercase 0x-prefixed hexadecimal; other address spaces use <percent-encoded-space>:0x<hex>.; The Ghidra Program references PDB WinIspPlugIn.pdb (GUID d9f398c7-6c98-49a8-af25-a0659d5ad2f3, age (hex) 1, signature unknown, version RSDS); Ghidra reports load state unknown. Original names and types may be missing; an empty name search does not prove a procedure is absent. Use list_procedures and address-based analysis to inspect recovered functions. REA does not admit a caller-selected PDB companion.; This session uses Ghidra 12.1.2. The bridge is verified against 12.1.4; other 12.1.x builds are accepted and the observed version is reported.; Pseudocode is Ghidra decompiler output, not original source and not text-equivalent to Hopper output.; External functions and functions without an analyzable body return null; other decompiler failures remain explicit.
// pseudocode: provider-specific; not original source


void FUN_100203d0(undefined4 param_1,int *param_2)

{
  uint uVar1;
  uint uVar2;
  int *piVar3;
  int in_ECX;
  int iVar4;
  int *piVar5;
  int in_EDX;
  uint *puVar6;
  undefined4 uVar7;
  undefined4 *puVar8;
  uint *puVar9;
  undefined4 *puVar10;
  wchar_t *pwVar11;
  int local_9e0;
  int local_9dc;
  int local_9d8;
  undefined4 local_9d4;
  int local_9d0;
  int local_9cc;
  int *local_9c8;
  undefined4 local_9c4;
  undefined4 *local_9c0;
  undefined4 local_9bc;
  byte local_9b5;
  undefined4 local_9b4;
  undefined1 local_9b0 [1220];
  int local_4ec;
  undefined4 local_4e8;
  uint local_4e4;
  undefined4 local_4e0;
  int local_1c;
  undefined4 local_18;
  uint local_14;
  void *local_10;
  undefined1 *puStack_c;
  undefined4 local_8;
  
  local_8 = 0xffffffff;
  puStack_c = &LAB_101c2056;
  local_10 = ExceptionList;
  uVar2 = DAT_1023dfec ^ (uint)&stack0xfffffffc;
  ExceptionList = &local_10;
  local_9c4 = param_1;
  local_9c8 = param_2;
  local_9b4 = 0;
  local_4ec = 0;
  local_4e8 = 0;
  local_9dc = in_ECX;
  local_9cc = in_EDX;
  local_14 = uVar2;
  _memset(local_9b0,0xff,0x4c4);
  local_9d8 = 0;
  local_9d4 = 0;
  local_9d0 = 0;
  local_8 = 0;
  local_9c0 = (undefined4 *)0x0;
  local_9bc = 0;
  local_9c0 = (undefined4 *)FUN_1000c2b0(uVar2);
  local_8 = CONCAT31(local_8._1_3_,1);
  local_4e4 = 0;
  local_1c = 0;
  local_18 = 0;
  _memset(&local_4e0,0xff,0x4c4);
  puVar6 = &local_4e4;
  puVar9 = &DAT_1024ab24;
  for (iVar4 = 0x134; iVar4 != 0; iVar4 = iVar4 + -1) {
    *puVar9 = *puVar6;
    puVar6 = puVar6 + 1;
    puVar9 = puVar9 + 1;
  }
  piVar3 = local_9c8;
  iVar4 = DAT_1024a360;
  if (DAT_1024e45c == 1) {
    local_9b5 = 0;
    if (DAT_1024a360 != 0) {
      iVar4 = (**(code **)(*DAT_10249d10 + 0xc0))(0x85a);
      if (iVar4 == 0) {
        (**(code **)(*DAT_10249d10 + 0xc4))(0x85a,local_9b5 | 0x20);
      }
      goto LAB_1002093e;
    }
    iVar4 = (**(code **)(*DAT_10249d10 + 0xf8))(0x77,&local_9b5);
    if (iVar4 != 0) goto LAB_1002093e;
    iVar4 = (**(code **)(*DAT_10249d10 + 0xf0))(0x77,local_9b5 | 0x20);
    in_ECX = local_9dc;
    piVar3 = local_9c8;
  }
  local_9c8 = piVar3;
  if (iVar4 != 0) goto LAB_1002093e;
  if (in_ECX != 4) {
    if (((in_ECX == 5) || (in_ECX == 6)) || (in_ECX == 7)) {
      if (DAT_1024a2f0 == 1) {
        FUN_100209b0();
      }
      else {
        FUN_10020d70(local_9c4);
      }
    }
    goto LAB_1002093e;
  }
  iVar4 = *piVar3;
  if (((((iVar4 == 0x39) || (iVar4 == 0x36)) ||
       ((iVar4 == 0x33 || ((iVar4 == 0x38 || (iVar4 == 0x3b)))))) ||
      ((iVar4 == 0x3a ||
       (((((iVar4 == 0x3c || (iVar4 == 0x42)) || (iVar4 == 0x44)) ||
         ((iVar4 == 0x3e || (iVar4 == 0x3f)))) ||
        (((iVar4 == 0x46 || ((iVar4 == 0x41 || (iVar4 == 0x47)))) || (iVar4 == 0x4a)))))))) ||
     (((((iVar4 == 0x48 || (iVar4 == 0x4d)) || (iVar4 == 0x45)) ||
       ((iVar4 == 0x4e || (iVar4 == 0x4f)))) || (iVar4 == 0x50)))) {
    FUN_1002bdf0(&DAT_1024a648);
    FUN_1000b550();
    FUN_1000c880(&DAT_1024a2cc,local_9c8);
    iVar4 = FUN_1001eaf0(*piVar3,0);
    if (iVar4 == 0) {
      if (DAT_1024a38c == 0) goto LAB_100208d6;
      uVar7 = local_9c4;
      if ((DAT_1024a3d8 == 0) || (local_4ec != 0x7000)) goto LAB_10020820;
      iVar4 = FUN_1001eaf0(*piVar3,1);
      if (iVar4 != 0) {
        pwVar11 = L"Get XRom Flag Setting Fail!, ErrorCode: 0x%x";
        goto LAB_1002084e;
      }
      uVar7 = local_9c4;
      if (local_1c == 0x17000) {
        local_9c8 = (int *)0x1;
        piVar3 = (int *)FUN_1002bd00(&local_9dc,&local_9c8);
        if ((undefined4 *)*piVar3 != local_9c0) {
          local_9c8 = (int *)0x1;
          FUN_1002d270(&local_9e0,&local_9c8);
          piVar3 = &local_4e0;
          piVar5 = (int *)(*(int *)(local_9e0 + 0x14) + 0x7000);
          uVar2 = local_4e4;
          while (uVar1 = uVar2 - 4, 3 < uVar2) {
            if (*piVar3 != *piVar5) goto LAB_10020766;
            piVar3 = piVar3 + 1;
            piVar5 = piVar5 + 1;
            uVar2 = uVar1;
          }
          if (uVar1 != 0xfffffffc) {
LAB_10020766:
            if (((char)*piVar3 != (char)*piVar5) ||
               ((uVar1 != 0xfffffffd &&
                ((*(char *)((int)piVar3 + 1) != *(char *)((int)piVar5 + 1) ||
                 ((uVar1 != 0xfffffffe &&
                  ((*(char *)((int)piVar3 + 2) != *(char *)((int)piVar5 + 2) ||
                   ((uVar1 != 0xffffffff &&
                    (*(char *)((int)piVar3 + 3) != *(char *)((int)piVar5 + 3)))))))))))))
            goto LAB_100207a5;
          }
          puVar6 = &local_4e4;
          puVar9 = &DAT_1024ab24;
          for (iVar4 = 0x134; iVar4 != 0; iVar4 = iVar4 + -1) {
            *puVar9 = *puVar6;
            puVar6 = puVar6 + 1;
            puVar9 = puVar9 + 1;
          }
        }
LAB_100207a5:
        iVar4 = FUN_1001e070(&local_9d8,&local_9c0);
        uVar7 = local_9c4;
        if (iVar4 == 0) {
          iVar4 = FUN_1001e380(local_9c4);
          if ((iVar4 != 0) || (iVar4 = FUN_10020220(), iVar4 != 0)) goto LAB_1002093e;
          FUN_10007640(&local_9c0);
          goto LAB_10020820;
        }
      }
      else {
LAB_10020820:
        iVar4 = FUN_1001e070(&local_9d8,&local_9c0);
        if (iVar4 == 0) {
          iVar4 = FUN_1001e380(uVar7);
          if ((iVar4 != 0) || (iVar4 = FUN_10020220(), iVar4 != 0)) goto LAB_1002093e;
          puVar8 = &local_9b4;
          puVar10 = &DAT_1024a654;
          for (iVar4 = 0x134; iVar4 != 0; iVar4 = iVar4 + -1) {
            *puVar10 = *puVar8;
            puVar8 = puVar8 + 1;
            puVar10 = puVar10 + 1;
          }
          FUN_10007640(&local_9c0);
          goto LAB_100208d6;
        }
      }
      pwVar11 = L"GetEraseFlagType Fail!, ErrorCode: 0x%x";
    }
    else {
      pwVar11 = L"Get Flag Map Fail!, ErrorCode: 0x%x";
    }
LAB_1002084e:
    FUN_10048350(&DAT_1024a13c,pwVar11,iVar4);
    FUN_1003fc00();
    FUN_10016860();
  }
  else {
LAB_100208d6:
    if (((DAT_1024a2f0 == 1) && (local_9cc == 1)) && (DAT_1024a2dc == 4)) {
      FUN_10020b60(local_9c4);
    }
  }
LAB_1002093e:
  local_9cc = *local_9c0;
  FUN_1000b550();
  FID_conflict__free(local_9c0);
  if (local_9d8 != 0) {
    FUN_1002c430(local_9d8,(local_9d0 - local_9d8) / 0x18);
  }
  ExceptionList = local_10;
  __security_check_cookie(local_14 ^ (uint)&stack0xfffffffc);
  return;
}

