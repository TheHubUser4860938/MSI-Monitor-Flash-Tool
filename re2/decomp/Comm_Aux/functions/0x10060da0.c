// rea decompile_all
// name: FUN_10060da0
// address: 0x10060da0
// body: available
// range: 0x10060da0-0x10060e28 inclusive
// non_contiguous: false
// provider: Ghidra 12.1.2 (ghidra)
// analysis_profile: b075844f08879296d957518397cd0ddda73db81dce53d00d3f0e702766fc2af6
// limitations: The session serves operations only after Ghidra reports default auto-analysis complete; incomplete analysis does not expose partial results.; The imported Program and temporary project are ephemeral and deleted on close. Annotation operations edit session database metadata; original executable bytes are never written.; Cancelling an active Ghidra request terminates its ephemeral database and discards session annotations. The selected target remains open; the next provider query imports the original artifact again.; Default-space addresses use lowercase 0x-prefixed hexadecimal; other address spaces use <percent-encoded-space>:0x<hex>.; Ghidra Listing reports a terminal call at 0x10060e24 to 0x1004886a FUN_1004886a (external=false, thunk=false, hasNoReturn=true); fallthrough is excluded by Ghidra's flow model. This records Ghidra's FunctionManager flag, not an independent verification that the callee cannot return.; The Ghidra Program references PDB Comm_Aux.pdb (GUID ba7920cc-daa3-4461-a102-1f8f66c67a2a, age (hex) 1, signature unknown, version RSDS); Ghidra reports load state unknown. Original names and types may be missing; an empty name search does not prove a procedure is absent. Use list_procedures and address-based analysis to inspect recovered functions. REA does not admit a caller-selected PDB companion.; This session uses Ghidra 12.1.2. The bridge is verified against 12.1.4; other 12.1.x builds are accepted and the observed version is reported.; Pseudocode is Ghidra decompiler output, not original source and not text-equivalent to Hopper output.; External functions and functions without an analyzable body return null; other decompiler failures remain explicit.
// pseudocode: provider-specific; not original source


undefined4 FUN_10060da0(undefined4 param_1)

{
  code *pcVar1;
  CNoTrackObject *pCVar2;
  int iVar3;
  int in_ECX;
  
  if (*(int *)(in_ECX + 4) == 0) {
    pCVar2 = CProcessLocalObject::GetData
                       ((CProcessLocalObject *)&DAT_1020de50,
                        CProcessLocal<_AFX_D2D_STATE>::CreateObject);
    if (pCVar2 == (CNoTrackObject *)0x0) {
LAB_10060e24:
                    /* WARNING: Subroutine does not return */
      FUN_1004886a();
    }
    _AFX_D2D_STATE::InitD2D((_AFX_D2D_STATE *)pCVar2,0,0);
    if (*(int *)(pCVar2 + 0xc) != 0) {
      pCVar2 = CProcessLocalObject::GetData
                         ((CProcessLocalObject *)&DAT_1020de50,
                          CProcessLocal<_AFX_D2D_STATE>::CreateObject);
      if (pCVar2 == (CNoTrackObject *)0x0) goto LAB_10060e24;
      _AFX_D2D_STATE::InitD2D((_AFX_D2D_STATE *)pCVar2,0,0);
      pcVar1 = *(code **)(**(int **)(pCVar2 + 0xc) + 0x40);
      guard_check_icall(*(int **)(pCVar2 + 0xc),param_1,(undefined4 *)(in_ECX + 0x28));
      iVar3 = (*pcVar1)();
      if (-1 < iVar3) {
        *(undefined4 *)(in_ECX + 4) = *(undefined4 *)(in_ECX + 0x28);
        return 1;
      }
    }
  }
  return 0;
}

