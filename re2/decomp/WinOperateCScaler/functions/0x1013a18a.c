// rea decompile_all
// name: FUN_1013a18a
// address: 0x1013a18a
// body: available
// range: 0x1013a18a-0x1013a56e inclusive
// non_contiguous: false
// provider: Ghidra 12.1.2 (ghidra)
// analysis_profile: b075844f08879296d957518397cd0ddda73db81dce53d00d3f0e702766fc2af6
// limitations: The session serves operations only after Ghidra reports default auto-analysis complete; incomplete analysis does not expose partial results.; The imported Program and temporary project are ephemeral and deleted on close. Annotation operations edit session database metadata; original executable bytes are never written.; Cancelling an active Ghidra request terminates its ephemeral database and discards session annotations. The selected target remains open; the next provider query imports the original artifact again.; Default-space addresses use lowercase 0x-prefixed hexadecimal; other address spaces use <percent-encoded-space>:0x<hex>.; Ghidra Listing reports a terminal call at 0x1013a56d to 0x1013a592 FUN_1013a592 (external=false, thunk=false, hasNoReturn=false); fallthrough is excluded by Ghidra's flow model. The reason for the terminal flow is not established by this observation.; The Ghidra Program references PDB WinOperateCScaler.pdb (GUID a6737962-efea-4805-8ae6-1fc1ef126554, age (hex) 1, signature unknown, version RSDS); Ghidra reports load state unknown. Original names and types may be missing; an empty name search does not prove a procedure is absent. Use list_procedures and address-based analysis to inspect recovered functions. REA does not admit a caller-selected PDB companion.; This session uses Ghidra 12.1.2. The bridge is verified against 12.1.4; other 12.1.x builds are accepted and the observed version is reported.; Pseudocode is Ghidra decompiler output, not original source and not text-equivalent to Hopper output.; External functions and functions without an analyzable body return null; other decompiler failures remain explicit.
// pseudocode: provider-specific; not original source


/* WARNING: Function: __EH_prolog3_catch replaced with injection: EH_prolog3 */
/* WARNING: Function: __EH_epilog3 replaced with injection: EH_epilog3 */

int FUN_1013a18a(int *param_1,undefined4 param_2,void *param_3,undefined4 param_4,uint param_5,
                undefined4 *param_6,tagVARIANT *param_7,undefined4 param_8,uint *param_9)

