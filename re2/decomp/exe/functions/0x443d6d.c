// rea decompile_all
// name: CDataSourceControl::GetMetaData
// address: 0x443d6d
// body: available
// range: 0x443d6d-0x44414e inclusive
// non_contiguous: false
// provider: Ghidra 12.1.2 (ghidra)
// analysis_profile: ac6d50be2cdf54f7005df47d1ed7e7ef55dee595681eb1b7c2e0b00d70cd697d
// limitations: The session serves operations only after Ghidra reports default auto-analysis complete; incomplete analysis does not expose partial results.; The imported Program and temporary project are ephemeral and deleted on close. Annotation operations edit session database metadata; original executable bytes are never written.; Cancelling an active Ghidra request terminates its ephemeral database and discards session annotations. The selected target remains open; the next provider query imports the original artifact again.; Default-space addresses use lowercase 0x-prefixed hexadecimal; other address spaces use <percent-encoded-space>:0x<hex>.; Ghidra Listing reports a terminal call at 0x443efa to 0x429141 FUN_00429141 (external=false, thunk=false, hasNoReturn=true); fallthrough is excluded by Ghidra's flow model. This records Ghidra's FunctionManager flag, not an independent verification that the callee cannot return.; The Ghidra Program references PDB ISPToolForMsi.pdb (GUID b8f2ac8f-1d6f-438d-800f-ed4a14426ac6, age (hex) 1, signature unknown, version RSDS); Ghidra reports load state unknown. Original names and types may be missing; an empty name search does not prove a procedure is absent. Use list_procedures and address-based analysis to inspect recovered functions. REA does not admit a caller-selected PDB companion.; This session uses Ghidra 12.1.2. The bridge is verified against 12.1.4; other 12.1.x builds are accepted and the observed version is reported.; Pseudocode is Ghidra decompiler output, not original source and not text-equivalent to Hopper output.; External functions and functions without an analyzable body return null; other decompiler failures remain explicit.
// pseudocode: provider-specific; not original source


/* WARNING: Function: __EH_prolog3_GS replaced with injection: EH_prolog3 */
/* Library Function - Single Match
    public: long __thiscall CDataSourceControl::GetMetaData(void)
   
   Library: Visual Studio 2015 Release */

long __thiscall CDataSourceControl::GetMetaData(CDataSourceControl *this)

