// rea decompile_all
// name: FUN_004593ee
// address: 0x4593ee
// body: available
// range: 0x4593ee-0x459813 inclusive
// non_contiguous: false
// provider: Ghidra 12.1.2 (ghidra)
// analysis_profile: ac6d50be2cdf54f7005df47d1ed7e7ef55dee595681eb1b7c2e0b00d70cd697d
// limitations: The session serves operations only after Ghidra reports default auto-analysis complete; incomplete analysis does not expose partial results.; The imported Program and temporary project are ephemeral and deleted on close. Annotation operations edit session database metadata; original executable bytes are never written.; Cancelling an active Ghidra request terminates its ephemeral database and discards session annotations. The selected target remains open; the next provider query imports the original artifact again.; Default-space addresses use lowercase 0x-prefixed hexadecimal; other address spaces use <percent-encoded-space>:0x<hex>.; Ghidra Listing reports a terminal call at 0x45942e to 0x429127 FUN_00429127 (external=false, thunk=false, hasNoReturn=true); fallthrough is excluded by Ghidra's flow model. This records Ghidra's FunctionManager flag, not an independent verification that the callee cannot return.; The Ghidra Program references PDB ISPToolForMsi.pdb (GUID b8f2ac8f-1d6f-438d-800f-ed4a14426ac6, age (hex) 1, signature unknown, version RSDS); Ghidra reports load state unknown. Original names and types may be missing; an empty name search does not prove a procedure is absent. Use list_procedures and address-based analysis to inspect recovered functions. REA does not admit a caller-selected PDB companion.; This session uses Ghidra 12.1.2. The bridge is verified against 12.1.4; other 12.1.x builds are accepted and the observed version is reported.; Pseudocode is Ghidra decompiler output, not original source and not text-equivalent to Hopper output.; External functions and functions without an analyzable body return null; other decompiler failures remain explicit.
// pseudocode: provider-specific; not original source


/* WARNING: Function: __EH_prolog3_GS replaced with injection: EH_prolog3 */

void FUN_004593ee(int *param_1,int param_2,int param_3)

