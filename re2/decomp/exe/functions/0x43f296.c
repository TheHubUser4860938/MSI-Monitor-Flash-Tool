// rea decompile_all
// name: FUN_0043f296
// address: 0x43f296
// body: available
// range: 0x43f296-0x43f47a inclusive
// non_contiguous: false
// provider: Ghidra 12.1.2 (ghidra)
// analysis_profile: ac6d50be2cdf54f7005df47d1ed7e7ef55dee595681eb1b7c2e0b00d70cd697d
// limitations: The session serves operations only after Ghidra reports default auto-analysis complete; incomplete analysis does not expose partial results.; The imported Program and temporary project are ephemeral and deleted on close. Annotation operations edit session database metadata; original executable bytes are never written.; Cancelling an active Ghidra request terminates its ephemeral database and discards session annotations. The selected target remains open; the next provider query imports the original artifact again.; Default-space addresses use lowercase 0x-prefixed hexadecimal; other address spaces use <percent-encoded-space>:0x<hex>.; Ghidra Listing reports a terminal call at 0x43f36e to 0x43f4b1 FUN_0043f4b1 (external=false, thunk=false, hasNoReturn=false); fallthrough is excluded by Ghidra's flow model. The reason for the terminal flow is not established by this observation.; Ghidra Listing reports a terminal call at 0x43f37d to 0x43f4b1 FUN_0043f4b1 (external=false, thunk=false, hasNoReturn=false); fallthrough is excluded by Ghidra's flow model. The reason for the terminal flow is not established by this observation.; Ghidra Listing reports a terminal call at 0x43f3b8 to 0x43f4b1 FUN_0043f4b1 (external=false, thunk=false, hasNoReturn=false); fallthrough is excluded by Ghidra's flow model. The reason for the terminal flow is not established by this observation.; Ghidra Listing reports a terminal call at 0x43f479 to 0x43f4b1 FUN_0043f4b1 (external=false, thunk=false, hasNoReturn=false); fallthrough is excluded by Ghidra's flow model. The reason for the terminal flow is not established by this observation.; The Ghidra Program references PDB ISPToolForMsi.pdb (GUID b8f2ac8f-1d6f-438d-800f-ed4a14426ac6, age (hex) 1, signature unknown, version RSDS); Ghidra reports load state unknown. Original names and types may be missing; an empty name search does not prove a procedure is absent. Use list_procedures and address-based analysis to inspect recovered functions. REA does not admit a caller-selected PDB companion.; This session uses Ghidra 12.1.2. The bridge is verified against 12.1.4; other 12.1.x builds are accepted and the observed version is reported.; Pseudocode is Ghidra decompiler output, not original source and not text-equivalent to Hopper output.; External functions and functions without an analyzable body return null; other decompiler failures remain explicit.
// pseudocode: provider-specific; not original source


/* WARNING: Function: __EH_prolog3_catch replaced with injection: EH_prolog3 */
/* WARNING: Function: __EH_epilog3 replaced with injection: EH_epilog3 */

uint FUN_0043f296(int param_1,int *param_2,int *param_3)

