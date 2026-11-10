// rea decompile_all
// name: OnToolHitTest
// address: 0x100bac67
// body: available
// range: 0x100bac67-0x100badf5 inclusive
// non_contiguous: false
// provider: Ghidra 12.1.2 (ghidra)
// analysis_profile: b075844f08879296d957518397cd0ddda73db81dce53d00d3f0e702766fc2af6
// limitations: The session serves operations only after Ghidra reports default auto-analysis complete; incomplete analysis does not expose partial results.; The imported Program and temporary project are ephemeral and deleted on close. Annotation operations edit session database metadata; original executable bytes are never written.; Cancelling an active Ghidra request terminates its ephemeral database and discards session annotations. The selected target remains open; the next provider query imports the original artifact again.; Default-space addresses use lowercase 0x-prefixed hexadecimal; other address spaces use <percent-encoded-space>:0x<hex>.; The Ghidra Program references PDB Comm.pdb (GUID c3062acb-498d-45fa-a233-c8b7e401bb13, age (hex) 1, signature unknown, version RSDS); Ghidra reports load state unknown. Original names and types may be missing; an empty name search does not prove a procedure is absent. Use list_procedures and address-based analysis to inspect recovered functions. REA does not admit a caller-selected PDB companion.; This session uses Ghidra 12.1.2. The bridge is verified against 12.1.4; other 12.1.x builds are accepted and the observed version is reported.; Pseudocode is Ghidra decompiler output, not original source and not text-equivalent to Hopper output.; External functions and functions without an analyzable body return null; other decompiler failures remain explicit.
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
  int iVar4;
  CFrameWnd *pCVar5;
  CWnd *in_ECX;
  int local_20;
  
  if (*(int *)(in_ECX + 0xd78) == 0) {
    pcVar1 = *(code **)(*(int *)in_ECX + 0x390);
    guard_check_icall();
    iVar2 = (*pcVar1)();
    if (iVar2 != -1) {
      pCVar3 = (CObject *)FUN_1005f070();
      pCVar3 = AfxDynamicDownCast((CRuntimeClass *)&PTR_s_CMFCToolBarButton_101d3a8c,pCVar3);
      if (pCVar3 != (CObject *)0x0) {
        if (param_3 != 0) {
          *(undefined4 *)(param_3 + 0xc) = *(undefined4 *)(pCVar3 + 0x20);
          *(undefined4 *)(param_3 + 8) = *(undefined4 *)(in_ECX + 0x20);
          *(undefined4 *)(param_3 + 0x10) = *(undefined4 *)(pCVar3 + 0x54);
          *(undefined4 *)(param_3 + 0x14) = *(undefined4 *)(pCVar3 + 0x58);
          *(undefined4 *)(param_3 + 0x18) = *(undefined4 *)(pCVar3 + 0x5c);
          *(undefined4 *)(param_3 + 0x1c) = *(undefined4 *)(pCVar3 + 0x60);
        }
        pcVar1 = *(code **)(*(int *)pCVar3 + 0x7c);
        guard_check_icall();
        iVar4 = (*pcVar1)();
        if (iVar4 == 0) {
          iVar2 = *(int *)(pCVar3 + 0x20);
        }
        else if ((param_3 != 0) && (*(int *)(param_3 + 0x24) != 0)) {
          FUN_10013071();
          FUN_10003190();
          if (*(int *)(param_3 + 0x24) != 0) {
            FUN_10003780();
            FID_conflict__free(*(void **)(param_3 + 0x24));
          }
          FUN_10013071();
          FUN_10003190();
          pCVar5 = CWnd::GetParentFrame(in_ECX);
          if (((pCVar5 != (CFrameWnd *)0x0) && (*(int *)(pCVar5 + 0x20) != 0)) &&
             (iVar4 = FUN_10019d4f(), iVar4 == 0)) {
            pcVar1 = *(code **)(*(int *)pCVar5 + 0x174);
            guard_check_icall();
            (*pcVar1)();
          }
          FUN_10003060(local_20 + -0x10);
          CTooltipManager::SetTooltipText(param_3,*(undefined4 *)(in_ECX + 0xd08),2);
          FUN_10003460();
          FUN_10003460();
        }
      }
    }
  }
  else {
    iVar2 = CMFCToolBar::OnToolHitTest((CMFCToolBar *)in_ECX,param_1);
  }
  return iVar2;
}

