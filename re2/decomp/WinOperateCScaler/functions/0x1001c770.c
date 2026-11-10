// rea decompile_all
// name: FUN_1001c770
// address: 0x1001c770
// body: available
// range: 0x1001c770-0x1001ce15 inclusive
// non_contiguous: false
// provider: Ghidra 12.1.2 (ghidra)
// analysis_profile: b075844f08879296d957518397cd0ddda73db81dce53d00d3f0e702766fc2af6
// limitations: The session serves operations only after Ghidra reports default auto-analysis complete; incomplete analysis does not expose partial results.; The imported Program and temporary project are ephemeral and deleted on close. Annotation operations edit session database metadata; original executable bytes are never written.; Cancelling an active Ghidra request terminates its ephemeral database and discards session annotations. The selected target remains open; the next provider query imports the original artifact again.; Default-space addresses use lowercase 0x-prefixed hexadecimal; other address spaces use <percent-encoded-space>:0x<hex>.; Ghidra Listing reports a terminal call at 0x1001c7fa to 0x10018780 FUN_10018780 (external=false, thunk=false, hasNoReturn=true); fallthrough is excluded by Ghidra's flow model. This records Ghidra's FunctionManager flag, not an independent verification that the callee cannot return.; Ghidra Listing reports a terminal call at 0x1001c84a to 0x10018780 FUN_10018780 (external=false, thunk=false, hasNoReturn=true); fallthrough is excluded by Ghidra's flow model. This records Ghidra's FunctionManager flag, not an independent verification that the callee cannot return.; Ghidra Listing reports a terminal call at 0x1001cdc6 to 0x1016ec51 FUN_1016ec51 (external=false, thunk=false, hasNoReturn=true); fallthrough is excluded by Ghidra's flow model. This records Ghidra's FunctionManager flag, not an independent verification that the callee cannot return.; Ghidra Listing reports a terminal call at 0x1001cdd2 to 0x1016ec51 FUN_1016ec51 (external=false, thunk=false, hasNoReturn=true); fallthrough is excluded by Ghidra's flow model. This records Ghidra's FunctionManager flag, not an independent verification that the callee cannot return.; Ghidra Listing reports a terminal call at 0x1001cdde to 0x1016ec51 FUN_1016ec51 (external=false, thunk=false, hasNoReturn=true); fallthrough is excluded by Ghidra's flow model. This records Ghidra's FunctionManager flag, not an independent verification that the callee cannot return.; Ghidra Listing reports a terminal call at 0x1001cde8 to 0x1016ec51 FUN_1016ec51 (external=false, thunk=false, hasNoReturn=true); fallthrough is excluded by Ghidra's flow model. This records Ghidra's FunctionManager flag, not an independent verification that the callee cannot return.; The Ghidra Program references PDB WinOperateCScaler.pdb (GUID a6737962-efea-4805-8ae6-1fc1ef126554, age (hex) 1, signature unknown, version RSDS); Ghidra reports load state unknown. Original names and types may be missing; an empty name search does not prove a procedure is absent. Use list_procedures and address-based analysis to inspect recovered functions. REA does not admit a caller-selected PDB companion.; This session uses Ghidra 12.1.2. The bridge is verified against 12.1.4; other 12.1.x builds are accepted and the observed version is reported.; Pseudocode is Ghidra decompiler output, not original source and not text-equivalent to Hopper output.; External functions and functions without an analyzable body return null; other decompiler failures remain explicit.
// pseudocode: provider-specific; not original source


/* WARNING: Function: __alloca_probe replaced with injection: alloca_probe */

void FUN_1001c770(undefined4 param_1,undefined4 param_2,undefined4 param_3,undefined4 param_4,
                 undefined4 param_5)