{
  code *pcVar1;
  undefined4 *puVar2;
  int iVar3;
  CObject *pCVar4;
  int iVar5;
  undefined4 uVar6;
  HWND pHVar7;
  CWnd *pCVar8;
  int *piVar9;
  int *in_ECX;
  CObject *local_94;
  int *local_90;
  int *local_8c;
  char local_85;
  CMFCToolBarButton local_84 [124];
  undefined4 local_8;
  undefined4 uStack_4;
  
  uStack_4 = 0x94;
  local_8 = 0x4593fd;
  local_8c = (int *)0x0;
  if ((param_1 != (int *)0x0) && (iVar3 = FUN_004c8b6d(param_1,param_2 << 2,0), iVar3 == 0)) {
                    /* WARNING: Subroutine does not return */
    FUN_00429127();
  }
  local_8c = (int *)in_ECX[0x345];
  local_94 = (CObject *)0x0;
  if (local_8c != (int *)0x0) {
    pcVar1 = *(code **)*local_8c;
    guard_check_icall();
    (*pcVar1)();
    pCVar4 = (CObject *)FUN_00439696();
    local_94 = AfxDynamicDownCast((CRuntimeClass *)&PTR_s_CMFCCustomizeButton_0060c918,pCVar4);
    pcVar1 = *(code **)(*(int *)local_94 + 0x14);
    guard_check_icall(in_ECX[0x345]);
    (*pcVar1)();
  }
  pcVar1 = *(code **)(*in_ECX + 0x350);
  guard_check_icall();
  (*pcVar1)();
  while (in_ECX[0x319] != 0) {
    local_8c = (int *)FUN_004d265a();
    if (local_8c != (int *)0x0) {
      pcVar1 = *(code **)(*local_8c + 4);
      guard_check_icall(1);
      (*pcVar1)();
    }
  }
  if (param_1 == (int *)0x0) {
    for (; 0 < param_2; param_2 = param_2 + -1) {
      pcVar1 = *(code **)(*in_ECX + 0x348);
      guard_check_icall(0xffffffff);
      (*pcVar1)();
    }
  }
  else {
    local_90 = (int *)in_ECX[0x301];
    local_8c = local_90;
    if (0 < param_2) {
      do {
        piVar9 = local_90;
        iVar3 = *param_1;
        param_1 = param_1 + 1;
        iVar5 = FUN_00416408(0x70);
        local_8 = 0;
        if (iVar5 == 0) {
          pCVar4 = (CObject *)0x0;
        }
        else {
          pCVar4 = (CObject *)CMFCToolBarButton(iVar3,0xffffffff,0,0,0);
        }
        local_8 = 0xffffffff;
        CObList::AddTail((CObList *)(in_ECX + 0x316),pCVar4);
        if (iVar3 == 0) {
          pcVar1 = *(code **)(*in_ECX + 0x348);
          guard_check_icall(0xffffffff);
          (*pcVar1)();
        }
        else if (param_3 == 0) {
          iVar5 = CMap<int,int,int,int>::Lookup
                            ((CMap<int,int,int,int> *)&PTR_vftable_0060c4fc,iVar3,(int *)&local_8c);
          local_90 = local_8c;
          if (iVar5 != 0) {
            uVar6 = CMFCToolBarButton(iVar3,local_8c,0,0,in_ECX[0x2de]);
            local_8 = 2;
            pcVar1 = *(code **)(*in_ECX + 0x344);
            guard_check_icall(uVar6,0xffffffff);
            (*pcVar1)();
            local_8 = 0xffffffff;
            CMFCToolBarButton::~CMFCToolBarButton(local_84);
          }
        }
        else {
          uVar6 = CMFCToolBarButton(iVar3,piVar9,0,0,in_ECX[0x2de]);
          local_8c = (int *)0x1;
          local_8 = 1;
          pcVar1 = *(code **)(*in_ECX + 0x344);
          guard_check_icall(uVar6,0xffffffff);
          iVar5 = (*pcVar1)();
          if ((iVar5 < 0) || (local_85 = '\x01', in_ECX[0x2de] != 0)) {
            local_85 = '\0';
          }
          local_8 = 0xffffffff;
          CMFCToolBarButton::~CMFCToolBarButton(local_84);
          if (local_85 != '\0') {
            piVar9 = (int *)FUN_00489126(iVar3);
            *piVar9 = (int)local_90;
          }
          local_90 = (int *)((int)local_90 + 1);
          local_8c = local_90;
        }
        param_2 = param_2 + -1;
      } while (param_2 != 0);
    }
    pCVar4 = local_94;
    if (local_94 != (CObject *)0x0) {
      pcVar1 = *(code **)(*in_ECX + 0x340);
      guard_check_icall(local_94,0xffffffff);
      (*pcVar1)();
      in_ECX[0x345] = (int)pCVar4;
    }
    if (in_ECX[8] != 0) {
      pcVar1 = *(code **)(*in_ECX + 0x38c);
      guard_check_icall();
      (*pcVar1)();
      pCVar8 = (CWnd *)in_ECX[0x29];
      if (pCVar8 == (CWnd *)0x0) {
        pHVar7 = GetParent((HWND)in_ECX[8]);
        pCVar8 = CWnd::FromHandle(pHVar7);
        if (pCVar8 == (CWnd *)0x0) goto LAB_00459809;
      }
      SendMessageW(*(HWND *)(pCVar8 + 0x20),DAT_00614f20,in_ECX[0x346],0);
      iVar3 = in_ECX[800];
      while (iVar3 != 0) {
        piVar9 = (int *)FUN_004d265a();
        if (piVar9 != (int *)0x0) {
          pcVar1 = *(code **)(*piVar9 + 4);
          guard_check_icall(1);
          (*pcVar1)();
        }
        iVar3 = in_ECX[800];
      }
      local_94 = (CObject *)in_ECX[0x310];
      while (local_94 != (CObject *)0x0) {
        piVar9 = (int *)FUN_004ead48(&local_94);
        puVar2 = (undefined4 *)*piVar9;
        if ((puVar2 != (undefined4 *)0x0) &&
           (iVar3 = FUN_0043970d(&PTR_s_CMFCToolBarButton_0060c8f8), iVar3 != 0)) {
          pcVar1 = *(code **)*puVar2;
          guard_check_icall();
          (*pcVar1)();
          pCVar4 = (CObject *)FUN_00439696();
          pcVar1 = *(code **)(*(int *)pCVar4 + 0x14);
          guard_check_icall(puVar2);
          (*pcVar1)();
          CObList::AddTail((CObList *)(in_ECX + 0x31d),pCVar4);
        }
      }
    }
  }
LAB_00459809:
  FUN_0055bae6();
  return;
}

