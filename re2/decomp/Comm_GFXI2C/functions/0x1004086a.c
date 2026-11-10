// rea decompile_all
// name: AfxInitNetworkAddressControl
// address: 0x1004086a
// body: available
// range: 0x1004086a-0x10040905 inclusive
// non_contiguous: false
// provider: Ghidra 12.1.2 (ghidra)
// analysis_profile: b075844f08879296d957518397cd0ddda73db81dce53d00d3f0e702766fc2af6
// limitations: The session serves operations only after Ghidra reports default auto-analysis complete; incomplete analysis does not expose partial results.; The imported Program and temporary project are ephemeral and deleted on close. Annotation operations edit session database metadata; original executable bytes are never written.; Cancelling an active Ghidra request terminates its ephemeral database and discards session annotations. The selected target remains open; the next provider query imports the original artifact again.; Default-space addresses use lowercase 0x-prefixed hexadecimal; other address spaces use <percent-encoded-space>:0x<hex>.; Ghidra Listing reports a terminal call at 0x1004088b to 0x10038e31 FUN_10038e31 (external=false, thunk=false, hasNoReturn=true); fallthrough is excluded by Ghidra's flow model. This records Ghidra's FunctionManager flag, not an independent verification that the callee cannot return.; The Ghidra Program references PDB Comm_GFXI2C.pdb (GUID d304cc6d-b3ee-4851-b468-0ab5e385ca92, age (hex) 1, signature unknown, version RSDS); Ghidra reports load state unknown. Original names and types may be missing; an empty name search does not prove a procedure is absent. Use list_procedures and address-based analysis to inspect recovered functions. REA does not admit a caller-selected PDB companion.; This session uses Ghidra 12.1.2. The bridge is verified against 12.1.4; other 12.1.x builds are accepted and the observed version is reported.; Pseudocode is Ghidra decompiler output, not original source and not text-equivalent to Hopper output.; External functions and functions without an analyzable body return null; other decompiler failures remain explicit.
// pseudocode: provider-specific; not original source


/* Library Function - Single Match
    int __stdcall AfxInitNetworkAddressControl(void)
   
   Library: Visual Studio 2008 Release */

int AfxInitNetworkAddressControl(void)

{
  AFX_MODULE_STATE *pAVar1;
  BOOL BVar2;
  AFX_MODULE_STATE *pAVar3;
  int iVar4;
  _OSVERSIONINFOW local_11c;
  uint local_8;
  
  local_8 = DAT_10064168 ^ (uint)&stack0xfffffffc;
  pAVar1 = AfxGetModuleState();
  if (pAVar1 == (AFX_MODULE_STATE *)0x0) {
LAB_1004088b:
                    /* WARNING: Subroutine does not return */
    FUN_10038e31();
  }
  if (*(int *)(pAVar1 + 0x88) == 0) {
    _memset(&local_11c,0,0x114);
    local_11c.dwOSVersionInfoSize = 0x114;
    BVar2 = GetVersionExW(&local_11c);
    if (BVar2 == 0) goto LAB_1004088b;
    if (5 < local_11c.dwMajorVersion) {
      pAVar3 = AfxGetModuleState();
      iVar4 = CShellWrapper::_InitNetworkAddressControl
                        (*(CShellWrapper **)(*(int *)(pAVar3 + 0x78) + 8));
      *(int *)(pAVar1 + 0x84) = iVar4;
    }
    *(undefined4 *)(pAVar1 + 0x88) = 1;
  }
  iVar4 = __security_check_cookie(local_8 ^ (uint)&stack0xfffffffc);
  return iVar4;
}

