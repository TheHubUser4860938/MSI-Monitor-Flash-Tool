// rea decompile_all
// name: CDataSourceControl::UpdateCursor
// address: 0x446b1a
// body: available
// range: 0x446b1a-0x447208 inclusive
// non_contiguous: false
// provider: Ghidra 12.1.2 (ghidra)
// analysis_profile: ac6d50be2cdf54f7005df47d1ed7e7ef55dee595681eb1b7c2e0b00d70cd697d
// limitations: The session serves operations only after Ghidra reports default auto-analysis complete; incomplete analysis does not expose partial results.; The imported Program and temporary project are ephemeral and deleted on close. Annotation operations edit session database metadata; original executable bytes are never written.; Cancelling an active Ghidra request terminates its ephemeral database and discards session annotations. The selected target remains open; the next provider query imports the original artifact again.; Default-space addresses use lowercase 0x-prefixed hexadecimal; other address spaces use <percent-encoded-space>:0x<hex>.; The Ghidra Program references PDB ISPToolForMsi.pdb (GUID b8f2ac8f-1d6f-438d-800f-ed4a14426ac6, age (hex) 1, signature unknown, version RSDS); Ghidra reports load state unknown. Original names and types may be missing; an empty name search does not prove a procedure is absent. Use list_procedures and address-based analysis to inspect recovered functions. REA does not admit a caller-selected PDB companion.; This session uses Ghidra 12.1.2. The bridge is verified against 12.1.4; other 12.1.x builds are accepted and the observed version is reported.; Pseudocode is Ghidra decompiler output, not original source and not text-equivalent to Hopper output.; External functions and functions without an analyzable body return null; other decompiler failures remain explicit.
// pseudocode: provider-specific; not original source


/* WARNING: Function: __EH_prolog3 replaced with injection: EH_prolog3 */
/* WARNING: Function: __EH_epilog3 replaced with injection: EH_epilog3 */
/* Library Function - Single Match
    public: virtual long __thiscall CDataSourceControl::UpdateCursor(void)
   
   Library: Visual Studio 2015 Release */

long __thiscall CDataSourceControl::UpdateCursor(CDataSourceControl *this)

