// rea decompile_all
// name: FUN_004dc0e0
// address: 0x4dc0e0
// body: available
// range: 0x4dc0e0-0x4dc1b3 inclusive
// non_contiguous: false
// provider: Ghidra 12.1.2 (ghidra)
// analysis_profile: ac6d50be2cdf54f7005df47d1ed7e7ef55dee595681eb1b7c2e0b00d70cd697d
// limitations: The session serves operations only after Ghidra reports default auto-analysis complete; incomplete analysis does not expose partial results.; The imported Program and temporary project are ephemeral and deleted on close. Annotation operations edit session database metadata; original executable bytes are never written.; Cancelling an active Ghidra request terminates its ephemeral database and discards session annotations. The selected target remains open; the next provider query imports the original artifact again.; Default-space addresses use lowercase 0x-prefixed hexadecimal; other address spaces use <percent-encoded-space>:0x<hex>.; Ghidra Listing reports a terminal call at 0x4dc1af to 0x429127 FUN_00429127 (external=false, thunk=false, hasNoReturn=true); fallthrough is excluded by Ghidra's flow model. This records Ghidra's FunctionManager flag, not an independent verification that the callee cannot return.; The Ghidra Program references PDB ISPToolForMsi.pdb (GUID b8f2ac8f-1d6f-438d-800f-ed4a14426ac6, age (hex) 1, signature unknown, version RSDS); Ghidra reports load state unknown. Original names and types may be missing; an empty name search does not prove a procedure is absent. Use list_procedures and address-based analysis to inspect recovered functions. REA does not admit a caller-selected PDB companion.; This session uses Ghidra 12.1.2. The bridge is verified against 12.1.4; other 12.1.x builds are accepted and the observed version is reported.; Pseudocode is Ghidra decompiler output, not original source and not text-equivalent to Hopper output.; External functions and functions without an analyzable body return null; other decompiler failures remain explicit.
// pseudocode: provider-specific; not original source


/* WARNING: Function: __EH_prolog3 replaced with injection: EH_prolog3 */
/* WARNING: Function: __EH_epilog3 replaced with injection: EH_epilog3 */

undefined4 FUN_004dc0e0(CObject *param_1,CPaneContainerManager *param_2)

{
  undefined4 *puVar1;
  code *pcVar2;
  int iVar3;
  __POSITION *p_Var4;
  int *in_ECX;
  undefined4 uVar5;
  undefined4 *puVar6;
  CObject *pCVar7;
  CObList local_38 [4];
  undefined4 *local_34;
  undefined4 local_1c;
  CObject *local_18;
  CObject *local_14 [3];
  undefined4 local_8;
  undefined4 uStack_4;
  
  uStack_4 = 0x28;
  local_8 = 0x4dc0ec;
  CObList::CObList(local_38,10);
  uVar5 = 0;
  local_8 = 0;
  CPaneContainerManager::AddPanesToList(param_2,local_38,(CObList *)0x0);
  local_1c = 0;
  pcVar2 = *(code **)(*in_ECX + 0x8c);
  guard_check_icall(param_1,&local_1c);
  iVar3 = (*pcVar2)();
  if ((iVar3 != 0) &&
     (p_Var4 = CObList::Find((CObList *)(in_ECX + 1),param_1,(__POSITION *)0x0),
     p_Var4 != (__POSITION *)0x0)) {
    local_14[0] = AfxDynamicDownCast((CRuntimeClass *)&PTR_s_CBaseTabbedPane_005c7aa4,param_1);
    uVar5 = 1;
    puVar6 = local_34;
    while (puVar6 != (undefined4 *)0x0) {
      if (puVar6 == (undefined4 *)0x0) {
                    /* WARNING: Subroutine does not return */
        FUN_00429127();
      }
      puVar1 = puVar6 + 2;
      puVar6 = (undefined4 *)*puVar6;
      local_18 = AfxDynamicDownCast((CRuntimeClass *)&PTR_s_CDockablePane_0060c780,
                                    (CObject *)*puVar1);
      if (local_18 != (CObject *)0x0) {
        pcVar2 = *(code **)(*(int *)local_18 + 0x34c);
        pCVar7 = local_14[0];
        if (local_14[0] == (CObject *)0x0) {
          pCVar7 = param_1;
        }
        guard_check_icall(pCVar7,1,1,local_14);
        (*pcVar2)();
      }
    }
  }
  CObList::~CObList(local_38);
  return uVar5;
}

