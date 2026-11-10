// rea decompile_all
// name: FUN_0043a038
// address: 0x43a038
// body: available
// range: 0x43a038-0x43a0c0 inclusive
// non_contiguous: false
// provider: Ghidra 12.1.2 (ghidra)
// analysis_profile: ac6d50be2cdf54f7005df47d1ed7e7ef55dee595681eb1b7c2e0b00d70cd697d
// limitations: The session serves operations only after Ghidra reports default auto-analysis complete; incomplete analysis does not expose partial results.; The imported Program and temporary project are ephemeral and deleted on close. Annotation operations edit session database metadata; original executable bytes are never written.; Cancelling an active Ghidra request terminates its ephemeral database and discards session annotations. The selected target remains open; the next provider query imports the original artifact again.; Default-space addresses use lowercase 0x-prefixed hexadecimal; other address spaces use <percent-encoded-space>:0x<hex>.; Ghidra Listing reports a terminal call at 0x43a0bc to 0x429127 FUN_00429127 (external=false, thunk=false, hasNoReturn=true); fallthrough is excluded by Ghidra's flow model. This records Ghidra's FunctionManager flag, not an independent verification that the callee cannot return.; The Ghidra Program references PDB ISPToolForMsi.pdb (GUID b8f2ac8f-1d6f-438d-800f-ed4a14426ac6, age (hex) 1, signature unknown, version RSDS); Ghidra reports load state unknown. Original names and types may be missing; an empty name search does not prove a procedure is absent. Use list_procedures and address-based analysis to inspect recovered functions. REA does not admit a caller-selected PDB companion.; This session uses Ghidra 12.1.2. The bridge is verified against 12.1.4; other 12.1.x builds are accepted and the observed version is reported.; Pseudocode is Ghidra decompiler output, not original source and not text-equivalent to Hopper output.; External functions and functions without an analyzable body return null; other decompiler failures remain explicit.
// pseudocode: provider-specific; not original source


undefined4 FUN_0043a038(undefined4 param_1)

{
  code *pcVar1;
  CNoTrackObject *pCVar2;
  int iVar3;
  int in_ECX;
  
  if (*(int *)(in_ECX + 4) == 0) {
    pCVar2 = CProcessLocalObject::GetData
                       ((CProcessLocalObject *)&DAT_00614d60,
                        CProcessLocal<_AFX_D2D_STATE>::CreateObject);
    if (pCVar2 == (CNoTrackObject *)0x0) {
LAB_0043a0bc:
                    /* WARNING: Subroutine does not return */
      FUN_00429127();
    }
    _AFX_D2D_STATE::InitD2D((_AFX_D2D_STATE *)pCVar2,0,0);
    if (*(int *)(pCVar2 + 0xc) != 0) {
      pCVar2 = CProcessLocalObject::GetData
                         ((CProcessLocalObject *)&DAT_00614d60,
                          CProcessLocal<_AFX_D2D_STATE>::CreateObject);
      if (pCVar2 == (CNoTrackObject *)0x0) goto LAB_0043a0bc;
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

