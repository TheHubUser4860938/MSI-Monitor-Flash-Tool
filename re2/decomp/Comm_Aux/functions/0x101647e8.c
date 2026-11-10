// rea decompile_all
// name: CCmdTarget::CallMemberFunc
// address: 0x101647e8
// body: available
// range: 0x101647e8-0x101649e1 inclusive
// non_contiguous: false
// provider: Ghidra 12.1.2 (ghidra)
// analysis_profile: b075844f08879296d957518397cd0ddda73db81dce53d00d3f0e702766fc2af6
// limitations: The session serves operations only after Ghidra reports default auto-analysis complete; incomplete analysis does not expose partial results.; The imported Program and temporary project are ephemeral and deleted on close. Annotation operations edit session database metadata; original executable bytes are never written.; Cancelling an active Ghidra request terminates its ephemeral database and discards session annotations. The selected target remains open; the next provider query imports the original artifact again.; Default-space addresses use lowercase 0x-prefixed hexadecimal; other address spaces use <percent-encoded-space>:0x<hex>.; The Ghidra Program references PDB Comm_Aux.pdb (GUID ba7920cc-daa3-4461-a102-1f8f66c67a2a, age (hex) 1, signature unknown, version RSDS); Ghidra reports load state unknown. Original names and types may be missing; an empty name search does not prove a procedure is absent. Use list_procedures and address-based analysis to inspect recovered functions. REA does not admit a caller-selected PDB companion.; This session uses Ghidra 12.1.2. The bridge is verified against 12.1.4; other 12.1.x builds are accepted and the observed version is reported.; Pseudocode is Ghidra decompiler output, not original source and not text-equivalent to Hopper output.; External functions and functions without an analyzable body return null; other decompiler failures remain explicit.
// pseudocode: provider-specific; not original source


/* WARNING: Function: __EH_prolog3_catch_GS replaced with injection: EH_prolog3 */
/* WARNING: Function: __alloca_probe_16 replaced with injection: alloca_probe */
/* WARNING (jumptable): Unable to track spacebase fully for stack */
/* WARNING: Unable to track spacebase fully for stack */
/* Library Function - Single Match
    protected: long __thiscall CCmdTarget::CallMemberFunc(struct AFX_DISPMAP_ENTRY const *,unsigned
   short,struct tagVARIANT *,struct tagDISPPARAMS *,unsigned int *)
   
   Library: Visual Studio 2015 Release */

long __thiscall
CCmdTarget::CallMemberFunc
          (CCmdTarget *this,AFX_DISPMAP_ENTRY *param_1,ushort param_2,tagVARIANT *param_3,
          tagDISPPARAMS *param_4,uint *param_5)

