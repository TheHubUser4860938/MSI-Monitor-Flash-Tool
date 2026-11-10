// rea decompile_all
// name: COleDispatchDriver::InvokeHelperV
// address: 0x4da9de
// body: available
// range: 0x4da9de-0x4dae97 inclusive
// non_contiguous: false
// provider: Ghidra 12.1.2 (ghidra)
// analysis_profile: ac6d50be2cdf54f7005df47d1ed7e7ef55dee595681eb1b7c2e0b00d70cd697d
// limitations: The session serves operations only after Ghidra reports default auto-analysis complete; incomplete analysis does not expose partial results.; The imported Program and temporary project are ephemeral and deleted on close. Annotation operations edit session database metadata; original executable bytes are never written.; Cancelling an active Ghidra request terminates its ephemeral database and discards session annotations. The selected target remains open; the next provider query imports the original artifact again.; Default-space addresses use lowercase 0x-prefixed hexadecimal; other address spaces use <percent-encoded-space>:0x<hex>.; Ghidra Listing reports a terminal call at 0x4dac6b to 0x428b01 FUN_00428b01 (external=false, thunk=false, hasNoReturn=true); fallthrough is excluded by Ghidra's flow model. This records Ghidra's FunctionManager flag, not an independent verification that the callee cannot return.; Ghidra Listing reports a terminal call at 0x4dacfe to 0x429141 FUN_00429141 (external=false, thunk=false, hasNoReturn=true); fallthrough is excluded by Ghidra's flow model. This records Ghidra's FunctionManager flag, not an independent verification that the callee cannot return.; The Ghidra Program references PDB ISPToolForMsi.pdb (GUID b8f2ac8f-1d6f-438d-800f-ed4a14426ac6, age (hex) 1, signature unknown, version RSDS); Ghidra reports load state unknown. Original names and types may be missing; an empty name search does not prove a procedure is absent. Use list_procedures and address-based analysis to inspect recovered functions. REA does not admit a caller-selected PDB companion.; This session uses Ghidra 12.1.2. The bridge is verified against 12.1.4; other 12.1.x builds are accepted and the observed version is reported.; Pseudocode is Ghidra decompiler output, not original source and not text-equivalent to Hopper output.; External functions and functions without an analyzable body return null; other decompiler failures remain explicit.
// pseudocode: provider-specific; not original source


/* WARNING: Function: __EH_prolog3 replaced with injection: EH_prolog3 */
/* WARNING: Function: __EH_epilog3 replaced with injection: EH_epilog3 */
/* Library Function - Single Match
    public: void __thiscall COleDispatchDriver::InvokeHelperV(long,unsigned short,unsigned
   short,void *,unsigned char const *,char *)
   
   Library: Visual Studio 2015 Release */

void __thiscall
COleDispatchDriver::InvokeHelperV
          (COleDispatchDriver *this,long param_1,ushort param_2,ushort param_3,void *param_4,
          uchar *param_5,char *param_6)

