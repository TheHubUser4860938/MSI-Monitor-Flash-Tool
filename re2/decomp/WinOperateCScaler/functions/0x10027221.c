// rea decompile_all
// name: AfxRegisterWndClass
// address: 0x10027221
// body: available
// range: 0x10027221-0x10027326 inclusive
// non_contiguous: false
// provider: Ghidra 12.1.2 (ghidra)
// analysis_profile: b075844f08879296d957518397cd0ddda73db81dce53d00d3f0e702766fc2af6
// limitations: The session serves operations only after Ghidra reports default auto-analysis complete; incomplete analysis does not expose partial results.; The imported Program and temporary project are ephemeral and deleted on close. Annotation operations edit session database metadata; original executable bytes are never written.; Cancelling an active Ghidra request terminates its ephemeral database and discards session annotations. The selected target remains open; the next provider query imports the original artifact again.; Default-space addresses use lowercase 0x-prefixed hexadecimal; other address spaces use <percent-encoded-space>:0x<hex>.; The Ghidra Program references PDB WinOperateCScaler.pdb (GUID a6737962-efea-4805-8ae6-1fc1ef126554, age (hex) 1, signature unknown, version RSDS); Ghidra reports load state unknown. Original names and types may be missing; an empty name search does not prove a procedure is absent. Use list_procedures and address-based analysis to inspect recovered functions. REA does not admit a caller-selected PDB companion.; This session uses Ghidra 12.1.2. The bridge is verified against 12.1.4; other 12.1.x builds are accepted and the observed version is reported.; Pseudocode is Ghidra decompiler output, not original source and not text-equivalent to Hopper output.; External functions and functions without an analyzable body return null; other decompiler failures remain explicit.
// pseudocode: provider-specific; not original source


/* Library Function - Multiple Matches With Same Base Name
    char const * __stdcall AfxRegisterWndClass(unsigned int,struct HICON__ *,struct HBRUSH__
   *,struct HICON__ *)
    wchar_t const * __stdcall AfxRegisterWndClass(unsigned int,struct HICON__ *,struct HBRUSH__
   *,struct HICON__ *)
   
   Library: Visual Studio 2015 Release */

_AFX_THREAD_STATE * AfxRegisterWndClass(UINT param_1,HCURSOR param_2,HBRUSH param_3,HICON param_4)

{
  HINSTANCE hInstance;
  _AFX_THREAD_STATE *p_Var1;
  AFX_MODULE_STATE *pAVar2;
  int *piVar3;
  BOOL BVar4;
  int iVar5;
  tagWNDCLASSW local_30;
  int local_8;
  
  p_Var1 = AfxGetThreadState();
  p_Var1 = p_Var1 + 0x7c;
  pAVar2 = AfxGetModuleState();
  hInstance = *(HINSTANCE *)(pAVar2 + 8);
  if (((param_2 == (HCURSOR)0x0) && (param_3 == (HBRUSH)0x0)) && (param_4 == (HICON)0x0)) {
    piVar3 = __errno();
    local_8 = *piVar3;
    piVar3 = __errno();
    *piVar3 = 0;
    __snwprintf_s((wchar_t *)p_Var1,0x60,0x5f,L"Afx:%p:%x",hInstance,param_1);
  }
  else {
    piVar3 = __errno();
    local_8 = *piVar3;
    piVar3 = __errno();
    *piVar3 = 0;
    __snwprintf_s((wchar_t *)p_Var1,0x60,0x5f,L"Afx:%p:%x:%p:%p:%p",hInstance,param_1,param_2,
                  param_3,param_4);
  }
  piVar3 = __errno();
  if (*piVar3 == 0) {
    piVar3 = __errno();
    *piVar3 = local_8;
  }
  else {
    piVar3 = __errno();
    FUN_1001d71c(*piVar3);
  }
  BVar4 = GetClassInfoW(hInstance,(LPCWSTR)p_Var1,&local_30);
  if (BVar4 == 0) {
    local_30.style = param_1;
    local_30.lpfnWndProc = DefWindowProcW_exref;
    local_30.hIcon = param_4;
    local_30.hCursor = param_2;
    local_30.hbrBackground = param_3;
    local_30.cbWndExtra = 0;
    local_30.cbClsExtra = 0;
    local_30.lpszMenuName = (LPCWSTR)0x0;
    local_30.hInstance = hInstance;
    local_30.lpszClassName = (LPCWSTR)p_Var1;
    iVar5 = AfxRegisterClass((tagWNDCLASSA *)&local_30);
    if (iVar5 == 0) {
      FUN_10033663();
    }
  }
  return p_Var1;
}

