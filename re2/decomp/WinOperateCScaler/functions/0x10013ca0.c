// rea decompile_all
// name: FUN_10013ca0
// address: 0x10013ca0
// body: available
// range: 0x10013ca0-0x100140d9 inclusive
// range: 0x100140e0-0x100146c8 inclusive
// non_contiguous: true
// provider: Ghidra 12.1.2 (ghidra)
// analysis_profile: b075844f08879296d957518397cd0ddda73db81dce53d00d3f0e702766fc2af6
// limitations: The session serves operations only after Ghidra reports default auto-analysis complete; incomplete analysis does not expose partial results.; The imported Program and temporary project are ephemeral and deleted on close. Annotation operations edit session database metadata; original executable bytes are never written.; Cancelling an active Ghidra request terminates its ephemeral database and discards session annotations. The selected target remains open; the next provider query imports the original artifact again.; Default-space addresses use lowercase 0x-prefixed hexadecimal; other address spaces use <percent-encoded-space>:0x<hex>.; Ghidra Listing reports a terminal call at 0x10014556 to 0x1015505c FUN_1015505c (external=false, thunk=false, hasNoReturn=true); fallthrough is excluded by Ghidra's flow model. This records Ghidra's FunctionManager flag, not an independent verification that the callee cannot return.; Ghidra Listing reports a terminal call at 0x1001455b to 0x1016ec51 FUN_1016ec51 (external=false, thunk=false, hasNoReturn=true); fallthrough is excluded by Ghidra's flow model. This records Ghidra's FunctionManager flag, not an independent verification that the callee cannot return.; The Ghidra Program references PDB WinOperateCScaler.pdb (GUID a6737962-efea-4805-8ae6-1fc1ef126554, age (hex) 1, signature unknown, version RSDS); Ghidra reports load state unknown. Original names and types may be missing; an empty name search does not prove a procedure is absent. Use list_procedures and address-based analysis to inspect recovered functions. REA does not admit a caller-selected PDB companion.; This session uses Ghidra 12.1.2. The bridge is verified against 12.1.4; other 12.1.x builds are accepted and the observed version is reported.; Pseudocode is Ghidra decompiler output, not original source and not text-equivalent to Hopper output.; External functions and functions without an analyzable body return null; other decompiler failures remain explicit.
// pseudocode: provider-specific; not original source


void FUN_10013ca0(short *param_1,short *param_2,short *param_3,short *param_4,undefined4 param_5,
                 undefined4 param_6)