{
  tagVARIANT *ptVar1;
  int iVar2;
  CDynamicAccessor *this_00;
  code *pcVar3;
  undefined4 *puVar4;
  bool bVar5;
  int *piVar6;
  void *pvVar7;
  uint uVar8;
  undefined4 *puVar9;
  LPSTR lpMultiByteStr;
  undefined4 uVar10;
  ulong uVar11;
  int iVar12;
  ushort uVar13;
  void *pvVar14;
  LPCSTR lpDefaultChar;
  ulong uVar15;
  void *pvVar16;
  LPBOOL lpUsedDefaultChar;
  undefined4 local_74;
  undefined4 local_70;
  undefined4 local_6c;
  void *local_68;
  undefined4 local_64;
  undefined4 local_5c;
  undefined4 local_58;
  undefined4 local_54;
  void *local_50;
  undefined4 local_4c;
  COleVariant *local_48;
  COleVariant local_44 [8];
  LPCWSTR local_3c;
  undefined4 local_38;
  tagVARIANT *local_34;
  tagVARIANT *local_30;
  int local_2c;
  wchar_t *local_28;
  int local_24;
  int local_20;
  int local_1c;
  uint local_18;
  undefined1 local_11 [9];
  undefined4 local_8;
  undefined4 uStack_4;
  
  uStack_4 = 100;
  local_8 = 0x446b26;
  iVar12 = 0;
  local_24 = 0;
  local_1c = 0;
  if (*(int *)(this + 0x48) == 0) {
    if (*(int *)(this + 0xc) == 0) {
      pcVar3 = *(code **)**(undefined4 **)(this + 8);
      guard_check_icall(*(undefined4 **)(this + 8),&DAT_005db8f0,this + 0xc);
      iVar12 = (*pcVar3)();
      if (iVar12 < 0) {
        return 0;
      }
    }
    local_28 = (wchar_t *)0x0;
    if (0 < *(int *)(this + 0x10)) {
      local_18 = 0;
      do {
        local_2c = *(int *)(*(int *)(*(int *)(this + 0x14) + 0x24 + local_18) + 4);
        if (local_2c != 0) {
          local_20 = local_24 * 0x30;
          do {
            puVar9 = (undefined4 *)FUN_004ead48(&local_2c);
            local_34 = (tagVARIANT *)*puVar9;
            if (*(int *)(local_34 + 0xa8) != 0) {
              *(undefined4 *)(local_34 + 0xa8) = 0;
              local_1c = local_1c + 1;
              if (local_1c == 1) {
                pcVar3 = *(code **)(**(int **)(this + 0xc) + 0x18);
                guard_check_icall(*(int **)(this + 0xc),&local_30);
                iVar12 = (*pcVar3)();
                if (iVar12 < 0) {
                  return iVar12;
                }
                if (local_30 == (tagVARIANT *)0x1) {
                  pcVar3 = *(code **)(**(int **)(this + 0xc) + 0xc);
                  guard_check_icall(*(int **)(this + 0xc),1);
                  iVar12 = (*pcVar3)();
                  if (iVar12 < 0) {
                    return iVar12;
                  }
                }
                *(undefined4 *)(this + 0x44) = 1;
              }
              uVar10 = 0x10;
              FUN_004c8e1e(local_44);
              local_8 = 2;
              ptVar1 = local_34 + 0xb0;
              uVar13 = *(ushort *)ptVar1;
              if (uVar13 < 2) {
LAB_00447057:
                uVar10 = 0xffffffff;
LAB_0044705a:
                local_34 = ptVar1;
                COleVariant::operator=(local_44,ptVar1);
              }
              else {
                if (uVar13 != 8) {
                  if (uVar13 == 10) goto LAB_00447057;
                  goto LAB_0044705a;
                }
                if (**(short **)(local_34 + 0xb8) != 0) goto LAB_0044705a;
                uVar10 = 0xffffffff;
                local_34 = ptVar1;
              }
              local_5c = 0;
              local_58 = 1;
              local_54 = *(undefined4 *)(local_20 + *(int *)(this + 0x3c) + 0x2c);
              local_50 = (void *)0x0;
              local_48 = local_44;
              iVar12 = **(int **)(this + 0xc);
              local_4c = uVar10;
              guard_check_icall(*(int **)(this + 0xc),local_20 + *(int *)(this + 0x3c),&local_5c);
              (**(code **)(iVar12 + 0x10))();
              Ordinal_9(local_34);
              local_8 = 0xffffffff;
              Ordinal_9(local_44);
            }
            local_24 = local_24 + 1;
            local_20 = local_20 + 0x30;
          } while (local_2c != 0);
        }
        local_28 = (wchar_t *)((int)local_28 + 1);
        local_18 = local_18 + 0x28;
      } while ((int)local_28 < *(int *)(this + 0x10));
    }
    local_2c = *(int *)(this + 0x1c);
    while (local_2c != 0) {
      puVar9 = (undefined4 *)FUN_004ead48(&local_2c);
      local_34 = (tagVARIANT *)*puVar9;
      puVar9 = *(undefined4 **)(*(int *)local_34 + 0x50);
      if (puVar9 != (undefined4 *)0x0) {
        puVar4 = (undefined4 *)*puVar9;
        guard_check_icall(puVar9,&DAT_005db910,&local_28);
        iVar12 = (*(code *)*puVar4)();
        if (-1 < iVar12) {
          pcVar3 = *(code **)(*(int *)local_28 + 0x10);
          guard_check_icall(local_28,*(undefined4 *)(local_34 + 8));
          iVar12 = (*pcVar3)();
          if ((iVar12 == 0) && (local_1c = local_1c + 1, local_1c == 1)) {
            pcVar3 = *(code **)(**(int **)(this + 0xc) + 0x18);
            guard_check_icall(*(int **)(this + 0xc),&local_24);
            iVar12 = (*pcVar3)();
            if (iVar12 < 0) {
              return iVar12;
            }
            if (local_24 == 1) {
              pcVar3 = *(code **)(**(int **)(this + 0xc) + 0xc);
              guard_check_icall(*(int **)(this + 0xc),1);
              iVar12 = (*pcVar3)();
              if (iVar12 < 0) {
                return iVar12;
              }
            }
            *(undefined4 *)(this + 0x44) = 1;
          }
          pcVar3 = *(code **)(*(int *)local_28 + 8);
          guard_check_icall(local_28);
          (*pcVar3)();
        }
      }
    }
    if (0 < local_1c) {
      iVar12 = **(int **)(this + 0xc);
      guard_check_icall(*(int **)(this + 0xc),0,0,0);
      iVar12 = (**(code **)(iVar12 + 0x1c))();
      *(undefined4 *)(this + 0x44) = 0;
      if (iVar12 < 0) {
        pcVar3 = *(code **)(*(int *)this + 0x14);
        guard_check_icall();
        (*pcVar3)();
        return iVar12;
      }
    }
  }
  else if ((*(int *)(this + 0x54) != 0) && (uVar11 = 1, 0 < *(int *)(this + 0x10))) {
    local_20 = 0x30;
    local_24 = 0x28;
    do {
      iVar2 = *(int *)(*(int *)(this + 0x14) + -4 + local_24);
      if (iVar2 != 0) {
        local_2c = *(int *)(iVar2 + 4);
        while (local_2c != 0) {
          piVar6 = (int *)FUN_004ead48(&local_2c);
          local_28 = (wchar_t *)*piVar6;
          if (*(int *)(local_28 + 0x54) != 0) {
            local_28[0x54] = L'\0';
            local_28[0x55] = L'\0';
            iVar12 = iVar12 + 1;
            if (iVar12 == 1) {
              *(undefined4 *)(this + 0x44) = 1;
            }
            local_1c = iVar12;
            bVar5 = ATL::CDynamicAccessor::GetColumnType
                              (*(CDynamicAccessor **)(this + 0x54),uVar11,(ushort *)&local_18);
            if (bVar5) {
              local_30 = (tagVARIANT *)(local_28 + 0x58);
              COleVariant::COleVariant(local_44,local_30);
              local_74 = 0;
              local_70 = 0;
              local_6c = 0;
              local_68 = (void *)0x0;
              local_58 = 0;
              local_50 = (void *)0x0;
              local_64 = 0;
              local_48 = (COleVariant *)0x0;
              local_8 = 1;
              uVar15 = *(ulong *)(*(int *)(*(CDynamicAccessor **)(this + 0x54) + 0x14) + 0x10 +
                                 local_20);
              pvVar7 = ATL::CDynamicAccessor::GetValue(*(CDynamicAccessor **)(this + 0x54),uVar11);
              ATL::CManualAccessor::CreateAccessor((CManualAccessor *)&local_74,1,pvVar7,uVar15);
              pvVar16 = (void *)0x0;
              pvVar14 = (void *)0x0;
              iVar12 = *(int *)(*(CDynamicAccessor **)(this + 0x54) + 0x14);
              pvVar7 = ATL::CDynamicAccessor::GetValue(*(CDynamicAccessor **)(this + 0x54),uVar11);
              ATL::CManualAccessor::AddBindEntry
                        ((CManualAccessor *)&local_74,*(ulong *)(iVar12 + 8 + local_20),
                         *(ushort *)(iVar12 + 0x14 + local_20),*(ulong *)(iVar12 + 0x10 + local_20),
                         pvVar7,pvVar14,pvVar16);
              ATL::CManualAccessor::BindColumns
                        ((CManualAccessor *)&local_74,(IUnknown *)**(undefined4 **)(this + 0x50));
              uVar8 = local_18 & 0xffff;
              if (uVar8 < 0x82) {
                if (uVar8 == 0x81) {
                  COleVariant::ChangeType(local_44,8,(tagVARIANT *)0x0);
                  lpUsedDefaultChar = (LPBOOL)0x0;
                  lpDefaultChar = (LPCSTR)0x0;
                  iVar12 = *(int *)(*(int *)(*(CDynamicAccessor **)(this + 0x54) + 0x14) + 0x10 +
                                   local_20);
                  lpMultiByteStr =
                       ATL::CDynamicAccessor::GetValue(*(CDynamicAccessor **)(this + 0x54),uVar11);
                  WideCharToMultiByte(0,0,local_3c,-1,lpMultiByteStr,iVar12,lpDefaultChar,
                                      lpUsedDefaultChar);
                }
                else if (uVar8 < 9) {
                  if (uVar8 == 8) {
                    COleVariant::ChangeType(local_44,8,(tagVARIANT *)0x0);
                    local_28 = (wchar_t *)0x0;
                    ATL::CDynamicAccessor::GetValue<wchar_t*>
                              (*(CDynamicAccessor **)(this + 0x54),uVar11,&local_28);
                    Ordinal_6(local_28);
                    local_28 = (wchar_t *)Ordinal_2(local_3c);
                    SetValue<>(uVar11,&local_28);
                  }
                  else {
                    if (uVar8 == 2) {
                      uVar13 = 2;
                      goto LAB_00446d2f;
                    }
                    if (uVar8 == 3) {
                      COleVariant::ChangeType(local_44,3,(tagVARIANT *)0x0);
                      SetValue<>(uVar11,&local_3c);
                    }
                    else if (uVar8 == 4) {
                      COleVariant::ChangeType(local_44,4,(tagVARIANT *)0x0);
                      ATL::CDynamicAccessor::SetValue<float>
                                (*(CDynamicAccessor **)(this + 0x54),uVar11,(float *)&local_3c);
                    }
                    else if (uVar8 == 5) {
                      uVar13 = 5;
LAB_00446cd2:
                      COleVariant::ChangeType(local_44,uVar13,(tagVARIANT *)0x0);
                      ATL::CDynamicAccessor::SetValue<double>
                                (*(CDynamicAccessor **)(this + 0x54),uVar11,(double *)&local_3c);
                    }
                    else if (uVar8 == 6) {
                      COleVariant::ChangeType(local_44,6,(tagVARIANT *)0x0);
                      puVar9 = ATL::CDynamicAccessor::GetValue
                                         (*(CDynamicAccessor **)(this + 0x54),uVar11);
                      *puVar9 = local_3c;
                      puVar9[1] = local_38;
                    }
                    else if (uVar8 == 7) {
                      uVar13 = 7;
                      goto LAB_00446cd2;
                    }
                  }
                }
                else if (uVar8 == 0xb) {
                  uVar13 = 0xb;
LAB_00446d2f:
                  COleVariant::ChangeType(local_44,uVar13,(tagVARIANT *)0x0);
                  SetValue<>(uVar11,&local_3c);
                }
                else if (uVar8 == 0xe) {
                  COleVariant::ChangeType(local_44,0xe,(tagVARIANT *)0x0);
                  ATL::CDynamicAccessor::SetValue<tagDEC>
                            (*(CDynamicAccessor **)(this + 0x54),uVar11,(tagDEC *)local_44);
                }
                else if (uVar8 == 0x10) {
                  COleVariant::ChangeType(local_44,0x10,(tagVARIANT *)0x0);
                  local_11[0] = local_3c._0_1_;
                  SetValue<>(uVar11,local_11);
                }
                else if (uVar8 == 0x11) {
                  COleVariant::ChangeType(local_44,0x11,(tagVARIANT *)0x0);
                  SetValue<>(uVar11,&local_3c);
                }
                else if (uVar8 == 0x12) {
                  COleVariant::ChangeType(local_44,0x12,(tagVARIANT *)0x0);
                  SetValue<>(uVar11,&local_3c);
                }
                else if (uVar8 == 0x13) {
                  COleVariant::ChangeType(local_44,0x13,(tagVARIANT *)0x0);
                  SetValue<>(uVar11,&local_3c);
                }
              }
              else if (uVar8 == 0x82) {
                COleVariant::ChangeType(local_44,8,(tagVARIANT *)0x0);
                this_00 = *(CDynamicAccessor **)(this + 0x54);
                pvVar7 = ATL::CDynamicAccessor::GetValue(this_00,uVar11);
                uVar8 = *(uint *)(*(int *)(this_00 + 0x14) + 0x10 + local_20) >> 1;
                uVar10 = FUN_0057efe7(pvVar7,uVar8,local_3c,uVar8 - 1);
                FUN_00416b48(uVar10);
              }
              *(undefined4 **)(*(int *)(this + 0x50) + 8) = &local_74;
              ATL::CRowset<ATL::CAccessorBase>::SetData
                        (*(CRowset<ATL::CAccessorBase> **)(this + 0x50));
              *(undefined4 *)(*(int *)(this + 0x50) + 8) = *(undefined4 *)(this + 0x54);
              Ordinal_9(local_30);
              FID_conflict__free(local_68);
              FID_conflict__free(local_50);
              local_8 = 0xffffffff;
              Ordinal_9(local_44);
              iVar12 = local_1c;
            }
          }
        }
      }
      uVar11 = uVar11 + 1;
      local_24 = local_24 + 0x28;
      local_20 = local_20 + 0x30;
    } while ((int)uVar11 <= *(int *)(this + 0x10));
    if (0 < iVar12) {
      *(undefined4 *)(this + 0x44) = 0;
    }
  }
  return 0;
}

