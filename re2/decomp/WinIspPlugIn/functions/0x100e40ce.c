// rea decompile_all
// name: CDockingManager::GetPaneList
// address: 0x100e40ce
// body: available
// range: 0x100e40ce-0x100e42ab inclusive
// non_contiguous: false
// provider: Ghidra 12.1.2 (ghidra)
// analysis_profile: b075844f08879296d957518397cd0ddda73db81dce53d00d3f0e702766fc2af6
// limitations: The session serves operations only after Ghidra reports default auto-analysis complete; incomplete analysis does not expose partial results.; The imported Program and temporary project are ephemeral and deleted on close. Annotation operations edit session database metadata; original executable bytes are never written.; Cancelling an active Ghidra request terminates its ephemeral database and discards session annotations. The selected target remains open; the next provider query imports the original artifact again.; Default-space addresses use lowercase 0x-prefixed hexadecimal; other address spaces use <percent-encoded-space>:0x<hex>.; The Ghidra Program references PDB WinIspPlugIn.pdb (GUID d9f398c7-6c98-49a8-af25-a0659d5ad2f3, age (hex) 1, signature unknown, version RSDS); Ghidra reports load state unknown. Original names and types may be missing; an empty name search does not prove a procedure is absent. Use list_procedures and address-based analysis to inspect recovered functions. REA does not admit a caller-selected PDB companion.; This session uses Ghidra 12.1.2. The bridge is verified against 12.1.4; other 12.1.x builds are accepted and the observed version is reported.; Pseudocode is Ghidra decompiler output, not original source and not text-equivalent to Hopper output.; External functions and functions without an analyzable body return null; other decompiler failures remain explicit.
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
joined_r0x100e40e5:
  if (local_14 != 0) {
    puVar2 = (undefined4 *)FUN_100c321b(&local_14);
    pCVar3 = AfxDynamicDownCast((CRuntimeClass *)&PTR_s_CBasePane_101de5b4,(CObject *)*puVar2);
    local_10 = pCVar3;
    iVar4 = FUN_10051e53(&PTR_s_CDockSite_101ec5c4);
    if (iVar4 == 0) {
      iVar4 = FUN_10051e53(&PTR_s_CTabbedPane_1023d9c0);
      if ((iVar4 != 0) && (param_4 != 0)) {
        pCVar3 = AfxDynamicDownCast((CRuntimeClass *)&PTR_s_CTabbedPane_1023d9c0,pCVar3);
        pcVar1 = *(code **)(*(int *)pCVar3 + 1000);
        guard_check_icall(param_1,param_3);
        (*pcVar1)();
        pCVar3 = local_10;
      }
    }
    else {
      pCVar5 = AfxDynamicDownCast((CRuntimeClass *)&PTR_s_CDockSite_101ec5c4,pCVar3);
      local_8 = pCVar5 + 0x110;
      local_c = *(int *)(pCVar5 + 0x114);
joined_r0x100e413c:
      if (local_c != 0) {
        pCVar3 = (CObject *)FUN_10096856(&local_c);
        local_8 = AfxDynamicDownCast((CRuntimeClass *)&PTR_s_CBasePane_101de5b4,pCVar3);
        if (param_3 != (CRuntimeClass *)0x0) goto code_r0x100e4163;
        goto LAB_100e417a;
      }
    }
    if (param_3 != (CRuntimeClass *)0x0) goto code_r0x100e41ce;
    goto LAB_100e41e1;
  }
  local_14 = 0;
  if (param_2 != 0) {
    local_14 = *(int *)(this + 0x40);
joined_r0x100e420c:
    if (local_14 != 0) {
      puVar2 = (undefined4 *)FUN_100c321b(&local_14);
      pCVar3 = AfxDynamicDownCast((CRuntimeClass *)&PTR_s_CBasePane_101de5b4,(CObject *)*puVar2);
      iVar4 = FUN_10051e53(&PTR_s_CPaneDivider_101f8380);
      if ((iVar4 != 0) &&
         (pCVar3 = AfxDynamicDownCast((CRuntimeClass *)&PTR_s_CPaneDivider_101f8380,pCVar3),
         pCVar3 != (CObject *)0x0)) {
        pCVar7 = CPaneDivider::GetFirstPane((CPaneDivider *)pCVar3);
        pCVar3 = AfxDynamicDownCast((CRuntimeClass *)&PTR_s_CBasePane_101de5b4,(CObject *)pCVar7);
        if (pCVar3 != (CObject *)0x0) {
          if (param_3 != (CRuntimeClass *)0x0) {
            pcVar1 = (code *)**(undefined4 **)pCVar3;
            guard_check_icall();
            pCVar6 = (CRuntimeClass *)(*pcVar1)();
            if (pCVar6 != param_3) goto joined_r0x100e420c;
          }
          CObList::AddTail(param_1,pCVar3);
        }
      }
      goto joined_r0x100e420c;
    }
  }
  CPaneFrameWnd::GetPaneList(param_1,param_3,param_4);
  return;
code_r0x100e4163:
  pcVar1 = (code *)**(undefined4 **)local_8;
  guard_check_icall();
  pCVar6 = (CRuntimeClass *)(*pcVar1)();
  pCVar3 = local_10;
  if (pCVar6 == param_3) {
LAB_100e417a:
    CObList::AddTail(param_1,local_8);
    pCVar3 = local_10;
  }
  goto joined_r0x100e413c;
code_r0x100e41ce:
  pcVar1 = (code *)**(undefined4 **)pCVar3;
  guard_check_icall();
  pCVar6 = (CRuntimeClass *)(*pcVar1)();
  if (pCVar6 == param_3) {
LAB_100e41e1:
    CObList::AddTail(param_1,pCVar3);
  }
  goto joined_r0x100e40e5;
}

