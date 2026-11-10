// rea decompile_all
// name: CMFCToolBarButton::OnCalculateSize
// address: 0x1011d61f
// body: available
// range: 0x1011d61f-0x1011d80c inclusive
// non_contiguous: false
// provider: Ghidra 12.1.2 (ghidra)
// analysis_profile: b075844f08879296d957518397cd0ddda73db81dce53d00d3f0e702766fc2af6
// limitations: The session serves operations only after Ghidra reports default auto-analysis complete; incomplete analysis does not expose partial results.; The imported Program and temporary project are ephemeral and deleted on close. Annotation operations edit session database metadata; original executable bytes are never written.; Cancelling an active Ghidra request terminates its ephemeral database and discards session annotations. The selected target remains open; the next provider query imports the original artifact again.; Default-space addresses use lowercase 0x-prefixed hexadecimal; other address spaces use <percent-encoded-space>:0x<hex>.; The Ghidra Program references PDB Comm_Aux.pdb (GUID ba7920cc-daa3-4461-a102-1f8f66c67a2a, age (hex) 1, signature unknown, version RSDS); Ghidra reports load state unknown. Original names and types may be missing; an empty name search does not prove a procedure is absent. Use list_procedures and address-based analysis to inspect recovered functions. REA does not admit a caller-selected PDB companion.; This session uses Ghidra 12.1.2. The bridge is verified against 12.1.4; other 12.1.x builds are accepted and the observed version is reported.; Pseudocode is Ghidra decompiler output, not original source and not text-equivalent to Hopper output.; External functions and functions without an analyzable body return null; other decompiler failures remain explicit.
// pseudocode: provider-specific; not original source


/* WARNING: Function: __EH_prolog3_GS replaced with injection: EH_prolog3 */
/* Library Function - Single Match
    public: virtual struct tagSIZE __thiscall CMFCToolBarButton::OnCalculateSize(class CDC *,class
   CSize const &,int)
   
   Library: Visual Studio 2015 Release */

tagSIZE __thiscall
CMFCToolBarButton::OnCalculateSize(CMFCToolBarButton *this,CDC *param_1,CSize *param_2,int param_3)

{
  code *pcVar1;
  int iVar2;
  int iVar3;
  CMFCVisualManager *pCVar4;
  int *piVar5;
  undefined4 uVar6;
  int iVar7;
  tagSIZE tVar8;
  int in_stack_00000010;
  CStringT<wchar_t,StrTraitMFC<wchar_t,ATL::ChTraitsCRT<wchar_t>_>_> local_44 [8];
  CDC *local_3c;
  int local_38;
  CSize *local_34;
  int local_30;
  int local_2c;
  int local_28;
  int local_24;
  int local_20;
  int local_1c;
  int local_18;
  undefined4 local_8;
  undefined4 uStack_4;
  
  uStack_4 = 0x34;
  local_8 = 0x1011d62b;
  local_3c = param_1;
  local_34 = param_2;
  if (*(int *)(this + 0x50) == 0) {
    *(undefined4 *)param_1 = 0;
    *(undefined4 *)(param_1 + 4) = 0;
    goto LAB_1011d805;
  }
  iVar7 = *(int *)param_3;
  local_28 = *(int *)(param_3 + 4);
  local_2c = iVar7;
  if (((byte)this[0x24] & 1) == 0) {
    local_38 = 1;
    iVar3 = IsDrawImage(this);
    if (iVar3 == 0) {
LAB_1011d6a8:
      local_38 = 0;
      if (*(int *)(this + 0x48) == 0) {
        local_30 = 0;
        piVar5 = &local_30;
        local_2c = 0;
      }
      else {
        pCVar4 = CMFCVisualManager::GetInstance();
        pcVar1 = *(code **)(*(int *)pCVar4 + 0x140);
        guard_check_icall(&local_1c);
        piVar5 = (int *)(*pcVar1)();
        iVar7 = local_2c;
      }
      iVar2 = piVar5[1];
      if (in_stack_00000010 != 0) {
        iVar7 = *piVar5;
        iVar2 = local_28;
      }
    }
    else {
      if (*(int *)(this + 4) == 0) {
        iVar3 = *(int *)(this + 0x34);
      }
      else {
        iVar3 = *(int *)(this + 0x38);
      }
      iVar2 = local_28;
      if (iVar3 < 0) goto LAB_1011d6a8;
    }
    local_28 = iVar2;
    *(undefined4 *)(this + 100) = 0;
    *(undefined4 *)(this + 0x68) = 0;
    iVar3 = *(int *)(*(int *)(this + 0x2c) + -0xc);
    if (iVar3 != 0) {
      if ((*(int *)(this + 0x18) == 0) || (in_stack_00000010 == 0)) {
        if ((*(int *)(this + 8) != 0) && (iVar3 != 0)) {
          local_2c = FUN_100349e0(*(int *)(this + 0x2c) + -0x10);
          local_2c = local_2c + 0x10;
          local_8 = 0;
          ATL::CStringT<wchar_t,StrTraitMFC<wchar_t,ATL::ChTraitsCRT<wchar_t>_>_>::Replace
                    ((CStringT<wchar_t,StrTraitMFC<wchar_t,ATL::ChTraitsCRT<wchar_t>_>_> *)&local_2c
                     ,L"&&",L"\x01\x01");
          FUN_10037b90(0x26);
          ATL::CStringT<wchar_t,StrTraitMFC<wchar_t,ATL::ChTraitsCRT<wchar_t>_>_>::Replace
                    ((CStringT<wchar_t,StrTraitMFC<wchar_t,ATL::ChTraitsCRT<wchar_t>_>_> *)&local_2c
                     ,L"\x01\x01",L"&");
          piVar5 = (int *)CDC::GetTextExtent((CDC *)local_34,local_44);
          iVar3 = (-(uint)(local_38 != 0) & 0xfffffffd) + 9 + *piVar5;
          if (in_stack_00000010 == 0) {
            local_28 = local_28 + iVar3;
          }
          else {
            iVar7 = iVar7 + iVar3;
          }
          FUN_10034f00();
        }
      }
      else {
        local_24 = 0;
        local_20 = 0;
        local_1c = *(int *)param_3 * 3;
        local_18 = *(int *)(param_3 + 4);
        uVar6 = 0x401;
        if (DAT_10205ed8 != 0) {
          uVar6 = 0x411;
        }
        iVar3 = *(int *)local_34;
        guard_check_icall(*(int *)(this + 0x2c),*(undefined4 *)(*(int *)(this + 0x2c) + -0xc),
                          &local_24,uVar6);
        (**(code **)(iVar3 + 0x68))();
        *(int *)(this + 0x68) = local_18 - local_20;
        iVar3 = (local_1c - local_24) + 6;
        *(int *)(this + 100) = iVar3;
        if (iVar7 <= iVar3) {
          iVar7 = iVar3;
        }
        iVar7 = iVar7 + 0xc;
        local_28 = local_28 + 1 + *(int *)(this + 0x68);
      }
    }
  }
  else if (in_stack_00000010 == 0) {
    local_28 = 8;
  }
  else {
    iVar7 = *(int *)(this + 0x34);
    if (*(int *)(this + 0x34) < 1) {
      iVar7 = 8;
    }
  }
  *(int *)local_3c = iVar7;
  *(int *)(local_3c + 4) = local_28;
LAB_1011d805:
  tVar8 = (tagSIZE)FUN_1017f5f4();
  return tVar8;
}

