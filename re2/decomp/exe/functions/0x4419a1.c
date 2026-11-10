// rea decompile_all
// name: ATL::CDynamicAccessor::BindColumns
// address: 0x4419a1
// body: available
// range: 0x4419a1-0x441ea5 inclusive
// non_contiguous: false
// provider: Ghidra 12.1.2 (ghidra)
// analysis_profile: ac6d50be2cdf54f7005df47d1ed7e7ef55dee595681eb1b7c2e0b00d70cd697d
// limitations: The session serves operations only after Ghidra reports default auto-analysis complete; incomplete analysis does not expose partial results.; The imported Program and temporary project are ephemeral and deleted on close. Annotation operations edit session database metadata; original executable bytes are never written.; Cancelling an active Ghidra request terminates its ephemeral database and discards session annotations. The selected target remains open; the next provider query imports the original artifact again.; Default-space addresses use lowercase 0x-prefixed hexadecimal; other address spaces use <percent-encoded-space>:0x<hex>.; The Ghidra Program references PDB ISPToolForMsi.pdb (GUID b8f2ac8f-1d6f-438d-800f-ed4a14426ac6, age (hex) 1, signature unknown, version RSDS); Ghidra reports load state unknown. Original names and types may be missing; an empty name search does not prove a procedure is absent. Use list_procedures and address-based analysis to inspect recovered functions. REA does not admit a caller-selected PDB companion.; This session uses Ghidra 12.1.2. The bridge is verified against 12.1.4; other 12.1.x builds are accepted and the observed version is reported.; Pseudocode is Ghidra decompiler output, not original source and not text-equivalent to Hopper output.; External functions and functions without an analyzable body return null; other decompiler failures remain explicit.
// pseudocode: provider-specific; not original source


/* Library Function - Single Match
    public: long __thiscall ATL::CDynamicAccessor::BindColumns(struct IUnknown *)
   
   Library: Visual Studio 2015 Release */

long __thiscall ATL::CDynamicAccessor::BindColumns(CDynamicAccessor *this,IUnknown *param_1)

