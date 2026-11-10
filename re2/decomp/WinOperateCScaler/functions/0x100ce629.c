// rea decompile_all
// name: CBaseTabbedPane::FloatTab
// address: 0x100ce629
// body: available
// range: 0x100ce629-0x100ce7fd inclusive
// non_contiguous: false
// provider: Ghidra 12.1.2 (ghidra)
// analysis_profile: b075844f08879296d957518397cd0ddda73db81dce53d00d3f0e702766fc2af6
// limitations: The session serves operations only after Ghidra reports default auto-analysis complete; incomplete analysis does not expose partial results.; The imported Program and temporary project are ephemeral and deleted on close. Annotation operations edit session database metadata; original executable bytes are never written.; Cancelling an active Ghidra request terminates its ephemeral database and discards session annotations. The selected target remains open; the next provider query imports the original artifact again.; Default-space addresses use lowercase 0x-prefixed hexadecimal; other address spaces use <percent-encoded-space>:0x<hex>.; The Ghidra Program references PDB WinOperateCScaler.pdb (GUID a6737962-efea-4805-8ae6-1fc1ef126554, age (hex) 1, signature unknown, version RSDS); Ghidra reports load state unknown. Original names and types may be missing; an empty name search does not prove a procedure is absent. Use list_procedures and address-based analysis to inspect recovered functions. REA does not admit a caller-selected PDB companion.; This session uses Ghidra 12.1.2. The bridge is verified against 12.1.4; other 12.1.x builds are accepted and the observed version is reported.; Pseudocode is Ghidra decompiler output, not original source and not text-equivalent to Hopper output.; External functions and functions without an analyzable body return null; other decompiler failures remain explicit.
// pseudocode: provider-specific; not original source


/* WARNING: Function: __EH_prolog3 replaced with injection: EH_prolog3 */
/* WARNING: Function: __EH_epilog3 replaced with injection: EH_epilog3 */
/* Library Function - Single Match
    public: virtual int __thiscall CBaseTabbedPane::FloatTab(class CWnd *,int,enum
   AFX_DOCK_METHOD,int)
   
   Library: Visual Studio 2015 Release */

int __thiscall
CBaseTabbedPane::FloatTab
          (CBaseTabbedPane *this,CWnd *param_1,int param_2,AFX_DOCK_METHOD param_3,int param_4)

{
  code *pcVar1;
  undefined4 uVar2;
  int iVar3;
  CObject *pCVar4;
  CObject *pCVar5;
  BOOL BVar6;
  CWnd *pCVar7;
  int local_18;
  int local_14 [3];
  undefined4 local_8;
  undefined4 uStack_4;
  
  uStack_4 = 0xc;
  local_8 = 0x100ce635;
  uVar2 = FUN_1001e20a();
  FUN_1001d224(uVar2);
  local_8 = 0;
  CWnd::GetWindowTextW
            (param_1,(CStringT<wchar_t,StrTraitMFC<wchar_t,ATL::ChTraitsCRT<wchar_t>_>_> *)local_14)
  ;
  if (*(int *)(local_14[0] + -0xc) == 0) {
    pcVar1 = *(code **)(**(int **)(this + 0x370) + 0x1bc);
    guard_check_icall(param_2,local_14);
    iVar3 = (*pcVar1)();
    if (iVar3 != 0) {
      FUN_1002da47(local_14[0]);
    }
  }
  uVar2 = 1;
  local_18 = 1;
  pcVar1 = *(code **)(**(int **)(this + 0x370) + 0x198);
  guard_check_icall(param_2,1);
  (*pcVar1)();
  if (param_3 == 1) {
    SendMessageW(*(HWND *)(*(int *)(this + 0x370) + 0x20),0x202,0,0);
  }
  pCVar4 = AfxDynamicDownCast((CRuntimeClass *)&PTR_s_CDockablePane_10201ba4,(CObject *)param_1);
  if (pCVar4 != (CObject *)0x0) {
    pcVar1 = *(code **)(*(int *)pCVar4 + 0x378);
    guard_check_icall(param_2,uVar2);
    (*pcVar1)();
  }
  if ((param_3 == 2) && (pCVar4 != (CObject *)0x0)) {
    pcVar1 = *(code **)(*(int *)this + 0x228);
    guard_check_icall(0);
    pCVar5 = (CObject *)(*pcVar1)();
    pCVar5 = AfxDynamicDownCast((CRuntimeClass *)&PTR_s_CMultiPaneFrameWnd_10201958,pCVar5);
    if (pCVar5 != (CObject *)0x0) {
      pcVar1 = *(code **)(*(int *)pCVar5 + 0x254);
      guard_check_icall(pCVar4);
      (*pcVar1)();
      goto LAB_100ce7e8;
    }
    if (*(HWND *)(this + 0x350) != (HWND)0x0) {
      BVar6 = IsWindow(*(HWND *)(this + 0x350));
      if (BVar6 != 0) {
        pCVar7 = CWnd::FromHandlePermanent(*(HWND__ **)(pCVar4 + 0x210));
        pCVar5 = AfxDynamicDownCast((CRuntimeClass *)&PTR_s_CMultiPaneFrameWnd_10201958,
                                    (CObject *)pCVar7);
        if (pCVar5 != (CObject *)0x0) {
          pcVar1 = *(code **)(*(int *)pCVar5 + 0x250);
          guard_check_icall(pCVar4);
          iVar3 = (*pcVar1)();
          if (iVar3 != 0) goto LAB_100ce7e8;
        }
      }
    }
  }
  iVar3 = FUN_100250d6(&PTR_s_CPane_101b279c);
  if (iVar3 == 0) {
    local_18 = 0;
  }
  else {
    pCVar4 = AfxDynamicDownCast((CRuntimeClass *)&PTR_s_CPane_101b279c,(CObject *)param_1);
    pcVar1 = *(code **)(*(int *)pCVar4 + 0x1fc);
    guard_check_icall(*(undefined4 *)(pCVar4 + 0x1e8),*(undefined4 *)(pCVar4 + 0x1ec),
                      *(undefined4 *)(pCVar4 + 0x1f0),*(undefined4 *)(pCVar4 + 500),param_3,
                      param_4 == 0);
    (*pcVar1)();
  }
LAB_100ce7e8:
  ATL::CStringData::Release((CStringData *)(local_14[0] + -0x10));
  return local_18;
}