{
  code *pcVar1;
  int iVar2;
  AFX_DISPMAP_ENTRY *pAVar3;
  uint uVar4;
  short **ppsVar5;
  CCmdTarget *pCVar6;
  int iVar7;
  undefined4 local_7c;
  undefined4 uStack_78;
  int *local_74;
  undefined4 uStack_70;
  short local_6c [4];
  int *local_64;
  short *local_5c;
  int *piStack_58;
  int local_54;
  int iStack_50;
  short *local_4c;
  int *local_48;
  uint local_44;
  int local_40;
  uint local_38;
  uint local_30;
  CCmdTarget *local_2c;
  AFX_DISPMAP_ENTRY *local_28;
  uint local_24;
  short *local_20;
  int local_1c;
  undefined4 local_8;
  undefined4 uStack_4;
  
  uStack_4 = 0x6c;
  local_8 = 0x1013a196;
  pCVar6 = (CCmdTarget *)(param_1 + -4);
  if (param_6 == (undefined4 *)0x0) {
    return -0x7ff8ffa9;
  }
  local_2c = pCVar6;
  if (param_7 != (tagVARIANT *)0x0) {
    FUN_10026450(param_7);
  }
  iVar2 = _memcmp(param_3,&DAT_101d4824,0x10);
  if (iVar2 != 0) {
    return -0x7ffdffff;
  }
  pcVar1 = *(code **)(*(int *)pCVar6 + 0x14);
  guard_check_icall(param_2);
  iVar2 = (*pcVar1)();
  if (iVar2 == 0) {
    return -0x7fff0001;
  }
  local_4c = (short *)*param_6;
  local_48 = (int *)param_6[1];
  local_44 = param_6[2];
  local_40 = param_6[3];
  if ((local_40 != 0) && ((local_40 != 1 || (*local_48 != -3)))) {
    return -0x7ffdfff9;
  }
  pAVar3 = CCmdTarget::GetDispEntry((long)pCVar6);
  if (pAVar3 == (AFX_DISPMAP_ENTRY *)0x0) {
    return -0x7ffdfffd;
  }
  local_28 = pAVar3;
  if ((short)param_5 == 1) {
    if (*(int *)(pAVar3 + 0x10) == 0) {
      if (*(int *)(pAVar3 + 0x14) != 0) {
        iVar2 = *(int *)(pAVar3 + 0x14);
        goto joined_r0x1013a269;
      }
    }
    else {
      iVar2 = *(int *)(pAVar3 + 0x14);
joined_r0x1013a269:
      if (iVar2 == 0) goto LAB_1013a290;
    }
    if (*(int *)(pAVar3 + 8) == 0) {
      uVar4 = 0;
    }
    else {
      uVar4 = _strlen(*(char **)(pAVar3 + 8));
    }
    if (uVar4 < local_44) {
      param_5 = 8;
      local_40 = 1;
    }
    else {
      param_5 = 2;
    }
  }
LAB_1013a290:
  local_30 = param_5 & 0xc;
  if (((local_30 != 0) && (param_7 = (tagVARIANT *)0x0, *(int *)(pAVar3 + 0x10) != 0)) &&
     (*(int *)(pAVar3 + 0x14) == 0)) {
    return -0x7ffdfffb;
  }
  local_24 = 0xffffffff;
  local_7c = CONCAT22(local_7c._2_2_,10);
  local_20 = (short *)0x0;
  FUN_10026450(local_6c);
  if ((ushort)param_5 == 4) {
    if ((*local_4c == 9) && (*(int *)(local_4c + 4) != 0)) {
      local_20 = local_4c;
      local_7c = *(undefined4 *)local_4c;
      uStack_78 = *(undefined4 *)(local_4c + 2);
      local_74 = *(int **)(local_4c + 4);
      uStack_70 = *(undefined4 *)(local_4c + 6);
      FUN_10026450(local_4c);
      _memset(&local_5c,0,0x10);
      iVar2 = *local_74;
      guard_check_icall(local_74,0,param_3,param_4,2,&local_5c,local_4c,param_8,param_9);
      iVar2 = (**(code **)(iVar2 + 0x18))();
      local_1c = iVar2;
      if (iVar2 == 0) {
        local_1c = 0;
        pAVar3 = local_28;
        goto LAB_1013a33e;
      }
    }
    else {
LAB_1013a33e:
      if (*(short *)(pAVar3 + 0xc) != 9) goto LAB_1013a48a;
      _memset(&local_5c,0,0x10);
      if (*(int *)(pAVar3 + 8) == 0) {
        iVar2 = *param_1;
        guard_check_icall(param_1,param_2,param_3,param_4,3,&local_5c,local_6c,param_8,param_9);
        local_1c = (**(code **)(iVar2 + 0x18))();
        if (local_1c == 0) {
          if ((local_6c[0] != 9) || (local_64 == (int *)0x0)) goto LAB_1013a3cc;
          ppsVar5 = &local_4c;
LAB_1013a3ad:
          local_1c = 0;
          iVar2 = *local_64;
          guard_check_icall(local_64,0,param_3,param_4,4,ppsVar5,param_7,param_8,param_9);
          local_1c = (**(code **)(iVar2 + 0x18))();
        }
      }
      else {
        local_5c = local_4c + 8;
        local_54 = local_44 - 1;
        iVar2 = *param_1;
        guard_check_icall(param_1,param_2,param_3,param_4,3,&local_5c,local_6c,param_8,param_9);
        local_1c = (**(code **)(iVar2 + 0x18))();
        if (local_1c == 0) {
          if ((local_6c[0] == 9) && (local_64 != (int *)0x0)) {
            local_54 = local_40;
            local_5c = local_4c;
            piStack_58 = local_48;
            iStack_50 = local_40;
            ppsVar5 = &local_5c;
            goto LAB_1013a3ad;
          }
LAB_1013a3cc:
          local_1c = -0x7ffdfffb;
        }
      }
      iVar2 = local_1c;
      Ordinal_9(local_6c);
      iVar7 = local_1c;
      if (iVar2 != -0x7ffdfffd) goto LAB_1013a661;
    }
    iVar7 = local_1c;
    if (iVar2 != -0x7ffdfffd) goto LAB_1013a661;
    pAVar3 = local_28;
    if (local_20 != (short *)0x0) {
      local_20 = (short *)0x0;
      Ordinal_9(local_4c);
      *(undefined4 *)local_4c = local_7c;
      *(undefined4 *)(local_4c + 2) = uStack_78;
      *(int **)(local_4c + 4) = local_74;
      *(undefined4 *)(local_4c + 6) = uStack_70;
      pAVar3 = local_28;
    }
  }
LAB_1013a48a:
  local_1c = 0;
  local_38 = local_44;
  if ((param_5 & 3) == 0) {
LAB_1013a4e7:
    if ((1 < local_44) && ((short)local_30 != 0)) {
      if (*(int *)(pAVar3 + 0x10) != 0) goto LAB_1013a519;
      iVar7 = -0x7ffdfff2;
      goto LAB_1013a661;
    }
  }
  else {
    if ((param_5 & 1) == 0) {
      if (*(short *)(pAVar3 + 0xc) == 0) {
        return -0x7ffdfff2;
      }
      if (param_7 == (tagVARIANT *)0x0) {
        return -0x7ffdfff1;
      }
    }
    if ((*(int *)(pAVar3 + 8) != 0) || (local_44 == 0)) goto LAB_1013a4e7;
    if (*(short *)(pAVar3 + 0xc) != 9) {
      return -0x7ffdfff2;
    }
    local_44 = 0;
    if (param_7 == (tagVARIANT *)0x0) {
      param_7 = (tagVARIANT *)local_6c;
      goto LAB_1013a4e7;
    }
  }
  if (((*(int *)(pAVar3 + 0x10) != 0) || (local_44 != 0)) || (param_7 != (tagVARIANT *)0x0)) {
LAB_1013a519:
    local_8 = 0;
    local_30 = *(uint *)(local_2c + 0x14);
    *(uint *)(local_2c + 0x14) = (uint)(param_7 != (tagVARIANT *)0x0);
    if (*(int *)(pAVar3 + 0x10) == 0) {
      if (local_44 == 0) {
        CCmdTarget::GetStandardProp(local_2c,pAVar3,param_7,&local_24);
      }
      else {
        local_1c = CCmdTarget::SetStandardProp(local_2c,pAVar3,(tagDISPPARAMS *)&local_4c,&local_24)
        ;
      }
    }
    else {
      local_1c = CCmdTarget::CallMemberFunc
                           (local_2c,pAVar3,(ushort)param_5,param_7,(tagDISPPARAMS *)&local_4c,
                            &local_24);
    }
    local_8 = 0xffffffff;
    iVar2 = FUN_1013a592();
    return iVar2;
  }
  iVar7 = -0x7ffdfff1;
LAB_1013a661:
  if (local_20 != (short *)0x0) {
    Ordinal_9(local_4c);
    *(undefined4 *)local_4c = local_7c;
    *(undefined4 *)(local_4c + 2) = uStack_78;
    *(int **)(local_4c + 4) = local_74;
    *(undefined4 *)(local_4c + 6) = uStack_70;
  }
  if (((iVar7 != 0) && (param_9 != (uint *)0x0)) && (local_24 != 0xffffffff)) {
    *param_9 = local_24;
  }
  return iVar7;
}

