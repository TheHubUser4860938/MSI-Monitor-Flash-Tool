// rea decompile_all
// name: RegisterWindowClass
// address: 0x10046d4d
// body: available
// range: 0x10046d4d-0x10046e0e inclusive
// non_contiguous: false
// provider: Ghidra 12.1.2 (ghidra)
// analysis_profile: b075844f08879296d957518397cd0ddda73db81dce53d00d3f0e702766fc2af6
// limitations: The session serves operations only after Ghidra reports default auto-analysis complete; incomplete analysis does not expose partial results.; The imported Program and temporary project are ephemeral and deleted on close. Annotation operations edit session database metadata; original executable bytes are never written.; Cancelling an active Ghidra request terminates its ephemeral database and discards session annotations. The selected target remains open; the next provider query imports the original artifact again.; Default-space addresses use lowercase 0x-prefixed hexadecimal; other address spaces use <percent-encoded-space>:0x<hex>.; Ghidra Listing reports a terminal call at 0x10046d66 to 0x10012a3f FUN_10012a3f (external=false, thunk=false, hasNoReturn=true); fallthrough is excluded by Ghidra's flow model. This records Ghidra's FunctionManager flag, not an independent verification that the callee cannot return.; The Ghidra Program references PDB Comm.pdb (GUID c3062acb-498d-45fa-a233-c8b7e401bb13, age (hex) 1, signature unknown, version RSDS); Ghidra reports load state unknown. Original names and types may be missing; an empty name search does not prove a procedure is absent. Use list_procedures and address-based analysis to inspect recovered functions. REA does not admit a caller-selected PDB companion.; This session uses Ghidra 12.1.2. The bridge is verified against 12.1.4; other 12.1.x builds are accepted and the observed version is reported.; Pseudocode is Ghidra decompiler output, not original source and not text-equivalent to Hopper output.; External functions and functions without an analyzable body return null; other decompiler failures remain explicit.
// pseudocode: provider-specific; not original source


/* WARNING: Function: __EH_prolog3 replaced with injection: EH_prolog3 */
/* WARNING: Function: __EH_epilog3 replaced with injection: EH_epilog3 */
/* Library Function - Multiple Matches With Same Base Name
    public: class ATL::CStringT<char,class StrTraitMFC<char,class ATL::ChTraitsCRT<char> > >
   __thiscall AFX_GLOBAL_DATA::RegisterWindowClass(char const *)
    public: class ATL::CStringT<wchar_t,class StrTraitMFC<wchar_t,class ATL::ChTraitsCRT<wchar_t> >
   > __thiscall AFX_GLOBAL_DATA::RegisterWindowClass(wchar_t const *)
   
   Library: Visual Studio 2015 Release */

wchar_t * RegisterWindowClass(wchar_t *param_1,int param_2)

{
  HINSTANCE hInstance;
  AFX_MODULE_STATE *pAVar1;
  HCURSOR pHVar2;
  undefined4 uVar3;
  BOOL BVar4;
  int iVar5;
  CStringT<wchar_t,StrTraitMFC<wchar_t,ATL::ChTraitsCRT<wchar_t>_>_> *this;
  tagWNDCLASSW local_3c;
  undefined4 local_14;
  undefined4 local_8;
  undefined4 uStack_4;
  
  uStack_4 = 0x2c;
  local_8 = 0;
  local_14 = 0;
  if (param_2 == 0) {
                    /* WARNING: Subroutine does not return */
    FUN_10012a3f();
  }
  pAVar1 = AfxGetModuleState();
  hInstance = *(HINSTANCE *)(pAVar1 + 8);
  pHVar2 = LoadCursorW((HINSTANCE)0x0,(LPCWSTR)0x7f00);
  uVar3 = FUN_10013071();
  FUN_10003190(uVar3);
  local_8 = 0;
  local_14 = 1;
  ATL::CStringT<wchar_t,StrTraitMFC<wchar_t,ATL::ChTraitsCRT<wchar_t>_>_>::Format
            (this,param_1,L"%Ts:%x:%x:%x:%x",param_2,hInstance,8,pHVar2,0x10);
  BVar4 = GetClassInfoW(hInstance,*(LPCWSTR *)param_1,&local_3c);
  if (BVar4 == 0) {
    local_3c.lpfnWndProc = DefWindowProcW_exref;
    local_3c.cbWndExtra = 0;
    local_3c.cbClsExtra = 0;
    local_3c.hIcon = (HICON)0x0;
    local_3c.lpszMenuName = (LPCWSTR)0x0;
    local_3c.lpszClassName = *(LPCWSTR *)param_1;
    local_3c.style = 8;
    local_3c.hbrBackground = (HBRUSH)0x10;
    local_3c.hInstance = hInstance;
    local_3c.hCursor = pHVar2;
    iVar5 = AfxRegisterClass((tagWNDCLASSA *)&local_3c);
    if (iVar5 == 0) {
      FUN_100281a3();
    }
  }
  return param_1;
}

