// rea decompile_all
// name: FUN_0045a928
// address: 0x45a928
// body: available
// range: 0x45a928-0x45acc4 inclusive
// non_contiguous: false
// provider: Ghidra 12.1.2 (ghidra)
// analysis_profile: ac6d50be2cdf54f7005df47d1ed7e7ef55dee595681eb1b7c2e0b00d70cd697d
// limitations: The session serves operations only after Ghidra reports default auto-analysis complete; incomplete analysis does not expose partial results.; The imported Program and temporary project are ephemeral and deleted on close. Annotation operations edit session database metadata; original executable bytes are never written.; Cancelling an active Ghidra request terminates its ephemeral database and discards session annotations. The selected target remains open; the next provider query imports the original artifact again.; Default-space addresses use lowercase 0x-prefixed hexadecimal; other address spaces use <percent-encoded-space>:0x<hex>.; Ghidra Listing reports a terminal call at 0x45acc0 to 0x429127 FUN_00429127 (external=false, thunk=false, hasNoReturn=true); fallthrough is excluded by Ghidra's flow model. This records Ghidra's FunctionManager flag, not an independent verification that the callee cannot return.; The Ghidra Program references PDB ISPToolForMsi.pdb (GUID b8f2ac8f-1d6f-438d-800f-ed4a14426ac6, age (hex) 1, signature unknown, version RSDS); Ghidra reports load state unknown. Original names and types may be missing; an empty name search does not prove a procedure is absent. Use list_procedures and address-based analysis to inspect recovered functions. REA does not admit a caller-selected PDB companion.; This session uses Ghidra 12.1.2. The bridge is verified against 12.1.4; other 12.1.x builds are accepted and the observed version is reported.; Pseudocode is Ghidra decompiler output, not original source and not text-equivalent to Hopper output.; External functions and functions without an analyzable body return null; other decompiler failures remain explicit.
// pseudocode: provider-specific; not original source


/* WARNING: Function: __EH_prolog3_GS replaced with injection: EH_prolog3 */

void FUN_0045a928(int param_1)

