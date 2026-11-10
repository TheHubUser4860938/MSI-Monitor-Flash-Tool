// rea decompile_all
// name: CMFCToolBar::Serialize
// address: 0x1009c364
// body: available
// range: 0x1009c364-0x1009c650 inclusive
// non_contiguous: false
// provider: Ghidra 12.1.2 (ghidra)
// analysis_profile: b075844f08879296d957518397cd0ddda73db81dce53d00d3f0e702766fc2af6
// limitations: The session serves operations only after Ghidra reports default auto-analysis complete; incomplete analysis does not expose partial results.; The imported Program and temporary project are ephemeral and deleted on close. Annotation operations edit session database metadata; original executable bytes are never written.; Cancelling an active Ghidra request terminates its ephemeral database and discards session annotations. The selected target remains open; the next provider query imports the original artifact again.; Default-space addresses use lowercase 0x-prefixed hexadecimal; other address spaces use <percent-encoded-space>:0x<hex>.; The Ghidra Program references PDB WinIspPlugIn.pdb (GUID d9f398c7-6c98-49a8-af25-a0659d5ad2f3, age (hex) 1, signature unknown, version RSDS); Ghidra reports load state unknown. Original names and types may be missing; an empty name search does not prove a procedure is absent. Use list_procedures and address-based analysis to inspect recovered functions. REA does not admit a caller-selected PDB companion.; This session uses Ghidra 12.1.2. The bridge is verified against 12.1.4; other 12.1.x builds are accepted and the observed version is reported.; Pseudocode is Ghidra decompiler output, not original source and not text-equivalent to Hopper output.; External functions and functions without an analyzable body return null; other decompiler failures remain explicit.
// pseudocode: provider-specific; not original source


/* WARNING: Function: __EH_prolog3_catch replaced with injection: EH_prolog3 */
/* WARNING: Function: __EH_epilog3 replaced with injection: EH_epilog3 */
/* Library Function - Single Match
    public: virtual void __thiscall CMFCToolBar::Serialize(class CArchive &)
   
   Library: Visual Studio 2015 Release */

void __thiscall CMFCToolBar::Serialize(CMFCToolBar *this,CArchive *param_1)