{
  uint uVar1;
  int iVar2;
  undefined4 uVar3;
  LPVOID _Dst;
  undefined4 *puVar4;
  long lVar5;
  CPtrList *this_00;
  int *piVar6;
  code *pcVar7;
  int iVar8;
  CPtrList *local_a4;
  undefined4 local_a0;
  undefined4 local_9c;
  undefined4 local_98;
  undefined4 local_94;
  CPtrList *local_90;
  int local_8c;
  LPVOID local_88;
  int local_84;
  IRowset *local_80;
  int *local_7c;
  CPtrList *local_78;
  tagDBCOLUMNID local_74 [24];
  undefined4 local_5c;
  undefined4 local_58;
  undefined4 local_54;
  undefined4 local_50;
  undefined4 local_4c;
  undefined4 local_48;
  tagDBCOLUMNID local_44 [24];
  undefined4 local_2c;
  undefined4 local_28;
  undefined4 local_24;
  undefined4 local_20;
  undefined4 local_1c;
  undefined4 local_18;
  undefined4 local_8;
  undefined4 uStack_4;
  
  uStack_4 = 0x94;
  local_8 = 0x443d7c;
  local_88 = *(LPVOID *)(this + 0x14);
  local_84 = *(int *)(this + 0x10);
  if (*(int *)(this + 0x48) == 0) {
    piVar6 = *(int **)(this + 8);
    if (piVar6 == (int *)0x0) goto LAB_00444149;
    iVar2 = *piVar6;
    guard_check_icall(piVar6,&DAT_005db8d0,&local_7c,&local_78);
    iVar2 = (**(code **)(iVar2 + 0xc))();
    if (iVar2 < 0) goto LAB_00444149;
    CopyColumnID(this,local_74,(tagDBCOLUMNID *)&DAT_005dbbe0);
    local_54 = 0xffffffff;
    local_5c = 0;
    local_58 = 0;
    local_50 = 0x18;
    local_4c = 0;
    local_48 = 0x1fb;
    CopyColumnID(this,local_44,(tagDBCOLUMNID *)&DAT_005dbbf8);
    local_24 = 0xffffffff;
    local_2c = 0x1c;
    local_28 = 0;
    local_20 = 0x20;
    local_1c = 0;
    local_18 = 0x1e;
    iVar2 = *local_7c;
    guard_check_icall(local_7c,2,local_74,0x28,0);
    iVar2 = (**(code **)(iVar2 + 0x10))();
    if (iVar2 < 0) {
      pcVar7 = *(code **)(*local_7c + 8);
    }
    else {
      local_a4 = local_78;
      local_9c = 0;
      local_98 = 0;
      local_94 = 0;
      local_a0 = 1;
      iVar2 = *local_7c;
      guard_check_icall(local_7c,0,0,&local_a4);
      local_8c = (**(code **)(iVar2 + 0x18))();
      if (-1 < local_8c) {
        *(undefined4 *)(this + 0x14) = local_9c;
        *(undefined4 *)(this + 0x34) = local_98;
        local_78 = local_90;
        *(CPtrList **)(this + 0x10) = local_90;
        pcVar7 = *(code **)(*local_7c + 8);
        guard_check_icall(local_7c);
        (*pcVar7)();
        goto LAB_0044406e;
      }
      pcVar7 = *(code **)(*local_7c + 8);
    }
    guard_check_icall(local_7c);
    (*pcVar7)();
  }
  else {
    iVar2 = **(int **)(this + 0x4c);
    guard_check_icall(*(int **)(this + 0x4c),&DAT_005dbba0,&local_80);
    local_8c = (**(code **)(iVar2 + 0x14))();
    if (local_8c < 0) goto LAB_00444149;
    puVar4 = *(undefined4 **)local_80;
    guard_check_icall(local_80,&DAT_005dbab0,&local_78);
    iVar2 = (*(code *)*puVar4)();
    if (-1 < iVar2) {
      local_7c = (int *)0x0;
      iVar2 = *(int *)local_78;
      guard_check_icall(local_78,&DAT_005dbbc0,&local_7c);
      iVar2 = (**(code **)(iVar2 + 0x10))();
      if (-1 < iVar2) {
        iVar2 = *local_7c;
        guard_check_icall(local_7c,*(int *)(this + 4) + 0xec,this + 0x58);
        (**(code **)(iVar2 + 0x14))();
        pcVar7 = *(code **)(*local_7c + 8);
        guard_check_icall(local_7c);
        (*pcVar7)();
      }
      pcVar7 = *(code **)(*(int *)local_78 + 8);
      guard_check_icall(local_78);
      (*pcVar7)();
    }
    local_78 = (CPtrList *)FUN_00416408(0x14);
    if (local_78 == (CPtrList *)0x0) {
      uVar3 = 0;
    }
    else {
      uVar3 = ATL::CRowset<ATL::CAccessorBase>::CRowset<ATL::CAccessorBase>
                        ((CRowset<ATL::CAccessorBase> *)local_78,local_80);
    }
    *(undefined4 *)(this + 0x50) = uVar3;
    pcVar7 = *(code **)(*(int *)local_80 + 8);
    guard_check_icall(local_80);
    (*pcVar7)();
    if ((IRowsetChange **)**(undefined4 **)(this + 0x50) != (IRowsetChange **)0x0) {
      IUnknown::QueryInterface<IRowsetChange>((IRowsetChange **)**(undefined4 **)(this + 0x50));
    }
    local_78 = (CPtrList *)FUN_00416408(0x28);
    if (local_78 == (CPtrList *)0x0) {
      this_00 = (CPtrList *)0x0;
    }
    else {
      *(int *)local_78 = 0;
      *(int *)(local_78 + 4) = 0;
      *(int *)(local_78 + 8) = 0;
      *(int *)(local_78 + 0xc) = 0;
      *(int *)(local_78 + 0x14) = 0;
      *(int *)(local_78 + 0x18) = 0;
      *(int *)(local_78 + 0x20) = 0;
      *(int *)(local_78 + 0x24) = 8000;
      *(int *)(local_78 + 0x10) = 0;
      this_00 = local_78;
    }
    *(CPtrList **)(this + 0x54) = this_00;
    ATL::CDynamicAccessor::BindColumns
              ((CDynamicAccessor *)this_00,(IUnknown *)**(undefined4 **)(this + 0x50));
    *(undefined4 *)(*(int *)(this + 0x50) + 8) = *(undefined4 *)(this + 0x54);
    uVar1 = *(uint *)(*(int *)(this + 0x54) + 0xc);
    *(uint *)(this + 0x10) = uVar1;
    if (0x3333333 < uVar1) goto LAB_00444149;
    _Dst = CoTaskMemAlloc(uVar1 * 0x28);
    *(LPVOID *)(this + 0x14) = _Dst;
    if (_Dst == (LPVOID)0x0) {
                    /* WARNING: Subroutine does not return */
      FUN_00429141();
    }
    _memset(_Dst,0,*(int *)(this + 0x10) * 0x28);
    ATL::CRowset<ATL::CAccessorBase>::MoveFirst(*(CRowset<ATL::CAccessorBase> **)(this + 0x50));
    ATL::CRowset<ATL::CAccessorBase>::ReleaseRows(*(CRowset<ATL::CAccessorBase> **)(this + 0x50));
LAB_0044406e:
    iVar2 = 0;
    if (0 < *(int *)(this + 0x10)) {
      iVar8 = 0;
      do {
        local_78 = (CPtrList *)FUN_00416408(0x1c);
        local_8 = 0;
        if (local_78 == (CPtrList *)0x0) {
          uVar3 = 0;
        }
        else {
          uVar3 = CPtrList::CPtrList(local_78,10);
        }
        local_8 = 0xffffffff;
        iVar2 = iVar2 + 1;
        *(undefined4 *)(iVar8 + 0x24 + *(int *)(this + 0x14)) = uVar3;
        iVar8 = iVar8 + 0x28;
      } while (iVar2 < *(int *)(this + 0x10));
    }
    if (local_88 != (LPVOID)0x0) {
      if (0 < local_84) {
        local_80 = (IRowset *)(-0x24 - (int)local_88);
        piVar6 = (int *)((int)local_88 + 0x24);
        do {
          local_78 = *(CPtrList **)(*piVar6 + 4);
          while (local_78 != (CPtrList *)0x0) {
            puVar4 = (undefined4 *)FUN_004ead48(&local_78);
            pcVar7 = *(code **)(*(int *)this + 0xc);
            guard_check_icall(*puVar4,1);
            (*pcVar7)();
          }
          CObList::RemoveAll((CObList *)*piVar6);
          local_78 = (CPtrList *)*piVar6;
          if (local_78 != (CPtrList *)0x0) {
            pcVar7 = *(code **)(*(int *)local_78 + 4);
            guard_check_icall(1);
            (*pcVar7)();
          }
          piVar6 = piVar6 + 10;
          local_84 = local_84 + -1;
        } while (local_84 != 0);
        local_84 = 0;
      }
      CoTaskMemFree(local_88);
    }
  }
LAB_00444149:
  lVar5 = FUN_0055bae6();
  return lVar5;
}

