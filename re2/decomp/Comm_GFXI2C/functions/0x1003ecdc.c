// rea decompile_all
// name: FID_conflict:AfxCtxCreateWindowExW
// address: 0x1003ecdc
// body: available
// range: 0x1003ecdc-0x1003ed53 inclusive
// non_contiguous: false
// provider: Ghidra 12.1.2 (ghidra)
// analysis_profile: b075844f08879296d957518397cd0ddda73db81dce53d00d3f0e702766fc2af6
// limitations: The session serves operations only after Ghidra reports default auto-analysis complete; incomplete analysis does not expose partial results.; The imported Program and temporary project are ephemeral and deleted on close. Annotation operations edit session database metadata; original executable bytes are never written.; Cancelling an active Ghidra request terminates its ephemeral database and discards session annotations. The selected target remains open; the next provider query imports the original artifact again.; Default-space addresses use lowercase 0x-prefixed hexadecimal; other address spaces use <percent-encoded-space>:0x<hex>.; The Ghidra Program references PDB Comm_GFXI2C.pdb (GUID d304cc6d-b3ee-4851-b468-0ab5e385ca92, age (hex) 1, signature unknown, version RSDS); Ghidra reports load state unknown. Original names and types may be missing; an empty name search does not prove a procedure is absent. Use list_procedures and address-based analysis to inspect recovered functions. REA does not admit a caller-selected PDB companion.; This session uses Ghidra 12.1.2. The bridge is verified against 12.1.4; other 12.1.x builds are accepted and the observed version is reported.; Pseudocode is Ghidra decompiler output, not original source and not text-equivalent to Hopper output.; External functions and functions without an analyzable body return null; other decompiler failures remain explicit.
// pseudocode: provider-specific; not original source


/* WARNING: Function: __SEH_prolog4 replaced with injection: SEH_prolog4 */
/* WARNING: Function: __SEH_epilog4 replaced with injection: EH_epilog3 */
/* Library Function - Multiple Matches With Different Base Names
    struct HWND__ * __cdecl AfxCtxCreateWindowExA(unsigned long,char const *,char const *,unsigned
   long,int,int,int,int,struct HWND__ *,struct HMENU__ *,struct HINSTANCE__ *,void *)
    struct HWND__ * __cdecl AfxCtxCreateWindowExW(unsigned long,wchar_t const *,wchar_t const
   *,unsigned long,int,int,int,int,struct HWND__ *,struct HMENU__ *,struct HINSTANCE__ *,void *)
   
   Library: Visual Studio 2008 Release */

HWND __cdecl
FID_conflict_AfxCtxCreateWindowExW
          (DWORD param_1,LPCWSTR param_2,LPCWSTR param_3,DWORD param_4,int param_5,int param_6,
          int param_7,int param_8,HWND param_9,HMENU param_10,HINSTANCE param_11,LPVOID param_12)

{
  AFX_MODULE_STATE *pAVar1;
  eActCtxResult eVar2;
  ulong *puVar3;
  ulong local_24;
  HWND local_20;
  undefined4 uStack_c;
  undefined *local_8;
  
  local_8 = &DAT_1005ffa8;
  uStack_c = 0x1003ece8;
  local_24 = 0;
  puVar3 = &local_24;
  pAVar1 = AfxGetModuleState();
  eVar2 = AfxActivateActCtxWrapper(*(void **)(pAVar1 + 0x80),puVar3);
  local_20 = (HWND)0x0;
  if (eVar2 == 0) {
    local_20 = (HWND)0x0;
  }
  else {
    local_8 = (undefined *)0x0;
    local_20 = CreateWindowExW(param_1,param_2,param_3,param_4,param_5,param_6,param_7,param_8,
                               param_9,param_10,param_11,param_12);
    local_8 = (undefined *)0xfffffffe;
    FUN_1003ed56();
  }
  return local_20;
}

