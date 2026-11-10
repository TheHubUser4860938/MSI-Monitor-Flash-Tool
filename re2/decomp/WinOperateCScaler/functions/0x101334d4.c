// rea decompile_all
// name: FUN_101334d4
// address: 0x101334d4
// body: available
// range: 0x101334d4-0x101335a7 inclusive
// non_contiguous: false
// provider: Ghidra 12.1.2 (ghidra)
// analysis_profile: b075844f08879296d957518397cd0ddda73db81dce53d00d3f0e702766fc2af6
// limitations: The session serves operations only after Ghidra reports default auto-analysis complete; incomplete analysis does not expose partial results.; The imported Program and temporary project are ephemeral and deleted on close. Annotation operations edit session database metadata; original executable bytes are never written.; Cancelling an active Ghidra request terminates its ephemeral database and discards session annotations. The selected target remains open; the next provider query imports the original artifact again.; Default-space addresses use lowercase 0x-prefixed hexadecimal; other address spaces use <percent-encoded-space>:0x<hex>.; Ghidra Listing reports a terminal call at 0x101335a3 to 0x1001d023 FUN_1001d023 (external=false, thunk=false, hasNoReturn=true); fallthrough is excluded by Ghidra's flow model. This records Ghidra's FunctionManager flag, not an independent verification that the callee cannot return.; The Ghidra Program references PDB WinOperateCScaler.pdb (GUID a6737962-efea-4805-8ae6-1fc1ef126554, age (hex) 1, signature unknown, version RSDS); Ghidra reports load state unknown. Original names and types may be missing; an empty name search does not prove a procedure is absent. Use list_procedures and address-based analysis to inspect recovered functions. REA does not admit a caller-selected PDB companion.; This session uses Ghidra 12.1.2. The bridge is verified against 12.1.4; other 12.1.x builds are accepted and the observed version is reported.; Pseudocode is Ghidra decompiler output, not original source and not text-equivalent to Hopper output.; External functions and functions without an analyzable body return null; other decompiler failures remain explicit.
// pseudocode: provider-specific; not original source


/* WARNING: Function: __EH_prolog3 replaced with injection: EH_prolog3 */
/* WARNING: Function: __EH_epilog3 replaced with injection: EH_epilog3 */

undefined4 FUN_101334d4(CObject *param_1,CPaneContainerManager *param_2)

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
  local_8 = 0x101334e0;
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
    local_14[0] = AfxDynamicDownCast((CRuntimeClass *)&PTR_s_CBaseTabbedPane_101bf638,param_1);
    uVar5 = 1;
    puVar6 = local_34;
    while (puVar6 != (undefined4 *)0x0) {
      if (puVar6 == (undefined4 *)0x0) {
                    /* WARNING: Subroutine does not return */
        FUN_1001d023();
      }
      puVar1 = puVar6 + 2;
      puVar6 = (undefined4 *)*puVar6;
      local_18 = AfxDynamicDownCast((CRuntimeClass *)&PTR_s_CDockablePane_10201ba4,
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

