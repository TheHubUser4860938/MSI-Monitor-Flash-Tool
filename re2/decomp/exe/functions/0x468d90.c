// rea decompile_all
// name: CDockingManager::GetPaneList
// address: 0x468d90
// body: available
// range: 0x468d90-0x468f6d inclusive
// non_contiguous: false
// provider: Ghidra 12.1.2 (ghidra)
// analysis_profile: ac6d50be2cdf54f7005df47d1ed7e7ef55dee595681eb1b7c2e0b00d70cd697d
// limitations: The session serves operations only after Ghidra reports default auto-analysis complete; incomplete analysis does not expose partial results.; The imported Program and temporary project are ephemeral and deleted on close. Annotation operations edit session database metadata; original executable bytes are never written.; Cancelling an active Ghidra request terminates its ephemeral database and discards session annotations. The selected target remains open; the next provider query imports the original artifact again.; Default-space addresses use lowercase 0x-prefixed hexadecimal; other address spaces use <percent-encoded-space>:0x<hex>.; The Ghidra Program references PDB ISPToolForMsi.pdb (GUID b8f2ac8f-1d6f-438d-800f-ed4a14426ac6, age (hex) 1, signature unknown, version RSDS); Ghidra reports load state unknown. Original names and types may be missing; an empty name search does not prove a procedure is absent. Use list_procedures and address-based analysis to inspect recovered functions. REA does not admit a caller-selected PDB companion.; This session uses Ghidra 12.1.2. The bridge is verified against 12.1.4; other 12.1.x builds are accepted and the observed version is reported.; Pseudocode is Ghidra decompiler output, not original source and not text-equivalent to Hopper output.; External functions and functions without an analyzable body return null; other decompiler failures remain explicit.
// pseudocode: provider-specific; not original source


/* Library Function - Single Match
    public: void __thiscall CDockingManager::GetPaneList(class CObList &,int,struct CRuntimeClass
   *,int)
   
   Library: Visual Studio 2015 Release */

void __thiscall
CDockingManager::GetPaneList
          (CDockingManager *this,CObList *param_1,int param_2,CRuntimeClass *param_3,int param_4)

{
  code *pcVar1;
  undefined4 *puVar2;
  CObject *pCVar3;
  int iVar4;
  CObject *pCVar5;
  CRuntimeClass *pCVar6;
  CBasePane *pCVar7;
  int local_14;
  CObject *local_10;
  int local_c;
  CObject *local_8;
  
  local_14 = *(int *)(this + 0x24);
joined_r0x00468da7:
  if (local_14 != 0) {
    puVar2 = (undefined4 *)FUN_004ead48(&local_14);
    pCVar3 = AfxDynamicDownCast((CRuntimeClass *)&PTR_s_CBasePane_005c4284,(CObject *)*puVar2);
    local_10 = pCVar3;
    iVar4 = FUN_0043970d(&PTR_s_CDockSite_005bb9f0);
    if (iVar4 == 0) {
      iVar4 = FUN_0043970d(&PTR_s_CTabbedPane_0060c64c);
      if ((iVar4 != 0) && (param_4 != 0)) {
        pCVar3 = AfxDynamicDownCast((CRuntimeClass *)&PTR_s_CTabbedPane_0060c64c,pCVar3);
        pcVar1 = *(code **)(*(int *)pCVar3 + 1000);
        guard_check_icall(param_1,param_3);
        (*pcVar1)();
        pCVar3 = local_10;
      }
    }
    else {
      pCVar5 = AfxDynamicDownCast((CRuntimeClass *)&PTR_s_CDockSite_005bb9f0,pCVar3);
      local_8 = pCVar5 + 0x110;
      local_c = *(int *)(pCVar5 + 0x114);
joined_r0x00468dfe:
      if (local_c != 0) {
        pCVar3 = (CObject *)FUN_0043410a(&local_c);
        local_8 = AfxDynamicDownCast((CRuntimeClass *)&PTR_s_CBasePane_005c4284,pCVar3);
        if (param_3 != (CRuntimeClass *)0x0) goto code_r0x00468e25;
        goto LAB_00468e3c;
      }
    }
    if (param_3 != (CRuntimeClass *)0x0) goto code_r0x00468e90;
    goto LAB_00468ea3;
  }
  local_14 = 0;
  if (param_2 != 0) {
    local_14 = *(int *)(this + 0x40);
joined_r0x00468ece:
    if (local_14 != 0) {
      puVar2 = (undefined4 *)FUN_004ead48(&local_14);
      pCVar3 = AfxDynamicDownCast((CRuntimeClass *)&PTR_s_CBasePane_005c4284,(CObject *)*puVar2);
      iVar4 = FUN_0043970d(&PTR_s_CPaneDivider_005c46c4);
      if ((iVar4 != 0) &&
         (pCVar3 = AfxDynamicDownCast((CRuntimeClass *)&PTR_s_CPaneDivider_005c46c4,pCVar3),
         pCVar3 != (CObject *)0x0)) {
        pCVar7 = CPaneDivider::GetFirstPane((CPaneDivider *)pCVar3);
        pCVar3 = AfxDynamicDownCast((CRuntimeClass *)&PTR_s_CBasePane_005c4284,(CObject *)pCVar7);
        if (pCVar3 != (CObject *)0x0) {
          if (param_3 != (CRuntimeClass *)0x0) {
            pcVar1 = (code *)**(undefined4 **)pCVar3;
            guard_check_icall();
            pCVar6 = (CRuntimeClass *)(*pcVar1)();
            if (pCVar6 != param_3) goto joined_r0x00468ece;
          }
          CObList::AddTail(param_1,pCVar3);
        }
      }
      goto joined_r0x00468ece;
    }
  }
  CPaneFrameWnd::GetPaneList(param_1,param_3,param_4);
  return;
code_r0x00468e25:
  pcVar1 = (code *)**(undefined4 **)local_8;
  guard_check_icall();
  pCVar6 = (CRuntimeClass *)(*pcVar1)();
  pCVar3 = local_10;
  if (pCVar6 == param_3) {
LAB_00468e3c:
    CObList::AddTail(param_1,local_8);
    pCVar3 = local_10;
  }
  goto joined_r0x00468dfe;
code_r0x00468e90:
  pcVar1 = (code *)**(undefined4 **)pCVar3;
  guard_check_icall();
  pCVar6 = (CRuntimeClass *)(*pcVar1)();
  if (pCVar6 == param_3) {
LAB_00468ea3:
    CObList::AddTail(param_1,pCVar3);
  }
  goto joined_r0x00468da7;
}

