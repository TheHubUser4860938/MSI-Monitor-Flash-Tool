// rea decompile_all
// name: CBaseTabbedPane::AddTab
// address: 0x100cdac7
// body: available
// range: 0x100cdac7-0x100cde02 inclusive
// non_contiguous: false
// provider: Ghidra 12.1.2 (ghidra)
// analysis_profile: b075844f08879296d957518397cd0ddda73db81dce53d00d3f0e702766fc2af6
// limitations: The session serves operations only after Ghidra reports default auto-analysis complete; incomplete analysis does not expose partial results.; The imported Program and temporary project are ephemeral and deleted on close. Annotation operations edit session database metadata; original executable bytes are never written.; Cancelling an active Ghidra request terminates its ephemeral database and discards session annotations. The selected target remains open; the next provider query imports the original artifact again.; Default-space addresses use lowercase 0x-prefixed hexadecimal; other address spaces use <percent-encoded-space>:0x<hex>.; The Ghidra Program references PDB WinOperateCScaler.pdb (GUID a6737962-efea-4805-8ae6-1fc1ef126554, age (hex) 1, signature unknown, version RSDS); Ghidra reports load state unknown. Original names and types may be missing; an empty name search does not prove a procedure is absent. Use list_procedures and address-based analysis to inspect recovered functions. REA does not admit a caller-selected PDB companion.; This session uses Ghidra 12.1.2. The bridge is verified against 12.1.4; other 12.1.x builds are accepted and the observed version is reported.; Pseudocode is Ghidra decompiler output, not original source and not text-equivalent to Hopper output.; External functions and functions without an analyzable body return null; other decompiler failures remain explicit.
// pseudocode: provider-specific; not original source


/* WARNING: Function: __EH_prolog3 replaced with injection: EH_prolog3 */
/* WARNING: Function: __EH_epilog3 replaced with injection: EH_epilog3 */
/* Library Function - Single Match
    public: virtual int __thiscall CBaseTabbedPane::AddTab(class CWnd *,int,int,int)
   
   Library: Visual Studio 2015 Release */

int __thiscall
CBaseTabbedPane::AddTab(CBaseTabbedPane *this,CWnd *param_1,int param_2,int param_3,int param_4)

