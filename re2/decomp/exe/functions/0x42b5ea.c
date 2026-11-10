// rea decompile_all
// name: FUN_0042b5ea
// address: 0x42b5ea
// body: available
// range: 0x42b5ea-0x42b742 inclusive
// non_contiguous: false
// provider: Ghidra 12.1.2 (ghidra)
// analysis_profile: ac6d50be2cdf54f7005df47d1ed7e7ef55dee595681eb1b7c2e0b00d70cd697d
// limitations: The session serves operations only after Ghidra reports default auto-analysis complete; incomplete analysis does not expose partial results.; The imported Program and temporary project are ephemeral and deleted on close. Annotation operations edit session database metadata; original executable bytes are never written.; Cancelling an active Ghidra request terminates its ephemeral database and discards session annotations. The selected target remains open; the next provider query imports the original artifact again.; Default-space addresses use lowercase 0x-prefixed hexadecimal; other address spaces use <percent-encoded-space>:0x<hex>.; Ghidra Listing reports a terminal call at 0x42b73e to 0x429127 FUN_00429127 (external=false, thunk=false, hasNoReturn=true); fallthrough is excluded by Ghidra's flow model. This records Ghidra's FunctionManager flag, not an independent verification that the callee cannot return.; The Ghidra Program references PDB ISPToolForMsi.pdb (GUID b8f2ac8f-1d6f-438d-800f-ed4a14426ac6, age (hex) 1, signature unknown, version RSDS); Ghidra reports load state unknown. Original names and types may be missing; an empty name search does not prove a procedure is absent. Use list_procedures and address-based analysis to inspect recovered functions. REA does not admit a caller-selected PDB companion.; This session uses Ghidra 12.1.2. The bridge is verified against 12.1.4; other 12.1.x builds are accepted and the observed version is reported.; Pseudocode is Ghidra decompiler output, not original source and not text-equivalent to Hopper output.; External functions and functions without an analyzable body return null; other decompiler failures remain explicit.
// pseudocode: provider-specific; not original source


int FUN_0042b5ea(uint param_1,uint param_2,int param_3,undefined4 param_4)

{
  code *pcVar1;
  int iVar2;
  AFX_MODULE_STATE *pAVar3;
  int iVar4;
  undefined4 *puVar5;
  int iVar6;
  int *piVar7;
  AFX_MSGMAP_ENTRY *pAVar8;
  int *in_ECX;
  uint uVar9;
  
  if (param_2 == 0xfffffffe) {
    pAVar3 = AfxGetModuleState();
    if (*(int *)(pAVar3 + 0x3c) != 0) {
      pAVar3 = AfxGetModuleState();
      pcVar1 = *(code **)(**(int **)(pAVar3 + 0x3c) + 4);
      guard_check_icall();
      iVar4 = (*pcVar1)();
      return iVar4;
    }
LAB_0042b73e:
                    /* WARNING: Subroutine does not return */
    FUN_00429127();
  }
  if (param_2 == 0xfffffffd) {
    iVar4 = 0;
    if (param_3 != 0) {
      iVar2 = *(int *)(param_3 + 0x30);
      pcVar1 = *(code **)(*in_ECX + 0x2c);
      guard_check_icall();
      puVar5 = (undefined4 *)(*pcVar1)();
      do {
        if (puVar5 == (undefined4 *)0x0) {
          return iVar4;
        }
        if (iVar4 != 0) {
          return iVar4;
        }
        piVar7 = (int *)puVar5[1];
        uVar9 = piVar7[1];
        while (((uVar9 != 0 && (piVar7[2] != 0)) && (iVar4 == 0))) {
          if (param_1 == uVar9) {
            if (iVar2 == 0) {
              if (*piVar7 == 0) {
LAB_0042b6a8:
                *(int *)(param_3 + 4) = piVar7[2];
                iVar4 = 1;
              }
            }
            else if ((*piVar7 != 0) && (iVar6 = _IsEqualGUID(iVar2,*piVar7), iVar6 != 0))
            goto LAB_0042b6a8;
          }
          uVar9 = piVar7[4];
          piVar7 = piVar7 + 3;
        }
        puVar5 = (undefined4 *)*puVar5;
      } while( true );
    }
    goto LAB_0042b73e;
  }
  uVar9 = param_2;
  if (param_2 != 0xffffffff) {
    uVar9 = param_2 & 0xffff;
    param_2 = param_2 >> 0x10;
    if (param_2 != 0) goto LAB_0042b6e1;
  }
  param_2 = 0x111;
LAB_0042b6e1:
  pcVar1 = *(code **)(*in_ECX + 0x28);
  guard_check_icall();
  piVar7 = (int *)(*pcVar1)();
  while( true ) {
    if (*piVar7 == 0) {
      return 0;
    }
    pAVar8 = AfxFindMessageEntry((AFX_MSGMAP_ENTRY *)piVar7[1],param_2,uVar9,param_1);
    if (pAVar8 != (AFX_MSGMAP_ENTRY *)0x0) break;
    pcVar1 = (code *)*piVar7;
    guard_check_icall();
    piVar7 = (int *)(*pcVar1)();
  }
  iVar4 = FUN_0042b8ce(in_ECX,param_1,uVar9,*(undefined4 *)(pAVar8 + 0x14),param_3,
                       *(undefined4 *)(pAVar8 + 0x10),param_4);
  return iVar4;
}