{
  ushort uVar1;
  short sVar2;
  long lVar3;
  tagDBBINDING *ptVar4;
  int iVar5;
  uint uVar6;
  void *_Dst;
  CDynamicAccessor *pCVar7;
  int iVar8;
  undefined4 *puVar9;
  size_t _Size;
  uint uVar10;
  tagDBBINDING *_Memory;
  undefined4 local_50;
  undefined4 uStack_4c;
  undefined4 uStack_48;
  undefined4 uStack_44;
  ulong local_40 [4];
  tagDBBINDING *local_30;
  long local_2c;
  undefined4 *local_28;
  IAccessor *local_24;
  size_t local_20;
  tagDBBINDING *local_1c;
  int local_18;
  uint local_14;
  uint local_10;
  tagDBBINDING *local_c;
  char local_5;
  
  local_5 = '\0';
  local_50 = 0xc733a30;
  uStack_4c = 0x11ce2a1c;
  uStack_48 = 0xaa00e5ad;
  uStack_44 = 0x3d774400;
  if (param_1 == (IUnknown *)0x0) {
    return -0x7fffbffb;
  }
  local_24 = (IAccessor *)0x0;
  lVar3 = IUnknown::QueryInterface<IAccessor>((IAccessor **)param_1);
  if (lVar3 < 0) goto LAB_00441e93;
  _Size = 0;
  local_20 = 0;
  if (*(int *)(this + 0x14) == 0) {
    local_1c = (tagDBBINDING *)0x0;
    lVar3 = QueryInterface<>(param_1,&local_1c);
    if (-1 < lVar3) {
      iVar5 = *(int *)local_1c;
      guard_check_icall(local_1c,this + 0xc,this + 0x14,this + 0x18);
      lVar3 = (**(code **)(iVar5 + 0xc))();
      if (-1 < lVar3) {
        this[0x1c] = (CDynamicAccessor)0x0;
        CComPtrBase<IAccessor>::~CComPtrBase<IAccessor>((CComPtrBase<IAccessor> *)&local_1c);
        goto LAB_00441a47;
      }
    }
    CComPtrBase<IAccessor>::~CComPtrBase<IAccessor>((CComPtrBase<IAccessor> *)&local_1c);
    goto LAB_00441e93;
  }
  this[0x1c] = (CDynamicAccessor)0x1;
LAB_00441a47:
  ptVar4 = (tagDBBINDING *)
           FUN_00416444(-(uint)((int)((ulonglong)*(uint *)(this + 0xc) * 0x34 >> 0x20) != 0) |
                        (uint)((ulonglong)*(uint *)(this + 0xc) * 0x34));
  local_c = ptVar4;
  if (ptVar4 == (tagDBBINDING *)0x0) {
    lVar3 = -0x7ff8fff2;
    goto LAB_00441e93;
  }
  iVar5 = FUN_00416444(*(undefined4 *)(this + 0xc));
  *(int *)(this + 0x10) = iVar5;
  _Memory = local_c;
  if (iVar5 == 0) {
LAB_00441e87:
    lVar3 = -0x7ff8fff2;
  }
  else {
    local_14 = 0;
    local_1c = ptVar4;
    if (*(int *)(this + 0xc) != 0) {
      local_2c = 0xd;
      local_18 = 0;
      do {
        uVar10 = local_14;
        pCVar7 = this + 0x14;
        *(undefined1 *)(local_14 + *(int *)(this + 0x10)) = 0;
        local_28 = *(undefined4 **)pCVar7;
        local_30 = *(tagDBBINDING **)((int)local_28 + local_18 + 0x10);
        if (*(tagDBBINDING **)(this + 0x24) < local_30) {
          uVar1 = *(ushort *)((int)local_28 + local_18 + 0x14);
          local_10 = (uint)uVar1;
          if (uVar1 == (ushort)local_2c) goto LAB_00441c7f;
          if (*(int *)(this + 0x20) != 2) {
            if (*(int *)(this + 0x20) == 1) {
              *(ushort *)((int)local_28 + local_18 + 0x14) = uVar1 | 0x4000;
              *(undefined4 *)(*(int *)pCVar7 + 0x10 + local_18) = 4;
              *(undefined1 *)(local_14 + *(int *)(this + 0x10)) = 1;
              iVar5 = *(int *)pCVar7;
              uVar10 = GetAlignment(*(ushort *)(iVar5 + 0x14 + local_18));
              local_10 = (local_20 - 1) + uVar10 & ~(uVar10 - 1);
              iVar8 = *(int *)(iVar5 + 0x10 + local_18);
              uVar10 = local_10 + 3 + iVar8 & 0xfffffffc;
              local_20 = uVar10 + 4;
              FUN_00442063(local_1c,*(undefined4 *)(iVar5 + 8 + local_18),
                           *(undefined2 *)(iVar5 + 0x14 + local_18),iVar8,
                           *(undefined1 *)(iVar5 + 0x16 + local_18),
                           *(undefined1 *)(iVar5 + 0x17 + local_18),0,local_10,uVar10,local_20,0,0,0
                          );
              goto LAB_00441d39;
            }
            if (local_5 == '\0') {
              local_40[2] = 0;
              local_40[3] = 0;
              local_40[0] = 0x89;
              local_40[1] = 0x8b;
              GetRowsetProperties(this,param_1,local_40,(int *)(local_40 + 2),2);
              if (local_40[2] == 0) {
                if (local_40[3] != 0) {
                  puVar9 = &DAT_005b51a0;
                  goto LAB_00441c0e;
                }
              }
              else {
                puVar9 = &DAT_005b5190;
LAB_00441c0e:
                local_50 = *puVar9;
                uStack_4c = puVar9[1];
                uStack_48 = puVar9[2];
                uStack_44 = puVar9[3];
                uVar10 = local_14;
              }
              local_5 = '\x01';
            }
            local_28 = (undefined4 *)FUN_00416408(0x14);
            if (local_28 != (undefined4 *)0x0) {
              puVar9 = &local_50;
              goto LAB_00441c32;
            }
            if (uVar10 != 0) {
              ptVar4 = local_c + 0x14;
              local_30 = ptVar4;
              do {
                FUN_0055b3de(*(int *)ptVar4,0x14);
                ptVar4 = ptVar4 + 0x34;
                uVar10 = uVar10 - 1;
              } while (uVar10 != 0);
            }
            goto LAB_00441de6;
          }
          local_10 = 0;
          uVar6 = local_20 + 3 & 0xfffffffc;
          *(undefined4 *)((int)local_28 + local_18 + 0x10) = 0;
          local_20 = uVar6 + 4;
          iVar5 = *(int *)(this + 0x14);
          FUN_00442063(local_1c,*(undefined4 *)(iVar5 + 8 + local_18),
                       *(undefined2 *)(iVar5 + 0x14 + local_18),
                       *(undefined4 *)(iVar5 + 0x10 + local_18),
                       *(undefined1 *)(iVar5 + 0x16 + local_18),
                       *(undefined1 *)(iVar5 + 0x17 + local_18),0,0,uVar6,local_20,0,0,1);
          local_14 = uVar10;
        }
        else {
LAB_00441c7f:
          sVar2 = *(short *)((int)local_28 + local_18 + 0x14);
          if (sVar2 == 0xd) {
            local_28 = (undefined4 *)FUN_00416408(0x14);
            if (local_28 == (undefined4 *)0x0) {
              if (uVar10 != 0) {
                ptVar4 = local_c + 0x14;
                local_30 = ptVar4;
                do {
                  FUN_0055b3de(*(int *)ptVar4,0x14);
                  ptVar4 = ptVar4 + 0x34;
                  uVar10 = uVar10 - 1;
                } while (uVar10 != 0);
              }
              goto LAB_00441de6;
            }
            puVar9 = &DAT_005b4f00;
LAB_00441c32:
            *local_28 = 0;
            pCVar7 = this + 0x14;
            local_28[1] = *puVar9;
            local_28[2] = puVar9[1];
            local_28[3] = puVar9[2];
            local_28[4] = puVar9[3];
            *(undefined2 *)(*(int *)pCVar7 + 0x14 + local_18) = 0xd;
            *(undefined4 *)(*(int *)pCVar7 + 0x10 + local_18) = 4;
            iVar5 = *(int *)pCVar7;
            uVar10 = GetAlignment(*(ushort *)(iVar5 + 0x14 + local_18));
            iVar8 = *(int *)(iVar5 + 0x10 + local_18);
            local_10 = (local_20 - 1) + uVar10 & ~(uVar10 - 1);
            uVar10 = iVar8 + 3 + local_10;
            puVar9 = local_28;
          }
          else {
            if (sVar2 == 0x81) {
              *(tagDBBINDING **)((int)local_28 + local_18 + 0x10) = local_30 + 1;
            }
            iVar5 = *(int *)pCVar7;
            if (*(short *)(iVar5 + 0x14 + local_18) == 0x82) {
              *(int *)(iVar5 + 0x10 + local_18) = *(int *)(iVar5 + 0x10 + local_18) * 2 + 2;
            }
            iVar5 = *(int *)pCVar7;
            uVar10 = GetAlignment(*(ushort *)(iVar5 + 0x14 + local_18));
            local_10 = (local_20 - 1) + uVar10 & ~(uVar10 - 1);
            iVar8 = *(int *)(iVar5 + 0x10 + local_18);
            puVar9 = (undefined4 *)0x0;
            uVar10 = local_10 + 3 + iVar8;
          }
          local_20 = (uVar10 & 0xfffffffc) + 4;
          FUN_00441739(local_1c,*(undefined4 *)(iVar5 + 8 + local_18),
                       *(undefined2 *)(iVar5 + 0x14 + local_18),iVar8,
                       *(undefined1 *)(iVar5 + 0x16 + local_18),
                       *(undefined1 *)(iVar5 + 0x17 + local_18),0,local_10,uVar10 & 0xfffffffc,
                       local_20,puVar9);
        }
LAB_00441d39:
        _Size = local_20 + 4;
        local_14 = local_14 + 1;
        local_1c = local_1c + 0x34;
        *(uint *)(*(int *)(this + 0x14) + 4 + local_18) = local_10;
        local_18 = local_18 + 0x30;
        local_20 = _Size;
      } while (local_14 < *(uint *)(this + 0xc));
    }
    if (*(int *)this == 0) {
      local_2c = CAccessorBase::AllocateAccessorMemory((CAccessorBase *)this,1);
      if (-1 < local_2c) {
        *(undefined1 *)(*(int *)this + 4) = 1;
        goto LAB_00441e25;
      }
      local_30 = (tagDBBINDING *)0x0;
      lVar3 = local_2c;
      _Memory = local_c;
      if (*(int *)(this + 0xc) != 0) {
        uVar10 = 0;
        ptVar4 = local_c + 0x14;
        do {
          FUN_0055b3de(*(int *)ptVar4,0x14);
          uVar10 = uVar10 + 1;
          ptVar4 = ptVar4 + 0x34;
          lVar3 = local_2c;
          _Memory = local_c;
        } while (uVar10 < *(uint *)(this + 0xc));
      }
LAB_00441db2:
      FID_conflict__free(*(void **)(this + 0x10));
      *(undefined4 *)(this + 0x10) = 0;
    }
    else {
LAB_00441e25:
      _Dst = (void *)FUN_00416444(_Size);
      *(void **)(this + 8) = _Dst;
      if (_Dst == (void *)0x0) {
        uVar10 = 0;
        if (*(int *)(this + 0xc) != 0) {
          ptVar4 = local_c + 0x14;
          local_30 = ptVar4;
          do {
            FUN_0055b3de(*(int *)ptVar4,0x14);
            uVar10 = uVar10 + 1;
            ptVar4 = ptVar4 + 0x34;
          } while (uVar10 < *(uint *)(this + 0xc));
        }
LAB_00441de6:
        _Memory = local_c;
        FID_conflict__free(*(void **)(this + 0x10));
        *(undefined4 *)(this + 0x10) = 0;
        goto LAB_00441e87;
      }
      _memset(_Dst,0,_Size);
      _Memory = local_c;
      lVar3 = CAccessorBase::BindEntries
                        (local_c,*(ulong *)(this + 0xc),*(ulong **)this,_Size,local_24);
      if (lVar3 < 0) goto LAB_00441db2;
    }
  }
  FID_conflict__free(_Memory);
LAB_00441e93:
  CComPtrBase<IAccessor>::~CComPtrBase<IAccessor>((CComPtrBase<IAccessor> *)&local_24);
  return lVar3;
}