{
  byte bVar1;
  uchar uVar2;
  ushort uVar3;
  undefined4 *puVar4;
  longlong lVar5;
  uint uVar6;
  short sVar7;
  void *_Dst;
  int iVar8;
  byte *pbVar9;
  COleDispatchDriver *pCVar10;
  double *pdVar11;
  char *pcVar12;
  int iVar13;
  double *pdVar14;
  undefined2 in_stack_0000000a;
  undefined2 in_stack_0000000e;
  undefined4 local_88;
  undefined4 local_84;
  undefined4 local_80;
  undefined4 local_7c;
  undefined4 local_78;
  code *local_70;
  undefined4 local_6c;
  CArray<CVariantBoolPair,CVariantBoolPair_const&> local_68 [8];
  undefined4 local_60;
  void *local_54;
  undefined4 *local_50;
  uint local_4c;
  undefined4 local_48;
  undefined4 local_44;
  undefined4 uStack_40;
  undefined1 local_3c;
  undefined1 uStack_3b;
  undefined2 uStack_3a;
  undefined4 uStack_38;
  uint *local_34;
  uint *local_30;
  int local_2c;
  undefined4 local_28;
  COleDispatchDriver *local_24;
  undefined4 local_20;
  byte *local_1c;
  ushort *local_18;
  double *local_14;
  undefined4 local_8;
  undefined4 uStack_4;
  
  uStack_4 = 0x78;
  if (*(int *)this != 0) {
    local_54 = (void *)0x0;
    local_50 = (undefined4 *)0x0;
    local_4c = 0;
    local_48 = 0;
    local_8 = 0;
    local_24 = this;
    _memset(&local_54,0,0x10);
    if (param_5 != (uchar *)0x0) {
      local_4c = _strlen((char *)param_5);
    }
    uVar6 = local_4c;
    local_20 = 0xfffffffd;
    if ((param_2 & 0xc) != 0) {
      local_50 = &local_20;
      local_48 = 1;
    }
    CArray<CVariantBoolPair,CVariantBoolPair_const&>::
    CArray<CVariantBoolPair,CVariantBoolPair_const&>(local_68);
    local_8 = CONCAT31(local_8._1_3_,1);
    if (uVar6 != 0) {
      lVar5 = (ulonglong)uVar6 * 0x10;
      _Dst = (void *)FUN_00416444(-(uint)((int)((ulonglong)lVar5 >> 0x20) != 0) | (uint)lVar5);
      local_54 = _Dst;
      _memset(_Dst,0,local_4c << 4);
      local_1c = param_5;
      local_18 = (ushort *)(local_4c * 0x10 + -0x10 + (int)_Dst);
      if (*param_5 != '\0') {
        pdVar14 = (double *)(local_18 + 4);
        pcVar12 = param_6 + -4;
        pdVar11 = (double *)(param_6 + -8);
        do {
          bVar1 = *local_1c;
          *local_18 = (ushort)bVar1;
          if ((bVar1 & 0x40) != 0) {
            *local_18 = bVar1 & 0xffbf | 0x4000;
          }
          uVar3 = *local_18;
          if (0x4002 < uVar3) {
            local_14 = pdVar11;
            switch(uVar3) {
            case 0x4003:
            case 0x4004:
            case 0x4005:
            case 0x4006:
            case 0x4007:
            case 0x4008:
            case 0x4009:
            case 0x400a:
            case 0x400c:
            case 0x400d:
            case 0x4010:
            case 0x4011:
            case 0x4012:
            case 0x4013:
            case 0x4014:
            case 0x4015:
              goto switchD_004daaed_caseD_3;
            case 0x400b:
              local_14 = (double *)((int)pdVar11 + 4);
              local_34 = *(uint **)(pcVar12 + 4);
              local_2c = 0;
              *local_34 = -(uint)(*local_34 != 0) & 0xffff;
              *(uint **)pdVar14 = local_34;
              local_8._0_1_ = 2;
              local_30 = local_34;
              FUN_004da52a(local_60,&local_34);
              local_8 = CONCAT31(local_8._1_3_,1);
              if (local_2c != 0) {
                FUN_0055b3de(local_34,4);
              }
              goto LAB_004dab77;
            default:
              goto switchD_004daaed_caseD_e;
            }
          }
          if (uVar3 == 0x4002) goto switchD_004daaed_caseD_3;
          local_14 = pdVar11;
          switch(uVar3) {
          case 2:
          case 0x12:
            sVar7 = *(short *)(pcVar12 + 4);
            goto LAB_004dab05;
          case 3:
          case 9:
          case 10:
          case 0xd:
          case 0x13:
            goto switchD_004daaed_caseD_3;
          case 4:
            local_14 = pdVar11 + 1;
            pcVar12 = pcVar12 + 8;
            *(float *)pdVar14 = (float)*local_14;
            break;
          case 5:
          case 7:
            local_14 = pdVar11 + 1;
            pcVar12 = pcVar12 + 8;
            *pdVar14 = *local_14;
            break;
          case 6:
            local_14 = (double *)((int)pdVar11 + 4);
            puVar4 = *(undefined4 **)(pcVar12 + 4);
            *(undefined4 *)pdVar14 = *puVar4;
            *(undefined4 *)((int)pdVar14 + 4) = puVar4[1];
            goto LAB_004dab77;
          case 8:
            local_14 = (double *)((int)pdVar11 + 4);
            iVar13 = *(int *)(pcVar12 + 4);
            iVar8 = Ordinal_2(iVar13);
            *(int *)pdVar14 = iVar8;
            if ((iVar13 != 0) && (iVar8 == 0)) {
                    /* WARNING: Subroutine does not return */
              FUN_00429141();
            }
LAB_004dab77:
            pcVar12 = pcVar12 + 4;
            break;
          case 0xb:
            sVar7 = -(ushort)(*(int *)(pcVar12 + 4) != 0);
LAB_004dab05:
            pcVar12 = pcVar12 + 4;
            local_14 = (double *)((int)pdVar11 + 4);
            *(short *)pdVar14 = sVar7;
            break;
          case 0xc:
            local_14 = (double *)((int)pdVar11 + 4);
            pcVar12 = pcVar12 + 4;
            puVar4 = *(undefined4 **)pcVar12;
            *(undefined4 *)local_18 = *puVar4;
            *(undefined4 *)(local_18 + 2) = puVar4[1];
            *(undefined4 *)(local_18 + 4) = puVar4[2];
            *(undefined4 *)(local_18 + 6) = puVar4[3];
            break;
          case 0x10:
          case 0x11:
            local_14 = (double *)((int)pdVar11 + 4);
            pcVar12 = pcVar12 + 4;
            *(char *)pdVar14 = *pcVar12;
            break;
          case 0x14:
          case 0x15:
            local_14 = pdVar11 + 1;
            pcVar12 = pcVar12 + 8;
            *(undefined4 *)pdVar14 = *(undefined4 *)local_14;
            *(undefined4 *)((int)pdVar14 + 4) = *(undefined4 *)((int)pdVar11 + 0xc);
          }
switchD_004daaed_caseD_e:
          local_18 = local_18 + -8;
          pdVar14 = pdVar14 + -2;
          local_1c = local_1c + 1;
          pdVar11 = local_14;
          local_14 = pdVar14;
        } while (*local_1c != 0);
      }
    }
    pCVar10 = (COleDispatchDriver *)0x0;
    FUN_004c8e1e(&local_44);
    _memset(&local_88,0,0x20);
    local_28 = 0xffffffff;
    iVar13 = **(int **)local_24;
    guard_check_icall(*(int **)local_24,param_1,&DAT_005db8c0,0,_param_2,&local_54,
                      -(uint)(param_3 != 0) & (uint)&local_44,&local_88,&local_28);
    pbVar9 = (byte *)(**(code **)(iVar13 + 0x18))();
    local_1c = pbVar9;
    FUN_004da984();
    if (local_4c != 0) {
      iVar13 = (int)local_54 + local_4c * 0x10 + -0x10;
      uVar2 = *param_5;
      pbVar9 = local_1c;
      while (local_1c = pbVar9, uVar2 != '\0') {
        if (*param_5 == '\b') {
          Ordinal_9(iVar13);
        }
        iVar13 = iVar13 + -0x10;
        param_5 = param_5 + 1;
        pbVar9 = local_1c;
        uVar2 = *param_5;
      }
    }
    FID_conflict__free(local_54);
    local_54 = (void *)0x0;
    if ((int)pbVar9 < 0) {
      Ordinal_9(&local_44);
      if (pbVar9 != (byte *)0x80020009) goto LAB_004dac6a;
      if (local_70 != (code *)0x0) {
        guard_check_icall(&local_88);
        (*local_70)();
      }
      local_24 = (COleDispatchDriver *)FUN_00416408(0x20);
      local_8._0_1_ = 3;
      if (local_24 != (COleDispatchDriver *)0x0) {
        pCVar10 = (COleDispatchDriver *)
                  COleDispatchException::COleDispatchException
                            ((COleDispatchException *)local_24,(wchar_t *)0x0,0,(ushort)local_88);
      }
      local_8 = CONCAT31(local_8._1_3_,1);
      iVar13 = Ordinal_7(local_84);
      if (iVar13 != 0) {
        FUN_00415ad0(local_84);
      }
      Ordinal_6(local_84);
      iVar13 = Ordinal_7(local_80);
      if (iVar13 != 0) {
        FUN_00415ad0(local_80);
      }
      Ordinal_6(local_80);
      iVar13 = Ordinal_7(local_7c);
      if (iVar13 != 0) {
        FUN_00415b10(local_7c);
      }
      Ordinal_6(local_7c);
      *(undefined4 *)(pCVar10 + 0x10) = local_78;
      *(undefined4 *)(pCVar10 + 0x1c) = local_6c;
      local_24 = pCVar10;
      __CxxThrowException_8(&local_24,&DAT_00600580);
    }
    if (param_3 != 0) {
      if ((param_3 != 0xc) &&
         (pbVar9 = (byte *)Ordinal_12(&local_44,&local_44,pCVar10,_param_3), (int)pbVar9 < 0)) {
        Ordinal_9(&local_44);
LAB_004dac6a:
                    /* WARNING: Subroutine does not return */
        FUN_00428b01(pbVar9);
      }
      switch(param_3) {
      case 2:
      case 0x12:
        *(ushort *)param_4 = CONCAT11(uStack_3b,local_3c);
        break;
      case 3:
      case 9:
      case 10:
      case 0xd:
      case 0x13:
        *(uint *)param_4 = CONCAT22(uStack_3a,CONCAT11(uStack_3b,local_3c));
        break;
      case 4:
        *(uint *)param_4 = CONCAT22(uStack_3a,CONCAT11(uStack_3b,local_3c));
        break;
      case 5:
      case 7:
        *(ulonglong *)param_4 = CONCAT44(uStack_38,CONCAT22(uStack_3a,CONCAT11(uStack_3b,local_3c)))
        ;
        break;
      case 6:
      case 0x14:
      case 0x15:
        *(uint *)param_4 = CONCAT22(uStack_3a,CONCAT11(uStack_3b,local_3c));
        *(undefined4 *)((int)param_4 + 4) = uStack_38;
        break;
      case 8:
        AfxBSTR2CString(param_4,(wchar_t *)CONCAT22(uStack_3a,CONCAT11(uStack_3b,local_3c)));
        Ordinal_6(CONCAT22(uStack_3a,CONCAT11(uStack_3b,local_3c)));
        break;
      case 0xb:
        *(uint *)param_4 = (uint)(CONCAT11(uStack_3b,local_3c) != 0);
        break;
      case 0xc:
        *(undefined4 *)param_4 = local_44;
        *(undefined4 *)((int)param_4 + 4) = uStack_40;
        *(uint *)((int)param_4 + 8) = CONCAT22(uStack_3a,CONCAT11(uStack_3b,local_3c));
        *(undefined4 *)((int)param_4 + 0xc) = uStack_38;
        break;
      case 0x10:
      case 0x11:
        *(undefined1 *)param_4 = local_3c;
      }
    }
    CArray<CVariantBoolPair,CVariantBoolPair_const&>::
    ~CArray<CVariantBoolPair,CVariantBoolPair_const&>(local_68);
    if (local_54 != (void *)0x0) {
      FID_conflict__free(local_54);
    }
  }
  return;
switchD_004daaed_caseD_3:
  pcVar12 = pcVar12 + 4;
  *(undefined4 *)pdVar14 = *(undefined4 *)pcVar12;
  local_14 = (double *)((int)pdVar11 + 4);
  goto switchD_004daaed_caseD_e;
}