{
  code *pcVar1;
  undefined4 uVar2;
  CObject *pCVar3;
  int iVar4;
  BOOL BVar5;
  undefined4 *puVar6;
  CArchive *pCVar7;
  CObList local_44 [32];
  int *local_24;
  CObject *local_20;
  undefined4 *local_1c;
  undefined4 local_18 [4];
  undefined4 local_8;
  undefined4 uStack_4;
  
  uStack_4 = 0x34;
  local_8 = 0x1009c370;
  CBasePane::Serialize((CBasePane *)this,param_1);
  if (*(int *)(this + 0xb78) == 0) {
    uVar2 = FUN_10049868();
    FUN_100476a0(uVar2);
    local_8._0_1_ = 1;
    local_8._1_3_ = 0;
    if (((byte)param_1[0x18] & 1) == 0) {
      CObList::CObList(local_44,10);
      local_1c = *(undefined4 **)(this + 0xc40);
      local_8._0_1_ = 2;
      while (local_1c != (undefined4 *)0x0) {
        puVar6 = (undefined4 *)FUN_100c321b(&local_1c);
        local_20 = AfxDynamicDownCast((CRuntimeClass *)&PTR_s_CMFCToolBarButton_1023da8c,
                                      (CObject *)*puVar6);
        if (local_20 != (CObject *)0x0) {
          pcVar1 = *(code **)(*(int *)local_20 + 0x50);
          guard_check_icall();
          iVar4 = (*pcVar1)();
          if (iVar4 != 0) {
            CObList::AddTail(local_44,local_20);
          }
        }
      }
      CObList::Serialize(local_44,param_1);
      FUN_10051228(*(undefined4 *)(this + 0xb88));
      BVar5 = IsWindow(*(HWND *)(this + 0x20));
      if (BVar5 != 0) {
        CWnd::GetWindowTextW
                  ((CWnd *)this,
                   (CStringT<wchar_t,StrTraitMFC<wchar_t,ATL::ChTraitsCRT<wchar_t>_>_> *)local_18);
      }
      CArchive::operator<<<wchar_t,StrTraitMFC<wchar_t,ATL::ChTraitsCRT<wchar_t>_>_>
                (param_1,(CStringT<wchar_t,StrTraitMFC<wchar_t,ATL::ChTraitsCRT<wchar_t>_>_> *)
                         local_18);
      FUN_10051228(*(undefined4 *)(this + 0x13c));
      CObList::~CObList(local_44);
    }
    else {
      local_1c = *(undefined4 **)(this + 0xd14);
      local_20 = (CObject *)0x0;
      if (local_1c != (undefined4 *)0x0) {
        pcVar1 = *(code **)*local_1c;
        guard_check_icall();
        (*pcVar1)();
        pCVar3 = (CObject *)FUN_10051ddc();
        local_20 = AfxDynamicDownCast((CRuntimeClass *)&PTR_s_CMFCCustomizeButton_1023daac,pCVar3);
        pcVar1 = *(code **)(*(int *)local_20 + 0x14);
        guard_check_icall(*(undefined4 *)(this + 0xd14));
        (*pcVar1)();
      }
      pcVar1 = *(code **)(*(int *)this + 0x350);
      guard_check_icall();
      (*pcVar1)();
      pcVar1 = *(code **)(*(int *)(this + 0xc3c) + 8);
      pCVar7 = param_1;
      guard_check_icall(param_1);
      (*pcVar1)();
      local_1c = *(undefined4 **)(this + 0xc40);
      while (local_1c != (undefined4 *)0x0) {
        local_24 = (int *)FUN_100c321b(&local_1c);
        local_24 = (int *)*local_24;
        if (local_24 == (int *)0x0) {
          CObList::RemoveAll((CObList *)(this + 0xc3c));
          pcVar1 = *(code **)(*(int *)this + 900);
          guard_check_icall();
          iVar4 = (*pcVar1)();
          if (iVar4 != 0) {
            pcVar1 = *(code **)(*(int *)this + 0x388);
            guard_check_icall();
            (*pcVar1)();
          }
          pcVar1 = *(code **)(*(int *)this + 0x3e4);
          guard_check_icall();
          (*pcVar1)();
          goto LAB_1009c491;
        }
        local_24[9] = local_24[9] & 0xfffcffff;
        pcVar1 = *(code **)(*local_24 + 0x28);
        guard_check_icall(this);
        (*pcVar1)();
      }
      FUN_10051107(&local_24);
      pcVar1 = *(code **)(*(int *)this + 0x378);
      guard_check_icall(pCVar7);
      iVar4 = (*pcVar1)();
      if (iVar4 != 0) {
        *(int **)(this + 0xb88) = local_24;
      }
      if (local_20 != (CObject *)0x0) {
        pcVar1 = *(code **)(*(int *)this + 0x340);
        guard_check_icall(local_20,0xffffffff);
        (*pcVar1)();
        *(CObject **)(this + 0xd14) = local_20;
      }
      pcVar1 = *(code **)(*(int *)this + 0x3e4);
      guard_check_icall();
      (*pcVar1)();
      CArchive::operator>><wchar_t,StrTraitMFC<wchar_t,ATL::ChTraitsCRT<wchar_t>_>_>
                (param_1,(CStringT<wchar_t,StrTraitMFC<wchar_t,ATL::ChTraitsCRT<wchar_t>_>_> *)
                         local_18);
      BVar5 = IsWindow(*(HWND *)(this + 0x20));
      pCVar3 = DAT_1023d60c;
      if (BVar5 != 0) {
        FUN_1005979b(local_18[0]);
        pCVar3 = DAT_1023d60c;
      }
      while (pCVar3 != (CObject *)0x0) {
        local_20 = *(CObject **)pCVar3;
        iVar4 = FUN_10094bde(*(undefined4 *)(pCVar3 + 8),0);
        pCVar3 = local_20;
        if (-1 < iVar4) {
          pcVar1 = *(code **)(*(int *)this + 0x34c);
          guard_check_icall(iVar4);
          (*pcVar1)();
          pCVar3 = local_20;
        }
      }
      FUN_10051107(this + 0x13c);
    }
LAB_1009c491:
    FUN_100476d0();
  }
  return;
}

