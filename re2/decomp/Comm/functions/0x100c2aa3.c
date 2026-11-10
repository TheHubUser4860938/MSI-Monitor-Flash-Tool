// rea decompile_all
// name: FUN_100c2aa3
// address: 0x100c2aa3
// body: available
// range: 0x100c2aa3-0x100c2ccf inclusive
// non_contiguous: false
// provider: Ghidra 12.1.2 (ghidra)
// analysis_profile: b075844f08879296d957518397cd0ddda73db81dce53d00d3f0e702766fc2af6
// limitations: The session serves operations only after Ghidra reports default auto-analysis complete; incomplete analysis does not expose partial results.; The imported Program and temporary project are ephemeral and deleted on close. Annotation operations edit session database metadata; original executable bytes are never written.; Cancelling an active Ghidra request terminates its ephemeral database and discards session annotations. The selected target remains open; the next provider query imports the original artifact again.; Default-space addresses use lowercase 0x-prefixed hexadecimal; other address spaces use <percent-encoded-space>:0x<hex>.; Ghidra Listing reports a terminal call at 0x100c2ccb to 0x10012a3f FUN_10012a3f (external=false, thunk=false, hasNoReturn=true); fallthrough is excluded by Ghidra's flow model. This records Ghidra's FunctionManager flag, not an independent verification that the callee cannot return.; The Ghidra Program references PDB Comm.pdb (GUID c3062acb-498d-45fa-a233-c8b7e401bb13, age (hex) 1, signature unknown, version RSDS); Ghidra reports load state unknown. Original names and types may be missing; an empty name search does not prove a procedure is absent. Use list_procedures and address-based analysis to inspect recovered functions. REA does not admit a caller-selected PDB companion.; This session uses Ghidra 12.1.2. The bridge is verified against 12.1.4; other 12.1.x builds are accepted and the observed version is reported.; Pseudocode is Ghidra decompiler output, not original source and not text-equivalent to Hopper output.; External functions and functions without an analyzable body return null; other decompiler failures remain explicit.
// pseudocode: provider-specific; not original source


/* WARNING: Function: __EH_prolog3 replaced with injection: EH_prolog3 */
/* WARNING: Function: __EH_epilog3 replaced with injection: EH_epilog3 */

void FUN_100c2aa3(int param_1)

{
  code *pcVar1;
  CObject *pCVar2;
  int *piVar3;
  CObject *pCVar4;
  BOOL BVar5;
  int iVar6;
  int *in_ECX;
  CObject *pCVar7;
  CObList local_3c [4];
  int *local_38;
  HWND local_20;
  int *local_1c;
  CObject *local_18;
  CObject *local_14;
  undefined4 local_8;
  undefined4 uStack_4;
  
  uStack_4 = 0x2c;
  local_8 = 0x100c2aaf;
  pcVar1 = *(code **)(*in_ECX + 0x19c);
  local_1c = in_ECX;
  guard_check_icall();
  pCVar2 = (CObject *)(*pcVar1)();
  local_14 = AfxDynamicDownCast((CRuntimeClass *)&PTR_s_CMDIFrameWndEx_10192540,pCVar2);
  if (local_14 != (CObject *)0x0) {
    local_20 = (HWND)in_ECX[8];
    if (param_1 == 0) {
      CObList::CObList(local_3c,10);
      local_8 = 0;
      pcVar1 = *(code **)(*in_ECX + 0x3a0);
      guard_check_icall();
      piVar3 = (int *)(*pcVar1)();
      local_18 = (CObject *)0x0;
      pcVar1 = *(code **)(*piVar3 + 0x1ac);
      guard_check_icall();
      iVar6 = (*pcVar1)();
      pCVar2 = local_18;
      if (0 < iVar6) {
        do {
          pcVar1 = *(code **)(*piVar3 + 0x27c);
          pCVar7 = pCVar2;
          guard_check_icall(pCVar2);
          iVar6 = (*pcVar1)();
          if (iVar6 != 0) {
            pcVar1 = *(code **)(*piVar3 + 0x1b0);
            guard_check_icall(pCVar2);
            pCVar4 = (CObject *)(*pcVar1)();
            local_18 = AfxDynamicDownCast((CRuntimeClass *)&PTR_s_CDockablePane_101d3b9c,pCVar4);
            if (local_18 != (CObject *)0x0) {
              pcVar1 = *(code **)(*(int *)local_18 + 0x378);
              guard_check_icall();
              (*pcVar1)();
              CObList::AddTail(local_3c,local_18);
            }
          }
          pCVar2 = pCVar2 + 1;
          pcVar1 = *(code **)(*piVar3 + 0x1ac);
          guard_check_icall(pCVar7);
          iVar6 = (*pcVar1)();
          in_ECX = local_1c;
        } while ((int)pCVar2 < iVar6);
      }
      while (local_38 != (int *)0x0) {
        if (local_38 == (int *)0x0) {
                    /* WARNING: Subroutine does not return */
          FUN_10012a3f();
        }
        local_1c = (int *)*local_38;
        iVar6 = local_38[2];
        pcVar1 = *(code **)(*(int *)local_14 + 0x1d4);
        guard_check_icall(iVar6);
        (*pcVar1)();
        pcVar1 = *(code **)(*in_ECX + 0x3c0);
        guard_check_icall(iVar6);
        (*pcVar1)();
        local_38 = local_1c;
      }
      local_8 = 0xffffffff;
      CObList::~CObList(local_3c);
    }
    else {
      pcVar1 = *(code **)(*(int *)in_ECX[0xdc] + 0x210);
      guard_check_icall();
      pCVar2 = (CObject *)(*pcVar1)();
      pCVar2 = AfxDynamicDownCast((CRuntimeClass *)&PTR_s_CDockablePane_101d3b9c,pCVar2);
      if (pCVar2 == (CObject *)0x0) {
        return;
      }
      pcVar1 = *(code **)(*(int *)pCVar2 + 0x378);
      guard_check_icall();
      (*pcVar1)();
      pcVar1 = *(code **)(*(int *)local_14 + 0x1d4);
      guard_check_icall(pCVar2);
      (*pcVar1)();
      pcVar1 = *(code **)(*in_ECX + 0x3c0);
      guard_check_icall(pCVar2);
      (*pcVar1)();
    }
    BVar5 = IsWindow(local_20);
    if (BVar5 != 0) {
      pcVar1 = *(code **)(*in_ECX + 0x3a8);
      guard_check_icall();
      iVar6 = (*pcVar1)();
      if (iVar6 == 0) {
        pcVar1 = *(code **)(*in_ECX + 0x3a4);
        guard_check_icall();
        iVar6 = (*pcVar1)();
        if (0 < iVar6) {
          pcVar1 = *(code **)(*in_ECX + 0x224);
          guard_check_icall(0,0,0);
          (*pcVar1)();
        }
      }
    }
  }
  return;
}

