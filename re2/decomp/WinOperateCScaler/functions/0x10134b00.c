// rea decompile_all
// name: FUN_10134b00
// address: 0x10134b00
// body: available
// range: 0x10134b00-0x10134d17 inclusive
// non_contiguous: false
// provider: Ghidra 12.1.2 (ghidra)
// analysis_profile: b075844f08879296d957518397cd0ddda73db81dce53d00d3f0e702766fc2af6
// limitations: The session serves operations only after Ghidra reports default auto-analysis complete; incomplete analysis does not expose partial results.; The imported Program and temporary project are ephemeral and deleted on close. Annotation operations edit session database metadata; original executable bytes are never written.; Cancelling an active Ghidra request terminates its ephemeral database and discards session annotations. The selected target remains open; the next provider query imports the original artifact again.; Default-space addresses use lowercase 0x-prefixed hexadecimal; other address spaces use <percent-encoded-space>:0x<hex>.; Ghidra Listing reports a terminal call at 0x10134d17 with no resolved callee; its no-return basis is unknown.; The Ghidra Program references PDB WinOperateCScaler.pdb (GUID a6737962-efea-4805-8ae6-1fc1ef126554, age (hex) 1, signature unknown, version RSDS); Ghidra reports load state unknown. Original names and types may be missing; an empty name search does not prove a procedure is absent. Use list_procedures and address-based analysis to inspect recovered functions. REA does not admit a caller-selected PDB companion.; This session uses Ghidra 12.1.2. The bridge is verified against 12.1.4; other 12.1.x builds are accepted and the observed version is reported.; Pseudocode is Ghidra decompiler output, not original source and not text-equivalent to Hopper output.; External functions and functions without an analyzable body return null; other decompiler failures remain explicit.
// pseudocode: provider-specific; not original source


/* WARNING: Function: __EH_prolog3 replaced with injection: EH_prolog3 */
/* WARNING: Function: __EH_epilog3 replaced with injection: EH_epilog3 */

__POSITION * FUN_10134b00(int param_1)

{
  code *pcVar1;
  undefined4 *puVar2;
  int iVar3;
  CObject *pCVar4;
  CWnd *pCVar5;
  __POSITION *p_Var6;
  CDockablePane *pCVar7;
  int in_ECX;
  __POSITION *p_Var8;
  int local_20;
  __POSITION *local_1c;
  CDockingManager *local_18;
  uint local_14 [3];
  undefined4 local_8;
  undefined4 uStack_4;
  
  uStack_4 = 0x10;
  local_8 = 0x10134b0c;
  if ((~*(uint *)(param_1 + 0x18) & 1) == 0) {
    pcVar1 = *(code **)(**(int **)(in_ECX + 0x3c) + 8);
    local_20 = in_ECX;
    guard_check_icall(param_1);
    (*pcVar1)();
    if (*(int **)(in_ECX + 0x44) == (int *)0x0) {
      iVar3 = FUN_100250d6(&PTR_s_CPaneFrameWnd_102018e4);
      if (iVar3 == 0) goto LAB_10134ce3;
      pCVar5 = CWnd::FromHandlePermanent(*(HWND__ **)(*(int *)(in_ECX + 0x4c) + 200));
    }
    else {
      pcVar1 = *(code **)(**(int **)(in_ECX + 0x44) + 0x19c);
      guard_check_icall(param_1);
      pCVar5 = (CWnd *)(*pcVar1)();
    }
    local_18 = CGlobalUtils::GetDockingManager((CGlobalUtils *)&PTR_vftable_1020194c,pCVar5);
    if (local_18 == (CDockingManager *)0x0) {
LAB_10134ce3:
      local_1c = (__POSITION *)FUN_1001cfa0(0x10);
      local_20 = 0;
      local_8 = 0;
      if (local_1c != (__POSITION *)0x0) {
        local_20 = CArchiveException::CArchiveException((CArchiveException *)local_1c,0,(char *)0x0)
        ;
      }
      local_8 = 0xffffffff;
      __CxxThrowException_8(&local_20,&DAT_101ee948);
      pcVar1 = (code *)swi(3);
      p_Var6 = (__POSITION *)(*pcVar1)();
      return p_Var6;
    }
    local_1c = (__POSITION *)0x0;
    p_Var6 = (__POSITION *)FUN_10026405(&local_1c);
    local_14[0] = 0;
    p_Var8 = local_1c;
    if (0 < (int)local_1c) {
      do {
        FUN_10026405(local_14);
        if (local_14[0] == 0xffffffff) {
          FUN_10026405(local_14);
          pCVar7 = CPaneContainer::FindTabbedPane(*(CPaneContainer **)(local_20 + 0x3c),local_14[0])
          ;
          p_Var6 = (__POSITION *)0x0;
          if (pCVar7 != (CDockablePane *)0x0) {
            p_Var6 = CObList::AddTail((CObList *)(local_20 + 4),(CObject *)pCVar7);
          }
        }
        else {
          pcVar1 = *(code **)(*(int *)local_18 + 0x24);
          guard_check_icall(local_14[0],1);
          pCVar4 = (CObject *)(*pcVar1)();
          pCVar4 = AfxDynamicDownCast((CRuntimeClass *)&PTR_s_CDockablePane_10201ba4,pCVar4);
          p_Var6 = (__POSITION *)0x0;
          if (pCVar4 != (CObject *)0x0) {
            CObList::AddTail((CObList *)(local_20 + 4),pCVar4);
            p_Var6 = (__POSITION *)
                     CPaneContainer::SetUpByID
                               (*(CPaneContainer **)(local_20 + 0x3c),local_14[0],
                                (CDockablePane *)pCVar4);
          }
        }
        p_Var8 = p_Var8 + -1;
      } while (p_Var8 != (__POSITION *)0x0);
    }
  }
  else {
    CPaneContainer::ReleaseEmptyPaneContainer(*(CPaneContainer **)(in_ECX + 0x3c));
    pcVar1 = *(code **)(**(int **)(in_ECX + 0x3c) + 8);
    guard_check_icall(param_1);
    (*pcVar1)();
    FUN_10025aff(*(undefined4 *)(in_ECX + 0x10));
    local_18 = *(CDockingManager **)(in_ECX + 8);
    p_Var6 = (__POSITION *)0x0;
    if (local_18 != (CDockingManager *)0x0) {
      local_1c = (__POSITION *)(in_ECX + 4);
      do {
        puVar2 = (undefined4 *)FUN_100972dc(&local_18);
        pCVar5 = (CWnd *)*puVar2;
        iVar3 = CWnd::GetDlgCtrlID(pCVar5);
        if (iVar3 == -1) {
          pCVar4 = AfxDynamicDownCast((CRuntimeClass *)&PTR_s_CBaseTabbedPane_101bf638,
                                      (CObject *)pCVar5);
          pcVar1 = *(code **)(*(int *)pCVar4 + 0x3cc);
          guard_check_icall(0,0);
          pCVar5 = (CWnd *)(*pcVar1)();
          if (pCVar5 != (CWnd *)0x0) {
            iVar3 = CWnd::GetDlgCtrlID(pCVar5);
            FUN_10025aff(0xffffffff);
            goto LAB_10134b76;
          }
        }
        else {
LAB_10134b76:
          FUN_10025aff(iVar3);
        }
        p_Var6 = local_1c;
      } while (local_18 != (CDockingManager *)0x0);
    }
  }
  return p_Var6;
}