{
  code *pcVar1;
  CBaseTabbedPane *pCVar2;
  int iVar3;
  CObject *pCVar4;
  int *piVar5;
  int iVar6;
  CObject *pCVar7;
  undefined4 uVar8;
  undefined4 uVar9;
  HWND pHVar10;
  CWnd *pCVar11;
  LRESULT LVar12;
  int local_18;
  CBaseTabbedPane *local_14;
  undefined4 local_8;
  undefined4 uStack_4;
  
  uStack_4 = 0x1c;
  local_8 = 0x100cdad3;
  local_14 = this;
  iVar3 = FUN_100250d6(&PTR_s_CBaseTabbedPane_101bf638);
  if (iVar3 == 0) {
    iVar3 = FUN_100250d6(&PTR_s_CPane_101b279c);
    if (iVar3 != 0) {
      pCVar4 = AfxDynamicDownCast((CRuntimeClass *)&PTR_s_CPane_101b279c,(CObject *)param_1);
      pHVar10 = GetParent(*(HWND *)(pCVar4 + 0x20));
      pCVar11 = CWnd::FromHandle(pHVar10);
      pcVar1 = *(code **)(*(int *)pCVar4 + 0x21c);
      guard_check_icall(*(undefined4 *)(this + 0x370),1);
      (*pcVar1)();
      CWnd::SetParent((CWnd *)pCVar4,*(CWnd **)(local_14 + 0x370));
      pcVar1 = *(code **)(*(int *)pCVar4 + 0x220);
      guard_check_icall(pCVar11);
      (*pcVar1)();
      iVar3 = FUN_100250d6(&PTR_s_CDockablePane_10201ba4);
      this = local_14;
      if (iVar3 != 0) {
        pcVar1 = *(code **)(*(int *)pCVar4 + 0x1f0);
        guard_check_icall(0);
        (*pcVar1)();
        this = local_14;
      }
    }
    uVar8 = FUN_1001e20a();
    FUN_1001d224(uVar8);
    local_8 = 0;
    CWnd::GetWindowTextW
              (param_1,(CStringT<wchar_t,StrTraitMFC<wchar_t,ATL::ChTraitsCRT<wchar_t>_>_> *)
                       &local_18);
    pcVar1 = *(code **)(**(int **)(this + 0x370) + 0x18c);
    guard_check_icall(param_1,local_18,param_3,param_4);
    (*pcVar1)();
    pcVar1 = *(code **)(**(int **)(local_14 + 0x370) + 0x1ac);
    guard_check_icall();
    iVar3 = (*pcVar1)();
    iVar3 = iVar3 + -1;
    LVar12 = SendMessageW(*(HWND *)(param_1 + 0x20),0x7f,0,0);
    pCVar2 = local_14;
    pcVar1 = *(code **)(**(int **)(local_14 + 0x370) + 0x1d4);
    guard_check_icall(iVar3,LVar12);
    (*pcVar1)();
    pcVar1 = *(code **)(**(int **)(pCVar2 + 0x370) + 500);
    guard_check_icall(iVar3,param_4);
    (*pcVar1)();
    if (param_2 == 0) {
      pcVar1 = *(code **)(**(int **)(pCVar2 + 0x370) + 0x1a8);
      guard_check_icall(iVar3,0,1,0);
      (*pcVar1)();
    }
    else if (param_3 != 0) {
      pcVar1 = *(code **)(**(int **)(pCVar2 + 0x370) + 0x214);
      guard_check_icall(iVar3);
      (*pcVar1)();
    }
    ATL::CStringData::Release((CStringData *)(local_18 + -0x10));
    iVar3 = 1;
  }
  else {
    pCVar4 = AfxDynamicDownCast((CRuntimeClass *)&PTR_s_CBaseTabbedPane_101bf638,(CObject *)param_1)
    ;
    pcVar1 = *(code **)(*(int *)this + 0x228);
    guard_check_icall(0);
    iVar3 = (*pcVar1)();
    pcVar1 = *(code **)(*(int *)pCVar4 + 0x3a0);
    guard_check_icall();
    piVar5 = (int *)(*pcVar1)();
    pcVar1 = *(code **)(*piVar5 + 0x1ac);
    guard_check_icall();
    iVar6 = (*pcVar1)();
    local_18 = 0;
    if (0 < iVar6) {
      do {
        pcVar1 = *(code **)(*piVar5 + 0x1b0);
        guard_check_icall(local_18);
        pCVar7 = (CObject *)(*pcVar1)();
        pCVar7 = AfxDynamicDownCast((CRuntimeClass *)&PTR_s_CBasePane_101b236c,pCVar7);
        pcVar1 = *(code **)(*piVar5 + 0x27c);
        guard_check_icall(local_18);
        uVar8 = (*pcVar1)();
        pcVar1 = *(code **)(*piVar5 + 0x1f0);
        guard_check_icall(local_18);
        uVar9 = (*pcVar1)();
        pcVar1 = *(code **)(*(int *)pCVar7 + 0x1f0);
        guard_check_icall(0);
        (*pcVar1)();
        pcVar1 = *(code **)(*(int *)local_14 + 0x3b4);
        guard_check_icall(pCVar7,uVar8,uVar8,uVar9);
        (*pcVar1)();
        pCVar7 = AfxDynamicDownCast((CRuntimeClass *)&PTR_s_CDockablePane_10201ba4,pCVar7);
        if (pCVar7 != (CObject *)0x0) {
          pcVar1 = *(code **)(*(int *)(pCVar7 + 0x1e4) + 0x10);
          guard_check_icall(iVar3 != 0,pCVar4 + 0x1e4);
          (*pcVar1)();
        }
        local_18 = local_18 + 1;
      } while (local_18 < iVar6);
    }
    pcVar1 = *(code **)(*piVar5 + 0x19c);
    guard_check_icall();
    (*pcVar1)();
    pcVar1 = *(code **)(*(int *)param_1 + 0x60);
    guard_check_icall();
    (*pcVar1)();
    iVar3 = 0;
  }
  return iVar3;
}

