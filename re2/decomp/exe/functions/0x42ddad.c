// rea decompile_all
// name: ATL::AtlIAccessibleInvokeHelper
// address: 0x42ddad
// body: available
// range: 0x42ddad-0x42e466 inclusive
// non_contiguous: false
// provider: Ghidra 12.1.2 (ghidra)
// analysis_profile: ac6d50be2cdf54f7005df47d1ed7e7ef55dee595681eb1b7c2e0b00d70cd697d
// limitations: The session serves operations only after Ghidra reports default auto-analysis complete; incomplete analysis does not expose partial results.; The imported Program and temporary project are ephemeral and deleted on close. Annotation operations edit session database metadata; original executable bytes are never written.; Cancelling an active Ghidra request terminates its ephemeral database and discards session annotations. The selected target remains open; the next provider query imports the original artifact again.; Default-space addresses use lowercase 0x-prefixed hexadecimal; other address spaces use <percent-encoded-space>:0x<hex>.; The Ghidra Program references PDB ISPToolForMsi.pdb (GUID b8f2ac8f-1d6f-438d-800f-ed4a14426ac6, age (hex) 1, signature unknown, version RSDS); Ghidra reports load state unknown. Original names and types may be missing; an empty name search does not prove a procedure is absent. Use list_procedures and address-based analysis to inspect recovered functions. REA does not admit a caller-selected PDB companion.; This session uses Ghidra 12.1.2. The bridge is verified against 12.1.4; other 12.1.x builds are accepted and the observed version is reported.; Pseudocode is Ghidra decompiler output, not original source and not text-equivalent to Hopper output.; External functions and functions without an analyzable body return null; other decompiler failures remain explicit.
// pseudocode: provider-specific; not original source


/* Library Function - Single Match
    long __stdcall ATL::AtlIAccessibleInvokeHelper(struct IAccessible *,long,struct _GUID const
   &,unsigned long,unsigned short,struct tagDISPPARAMS *,struct tagVARIANT *,struct tagEXCEPINFO
   *,unsigned int *)
   
   Library: Visual Studio 2015 Release */

long ATL::AtlIAccessibleInvokeHelper
               (IAccessible *param_1,long param_2,_GUID *param_3,ulong param_4,ushort param_5,
               tagDISPPARAMS *param_6,tagVARIANT *param_7,tagEXCEPINFO *param_8,uint *param_9)