{
  short sVar1;
  undefined4 ***pppuVar2;
  undefined1 uVar3;
  undefined2 uVar4;
  undefined4 *puVar5;
  undefined4 uVar6;
  int *piVar7;
  uint uVar8;
  int iVar9;
  int **ppiVar10;
  ushort *puVar11;
  undefined4 ****ppppuVar12;
  short ****ppppsVar13;
  short ***pppsVar14;
  int iVar15;
  short *psVar16;
  ushort *puVar17;
  short ****_Memory;
  undefined1 local_984 [4];
  int *local_980;
  undefined1 local_97c [4];
  int *local_978;
  undefined4 local_974 [5];
  uint local_960;
  short *local_95c;
  int local_958;
  undefined1 local_954 [92];
  int local_8f8;
  undefined8 local_89c;
  undefined1 local_894 [4];
  int *local_890;
  undefined4 local_88c;
  undefined4 local_87c;
  uint local_878;
  undefined4 ***local_874 [4];
  undefined4 local_864;
  uint local_860;
  undefined4 local_85c;
  uint local_84c;
  uint local_848;
  undefined4 local_844;
  uint local_834;
  uint local_830;
  short ***local_82c [4];
  short **local_81c;
  short **local_818;
  short local_814;
  undefined1 local_812 [2046];
  uint local_14;
  void *local_10;
  undefined1 *puStack_c;
  undefined4 local_8;
  
  local_8 = 0xffffffff;
  puStack_c = &LAB_10195897;
  local_10 = ExceptionList;
  local_14 = DAT_10201fec ^ (uint)&stack0xfffffffc;
  ExceptionList = &local_10;
  local_95c = param_4;
  local_818 = (short **)0x7;
  local_81c = (short **)0x0;
  local_82c[0] = (short ***)((uint)local_82c[0] & 0xffff0000);
  FUN_100160a0(&DAT_101a63a8,0);
  local_848 = 7;
  local_84c = 0;
  local_85c = (ushort *)((uint)local_85c._2_2_ << 0x10);
  local_878 = 7;
  local_87c = 0;
  local_88c = (undefined4 *)((uint)local_88c._2_2_ << 0x10);
  local_830 = 7;
  local_834 = 0;
  local_844 = (ushort *)((uint)local_844._2_2_ << 0x10);
  local_8._0_1_ = 3;
  local_8._1_3_ = 0;
  local_958 = 0;
  FUN_100160a0(&DAT_101a782c,1);
  if (*param_1 == 0) {
    iVar15 = 0;
  }
  else {
    psVar16 = param_1;
    do {
      sVar1 = *psVar16;
      psVar16 = psVar16 + 1;
    } while (sVar1 != 0);
    iVar15 = (int)psVar16 - (int)(param_1 + 1) >> 1;
  }
  FUN_1000f990(param_1,iVar15);
  FUN_1000f990(&DAT_101a7830,1);
  if (*param_2 == 0) {
    iVar15 = 0;
  }
  else {
    psVar16 = param_2;
    do {
      sVar1 = *psVar16;
      psVar16 = psVar16 + 1;
    } while (sVar1 != 0);
    iVar15 = (int)psVar16 - (int)(param_2 + 1) >> 1;
  }
  FUN_100160a0(param_2,iVar15);
  _memset(local_954,0,0xb8);
  FUN_10013100(param_6,1,0x40,1);
  local_8._0_1_ = 4;
  local_89c = 0;
  FUN_100134d0(&PTR_101a6410,0x3f);
  local_8._0_1_ = 5;
  FUN_10017160(local_894,&local_89c);
  local_8._0_1_ = 6;
  if ((local_890 != (int *)0x0) &&
     (puVar5 = (undefined4 *)(**(code **)(*local_890 + 8))(), puVar5 != (undefined4 *)0x0)) {
    (**(code **)*puVar5)(1);
  }
  local_8._0_1_ = 5;
  if (local_8f8 == 0) {
    psVar16 = param_3;
    do {
      sVar1 = *psVar16;
      *(short *)((int)psVar16 + ((int)local_95c - (int)param_3)) = sVar1;
      psVar16 = psVar16 + 1;
    } while (sVar1 != 0);
  }
  else {
    iVar15 = 0;
    while( true ) {
      uVar6 = FUN_100103a0(local_97c);
      local_8._0_1_ = 7;
      piVar7 = (int *)FUN_10012f20(uVar6);
      local_8._0_1_ = 8;
      if ((local_978 != (int *)0x0) &&
         (puVar5 = (undefined4 *)(**(code **)(*local_978 + 8))(), puVar5 != (undefined4 *)0x0)) {
        (**(code **)*puVar5)(1);
      }
      local_8._0_1_ = 5;
      uVar4 = (**(code **)(*piVar7 + 0x30))(10);
      piVar7 = (int *)FUN_10016e10(&local_814,0x400,0,uVar4);
      if (((*(byte *)(*(int *)(*piVar7 + 4) + 0xc + (int)piVar7) & 6) != 0) || (iVar15 != 0)) break;
      if (local_814 == 0) {
        iVar15 = 0;
      }
      else {
        psVar16 = &local_814;
        do {
          sVar1 = *psVar16;
          psVar16 = psVar16 + 1;
        } while (sVar1 != 0);
        iVar15 = (int)psVar16 - (int)local_812 >> 1;
      }
      FUN_100160a0(&local_814,iVar15);
      if (local_834 != 0) {
        uVar6 = FUN_10016b60(0x20,0);
        FUN_100169c0(0,uVar6);
        iVar15 = FUN_10016c60(0x20,0xffffffff);
        uVar8 = iVar15 + 1;
        if (local_834 < uVar8) {
LAB_10014551:
                    /* WARNING: Subroutine does not return */
          FUN_1015505c("invalid string position");
        }
        local_834 = uVar8;
        puVar17 = (ushort *)&local_844;
        if (7 < local_830) {
          puVar17 = local_844;
        }
        puVar17[uVar8] = 0;
      }
      puVar17 = (ushort *)&local_844;
      if (7 < local_830) {
        puVar17 = local_844;
      }
      puVar11 = (ushort *)&local_85c;
      if (7 < local_848) {
        puVar11 = local_85c;
      }
      uVar8 = local_834;
      if (local_84c < local_834) {
        uVar8 = local_84c;
      }
      for (; uVar8 != 0; uVar8 = uVar8 - 1) {
        if (*puVar11 != *puVar17) {
          iVar9 = (-(uint)(*puVar11 < *puVar17) & 0xfffffffe) + 1;
          goto LAB_10014020;
        }
        puVar11 = puVar11 + 1;
        puVar17 = puVar17 + 1;
      }
      iVar9 = 0;
LAB_10014020:
      iVar15 = local_958;
      if (((iVar9 == 0) && (local_834 <= local_84c)) &&
         (uVar3 = (undefined1)local_8, local_84c == local_834)) {
        while( true ) {
          local_8._0_1_ = uVar3;
          uVar6 = FUN_100103a0(local_984);
          local_8._0_1_ = 9;
          piVar7 = (int *)FUN_10012f20(uVar6);
          local_8._0_1_ = 10;
          if ((local_980 != (int *)0x0) &&
             (puVar5 = (undefined4 *)(**(code **)(*local_980 + 8))(), puVar5 != (undefined4 *)0x0))
          {
            (**(code **)*puVar5)(1);
          }
          local_8._0_1_ = 5;
          uVar4 = (**(code **)(*piVar7 + 0x30))(10);
          piVar7 = (int *)FUN_10016e10(&local_814,0x400,0,uVar4);
          if (((*(byte *)(*(int *)(*piVar7 + 4) + 0xc + (int)piVar7) & 6) != 0) || (iVar15 != 0))
          break;
          if (local_814 == 0) {
            iVar9 = 0;
          }
          else {
            psVar16 = &local_814;
            do {
              sVar1 = *psVar16;
              psVar16 = psVar16 + 1;
            } while (sVar1 != 0);
            iVar9 = (int)psVar16 - (int)local_812 >> 1;
          }
          FUN_100160a0(&local_814,iVar9);
          if (local_834 != 0) {
            local_890 = (int *)0x20;
            puVar17 = (ushort *)&local_844;
            if (7 < local_830) {
              puVar17 = local_844;
            }
            puVar11 = puVar17 + local_834;
            for (; puVar17 < puVar11; puVar17 = puVar17 + 1) {
              ppiVar10 = &local_890;
              iVar15 = 1;
              while (*(ushort *)ppiVar10 != *puVar17) {
                ppiVar10 = (int **)((int)ppiVar10 + 2);
                iVar15 = iVar15 + -1;
                if (iVar15 == 0) {
                  puVar11 = (ushort *)&local_844;
                  if (7 < local_830) {
                    puVar11 = local_844;
                  }
                  iVar15 = (int)puVar17 - (int)puVar11 >> 1;
                  goto LAB_100141bd;
                }
              }
            }
            iVar15 = -1;
LAB_100141bd:
            FUN_100169c0(0,iVar15);
            iVar15 = FUN_10016c60(0x20,0xffffffff);
            uVar8 = iVar15 + 1;
            if (local_834 < uVar8) goto LAB_10014551;
            puVar17 = (ushort *)&local_844;
            if (7 < local_830) {
              puVar17 = local_844;
            }
            local_834 = uVar8;
            puVar17[uVar8] = 0;
            iVar15 = local_958;
          }
          local_860 = 7;
          local_864 = 0;
          local_874[0] = (undefined4 ***)((uint)local_874[0] & 0xffff0000);
          FUN_100160a0(&DAT_101a7834,1);
          uVar8 = local_860;
          pppuVar2 = local_874[0];
          local_8._0_1_ = 0xb;
          ppppuVar12 = local_874;
          if (7 < local_860) {
            ppppuVar12 = (undefined4 ****)local_874[0];
          }
          iVar9 = FUN_10016a70(ppppuVar12,0,local_864);
          if (iVar9 == -1) {
            if (7 < uVar8) {
              FUN_1000fd20(pppuVar2,uVar8 + 1);
            }
            goto LAB_100145b2;
          }
          ppppsVar13 = (short ****)FUN_10017f20(local_974,0,iVar9);
          local_8._0_1_ = 0xc;
          uVar3 = (undefined1)local_8;
          local_8._0_1_ = 0xc;
          if (local_82c != ppppsVar13) {
            if ((short ***)0x7 < local_818) {
              if ((0x7fffffff < (int)local_818 + 1U) ||
                 ((_Memory = (short ****)local_82c[0], 0xfff < ((int)local_818 + 1U) * 2 &&
                  ((((((uint)local_82c[0] & 0x1f) != 0 ||
                     (_Memory = (short ****)local_82c[0][-1], local_82c[0] <= _Memory)) ||
                    ((uint)((int)local_82c[0] - (int)_Memory) < 4)) ||
                   (0x23 < (uint)((int)local_82c[0] - (int)_Memory))))))) {
                local_8._0_1_ = uVar3;
                    /* WARNING: Subroutine does not return */
                FUN_1016ec51();
              }
              FID_conflict__free(_Memory);
            }
            local_818 = (short **)0x7;
            local_81c = (short **)0x0;
            local_82c[0] = (short ***)((uint)local_82c[0] & 0xffff0000);
            if (ppppsVar13[5] < (short ***)0x8) {
              if ((int)ppppsVar13[4] + 1 != 0) {
                FUN_1016b1e0(local_82c,ppppsVar13,((int)ppppsVar13[4] + 1) * 2);
              }
            }
            else {
              local_82c[0] = *ppppsVar13;
              *ppppsVar13 = (short ***)0x0;
            }
            local_81c = (short **)ppppsVar13[4];
            local_818 = (short **)ppppsVar13[5];
            ppppsVar13[5] = (short ***)0x7;
            ppppsVar13[4] = (short ***)0x0;
            if ((short ***)0x7 < ppppsVar13[5]) {
              ppppsVar13 = (short ****)*ppppsVar13;
            }
            *(undefined2 *)ppppsVar13 = 0;
          }
          local_8._0_1_ = 0xb;
          if (7 < local_960) {
            FUN_1000fd20(local_974[0],local_960 + 1);
          }
          if ((short ***)local_81c != (short ***)0x0) {
            uVar6 = FUN_10016b60(0x20,0);
            FUN_100169c0(0,uVar6);
            iVar9 = FUN_10016c60(0x20,0xffffffff);
            pppsVar14 = (short ***)(iVar9 + 1);
            if (local_81c < pppsVar14) goto LAB_10014551;
            ppppsVar13 = local_82c;
            if ((short ***)0x7 < local_818) {
              ppppsVar13 = (short ****)local_82c[0];
            }
            local_81c = (short **)pppsVar14;
            *(short *)((int)ppppsVar13 + (int)pppsVar14 * 2) = 0;
          }
          ppppsVar13 = local_82c;
          if ((short ***)0x7 < local_818) {
            ppppsVar13 = (short ****)local_82c[0];
          }
          puVar5 = &local_88c;
          if (7 < local_878) {
            puVar5 = local_88c;
          }
          iVar9 = FUN_10015f10(puVar5,local_87c,ppppsVar13,local_81c);
          if (iVar9 == 0) {
            iVar15 = FUN_10017b30(&DAT_101a7834,0xffffffff,1);
            ppppsVar13 = (short ****)FUN_10017f20(local_974,iVar15 + 1,0xffffffff);
            if (local_82c != ppppsVar13) {
              if ((short ***)0x7 < local_818) {
                FUN_1000fd20(local_82c[0],(int)local_818 + 1);
              }
              local_818 = (short **)0x7;
              local_81c = (short **)0x0;
              local_82c[0] = (short ***)((uint)local_82c[0] & 0xffff0000);
              FUN_10015590(ppppsVar13);
            }
            local_8._0_1_ = 0xb;
            if (7 < local_960) {
              FUN_1000fd20(local_974[0],local_960 + 1);
            }
            FUN_100153d0(local_82c);
            ppppsVar13 = local_82c;
            psVar16 = local_95c;
            if ((short ***)0x7 < local_818) {
              ppppsVar13 = (short ****)local_82c[0];
            }
            do {
              sVar1 = *(short *)ppppsVar13;
              ppppsVar13 = (short ****)((int)ppppsVar13 + 2);
              *psVar16 = sVar1;
              psVar16 = psVar16 + 1;
            } while (sVar1 != 0);
            iVar15 = 1;
            local_958 = 1;
          }
          local_8._0_1_ = 5;
          uVar3 = (undefined1)local_8;
          local_8._0_1_ = 5;
          if (7 < local_860) {
            FUN_1000fd20(local_874[0],local_860 + 1);
            uVar3 = (undefined1)local_8;
          }
        }
      }
    }
    FUN_10016260();
    if (iVar15 == 0) {
      psVar16 = param_3;
      do {
        sVar1 = *psVar16;
        *(short *)((int)psVar16 + ((int)local_95c - (int)param_3)) = sVar1;
        psVar16 = psVar16 + 1;
      } while (sVar1 != 0);
    }
  }
LAB_100145b2:
  local_8 = CONCAT31(local_8._1_3_,0xe);
  if ((local_89c._4_4_ != (int *)0x0) &&
     (puVar5 = (undefined4 *)(**(code **)(*local_89c._4_4_ + 8))(), puVar5 != (undefined4 *)0x0)) {
    (**(code **)*puVar5)(1);
  }
  FUN_10013830();
  if (7 < local_830) {
    FUN_1000fd20(local_844,local_830 + 1);
  }
  local_830 = 7;
  local_844 = (ushort *)((uint)local_844 & 0xffff0000);
  local_834 = 0;
  if (7 < local_878) {
    FUN_1000fd20(local_88c,local_878 + 1);
  }
  local_878 = 7;
  local_88c = (undefined4 *)((uint)local_88c & 0xffff0000);
  local_87c = 0;
  if (7 < local_848) {
    FUN_1000fd20(local_85c,local_848 + 1);
  }
  local_848 = 7;
  local_84c = 0;
  local_85c = (ushort *)((uint)local_85c & 0xffff0000);
  if ((short ***)0x7 < local_818) {
    FUN_1000fd20(local_82c[0],(int)local_818 + 1);
  }
  ExceptionList = local_10;
  __security_check_cookie(local_14 ^ (uint)&stack0xfffffffc);
  return;
}