{
  undefined2 uVar1;
  uint uVar2;
  int iVar3;
  code *pcVar4;
  int iVar5;
  CCmdTarget *this_00;
  int *piVar6;
  bool bVar7;
  size_t sVar8;
  char *pcVar9;
  long lVar10;
  uint uVar11;
  char *pcVar12;
  undefined4 *puVar14;
  undefined4 *puVar15;
  undefined4 *puVar16;
  char *_Str;
  undefined1 *puVar17;
  uint uVar18;
  float10 fVar19;
  int aiStackY_98 [4];
  uint uStackY_88;
  undefined4 uStackY_84;
  int aiStackY_80 [2];
  char local_74 [20];
  CArray<CVariantBoolPair,CVariantBoolPair_const&> local_60 [20];
  long local_4c;
  undefined8 local_48;
  undefined4 uStack_40;
  undefined4 uStack_3c;
  CCmdTarget *local_38;
  uint local_34;
  undefined1 *local_30;
  undefined4 local_2c;
  char local_25;
  char *local_24;
  int *local_20;
  undefined1 *local_14;
  undefined4 local_8;
  undefined4 uStack_4;
  undefined4 *puVar13;
  
  uStack_4 = 0x54;
  local_8 = 0x101647f4;
  aiStackY_80[1] = 0x10164804;
  local_38 = this;
  FUN_100583d1();
  uVar11 = 0;
  local_8._0_1_ = 0;
  local_8._1_3_ = 0;
  local_25 = '\0';
  _Str = *(char **)(param_1 + 8);
  if (_Str == (char *)0x0) {
    _Str = &local_25;
  }
  aiStackY_80[1] = 0x10164825;
  local_24 = _Str;
  sVar8 = _strlen(_Str);
  local_2c = *(undefined4 *)(param_1 + 0x10);
  local_34 = (uint)*(ushort *)(param_1 + 0xc);
  if ((param_2 & 0xc) == 0) {
LAB_101648a2:
    uVar18 = local_34;
    aiStackY_80[1] = 0x101648b1;
    bVar7 = ATL::_ATL_SAFE_ALLOCA_IMPL::_AtlVerifyStackAvailable(*(int *)(param_4 + 8) << 4);
    if ((bVar7) && (uVar2 = *(uint *)(param_4 + 8), uVar2 < 0x8000000)) {
      local_24 = (char *)(uVar2 * 0x10);
      iVar3 = uVar2 * -0x10;
      pcVar12 = local_74 + iVar3;
      local_14 = local_74 + iVar3;
      *(uint *)(local_60 + iVar3 + -0x18) = uVar2 * 0x10;
      local_30 = local_74 + iVar3;
      aiStackY_80[uVar2 * -4 + 1] = 0;
      aiStackY_80[uVar2 * -4] = (int)(local_74 + iVar3);
      (&uStackY_84)[uVar2 * -4] = 0x101648e0;
      _memset((void *)aiStackY_80[uVar2 * -4],aiStackY_80[uVar2 * -4 + 1],
              *(size_t *)(local_60 + iVar3 + -0x18));
      *(uint *)(local_60 + iVar3 + -0x18) = uVar18;
      aiStackY_80[uVar2 * -4 + 1] = (int)_Str;
      aiStackY_80[uVar2 * -4] = 0x101648ea;
      pcVar9 = (char *)FUN_10164de0();
      local_24 = pcVar9;
      *(char **)(local_60 + iVar3 + -0x18) = pcVar9 + 0x10;
      local_20 = (int *)(pcVar9 + 0x10);
      aiStackY_80[uVar2 * -4 + 1] = 0x101648f9;
      bVar7 = ATL::_ATL_SAFE_ALLOCA_IMPL::_AtlVerifyStackAvailable
                        (*(ulong *)(local_60 + iVar3 + -0x18));
      if (bVar7) {
        *(undefined4 *)(local_60 + iVar3 + -0x18) = 0x10164910;
        iVar5 = -(int)local_20;
        local_14 = local_74 + iVar5 + iVar3;
        local_20 = (int *)(local_74 + iVar5 + iVar3);
        pcVar12 = local_74 + iVar5 + iVar3;
        *(undefined4 *)(local_60 + iVar5 + iVar3 + -0x18) = 0x1016491e;
        CArray<CVariantBoolPair,CVariantBoolPair_const&>::
        CArray<CVariantBoolPair,CVariantBoolPair_const&>(local_60);
        this_00 = local_38;
        *(CArray<CVariantBoolPair,CVariantBoolPair_const&> **)(local_60 + iVar5 + iVar3 + -0x18) =
             local_60;
        *(undefined1 **)((int)aiStackY_80 + iVar5 + iVar3 + 4) = local_30;
        local_8._0_1_ = 1;
        *(uint **)((int)aiStackY_80 + iVar5 + iVar3) = param_5;
        *(tagDISPPARAMS **)((int)&uStackY_84 + iVar5 + iVar3) = param_4;
        *(uint *)((int)&uStackY_88 + iVar5 + iVar3) = uVar18;
        *(undefined8 **)((int)aiStackY_98 + iVar5 + iVar3 + 0xc) = &local_48;
        *(char **)((int)aiStackY_98 + iVar5 + iVar3 + 8) = _Str;
        piVar6 = local_20;
        *(int **)((int)aiStackY_98 + iVar5 + iVar3 + 4) = local_20;
        *(undefined4 *)((int)aiStackY_98 + iVar5 + iVar3) = 0x10164941;
        local_4c = PushStackArgs(this_00,*(uchar **)((int)aiStackY_98 + iVar5 + iVar3 + 4),
                                 *(uchar **)((int)aiStackY_98 + iVar5 + iVar3 + 8),
                                 *(void **)((int)aiStackY_98 + iVar5 + iVar3 + 0xc),
                                 *(ushort *)((int)&uStackY_88 + iVar5 + iVar3),
                                 *(tagDISPPARAMS **)((int)&uStackY_84 + iVar5 + iVar3),
                                 *(uint **)((int)aiStackY_80 + iVar5 + iVar3),
                                 *(tagVARIANT **)((int)aiStackY_80 + iVar5 + iVar3 + 4),
                                 *(CVariantBoolConverter **)(local_60 + iVar5 + iVar3 + -0x18));
        local_20 = (int *)0x0;
        if (local_4c == 0) {
          *(char **)(local_60 + iVar5 + iVar3 + -0x18) = local_24;
          local_8 = CONCAT31(local_8._1_3_,2);
          *(int **)((int)aiStackY_80 + iVar5 + iVar3 + 4) = piVar6;
          pcVar12 = (char *)((int)aiStackY_80 + iVar5 + iVar3);
          *(undefined4 *)((int)aiStackY_80 + iVar5 + iVar3) = local_2c;
          if (uVar18 == 4) {
            *(undefined4 *)((int)&uStackY_84 + iVar5 + iVar3) = 0x10164996;
            fVar19 = (float10)__AfxDispatchCall_12();
            local_38 = (CCmdTarget *)(float)fVar19;
            local_48 = (double)CONCAT44(local_48._4_4_,local_38);
          }
          else if ((uVar18 == 5) || (uVar18 == 7)) {
            *(undefined4 *)((int)&uStackY_84 + iVar5 + iVar3) = 0x1016498c;
            fVar19 = (float10)__AfxDispatchCall_12();
            local_48 = (double)fVar19;
          }
          else if (uVar18 - 0x14 < 2) {
            *(undefined4 *)((int)&uStackY_84 + iVar5 + iVar3) = 0x10164975;
            local_48 = (double)__AfxDispatchCall_12();
          }
          else {
            *(undefined4 *)((int)&uStackY_84 + iVar5 + iVar3) = 0x10164982;
            local_20 = (int *)__AfxDispatchCall_12();
          }
          local_8._0_1_ = 1;
          local_8._1_3_ = 0;
        }
        puVar17 = local_30;
        if (*(int *)(param_4 + 8) != 0) {
          do {
            *(undefined1 **)(pcVar12 + -4) = puVar17;
            puVar13 = (undefined4 *)(pcVar12 + -8);
            pcVar12 = pcVar12 + -8;
            *puVar13 = 0x101649b8;
            Ordinal_9();
            uVar11 = uVar11 + 1;
            uVar18 = local_34;
            puVar17 = puVar17 + 0x10;
          } while (uVar11 < *(uint *)(param_4 + 8));
        }
        if (local_4c == 0) {
          *(undefined4 *)(pcVar12 + -4) = 0x10164a11;
          FUN_10164b3c();
          uVar11 = uVar18 & 0xffff;
          if (param_3 == (tagVARIANT *)0x0) {
            if (uVar11 == 8) {
              *(int **)(pcVar12 + -4) = local_20;
              puVar16 = (undefined4 *)(pcVar12 + -8);
              pcVar12 = pcVar12 + -8;
              *puVar16 = 0x10164acd;
              Ordinal_6();
            }
            else if (uVar11 == 9) {
LAB_10164a9f:
              if (local_20 != (int *)0x0) {
                iVar3 = *local_20;
                *(int **)(pcVar12 + -4) = local_20;
                pcVar4 = *(code **)(iVar3 + 8);
                *(undefined4 *)(pcVar12 + -8) = 0x10164ab3;
                guard_check_icall();
                puVar14 = (undefined4 *)(pcVar12 + -8);
                pcVar12 = pcVar12 + -8;
                *puVar14 = 0x10164ab5;
                (*pcVar4)();
              }
            }
            else if (uVar11 == 0xc) {
              *(undefined8 **)(pcVar12 + -4) = &local_48;
              puVar15 = (undefined4 *)(pcVar12 + -8);
              pcVar12 = pcVar12 + -8;
              *puVar15 = 0x10164ac1;
              Ordinal_9();
            }
            else if (uVar11 == 0xd) goto LAB_10164a9f;
          }
          else {
            *(short *)param_3 = (short)uVar18;
            switch(uVar11) {
            case 2:
            case 0x12:
              *(short *)(param_3 + 8) = (short)local_20;
              break;
            case 3:
            case 8:
            case 9:
            case 10:
            case 0xd:
            case 0x13:
              *(int **)(param_3 + 8) = local_20;
              break;
            case 4:
              *(undefined4 *)(param_3 + 8) = (undefined4)local_48;
              break;
            case 5:
            case 7:
              *(double *)(param_3 + 8) = local_48;
              break;
            case 6:
            case 0x14:
            case 0x15:
              *(undefined4 *)(param_3 + 8) = (undefined4)local_48;
              *(undefined4 *)(param_3 + 0xc) = local_48._4_4_;
              break;
            case 0xb:
              *(ushort *)(param_3 + 8) = ((short)local_20 == 0) - 1;
              break;
            case 0xc:
              *(undefined4 *)param_3 = (undefined4)local_48;
              *(undefined4 *)(param_3 + 4) = local_48._4_4_;
              *(undefined4 *)(param_3 + 8) = uStack_40;
              *(undefined4 *)(param_3 + 0xc) = uStack_3c;
              break;
            case 0x10:
            case 0x11:
              param_3[8] = SUB41(local_20,0);
            }
          }
          *(undefined4 *)(pcVar12 + -4) = 0x10164ad5;
          CArray<CVariantBoolPair,CVariantBoolPair_const&>::
          ~CArray<CVariantBoolPair,CVariantBoolPair_const&>(local_60);
          *(undefined4 *)(pcVar12 + -4) = 0x10164add;
          guard_check_icall();
          goto LAB_10164adf;
        }
        *(undefined4 *)(pcVar12 + -4) = 0x101649d3;
        CArray<CVariantBoolPair,CVariantBoolPair_const&>::
        ~CArray<CVariantBoolPair,CVariantBoolPair_const&>(local_60);
      }
      *(undefined4 *)(pcVar12 + -4) = 0x101649db;
      guard_check_icall();
      goto LAB_10164adf;
    }
  }
  else {
    aiStackY_80[1] = 0x10164847;
    bVar7 = ATL::_ATL_SAFE_ALLOCA_IMPL::_AtlVerifyStackAvailable(sVar8 + 3);
    pcVar9 = local_24;
    if (bVar7) {
      iVar3 = -(sVar8 + 3);
      local_14 = local_74;
      _Str = local_74;
      *(size_t *)(local_60 + iVar3 + -0x18) = sVar8;
      *(char **)((int)aiStackY_80 + iVar3 + 4) = pcVar9;
      *(size_t *)((int)aiStackY_80 + iVar3) = sVar8 + 3;
      *(char **)((int)&uStackY_84 + iVar3) = local_74;
      *(undefined4 *)((int)&uStackY_88 + iVar3) = 0x10164879;
      FUN_100345e0();
      uVar1 = *(undefined2 *)(param_1 + 0xc);
      local_24 = local_74;
      local_74[sVar8] = -1;
      local_74[sVar8 + iVar3 + 1] = (char)uVar1;
      local_74[sVar8 + iVar3 + 2] = '\0';
      local_2c = *(undefined4 *)(param_1 + 0x14);
      local_34 = 0;
      goto LAB_101648a2;
    }
  }
  guard_check_icall();
LAB_10164adf:
  lVar10 = FUN_1017f605();
  return lVar10;
}

