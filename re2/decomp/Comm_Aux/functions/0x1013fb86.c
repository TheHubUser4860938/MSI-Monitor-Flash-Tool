// rea decompile_all
// name: FUN_1013fb86
// address: 0x1013fb86
// body: available
// range: 0x1013fb86-0x1013fc96 inclusive
// non_contiguous: false
// provider: Ghidra 12.1.2 (ghidra)
// analysis_profile: b075844f08879296d957518397cd0ddda73db81dce53d00d3f0e702766fc2af6
// limitations: The session serves operations only after Ghidra reports default auto-analysis complete; incomplete analysis does not expose partial results.; The imported Program and temporary project are ephemeral and deleted on close. Annotation operations edit session database metadata; original executable bytes are never written.; Cancelling an active Ghidra request terminates its ephemeral database and discards session annotations. The selected target remains open; the next provider query imports the original artifact again.; Default-space addresses use lowercase 0x-prefixed hexadecimal; other address spaces use <percent-encoded-space>:0x<hex>.; Ghidra Listing reports a terminal call at 0x1013fc92 to 0x1004886a FUN_1004886a (external=false, thunk=false, hasNoReturn=true); fallthrough is excluded by Ghidra's flow model. This records Ghidra's FunctionManager flag, not an independent verification that the callee cannot return.; The Ghidra Program references PDB Comm_Aux.pdb (GUID ba7920cc-daa3-4461-a102-1f8f66c67a2a, age (hex) 1, signature unknown, version RSDS); Ghidra reports load state unknown. Original names and types may be missing; an empty name search does not prove a procedure is absent. Use list_procedures and address-based analysis to inspect recovered functions. REA does not admit a caller-selected PDB companion.; This session uses Ghidra 12.1.2. The bridge is verified against 12.1.4; other 12.1.x builds are accepted and the observed version is reported.; Pseudocode is Ghidra decompiler output, not original source and not text-equivalent to Hopper output.; External functions and functions without an analyzable body return null; other decompiler failures remain explicit.
// pseudocode: provider-specific; not original source


/* WARNING: Function: __EH_prolog3 replaced with injection: EH_prolog3 */
/* WARNING: Function: __EH_epilog3 replaced with injection: EH_epilog3 */

void FUN_1013fb86(undefined4 param_1,int param_2)

{
  code *pcVar1;
  undefined4 *puVar2;
  int iVar3;
  CObject *pCVar4;
  CObject *in_ECX;
  CObList local_30 [4];
  undefined4 *local_2c;
  CObject *local_14 [3];
  undefined4 local_8;
  undefined4 uStack_4;
  
  uStack_4 = 0x20;
  local_8 = 0x1013fb92;
  *(undefined4 *)(in_ECX + 0xe8) = param_1;
  puVar2 = (undefined4 *)FUN_100c5589(*(undefined4 *)(in_ECX + 0x20));
  *puVar2 = param_1;
  iVar3 = *(int *)(in_ECX + 0x6c);
  if ((iVar3 != 0) && (*(int *)(iVar3 + 0x20) != 0)) {
    InvalidateRect(*(HWND *)(iVar3 + 0x20),(RECT *)(in_ECX + 0x54),1);
  }
  if (param_2 != 0) {
    CObList::CObList(local_30,10);
    local_8 = 0;
    iVar3 = FUN_10094980(*(undefined4 *)(in_ECX + 0x20),local_30);
    if (0 < iVar3) {
      while (local_2c != (undefined4 *)0x0) {
        if (local_2c == (undefined4 *)0x0) {
                    /* WARNING: Subroutine does not return */
          FUN_1004886a();
        }
        puVar2 = (undefined4 *)*local_2c;
        local_14[0] = AfxDynamicDownCast((CRuntimeClass *)&PTR_s_CMFCColorMenuButton_1020608c,
                                         (CObject *)local_2c[2]);
        local_2c = puVar2;
        if ((local_14[0] != (CObject *)0x0) && (local_14[0] != in_ECX)) {
          pcVar1 = *(code **)(*(int *)local_14[0] + 0xfc);
          guard_check_icall(param_1,0);
          (*pcVar1)();
        }
      }
    }
    iVar3 = FUN_1009486e();
    local_14[0] = *(CObject **)(iVar3 + 4);
    while (local_14[0] != (CObject *)0x0) {
      pCVar4 = (CObject *)FUN_10094d55(local_14);
      pCVar4 = AfxDynamicDownCast((CRuntimeClass *)&PTR_s_CMFCColorBar_10205c18,pCVar4);
      if ((pCVar4 != (CObject *)0x0) && (*(int *)(pCVar4 + 0xe04) == *(int *)(in_ECX + 0x20))) {
        FUN_100c148a(param_1);
      }
    }
    CObList::~CObList(local_30);
  }
  return;
}

