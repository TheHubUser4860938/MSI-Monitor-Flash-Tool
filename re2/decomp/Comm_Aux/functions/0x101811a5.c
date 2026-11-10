// rea decompile_all
// name: ___BuildCatchObjectHelper
// address: 0x101811a5
// body: available
// range: 0x101811a5-0x101812be inclusive
// range: 0x101812cb-0x101812d2 inclusive
// non_contiguous: true
// provider: Ghidra 12.1.2 (ghidra)
// analysis_profile: b075844f08879296d957518397cd0ddda73db81dce53d00d3f0e702766fc2af6
// limitations: The session serves operations only after Ghidra reports default auto-analysis complete; incomplete analysis does not expose partial results.; The imported Program and temporary project are ephemeral and deleted on close. Annotation operations edit session database metadata; original executable bytes are never written.; Cancelling an active Ghidra request terminates its ephemeral database and discards session annotations. The selected target remains open; the next provider query imports the original artifact again.; Default-space addresses use lowercase 0x-prefixed hexadecimal; other address spaces use <percent-encoded-space>:0x<hex>.; Ghidra Listing reports a terminal call at 0x10181210 to 0x10193b58 FUN_10193b58 (external=false, thunk=false, hasNoReturn=true); fallthrough is excluded by Ghidra's flow model. This records Ghidra's FunctionManager flag, not an independent verification that the callee cannot return.; The Ghidra Program references PDB Comm_Aux.pdb (GUID ba7920cc-daa3-4461-a102-1f8f66c67a2a, age (hex) 1, signature unknown, version RSDS); Ghidra reports load state unknown. Original names and types may be missing; an empty name search does not prove a procedure is absent. Use list_procedures and address-based analysis to inspect recovered functions. REA does not admit a caller-selected PDB companion.; This session uses Ghidra 12.1.2. The bridge is verified against 12.1.4; other 12.1.x builds are accepted and the observed version is reported.; Pseudocode is Ghidra decompiler output, not original source and not text-equivalent to Hopper output.; External functions and functions without an analyzable body return null; other decompiler failures remain explicit.
// pseudocode: provider-specific; not original source


/* WARNING: Function: __SEH_prolog4 replaced with injection: SEH_prolog4 */
/* WARNING: Function: __SEH_epilog4 replaced with injection: EH_epilog3 */
/* Library Function - Single Match
    ___BuildCatchObjectHelper
   
   Library: Visual Studio 2015 Release */

char ___BuildCatchObjectHelper(int param_1,int *param_2,uint *param_3,byte *param_4)

{
  uint uVar1;
  code *pcVar2;
  int iVar3;
  undefined4 uVar4;
  
  pcVar2 = DAT_10211864;
  if (((param_3[1] == 0) || (*(char *)(param_3[1] + 8) == '\0')) ||
     ((param_3[2] == 0 && (-1 < (int)*param_3)))) {
    return '\0';
  }
  uVar1 = *param_3;
  if (-1 < (int)uVar1) {
    param_2 = (int *)((int)param_2 + param_3[2] + 0xc);
  }
  if ((((char)uVar1 < '\0') && ((*param_4 & 0x10) != 0)) && (DAT_10211864 != (code *)0x0)) {
    guard_check_icall();
    iVar3 = (*pcVar2)();
  }
  else {
    if ((uVar1 & 8) == 0) {
      if ((*param_4 & 1) == 0) {
        if (*(int *)(param_4 + 0x18) == 0) {
          if ((*(int *)(param_1 + 0x18) != 0) && (param_2 != (int *)0x0)) {
            uVar4 = ___AdjustPointer(*(int *)(param_1 + 0x18),param_4 + 8,
                                     *(undefined4 *)(param_4 + 0x14));
            FUN_101800d0(param_2,uVar4);
            return '\0';
          }
        }
        else if ((*(int *)(param_1 + 0x18) != 0) && (param_2 != (int *)0x0)) {
          return ((*param_4 & 4) != 0) + '\x01';
        }
        goto LAB_10181210;
      }
      if ((*(int *)(param_1 + 0x18) == 0) || (param_2 == (int *)0x0)) goto LAB_10181210;
      FUN_101800d0(param_2,*(undefined4 *)(param_1 + 0x18),*(undefined4 *)(param_4 + 0x14));
      if (*(int *)(param_4 + 0x14) != 4) {
        return '\0';
      }
      if (*param_2 == 0) {
        return '\0';
      }
      iVar3 = *param_2;
      goto LAB_10181260;
    }
    iVar3 = *(int *)(param_1 + 0x18);
  }
  if ((iVar3 == 0) || (param_2 == (int *)0x0)) {
LAB_10181210:
                    /* WARNING: Subroutine does not return */
    FUN_10193b58();
  }
  *param_2 = iVar3;
LAB_10181260:
  iVar3 = ___AdjustPointer(iVar3,param_4 + 8);
  *param_2 = iVar3;
  return '\0';
}