{
  char cVar1;
  void *_Memory;
  void **ppvVar2;
  uint uVar3;
  int *piVar4;
  HMODULE pHVar5;
  undefined4 uVar6;
  char *pcVar7;
  undefined4 *puVar8;
  int iVar9;
  char *pcVar10;
  undefined4 *puVar11;
  void *pvVar12;
  int iVar13;
  undefined4 uVar14;
  undefined1 auStack_443cc [276892];
  undefined1 local_a30 [1840];
  undefined1 *local_300;
  undefined1 local_2fc [128];
  undefined1 local_27c [52];
  undefined4 local_248;
  int local_244;
  undefined4 *local_240;
  int local_23c;
  void *local_238;
  void *local_234;
  uint local_230 [4];
  undefined4 local_220;
  uint local_21c;
  void *local_218 [4];
  undefined4 local_208;
  uint local_204;
  undefined8 local_200;
  int local_1f8;
  int local_1f4;
  undefined1 local_1f0 [316];
  int local_b4;
  undefined1 local_b0 [156];
  uint local_14;
  void *local_10;
  undefined1 *puStack_c;
  int local_8;
  
  puStack_c = &LAB_101962ea;
  local_10 = ExceptionList;
  uVar3 = DAT_10201fec ^ (uint)&stack0xfffffffc;
  ExceptionList = &local_10;
  local_248 = param_2;
  local_204 = 0xf;
  local_208 = 0;
  local_218[0] = (void *)((uint)local_218[0] & 0xffffff00);
  local_8 = 0;
  local_244 = 0;
  local_14 = uVar3;
  FUN_100185a0(param_1);
  local_8._0_1_ = 1;
  piVar4 = (int *)FUN_1001e20a(uVar3);
  if (piVar4 == (int *)0x0) {
                    /* WARNING: Subroutine does not return */
    FUN_10018780(0x80004005);
  }
  local_1f4 = (**(code **)(*piVar4 + 0xc))();
  local_1f4 = local_1f4 + 0x10;
  FUN_10018940();
  local_8._0_1_ = 3;
  _eh_vector_constructor_iterator_(local_1f0,4,0x4f,FUN_1001c3f0,FUN_10018660);
  local_8._0_1_ = 4;
  piVar4 = (int *)FUN_1001e20a();
  if (piVar4 == (int *)0x0) {
                    /* WARNING: Subroutine does not return */
    FUN_10018780(0x80004005);
  }
  local_b4 = (**(code **)(*piVar4 + 0xc))();
  local_b4 = local_b4 + 0x10;
  FUN_10018940();
  local_8._0_1_ = 6;
  _eh_vector_constructor_iterator_(local_b0,4,0x27,FUN_1001c3f0,FUN_10018660);
  local_8._0_1_ = 7;
  local_23c = 0;
  local_240 = (undefined4 *)0x0;
  if (*(int *)(local_244 + -0xc) == 0) goto LAB_1001cd54;
  pHVar5 = GetModuleHandleW(L"WinOperateCScaler.dll");
  uVar6 = FUN_10018b20(local_27c,pHVar5);
  local_8._0_1_ = 8;
  FUN_10019720(uVar6);
  local_8._0_1_ = 7;
  FUN_100196a0();
  uVar6 = FUN_10019ad0(local_27c,&DAT_1020744c,L"IspSetting.ini");
  local_8._0_1_ = 9;
  FUN_10019720(uVar6);
  local_8._0_1_ = 7;
  FUN_100196a0();
  local_234 = (void *)FUN_1001cfa0(0x440f0);
  local_8._0_1_ = 10;
  if (local_234 == (void *)0x0) {
    DAT_10207448 = (void **)0x0;
  }
  else {
    _memset(local_234,0,0x440f0);
    DAT_10207448 = (void **)FUN_100062b0();
  }
  local_8._0_1_ = 7;
  if (DAT_10207448 == (void **)0x0) goto LAB_1001cd54;
  pcVar7 = (char *)thunk_FUN_10019d70();
  if (*pcVar7 == '\0') {
    iVar9 = 0;
  }
  else {
    pcVar10 = pcVar7;
    do {
      cVar1 = *pcVar10;
      pcVar10 = pcVar10 + 1;
    } while (cVar1 != '\0');
    iVar9 = (int)pcVar10 - (int)(pcVar7 + 1);
  }
  FUN_10003c70(pcVar7,iVar9);
  if (DAT_10207448 != local_218) {
    FUN_10003b40(local_218,0,0xffffffff);
  }
  local_300 = local_2fc;
  FUN_1001c640(local_244,3);
  local_8 = CONCAT31(local_8._1_3_,0xb);
  FUN_10001dc0(local_300);
  if (local_300 != local_2fc) {
    FID_conflict__free(local_300);
  }
  local_200 = 0;
  local_1f8 = 0;
  local_8._0_1_ = 0xe;
  iVar9 = FUN_10014cc0(&local_200,local_230);
  if (iVar9 == 0) {
LAB_1001cca8:
  }
  else {
    uVar3 = (local_200._4_4_ - (int)local_200) / 0x18;
    if ((int)uVar3 < 0x29) {
      local_238 = (void *)FUN_1001cfdc(-(uint)((int)((ulonglong)uVar3 * 4 >> 0x20) != 0) |
                                       (uint)((ulonglong)uVar3 * 4));
      if (local_238 == (void *)0x0) goto LAB_1001cca8;
      iVar9 = 0;
      DAT_102073f0 = param_3;
      DAT_102073f4 = param_4;
      DAT_102073f8 = param_5;
      if (0 < (int)uVar3) {
        iVar13 = 0;
        do {
          local_234 = (void *)(*(int *)((int)local_200 + 0x10 + iVar13) + 1);
          uVar6 = FUN_1001cfdc(local_234);
          *(undefined4 *)((int)local_238 + iVar9 * 4) = uVar6;
          puVar11 = (undefined4 *)((int)local_200 + iVar13);
          if (0xf < (uint)puVar11[5]) {
            puVar11 = (undefined4 *)*puVar11;
          }
          FUN_1016bba0(uVar6,puVar11,local_234);
          iVar9 = iVar9 + 1;
          iVar13 = iVar13 + 0x18;
        } while (iVar9 < (int)uVar3);
      }
      iVar9 = FUN_1000c960(uVar3,local_238);
      if (iVar9 == 0) {
LAB_1001cc02:
        local_234 = (void *)0xffffffff;
      }
      else {
        local_234 = (void *)FUN_1001cfa0(0x4399c);
        if (local_234 == (void *)0x0) {
          local_23c = 0;
        }
        else {
          local_23c = FUN_100043a0();
        }
        iVar9 = local_23c;
        local_234 = (void *)FUN_1001cfa0(0x730);
        if (local_234 == (void *)0x0) {
          local_240 = (undefined4 *)0x0;
        }
        else {
          local_240 = (undefined4 *)FUN_1001c420();
        }
        puVar11 = local_240;
        if ((iVar9 == 0) || (local_240 == (undefined4 *)0x0)) goto LAB_1001cc02;
        uVar14 = 0x4399c;
        uVar6 = FUN_100094b0(auStack_443cc);
        FUN_1016bba0(iVar9,uVar6,uVar14);
        puVar8 = (undefined4 *)FUN_10008b50(local_a30);
        for (iVar9 = 0x1cc; iVar9 != 0; iVar9 = iVar9 + -1) {
          *puVar11 = *puVar8;
          puVar8 = puVar8 + 1;
          puVar11 = puVar11 + 1;
        }
        local_234 = (void *)FUN_1001c4e0(local_23c,local_240,local_248);
      }
      pvVar12 = local_238;
      iVar9 = 0;
      if (0 < (int)uVar3) {
        do {
          _Memory = *(void **)((int)pvVar12 + iVar9 * 4);
          if (_Memory != (void *)0x0) {
            FID_conflict__free(_Memory);
            *(undefined4 *)((int)pvVar12 + iVar9 * 4) = 0;
          }
          iVar9 = iVar9 + 1;
        } while (iVar9 < (int)uVar3);
      }
      FID_conflict__free(local_238);
      ppvVar2 = DAT_10207448;
      if (DAT_10207448 != (void **)0x0) {
        FUN_10006e50();
        FUN_101539e9(ppvVar2,0x440f0);
        DAT_10207448 = (void **)0x0;
      }
      if (local_23c != 0) {
        FUN_101539e9(local_23c,0x4399c);
      }
      if (local_240 != (undefined4 *)0x0) {
        FUN_101539e9(local_240,0x730);
      }
    }
  }
  if ((int)local_200 != 0) {
    FUN_10005770((int)local_200,local_200._4_4_,&local_200,local_248);
    FUN_1000fd80((int)local_200,(local_1f8 - (int)local_200) / 0x18);
    local_200 = 0;
    local_1f8 = 0;
  }
  if (0xf < local_21c) {
    FUN_10003d70(local_230[0],local_21c + 1);
  }
  local_21c = 0xf;
  local_220 = 0;
  local_230[0] = local_230[0] & 0xffffff00;
LAB_1001cd54:
  local_8._0_1_ = 4;
  _eh_vector_destructor_iterator_(&local_b4,4,0x28,FUN_10018660);
  local_8._0_1_ = 1;
  _eh_vector_destructor_iterator_(&local_1f4,4,0x50,FUN_10018660);
  local_8 = (uint)local_8._1_3_ << 8;
  LOCK();
  piVar4 = (int *)(local_244 + -4);
  iVar9 = *piVar4;
  *piVar4 = *piVar4 + -1;
  UNLOCK();
  if (iVar9 == 1 || iVar9 + -1 < 0) {
    (**(code **)(**(int **)(local_244 + -0x10) + 4))((undefined4 *)(local_244 + -0x10));
  }
  if (0xf < local_204) {
    pvVar12 = local_218[0];
    if (0xfff < local_204 + 1) {
      if (((uint)local_218[0] & 0x1f) != 0) {
                    /* WARNING: Subroutine does not return */
        FUN_1016ec51();
      }
      pvVar12 = *(void **)((int)local_218[0] + -4);
      if (local_218[0] <= pvVar12) {
                    /* WARNING: Subroutine does not return */
        FUN_1016ec51();
      }
      if ((uint)((int)local_218[0] - (int)pvVar12) < 4) {
                    /* WARNING: Subroutine does not return */
        FUN_1016ec51();
      }
      if (0x23 < (uint)((int)local_218[0] - (int)pvVar12)) {
                    /* WARNING: Subroutine does not return */
        FUN_1016ec51();
      }
    }
    FID_conflict__free(pvVar12);
  }
  ExceptionList = local_10;
  __security_check_cookie(local_14 ^ (uint)&stack0xfffffffc);
  return;
}