{
  int iVar1;
  code *pcVar2;
  AFX_DISPMAP_ENTRY *pAVar3;
  int iVar4;
  uint uVar5;
  errno_t eVar6;
  tagDISPPARAMS *ptVar7;
  CCmdTarget *in_ECX;
  long lVar8;
  int *piVar9;
  tagVARIANT local_48 [8];
  short local_40;
  void *local_38 [2];
  uint local_30;
  undefined4 local_28;
  uint local_20;
  int local_1c;
  CCmdTarget *local_18;
  undefined4 local_8;
  undefined4 uStack_4;
  
  uStack_4 = 0x38;
  local_8 = 0x43f2a2;
  lVar8 = 0;
  local_20 = 0xffffffff;
  local_18 = in_ECX;
  pAVar3 = (AFX_DISPMAP_ENTRY *)FUN_0043f1fd(in_ECX,param_1,param_2);
  if (pAVar3 == (AFX_DISPMAP_ENTRY *)0x0) {
    return 0;
  }
  if (param_3 != (int *)0x0) {
    *param_3 = (int)local_18;
    if (-1 < *param_2) {
      if (*param_2 < 2) {
        iVar4 = *(int *)(pAVar3 + 0x10);
      }
      else {
        if (*param_2 != 2) goto LAB_0043f2e9;
        iVar4 = *(int *)(pAVar3 + 0x14);
      }
      param_3[1] = iVar4;
    }
LAB_0043f2e9:
    return (uint)(param_3[1] != 0);
  }
  iVar4 = *param_2;
  uVar5 = 0;
  iVar1 = *(int *)(pAVar3 + 0x24);
  local_28 = 0;
  local_8 = 0;
  local_1c = iVar1;
  if (iVar4 != 0) {
    if (iVar4 == 1) {
      pcVar2 = *(code **)(pAVar3 + 0x10);
      piVar9 = &local_1c;
      local_1c = 1;
      if (iVar1 == -1) {
        guard_check_icall(piVar9);
        param_1 = 0x43f3b0;
        (*pcVar2)();
      }
      else {
        guard_check_icall(param_1);
        in_ECX = (CCmdTarget *)0x43f3a4;
        (*pcVar2)();
      }
LAB_0043f3b0:
      uVar5 = FUN_0043f4b1(in_ECX,param_1,piVar9);
      return uVar5;
    }
    if (iVar4 == 2) {
      pcVar2 = *(code **)(pAVar3 + 0x14);
      if (iVar1 == -1) {
        guard_check_icall();
        (*pcVar2)();
        uVar5 = FUN_0043f4b1();
        return uVar5;
      }
      guard_check_icall(param_1);
      (*pcVar2)();
      uVar5 = FUN_0043f4b1();
      return uVar5;
    }
    if (iVar4 == 3) {
      pcVar2 = *(code **)(pAVar3 + 0x10);
      piVar9 = &local_1c;
      local_1c = 1;
      iVar4 = param_2[8];
      in_ECX = (CCmdTarget *)param_2[7];
      if (iVar1 == -1) {
        guard_check_icall(in_ECX,iVar4,piVar9);
        (*pcVar2)();
        param_1 = iVar4;
      }
      else {
        guard_check_icall(param_1);
        (*pcVar2)();
        param_1 = iVar4;
      }
      goto LAB_0043f3b0;
    }
    goto code_r0x0043f4b1;
  }
  FUN_004c8e1e(local_48);
  iVar4 = local_1c;
  local_38[0] = (void *)0x0;
  if (local_1c == -1) {
LAB_0043f447:
    ptVar7 = (tagDISPPARAMS *)param_2[2];
  }
  else {
    eVar6 = _memcpy_s(local_38,0x10,(void *)param_2[2],0x10);
    FUN_00416060(eVar6);
    local_30 = local_30 + 1;
    local_38[0] = (void *)FUN_00416444(-(uint)((int)((ulonglong)local_30 * 0x10 >> 0x20) != 0) |
                                       (uint)((ulonglong)local_30 * 0x10));
    ATL::Checked::memmove_s(local_38[0],local_30 << 4,*(void **)param_2[2],(local_30 - 1) * 0x10);
    *(undefined2 *)((int)local_38[0] + local_30 * 0x10 + -0x10) = 3;
    *(int *)((int)local_38[0] + local_30 * 0x10 + -8) = param_1;
    ptVar7 = (tagDISPPARAMS *)local_38;
    if (iVar4 == -1) goto LAB_0043f447;
  }
  lVar8 = CCmdTarget::CallMemberFunc(local_18,pAVar3,1,local_48,ptVar7,&local_20);
  uVar5 = (uint)local_40;
  if (local_1c != -1) {
    local_18 = (CCmdTarget *)uVar5;
    FID_conflict__free(local_38[0]);
    uVar5 = FUN_0043f4b1();
    return uVar5;
  }
code_r0x0043f4b1:
  if (((lVar8 < 0) && ((uint *)param_2[4] != (uint *)0x0)) && (local_20 != 0xffffffff)) {
    *(uint *)param_2[4] = local_20;
  }
  param_2[6] = lVar8;
  return uVar5;
}