{
  ushort uVar1;
  tagVARIANT *ptVar2;
  ushort *puVar3;
  long lVar4;
  int iVar5;
  uint uVar6;
  uint uVar7;
  ushort **ppuVar8;
  code *pcVar9;
  undefined2 uVar10;
  undefined2 local_60 [8];
  ushort local_50 [8];
  int local_40;
  uint local_3c;
  uint *local_38;
  IAccessible *local_34;
  tagVARIANT *local_30;
  int local_2c [4];
  ushort *local_1c [4];
  undefined4 *local_c;
  uint local_8;
  
  local_8 = DAT_0060cff4 ^ (uint)&stack0xfffffffc;
  local_34 = param_1;
  local_38 = param_9;
  local_60[0] = 0;
  local_30 = param_7;
  if (((param_1 == (IAccessible *)0x0) || (param_6 == (tagDISPPARAMS *)0x0)) ||
     (uVar6 = *(uint *)(param_6 + 8), 5 < uVar6)) goto LAB_0042e454;
  uVar7 = 0;
  if (*(int *)(param_6 + 0xc) != 0) {
    local_3c = *(uint *)(param_6 + 4);
    local_40 = 0;
    do {
      if (uVar6 <= *(uint *)(local_3c + uVar7 * 4)) goto LAB_0042e454;
      puVar3 = (ushort *)(*(int *)param_6 + local_40);
      local_40 = local_40 + 0x10;
      iVar5 = uVar7 * 4;
      uVar7 = uVar7 + 1;
      local_1c[*(int *)(*(int *)(param_6 + 4) + iVar5)] = puVar3;
    } while (uVar7 < *(uint *)(param_6 + 0xc));
  }
  if (uVar7 < uVar6) {
    puVar3 = (ushort *)(uVar7 * 0x10 + *(int *)param_6);
    iVar5 = uVar6 - uVar7;
    ppuVar8 = local_1c + iVar5 + -1;
    do {
      *ppuVar8 = puVar3;
      puVar3 = puVar3 + 8;
      ppuVar8 = ppuVar8 + -1;
      iVar5 = iVar5 + -1;
    } while (iVar5 != 0);
  }
  if (param_9 == (uint *)0x0) {
    local_38 = &local_3c;
  }
  if (param_7 == (tagVARIANT *)0x0) {
    local_30 = (tagVARIANT *)local_60;
  }
  ptVar2 = local_30;
  Ordinal_8(local_50);
  switch(param_2) {
  case -0x139a:
    if (*(int *)(param_6 + 8) == 1) {
      iVar5 = *(int *)local_34;
      guard_check_icall(local_34,*(undefined4 *)local_1c[0],*(undefined4 *)(local_1c[0] + 2),
                        *(undefined4 *)(local_1c[0] + 4),*(undefined4 *)(local_1c[0] + 6));
      (**(code **)(iVar5 + 100))();
    }
    break;
  case -0x1399:
    if (*(int *)(param_6 + 8) == 2) {
      if (*local_1c[0] != 3) {
        iVar5 = Ordinal_12(local_50,local_1c[0],0,3);
        if (iVar5 < 0) goto LAB_0042defc;
        local_1c[0] = local_50;
      }
      local_3c = *(uint *)(local_1c[0] + 4);
      if (*local_1c[1] != 3) {
        iVar5 = Ordinal_12(local_50,local_1c[1],0,3);
        if (iVar5 < 0) {
LAB_0042df2d:
          *local_38 = 1;
          break;
        }
        local_1c[1] = local_50;
      }
      iVar5 = *(int *)local_34;
      guard_check_icall(local_34,local_3c,*(undefined4 *)(local_1c[1] + 4),ptVar2);
      (**(code **)(iVar5 + 0x60))();
    }
    break;
  case -0x1398:
    if (*(int *)(param_6 + 8) == 2) {
      if (*local_1c[0] != 3) {
        iVar5 = Ordinal_12(local_50,local_1c[0],0,3);
        if (iVar5 < 0) goto LAB_0042defc;
        local_1c[0] = local_50;
      }
      iVar5 = *(int *)local_34;
      guard_check_icall(local_34,*(undefined4 *)(local_1c[0] + 4),*(undefined4 *)local_1c[1],
                        *(undefined4 *)(local_1c[1] + 2),*(undefined4 *)(local_1c[1] + 4),
                        *(undefined4 *)(local_1c[1] + 6),local_30);
      (**(code **)(iVar5 + 0x5c))();
    }
    break;
  case -0x1397:
    if (*(int *)(param_6 + 8) == 5) {
      uVar6 = 0;
      do {
        puVar3 = local_1c[uVar6];
        uVar1 = *puVar3;
        if ((uVar1 >> 0xe & 1) == 0 || (uVar1 & 0xf) == 0) {
          *local_38 = uVar6;
          goto switchD_0042de9b_default;
        }
        if ((uVar1 & 0xc) == 0) {
          iVar5 = *(int *)(puVar3 + 4);
        }
        else {
          Ordinal_9(*(undefined4 *)(puVar3 + 4));
          **(undefined2 **)(puVar3 + 4) = 3;
          iVar5 = *(int *)(puVar3 + 4) + 8;
        }
        local_2c[uVar6] = iVar5;
        uVar6 = uVar6 + 1;
      } while ((int)uVar6 < 4);
      iVar5 = *(int *)local_34;
      guard_check_icall(local_34,local_2c[0],local_2c[1],local_2c[2],local_2c[3],*local_c,local_c[1]
                        ,local_c[2],local_c[3]);
      (**(code **)(iVar5 + 0x58))();
    }
    break;
  case -0x1396:
    if (*(int *)(param_6 + 8) == 2) {
      if (*local_1c[0] != 3) {
        iVar5 = Ordinal_12(local_50,local_1c[0],0,3);
        if (iVar5 < 0) goto LAB_0042defc;
        local_1c[0] = local_50;
      }
      iVar5 = *(int *)local_34;
      guard_check_icall(local_34,*(undefined4 *)(local_1c[0] + 4),*(undefined4 *)local_1c[1],
                        *(undefined4 *)(local_1c[1] + 2),*(undefined4 *)(local_1c[1] + 4),
                        *(undefined4 *)(local_1c[1] + 6));
      (**(code **)(iVar5 + 0x54))();
    }
    break;
  case -0x1395:
    if (*(int *)(param_6 + 8) == 1) {
      iVar5 = *(int *)local_34;
      guard_check_icall(local_34,*(undefined4 *)local_1c[0],*(undefined4 *)(local_1c[0] + 2),
                        *(undefined4 *)(local_1c[0] + 4),*(undefined4 *)(local_1c[0] + 6),
                        local_30 + 8);
      iVar5 = (**(code **)(iVar5 + 0x50))();
LAB_0042e0c9:
      if (-1 < iVar5) {
        uVar10 = 8;
LAB_0042e0d5:
        *(undefined2 *)local_30 = uVar10;
      }
    }
    break;
  case -0x1394:
    pcVar9 = *(code **)(*(int *)local_34 + 0x4c);
    goto LAB_0042e0e9;
  case -0x1393:
    pcVar9 = *(code **)(*(int *)local_34 + 0x48);
LAB_0042e0e9:
    guard_check_icall(local_34,ptVar2);
    (*pcVar9)();
    break;
  case -0x1392:
    if (*(int *)(param_6 + 8) == 1) {
      iVar5 = *(int *)local_34;
      guard_check_icall(local_34,*(undefined4 *)local_1c[0],*(undefined4 *)(local_1c[0] + 2),
                        *(undefined4 *)(local_1c[0] + 4),*(undefined4 *)(local_1c[0] + 6),
                        local_30 + 8);
      iVar5 = (**(code **)(iVar5 + 0x44))();
      goto LAB_0042e0c9;
    }
    break;
  case -0x1391:
    if (*(int *)(param_6 + 8) == 2) {
      uVar1 = *local_1c[0];
      if ((uVar1 & 0x400c) == 0x4000) {
LAB_0042defc:
        *local_38 = 0;
      }
      else {
        if (uVar1 == 0x400c) {
          Ordinal_9(*(undefined4 *)(local_1c[0] + 4));
          **(undefined2 **)(local_1c[0] + 4) = 8;
          puVar3 = (ushort *)(*(int *)(local_1c[0] + 4) + 8);
        }
        else if (uVar1 == 0x4008) {
          puVar3 = *(ushort **)(local_1c[0] + 4);
        }
        else {
          Ordinal_9(local_1c[0]);
          puVar3 = local_1c[0] + 4;
          *local_1c[0] = 8;
        }
        iVar5 = *(int *)local_34;
        guard_check_icall(local_34,puVar3,*(undefined4 *)local_1c[1],
                          *(undefined4 *)(local_1c[1] + 2),*(undefined4 *)(local_1c[1] + 4),
                          *(undefined4 *)(local_1c[1] + 6),local_30 + 8);
        iVar5 = (**(code **)(iVar5 + 0x40))();
        if (-1 < iVar5) {
          uVar10 = 3;
          goto LAB_0042e0d5;
        }
      }
    }
    break;
  case -0x1390:
    if (*(int *)(param_6 + 8) == 1) {
      iVar5 = *(int *)local_34;
      guard_check_icall(local_34,*(undefined4 *)local_1c[0],*(undefined4 *)(local_1c[0] + 2),
                        *(undefined4 *)(local_1c[0] + 4),*(undefined4 *)(local_1c[0] + 6),
                        local_30 + 8);
      iVar5 = (**(code **)(iVar5 + 0x3c))();
      goto LAB_0042e0c9;
    }
    break;
  case -0x138f:
    if (*(int *)(param_6 + 8) == 1) {
      iVar5 = *(int *)local_34;
      guard_check_icall(local_34,*(undefined4 *)local_1c[0],*(undefined4 *)(local_1c[0] + 2),
                        *(undefined4 *)(local_1c[0] + 4),*(undefined4 *)(local_1c[0] + 6),local_30);
      (**(code **)(iVar5 + 0x38))();
    }
    break;
  case -0x138e:
    if (*(int *)(param_6 + 8) == 1) {
      iVar5 = *(int *)local_34;
      guard_check_icall(local_34,*(undefined4 *)local_1c[0],*(undefined4 *)(local_1c[0] + 2),
                        *(undefined4 *)(local_1c[0] + 4),*(undefined4 *)(local_1c[0] + 6),local_30);
      (**(code **)(iVar5 + 0x34))();
    }
    break;
  case -0x138d:
    if (*(int *)(param_6 + 8) == 1) {
      iVar5 = *(int *)local_34;
      guard_check_icall(local_34,*(undefined4 *)local_1c[0],*(undefined4 *)(local_1c[0] + 2),
                        *(undefined4 *)(local_1c[0] + 4),*(undefined4 *)(local_1c[0] + 6),
                        local_30 + 8);
      iVar5 = (**(code **)(iVar5 + 0x30))();
      goto LAB_0042e0c9;
    }
    break;
  case -0x138c:
    if ((param_5 & 2) == 0) {
      if ((param_5 & 4) == 0) goto switchD_0042de9b_caseD_ffffec75;
      if (*(int *)(param_6 + 8) == 2) {
        local_2c[0] = *(int *)local_1c[0];
        local_2c[1] = *(undefined4 *)(local_1c[0] + 2);
        local_2c[2] = *(undefined4 *)(local_1c[0] + 4);
        local_2c[3] = *(undefined4 *)(local_1c[0] + 6);
        if (*local_1c[1] != 8) {
          iVar5 = Ordinal_12(local_50,local_1c[1],0,3);
          if (iVar5 < 0) goto LAB_0042df2d;
          local_1c[1] = local_50;
        }
        iVar5 = *(int *)local_34;
        guard_check_icall(local_34,local_2c[0],local_2c[1],local_2c[2],local_2c[3],
                          *(undefined4 *)(local_1c[1] + 4));
        (**(code **)(iVar5 + 0x6c))();
      }
    }
    else if (*(int *)(param_6 + 8) == 1) {
      iVar5 = *(int *)local_34;
      guard_check_icall(local_34,*(undefined4 *)local_1c[0],*(undefined4 *)(local_1c[0] + 2),
                        *(undefined4 *)(local_1c[0] + 4),*(undefined4 *)(local_1c[0] + 6),
                        local_30 + 8);
      iVar5 = (**(code **)(iVar5 + 0x2c))();
      goto LAB_0042e0c9;
    }
    break;
  case -0x138b:
switchD_0042de9b_caseD_ffffec75:
    if ((param_5 & 2) == 0) {
      if ((param_5 & 4) == 0) goto switchD_0042de9b_caseD_ffffec76;
      if (*(int *)(param_6 + 8) == 2) {
        local_2c[0] = *(int *)local_1c[0];
        local_2c[1] = *(undefined4 *)(local_1c[0] + 2);
        local_2c[2] = *(undefined4 *)(local_1c[0] + 4);
        local_2c[3] = *(undefined4 *)(local_1c[0] + 6);
        if (*local_1c[1] != 8) {
          iVar5 = Ordinal_12(local_50,local_1c[1],0,3);
          if (iVar5 < 0) goto LAB_0042df2d;
          local_1c[1] = local_50;
        }
        iVar5 = *(int *)local_34;
        guard_check_icall(local_34,local_2c[0],local_2c[1],local_2c[2],local_2c[3],
                          *(undefined4 *)(local_1c[1] + 4));
        (**(code **)(iVar5 + 0x68))();
      }
    }
    else if (*(int *)(param_6 + 8) == 1) {
      iVar5 = *(int *)local_34;
      guard_check_icall(local_34,*(undefined4 *)local_1c[0],*(undefined4 *)(local_1c[0] + 2),
                        *(undefined4 *)(local_1c[0] + 4),*(undefined4 *)(local_1c[0] + 6),
                        local_30 + 8);
      iVar5 = (**(code **)(iVar5 + 0x28))();
      goto LAB_0042e0c9;
    }
    break;
  case -0x138a:
switchD_0042de9b_caseD_ffffec76:
    if (*(int *)(param_6 + 8) == 1) {
      iVar5 = *(int *)local_34;
      guard_check_icall(local_34,*(undefined4 *)local_1c[0],*(undefined4 *)(local_1c[0] + 2),
                        *(undefined4 *)(local_1c[0] + 4),*(undefined4 *)(local_1c[0] + 6),
                        local_30 + 8);
      iVar5 = (**(code **)(iVar5 + 0x24))();
      if (-1 < iVar5) {
        uVar10 = 9;
        goto LAB_0042e0d5;
      }
    }
    break;
  case -0x1389:
    pcVar9 = *(code **)(*(int *)local_34 + 0x20);
    guard_check_icall(local_34,ptVar2 + 8);
    iVar5 = (*pcVar9)();
    if (-1 < iVar5) {
      uVar10 = 3;
LAB_0042e444:
      *(undefined2 *)ptVar2 = uVar10;
    }
    break;
  case -5000:
    pcVar9 = *(code **)(*(int *)local_34 + 0x1c);
    guard_check_icall(local_34,ptVar2 + 8);
    iVar5 = (*pcVar9)();
    if (-1 < iVar5) {
      uVar10 = 9;
      goto LAB_0042e444;
    }
  }
switchD_0042de9b_default:
  Ordinal_9(local_50);
LAB_0042e454:
  lVar4 = __security_check_cookie(local_8 ^ (uint)&stack0xfffffffc);
  return lVar4;
}

