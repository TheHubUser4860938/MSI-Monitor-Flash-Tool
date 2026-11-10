// rea decompile_all
// name: CWinApp::CWinApp
// address: 0x416517
// body: available
// range: 0x416517-0x41666e inclusive
// non_contiguous: false
// provider: Ghidra 12.1.2 (ghidra)
// analysis_profile: ac6d50be2cdf54f7005df47d1ed7e7ef55dee595681eb1b7c2e0b00d70cd697d
// limitations: The session serves operations only after Ghidra reports default auto-analysis complete; incomplete analysis does not expose partial results.; The imported Program and temporary project are ephemeral and deleted on close. Annotation operations edit session database metadata; original executable bytes are never written.; Cancelling an active Ghidra request terminates its ephemeral database and discards session annotations. The selected target remains open; the next provider query imports the original artifact again.; Default-space addresses use lowercase 0x-prefixed hexadecimal; other address spaces use <percent-encoded-space>:0x<hex>.; Ghidra Listing reports a terminal call at 0x416565 to 0x429127 FUN_00429127 (external=false, thunk=false, hasNoReturn=true); fallthrough is excluded by Ghidra's flow model. This records Ghidra's FunctionManager flag, not an independent verification that the callee cannot return.; The Ghidra Program references PDB ISPToolForMsi.pdb (GUID b8f2ac8f-1d6f-438d-800f-ed4a14426ac6, age (hex) 1, signature unknown, version RSDS); Ghidra reports load state unknown. Original names and types may be missing; an empty name search does not prove a procedure is absent. Use list_procedures and address-based analysis to inspect recovered functions. REA does not admit a caller-selected PDB companion.; This session uses Ghidra 12.1.2. The bridge is verified against 12.1.4; other 12.1.x builds are accepted and the observed version is reported.; Pseudocode is Ghidra decompiler output, not original source and not text-equivalent to Hopper output.; External functions and functions without an analyzable body return null; other decompiler failures remain explicit.
// pseudocode: provider-specific; not original source


/* WARNING: Function: __EH_prolog3_GS replaced with injection: EH_prolog3 */
/* Library Function - Single Match
    public: __thiscall CWinApp::CWinApp(wchar_t const *)
   
   Library: Visual Studio 2015 Release */

void __thiscall CWinApp::CWinApp(CWinApp *this,wchar_t *param_1)

{
  undefined4 uVar1;
  AFX_MODULE_STATE *pAVar2;
  CNoTrackObject *pCVar3;
  HANDLE pvVar4;
  DWORD DVar5;
  _OSVERSIONINFOW local_128;
  undefined4 local_8;
  undefined4 uStack_4;
  
  uStack_4 = 0x120;
  local_8 = 0x416526;
  CWinThread::CWinThread((CWinThread *)this);
  *(undefined ***)this = vftable;
  local_8 = 0;
  if (param_1 == (wchar_t *)0x0) {
    *(undefined4 *)(this + 0x50) = 0;
  }
  else {
    uVar1 = FUN_0057e523(param_1);
    *(undefined4 *)(this + 0x50) = uVar1;
  }
  pAVar2 = AfxGetModuleState();
  if ((pAVar2 != (AFX_MODULE_STATE *)0x0) &&
     (pCVar3 = CThreadLocalObject::GetData
                         ((CThreadLocalObject *)(pAVar2 + 0x74),
                          (_func_CNoTrackObject_ptr *)&LAB_00416b83),
     pCVar3 != (CNoTrackObject *)0x0)) {
    *(CWinApp **)(pCVar3 + 4) = this;
    pvVar4 = GetCurrentThread();
    *(HANDLE *)(this + 0x2c) = pvVar4;
    DVar5 = GetCurrentThreadId();
    *(DWORD *)(this + 0x30) = DVar5;
    *(CWinApp **)(pAVar2 + 4) = this;
    *(undefined4 *)(this + 0x98) = 0;
    *(undefined4 *)(this + 0x44) = 0;
    *(undefined4 *)(this + 0x80) = 0;
    *(undefined4 *)(this + 0x68) = 0;
    *(undefined4 *)(this + 0x6c) = 0;
    *(undefined4 *)(this + 0x58) = 0;
    *(undefined4 *)(this + 100) = 0;
    *(undefined4 *)(this + 0x54) = 0;
    *(undefined4 *)(this + 0x8c) = 0;
    *(undefined4 *)(this + 0x5c) = 0;
    *(undefined4 *)(this + 0x48) = 0;
    *(undefined4 *)(this + 0x94) = 0;
    *(undefined4 *)(this + 0x90) = 0;
    *(undefined4 *)(this + 0x84) = 0;
    *(undefined4 *)(this + 0x88) = 0;
    *(undefined4 *)(this + 0x74) = 0;
    *(undefined4 *)(this + 0x78) = 0;
    *(undefined4 *)(this + 0x9c) = 0;
    *(undefined4 *)(this + 0xa4) = 0;
    *(undefined4 *)(this + 0x60) = 0;
    *(undefined4 *)(this + 0x70) = 0;
    *(undefined4 *)(this + 0xa0) = 0x200;
    *(undefined4 *)(this + 0xac) = 0;
    *(undefined4 *)(this + 0xb0) = 300000;
    *(undefined4 *)(this + 0xb4) = 1;
    local_128.dwOSVersionInfoSize = 0x114;
    GetVersionExW(&local_128);
    if (((local_128.dwMajorVersion == 6) && (local_128.dwMinorVersion != 0)) ||
       (uVar1 = 0, 6 < local_128.dwMajorVersion)) {
      uVar1 = 1;
    }
    *(undefined4 *)(this + 0xb8) = uVar1;
    *(undefined4 *)(this + 0xbc) = 0;
    *(undefined4 *)(this + 0xc4) = 0;
    *(undefined4 *)(this + 200) = 0;
    *(undefined4 *)(this + 0xc0) = 1;
    FUN_0055bae6();
    return;
  }
                    /* WARNING: Subroutine does not return */
  FUN_00429127();
}

