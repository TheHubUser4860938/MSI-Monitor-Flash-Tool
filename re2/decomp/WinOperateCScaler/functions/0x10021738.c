// rea decompile_all
// name: FUN_10021738
// address: 0x10021738
// body: available
// range: 0x10021738-0x1002188f inclusive
// non_contiguous: false
// provider: Ghidra 12.1.2 (ghidra)
// analysis_profile: b075844f08879296d957518397cd0ddda73db81dce53d00d3f0e702766fc2af6
// limitations: The session serves operations only after Ghidra reports default auto-analysis complete; incomplete analysis does not expose partial results.; The imported Program and temporary project are ephemeral and deleted on close. Annotation operations edit session database metadata; original executable bytes are never written.; Cancelling an active Ghidra request terminates its ephemeral database and discards session annotations. The selected target remains open; the next provider query imports the original artifact again.; Default-space addresses use lowercase 0x-prefixed hexadecimal; other address spaces use <percent-encoded-space>:0x<hex>.; Ghidra Listing reports a terminal call at 0x10021786 to 0x1001d023 FUN_1001d023 (external=false, thunk=false, hasNoReturn=true); fallthrough is excluded by Ghidra's flow model. This records Ghidra's FunctionManager flag, not an independent verification that the callee cannot return.; The Ghidra Program references PDB WinOperateCScaler.pdb (GUID a6737962-efea-4805-8ae6-1fc1ef126554, age (hex) 1, signature unknown, version RSDS); Ghidra reports load state unknown. Original names and types may be missing; an empty name search does not prove a procedure is absent. Use list_procedures and address-based analysis to inspect recovered functions. REA does not admit a caller-selected PDB companion.; This session uses Ghidra 12.1.2. The bridge is verified against 12.1.4; other 12.1.x builds are accepted and the observed version is reported.; Pseudocode is Ghidra decompiler output, not original source and not text-equivalent to Hopper output.; External functions and functions without an analyzable body return null; other decompiler failures remain explicit.
// pseudocode: provider-specific; not original source


/* WARNING: Function: __EH_prolog3_GS replaced with injection: EH_prolog3 */

void FUN_10021738(int param_1)

{
  undefined4 uVar1;
  AFX_MODULE_STATE *pAVar2;
  CNoTrackObject *pCVar3;
  HANDLE pvVar4;
  DWORD DVar5;
  undefined4 *in_ECX;
  _OSVERSIONINFOW local_128;
  undefined4 local_8;
  undefined4 uStack_4;
  
  uStack_4 = 0x120;
  local_8 = 0x10021747;
  FUN_10020de4();
  *in_ECX = CWinApp::vftable;
  local_8 = 0;
  if (param_1 == 0) {
    in_ECX[0x14] = 0;
  }
  else {
    uVar1 = FUN_10176382(param_1);
    in_ECX[0x14] = uVar1;
  }
  pAVar2 = AfxGetModuleState();
  if ((pAVar2 != (AFX_MODULE_STATE *)0x0) &&
     (pCVar3 = CThreadLocalObject::GetData((CThreadLocalObject *)(pAVar2 + 0x74),FUN_1002120b),
     pCVar3 != (CNoTrackObject *)0x0)) {
    *(undefined4 **)(pCVar3 + 4) = in_ECX;
    pvVar4 = GetCurrentThread();
    in_ECX[0xb] = pvVar4;
    DVar5 = GetCurrentThreadId();
    in_ECX[0xc] = DVar5;
    *(undefined4 **)(pAVar2 + 4) = in_ECX;
    in_ECX[0x26] = 0;
    in_ECX[0x11] = 0;
    in_ECX[0x20] = 0;
    in_ECX[0x1a] = 0;
    in_ECX[0x1b] = 0;
    in_ECX[0x16] = 0;
    in_ECX[0x19] = 0;
    in_ECX[0x15] = 0;
    in_ECX[0x23] = 0;
    in_ECX[0x17] = 0;
    in_ECX[0x12] = 0;
    in_ECX[0x25] = 0;
    in_ECX[0x24] = 0;
    in_ECX[0x21] = 0;
    in_ECX[0x22] = 0;
    in_ECX[0x1d] = 0;
    in_ECX[0x1e] = 0;
    in_ECX[0x27] = 0;
    in_ECX[0x29] = 0;
    in_ECX[0x18] = 0;
    in_ECX[0x1c] = 0;
    in_ECX[0x28] = 0x200;
    in_ECX[0x2b] = 0;
    in_ECX[0x2c] = 300000;
    in_ECX[0x2d] = 1;
    local_128.dwOSVersionInfoSize = 0x114;
    GetVersionExW(&local_128);
    if (((local_128.dwMajorVersion == 6) && (local_128.dwMinorVersion != 0)) ||
       (uVar1 = 0, 6 < local_128.dwMajorVersion)) {
      uVar1 = 1;
    }
    in_ECX[0x2e] = uVar1;
    in_ECX[0x2f] = 0;
    in_ECX[0x31] = 0;
    in_ECX[0x32] = 0;
    in_ECX[0x30] = 1;
    FUN_10154478();
    return;
  }
                    /* WARNING: Subroutine does not return */
  FUN_1001d023();
}

