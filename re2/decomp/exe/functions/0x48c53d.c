// rea decompile_all
// name: FUN_0048c53d
// address: 0x48c53d
// body: available
// range: 0x48c53d-0x48c5e8 inclusive
// non_contiguous: false
// provider: Ghidra 12.1.2 (ghidra)
// analysis_profile: ac6d50be2cdf54f7005df47d1ed7e7ef55dee595681eb1b7c2e0b00d70cd697d
// limitations: The session serves operations only after Ghidra reports default auto-analysis complete; incomplete analysis does not expose partial results.; The imported Program and temporary project are ephemeral and deleted on close. Annotation operations edit session database metadata; original executable bytes are never written.; Cancelling an active Ghidra request terminates its ephemeral database and discards session annotations. The selected target remains open; the next provider query imports the original artifact again.; Default-space addresses use lowercase 0x-prefixed hexadecimal; other address spaces use <percent-encoded-space>:0x<hex>.; The Ghidra Program references PDB ISPToolForMsi.pdb (GUID b8f2ac8f-1d6f-438d-800f-ed4a14426ac6, age (hex) 1, signature unknown, version RSDS); Ghidra reports load state unknown. Original names and types may be missing; an empty name search does not prove a procedure is absent. Use list_procedures and address-based analysis to inspect recovered functions. REA does not admit a caller-selected PDB companion.; This session uses Ghidra 12.1.2. The bridge is verified against 12.1.4; other 12.1.x builds are accepted and the observed version is reported.; Pseudocode is Ghidra decompiler output, not original source and not text-equivalent to Hopper output.; External functions and functions without an analyzable body return null; other decompiler failures remain explicit.
// pseudocode: provider-specific; not original source


undefined4 FUN_0048c53d(int param_1)

{
  code *pcVar1;
  CObject *pCVar2;
  CObject *pCVar3;
  int iVar4;
  int in_ECX;
  int local_c;
  int local_8;
  
  if ((*(int *)(in_ECX + 0x20) == *(int *)(param_1 + 0x20)) &&
     (*(int *)(in_ECX + 0x7c) == *(int *)(param_1 + 0x7c))) {
    local_8 = *(int *)(in_ECX + 0x74);
    local_c = *(int *)(param_1 + 0x74);
    do {
      if (local_8 == 0) {
        return 1;
      }
      if (local_c == 0) {
        return 0;
      }
      pCVar2 = (CObject *)FUN_0043410a(&local_8);
      pCVar2 = AfxDynamicDownCast((CRuntimeClass *)&PTR_s_CMFCToolBarMenuButton_0060c6d0,pCVar2);
      if (pCVar2 == (CObject *)0x0) {
        return 0;
      }
      pCVar3 = (CObject *)FUN_0043410a(&local_c);
      pCVar3 = AfxDynamicDownCast((CRuntimeClass *)&PTR_s_CMFCToolBarMenuButton_0060c6d0,pCVar3);
      if (pCVar3 == (CObject *)0x0) {
        return 0;
      }
      pcVar1 = *(code **)(*(int *)pCVar2 + 0x94);
      guard_check_icall(pCVar3);
      iVar4 = (*pcVar1)();
    } while (iVar4 != 0);
  }
  return 0;
}

