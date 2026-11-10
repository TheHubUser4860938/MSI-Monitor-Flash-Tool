// rea decompile_all
// name: OnToolHitTest
// address: 0x100c5ff8
// body: available
// range: 0x100c5ff8-0x100c6186 inclusive
// non_contiguous: false
// provider: Ghidra 12.1.2 (ghidra)
// analysis_profile: b075844f08879296d957518397cd0ddda73db81dce53d00d3f0e702766fc2af6
// limitations: The session serves operations only after Ghidra reports default auto-analysis complete; incomplete analysis does not expose partial results.; The imported Program and temporary project are ephemeral and deleted on close. Annotation operations edit session database metadata; original executable bytes are never written.; Cancelling an active Ghidra request terminates its ephemeral database and discards session annotations. The selected target remains open; the next provider query imports the original artifact again.; Default-space addresses use lowercase 0x-prefixed hexadecimal; other address spaces use <percent-encoded-space>:0x<hex>.; The Ghidra Program references PDB WinOperateCScaler.pdb (GUID a6737962-efea-4805-8ae6-1fc1ef126554, age (hex) 1, signature unknown, version RSDS); Ghidra reports load state unknown. Original names and types may be missing; an empty name search does not prove a procedure is absent. Use list_procedures and address-based analysis to inspect recovered functions. REA does not admit a caller-selected PDB companion.; This session uses Ghidra 12.1.2. The bridge is verified against 12.1.4; other 12.1.x builds are accepted and the observed version is reported.; Pseudocode is Ghidra decompiler output, not original source and not text-equivalent to Hopper output.; External functions and functions without an analyzable body return null; other decompiler failures remain explicit.
// pseudocode: provider-specific; not original source


/* WARNING: Function: __EH_prolog3 replaced with injection: EH_prolog3 */
/* WARNING: Function: __EH_epilog3 replaced with injection: EH_epilog3 */
/* Library Function - Multiple Matches With Same Base Name
    protected: virtual int __thiscall CMFCPopupMenuBar::OnToolHitTest(class CPoint,struct
   tagTOOLINFOA *)const 
    protected: virtual int __thiscall CMFCPopupMenuBar::OnToolHitTest(class CPoint,struct
   tagTOOLINFOW *)const 
   
   Library: Visual Studio 2015 Release */

int OnToolHitTest(undefined4 param_1,undefined4 param_2,int param_3)

{
  code *pcVar1;
  int iVar2;
  CObject *pCVar3;
  CFrameWnd *pCVar4;
  CWnd *in_ECX;
  int local_20;
  int local_1c;
  int local_18;
  CObject *local_14;
  undefined4 local_8;
  undefined4 uStack_4;
  
  uStack_4 = 0x10;
  local_8 = 0x100c6004;
  if (*(int *)(in_ECX + 0xd78) == 0) {
    pcVar1 = *(code **)(*(int *)in_ECX + 0x390);
    guard_check_icall();
    iVar2 = (*pcVar1)();
    if (iVar2 != -1) {
      local_1c = iVar2;
      pCVar3 = (CObject *)FUN_1006a5a5();
      local_14 = AfxDynamicDownCast((CRuntimeClass *)&PTR_s_CMFCToolBarButton_10201a94,pCVar3);
      if (local_14 != (CObject *)0x0) {
        if (param_3 != 0) {
          *(undefined4 *)(param_3 + 0xc) = *(undefined4 *)(local_14 + 0x20);
          *(undefined4 *)(param_3 + 8) = *(undefined4 *)(in_ECX + 0x20);
          *(undefined4 *)(param_3 + 0x10) = *(undefined4 *)(local_14 + 0x54);
          *(undefined4 *)(param_3 + 0x14) = *(undefined4 *)(local_14 + 0x58);
          *(undefined4 *)(param_3 + 0x18) = *(undefined4 *)(local_14 + 0x5c);
          *(undefined4 *)(param_3 + 0x1c) = *(undefined4 *)(local_14 + 0x60);
        }
        pcVar1 = *(code **)(*(int *)local_14 + 0x7c);
        guard_check_icall();
        iVar2 = (*pcVar1)();
        if (iVar2 == 0) {
          iVar2 = *(int *)(local_14 + 0x20);
        }
        else {
          iVar2 = local_1c;
          if ((param_3 != 0) && (*(int *)(param_3 + 0x24) != 0)) {
            FUN_1001e20a();
            FUN_1001d224();
            local_8 = 0;
            if (*(int *)(param_3 + 0x24) != 0) {
              ATL::CSimpleStringT<wchar_t,0>::Append
                        ((CSimpleStringT<wchar_t,0> *)&local_20,*(wchar_t **)(param_3 + 0x24));
              FID_conflict__free(*(void **)(param_3 + 0x24));
            }
            FUN_1001e20a();
            FUN_1001d224();
            local_8 = CONCAT31(local_8._1_3_,1);
            pCVar4 = CWnd::GetParentFrame(in_ECX);
            if (((pCVar4 != (CFrameWnd *)0x0) && (*(int *)(pCVar4 + 0x20) != 0)) &&
               (iVar2 = FUN_100250d6(), iVar2 == 0)) {
              pcVar1 = *(code **)(*(int *)pCVar4 + 0x174);
              guard_check_icall();
              (*pcVar1)();
            }
            local_14 = (CObject *)&stack0xffffffc8;
            FUN_100187a0((CStringData *)(local_20 + -0x10));
            CTooltipManager::SetTooltipText(param_3,*(undefined4 *)(in_ECX + 0xd08),2);
            ATL::CStringData::Release((CStringData *)(local_18 + -0x10));
            ATL::CStringData::Release((CStringData *)(local_20 + -0x10));
            iVar2 = local_1c;
          }
        }
      }
    }
  }
  else {
    iVar2 = CMFCToolBar::OnToolHitTest((CMFCToolBar *)in_ECX,param_1);
  }
  return iVar2;
}