{
  code *pcVar1;
  CObject *pCVar2;
  undefined4 *puVar3;
  CObject *pCVar4;
  int iVar5;
  undefined4 uVar6;
  int *in_ECX;
  int iVar7;
  int local_100;
  CObject *local_fc;
  int local_f8;
  CMFCToolBarButton local_f4 [112];
  CMFCToolBarButton local_84 [124];
  undefined4 local_8;
  undefined4 uStack_4;
  
  uStack_4 = 0xf8;
  local_8 = 0x45a937;
  in_ECX[0x2e4] = 0;
  local_f8 = *(int *)(param_1 + 4);
joined_r0x0045a94e:
  if (local_f8 != 0) {
    pCVar2 = (CObject *)FUN_0043410a(&local_f8);
    local_fc = AfxDynamicDownCast((CRuntimeClass *)&PTR_s_CMFCToolBarButton_0060c8f8,pCVar2);
    if (local_fc != (CObject *)0x0) {
      local_100 = in_ECX[0x317];
      pCVar2 = local_fc;
      do {
        do {
          if (local_100 == 0) {
            in_ECX[0x2e4] = 1;
            iVar5 = FUN_00451789(*(undefined4 *)(pCVar2 + 0x20),0);
            if (-1 < iVar5) {
              pcVar1 = *(code **)(*in_ECX + 0x34c);
              guard_check_icall(iVar5);
              (*pcVar1)();
              if (in_ECX[0x2f2] != 0) {
                FUN_004589b2(*(undefined4 *)(local_fc + 0x20));
              }
            }
            goto joined_r0x0045a94e;
          }
          puVar3 = (undefined4 *)FUN_004ead48(&local_100);
          pCVar4 = AfxDynamicDownCast((CRuntimeClass *)&PTR_s_CMFCToolBarButton_0060c8f8,
                                      (CObject *)*puVar3);
        } while (pCVar4 == (CObject *)0x0);
        pcVar1 = *(code **)(*(int *)pCVar4 + 0x94);
        guard_check_icall(pCVar2);
        iVar5 = (*pcVar1)();
        pCVar2 = local_fc;
      } while (iVar5 == 0);
    }
    goto joined_r0x0045a94e;
  }
  local_fc = (CObject *)in_ECX[0x317];
  local_100 = 0;
  local_f8 = 0;
  while (local_fc != (CObject *)0x0) {
    puVar3 = (undefined4 *)FUN_004ead48(&local_fc);
    pCVar2 = AfxDynamicDownCast((CRuntimeClass *)&PTR_s_CMFCToolBarButton_0060c8f8,
                                (CObject *)*puVar3);
    if (pCVar2 != (CObject *)0x0) {
      local_f8 = *(int *)(param_1 + 4);
      do {
        do {
          if (local_f8 == 0) {
            in_ECX[0x2e4] = 1;
            iVar5 = *(int *)(pCVar2 + 0x20);
            iVar7 = in_ECX[0x312];
            if (local_100 <= in_ECX[0x312]) {
              iVar7 = local_100;
            }
            if (iVar5 == 0) {
              pcVar1 = *(code **)(*in_ECX + 0x348);
              guard_check_icall(iVar7);
              (*pcVar1)();
            }
            else {
              local_f8 = -1;
              CMap<int,int,int,int>::Lookup
                        ((CMap<int,int,int,int> *)&PTR_vftable_0060c4fc,iVar5,&local_f8);
              uVar6 = CMFCToolBarButton(iVar5,local_f8,0,0,in_ECX[0x2de]);
              local_8 = 0;
              pcVar1 = *(code **)(*in_ECX + 0x344);
              guard_check_icall(uVar6,iVar7);
              (*pcVar1)();
              local_8 = 0xffffffff;
              CMFCToolBarButton::~CMFCToolBarButton(local_84);
              if (in_ECX[0x2f2] != 0) {
                uVar6 = CMFCToolBarButton(iVar5,local_f8,0,0,in_ECX[0x2de]);
                local_8 = 1;
                FUN_0045380b(uVar6,iVar7);
                local_8 = 0xffffffff;
                CMFCToolBarButton::~CMFCToolBarButton(local_f4);
              }
            }
            goto LAB_0045abe0;
          }
          pCVar4 = (CObject *)FUN_0043410a(&local_f8);
          pCVar4 = AfxDynamicDownCast((CRuntimeClass *)&PTR_s_CMFCToolBarButton_0060c8f8,pCVar4);
        } while (pCVar4 == (CObject *)0x0);
        pcVar1 = *(code **)(*(int *)pCVar2 + 0x94);
        guard_check_icall(pCVar4);
        iVar5 = (*pcVar1)();
      } while (iVar5 == 0);
    }
LAB_0045abe0:
    local_100 = local_100 + 1;
  }
  local_fc = (CObject *)0x0;
  if (*(int *)(param_1 + 0xc) == in_ECX[0x319]) {
    local_fc = (CObject *)in_ECX[0x317];
    local_f8 = *(int *)(param_1 + 4);
    do {
      do {
        if (local_fc == (CObject *)0x0) goto LAB_0045ac0e;
        if (local_f8 == 0) {
                    /* WARNING: Subroutine does not return */
          FUN_00429127();
        }
        puVar3 = (undefined4 *)FUN_004ead48(&local_fc);
        pCVar2 = AfxDynamicDownCast((CRuntimeClass *)&PTR_s_CMFCToolBarButton_0060c8f8,
                                    (CObject *)*puVar3);
        pCVar4 = (CObject *)FUN_0043410a(&local_f8);
        pCVar4 = AfxDynamicDownCast((CRuntimeClass *)&PTR_s_CMFCToolBarButton_0060c8f8,pCVar4);
      } while ((pCVar2 == (CObject *)0x0) || (pCVar4 == (CObject *)0x0));
      pcVar1 = *(code **)(*(int *)pCVar2 + 0x94);
      guard_check_icall(pCVar4);
      iVar5 = (*pcVar1)();
    } while (iVar5 != 0);
  }
  in_ECX[0x2e4] = 1;
LAB_0045ac0e:
  FUN_0055bae6();
  return;
}

